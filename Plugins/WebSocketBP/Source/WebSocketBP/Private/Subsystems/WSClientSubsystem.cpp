#include "WSClientSubsystem.h"
#include "WebSocketsModule.h"
#include "Async/Async.h"
#include "TimerManager.h"
#include "Engine/Engine.h"
#include "Misc/Base64.h"
#include "Misc/FileHelper.h"

// UWSJsonData实现
UWSJsonData::UWSJsonData()
{
    JsonObject = MakeShared<FJsonObject>();
}

void UWSJsonData::SetStringField(const FString& FieldName, const FString& Value)
{
    if (JsonObject.IsValid())
    {
        JsonObject->SetStringField(FieldName, Value);
    }
}

void UWSJsonData::SetNumberField(const FString& FieldName, float Value)
{
    if (JsonObject.IsValid())
    {
        JsonObject->SetNumberField(FieldName, Value);
    }
}

void UWSJsonData::SetBoolField(const FString& FieldName, bool Value)
{
    if (JsonObject.IsValid())
    {
        JsonObject->SetBoolField(FieldName, Value);
    }
}

bool UWSJsonData::GetStringField(const FString& FieldName, FString& OutValue) const
{
    if (!JsonObject.IsValid() || !JsonObject->HasField(FieldName))
    {
        return false;
    }
    
    OutValue = JsonObject->GetStringField(FieldName);
    return true;
}

bool UWSJsonData::GetNumberField(const FString& FieldName, float& OutValue) const
{
    if (!JsonObject.IsValid() || !JsonObject->HasField(FieldName))
    {
        return false;
    }
    
    OutValue = JsonObject->GetNumberField(FieldName);
    return true;
}

bool UWSJsonData::GetBoolField(const FString& FieldName, bool& OutValue) const
{
    if (!JsonObject.IsValid() || !JsonObject->HasField(FieldName))
    {
        return false;
    }
    
    OutValue = JsonObject->GetBoolField(FieldName);
    return true;
}

// 设置字符串数组字段
void UWSJsonData::SetStringArrayField(const FString& FieldName, const TArray<FString>& Value)
{
    if (JsonObject.IsValid())
    {
        TArray<TSharedPtr<FJsonValue>> JsonArray;
        for (const FString& String : Value)
        {
            JsonArray.Add(MakeShared<FJsonValueString>(String));
        }
        JsonObject->SetArrayField(FieldName, JsonArray);
    }
}

// 设置数值数组字段
void UWSJsonData::SetNumberArrayField(const FString& FieldName, const TArray<float>& Value)
{
    if (JsonObject.IsValid())
    {
        TArray<TSharedPtr<FJsonValue>> JsonArray;
        for (float Number : Value)
        {
            JsonArray.Add(MakeShared<FJsonValueNumber>(Number));
        }
        JsonObject->SetArrayField(FieldName, JsonArray);
    }
}

// 设置对象字段
void UWSJsonData::SetObjectField(const FString& FieldName, UWSJsonData* JsonValue)
{
    if (JsonObject.IsValid() && JsonValue && JsonValue->GetJsonObject().IsValid())
    {
        JsonObject->SetObjectField(FieldName, JsonValue->GetJsonObject());
    }
}

// 获取字符串数组字段
bool UWSJsonData::GetStringArrayField(const FString& FieldName, TArray<FString>& OutValues) const
{
    if (!JsonObject.IsValid() || !JsonObject->HasField(FieldName))
    {
        return false;
    }
    
    OutValues.Empty();
    const TArray<TSharedPtr<FJsonValue>>* JsonArray;
    if (JsonObject->TryGetArrayField(FieldName, JsonArray))
    {
        for (const TSharedPtr<FJsonValue>& Value : *JsonArray)
        {
            OutValues.Add(Value->AsString());
        }
        return true;
    }
    
    return false;
}

