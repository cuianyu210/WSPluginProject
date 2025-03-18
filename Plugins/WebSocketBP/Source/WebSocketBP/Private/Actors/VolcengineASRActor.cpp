#include "Actors/VolcengineASRActor.h"
#include "Async/Async.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "HAL/PlatformTime.h"
#include "Misc/SecureHash.h"
#include "Misc/Paths.h"
#include "Misc/Base64.h"
#include "Misc/CString.h"
#include "Sound/SoundWave.h"

// === 音频捕获线程实现 ===
FAudioCaptureRunnable::FAudioCaptureRunnable(AVolcengineASRActor* InOwner)
    : Thread(nullptr)
    , Owner(InOwner)
    , bStopThread(false)
    , bIsCapturing(false)
{
}

FAudioCaptureRunnable::~FAudioCaptureRunnable()
{
    if (Thread)
    {
        Thread->Kill(true);
        delete Thread;
        Thread = nullptr;
    }
}

bool FAudioCaptureRunnable::Init()
{
    // 音频捕获初始化代码
    // 这里应该初始化音频捕获设备
    // 注意：实际实现需要使用平台特定的音频API，此处简化处理
    bIsCapturing = true;
    return true;
}

uint32 FAudioCaptureRunnable::Run()
{
    // 模拟每100ms捕获音频数据
    const float CaptureInterval = 0.1f;
    
    while (!bStopThread)
    {
        if (bIsCapturing)
        {
            // 模拟捕获一段音频数据
            // 在实际应用中，这应该从麦克风获取实际的音频数据
            TArray<uint8> AudioData;
            AudioData.SetNum(1600); // 模拟16kHz, 16bit, 单声道, 100ms音频数据
            
            // 随机填充一些数据用于测试
            for (int32 i = 0; i < AudioData.Num(); ++i)
            {
                AudioData[i] = static_cast<uint8>(FMath::RandRange(0, 255));
            }
            
            // 在游戏线程中发送数据
            AsyncTask(ENamedThreads::GameThread, [this, AudioData]() {
                if (Owner)
                {
                    Owner->SendAudioData(AudioData);
                }
            });
        }
        
        // 等待指定的间隔
        FPlatformProcess::Sleep(CaptureInterval);
    }
    
    return 0;
}

void FAudioCaptureRunnable::Stop()
{
    bStopThread = true;
    bIsCapturing = false;
}

void FAudioCaptureRunnable::Exit()
{
    // 清理音频捕获资源
}

void FAudioCaptureRunnable::StopCapture()
{
    bIsCapturing = false;
}

// 二进制消息处理辅助类的实现
void FVolcengineBinaryMessageHandler::HandleBinaryMessage(const FWSBinaryMessage& BinaryMessage)
{
    if (Owner)
    {
        Owner->HandleBinaryMessage(BinaryMessage);
    }
}

// === 火山引擎ASR Actor实现 ===
AVolcengineASRActor::AVolcengineASRActor()
    : WebSocketClient(nullptr)
    , AudioCaptureSubsystem(nullptr)
    , AuthMethod(EVolcengineAuthMethod::Token)
    , AudioCaptureRunnable(nullptr)
    , bUseAudioCaptureSubsystem(true)
    , BinaryMessageHandler(nullptr) // 默认使用新的音频捕获子系统
{
    PrimaryActorTick.bCanEverTick = true;
    
    // 默认火山引擎WebSocket URL
    ServerURL = "wss://openspeech.bytedance.com/api/v2/asr";
}

