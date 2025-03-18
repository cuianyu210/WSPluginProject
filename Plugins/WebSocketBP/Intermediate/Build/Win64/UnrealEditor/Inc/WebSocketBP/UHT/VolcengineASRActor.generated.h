// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/VolcengineASRActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EVolcengineAuthMethod : uint8;
struct FWSBinaryMessage;
struct FWSEventMessage;
#ifdef WEBSOCKETBP_VolcengineASRActor_generated_h
#error "VolcengineASRActor.generated.h already included, missing '#pragma once' in VolcengineASRActor.h"
#endif
#define WEBSOCKETBP_VolcengineASRActor_generated_h

#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Actors_VolcengineASRActor_h_68_DELEGATE \
WEBSOCKETBP_API void FVolcengineASRResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& VolcengineASRResultDelegate, const FString& RecognizedText);


#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Actors_VolcengineASRActor_h_69_DELEGATE \
WEBSOCKETBP_API void FVolcengineASRErrorDelegate_DelegateWrapper(const FMulticastScriptDelegate& VolcengineASRErrorDelegate, const FString& ErrorMessage);


#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Actors_VolcengineASRActor_h_78_SPARSE_DATA
#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Actors_VolcengineASRActor_h_78_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Actors_VolcengineASRActor_h_78_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Actors_VolcengineASRActor_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleAudioCaptureError); \
	DECLARE_FUNCTION(execHandleAudioCaptureStopped); \
	DECLARE_FUNCTION(execHandleAudioCaptureStarted); \
	DECLARE_FUNCTION(execHandleAudioData); \
	DECLARE_FUNCTION(execHandleBinaryMessage); \
	DECLARE_FUNCTION(execHandleEvent); \
	DECLARE_FUNCTION(execHandleMessage); \
	DECLARE_FUNCTION(execHandleClosed); \
	DECLARE_FUNCTION(execHandleConnectionError); \
	DECLARE_FUNCTION(execHandleConnected); \
	DECLARE_FUNCTION(execStopRecognition); \
	DECLARE_FUNCTION(execStartRecognitionFromFile); \
	DECLARE_FUNCTION(execStartRecognitionFromMicrophone); \
	DECLARE_FUNCTION(execSetAuthMethod); \
	DECLARE_FUNCTION(execConfigureAuthentication);


#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Actors_VolcengineASRActor_h_78_ACCESSORS
#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Actors_VolcengineASRActor_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVolcengineASRActor(); \
	friend struct Z_Construct_UClass_AVolcengineASRActor_Statics; \
public: \
	DECLARE_CLASS(AVolcengineASRActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WebSocketBP"), NO_API) \
	DECLARE_SERIALIZER(AVolcengineASRActor)


#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Actors_VolcengineASRActor_h_78_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVolcengineASRActor(AVolcengineASRActor&&); \
	NO_API AVolcengineASRActor(const AVolcengineASRActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVolcengineASRActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVolcengineASRActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVolcengineASRActor) \
	NO_API virtual ~AVolcengineASRActor();


#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Actors_VolcengineASRActor_h_75_PROLOG
#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Actors_VolcengineASRActor_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Actors_VolcengineASRActor_h_78_SPARSE_DATA \
	FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Actors_VolcengineASRActor_h_78_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Actors_VolcengineASRActor_h_78_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Actors_VolcengineASRActor_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Actors_VolcengineASRActor_h_78_ACCESSORS \
	FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Actors_VolcengineASRActor_h_78_INCLASS_NO_PURE_DECLS \
	FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Actors_VolcengineASRActor_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEBSOCKETBP_API UClass* StaticClass<class AVolcengineASRActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Actors_VolcengineASRActor_h


#define FOREACH_ENUM_EVOLCENGINEAUTHMETHOD(op) \
	op(EVolcengineAuthMethod::Token) \
	op(EVolcengineAuthMethod::Signature) 

enum class EVolcengineAuthMethod : uint8;
template<> struct TIsUEnumClass<EVolcengineAuthMethod> { enum { Value = true }; };
template<> WEBSOCKETBP_API UEnum* StaticEnum<EVolcengineAuthMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