// 获取数值数组字段
bool UWSJsonData::GetNumberArrayField(const FString& FieldName, TArray<float>& OutValues) const
{
    if (!JsonObject.IsValid() || !JsonObject->HasField(FieldName))
    {
        return false;
    }
    
    OutValues.Empty();
    const TArray<TSharedPtr<FJsonValue>>* JsonArray;
    if (JsonObject->TryGetArrayField(FieldName, JsonArray))
    {
        for (const TSharedPtr<FJsonValue>& Value : *JsonArray)
        {
            OutValues.Add(Value->AsNumber());
        }
        return true;
    }
    
    return false;
}

// 设置二进制数据字段（Base64编码为字符串）
void UWSJsonData::SetBinaryField(const FString& FieldName, const TArray<uint8>& Value)
{
    if (JsonObject.IsValid())
    {
        // 将二进制数据编码为Base64字符串
        FString Base64String = FBase64::Encode(Value.GetData(), Value.Num());
        JsonObject->SetStringField(FieldName, Base64String);
        
        // 同时添加一个字段记录原始大小
        JsonObject->SetNumberField(FieldName + "_size", Value.Num());
    }
}

// 获取二进制数据字段（从Base64字符串解码）
bool UWSJsonData::GetBinaryField(const FString& FieldName, TArray<uint8>& OutValue) const
{
    if (!JsonObject.IsValid() || !JsonObject->HasField(FieldName))
    {
        return false;
    }
    
    FString Base64String = JsonObject->GetStringField(FieldName);
    if (Base64String.IsEmpty())
    {
        return false;
    }
    
    // 将Base64字符串解码为二进制数据
    OutValue.Empty();
    return FBase64::Decode(Base64String, OutValue);
}

FString UWSJsonData::ToString(bool bPrettyPrint) const
{
    if (!JsonObject.IsValid())
    {
        return FString(TEXT("{}"));
    }
    
    FString OutputString;
    if (bPrettyPrint)
    {
        TSharedRef<TJsonWriter<TCHAR, TPrettyJsonPrintPolicy<TCHAR>>> Writer = TJsonWriterFactory<TCHAR, TPrettyJsonPrintPolicy<TCHAR>>::Create(&OutputString);
        FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    }
    else
    {
        TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
        FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    }
    
    return OutputString;
}

// Helper class for async WebSocket event broadcasting
class FWSBroadcastTask
{
public:
    // Connected event broadcast
    static void BroadcastConnected(UWSClientSubsystem* Subsystem, bool bWasSuccessful)
    {
        if (IsValid(Subsystem))
        {
            AsyncTask(ENamedThreads::GameThread, [Subsystem, bWasSuccessful]()
            {
                if (IsValid(Subsystem))
                {
                    Subsystem->OnConnected.Broadcast(bWasSuccessful);
                }
            });
        }
    }

    // Connection error event broadcast
    static void BroadcastConnectionError(UWSClientSubsystem* Subsystem)
    {
        if (IsValid(Subsystem))
        {
            AsyncTask(ENamedThreads::GameThread, [Subsystem]()
            {
                if (IsValid(Subsystem))
                {
                    Subsystem->OnConnectionError.Broadcast();
                }
            });
        }
    }

    // Closed event broadcast
    static void BroadcastClosed(UWSClientSubsystem* Subsystem)
    {
        if (IsValid(Subsystem))
        {
            AsyncTask(ENamedThreads::GameThread, [Subsystem]()
            {
                if (IsValid(Subsystem))
                {
                    Subsystem->OnClosed.Broadcast();
                }
            });
        }
    }

    // Message received event broadcast
    static void BroadcastMessage(UWSClientSubsystem* Subsystem, const FString& Message)
    {
        if (IsValid(Subsystem))
        {
            AsyncTask(ENamedThreads::GameThread, [Subsystem, Message]()
            {
                if (IsValid(Subsystem))
                {
                    Subsystem->OnMessage.Broadcast(Message);
                }
            });
        }
    }
    
    // Event message broadcast
    static void BroadcastEvent(UWSClientSubsystem* Subsystem, const FWSEventMessage& EventMessage)
    {
        if (IsValid(Subsystem))
        {
            AsyncTask(ENamedThreads::GameThread, [Subsystem, EventMessage]()
            {
                if (IsValid(Subsystem))
                {
                    Subsystem->OnEvent.Broadcast(EventMessage);
                }
            });
        }
    }
};