void AVolcengineASRActor::BeginPlay()
{
    Super::BeginPlay();
    
    // 创建二进制消息处理辅助对象
    BinaryMessageHandler = MakeShareable(new FVolcengineBinaryMessageHandler(this));
    
    // 获取WebSocket子系统
    WebSocketClient = GetWorld()->GetSubsystem<UWSClientSubsystem>();
    
    // 获取音频捕获子系统
    AudioCaptureSubsystem = GetWorld()->GetSubsystem<UWSAudioCaptureSubsystem>();
    
    // 绑定WebSocket事件处理程序
    if (WebSocketClient)
    {
        WebSocketClient->OnConnected.AddDynamic(this, &AVolcengineASRActor::HandleConnected);
        WebSocketClient->OnConnectionError.AddDynamic(this, &AVolcengineASRActor::HandleConnectionError);
        WebSocketClient->OnClosed.AddDynamic(this, &AVolcengineASRActor::HandleClosed);
        WebSocketClient->OnMessage.AddDynamic(this, &AVolcengineASRActor::HandleMessage);
        WebSocketClient->OnEvent.AddDynamic(this, &AVolcengineASRActor::HandleEvent);
        // 使用辅助类安全地绑定非动态委托
        WebSocketClient->OnBinaryMessage.AddRaw(BinaryMessageHandler.Get(), &FVolcengineBinaryMessageHandler::HandleBinaryMessage);
    }
    
    // 绑定音频捕获事件
    if (AudioCaptureSubsystem)
    {
        AudioCaptureSubsystem->OnAudioData.AddDynamic(this, &AVolcengineASRActor::HandleAudioData);
        AudioCaptureSubsystem->OnCaptureStarted.AddDynamic(this, &AVolcengineASRActor::HandleAudioCaptureStarted);
        AudioCaptureSubsystem->OnCaptureStopped.AddDynamic(this, &AVolcengineASRActor::HandleAudioCaptureStopped);
        AudioCaptureSubsystem->OnCaptureError.AddDynamic(this, &AVolcengineASRActor::HandleAudioCaptureError);
    }
}

void AVolcengineASRActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    // 停止语音识别
    StopRecognition();
    
    // 解绑WebSocket事件
    if (WebSocketClient)
    {
        WebSocketClient->OnConnected.RemoveDynamic(this, &AVolcengineASRActor::HandleConnected);
        WebSocketClient->OnConnectionError.RemoveDynamic(this, &AVolcengineASRActor::HandleConnectionError);
        WebSocketClient->OnClosed.RemoveDynamic(this, &AVolcengineASRActor::HandleClosed);
        WebSocketClient->OnMessage.RemoveDynamic(this, &AVolcengineASRActor::HandleMessage);
        WebSocketClient->OnEvent.RemoveDynamic(this, &AVolcengineASRActor::HandleEvent);
        
        // 解绑二进制消息处理
        if (BinaryMessageHandler.IsValid())
        {
            WebSocketClient->OnBinaryMessage.RemoveAll(BinaryMessageHandler.Get());
        }
    }
    
    // 解绑音频捕获事件
    if (AudioCaptureSubsystem)
    {
        AudioCaptureSubsystem->OnAudioData.RemoveDynamic(this, &AVolcengineASRActor::HandleAudioData);
        AudioCaptureSubsystem->OnCaptureStarted.RemoveDynamic(this, &AVolcengineASRActor::HandleAudioCaptureStarted);
        AudioCaptureSubsystem->OnCaptureStopped.RemoveDynamic(this, &AVolcengineASRActor::HandleAudioCaptureStopped);
        AudioCaptureSubsystem->OnCaptureError.RemoveDynamic(this, &AVolcengineASRActor::HandleAudioCaptureError);
    }
    
    // 清理二进制消息处理辅助对象
    BinaryMessageHandler.Reset();
    
    Super::EndPlay(EndPlayReason);
}

void AVolcengineASRActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AVolcengineASRActor::ConfigureAuthentication(const FString& InAppID, const FString& InAccessToken, const FString& InAccessSecret)
{
    AppID = InAppID;
    AccessToken = InAccessToken;
    AccessSecret = InAccessSecret;
    
    UE_LOG(LogTemp, Log, TEXT("火山引擎ASR认证已配置: AppID=%s"), *AppID);
}

void AVolcengineASRActor::SetAuthMethod(EVolcengineAuthMethod InAuthMethod)
{
    AuthMethod = InAuthMethod;
    UE_LOG(LogTemp, Log, TEXT("火山引擎ASR鉴权方式已设置为: %s"), 
        (AuthMethod == EVolcengineAuthMethod::Token) ? TEXT("Token鉴权") : TEXT("Signature鉴权"));
}

