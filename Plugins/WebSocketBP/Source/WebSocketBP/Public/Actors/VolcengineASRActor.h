#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Subsystems/WSClientSubsystem.h"
#include "Subsystems/WSAudioCaptureSubsystem.h"
#include "HAL/PlatformProcess.h"
#include "Misc/FileHelper.h"
#include "Misc/Base64.h"
#include "HAL/RunnableThread.h"
#include "VolcengineASRActor.generated.h"

// 前向声明
class AVolcengineASRActor;

// 二进制消息处理辅助类
// 这个类帮助UObject（Actor）安全地与非动态委托交互
class FVolcengineBinaryMessageHandler
{
public:
    FVolcengineBinaryMessageHandler(AVolcengineASRActor* InOwner)
        : Owner(InOwner)
    {
    }
    
    void HandleBinaryMessage(const FWSBinaryMessage& BinaryMessage);
    
private:
    AVolcengineASRActor* Owner;
};

// 音频捕获线程
class FAudioCaptureRunnable : public FRunnable
{
public:
    FAudioCaptureRunnable(class AVolcengineASRActor* InOwner);
    virtual ~FAudioCaptureRunnable();

    // FRunnable接口
    virtual bool Init() override;
    virtual uint32 Run() override;
    virtual void Stop() override;
    virtual void Exit() override;

    void StopCapture();
    
    // 设置线程指针
    void SetThread(FRunnableThread* InThread) { Thread = InThread; }
    
    // 线程对象 - 从private移到public
    FRunnableThread* Thread;

private:
    class AVolcengineASRActor* Owner;
    FThreadSafeBool bStopThread;
    FThreadSafeBool bIsCapturing;
};

// 火山引擎鉴权方式
UENUM(BlueprintType)
enum class EVolcengineAuthMethod : uint8
{
    Token       UMETA(DisplayName = "Token鉴权"),
    Signature   UMETA(DisplayName = "Signature鉴权")
};

// 火山引擎ASR结果委托
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVolcengineASRResultDelegate, const FString&, RecognizedText);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVolcengineASRErrorDelegate, const FString&, ErrorMessage);

/**
 * 火山引擎流式语音识别Actor
 * 使用WebSocketBP与火山引擎ASR服务通信
 */
UCLASS(Blueprintable)
class WEBSOCKETBP_API AVolcengineASRActor : public AActor
{
    GENERATED_BODY()
    
public:    
    // 构造函数
    AVolcengineASRActor();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:    
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // 配置火山引擎认证信息
    UFUNCTION(BlueprintCallable, Category = "Volcengine|ASR")
    void ConfigureAuthentication(const FString& InAppID, const FString& InAccessToken, const FString& InAccessSecret);

    // 设置鉴权方式
    UFUNCTION(BlueprintCallable, Category = "Volcengine|ASR")
    void SetAuthMethod(EVolcengineAuthMethod InAuthMethod);

    // 开始语音识别 - 从麦克风捕获 (使用新的音频捕获子系统)
    UFUNCTION(BlueprintCallable, Category = "Volcengine|ASR")
    void StartRecognitionFromMicrophone();

    // 开始语音识别 - 从文件
    UFUNCTION(BlueprintCallable, Category = "Volcengine|ASR")
    void StartRecognitionFromFile(const FString& AudioFilePath);

    // 停止语音识别
    UFUNCTION(BlueprintCallable, Category = "Volcengine|ASR")
    void StopRecognition();

    // 发送音频数据
    void SendAudioData(const TArray<uint8>& AudioData, bool bIsLastPacket = false);

    // 事件处理函数
    UFUNCTION()
    void HandleConnected(bool bWasSuccessful);
    
    UFUNCTION()
    void HandleConnectionError();
    
    UFUNCTION()
    void HandleClosed();
    
    UFUNCTION()
    void HandleMessage(const FString& Message);
    
    UFUNCTION()
    void HandleEvent(const FWSEventMessage& EventMessage);
    
    UFUNCTION()
    void HandleBinaryMessage(const FWSBinaryMessage& BinaryMessage);
    
    // 音频捕获事件处理
    UFUNCTION()
    void HandleAudioData(const TArray<uint8>& AudioData);
    
    UFUNCTION()
    void HandleAudioCaptureStarted();
    
    UFUNCTION()
    void HandleAudioCaptureStopped();
    
    UFUNCTION()
    void HandleAudioCaptureError(const FString& ErrorMessage);

    // 接收语音识别结果的委托
    UPROPERTY(BlueprintAssignable, Category = "Volcengine|ASR")
    FVolcengineASRResultDelegate OnASRResult;

    // 接收错误的委托
    UPROPERTY(BlueprintAssignable, Category = "Volcengine|ASR")
    FVolcengineASRErrorDelegate OnASRError;

private:
    // WebSocketBP子系统引用
    UWSClientSubsystem* WebSocketClient;
    
    // 音频捕获子系统引用
    UWSAudioCaptureSubsystem* AudioCaptureSubsystem;

    // 火山引擎认证信息
    UPROPERTY(EditAnywhere, Category = "Volcengine|Config", meta = (AllowPrivateAccess = "true"))
    FString AppID;
    
    UPROPERTY(EditAnywhere, Category = "Volcengine|Config", meta = (AllowPrivateAccess = "true"))
    FString AccessToken;
    
    UPROPERTY(EditAnywhere, Category = "Volcengine|Config", meta = (AllowPrivateAccess = "true"))
    FString AccessSecret;

    // 鉴权方式
    UPROPERTY(EditAnywhere, Category = "Volcengine|Config", meta = (AllowPrivateAccess = "true"))
    EVolcengineAuthMethod AuthMethod;

    // 服务器URL
    UPROPERTY(EditAnywhere, Category = "Volcengine|Config", meta = (AllowPrivateAccess = "true"))
    FString ServerURL;

    // 捕获线程 (传统方式，新版本改用音频捕获子系统)
    FAudioCaptureRunnable* AudioCaptureRunnable;
    
    // 是否使用新的音频捕获子系统
    UPROPERTY(EditAnywhere, Category = "Volcengine|Audio", meta = (AllowPrivateAccess = "true"))
    bool bUseAudioCaptureSubsystem;
    
    // 发送初始配置请求
    void SendInitialRequest();

    // 生成当前时间戳
    FString GetTimestamp() const;

    // 计算签名 - MD5
    FString CalculateMD5Signature(const FString& Timestamp) const;
    
    // 计算HMAC-SHA256签名
    FString CalculateHMACSHA256Signature(const FString& Data, const FString& Key) const;
    
    // 计算火山引擎Signature鉴权所需的签名
    FString CalculateVolcengineSignature(const FString& RequestLine, const TMap<FString, FString>& Headers, const FString& Body) const;

    // 准备Token鉴权的请求头
    TArray<FWSHttpHeader> PrepareTokenAuthHeaders() const;
    
    // 准备Signature鉴权的请求头
    TArray<FWSHttpHeader> PrepareSignatureAuthHeaders() const;

    // 二进制消息处理辅助对象
    TSharedPtr<FVolcengineBinaryMessageHandler> BinaryMessageHandler;
}; 