// Constructor
UWSClientSubsystem::UWSClientSubsystem()
{
    // Initialize any variables or components here
}

// Called when the subsystem is initialized
void UWSClientSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    
    // Ensure WebSockets module is loaded
    FWebSocketsModule::Get();
}

// Called when the subsystem is deinitialized
void UWSClientSubsystem::Deinitialize()
{
    // Disconnect if still connected
    Disconnect();
    
    // Clear timer if running
    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearTimer(ReconnectTimerHandle);
    }
    
    Super::Deinitialize();
}

// 将头部数组转换为Map
TMap<FString, FString> UWSClientSubsystem::ConvertHeadersArrayToMap(const TArray<FWSHttpHeader>& Headers)
{
    TMap<FString, FString> HeadersMap;
    for (const FWSHttpHeader& Header : Headers)
    {
        if (!Header.Name.IsEmpty())
        {
            HeadersMap.Add(Header.Name, Header.Value);
        }
    }
    return HeadersMap;
}

// 将Map转换为头部数组
TArray<FWSHttpHeader> UWSClientSubsystem::ConvertHeadersMapToArray(const TMap<FString, FString>& Headers)
{
    TArray<FWSHttpHeader> HeadersArray;
    for (const auto& Pair : Headers)
    {
        HeadersArray.Add(FWSHttpHeader(Pair.Key, Pair.Value));
    }
    return HeadersArray;
}

// 简化版无头部连接方法
bool UWSClientSubsystem::ConnectSimple(const FString& ServerURL)
{
    return Connect(ServerURL, TArray<FWSHttpHeader>());
}

bool UWSClientSubsystem::Connect(const FString& ServerURL, const TArray<FWSHttpHeader>& Headers)
{
    // Disconnect if already connected
    if (WebSocket.IsValid() && WebSocket->IsConnected())
    {
        Disconnect();
    }

    // Store connection details for reconnection
    LastConnectionURL = ServerURL;
    LastConnectionHeadersArray = Headers;
    LastConnectionHeaders = ConvertHeadersArrayToMap(Headers);
    
    // Reset reconnect attempts
    AutoReconnectAttempts = 0;

    // 创建 WebSocket 配置
    FWebSocketsModule& WebSocketsModule = FWebSocketsModule::Get();
    
    // 创建 WebSocket，正确处理头部
    if (Headers.Num() > 0)
    {
        TArray<FString> Protocols;
        WebSocket = WebSocketsModule.CreateWebSocket(ServerURL, Protocols, LastConnectionHeaders);
    }
    else
    {
        WebSocket = WebSocketsModule.CreateWebSocket(ServerURL);
    }

    if (!WebSocket.IsValid())
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to create WebSocket for URL: %s"), *ServerURL);
        return false;
    }

    // Bind event handlers
    WebSocket->OnConnected().AddUObject(this, &UWSClientSubsystem::HandleWebSocketConnected);
    WebSocket->OnConnectionError().AddUObject(this, &UWSClientSubsystem::HandleWebSocketConnectionError);
    WebSocket->OnClosed().AddUObject(this, &UWSClientSubsystem::HandleWebSocketClosed);
    WebSocket->OnMessage().AddUObject(this, &UWSClientSubsystem::HandleWebSocketMessage);
    WebSocket->OnRawMessage().AddUObject(this, &UWSClientSubsystem::HandleWebSocketRawMessage);

    // Connect to the server
    WebSocket->Connect();
    return true;
}

void UWSClientSubsystem::Disconnect()
{
    // Clear any pending reconnect timer
    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearTimer(ReconnectTimerHandle);
    }
    
    if (WebSocket.IsValid())
    {
        if (WebSocket->IsConnected())
        {
            WebSocket->Close();
        }
        WebSocket.Reset();
    }
}

bool UWSClientSubsystem::IsConnected() const
{
    return WebSocket.IsValid() && WebSocket->IsConnected();
}