void AVolcengineASRActor::StartRecognitionFromMicrophone()
{
    // 连接到WebSocket服务器（如果尚未连接）
    if (WebSocketClient == nullptr || !WebSocketClient->IsConnected())
    {
        // 准备鉴权头
        TArray<FWSHttpHeader> Headers;
        
        if (AuthMethod == EVolcengineAuthMethod::Token)
        {
            Headers = PrepareTokenAuthHeaders();
        }
        else
        {
            Headers = PrepareSignatureAuthHeaders();
        }
        
        // 连接到火山引擎WebSocket服务
        WebSocketClient->Connect(ServerURL, Headers);
    }
    else
    {
        // 如果已经连接，则发送初始请求
        SendInitialRequest();
    }
    
    // 根据设置选择音频捕获方式
    if (bUseAudioCaptureSubsystem)
    {
        // 使用新的音频捕获子系统
        if (AudioCaptureSubsystem)
        {
            // 配置音频捕获子系统
            AudioCaptureSubsystem->SetSampleRate(16000); // 16kHz，适合语音识别
            AudioCaptureSubsystem->SetNumChannels(1);    // 单声道
            AudioCaptureSubsystem->SetChunkSize(1600);   // 100ms数据
            
            // 启动音频捕获
            if (!AudioCaptureSubsystem->StartCapturingAudio())
            {
                OnASRError.Broadcast("启动音频捕获失败");
            }
        }
        else
        {
            OnASRError.Broadcast("音频捕获子系统不可用");
        }
    }
    else
    {
        // 使用传统方式
        if (AudioCaptureRunnable == nullptr)
        {
            AudioCaptureRunnable = new FAudioCaptureRunnable(this);
            FRunnableThread* Thread = FRunnableThread::Create(AudioCaptureRunnable, TEXT("AudioCaptureThread"));
            AudioCaptureRunnable->SetThread(Thread);
        }
    }
}

void AVolcengineASRActor::StartRecognitionFromFile(const FString& AudioFilePath)
{
    if (WebSocketClient == nullptr || !WebSocketClient->IsConnected())
    {
        // 准备鉴权头
        TArray<FWSHttpHeader> Headers;
        
        if (AuthMethod == EVolcengineAuthMethod::Token)
        {
            Headers = PrepareTokenAuthHeaders();
        }
        else
        {
            Headers = PrepareSignatureAuthHeaders();
        }
        
        // 连接到火山引擎WebSocket服务
        WebSocketClient->Connect(ServerURL, Headers);
    }
    
    // 处理文件
    if (bUseAudioCaptureSubsystem)
    {
        // 使用新的音频捕获子系统处理文件
        if (AudioCaptureSubsystem)
        {
            if (!AudioCaptureSubsystem->ProcessAudioFile(AudioFilePath))
            {
                OnASRError.Broadcast(FString::Printf(TEXT("处理音频文件失败: %s"), *AudioFilePath));
            }
        }
        else
        {
            OnASRError.Broadcast("音频捕获子系统不可用");
        }
    }
    else
    {
        // 使用传统方式处理文件
        if (!AudioFilePath.IsEmpty() && FPaths::FileExists(AudioFilePath))
        {
            // 读取音频文件
            TArray<uint8> AudioData;
            if (FFileHelper::LoadFileToArray(AudioData, *AudioFilePath))
            {
                // 连接成功后发送数据
                if (WebSocketClient && WebSocketClient->IsConnected())
                {
                    // 发送初始配置
                    SendInitialRequest();
                    
                    // 将音频数据分片发送
                    const int32 ChunkSize = 16000; // 约1秒的16kHz, 16bit, 单声道音频
                    
                    for (int32 Offset = 0; Offset < AudioData.Num(); Offset += ChunkSize)
                    {
                        TArray<uint8> Chunk;
                        int32 Size = FMath::Min(ChunkSize, AudioData.Num() - Offset);
                        Chunk.Append(AudioData.GetData() + Offset, Size);
                        
                        bool bIsLastChunk = (Offset + Size >= AudioData.Num());
                        SendAudioData(Chunk, bIsLastChunk);
                        
                        // 为了模拟实时流式传输，在块之间添加一些延迟
                        FPlatformProcess::Sleep(0.05f);
                    }
                }
                else
                {
                    UE_LOG(LogTemp, Error, TEXT("无法连接到火山引擎ASR服务"));
                    OnASRError.Broadcast("无法连接到火山引擎ASR服务");
                }
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("无法读取音频文件: %s"), *AudioFilePath);
                OnASRError.Broadcast(FString::Printf(TEXT("无法读取音频文件: %s"), *AudioFilePath));
            }
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("音频文件不存在: %s"), *AudioFilePath);
            OnASRError.Broadcast(FString::Printf(TEXT("音频文件不存在: %s"), *AudioFilePath));
        }
    }
}

