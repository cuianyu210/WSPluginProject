#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "WebSocketsModule.h"
#include "IWebSocket.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonSerializer.h"
#include "Async/AsyncWork.h"
#include "Misc/Base64.h"
#include "Misc/FileHelper.h"
#include "WSClientSubsystem.generated.h"

// 单个HTTP头结构，用于蓝图
USTRUCT(BlueprintType)
struct FWSHttpHeader
{
	GENERATED_BODY()
	
	// HTTP头名称
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WebSocket")
	FString Name;
	
	// HTTP头值
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WebSocket")
	FString Value;
	
	FWSHttpHeader() {}
	
	FWSHttpHeader(const FString& InName, const FString& InValue)
		: Name(InName), Value(InValue)
	{}
};

// 简单键值对，用于蓝图
USTRUCT(BlueprintType)
struct FWSKeyValuePair
{
	GENERATED_BODY()
	
	// 键
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WebSocket")
	FString Key;
	
	// 值
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WebSocket")
	FString Value;
	
	FWSKeyValuePair() {}
	
	FWSKeyValuePair(const FString& InKey, const FString& InValue)
		: Key(InKey), Value(InValue)
	{}
};

// 蓝图可用的JSON数据类
UCLASS(BlueprintType)
class WEBSOCKETBP_API UWSJsonData : public UObject
{
	GENERATED_BODY()
	
public:
	UWSJsonData();
	
	// 内部存储JSON对象
	TSharedPtr<FJsonObject> JsonObject;
	
	// 获取JSONObject
	TSharedPtr<FJsonObject> GetJsonObject() const { return JsonObject; }
	
	// 设置字符串字段
	UFUNCTION(BlueprintCallable, Category = "WebSocket|JSON")
	void SetStringField(const FString& FieldName, const FString& Value);
	
	// 设置数值字段
	UFUNCTION(BlueprintCallable, Category = "WebSocket|JSON")
	void SetNumberField(const FString& FieldName, float Value);
	
	// 设置布尔字段
	UFUNCTION(BlueprintCallable, Category = "WebSocket|JSON")
	void SetBoolField(const FString& FieldName, bool Value);
	
	// 从JSON对象中获取字符串字段
	UFUNCTION(BlueprintCallable, Category = "WebSocket|JSON")
	bool GetStringField(const FString& FieldName, FString& OutValue) const;
	
	// 从JSON对象中获取数值字段
	UFUNCTION(BlueprintCallable, Category = "WebSocket|JSON")
	bool GetNumberField(const FString& FieldName, float& OutValue) const;
	
	// 从JSON对象中获取布尔字段
	UFUNCTION(BlueprintCallable, Category = "WebSocket|JSON")
	bool GetBoolField(const FString& FieldName, bool& OutValue) const;
	
	// 设置字符串数组字段
	UFUNCTION(BlueprintCallable, Category = "WebSocket|JSON")
	void SetStringArrayField(const FString& FieldName, const TArray<FString>& Value);
	
	// 设置数值数组字段
	UFUNCTION(BlueprintCallable, Category = "WebSocket|JSON")
	void SetNumberArrayField(const FString& FieldName, const TArray<float>& Value);
	
	// 设置对象字段
	UFUNCTION(BlueprintCallable, Category = "WebSocket|JSON")
	void SetObjectField(const FString& FieldName, UWSJsonData* JsonValue);
	
	// 获取字符串数组字段
	UFUNCTION(BlueprintCallable, Category = "WebSocket|JSON")
	bool GetStringArrayField(const FString& FieldName, TArray<FString>& OutValues) const;
	
	// 获取数值数组字段
	UFUNCTION(BlueprintCallable, Category = "WebSocket|JSON")
	bool GetNumberArrayField(const FString& FieldName, TArray<float>& OutValues) const;
	
	// 设置二进制数据字段（Base64编码为字符串）
	UFUNCTION(BlueprintCallable, Category = "WebSocket|JSON")
	void SetBinaryField(const FString& FieldName, const TArray<uint8>& Value);
	
