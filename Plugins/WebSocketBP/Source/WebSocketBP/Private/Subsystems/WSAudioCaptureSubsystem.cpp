#include "Subsystems/WSAudioCaptureSubsystem.h"
#include "Sound/SoundWave.h"
#include "Sound/SoundWaveProcedural.h"
#include "Misc/FileHelper.h"
#include "Async/Async.h"
#include "HAL/PlatformFileManager.h"

// 构造函数
UWSAudioCaptureSubsystem::UWSAudioCaptureSubsystem()
    : AudioCaptureComponent(nullptr)
    , bIsCapturing(false)
    , SampleRate(16000) // 默认16kHz，适合语音识别
    , NumChannels(1)    // 默认单声道
    , ChunkSize(3200)   // 默认100ms (16000 * 0.1 * 2)
{
}

// 初始化子系统
void UWSAudioCaptureSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);

    // 创建音频捕获组件
    AudioCaptureComponent = NewObject<UAudioCaptureComponent>(this);
    if (AudioCaptureComponent)
    {
        AudioCaptureComponent->SetupAttachment(nullptr);
        AudioCaptureComponent->RegisterComponent();
    }
}

// 析构子系统
void UWSAudioCaptureSubsystem::Deinitialize()
{
    // 确保在销毁前停止捕获
    StopCapturingAudio();
    
    // 清理音频捕获组件
    if (AudioCaptureComponent)
    {
        AudioCaptureComponent->UnregisterComponent();
        AudioCaptureComponent = nullptr;
    }
    
    Super::Deinitialize();
}

bool UWSAudioCaptureSubsystem::StartCapturingAudio()
{
    // 如果已经在捕获，就不需要再启动
    if (bIsCapturing)
    {
        UE_LOG(LogTemp, Warning, TEXT("音频捕获已经在运行"));
        return true;
    }
    
    // 清空音频数据缓冲区
    AudioDataBuffer.Empty();
    
    // 检查音频捕获组件是否可用
    if (!AudioCaptureComponent)
    {
        UE_LOG(LogTemp, Error, TEXT("音频捕获组件未创建"));
        OnCaptureError.Broadcast("音频捕获组件未创建");
        return false;
    }
    
    // 配置音频捕获参数
    Audio::FAudioCaptureDeviceParams CaptureParams;
    // 尝试设置采样率和声道数 (注意：根据文档，这些参数可能不会被使用，设备可能使用自己的默认值)
    // 我们仍然存储自己的值，用于记录和转换
    AudioCapture.OpenAudioCaptureStream(CaptureParams,
        [this](const void* InAudio, int32 NumFrames, int32 InNumChannels, int32 InSampleRate, double StreamTime, bool bOverFlow) {
            // 运行在音频线程，需要转换到游戏线程
            AsyncTask(ENamedThreads::GameThread, [this, InAudio, NumFrames]() {
                // 将 void* 转换为 float* 以便处理音频数据
                const float* AudioData = static_cast<const float*>(InAudio);
                ProcessAudioData(AudioData, NumFrames);
            });
        },
        ChunkSize / 2  // 每个样本是16位(2字节)，所以除以2得到帧数
    );
    
    // 启动音频捕获
    if (AudioCapture.StartStream())
    {
        bIsCapturing = true;
        OnCaptureStarted.Broadcast();
        UE_LOG(LogTemp, Log, TEXT("音频捕获已启动: 采样率=%d, 声道数=%d"), SampleRate, NumChannels);
        return true;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("启动音频捕获失败"));
        OnCaptureError.Broadcast("启动音频捕获失败");
        return false;
    }
}

void UWSAudioCaptureSubsystem::StopCapturingAudio()
{
    if (!bIsCapturing)
    {
        return;
    }
    
    // 停止音频捕获
    AudioCapture.StopStream();
    bIsCapturing = false;
    
    // 广播停止事件
    OnCaptureStopped.Broadcast();
    UE_LOG(LogTemp, Log, TEXT("音频捕获已停止"));
}