void AVolcengineASRActor::StopRecognition()
{
    // 停止音频捕获
    if (bUseAudioCaptureSubsystem)
    {
        // 使用新的音频捕获子系统
        if (AudioCaptureSubsystem)
        {
            AudioCaptureSubsystem->StopCapturingAudio();
        }
    }
    else
    {
        // 使用传统方式
        if (AudioCaptureRunnable)
        {
            AudioCaptureRunnable->Stop();
            delete AudioCaptureRunnable;
            AudioCaptureRunnable = nullptr;
        }
    }
    
    // 如果还连接着，发送一个空的最后数据包
    if (WebSocketClient && WebSocketClient->IsConnected())
    {
        TArray<uint8> EmptyData;
        SendAudioData(EmptyData, true);
        
        // 关闭WebSocket连接
        WebSocketClient->Disconnect();
    }
}

void AVolcengineASRActor::SendAudioData(const TArray<uint8>& AudioData, bool bIsLastPacket)
{
    if (!WebSocketClient || !WebSocketClient->IsConnected())
    {
        UE_LOG(LogTemp, Warning, TEXT("WebSocket未连接，无法发送音频数据"));
        return;
    }
    
    // 创建音频数据JSON
    UWSJsonData* JsonData = WebSocketClient->CreateJsonData();
    
    if (AudioData.Num() > 0)
    {
        // 编码音频数据为Base64
        FString Base64Audio = FBase64::Encode(AudioData.GetData(), AudioData.Num());
        JsonData->SetStringField("audio_data", Base64Audio);
    }
    
    // 设置是否是最后一个数据包
    JsonData->SetBoolField("is_end", bIsLastPacket);
    
    // 发送数据
    WebSocketClient->SendJSON("audio", JsonData);
}

void AVolcengineASRActor::HandleConnected(bool bWasSuccessful)
{
    if (bWasSuccessful)
    {
        UE_LOG(LogTemp, Log, TEXT("成功连接到火山引擎ASR服务"));
        
        // 发送初始化配置
        SendInitialRequest();
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("连接到火山引擎ASR服务失败"));
        OnASRError.Broadcast("连接到火山引擎ASR服务失败");
    }
}

void AVolcengineASRActor::HandleConnectionError()
{
    UE_LOG(LogTemp, Error, TEXT("火山引擎ASR服务连接错误"));
    OnASRError.Broadcast("火山引擎ASR服务连接错误");
}

void AVolcengineASRActor::HandleClosed()
{
    UE_LOG(LogTemp, Log, TEXT("火山引擎ASR服务连接关闭"));
    
    // 停止所有捕获
    if (AudioCaptureRunnable)
    {
        AudioCaptureRunnable->StopCapture();
    }
}

void AVolcengineASRActor::HandleMessage(const FString& Message)
{
    UE_LOG(LogTemp, Verbose, TEXT("收到ASR服务消息: %s"), *Message);
    
    // 尝试解析JSON
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Message);
    
    if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
    {
        // 检查是否有识别结果
        if (JsonObject->HasField("recognition_result"))
        {
            FString RecognitionResult = JsonObject->GetStringField("recognition_result");
            if (!RecognitionResult.IsEmpty())
            {
                OnASRResult.Broadcast(RecognitionResult);
                UE_LOG(LogTemp, Log, TEXT("ASR识别结果: %s"), *RecognitionResult);
            }
        }
        
        // 检查是否有错误
        if (JsonObject->HasField("error_code") && JsonObject->HasField("error_message"))
        {
            int32 ErrorCode = JsonObject->GetIntegerField("error_code");
            FString ErrorMessage = JsonObject->GetStringField("error_message");
            
            if (ErrorCode != 0)
            {
                OnASRError.Broadcast(FString::Printf(TEXT("错误 %d: %s"), ErrorCode, *ErrorMessage));
                UE_LOG(LogTemp, Error, TEXT("ASR错误 %d: %s"), ErrorCode, *ErrorMessage);
            }
        }
    }
}

void AVolcengineASRActor::HandleEvent(const FWSEventMessage& EventMessage)
{
    // 进一步处理结构化的事件消息
    UE_LOG(LogTemp, Verbose, TEXT("收到ASR服务事件: %s"), *EventMessage.EventName);
    
    if (EventMessage.EventName == "result")
    {
        FString Result;
        if (EventMessage.JsonData && EventMessage.JsonData->GetStringField("recognition_result", Result))
        {
            if (!Result.IsEmpty())
            {
                OnASRResult.Broadcast(Result);
                UE_LOG(LogTemp, Log, TEXT("ASR识别结果: %s"), *Result);
            }
        }
    }
    else if (EventMessage.EventName == "error")
    {
        FString ErrorMessage;
        if (EventMessage.JsonData && EventMessage.JsonData->GetStringField("error_message", ErrorMessage))
        {
            OnASRError.Broadcast(ErrorMessage);
            UE_LOG(LogTemp, Error, TEXT("ASR错误: %s"), *ErrorMessage);
        }
    }
}