bool UWSClientSubsystem::Reconnect()
{
    if (LastConnectionURL.IsEmpty())
    {
        UE_LOG(LogTemp, Warning, TEXT("Cannot reconnect - no previous connection URL"));
        return false;
    }
    
    return Connect(LastConnectionURL, LastConnectionHeadersArray);
}

// 内部辅助方法，用于定时器回调
void UWSClientSubsystem::ReconnectInternal()
{
    // 不需要处理返回值，只需调用 Reconnect
    Reconnect();
}

bool UWSClientSubsystem::SendJSON(const FString& EventName, UWSJsonData* JsonData)
{
    if (!IsConnected() || !JsonData || !JsonData->GetJsonObject().IsValid())
    {
        return false;
    }

    // Create a wrapper object with event name
    TSharedPtr<FJsonObject> WrapperObject = MakeShared<FJsonObject>();
    WrapperObject->SetStringField("event", EventName);
    WrapperObject->SetObjectField("data", JsonData->GetJsonObject());

    // Serialize to string
    FString OutputString;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    if (FJsonSerializer::Serialize(WrapperObject.ToSharedRef(), Writer))
    {
        return SendMessage(OutputString);
    }

    return false;
}

// 简化版SendJSON方法，支持蓝图中的键值对数组
bool UWSClientSubsystem::SendJSONSimple(const FString& EventName, const TArray<FWSKeyValuePair>& KeyValuePairs)
{
    UWSJsonData* JsonData = CreateJsonDataFromKeyValuePairs(KeyValuePairs);
    return SendJSON(EventName, JsonData);
}

bool UWSClientSubsystem::SendMessage(const FString& Message)
{
    if (!IsConnected())
    {
        return false;
    }

    WebSocket->Send(Message);
    return true;
}

UWSJsonData* UWSClientSubsystem::CreateJsonData()
{
    return NewObject<UWSJsonData>(this);
}

// 从键值对数组创建JSON对象
UWSJsonData* UWSClientSubsystem::CreateJsonDataFromKeyValuePairs(const TArray<FWSKeyValuePair>& KeyValuePairs)
{
    UWSJsonData* JsonData = CreateJsonData();
    
    for (const FWSKeyValuePair& Pair : KeyValuePairs)
    {
        if (!Pair.Key.IsEmpty())
        {
            JsonData->SetStringField(Pair.Key, Pair.Value);
        }
    }
    
    return JsonData;
}

// 从字符串解析JSON对象
UWSJsonData* UWSClientSubsystem::ParseJsonString(const FString& JsonString)
{
    UWSJsonData* JsonData = CreateJsonData();
    
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonString);
    if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
    {
        JsonData->JsonObject = JsonObject;
        return JsonData;
    }
    
    return JsonData; // 返回空对象
}

void UWSClientSubsystem::SetAutoReconnect(bool bEnabled, float Delay, int32 MaxRetries)
{
    bAutoReconnectEnabled = bEnabled;
    AutoReconnectDelay = FMath::Max(1.0f, Delay);
    AutoReconnectMaxRetries = MaxRetries;
}

// WebSocket event handlers
void UWSClientSubsystem::HandleWebSocketConnected()
{
    UE_LOG(LogTemp, Log, TEXT("WebSocket connected"));
    
    // Reset reconnect attempts on successful connection
    AutoReconnectAttempts = 0;
    
    FWSBroadcastTask::BroadcastConnected(this, true);
}

void UWSClientSubsystem::HandleWebSocketConnectionError(const FString& Error)
{
    UE_LOG(LogTemp, Error, TEXT("WebSocket connection error: %s"), *Error);
    
    FWSBroadcastTask::BroadcastConnectionError(this);
    
    // Handle auto-reconnect if enabled
    if (bAutoReconnectEnabled)
    {
        AttemptReconnect();
    }
}

