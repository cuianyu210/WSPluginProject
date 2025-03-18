// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/WSAudioCaptureSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEBSOCKETBP_WSAudioCaptureSubsystem_generated_h
#error "WSAudioCaptureSubsystem.generated.h already included, missing '#pragma once' in WSAudioCaptureSubsystem.h"
#endif
#define WEBSOCKETBP_WSAudioCaptureSubsystem_generated_h

#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSAudioCaptureSubsystem_h_11_DELEGATE \
WEBSOCKETBP_API void FWSAudioCaptureDataDelegate_DelegateWrapper(const FMulticastScriptDelegate& WSAudioCaptureDataDelegate, TArray<uint8> const& AudioData);


#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSAudioCaptureSubsystem_h_12_DELEGATE \
WEBSOCKETBP_API void FWSAudioCaptureStartedDelegate_DelegateWrapper(const FMulticastScriptDelegate& WSAudioCaptureStartedDelegate);


#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSAudioCaptureSubsystem_h_13_DELEGATE \
WEBSOCKETBP_API void FWSAudioCaptureStoppedDelegate_DelegateWrapper(const FMulticastScriptDelegate& WSAudioCaptureStoppedDelegate);


#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSAudioCaptureSubsystem_h_14_DELEGATE \
WEBSOCKETBP_API void FWSAudioCaptureErrorDelegate_DelegateWrapper(const FMulticastScriptDelegate& WSAudioCaptureErrorDelegate, const FString& ErrorMessage);


#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSAudioCaptureSubsystem_h_26_SPARSE_DATA
#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSAudioCaptureSubsystem_h_26_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSAudioCaptureSubsystem_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSAudioCaptureSubsystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetNumChannels); \
	DECLARE_FUNCTION(execSetSampleRate); \
	DECLARE_FUNCTION(execSetChunkSize); \
	DECLARE_FUNCTION(execIsCapturing); \
	DECLARE_FUNCTION(execProcessAudioFile); \
	DECLARE_FUNCTION(execStopCapturingAudio); \
	DECLARE_FUNCTION(execStartCapturingAudio);


#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSAudioCaptureSubsystem_h_26_ACCESSORS
#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSAudioCaptureSubsystem_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWSAudioCaptureSubsystem(); \
	friend struct Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics; \
public: \
	DECLARE_CLASS(UWSAudioCaptureSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebSocketBP"), NO_API) \
	DECLARE_SERIALIZER(UWSAudioCaptureSubsystem)


#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSAudioCaptureSubsystem_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWSAudioCaptureSubsystem(UWSAudioCaptureSubsystem&&); \
	NO_API UWSAudioCaptureSubsystem(const UWSAudioCaptureSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWSAudioCaptureSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWSAudioCaptureSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWSAudioCaptureSubsystem) \
	NO_API virtual ~UWSAudioCaptureSubsystem();


#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSAudioCaptureSubsystem_h_23_PROLOG
#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSAudioCaptureSubsystem_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSAudioCaptureSubsystem_h_26_SPARSE_DATA \
	FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSAudioCaptureSubsystem_h_26_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSAudioCaptureSubsystem_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSAudioCaptureSubsystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSAudioCaptureSubsystem_h_26_ACCESSORS \
	FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSAudioCaptureSubsystem_h_26_INCLASS_NO_PURE_DECLS \
	FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSAudioCaptureSubsystem_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEBSOCKETBP_API UClass* StaticClass<class UWSAudioCaptureSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSAudioCaptureSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