bool UWSAudioCaptureSubsystem::ProcessAudioFile(const FString& FilePath)
{
    if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*FilePath))
    {
        UE_LOG(LogTemp, Error, TEXT("音频文件不存在: %s"), *FilePath);
        OnCaptureError.Broadcast(FString::Printf(TEXT("音频文件不存在: %s"), *FilePath));
        return false;
    }
    
    TArray<uint8> FileData;
    if (!FFileHelper::LoadFileToArray(FileData, *FilePath))
    {
        UE_LOG(LogTemp, Error, TEXT("加载音频文件失败: %s"), *FilePath);
        OnCaptureError.Broadcast(FString::Printf(TEXT("加载音频文件失败: %s"), *FilePath));
        return false;
    }
    
    // TODO: 解析音频文件格式，转换为PCM数据
    // 这里简化处理，假设文件已经是PCM格式
    
    // 发送音频数据
    OnAudioData.Broadcast(FileData);
    
    UE_LOG(LogTemp, Log, TEXT("处理音频文件成功: %s"), *FilePath);
    return true;
}

void UWSAudioCaptureSubsystem::SetChunkSize(int32 InChunkSize)
{
    // 确保值合理
    if (InChunkSize > 0)
    {
        ChunkSize = InChunkSize;
        UE_LOG(LogTemp, Log, TEXT("音频数据块大小设置为: %d"), ChunkSize);
    }
}

void UWSAudioCaptureSubsystem::SetSampleRate(int32 InSampleRate)
{
    // 确保当前没有在捕获
    if (bIsCapturing)
    {
        UE_LOG(LogTemp, Warning, TEXT("无法在捕获过程中更改采样率，请先停止捕获"));
        return;
    }
    
    // 常见采样率: 8000, 16000, 22050, 32000, 44100, 48000
    if (InSampleRate == 8000 || InSampleRate == 16000 || InSampleRate == 22050 || 
        InSampleRate == 32000 || InSampleRate == 44100 || InSampleRate == 48000)
    {
        SampleRate = InSampleRate;
        UE_LOG(LogTemp, Log, TEXT("采样率设置为: %d"), SampleRate);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("不支持的采样率: %d"), InSampleRate);
    }
}

void UWSAudioCaptureSubsystem::SetNumChannels(int32 InNumChannels)
{
    // 确保当前没有在捕获
    if (bIsCapturing)
    {
        UE_LOG(LogTemp, Warning, TEXT("无法在捕获过程中更改声道数，请先停止捕获"));
        return;
    }
    
    // 一般只支持单声道或双声道
    if (InNumChannels == 1 || InNumChannels == 2)
    {
        NumChannels = InNumChannels;
        UE_LOG(LogTemp, Log, TEXT("声道数设置为: %d"), NumChannels);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("不支持的声道数: %d"), InNumChannels);
    }
}

void UWSAudioCaptureSubsystem::ProcessAudioData(const float* InAudio, int32 NumSamples)
{
    if (!bIsCapturing || !InAudio || NumSamples <= 0)
    {
        return;
    }
    
    // 记录接收到的样本数，有助于了解实际采样率
    UE_LOG(LogTemp, Verbose, TEXT("收到音频数据: %d 样本"), NumSamples);
    
    // 转换音频数据
    TArray<uint8> NewData = ConvertAudioData(InAudio, NumSamples);
    
    // 添加到缓冲区
    AudioDataBuffer.Append(NewData);
    
    // 如果累积的数据超过了ChunkSize，就发送一个数据块
    while (AudioDataBuffer.Num() >= ChunkSize)
    {
        TArray<uint8> DataChunk;
        DataChunk.Append(AudioDataBuffer.GetData(), ChunkSize);
        
        // 从缓冲区移除已处理的数据
        AudioDataBuffer.RemoveAt(0, ChunkSize);
        
        // 广播音频数据
        OnAudioData.Broadcast(DataChunk);
    }
}

TArray<uint8> UWSAudioCaptureSubsystem::ConvertAudioData(const float* InAudio, int32 NumSamples)
{
    TArray<uint8> Result;
    if (!InAudio || NumSamples <= 0)
    {
        return Result;
    }
    
    // 每个样本占2字节（16位PCM）
    Result.SetNumUninitialized(NumSamples * 2);
    
    // 转换浮点PCM为16位PCM
    for (int32 i = 0; i < NumSamples; ++i)
    {
        // 浮点 [-1.0, 1.0] 转换为 16位整数 [-32768, 32767]
        int16 Sample = FMath::Clamp(InAudio[i] * 32767.0f, -32768.0f, 32767.0f);
        
        // 小端字节序
        Result[i * 2] = Sample & 0xFF;         // 低字节
        Result[i * 2 + 1] = (Sample >> 8) & 0xFF;  // 高字节
    }
    
    return Result;
} 