void UWSClientSubsystem::HandleWebSocketClosed(int32 StatusCode, const FString& Reason, bool bWasClean)
{
    UE_LOG(LogTemp, Log, TEXT("WebSocket closed: StatusCode=%d, Reason=%s, bWasClean=%d"), 
           StatusCode, *Reason, bWasClean ? 1 : 0);
           
    FWSBroadcastTask::BroadcastClosed(this);
    
    // Handle auto-reconnect if enabled and not a clean close
    if (bAutoReconnectEnabled && !bWasClean)
    {
        AttemptReconnect();
    }
}

void UWSClientSubsystem::HandleWebSocketMessage(const FString& Message)
{
    UE_LOG(LogTemp, Verbose, TEXT("WebSocket message received: %s"), *Message);
    
    // Broadcast raw message
    FWSBroadcastTask::BroadcastMessage(this, Message);
    
    // Parse as event message and broadcast structured event
    FWSEventMessage EventMessage = ParseEventMessage(Message);
    FWSBroadcastTask::BroadcastEvent(this, EventMessage);
}

void UWSClientSubsystem::AttemptReconnect()
{
    // Check if we've hit the max retries
    if (AutoReconnectMaxRetries >= 0 && AutoReconnectAttempts >= AutoReconnectMaxRetries)
    {
        UE_LOG(LogTemp, Warning, TEXT("WebSocket reconnect: Max retry attempts reached (%d)"), AutoReconnectMaxRetries);
        return;
    }
    
    AutoReconnectAttempts++;
    
    UE_LOG(LogTemp, Log, TEXT("WebSocket reconnect: Attempting reconnect in %.1f seconds (attempt %d)"), 
           AutoReconnectDelay, AutoReconnectAttempts);
    
    // Schedule reconnect
    if (UWorld* World = GetWorld())
    {
        FTimerDelegate TimerDelegate;
        TimerDelegate.BindUObject(this, &UWSClientSubsystem::ReconnectInternal);
        
        World->GetTimerManager().SetTimer(
            ReconnectTimerHandle,
            TimerDelegate,
            AutoReconnectDelay,
            false
        );
    }
}

FWSEventMessage UWSClientSubsystem::ParseEventMessage(const FString& Message)
{
    FWSEventMessage EventMessage;
    EventMessage.RawMessage = Message;
    
    // Create a new UWSJsonData object to store our parsed JSON
    UWSJsonData* JsonData = CreateJsonData();
    EventMessage.JsonData = JsonData;
    
    // Try to parse the message as JSON
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Message);
    if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
    {
        // Check if it has an event field
        if (JsonObject->HasField("event"))
        {
            EventMessage.EventName = JsonObject->GetStringField("event");
            
            // Get the data field if it exists
            if (JsonObject->HasField("data"))
            {
                JsonData->JsonObject = JsonObject->GetObjectField("data");
            }
            else
            {
                // If no data field, use the whole object except the event field
                TSharedPtr<FJsonObject> DataObject = MakeShared<FJsonObject>();
                for (const auto& Pair : JsonObject->Values)
                {
                    if (Pair.Key != "event")
                    {
                        DataObject->SetField(Pair.Key, Pair.Value);
                    }
                }
                JsonData->JsonObject = DataObject;
            }
        }
        else
        {
            // No event field, treat the whole message as data
            EventMessage.EventName = "message";
            JsonData->JsonObject = JsonObject;
        }
    }
    else
    {
        // Not valid JSON, treat as plain text message
        EventMessage.EventName = "message";
        
        // Create a simple object with a "text" field containing the message
        JsonData->SetStringField("text", Message);
    }
    
    return EventMessage;
}

// 发送二进制数据
bool UWSClientSubsystem::SendBinary(const TArray<uint8>& Data)
{
    if (!IsConnected())
    {
        return false;
    }

    // 使用WebSocket的发送二进制数据方法
    WebSocket->Send(Data.GetData(), Data.Num(), true);
    return true;
}

// 从字节数组发送二进制数据 - 蓝图接口
bool UWSClientSubsystem::SendBinaryFromBytes(const TArray<uint8>& Data)
{
    return SendBinary(Data);
}