	// 获取二进制数据字段（从Base64字符串解码）
	UFUNCTION(BlueprintCallable, Category = "WebSocket|JSON")
	bool GetBinaryField(const FString& FieldName, TArray<uint8>& OutValue) const;
	
	// 将JSON对象转换为字符串
	UFUNCTION(BlueprintCallable, Category = "WebSocket|JSON")
	FString ToString(bool bPrettyPrint = false) const;
};

// Message structure for events received from the WebSocket server
USTRUCT(BlueprintType)
struct FWSEventMessage
{
	GENERATED_BODY()

	// The event name/type
	UPROPERTY(BlueprintReadOnly, Category = "WebSocket")
	FString EventName;

	// The raw JSON message string
	UPROPERTY(BlueprintReadOnly, Category = "WebSocket")
	FString RawMessage;

	// 使用UObject取代TSharedPtr<FJsonObject>
	UPROPERTY(BlueprintReadOnly, Category = "WebSocket")
	UWSJsonData* JsonData;
	
	FWSEventMessage()
	{
		JsonData = nullptr;
	}
};

// 二进制消息结构体，主要供C++使用
USTRUCT(BlueprintType)
struct FWSBinaryMessage
{
    GENERATED_BODY()
    
    // 二进制数据
    TArray<uint8> Data;
    
    FWSBinaryMessage() {}
    
    FWSBinaryMessage(const TArray<uint8>& InData)
        : Data(InData)
    {}
    
    // 获取数据指针和长度，方便C++处理
    const uint8* GetData() const { return Data.GetData(); }
    int32 GetSize() const { return Data.Num(); }
    
    // 将二进制数据转换为字符串(UTF-8)
    FString ToString() const
    {
        if (Data.Num() == 0) return FString();
        
        // 确保数据以null结尾
        TArray<uint8> CopyData = Data;
        CopyData.Add(0);
        
        // 尝试将数据解释为UTF-8字符串
        return FString(UTF8_TO_TCHAR(CopyData.GetData()));
    }
    
    // 将二进制数据转换为Base64字符串
    FString ToBase64() const
    {
        if (Data.Num() == 0) return FString();
        return FBase64::Encode(Data.GetData(), Data.Num());
    }
    
    // 保存二进制数据到文件
    bool SaveToFile(const FString& FilePath) const
    {
        if (Data.Num() == 0) return false;
        return FFileHelper::SaveArrayToFile(Data, *FilePath);
    }
};

// 常见二进制数据MIME类型
UENUM(BlueprintType)
enum class EWSBinaryType : uint8
{
    Unknown,
    Image_JPEG,
    Image_PNG,
    Image_GIF,
    Image_WEBP,
    Audio_MP3,
    Audio_WAV,
    Audio_OGG,
    Video_MP4,
    Video_WEBM,
    PDF,
    ZIP,
    Custom
};

// Dynamic multicast delegates for blueprint binding
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWSConnectedDelegate, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWSConnectionErrorDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWSClosedDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWSMessageDelegate, const FString&, Message);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWSEventDelegate, const FWSEventMessage&, EventMessage);
// 二进制消息代理，C++可以绑定这个
DECLARE_MULTICAST_DELEGATE_OneParam(FWSBinaryMessageDelegate, const FWSBinaryMessage&);

/**
 * WebSocket客户端子系统
 * 
 * 提供WebSocket通信功能，支持JSON和二进制数据。
 * 注意：二进制数据（如图片、音频、视频等）仅在C++代码中通过OnBinaryMessage代理接收，
 * 不会向蓝图发送二进制数据，因为蓝图不适合处理大量二进制数据。
 * 如需在蓝图中使用二进制数据，请在C++中创建自定义处理逻辑，然后将处理结果暴露给蓝图。
 */
