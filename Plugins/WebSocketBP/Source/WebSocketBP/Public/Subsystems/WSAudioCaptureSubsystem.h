#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "AudioCapture.h"
#include "AudioCaptureComponent.h"
#include "AudioDevice.h"
#include "WSAudioCaptureSubsystem.generated.h"

// 音频捕获事件委托
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWSAudioCaptureDataDelegate, const TArray<uint8>&, AudioData);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWSAudioCaptureStartedDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWSAudioCaptureStoppedDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWSAudioCaptureErrorDelegate, const FString&, ErrorMessage);

/**
 * 音频捕获子系统
 * 
 * 提供麦克风音频捕获功能，将捕获的音频数据通过委托传递给监听者
 * 也可以从文件加载音频数据
 * 支持以PCM格式输出音频数据
 */
UCLASS()
class WEBSOCKETBP_API UWSAudioCaptureSubsystem : public UWorldSubsystem
{
    GENERATED_BODY()

public:
    // 构造函数
    UWSAudioCaptureSubsystem();
    
    // 子系统接口
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;
    
    // 开始从麦克风捕获音频
    UFUNCTION(BlueprintCallable, Category = "WebSocket|AudioCapture")
    bool StartCapturingAudio();
    
    // 停止捕获音频
    UFUNCTION(BlueprintCallable, Category = "WebSocket|AudioCapture")
    void StopCapturingAudio();
    
    // 加载并处理音频文件
    UFUNCTION(BlueprintCallable, Category = "WebSocket|AudioCapture")
    bool ProcessAudioFile(const FString& FilePath);
    
    // 获取捕获状态
    UFUNCTION(BlueprintCallable, Category = "WebSocket|AudioCapture")
    bool IsCapturing() const { return bIsCapturing; }
    
    // 设置每次处理的音频数据大小
    UFUNCTION(BlueprintCallable, Category = "WebSocket|AudioCapture")
    void SetChunkSize(int32 InChunkSize);
    
    // 设置采样率
    UFUNCTION(BlueprintCallable, Category = "WebSocket|AudioCapture")
    void SetSampleRate(int32 InSampleRate);
    
    // 设置声道数
    UFUNCTION(BlueprintCallable, Category = "WebSocket|AudioCapture")
    void SetNumChannels(int32 InNumChannels);
    
    // 音频数据捕获事件
    UPROPERTY(BlueprintAssignable, Category = "WebSocket|AudioCapture")
    FWSAudioCaptureDataDelegate OnAudioData;
    
    // 音频捕获开始事件
    UPROPERTY(BlueprintAssignable, Category = "WebSocket|AudioCapture")
    FWSAudioCaptureStartedDelegate OnCaptureStarted;
    
    // 音频捕获停止事件
    UPROPERTY(BlueprintAssignable, Category = "WebSocket|AudioCapture")
    FWSAudioCaptureStoppedDelegate OnCaptureStopped;
    
    // 音频捕获错误事件
    UPROPERTY(BlueprintAssignable, Category = "WebSocket|AudioCapture")
    FWSAudioCaptureErrorDelegate OnCaptureError;

private:
    // 音频捕获对象
    Audio::FAudioCapture AudioCapture;
    
    // 音频捕获组件
    UPROPERTY()
    UAudioCaptureComponent* AudioCaptureComponent;
    
    // 是否正在捕获
    bool bIsCapturing;
    
    // 处理音频数据
    void ProcessAudioData(const float* InAudio, int32 NumSamples);
    
    // 转换PCM浮点数据为字节数据
    TArray<uint8> ConvertAudioData(const float* InAudio, int32 NumSamples);
    
    // 音频配置
    int32 SampleRate;
    int32 NumChannels;
    int32 ChunkSize;
    
    // 累积的音频数据Buffer
    TArray<uint8> AudioDataBuffer;
}; 