// 处理WebSocket二进制消息
void UWSClientSubsystem::HandleWebSocketRawMessage(const void* Data, SIZE_T Size, SIZE_T BytesRemaining)
{
    if (!Data || Size == 0)
    {
        return;
    }
    
    // 对于分片消息，我们需要缓存片段直到完整消息接收完毕
    static TArray<uint8> AccumulatedData;
    
    // 如果这是一个新消息的开始（没有之前的片段）
    if (AccumulatedData.Num() == 0)
    {
        // 直接添加数据
        AccumulatedData.Append((uint8*)Data, Size);
    }
    else
    {
        // 这是一个持续的片段，附加到现有数据
        int32 CurrentPos = AccumulatedData.Num();
        AccumulatedData.AddUninitialized(Size);
        FMemory::Memcpy(AccumulatedData.GetData() + CurrentPos, Data, Size);
    }
    
    // 检查是否还有更多数据片段
    if (BytesRemaining == 0) 
    {
        // 消息接收完毕，复制完整的消息数据
        FWSBinaryMessage BinaryMessage;
        BinaryMessage.Data = AccumulatedData;
        
        // 清空累积缓冲区，为下一个消息做准备
        AccumulatedData.Empty();
        
        // 在游戏线程中广播消息
        AsyncTask(ENamedThreads::GameThread, [this, BinaryMessage]()
        {
            if (IsValid(this))
            {
                // 注意：二进制数据只发送给C++代理，不会发送给蓝图
                // 因为蓝图不适合处理复杂的二进制数据（如图片、音频、视频等）
                OnBinaryMessage.Broadcast(BinaryMessage);
                
                // 特殊二进制数据处理（如图片、音频、视频）需要在C++中实现
                // 然后由开发者根据项目需求添加适当的处理逻辑
                // 这些处理不在本插件的实现范围内，应由使用者根据具体需求自行实现
            }
        });
    }
}

// 发送文本作为二进制数据
bool UWSClientSubsystem::SendTextAsBinary(const FString& Text)
{
    if (!IsConnected())
    {
        return false;
    }
    
    TArray<uint8> Data = StringToBinary(Text);
    return SendBinary(Data);
}

// 将字符串编码为二进制数据
TArray<uint8> UWSClientSubsystem::StringToBinary(const FString& Text)
{
    TArray<uint8> BinaryData;
    
    if (Text.IsEmpty())
    {
        return BinaryData;
    }
    
    // 将FString转换为UTF-8
    FTCHARToUTF8 UTF8Converter(*Text);
    int32 Length = UTF8Converter.Length();
    
    // 复制数据
    BinaryData.AddUninitialized(Length);
    FMemory::Memcpy(BinaryData.GetData(), UTF8Converter.Get(), Length);
    
    return BinaryData;
}

// 将二进制数据解码为字符串(假设为UTF-8编码)
FString UWSClientSubsystem::BinaryToString(const TArray<uint8>& Data)
{
    if (Data.Num() == 0)
    {
        return FString();
    }
    
    // 确保数据以null结尾
    TArray<uint8> CopyData = Data;
    CopyData.Add(0);
    
    // 尝试将数据解释为UTF-8字符串
    return FString(UTF8_TO_TCHAR(CopyData.GetData()));
}

// 将二进制数据编码为Base64字符串
FString UWSClientSubsystem::BinaryToBase64(const TArray<uint8>& Data)
{
    if (Data.Num() == 0)
    {
        return FString();
    }
    
    return FBase64::Encode(Data.GetData(), Data.Num());
}

// 将Base64字符串解码为二进制数据
TArray<uint8> UWSClientSubsystem::Base64ToBinary(const FString& Base64String)
{
    TArray<uint8> BinaryData;
    
    if (Base64String.IsEmpty())
    {
        return BinaryData;
    }
    
    FBase64::Decode(Base64String, BinaryData);
    return BinaryData;
}

// 从文件加载并发送二进制数据
bool UWSClientSubsystem::SendBinaryFromFile(const FString& FilePath)
{
    TArray<uint8> FileData;
    if (!LoadBinaryFromFile(FilePath, FileData))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load binary file: %s"), *FilePath);
        return false;
    }
    
    return SendBinary(FileData);
}