UCLASS()
class WEBSOCKETBP_API UWSClientSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
public:
	// Constructor
	UWSClientSubsystem();
	
	// Subsystem interface
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	// WebSocket connection management
	UFUNCTION(BlueprintCallable, Category = "WebSocket")
	bool Connect(const FString& ServerURL, const TArray<FWSHttpHeader>& Headers);
	
	// 简化版的连接方法，无需头部
	UFUNCTION(BlueprintCallable, Category = "WebSocket")
	bool ConnectSimple(const FString& ServerURL);
	
	UFUNCTION(BlueprintCallable, Category = "WebSocket")
	void Disconnect();
	
	UFUNCTION(BlueprintCallable, Category = "WebSocket")
	bool IsConnected() const;
	
	UFUNCTION(BlueprintCallable, Category = "WebSocket")
	bool Reconnect();
	
	// JSON message sending
	UFUNCTION(BlueprintCallable, Category = "WebSocket")
	bool SendJSON(const FString& EventName, UWSJsonData* JsonData);
	
	// 简化版SendJSON，支持蓝图中的键值对数组
	UFUNCTION(BlueprintCallable, Category = "WebSocket", meta = (DisplayName = "Send JSON (Simple)"))
	bool SendJSONSimple(const FString& EventName, const TArray<FWSKeyValuePair>& KeyValuePairs);
	
	// Raw message sending
	UFUNCTION(BlueprintCallable, Category = "WebSocket")
	bool SendMessage(const FString& Message);
	
	/**
	 * 发送二进制数据 (仅限C++使用)
	 * @param Data 要发送的二进制数据
	 * @return 是否成功发送
	 */
	bool SendBinary(const TArray<uint8>& Data);
	
	/**
	 * 从字节数组发送二进制数据 (蓝图接口)
	 * 注意: 适用于简单的二进制数据，不建议用于发送大型二进制数据
	 * @param Data 要发送的二进制数据
	 * @return 是否成功发送
	 */
	UFUNCTION(BlueprintCallable, Category = "WebSocket", meta = (DisplayName = "Send Binary Data"))
	bool SendBinaryFromBytes(const TArray<uint8>& Data);
	
	/**
	 * 发送文本作为二进制数据 (仅限C++使用)
	 * @param Text 要发送的文本
	 * @return 是否成功发送
	 */
	bool SendTextAsBinary(const FString& Text);
	
	/**
	 * 从文件加载并发送二进制数据 (仅限C++使用)
	 * @param FilePath 文件路径
	 * @return 是否成功发送
	 */
	bool SendBinaryFromFile(const FString& FilePath);
	
	// 二进制数据工具函数 (仅限C++使用)
	
	/**
	 * 检测二进制数据类型 (基于文件签名/魔数)
	 * @param Data 要检测的二进制数据
	 * @return 检测到的数据类型
	 */
	static EWSBinaryType DetectBinaryType(const TArray<uint8>& Data);
	
	/**
	 * 将二进制数据保存为文件
	 * @param Data 要保存的二进制数据
	 * @param FilePath 目标文件路径
	 * @return 是否成功保存
	 */
	static bool SaveBinaryToFile(const TArray<uint8>& Data, const FString& FilePath);
	
	/**
	 * 从文件加载二进制数据
	 * @param FilePath 源文件路径
	 * @param OutData 输出的二进制数据
	 * @return 是否成功加载
	 */
	static bool LoadBinaryFromFile(const FString& FilePath, TArray<uint8>& OutData);
	
	/**
	 * 将字符串编码为二进制数据
	 * @param Text 源文本
	 * @return 编码后的二进制数据
	 */
	static TArray<uint8> StringToBinary(const FString& Text);
	
	/**
	 * 将二进制数据解码为字符串(假设为UTF-8编码)
	 * @param Data 源二进制数据
	 * @return 解码后的字符串
	 */
	static FString BinaryToString(const TArray<uint8>& Data);
	
	/**
	 * 将二进制数据编码为Base64字符串
	 * @param Data 源二进制数据
	 * @return 编码后的Base64字符串
	 */
	static FString BinaryToBase64(const TArray<uint8>& Data);
	
	/**
	 * 将Base64字符串解码为二进制数据
	 * @param Base64String 源Base64字符串
	 * @return 解码后的二进制数据
	 */
	static TArray<uint8> Base64ToBinary(const FString& Base64String);
	
	// Utility method for blueprints to create simple JSON objects
	UFUNCTION(BlueprintCallable, Category = "WebSocket|JSON")
	UWSJsonData* CreateJsonData();
	
	// 从键值对数组创建JSON对象
	UFUNCTION(BlueprintCallable, Category = "WebSocket|JSON", meta = (DisplayName = "Create JSON From Key-Value Pairs"))
	UWSJsonData* CreateJsonDataFromKeyValuePairs(const TArray<FWSKeyValuePair>& KeyValuePairs);
	
	// 从字符串解析JSON对象
	UFUNCTION(BlueprintCallable, Category = "WebSocket|JSON")
	UWSJsonData* ParseJsonString(const FString& JsonString);
	
	// Blueprint bindable delegates
	UPROPERTY(BlueprintAssignable, Category = "WebSocket|Events")
	FWSConnectedDelegate OnConnected;
	
	UPROPERTY(BlueprintAssignable, Category = "WebSocket|Events")
	FWSConnectionErrorDelegate OnConnectionError;
	
	UPROPERTY(BlueprintAssignable, Category = "WebSocket|Events")
	FWSClosedDelegate OnClosed;
	
	UPROPERTY(BlueprintAssignable, Category = "WebSocket|Events")
	FWSMessageDelegate OnMessage;
	
	// New event-based delegate (more structured than raw message)
	UPROPERTY(BlueprintAssignable, Category = "WebSocket|Events")
	FWSEventDelegate OnEvent;
	
	/**
	 * 二进制消息代理，仅供C++代码使用
	 * 蓝图不会收到二进制消息，需要在C++中处理后再暴露给蓝图
	 * 特别是对于图片、音频、视频等复杂二进制数据
	 */
	FWSBinaryMessageDelegate OnBinaryMessage;
	
	// Get the last connection URL
	UFUNCTION(BlueprintCallable, Category = "WebSocket")
	FString GetConnectionURL() const { return LastConnectionURL; }
	
	// Get the last connection headers
	UFUNCTION(BlueprintCallable, Category = "WebSocket")
	TArray<FWSHttpHeader> GetConnectionHeaders() const { return LastConnectionHeadersArray; }
	
	// Auto-reconnect settings
	UFUNCTION(BlueprintCallable, Category = "WebSocket|AutoReconnect")
	void SetAutoReconnect(bool bEnabled, float Delay = 5.0f, int32 MaxRetries = -1);