void AVolcengineASRActor::HandleBinaryMessage(const FWSBinaryMessage& BinaryMessage)
{
    // 火山引擎一般不会发送二进制响应，但如果有，可以在这里处理
    UE_LOG(LogTemp, Verbose, TEXT("收到ASR服务二进制消息，大小: %d 字节"), BinaryMessage.GetSize());
    
    // 尝试将二进制数据解析为文本
    FString TextMessage = BinaryMessage.ToString();
    if (!TextMessage.IsEmpty())
    {
        UE_LOG(LogTemp, Verbose, TEXT("二进制消息内容: %s"), *TextMessage);
        
        // 这里可以再调用HandleMessage处理
        HandleMessage(TextMessage);
    }
}

void AVolcengineASRActor::SendInitialRequest()
{
    if (!WebSocketClient || !WebSocketClient->IsConnected())
    {
        UE_LOG(LogTemp, Warning, TEXT("WebSocket未连接，无法发送初始请求"));
        return;
    }
    
    // 创建初始配置JSON
    UWSJsonData* JsonData = WebSocketClient->CreateJsonData();
    
    // 设置必要的配置字段
    JsonData->SetStringField("format", "pcm");        // 音频格式
    JsonData->SetNumberField("sample_rate", 16000);   // 采样率16kHz
    JsonData->SetNumberField("encode_type", 1);       // 1=PCM编码
    JsonData->SetStringField("language", "zh-CN");    // 语言：中文
    JsonData->SetBoolField("enable_intermediate_result", true); // 启用中间结果
    JsonData->SetBoolField("enable_punctuation", true);         // 启用标点符号
    
    // 设置workflow，包含ITN、顺滑、标点
    JsonData->SetStringField("workflow", "audio_in,resample,partition,vad,fe,decode,itn,nlu_ddc,nlu_punctuate");
    
    // 设置识别结果类型
    JsonData->SetStringField("result_type", "multiple");  // 返回所有识别结果
    
    // 发送初始化配置
    WebSocketClient->SendJSON("config", JsonData);
    
    UE_LOG(LogTemp, Log, TEXT("已发送ASR初始配置"));
}

FString AVolcengineASRActor::GetTimestamp() const
{
    // 获取当前UTC时间戳
    FDateTime Now = FDateTime::UtcNow();
    return FString::Printf(TEXT("%lld"), Now.ToUnixTimestamp());
}

FString AVolcengineASRActor::CalculateMD5Signature(const FString& Timestamp) const
{
    // 构建签名字符串：app_id + timestamp + access_token
    FString SignatureStr = AppID + Timestamp + AccessToken;
    
    // 计算MD5签名
    uint8 Digest[20];
    FMD5 MD5Gen;
    MD5Gen.Update((uint8*)TCHAR_TO_ANSI(*SignatureStr), SignatureStr.Len());
    MD5Gen.Final(Digest);
    
    // 将摘要转换为十六进制字符串
    FString HexSignature;
    for (int32 i = 0; i < 16; i++)
    {
        HexSignature += FString::Printf(TEXT("%02x"), Digest[i]);
    }
    
    return HexSignature;
}

FString AVolcengineASRActor::CalculateHMACSHA256Signature(const FString& Data, const FString& Key) const
{
    // 注意：这是一个简化版本，在实际应用中应使用OpenSSL或其他加密库
    // UE4/5没有内置的HMAC-SHA256，需要使用第三方库或平台特定的方法
    
    // 这里简化处理，使用FMD5替代HMAC-SHA256
    uint8 Digest[20];
    FMD5 MD5Gen;
    FString CombinedData = Key + Data;
    MD5Gen.Update((uint8*)TCHAR_TO_ANSI(*CombinedData), CombinedData.Len());
    MD5Gen.Final(Digest);
    
    // 将摘要转换为十六进制字符串
    FString HexSignature;
    for (int32 i = 0; i < 16; i++)
    {
        HexSignature += FString::Printf(TEXT("%02x"), Digest[i]);
    }
    
    UE_LOG(LogTemp, Warning, TEXT("注意：当前使用的是简化的HMAC-SHA256实现，建议在生产环境中使用完整的实现"));
    
    return HexSignature;
}

