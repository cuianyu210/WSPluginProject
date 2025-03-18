// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WSAudioCaptureSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWSAudioCaptureSubsystem() {}
// Cross Module References
	AUDIOCAPTURE_API UClass* Z_Construct_UClass_UAudioCaptureComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_WebSocketBP();
	WEBSOCKETBP_API UClass* Z_Construct_UClass_UWSAudioCaptureSubsystem();
	WEBSOCKETBP_API UClass* Z_Construct_UClass_UWSAudioCaptureSubsystem_NoRegister();
	WEBSOCKETBP_API UFunction* Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureDataDelegate__DelegateSignature();
	WEBSOCKETBP_API UFunction* Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureErrorDelegate__DelegateSignature();
	WEBSOCKETBP_API UFunction* Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureStartedDelegate__DelegateSignature();
	WEBSOCKETBP_API UFunction* Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureStoppedDelegate__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureDataDelegate__DelegateSignature_Statics
	{
		struct _Script_WebSocketBP_eventWSAudioCaptureDataDelegate_Parms
		{
			TArray<uint8> AudioData;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AudioData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AudioData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureDataDelegate__DelegateSignature_Statics::NewProp_AudioData_Inner = { "AudioData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureDataDelegate__DelegateSignature_Statics::NewProp_AudioData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureDataDelegate__DelegateSignature_Statics::NewProp_AudioData = { "AudioData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WebSocketBP_eventWSAudioCaptureDataDelegate_Parms, AudioData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureDataDelegate__DelegateSignature_Statics::NewProp_AudioData_MetaData), Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureDataDelegate__DelegateSignature_Statics::NewProp_AudioData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureDataDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureDataDelegate__DelegateSignature_Statics::NewProp_AudioData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureDataDelegate__DelegateSignature_Statics::NewProp_AudioData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureDataDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x9f\xb3\xe9\xa2\x91\xe6\x8d\x95\xe8\x8e\xb7\xe4\xba\x8b\xe4\xbb\xb6\xe5\xa7\x94\xe6\x89\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSAudioCaptureSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9f\xb3\xe9\xa2\x91\xe6\x8d\x95\xe8\x8e\xb7\xe4\xba\x8b\xe4\xbb\xb6\xe5\xa7\x94\xe6\x89\x98" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureDataDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WebSocketBP, nullptr, "WSAudioCaptureDataDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureDataDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureDataDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureDataDelegate__DelegateSignature_Statics::_Script_WebSocketBP_eventWSAudioCaptureDataDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureDataDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureDataDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureDataDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureDataDelegate__DelegateSignature_Statics::_Script_WebSocketBP_eventWSAudioCaptureDataDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureDataDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureDataDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FWSAudioCaptureDataDelegate_DelegateWrapper(const FMulticastScriptDelegate& WSAudioCaptureDataDelegate, TArray<uint8> const& AudioData)
{
	struct _Script_WebSocketBP_eventWSAudioCaptureDataDelegate_Parms
	{
		TArray<uint8> AudioData;
	};
	_Script_WebSocketBP_eventWSAudioCaptureDataDelegate_Parms Parms;
	Parms.AudioData=AudioData;
	WSAudioCaptureDataDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureStartedDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureStartedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/WSAudioCaptureSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureStartedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WebSocketBP, nullptr, "WSAudioCaptureStartedDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureStartedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureStartedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureStartedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureStartedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FWSAudioCaptureStartedDelegate_DelegateWrapper(const FMulticastScriptDelegate& WSAudioCaptureStartedDelegate)
{
	WSAudioCaptureStartedDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureStoppedDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureStoppedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/WSAudioCaptureSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureStoppedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WebSocketBP, nullptr, "WSAudioCaptureStoppedDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureStoppedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureStoppedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureStoppedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureStoppedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FWSAudioCaptureStoppedDelegate_DelegateWrapper(const FMulticastScriptDelegate& WSAudioCaptureStoppedDelegate)
{
	WSAudioCaptureStoppedDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureErrorDelegate__DelegateSignature_Statics
	{
		struct _Script_WebSocketBP_eventWSAudioCaptureErrorDelegate_Parms
		{
			FString ErrorMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WebSocketBP_eventWSAudioCaptureErrorDelegate_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData), Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureErrorDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/WSAudioCaptureSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureErrorDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WebSocketBP, nullptr, "WSAudioCaptureErrorDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureErrorDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureErrorDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureErrorDelegate__DelegateSignature_Statics::_Script_WebSocketBP_eventWSAudioCaptureErrorDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureErrorDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureErrorDelegate__DelegateSignature_Statics::_Script_WebSocketBP_eventWSAudioCaptureErrorDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureErrorDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureErrorDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FWSAudioCaptureErrorDelegate_DelegateWrapper(const FMulticastScriptDelegate& WSAudioCaptureErrorDelegate, const FString& ErrorMessage)
{
	struct _Script_WebSocketBP_eventWSAudioCaptureErrorDelegate_Parms
	{
		FString ErrorMessage;
	};
	_Script_WebSocketBP_eventWSAudioCaptureErrorDelegate_Parms Parms;
	Parms.ErrorMessage=ErrorMessage;
	WSAudioCaptureErrorDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UWSAudioCaptureSubsystem::execSetNumChannels)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InNumChannels);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNumChannels(Z_Param_InNumChannels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSAudioCaptureSubsystem::execSetSampleRate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InSampleRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSampleRate(Z_Param_InSampleRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSAudioCaptureSubsystem::execSetChunkSize)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InChunkSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChunkSize(Z_Param_InChunkSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSAudioCaptureSubsystem::execIsCapturing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCapturing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSAudioCaptureSubsystem::execProcessAudioFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ProcessAudioFile(Z_Param_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSAudioCaptureSubsystem::execStopCapturingAudio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopCapturingAudio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSAudioCaptureSubsystem::execStartCapturingAudio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartCapturingAudio();
		P_NATIVE_END;
	}
	void UWSAudioCaptureSubsystem::StaticRegisterNativesUWSAudioCaptureSubsystem()
	{
		UClass* Class = UWSAudioCaptureSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsCapturing", &UWSAudioCaptureSubsystem::execIsCapturing },
			{ "ProcessAudioFile", &UWSAudioCaptureSubsystem::execProcessAudioFile },
			{ "SetChunkSize", &UWSAudioCaptureSubsystem::execSetChunkSize },
			{ "SetNumChannels", &UWSAudioCaptureSubsystem::execSetNumChannels },
			{ "SetSampleRate", &UWSAudioCaptureSubsystem::execSetSampleRate },
			{ "StartCapturingAudio", &UWSAudioCaptureSubsystem::execStartCapturingAudio },
			{ "StopCapturingAudio", &UWSAudioCaptureSubsystem::execStopCapturingAudio },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWSAudioCaptureSubsystem_IsCapturing_Statics
	{
		struct WSAudioCaptureSubsystem_eventIsCapturing_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWSAudioCaptureSubsystem_IsCapturing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WSAudioCaptureSubsystem_eventIsCapturing_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWSAudioCaptureSubsystem_IsCapturing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WSAudioCaptureSubsystem_eventIsCapturing_Parms), &Z_Construct_UFunction_UWSAudioCaptureSubsystem_IsCapturing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSAudioCaptureSubsystem_IsCapturing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSAudioCaptureSubsystem_IsCapturing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSAudioCaptureSubsystem_IsCapturing_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|AudioCapture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x8e\xb7\xe5\x8f\x96\xe6\x8d\x95\xe8\x8e\xb7\xe7\x8a\xb6\xe6\x80\x81\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSAudioCaptureSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x8d\x95\xe8\x8e\xb7\xe7\x8a\xb6\xe6\x80\x81" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSAudioCaptureSubsystem_IsCapturing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSAudioCaptureSubsystem, nullptr, "IsCapturing", nullptr, nullptr, Z_Construct_UFunction_UWSAudioCaptureSubsystem_IsCapturing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSAudioCaptureSubsystem_IsCapturing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSAudioCaptureSubsystem_IsCapturing_Statics::WSAudioCaptureSubsystem_eventIsCapturing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSAudioCaptureSubsystem_IsCapturing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSAudioCaptureSubsystem_IsCapturing_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSAudioCaptureSubsystem_IsCapturing_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSAudioCaptureSubsystem_IsCapturing_Statics::WSAudioCaptureSubsystem_eventIsCapturing_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSAudioCaptureSubsystem_IsCapturing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSAudioCaptureSubsystem_IsCapturing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSAudioCaptureSubsystem_ProcessAudioFile_Statics
	{
		struct WSAudioCaptureSubsystem_eventProcessAudioFile_Parms
		{
			FString FilePath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSAudioCaptureSubsystem_ProcessAudioFile_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSAudioCaptureSubsystem_ProcessAudioFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSAudioCaptureSubsystem_eventProcessAudioFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSAudioCaptureSubsystem_ProcessAudioFile_Statics::NewProp_FilePath_MetaData), Z_Construct_UFunction_UWSAudioCaptureSubsystem_ProcessAudioFile_Statics::NewProp_FilePath_MetaData) };
	void Z_Construct_UFunction_UWSAudioCaptureSubsystem_ProcessAudioFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WSAudioCaptureSubsystem_eventProcessAudioFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWSAudioCaptureSubsystem_ProcessAudioFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WSAudioCaptureSubsystem_eventProcessAudioFile_Parms), &Z_Construct_UFunction_UWSAudioCaptureSubsystem_ProcessAudioFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSAudioCaptureSubsystem_ProcessAudioFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSAudioCaptureSubsystem_ProcessAudioFile_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSAudioCaptureSubsystem_ProcessAudioFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSAudioCaptureSubsystem_ProcessAudioFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|AudioCapture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8a\xa0\xe8\xbd\xbd\xe5\xb9\xb6\xe5\xa4\x84\xe7\x90\x86\xe9\x9f\xb3\xe9\xa2\x91\xe6\x96\x87\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSAudioCaptureSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\xa0\xe8\xbd\xbd\xe5\xb9\xb6\xe5\xa4\x84\xe7\x90\x86\xe9\x9f\xb3\xe9\xa2\x91\xe6\x96\x87\xe4\xbb\xb6" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSAudioCaptureSubsystem_ProcessAudioFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSAudioCaptureSubsystem, nullptr, "ProcessAudioFile", nullptr, nullptr, Z_Construct_UFunction_UWSAudioCaptureSubsystem_ProcessAudioFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSAudioCaptureSubsystem_ProcessAudioFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSAudioCaptureSubsystem_ProcessAudioFile_Statics::WSAudioCaptureSubsystem_eventProcessAudioFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSAudioCaptureSubsystem_ProcessAudioFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSAudioCaptureSubsystem_ProcessAudioFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSAudioCaptureSubsystem_ProcessAudioFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSAudioCaptureSubsystem_ProcessAudioFile_Statics::WSAudioCaptureSubsystem_eventProcessAudioFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSAudioCaptureSubsystem_ProcessAudioFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSAudioCaptureSubsystem_ProcessAudioFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetChunkSize_Statics
	{
		struct WSAudioCaptureSubsystem_eventSetChunkSize_Parms
		{
			int32 InChunkSize;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InChunkSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetChunkSize_Statics::NewProp_InChunkSize = { "InChunkSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSAudioCaptureSubsystem_eventSetChunkSize_Parms, InChunkSize), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetChunkSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetChunkSize_Statics::NewProp_InChunkSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetChunkSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|AudioCapture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xae\xbe\xe7\xbd\xae\xe6\xaf\x8f\xe6\xac\xa1\xe5\xa4\x84\xe7\x90\x86\xe7\x9a\x84\xe9\x9f\xb3\xe9\xa2\x91\xe6\x95\xb0\xe6\x8d\xae\xe5\xa4\xa7\xe5\xb0\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSAudioCaptureSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe6\xaf\x8f\xe6\xac\xa1\xe5\xa4\x84\xe7\x90\x86\xe7\x9a\x84\xe9\x9f\xb3\xe9\xa2\x91\xe6\x95\xb0\xe6\x8d\xae\xe5\xa4\xa7\xe5\xb0\x8f" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetChunkSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSAudioCaptureSubsystem, nullptr, "SetChunkSize", nullptr, nullptr, Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetChunkSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetChunkSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetChunkSize_Statics::WSAudioCaptureSubsystem_eventSetChunkSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetChunkSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetChunkSize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetChunkSize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetChunkSize_Statics::WSAudioCaptureSubsystem_eventSetChunkSize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetChunkSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetChunkSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetNumChannels_Statics
	{
		struct WSAudioCaptureSubsystem_eventSetNumChannels_Parms
		{
			int32 InNumChannels;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InNumChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetNumChannels_Statics::NewProp_InNumChannels = { "InNumChannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSAudioCaptureSubsystem_eventSetNumChannels_Parms, InNumChannels), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetNumChannels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetNumChannels_Statics::NewProp_InNumChannels,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetNumChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|AudioCapture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xae\xbe\xe7\xbd\xae\xe5\xa3\xb0\xe9\x81\x93\xe6\x95\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSAudioCaptureSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe5\xa3\xb0\xe9\x81\x93\xe6\x95\xb0" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetNumChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSAudioCaptureSubsystem, nullptr, "SetNumChannels", nullptr, nullptr, Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetNumChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetNumChannels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetNumChannels_Statics::WSAudioCaptureSubsystem_eventSetNumChannels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetNumChannels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetNumChannels_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetNumChannels_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetNumChannels_Statics::WSAudioCaptureSubsystem_eventSetNumChannels_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetNumChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetNumChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetSampleRate_Statics
	{
		struct WSAudioCaptureSubsystem_eventSetSampleRate_Parms
		{
			int32 InSampleRate;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InSampleRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetSampleRate_Statics::NewProp_InSampleRate = { "InSampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSAudioCaptureSubsystem_eventSetSampleRate_Parms, InSampleRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetSampleRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetSampleRate_Statics::NewProp_InSampleRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetSampleRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|AudioCapture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xae\xbe\xe7\xbd\xae\xe9\x87\x87\xe6\xa0\xb7\xe7\x8e\x87\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSAudioCaptureSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe9\x87\x87\xe6\xa0\xb7\xe7\x8e\x87" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetSampleRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSAudioCaptureSubsystem, nullptr, "SetSampleRate", nullptr, nullptr, Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetSampleRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetSampleRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetSampleRate_Statics::WSAudioCaptureSubsystem_eventSetSampleRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetSampleRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetSampleRate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetSampleRate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetSampleRate_Statics::WSAudioCaptureSubsystem_eventSetSampleRate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetSampleRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetSampleRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSAudioCaptureSubsystem_StartCapturingAudio_Statics
	{
		struct WSAudioCaptureSubsystem_eventStartCapturingAudio_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWSAudioCaptureSubsystem_StartCapturingAudio_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WSAudioCaptureSubsystem_eventStartCapturingAudio_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWSAudioCaptureSubsystem_StartCapturingAudio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WSAudioCaptureSubsystem_eventStartCapturingAudio_Parms), &Z_Construct_UFunction_UWSAudioCaptureSubsystem_StartCapturingAudio_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSAudioCaptureSubsystem_StartCapturingAudio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSAudioCaptureSubsystem_StartCapturingAudio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSAudioCaptureSubsystem_StartCapturingAudio_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|AudioCapture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbc\x80\xe5\xa7\x8b\xe4\xbb\x8e\xe9\xba\xa6\xe5\x85\x8b\xe9\xa3\x8e\xe6\x8d\x95\xe8\x8e\xb7\xe9\x9f\xb3\xe9\xa2\x91\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSAudioCaptureSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x80\xe5\xa7\x8b\xe4\xbb\x8e\xe9\xba\xa6\xe5\x85\x8b\xe9\xa3\x8e\xe6\x8d\x95\xe8\x8e\xb7\xe9\x9f\xb3\xe9\xa2\x91" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSAudioCaptureSubsystem_StartCapturingAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSAudioCaptureSubsystem, nullptr, "StartCapturingAudio", nullptr, nullptr, Z_Construct_UFunction_UWSAudioCaptureSubsystem_StartCapturingAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSAudioCaptureSubsystem_StartCapturingAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSAudioCaptureSubsystem_StartCapturingAudio_Statics::WSAudioCaptureSubsystem_eventStartCapturingAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSAudioCaptureSubsystem_StartCapturingAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSAudioCaptureSubsystem_StartCapturingAudio_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSAudioCaptureSubsystem_StartCapturingAudio_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSAudioCaptureSubsystem_StartCapturingAudio_Statics::WSAudioCaptureSubsystem_eventStartCapturingAudio_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSAudioCaptureSubsystem_StartCapturingAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSAudioCaptureSubsystem_StartCapturingAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSAudioCaptureSubsystem_StopCapturingAudio_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSAudioCaptureSubsystem_StopCapturingAudio_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|AudioCapture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x81\x9c\xe6\xad\xa2\xe6\x8d\x95\xe8\x8e\xb7\xe9\x9f\xb3\xe9\xa2\x91\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSAudioCaptureSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x81\x9c\xe6\xad\xa2\xe6\x8d\x95\xe8\x8e\xb7\xe9\x9f\xb3\xe9\xa2\x91" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSAudioCaptureSubsystem_StopCapturingAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSAudioCaptureSubsystem, nullptr, "StopCapturingAudio", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSAudioCaptureSubsystem_StopCapturingAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSAudioCaptureSubsystem_StopCapturingAudio_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UWSAudioCaptureSubsystem_StopCapturingAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSAudioCaptureSubsystem_StopCapturingAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWSAudioCaptureSubsystem);
	UClass* Z_Construct_UClass_UWSAudioCaptureSubsystem_NoRegister()
	{
		return UWSAudioCaptureSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAudioData_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCaptureStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCaptureStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCaptureStopped_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCaptureStopped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCaptureError_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCaptureError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioCaptureComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioCaptureComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_WebSocketBP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWSAudioCaptureSubsystem_IsCapturing, "IsCapturing" }, // 1415130158
		{ &Z_Construct_UFunction_UWSAudioCaptureSubsystem_ProcessAudioFile, "ProcessAudioFile" }, // 950528383
		{ &Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetChunkSize, "SetChunkSize" }, // 1303402814
		{ &Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetNumChannels, "SetNumChannels" }, // 1089589748
		{ &Z_Construct_UFunction_UWSAudioCaptureSubsystem_SetSampleRate, "SetSampleRate" }, // 2386887701
		{ &Z_Construct_UFunction_UWSAudioCaptureSubsystem_StartCapturingAudio, "StartCapturingAudio" }, // 1713999434
		{ &Z_Construct_UFunction_UWSAudioCaptureSubsystem_StopCapturingAudio, "StopCapturingAudio" }, // 3681794600
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe9\x9f\xb3\xe9\xa2\x91\xe6\x8d\x95\xe8\x8e\xb7\xe5\xad\x90\xe7\xb3\xbb\xe7\xbb\x9f\n * \n * \xe6\x8f\x90\xe4\xbe\x9b\xe9\xba\xa6\xe5\x85\x8b\xe9\xa3\x8e\xe9\x9f\xb3\xe9\xa2\x91\xe6\x8d\x95\xe8\x8e\xb7\xe5\x8a\x9f\xe8\x83\xbd\xef\xbc\x8c\xe5\xb0\x86\xe6\x8d\x95\xe8\x8e\xb7\xe7\x9a\x84\xe9\x9f\xb3\xe9\xa2\x91\xe6\x95\xb0\xe6\x8d\xae\xe9\x80\x9a\xe8\xbf\x87\xe5\xa7\x94\xe6\x89\x98\xe4\xbc\xa0\xe9\x80\x92\xe7\xbb\x99\xe7\x9b\x91\xe5\x90\xac\xe8\x80\x85\n * \xe4\xb9\x9f\xe5\x8f\xaf\xe4\xbb\xa5\xe4\xbb\x8e\xe6\x96\x87\xe4\xbb\xb6\xe5\x8a\xa0\xe8\xbd\xbd\xe9\x9f\xb3\xe9\xa2\x91\xe6\x95\xb0\xe6\x8d\xae\n * \xe6\x94\xaf\xe6\x8c\x81\xe4\xbb\xa5PCM\xe6\xa0\xbc\xe5\xbc\x8f\xe8\xbe\x93\xe5\x87\xba\xe9\x9f\xb3\xe9\xa2\x91\xe6\x95\xb0\xe6\x8d\xae\n */" },
#endif
		{ "IncludePath", "Subsystems/WSAudioCaptureSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/WSAudioCaptureSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9f\xb3\xe9\xa2\x91\xe6\x8d\x95\xe8\x8e\xb7\xe5\xad\x90\xe7\xb3\xbb\xe7\xbb\x9f\n\n\xe6\x8f\x90\xe4\xbe\x9b\xe9\xba\xa6\xe5\x85\x8b\xe9\xa3\x8e\xe9\x9f\xb3\xe9\xa2\x91\xe6\x8d\x95\xe8\x8e\xb7\xe5\x8a\x9f\xe8\x83\xbd\xef\xbc\x8c\xe5\xb0\x86\xe6\x8d\x95\xe8\x8e\xb7\xe7\x9a\x84\xe9\x9f\xb3\xe9\xa2\x91\xe6\x95\xb0\xe6\x8d\xae\xe9\x80\x9a\xe8\xbf\x87\xe5\xa7\x94\xe6\x89\x98\xe4\xbc\xa0\xe9\x80\x92\xe7\xbb\x99\xe7\x9b\x91\xe5\x90\xac\xe8\x80\x85\n\xe4\xb9\x9f\xe5\x8f\xaf\xe4\xbb\xa5\xe4\xbb\x8e\xe6\x96\x87\xe4\xbb\xb6\xe5\x8a\xa0\xe8\xbd\xbd\xe9\x9f\xb3\xe9\xa2\x91\xe6\x95\xb0\xe6\x8d\xae\n\xe6\x94\xaf\xe6\x8c\x81\xe4\xbb\xa5PCM\xe6\xa0\xbc\xe5\xbc\x8f\xe8\xbe\x93\xe5\x87\xba\xe9\x9f\xb3\xe9\xa2\x91\xe6\x95\xb0\xe6\x8d\xae" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::NewProp_OnAudioData_MetaData[] = {
		{ "Category", "WebSocket|AudioCapture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x9f\xb3\xe9\xa2\x91\xe6\x95\xb0\xe6\x8d\xae\xe6\x8d\x95\xe8\x8e\xb7\xe4\xba\x8b\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSAudioCaptureSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9f\xb3\xe9\xa2\x91\xe6\x95\xb0\xe6\x8d\xae\xe6\x8d\x95\xe8\x8e\xb7\xe4\xba\x8b\xe4\xbb\xb6" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::NewProp_OnAudioData = { "OnAudioData", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWSAudioCaptureSubsystem, OnAudioData), Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureDataDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::NewProp_OnAudioData_MetaData), Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::NewProp_OnAudioData_MetaData) }; // 401962014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::NewProp_OnCaptureStarted_MetaData[] = {
		{ "Category", "WebSocket|AudioCapture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x9f\xb3\xe9\xa2\x91\xe6\x8d\x95\xe8\x8e\xb7\xe5\xbc\x80\xe5\xa7\x8b\xe4\xba\x8b\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSAudioCaptureSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9f\xb3\xe9\xa2\x91\xe6\x8d\x95\xe8\x8e\xb7\xe5\xbc\x80\xe5\xa7\x8b\xe4\xba\x8b\xe4\xbb\xb6" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::NewProp_OnCaptureStarted = { "OnCaptureStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWSAudioCaptureSubsystem, OnCaptureStarted), Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureStartedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::NewProp_OnCaptureStarted_MetaData), Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::NewProp_OnCaptureStarted_MetaData) }; // 2320117528
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::NewProp_OnCaptureStopped_MetaData[] = {
		{ "Category", "WebSocket|AudioCapture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x9f\xb3\xe9\xa2\x91\xe6\x8d\x95\xe8\x8e\xb7\xe5\x81\x9c\xe6\xad\xa2\xe4\xba\x8b\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSAudioCaptureSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9f\xb3\xe9\xa2\x91\xe6\x8d\x95\xe8\x8e\xb7\xe5\x81\x9c\xe6\xad\xa2\xe4\xba\x8b\xe4\xbb\xb6" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::NewProp_OnCaptureStopped = { "OnCaptureStopped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWSAudioCaptureSubsystem, OnCaptureStopped), Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureStoppedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::NewProp_OnCaptureStopped_MetaData), Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::NewProp_OnCaptureStopped_MetaData) }; // 3437206106
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::NewProp_OnCaptureError_MetaData[] = {
		{ "Category", "WebSocket|AudioCapture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x9f\xb3\xe9\xa2\x91\xe6\x8d\x95\xe8\x8e\xb7\xe9\x94\x99\xe8\xaf\xaf\xe4\xba\x8b\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSAudioCaptureSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9f\xb3\xe9\xa2\x91\xe6\x8d\x95\xe8\x8e\xb7\xe9\x94\x99\xe8\xaf\xaf\xe4\xba\x8b\xe4\xbb\xb6" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::NewProp_OnCaptureError = { "OnCaptureError", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWSAudioCaptureSubsystem, OnCaptureError), Z_Construct_UDelegateFunction_WebSocketBP_WSAudioCaptureErrorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::NewProp_OnCaptureError_MetaData), Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::NewProp_OnCaptureError_MetaData) }; // 2917541655
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::NewProp_AudioCaptureComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x9f\xb3\xe9\xa2\x91\xe6\x8d\x95\xe8\x8e\xb7\xe7\xbb\x84\xe4\xbb\xb6\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Subsystems/WSAudioCaptureSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9f\xb3\xe9\xa2\x91\xe6\x8d\x95\xe8\x8e\xb7\xe7\xbb\x84\xe4\xbb\xb6" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::NewProp_AudioCaptureComponent = { "AudioCaptureComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWSAudioCaptureSubsystem, AudioCaptureComponent), Z_Construct_UClass_UAudioCaptureComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::NewProp_AudioCaptureComponent_MetaData), Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::NewProp_AudioCaptureComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::NewProp_OnAudioData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::NewProp_OnCaptureStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::NewProp_OnCaptureStopped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::NewProp_OnCaptureError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::NewProp_AudioCaptureComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWSAudioCaptureSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::ClassParams = {
		&UWSAudioCaptureSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UWSAudioCaptureSubsystem()
	{
		if (!Z_Registration_Info_UClass_UWSAudioCaptureSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWSAudioCaptureSubsystem.OuterSingleton, Z_Construct_UClass_UWSAudioCaptureSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWSAudioCaptureSubsystem.OuterSingleton;
	}
	template<> WEBSOCKETBP_API UClass* StaticClass<UWSAudioCaptureSubsystem>()
	{
		return UWSAudioCaptureSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWSAudioCaptureSubsystem);
	UWSAudioCaptureSubsystem::~UWSAudioCaptureSubsystem() {}
	struct Z_CompiledInDeferFile_FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSAudioCaptureSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSAudioCaptureSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWSAudioCaptureSubsystem, UWSAudioCaptureSubsystem::StaticClass, TEXT("UWSAudioCaptureSubsystem"), &Z_Registration_Info_UClass_UWSAudioCaptureSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWSAudioCaptureSubsystem), 1664442258U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSAudioCaptureSubsystem_h_2967898884(TEXT("/Script/WebSocketBP"),
		Z_CompiledInDeferFile_FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSAudioCaptureSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSAudioCaptureSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