private:
	// WebSocket instance
	TSharedPtr<IWebSocket> WebSocket;
	
	// Last connection details (for reconnect)
	FString LastConnectionURL;
	TMap<FString, FString> LastConnectionHeaders;
	TArray<FWSHttpHeader> LastConnectionHeadersArray;
	
	// 把数组转换为TMap
	TMap<FString, FString> ConvertHeadersArrayToMap(const TArray<FWSHttpHeader>& Headers);
	
	// 把TMap转换为数组
	TArray<FWSHttpHeader> ConvertHeadersMapToArray(const TMap<FString, FString>& Headers);
	
	// Auto-reconnect settings
	bool bAutoReconnectEnabled = false;
	float AutoReconnectDelay = 5.0f;
	int32 AutoReconnectMaxRetries = -1;
	int32 AutoReconnectAttempts = 0;
	FTimerHandle ReconnectTimerHandle;
	
	// 内部辅助方法，用于定时器回调
	void ReconnectInternal();
	
	// Handler functions for WebSocket callbacks
	void HandleWebSocketConnected();
	void HandleWebSocketConnectionError(const FString& Error);
	void HandleWebSocketClosed(int32 StatusCode, const FString& Reason, bool bWasClean);
	void HandleWebSocketMessage(const FString& Message);
	void HandleWebSocketRawMessage(const void* Data, SIZE_T Size, SIZE_T BytesRemaining);
	
	// Handle auto-reconnect
	void AttemptReconnect();
	
	// Parse event message
	FWSEventMessage ParseEventMessage(const FString& Message);
};