// 检测二进制数据类型 (基于文件签名/魔数)
EWSBinaryType UWSClientSubsystem::DetectBinaryType(const TArray<uint8>& Data)
{
    if (Data.Num() < 4)
    {
        return EWSBinaryType::Unknown;
    }
    
    // 检查常见文件格式的魔数/文件签名
    const uint8* RawData = Data.GetData();
    
    // JPEG: FF D8 FF
    if (RawData[0] == 0xFF && RawData[1] == 0xD8 && RawData[2] == 0xFF)
    {
        return EWSBinaryType::Image_JPEG;
    }
    
    // PNG: 89 50 4E 47
    if (RawData[0] == 0x89 && RawData[1] == 0x50 && RawData[2] == 0x4E && RawData[3] == 0x47)
    {
        return EWSBinaryType::Image_PNG;
    }
    
    // GIF: 47 49 46 38
    if (RawData[0] == 0x47 && RawData[1] == 0x49 && RawData[2] == 0x46 && RawData[3] == 0x38)
    {
        return EWSBinaryType::Image_GIF;
    }
    
    // WEBP: 52 49 46 46 (RIFF)
    if (RawData[0] == 0x52 && RawData[1] == 0x49 && RawData[2] == 0x46 && RawData[3] == 0x46 && 
        Data.Num() >= 12 && RawData[8] == 0x57 && RawData[9] == 0x45 && RawData[10] == 0x42 && RawData[11] == 0x50)
    {
        return EWSBinaryType::Image_WEBP;
    }
    
    // MP3: FF FB or FF F3 or FF F2 or ID3
    if ((RawData[0] == 0xFF && (RawData[1] == 0xFB || RawData[1] == 0xF3 || RawData[1] == 0xF2)) ||
        (RawData[0] == 0x49 && RawData[1] == 0x44 && RawData[2] == 0x33))
    {
        return EWSBinaryType::Audio_MP3;
    }
    
    // WAV: 52 49 46 46 (RIFF) + WAVE
    if (RawData[0] == 0x52 && RawData[1] == 0x49 && RawData[2] == 0x46 && RawData[3] == 0x46 && 
        Data.Num() >= 12 && RawData[8] == 0x57 && RawData[9] == 0x41 && RawData[10] == 0x56 && RawData[11] == 0x45)
    {
        return EWSBinaryType::Audio_WAV;
    }
    
    // OGG: 4F 67 67 53
    if (RawData[0] == 0x4F && RawData[1] == 0x67 && RawData[2] == 0x67 && RawData[3] == 0x53)
    {
        return EWSBinaryType::Audio_OGG;
    }
    
    // MP4/MOV: 66 74 79 70 (ftyp)
    if (Data.Num() >= 8 && RawData[4] == 0x66 && RawData[5] == 0x74 && RawData[6] == 0x79 && RawData[7] == 0x70)
    {
        return EWSBinaryType::Video_MP4;
    }
    
    // PDF: 25 50 44 46
    if (RawData[0] == 0x25 && RawData[1] == 0x50 && RawData[2] == 0x44 && RawData[3] == 0x46)
    {
        return EWSBinaryType::PDF;
    }
    
    // ZIP: 50 4B 03 04
    if (RawData[0] == 0x50 && RawData[1] == 0x4B && RawData[2] == 0x03 && RawData[3] == 0x04)
    {
        return EWSBinaryType::ZIP;
    }
    
    return EWSBinaryType::Unknown;
}

// 将二进制数据保存为文件
bool UWSClientSubsystem::SaveBinaryToFile(const TArray<uint8>& Data, const FString& FilePath)
{
    if (Data.Num() == 0)
    {
        return false;
    }
    
    return FFileHelper::SaveArrayToFile(Data, *FilePath);
}

// 从文件加载二进制数据
bool UWSClientSubsystem::LoadBinaryFromFile(const FString& FilePath, TArray<uint8>& OutData)
{
    OutData.Empty();
    return FFileHelper::LoadFileToArray(OutData, *FilePath);
} 