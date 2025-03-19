# UE5 WebSocket Plugin with Volcengine ASR Integration

This project demonstrates a WebSocket plugin for Unreal Engine 5 with C++ and Blueprint support, featuring a practical implementation with Volcengine (ByteDance) Automatic Speech Recognition service.

[中文文档](README_CN.md)

## Project Overview

This plugin provides a comprehensive WebSocket client implementation for Unreal Engine 5, allowing both C++ and Blueprint developers to establish WebSocket connections, send/receive JSON and binary data, and handle WebSocket events. Additionally, it includes a complete audio capture subsystem and a ready-to-use implementation for Volcengine ASR service.

## WebSocket Plugin Architecture

### Core Components

1. **WSClientSubsystem**: A World Subsystem providing WebSocket client functionality
   - Connection management (connect, disconnect, auto-reconnect)
   - JSON message handling (parse, create, send)
   - Binary data handling (send, receive, convert)
   - Event-based communication

2. **WSAudioCaptureSubsystem**: A World Subsystem for audio capture functionality
   - Microphone audio capture with configurable parameters
   - Audio file processing
   - PCM audio data conversion and management

3. **VolcengineASRActor**: A ready-to-use actor for Volcengine ASR integration
   - Authentication with Token or Signature methods
   - Real-time speech recognition from microphone
   - Speech recognition from audio files
   - Threaded audio capture for better performance

## WebSocket Technical Details

WebSockets provide a persistent connection between a client and server, allowing for real-time, bidirectional communication. Unlike HTTP, which is stateless and requires a new connection for each request, WebSockets maintain a single connection and enable efficient data transfer with low latency.

Key features of WebSockets:
- Full-duplex communication (bidirectional data flow)
- Low latency (single persistent connection)
- Efficient protocol overhead (minimal framing)
- Support for both text and binary data

This plugin leverages UE5's built-in WebSockets module while providing a higher-level, more accessible API for both C++ and Blueprint developers.

## Usage Guide

### C++ Usage

#### 1. Setting up the WebSocket Client

```cpp
// Get the WebSocket subsystem
UWSClientSubsystem* WebSocketClient = GetWorld()->GetSubsystem<UWSClientSubsystem>();

// Connect to a WebSocket server
TArray<FWSHttpHeader> Headers;
Headers.Add(FWSHttpHeader("Authorization", "Bearer your-token"));
WebSocketClient->Connect("wss://your-websocket-server.com", Headers);

// Subscribe to events
WebSocketClient->OnConnected.AddDynamic(this, &YourClass::HandleConnected);
WebSocketClient->OnConnectionError.AddDynamic(this, &YourClass::HandleConnectionError);
WebSocketClient->OnClosed.AddDynamic(this, &YourClass::HandleClosed);
WebSocketClient->OnMessage.AddDynamic(this, &YourClass::HandleMessage);
WebSocketClient->OnBinaryMessage.AddDynamic(this, &YourClass::HandleBinaryMessage);
WebSocketClient->OnEvent.AddDynamic(this, &YourClass::HandleEvent);
```

#### 2. Sending Data

```cpp
// Send JSON data
UWSJsonData* JsonData = NewObject<UWSJsonData>();
JsonData->SetStringField("message", "Hello from UE5!");
JsonData->SetNumberField("value", 42.0f);
WebSocketClient->SendJSON("chat_message", JsonData);

// Send binary data
TArray<uint8> BinaryData;
// Fill with your binary data
WebSocketClient->SendBinary(BinaryData);
```

#### 3. Using the Audio Capture Subsystem

```cpp
// Get the audio capture subsystem
UWSAudioCaptureSubsystem* AudioCapture = GetWorld()->GetSubsystem<UWSAudioCaptureSubsystem>();

// Configure audio capture
AudioCapture->SetSampleRate(16000);
AudioCapture->SetNumChannels(1);
AudioCapture->SetChunkSize(3200); // 200ms of audio at 16kHz

// Subscribe to events
AudioCapture->OnAudioData.AddDynamic(this, &YourClass::HandleAudioData);
AudioCapture->OnCaptureStarted.AddDynamic(this, &YourClass::HandleCaptureStarted);
AudioCapture->OnCaptureStopped.AddDynamic(this, &YourClass::HandleCaptureStopped);

// Start capturing audio
AudioCapture->StartCapturingAudio();
```

### Blueprint Usage

#### 1. Setting up the WebSocket Client

1. Get the WebSocket Client Subsystem via "Get World Subsystem" node
2. Call "Connect Simple" with your WebSocket server URL
3. Bind events: OnConnected, OnConnectionError, OnClosed, OnMessage, OnEvent

#### 2. Sending Data

1. Create a new JSON Data object with "Create JSON Data" node
2. Set fields with "Set String Field", "Set Number Field", etc.
3. Send JSON with "Send JSON" node
4. For binary data, use "Send Binary" or related functions

#### 3. Using the Volcengine ASR Actor

1. Place a VolcengineASRActor in your level
2. Configure authentication with your Volcengine credentials
3. Call "Start Recognition From Microphone" to begin speech recognition
4. Bind to the "On ASR Result" event to receive recognition results

## Volcengine ASR Integration

The VolcengineASRActor provides a ready-to-use implementation for Volcengine's ASR service.

### Setup Steps

1. Obtain Volcengine ASR credentials (AppID, AccessToken, AccessSecret)
2. Configure the actor with your credentials
3. Choose authentication method (Token or Signature)
4. Start recognition from microphone or audio file
5. Receive results via the OnASRResult delegate

### Example Code (C++)

```cpp
// Spawn and configure the ASR actor
AVolcengineASRActor* ASRActor = GetWorld()->SpawnActor<AVolcengineASRActor>();
ASRActor->ConfigureAuthentication("YourAppID", "YourAccessToken", "YourAccessSecret");
ASRActor->SetAuthMethod(EVolcengineAuthMethod::Signature);

// Bind to result events
ASRActor->OnASRResult.AddDynamic(this, &YourClass::HandleASRResult);
ASRActor->OnASRError.AddDynamic(this, &YourClass::HandleASRError);

// Start recognition
ASRActor->StartRecognitionFromMicrophone();
```

## License

This project is licensed under the MIT License - see the LICENSE file for details.

## Acknowledgements

- Unreal Engine WebSockets module
- Volcengine ASR service by ByteDance 