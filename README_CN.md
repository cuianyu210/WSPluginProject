# UE5 WebSocket插件与火山引擎语音识别集成

本项目展示了一个适用于虚幻引擎5的WebSocket插件，支持C++和蓝图，并以火山引擎（字节跳动）自动语音识别服务的实际应用为示例。

[English Documentation](README.md)

## 项目概述

本插件为虚幻引擎5提供了全面的WebSocket客户端实现，允许C++和蓝图开发者建立WebSocket连接，发送/接收JSON和二进制数据，并处理WebSocket事件。此外，它还包含一个完整的音频捕获子系统和一个可直接使用的火山引擎ASR服务实现。

## WebSocket插件架构

### 核心组件

1. **WSClientSubsystem**: 提供WebSocket客户端功能的世界子系统
   - 连接管理（连接、断开、自动重连）
   - JSON消息处理（解析、创建、发送）
   - 二进制数据处理（发送、接收、转换）
   - 基于事件的通信

2. **WSAudioCaptureSubsystem**: 提供音频捕获功能的世界子系统
   - 麦克风音频捕获，支持可配置参数
   - 音频文件处理
   - PCM音频数据转换和管理

3. **VolcengineASRActor**: 可直接使用的火山引擎ASR集成Actor
   - 支持Token或Signature认证方法
   - 从麦克风实时语音识别
   - 从音频文件进行语音识别
   - 使用线程进行音频捕获以提高性能

## WebSocket技术详情

WebSocket提供了客户端和服务器之间的持久连接，允许实时、双向通信。与HTTP不同，HTTP是无状态的，每个请求都需要新建连接，而WebSocket则保持单一连接，实现高效的低延迟数据传输。

WebSocket的主要特点：
- 全双工通信（双向数据流）
- 低延迟（单一持久连接）
- 高效的协议开销（最小化帧结构）
- 同时支持文本和二进制数据

本插件利用UE5内置的WebSockets模块，同时为C++和蓝图开发者提供更高级、更易访问的API。

## 使用指南

### C++使用方法

#### 1. 设置WebSocket客户端

```cpp
// 获取WebSocket子系统
UWSClientSubsystem* WebSocketClient = GetWorld()->GetSubsystem<UWSClientSubsystem>();

// 连接到WebSocket服务器
TArray<FWSHttpHeader> Headers;
Headers.Add(FWSHttpHeader("Authorization", "Bearer your-token"));
WebSocketClient->Connect("wss://your-websocket-server.com", Headers);

// 订阅事件
WebSocketClient->OnConnected.AddDynamic(this, &YourClass::HandleConnected);
WebSocketClient->OnConnectionError.AddDynamic(this, &YourClass::HandleConnectionError);
WebSocketClient->OnClosed.AddDynamic(this, &YourClass::HandleClosed);
WebSocketClient->OnMessage.AddDynamic(this, &YourClass::HandleMessage);
WebSocketClient->OnBinaryMessage.AddDynamic(this, &YourClass::HandleBinaryMessage);
WebSocketClient->OnEvent.AddDynamic(this, &YourClass::HandleEvent);
```

#### 2. 发送数据

```cpp
// 发送JSON数据
UWSJsonData* JsonData = NewObject<UWSJsonData>();
JsonData->SetStringField("message", "Hello from UE5!");
JsonData->SetNumberField("value", 42.0f);
WebSocketClient->SendJSON("chat_message", JsonData);

// 发送二进制数据
TArray<uint8> BinaryData;
// 填充二进制数据
WebSocketClient->SendBinary(BinaryData);
```

#### 3. 使用音频捕获子系统

```cpp
// 获取音频捕获子系统
UWSAudioCaptureSubsystem* AudioCapture = GetWorld()->GetSubsystem<UWSAudioCaptureSubsystem>();

// 配置音频捕获
AudioCapture->SetSampleRate(16000);
AudioCapture->SetNumChannels(1);
AudioCapture->SetChunkSize(3200); // 16kHz下200ms的音频

// 订阅事件
AudioCapture->OnAudioData.AddDynamic(this, &YourClass::HandleAudioData);
AudioCapture->OnCaptureStarted.AddDynamic(this, &YourClass::HandleCaptureStarted);
AudioCapture->OnCaptureStopped.AddDynamic(this, &YourClass::HandleCaptureStopped);

// 开始捕获音频
AudioCapture->StartCapturingAudio();
```

### 蓝图使用方法

#### 1. 设置WebSocket客户端

1. 通过"获取世界子系统"节点获取WebSocket客户端子系统
2. 使用"简单连接"节点连接到WebSocket服务器URL
3. 绑定事件：OnConnected, OnConnectionError, OnClosed, OnMessage, OnEvent

#### 2. 发送数据

1. 使用"创建JSON数据"节点创建新的JSON数据对象
2. 使用"设置字符串字段"、"设置数值字段"等节点设置字段
3. 使用"发送JSON"节点发送JSON数据
4. 对于二进制数据，使用"发送二进制"或相关函数

#### 3. 使用火山引擎ASR Actor

1. 在场景中放置一个VolcengineASRActor
2. 使用火山引擎凭证配置认证信息
3. 调用"从麦克风开始识别"开始语音识别
4. 绑定"ASR结果"事件接收识别结果

## 火山引擎ASR集成

VolcengineASRActor提供了一个可直接使用的火山引擎ASR服务实现。

### 设置步骤

1. 获取火山引擎ASR凭证（AppID、AccessToken、AccessSecret）
2. 使用您的凭证配置Actor
3. 选择认证方法（Token或Signature）
4. 从麦克风或音频文件开始识别
5. 通过OnASRResult委托接收结果

### 示例代码 (C++)

```cpp
// 生成并配置ASR Actor
AVolcengineASRActor* ASRActor = GetWorld()->SpawnActor<AVolcengineASRActor>();
ASRActor->ConfigureAuthentication("您的AppID", "您的AccessToken", "您的AccessSecret");
ASRActor->SetAuthMethod(EVolcengineAuthMethod::Signature);

// 绑定结果事件
ASRActor->OnASRResult.AddDynamic(this, &YourClass::HandleASRResult);
ASRActor->OnASRError.AddDynamic(this, &YourClass::HandleASRError);

// 开始识别
ASRActor->StartRecognitionFromMicrophone();
```

## 许可证

本项目基于MIT许可证 - 详情请参阅LICENSE文件。

## 致谢

- 虚幻引擎WebSockets模块
- 字节跳动火山引擎ASR服务 