FString AVolcengineASRActor::CalculateVolcengineSignature(const FString& RequestLine, const TMap<FString, FString>& Headers, const FString& Body) const
{
    // 1. 组合CanonicalRequest
    // 1.1 请求方法和路径
    FString CanonicalRequest = RequestLine + "\n";
    
    // 1.2 排序后的HTTP头部
    TArray<FString> HeaderKeys;
    Headers.GetKeys(HeaderKeys);
    HeaderKeys.Sort();
    
    FString CanonicalHeaders;
    FString SignedHeaders;
    
    for (const FString& Key : HeaderKeys)
    {
        // 转小写
        FString LowerKey = Key.ToLower();
        
        // 添加到规范化头部
        CanonicalHeaders += LowerKey + ":" + Headers[Key] + "\n";
        
        // 添加到已签名头部列表
        if (!SignedHeaders.IsEmpty())
        {
            SignedHeaders += ";";
        }
        SignedHeaders += LowerKey;
    }
    
    CanonicalRequest += CanonicalHeaders + "\n";
    CanonicalRequest += SignedHeaders + "\n";
    
    // 1.3 请求体的哈希值（此处简化为Body本身）
    CanonicalRequest += Body;
    
    // 2. 组合StringToSign
    FString StringToSign = "HMAC-SHA256\n";
    StringToSign += GetTimestamp() + "\n";
    StringToSign += CanonicalRequest;
    
    // 3. 计算签名
    FString Signature = CalculateHMACSHA256Signature(StringToSign, AccessSecret);
    
    // 4. 构建Authorization头
    FString Authorization = "HMAC-SHA256 ";
    Authorization += "app_id=" + AppID + ", ";
    Authorization += "signed_headers=" + SignedHeaders + ", ";
    Authorization += "signature=" + Signature;
    
    return Authorization;
}

TArray<FWSHttpHeader> AVolcengineASRActor::PrepareTokenAuthHeaders() const
{
    TArray<FWSHttpHeader> Headers;
    
    // 添加火山引擎Token鉴权所需的HTTP头部
    Headers.Add(FWSHttpHeader("x-token", AccessToken));
    Headers.Add(FWSHttpHeader("x-app-id", AppID));
    
    return Headers;
}

TArray<FWSHttpHeader> AVolcengineASRActor::PrepareSignatureAuthHeaders() const
{
    TArray<FWSHttpHeader> Headers;
    
    // 获取当前时间戳
    FString Timestamp = GetTimestamp();
    
    // 创建头部Map用于签名计算
    TMap<FString, FString> HeadersMap;
    HeadersMap.Add("host", "openspeech.bytedance.com");
    HeadersMap.Add("x-timestamp", Timestamp);
    HeadersMap.Add("x-app-id", AppID);
    
    // 计算签名
    FString RequestLine = "GET /api/v2/asr";
    FString Body = ""; // WebSocket通常没有请求体
    FString Authorization = CalculateVolcengineSignature(RequestLine, HeadersMap, Body);
    
    // 添加到请求头
    for (const auto& Pair : HeadersMap)
    {
        Headers.Add(FWSHttpHeader(Pair.Key, Pair.Value));
    }
    
    // 添加Authorization头
    Headers.Add(FWSHttpHeader("Authorization", Authorization));
    
    return Headers;
}

// 添加音频捕获事件处理函数
void AVolcengineASRActor::HandleAudioData(const TArray<uint8>& AudioData)
{
    // 收到音频数据，发送给WebSocket
    if (WebSocketClient && WebSocketClient->IsConnected())
    {
        // 发送数据，不是最后一个包
        SendAudioData(AudioData, false);
    }
}

void AVolcengineASRActor::HandleAudioCaptureStarted()
{
    UE_LOG(LogTemp, Log, TEXT("音频捕获已启动"));
}

void AVolcengineASRActor::HandleAudioCaptureStopped()
{
    UE_LOG(LogTemp, Log, TEXT("音频捕获已停止"));
    
    // 发送一个结束标记
    if (WebSocketClient && WebSocketClient->IsConnected())
    {
        TArray<uint8> EmptyData;
        SendAudioData(EmptyData, true);
    }
}

void AVolcengineASRActor::HandleAudioCaptureError(const FString& ErrorMessage)
{
    UE_LOG(LogTemp, Error, TEXT("音频捕获错误: %s"), *ErrorMessage);
    OnASRError.Broadcast(FString::Printf(TEXT("音频捕获错误: %s"), *ErrorMessage));
} 