// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Actors/VolcengineASRActor.h"
#include "WSClientSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolcengineASRActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_WebSocketBP();
	WEBSOCKETBP_API UClass* Z_Construct_UClass_AVolcengineASRActor();
	WEBSOCKETBP_API UClass* Z_Construct_UClass_AVolcengineASRActor_NoRegister();
	WEBSOCKETBP_API UEnum* Z_Construct_UEnum_WebSocketBP_EVolcengineAuthMethod();
	WEBSOCKETBP_API UFunction* Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRErrorDelegate__DelegateSignature();
	WEBSOCKETBP_API UFunction* Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRResultDelegate__DelegateSignature();
	WEBSOCKETBP_API UScriptStruct* Z_Construct_UScriptStruct_FWSBinaryMessage();
	WEBSOCKETBP_API UScriptStruct* Z_Construct_UScriptStruct_FWSEventMessage();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVolcengineAuthMethod;
	static UEnum* EVolcengineAuthMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVolcengineAuthMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVolcengineAuthMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WebSocketBP_EVolcengineAuthMethod, (UObject*)Z_Construct_UPackage__Script_WebSocketBP(), TEXT("EVolcengineAuthMethod"));
		}
		return Z_Registration_Info_UEnum_EVolcengineAuthMethod.OuterSingleton;
	}
	template<> WEBSOCKETBP_API UEnum* StaticEnum<EVolcengineAuthMethod>()
	{
		return EVolcengineAuthMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_WebSocketBP_EVolcengineAuthMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WebSocketBP_EVolcengineAuthMethod_Statics::Enumerators[] = {
		{ "EVolcengineAuthMethod::Token", (int64)EVolcengineAuthMethod::Token },
		{ "EVolcengineAuthMethod::Signature", (int64)EVolcengineAuthMethod::Signature },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WebSocketBP_EVolcengineAuthMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x81\xab\xe5\xb1\xb1\xe5\xbc\x95\xe6\x93\x8e\xe9\x89\xb4\xe6\x9d\x83\xe6\x96\xb9\xe5\xbc\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/Actors/VolcengineASRActor.h" },
		{ "Signature.DisplayName", "Signature\xe9\x89\xb4\xe6\x9d\x83" },
		{ "Signature.Name", "EVolcengineAuthMethod::Signature" },
		{ "Token.DisplayName", "Token\xe9\x89\xb4\xe6\x9d\x83" },
		{ "Token.Name", "EVolcengineAuthMethod::Token" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x81\xab\xe5\xb1\xb1\xe5\xbc\x95\xe6\x93\x8e\xe9\x89\xb4\xe6\x9d\x83\xe6\x96\xb9\xe5\xbc\x8f" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WebSocketBP_EVolcengineAuthMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WebSocketBP,
		nullptr,
		"EVolcengineAuthMethod",
		"EVolcengineAuthMethod",
		Z_Construct_UEnum_WebSocketBP_EVolcengineAuthMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WebSocketBP_EVolcengineAuthMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WebSocketBP_EVolcengineAuthMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WebSocketBP_EVolcengineAuthMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_WebSocketBP_EVolcengineAuthMethod()
	{
		if (!Z_Registration_Info_UEnum_EVolcengineAuthMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVolcengineAuthMethod.InnerSingleton, Z_Construct_UEnum_WebSocketBP_EVolcengineAuthMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVolcengineAuthMethod.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRResultDelegate__DelegateSignature_Statics
	{
		struct _Script_WebSocketBP_eventVolcengineASRResultDelegate_Parms
		{
			FString RecognizedText;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecognizedText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RecognizedText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRResultDelegate__DelegateSignature_Statics::NewProp_RecognizedText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRResultDelegate__DelegateSignature_Statics::NewProp_RecognizedText = { "RecognizedText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WebSocketBP_eventVolcengineASRResultDelegate_Parms, RecognizedText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRResultDelegate__DelegateSignature_Statics::NewProp_RecognizedText_MetaData), Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRResultDelegate__DelegateSignature_Statics::NewProp_RecognizedText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRResultDelegate__DelegateSignature_Statics::NewProp_RecognizedText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x81\xab\xe5\xb1\xb1\xe5\xbc\x95\xe6\x93\x8e""ASR\xe7\xbb\x93\xe6\x9e\x9c\xe5\xa7\x94\xe6\x89\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/Actors/VolcengineASRActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x81\xab\xe5\xb1\xb1\xe5\xbc\x95\xe6\x93\x8e""ASR\xe7\xbb\x93\xe6\x9e\x9c\xe5\xa7\x94\xe6\x89\x98" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WebSocketBP, nullptr, "VolcengineASRResultDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRResultDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRResultDelegate__DelegateSignature_Statics::_Script_WebSocketBP_eventVolcengineASRResultDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRResultDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRResultDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRResultDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRResultDelegate__DelegateSignature_Statics::_Script_WebSocketBP_eventVolcengineASRResultDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FVolcengineASRResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& VolcengineASRResultDelegate, const FString& RecognizedText)
{
	struct _Script_WebSocketBP_eventVolcengineASRResultDelegate_Parms
	{
		FString RecognizedText;
	};
	_Script_WebSocketBP_eventVolcengineASRResultDelegate_Parms Parms;
	Parms.RecognizedText=RecognizedText;
	VolcengineASRResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRErrorDelegate__DelegateSignature_Statics
	{
		struct _Script_WebSocketBP_eventVolcengineASRErrorDelegate_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WebSocketBP_eventVolcengineASRErrorDelegate_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData), Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRErrorDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/VolcengineASRActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRErrorDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WebSocketBP, nullptr, "VolcengineASRErrorDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRErrorDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRErrorDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRErrorDelegate__DelegateSignature_Statics::_Script_WebSocketBP_eventVolcengineASRErrorDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRErrorDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRErrorDelegate__DelegateSignature_Statics::_Script_WebSocketBP_eventVolcengineASRErrorDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRErrorDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRErrorDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FVolcengineASRErrorDelegate_DelegateWrapper(const FMulticastScriptDelegate& VolcengineASRErrorDelegate, const FString& ErrorMessage)
{
	struct _Script_WebSocketBP_eventVolcengineASRErrorDelegate_Parms
	{
		FString ErrorMessage;
	};
	_Script_WebSocketBP_eventVolcengineASRErrorDelegate_Parms Parms;
	Parms.ErrorMessage=ErrorMessage;
	VolcengineASRErrorDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(AVolcengineASRActor::execHandleAudioCaptureError)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ErrorMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleAudioCaptureError(Z_Param_ErrorMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVolcengineASRActor::execHandleAudioCaptureStopped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleAudioCaptureStopped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVolcengineASRActor::execHandleAudioCaptureStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleAudioCaptureStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVolcengineASRActor::execHandleAudioData)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_AudioData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleAudioData(Z_Param_Out_AudioData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVolcengineASRActor::execHandleBinaryMessage)
	{
		P_GET_STRUCT_REF(FWSBinaryMessage,Z_Param_Out_BinaryMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleBinaryMessage(Z_Param_Out_BinaryMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVolcengineASRActor::execHandleEvent)
	{
		P_GET_STRUCT_REF(FWSEventMessage,Z_Param_Out_EventMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleEvent(Z_Param_Out_EventMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVolcengineASRActor::execHandleMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleMessage(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVolcengineASRActor::execHandleClosed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleClosed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVolcengineASRActor::execHandleConnectionError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleConnectionError();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVolcengineASRActor::execHandleConnected)
	{
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleConnected(Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVolcengineASRActor::execStopRecognition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopRecognition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVolcengineASRActor::execStartRecognitionFromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AudioFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRecognitionFromFile(Z_Param_AudioFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVolcengineASRActor::execStartRecognitionFromMicrophone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRecognitionFromMicrophone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVolcengineASRActor::execSetAuthMethod)
	{
		P_GET_ENUM(EVolcengineAuthMethod,Z_Param_InAuthMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAuthMethod(EVolcengineAuthMethod(Z_Param_InAuthMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVolcengineASRActor::execConfigureAuthentication)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InAppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_InAccessToken);
		P_GET_PROPERTY(FStrProperty,Z_Param_InAccessSecret);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConfigureAuthentication(Z_Param_InAppID,Z_Param_InAccessToken,Z_Param_InAccessSecret);
		P_NATIVE_END;
	}
	void AVolcengineASRActor::StaticRegisterNativesAVolcengineASRActor()
	{
		UClass* Class = AVolcengineASRActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConfigureAuthentication", &AVolcengineASRActor::execConfigureAuthentication },
			{ "HandleAudioCaptureError", &AVolcengineASRActor::execHandleAudioCaptureError },
			{ "HandleAudioCaptureStarted", &AVolcengineASRActor::execHandleAudioCaptureStarted },
			{ "HandleAudioCaptureStopped", &AVolcengineASRActor::execHandleAudioCaptureStopped },
			{ "HandleAudioData", &AVolcengineASRActor::execHandleAudioData },
			{ "HandleBinaryMessage", &AVolcengineASRActor::execHandleBinaryMessage },
			{ "HandleClosed", &AVolcengineASRActor::execHandleClosed },
			{ "HandleConnected", &AVolcengineASRActor::execHandleConnected },
			{ "HandleConnectionError", &AVolcengineASRActor::execHandleConnectionError },
			{ "HandleEvent", &AVolcengineASRActor::execHandleEvent },
			{ "HandleMessage", &AVolcengineASRActor::execHandleMessage },
			{ "SetAuthMethod", &AVolcengineASRActor::execSetAuthMethod },
			{ "StartRecognitionFromFile", &AVolcengineASRActor::execStartRecognitionFromFile },
			{ "StartRecognitionFromMicrophone", &AVolcengineASRActor::execStartRecognitionFromMicrophone },
			{ "StopRecognition", &AVolcengineASRActor::execStopRecognition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVolcengineASRActor_ConfigureAuthentication_Statics
	{
		struct VolcengineASRActor_eventConfigureAuthentication_Parms
		{
			FString InAppID;
			FString InAccessToken;
			FString InAccessSecret;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAppID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InAppID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAccessToken_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InAccessToken;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAccessSecret_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InAccessSecret;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVolcengineASRActor_ConfigureAuthentication_Statics::NewProp_InAppID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVolcengineASRActor_ConfigureAuthentication_Statics::NewProp_InAppID = { "InAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolcengineASRActor_eventConfigureAuthentication_Parms, InAppID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_ConfigureAuthentication_Statics::NewProp_InAppID_MetaData), Z_Construct_UFunction_AVolcengineASRActor_ConfigureAuthentication_Statics::NewProp_InAppID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVolcengineASRActor_ConfigureAuthentication_Statics::NewProp_InAccessToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVolcengineASRActor_ConfigureAuthentication_Statics::NewProp_InAccessToken = { "InAccessToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolcengineASRActor_eventConfigureAuthentication_Parms, InAccessToken), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_ConfigureAuthentication_Statics::NewProp_InAccessToken_MetaData), Z_Construct_UFunction_AVolcengineASRActor_ConfigureAuthentication_Statics::NewProp_InAccessToken_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVolcengineASRActor_ConfigureAuthentication_Statics::NewProp_InAccessSecret_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVolcengineASRActor_ConfigureAuthentication_Statics::NewProp_InAccessSecret = { "InAccessSecret", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolcengineASRActor_eventConfigureAuthentication_Parms, InAccessSecret), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_ConfigureAuthentication_Statics::NewProp_InAccessSecret_MetaData), Z_Construct_UFunction_AVolcengineASRActor_ConfigureAuthentication_Statics::NewProp_InAccessSecret_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVolcengineASRActor_ConfigureAuthentication_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVolcengineASRActor_ConfigureAuthentication_Statics::NewProp_InAppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVolcengineASRActor_ConfigureAuthentication_Statics::NewProp_InAccessToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVolcengineASRActor_ConfigureAuthentication_Statics::NewProp_InAccessSecret,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVolcengineASRActor_ConfigureAuthentication_Statics::Function_MetaDataParams[] = {
		{ "Category", "Volcengine|ASR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x85\x8d\xe7\xbd\xae\xe7\x81\xab\xe5\xb1\xb1\xe5\xbc\x95\xe6\x93\x8e\xe8\xae\xa4\xe8\xaf\x81\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "ModuleRelativePath", "Public/Actors/VolcengineASRActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x85\x8d\xe7\xbd\xae\xe7\x81\xab\xe5\xb1\xb1\xe5\xbc\x95\xe6\x93\x8e\xe8\xae\xa4\xe8\xaf\x81\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVolcengineASRActor_ConfigureAuthentication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVolcengineASRActor, nullptr, "ConfigureAuthentication", nullptr, nullptr, Z_Construct_UFunction_AVolcengineASRActor_ConfigureAuthentication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_ConfigureAuthentication_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVolcengineASRActor_ConfigureAuthentication_Statics::VolcengineASRActor_eventConfigureAuthentication_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_ConfigureAuthentication_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVolcengineASRActor_ConfigureAuthentication_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_ConfigureAuthentication_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AVolcengineASRActor_ConfigureAuthentication_Statics::VolcengineASRActor_eventConfigureAuthentication_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVolcengineASRActor_ConfigureAuthentication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVolcengineASRActor_ConfigureAuthentication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureError_Statics
	{
		struct VolcengineASRActor_eventHandleAudioCaptureError_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureError_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureError_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolcengineASRActor_eventHandleAudioCaptureError_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureError_Statics::NewProp_ErrorMessage_MetaData), Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureError_Statics::NewProp_ErrorMessage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureError_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/VolcengineASRActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVolcengineASRActor, nullptr, "HandleAudioCaptureError", nullptr, nullptr, Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureError_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureError_Statics::VolcengineASRActor_eventHandleAudioCaptureError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureError_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureError_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureError_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureError_Statics::VolcengineASRActor_eventHandleAudioCaptureError_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureStarted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/VolcengineASRActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVolcengineASRActor, nullptr, "HandleAudioCaptureStarted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureStarted_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureStopped_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureStopped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/VolcengineASRActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureStopped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVolcengineASRActor, nullptr, "HandleAudioCaptureStopped", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureStopped_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureStopped_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureStopped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureStopped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVolcengineASRActor_HandleAudioData_Statics
	{
		struct VolcengineASRActor_eventHandleAudioData_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVolcengineASRActor_HandleAudioData_Statics::NewProp_AudioData_Inner = { "AudioData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVolcengineASRActor_HandleAudioData_Statics::NewProp_AudioData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AVolcengineASRActor_HandleAudioData_Statics::NewProp_AudioData = { "AudioData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolcengineASRActor_eventHandleAudioData_Parms, AudioData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_HandleAudioData_Statics::NewProp_AudioData_MetaData), Z_Construct_UFunction_AVolcengineASRActor_HandleAudioData_Statics::NewProp_AudioData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVolcengineASRActor_HandleAudioData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVolcengineASRActor_HandleAudioData_Statics::NewProp_AudioData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVolcengineASRActor_HandleAudioData_Statics::NewProp_AudioData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVolcengineASRActor_HandleAudioData_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x9f\xb3\xe9\xa2\x91\xe6\x8d\x95\xe8\x8e\xb7\xe4\xba\x8b\xe4\xbb\xb6\xe5\xa4\x84\xe7\x90\x86\n" },
#endif
		{ "ModuleRelativePath", "Public/Actors/VolcengineASRActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9f\xb3\xe9\xa2\x91\xe6\x8d\x95\xe8\x8e\xb7\xe4\xba\x8b\xe4\xbb\xb6\xe5\xa4\x84\xe7\x90\x86" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVolcengineASRActor_HandleAudioData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVolcengineASRActor, nullptr, "HandleAudioData", nullptr, nullptr, Z_Construct_UFunction_AVolcengineASRActor_HandleAudioData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_HandleAudioData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVolcengineASRActor_HandleAudioData_Statics::VolcengineASRActor_eventHandleAudioData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_HandleAudioData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVolcengineASRActor_HandleAudioData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_HandleAudioData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AVolcengineASRActor_HandleAudioData_Statics::VolcengineASRActor_eventHandleAudioData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVolcengineASRActor_HandleAudioData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVolcengineASRActor_HandleAudioData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVolcengineASRActor_HandleBinaryMessage_Statics
	{
		struct VolcengineASRActor_eventHandleBinaryMessage_Parms
		{
			FWSBinaryMessage BinaryMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BinaryMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BinaryMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVolcengineASRActor_HandleBinaryMessage_Statics::NewProp_BinaryMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVolcengineASRActor_HandleBinaryMessage_Statics::NewProp_BinaryMessage = { "BinaryMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolcengineASRActor_eventHandleBinaryMessage_Parms, BinaryMessage), Z_Construct_UScriptStruct_FWSBinaryMessage, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_HandleBinaryMessage_Statics::NewProp_BinaryMessage_MetaData), Z_Construct_UFunction_AVolcengineASRActor_HandleBinaryMessage_Statics::NewProp_BinaryMessage_MetaData) }; // 1015461166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVolcengineASRActor_HandleBinaryMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVolcengineASRActor_HandleBinaryMessage_Statics::NewProp_BinaryMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVolcengineASRActor_HandleBinaryMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/VolcengineASRActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVolcengineASRActor_HandleBinaryMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVolcengineASRActor, nullptr, "HandleBinaryMessage", nullptr, nullptr, Z_Construct_UFunction_AVolcengineASRActor_HandleBinaryMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_HandleBinaryMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVolcengineASRActor_HandleBinaryMessage_Statics::VolcengineASRActor_eventHandleBinaryMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_HandleBinaryMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVolcengineASRActor_HandleBinaryMessage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_HandleBinaryMessage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AVolcengineASRActor_HandleBinaryMessage_Statics::VolcengineASRActor_eventHandleBinaryMessage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVolcengineASRActor_HandleBinaryMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVolcengineASRActor_HandleBinaryMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVolcengineASRActor_HandleClosed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVolcengineASRActor_HandleClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/VolcengineASRActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVolcengineASRActor_HandleClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVolcengineASRActor, nullptr, "HandleClosed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_HandleClosed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVolcengineASRActor_HandleClosed_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AVolcengineASRActor_HandleClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVolcengineASRActor_HandleClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVolcengineASRActor_HandleConnected_Statics
	{
		struct VolcengineASRActor_eventHandleConnected_Parms
		{
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVolcengineASRActor_HandleConnected_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((VolcengineASRActor_eventHandleConnected_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVolcengineASRActor_HandleConnected_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VolcengineASRActor_eventHandleConnected_Parms), &Z_Construct_UFunction_AVolcengineASRActor_HandleConnected_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVolcengineASRActor_HandleConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVolcengineASRActor_HandleConnected_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVolcengineASRActor_HandleConnected_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xba\x8b\xe4\xbb\xb6\xe5\xa4\x84\xe7\x90\x86\xe5\x87\xbd\xe6\x95\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/Actors/VolcengineASRActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xba\x8b\xe4\xbb\xb6\xe5\xa4\x84\xe7\x90\x86\xe5\x87\xbd\xe6\x95\xb0" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVolcengineASRActor_HandleConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVolcengineASRActor, nullptr, "HandleConnected", nullptr, nullptr, Z_Construct_UFunction_AVolcengineASRActor_HandleConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_HandleConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVolcengineASRActor_HandleConnected_Statics::VolcengineASRActor_eventHandleConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_HandleConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVolcengineASRActor_HandleConnected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_HandleConnected_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AVolcengineASRActor_HandleConnected_Statics::VolcengineASRActor_eventHandleConnected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVolcengineASRActor_HandleConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVolcengineASRActor_HandleConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVolcengineASRActor_HandleConnectionError_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVolcengineASRActor_HandleConnectionError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/VolcengineASRActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVolcengineASRActor_HandleConnectionError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVolcengineASRActor, nullptr, "HandleConnectionError", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_HandleConnectionError_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVolcengineASRActor_HandleConnectionError_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AVolcengineASRActor_HandleConnectionError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVolcengineASRActor_HandleConnectionError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVolcengineASRActor_HandleEvent_Statics
	{
		struct VolcengineASRActor_eventHandleEvent_Parms
		{
			FWSEventMessage EventMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVolcengineASRActor_HandleEvent_Statics::NewProp_EventMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVolcengineASRActor_HandleEvent_Statics::NewProp_EventMessage = { "EventMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolcengineASRActor_eventHandleEvent_Parms, EventMessage), Z_Construct_UScriptStruct_FWSEventMessage, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_HandleEvent_Statics::NewProp_EventMessage_MetaData), Z_Construct_UFunction_AVolcengineASRActor_HandleEvent_Statics::NewProp_EventMessage_MetaData) }; // 657497059
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVolcengineASRActor_HandleEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVolcengineASRActor_HandleEvent_Statics::NewProp_EventMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVolcengineASRActor_HandleEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/VolcengineASRActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVolcengineASRActor_HandleEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVolcengineASRActor, nullptr, "HandleEvent", nullptr, nullptr, Z_Construct_UFunction_AVolcengineASRActor_HandleEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_HandleEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVolcengineASRActor_HandleEvent_Statics::VolcengineASRActor_eventHandleEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_HandleEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVolcengineASRActor_HandleEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_HandleEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AVolcengineASRActor_HandleEvent_Statics::VolcengineASRActor_eventHandleEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVolcengineASRActor_HandleEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVolcengineASRActor_HandleEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVolcengineASRActor_HandleMessage_Statics
	{
		struct VolcengineASRActor_eventHandleMessage_Parms
		{
			FString Message;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVolcengineASRActor_HandleMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVolcengineASRActor_HandleMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolcengineASRActor_eventHandleMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_HandleMessage_Statics::NewProp_Message_MetaData), Z_Construct_UFunction_AVolcengineASRActor_HandleMessage_Statics::NewProp_Message_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVolcengineASRActor_HandleMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVolcengineASRActor_HandleMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVolcengineASRActor_HandleMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/VolcengineASRActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVolcengineASRActor_HandleMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVolcengineASRActor, nullptr, "HandleMessage", nullptr, nullptr, Z_Construct_UFunction_AVolcengineASRActor_HandleMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_HandleMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVolcengineASRActor_HandleMessage_Statics::VolcengineASRActor_eventHandleMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_HandleMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVolcengineASRActor_HandleMessage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_HandleMessage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AVolcengineASRActor_HandleMessage_Statics::VolcengineASRActor_eventHandleMessage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVolcengineASRActor_HandleMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVolcengineASRActor_HandleMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVolcengineASRActor_SetAuthMethod_Statics
	{
		struct VolcengineASRActor_eventSetAuthMethod_Parms
		{
			EVolcengineAuthMethod InAuthMethod;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InAuthMethod_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InAuthMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVolcengineASRActor_SetAuthMethod_Statics::NewProp_InAuthMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVolcengineASRActor_SetAuthMethod_Statics::NewProp_InAuthMethod = { "InAuthMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolcengineASRActor_eventSetAuthMethod_Parms, InAuthMethod), Z_Construct_UEnum_WebSocketBP_EVolcengineAuthMethod, METADATA_PARAMS(0, nullptr) }; // 2434719133
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVolcengineASRActor_SetAuthMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVolcengineASRActor_SetAuthMethod_Statics::NewProp_InAuthMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVolcengineASRActor_SetAuthMethod_Statics::NewProp_InAuthMethod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVolcengineASRActor_SetAuthMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Volcengine|ASR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xae\xbe\xe7\xbd\xae\xe9\x89\xb4\xe6\x9d\x83\xe6\x96\xb9\xe5\xbc\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/Actors/VolcengineASRActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe9\x89\xb4\xe6\x9d\x83\xe6\x96\xb9\xe5\xbc\x8f" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVolcengineASRActor_SetAuthMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVolcengineASRActor, nullptr, "SetAuthMethod", nullptr, nullptr, Z_Construct_UFunction_AVolcengineASRActor_SetAuthMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_SetAuthMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVolcengineASRActor_SetAuthMethod_Statics::VolcengineASRActor_eventSetAuthMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_SetAuthMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVolcengineASRActor_SetAuthMethod_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_SetAuthMethod_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AVolcengineASRActor_SetAuthMethod_Statics::VolcengineASRActor_eventSetAuthMethod_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVolcengineASRActor_SetAuthMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVolcengineASRActor_SetAuthMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVolcengineASRActor_StartRecognitionFromFile_Statics
	{
		struct VolcengineASRActor_eventStartRecognitionFromFile_Parms
		{
			FString AudioFilePath;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AudioFilePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVolcengineASRActor_StartRecognitionFromFile_Statics::NewProp_AudioFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVolcengineASRActor_StartRecognitionFromFile_Statics::NewProp_AudioFilePath = { "AudioFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolcengineASRActor_eventStartRecognitionFromFile_Parms, AudioFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_StartRecognitionFromFile_Statics::NewProp_AudioFilePath_MetaData), Z_Construct_UFunction_AVolcengineASRActor_StartRecognitionFromFile_Statics::NewProp_AudioFilePath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVolcengineASRActor_StartRecognitionFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVolcengineASRActor_StartRecognitionFromFile_Statics::NewProp_AudioFilePath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVolcengineASRActor_StartRecognitionFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Volcengine|ASR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbc\x80\xe5\xa7\x8b\xe8\xaf\xad\xe9\x9f\xb3\xe8\xaf\x86\xe5\x88\xab - \xe4\xbb\x8e\xe6\x96\x87\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/Actors/VolcengineASRActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x80\xe5\xa7\x8b\xe8\xaf\xad\xe9\x9f\xb3\xe8\xaf\x86\xe5\x88\xab - \xe4\xbb\x8e\xe6\x96\x87\xe4\xbb\xb6" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVolcengineASRActor_StartRecognitionFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVolcengineASRActor, nullptr, "StartRecognitionFromFile", nullptr, nullptr, Z_Construct_UFunction_AVolcengineASRActor_StartRecognitionFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_StartRecognitionFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVolcengineASRActor_StartRecognitionFromFile_Statics::VolcengineASRActor_eventStartRecognitionFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_StartRecognitionFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVolcengineASRActor_StartRecognitionFromFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_StartRecognitionFromFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AVolcengineASRActor_StartRecognitionFromFile_Statics::VolcengineASRActor_eventStartRecognitionFromFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVolcengineASRActor_StartRecognitionFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVolcengineASRActor_StartRecognitionFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVolcengineASRActor_StartRecognitionFromMicrophone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVolcengineASRActor_StartRecognitionFromMicrophone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Volcengine|ASR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbc\x80\xe5\xa7\x8b\xe8\xaf\xad\xe9\x9f\xb3\xe8\xaf\x86\xe5\x88\xab - \xe4\xbb\x8e\xe9\xba\xa6\xe5\x85\x8b\xe9\xa3\x8e\xe6\x8d\x95\xe8\x8e\xb7 (\xe4\xbd\xbf\xe7\x94\xa8\xe6\x96\xb0\xe7\x9a\x84\xe9\x9f\xb3\xe9\xa2\x91\xe6\x8d\x95\xe8\x8e\xb7\xe5\xad\x90\xe7\xb3\xbb\xe7\xbb\x9f)\n" },
#endif
		{ "ModuleRelativePath", "Public/Actors/VolcengineASRActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x80\xe5\xa7\x8b\xe8\xaf\xad\xe9\x9f\xb3\xe8\xaf\x86\xe5\x88\xab - \xe4\xbb\x8e\xe9\xba\xa6\xe5\x85\x8b\xe9\xa3\x8e\xe6\x8d\x95\xe8\x8e\xb7 (\xe4\xbd\xbf\xe7\x94\xa8\xe6\x96\xb0\xe7\x9a\x84\xe9\x9f\xb3\xe9\xa2\x91\xe6\x8d\x95\xe8\x8e\xb7\xe5\xad\x90\xe7\xb3\xbb\xe7\xbb\x9f)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVolcengineASRActor_StartRecognitionFromMicrophone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVolcengineASRActor, nullptr, "StartRecognitionFromMicrophone", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_StartRecognitionFromMicrophone_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVolcengineASRActor_StartRecognitionFromMicrophone_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AVolcengineASRActor_StartRecognitionFromMicrophone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVolcengineASRActor_StartRecognitionFromMicrophone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVolcengineASRActor_StopRecognition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVolcengineASRActor_StopRecognition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Volcengine|ASR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x81\x9c\xe6\xad\xa2\xe8\xaf\xad\xe9\x9f\xb3\xe8\xaf\x86\xe5\x88\xab\n" },
#endif
		{ "ModuleRelativePath", "Public/Actors/VolcengineASRActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x81\x9c\xe6\xad\xa2\xe8\xaf\xad\xe9\x9f\xb3\xe8\xaf\x86\xe5\x88\xab" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVolcengineASRActor_StopRecognition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVolcengineASRActor, nullptr, "StopRecognition", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVolcengineASRActor_StopRecognition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVolcengineASRActor_StopRecognition_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AVolcengineASRActor_StopRecognition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVolcengineASRActor_StopRecognition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVolcengineASRActor);
	UClass* Z_Construct_UClass_AVolcengineASRActor_NoRegister()
	{
		return AVolcengineASRActor::StaticClass();
	}
	struct Z_Construct_UClass_AVolcengineASRActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnASRResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnASRResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnASRError_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnASRError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccessToken_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AccessToken;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccessSecret_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AccessSecret;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AuthMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuthMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AuthMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAudioCaptureSubsystem_MetaData[];
#endif
		static void NewProp_bUseAudioCaptureSubsystem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAudioCaptureSubsystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVolcengineASRActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WebSocketBP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVolcengineASRActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AVolcengineASRActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVolcengineASRActor_ConfigureAuthentication, "ConfigureAuthentication" }, // 3723306455
		{ &Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureError, "HandleAudioCaptureError" }, // 992262492
		{ &Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureStarted, "HandleAudioCaptureStarted" }, // 1098876385
		{ &Z_Construct_UFunction_AVolcengineASRActor_HandleAudioCaptureStopped, "HandleAudioCaptureStopped" }, // 3436328545
		{ &Z_Construct_UFunction_AVolcengineASRActor_HandleAudioData, "HandleAudioData" }, // 1536261879
		{ &Z_Construct_UFunction_AVolcengineASRActor_HandleBinaryMessage, "HandleBinaryMessage" }, // 712984702
		{ &Z_Construct_UFunction_AVolcengineASRActor_HandleClosed, "HandleClosed" }, // 2366121314
		{ &Z_Construct_UFunction_AVolcengineASRActor_HandleConnected, "HandleConnected" }, // 1825029563
		{ &Z_Construct_UFunction_AVolcengineASRActor_HandleConnectionError, "HandleConnectionError" }, // 417756936
		{ &Z_Construct_UFunction_AVolcengineASRActor_HandleEvent, "HandleEvent" }, // 3630394760
		{ &Z_Construct_UFunction_AVolcengineASRActor_HandleMessage, "HandleMessage" }, // 389847844
		{ &Z_Construct_UFunction_AVolcengineASRActor_SetAuthMethod, "SetAuthMethod" }, // 3093437776
		{ &Z_Construct_UFunction_AVolcengineASRActor_StartRecognitionFromFile, "StartRecognitionFromFile" }, // 4179536720
		{ &Z_Construct_UFunction_AVolcengineASRActor_StartRecognitionFromMicrophone, "StartRecognitionFromMicrophone" }, // 4161711770
		{ &Z_Construct_UFunction_AVolcengineASRActor_StopRecognition, "StopRecognition" }, // 234018943
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVolcengineASRActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVolcengineASRActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe7\x81\xab\xe5\xb1\xb1\xe5\xbc\x95\xe6\x93\x8e\xe6\xb5\x81\xe5\xbc\x8f\xe8\xaf\xad\xe9\x9f\xb3\xe8\xaf\x86\xe5\x88\xab""Actor\n * \xe4\xbd\xbf\xe7\x94\xa8WebSocketBP\xe4\xb8\x8e\xe7\x81\xab\xe5\xb1\xb1\xe5\xbc\x95\xe6\x93\x8e""ASR\xe6\x9c\x8d\xe5\x8a\xa1\xe9\x80\x9a\xe4\xbf\xa1\n */" },
#endif
		{ "IncludePath", "Actors/VolcengineASRActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actors/VolcengineASRActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x81\xab\xe5\xb1\xb1\xe5\xbc\x95\xe6\x93\x8e\xe6\xb5\x81\xe5\xbc\x8f\xe8\xaf\xad\xe9\x9f\xb3\xe8\xaf\x86\xe5\x88\xab""Actor\n\xe4\xbd\xbf\xe7\x94\xa8WebSocketBP\xe4\xb8\x8e\xe7\x81\xab\xe5\xb1\xb1\xe5\xbc\x95\xe6\x93\x8e""ASR\xe6\x9c\x8d\xe5\x8a\xa1\xe9\x80\x9a\xe4\xbf\xa1" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_OnASRResult_MetaData[] = {
		{ "Category", "Volcengine|ASR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8e\xa5\xe6\x94\xb6\xe8\xaf\xad\xe9\x9f\xb3\xe8\xaf\x86\xe5\x88\xab\xe7\xbb\x93\xe6\x9e\x9c\xe7\x9a\x84\xe5\xa7\x94\xe6\x89\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/Actors/VolcengineASRActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8e\xa5\xe6\x94\xb6\xe8\xaf\xad\xe9\x9f\xb3\xe8\xaf\x86\xe5\x88\xab\xe7\xbb\x93\xe6\x9e\x9c\xe7\x9a\x84\xe5\xa7\x94\xe6\x89\x98" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_OnASRResult = { "OnASRResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVolcengineASRActor, OnASRResult), Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_OnASRResult_MetaData), Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_OnASRResult_MetaData) }; // 2463901890
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_OnASRError_MetaData[] = {
		{ "Category", "Volcengine|ASR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8e\xa5\xe6\x94\xb6\xe9\x94\x99\xe8\xaf\xaf\xe7\x9a\x84\xe5\xa7\x94\xe6\x89\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/Actors/VolcengineASRActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8e\xa5\xe6\x94\xb6\xe9\x94\x99\xe8\xaf\xaf\xe7\x9a\x84\xe5\xa7\x94\xe6\x89\x98" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_OnASRError = { "OnASRError", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVolcengineASRActor, OnASRError), Z_Construct_UDelegateFunction_WebSocketBP_VolcengineASRErrorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_OnASRError_MetaData), Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_OnASRError_MetaData) }; // 810864700
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_AppID_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volcengine|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x81\xab\xe5\xb1\xb1\xe5\xbc\x95\xe6\x93\x8e\xe8\xae\xa4\xe8\xaf\x81\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "ModuleRelativePath", "Public/Actors/VolcengineASRActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x81\xab\xe5\xb1\xb1\xe5\xbc\x95\xe6\x93\x8e\xe8\xae\xa4\xe8\xaf\x81\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVolcengineASRActor, AppID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_AppID_MetaData), Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_AppID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_AccessToken_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volcengine|Config" },
		{ "ModuleRelativePath", "Public/Actors/VolcengineASRActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_AccessToken = { "AccessToken", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVolcengineASRActor, AccessToken), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_AccessToken_MetaData), Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_AccessToken_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_AccessSecret_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volcengine|Config" },
		{ "ModuleRelativePath", "Public/Actors/VolcengineASRActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_AccessSecret = { "AccessSecret", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVolcengineASRActor, AccessSecret), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_AccessSecret_MetaData), Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_AccessSecret_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_AuthMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_AuthMethod_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volcengine|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x89\xb4\xe6\x9d\x83\xe6\x96\xb9\xe5\xbc\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/Actors/VolcengineASRActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x89\xb4\xe6\x9d\x83\xe6\x96\xb9\xe5\xbc\x8f" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_AuthMethod = { "AuthMethod", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVolcengineASRActor, AuthMethod), Z_Construct_UEnum_WebSocketBP_EVolcengineAuthMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_AuthMethod_MetaData), Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_AuthMethod_MetaData) }; // 2434719133
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_ServerURL_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volcengine|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8URL\n" },
#endif
		{ "ModuleRelativePath", "Public/Actors/VolcengineASRActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8URL" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_ServerURL = { "ServerURL", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVolcengineASRActor, ServerURL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_ServerURL_MetaData), Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_ServerURL_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_bUseAudioCaptureSubsystem_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volcengine|Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe4\xbd\xbf\xe7\x94\xa8\xe6\x96\xb0\xe7\x9a\x84\xe9\x9f\xb3\xe9\xa2\x91\xe6\x8d\x95\xe8\x8e\xb7\xe5\xad\x90\xe7\xb3\xbb\xe7\xbb\x9f\n" },
#endif
		{ "ModuleRelativePath", "Public/Actors/VolcengineASRActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe4\xbd\xbf\xe7\x94\xa8\xe6\x96\xb0\xe7\x9a\x84\xe9\x9f\xb3\xe9\xa2\x91\xe6\x8d\x95\xe8\x8e\xb7\xe5\xad\x90\xe7\xb3\xbb\xe7\xbb\x9f" },
#endif
	};
#endif
	void Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_bUseAudioCaptureSubsystem_SetBit(void* Obj)
	{
		((AVolcengineASRActor*)Obj)->bUseAudioCaptureSubsystem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_bUseAudioCaptureSubsystem = { "bUseAudioCaptureSubsystem", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVolcengineASRActor), &Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_bUseAudioCaptureSubsystem_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_bUseAudioCaptureSubsystem_MetaData), Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_bUseAudioCaptureSubsystem_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVolcengineASRActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_OnASRResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_OnASRError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_AccessToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_AccessSecret,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_AuthMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_AuthMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_ServerURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVolcengineASRActor_Statics::NewProp_bUseAudioCaptureSubsystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVolcengineASRActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVolcengineASRActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVolcengineASRActor_Statics::ClassParams = {
		&AVolcengineASRActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVolcengineASRActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVolcengineASRActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVolcengineASRActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AVolcengineASRActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVolcengineASRActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AVolcengineASRActor()
	{
		if (!Z_Registration_Info_UClass_AVolcengineASRActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVolcengineASRActor.OuterSingleton, Z_Construct_UClass_AVolcengineASRActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVolcengineASRActor.OuterSingleton;
	}
	template<> WEBSOCKETBP_API UClass* StaticClass<AVolcengineASRActor>()
	{
		return AVolcengineASRActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVolcengineASRActor);
	AVolcengineASRActor::~AVolcengineASRActor() {}
	struct Z_CompiledInDeferFile_FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Actors_VolcengineASRActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Actors_VolcengineASRActor_h_Statics::EnumInfo[] = {
		{ EVolcengineAuthMethod_StaticEnum, TEXT("EVolcengineAuthMethod"), &Z_Registration_Info_UEnum_EVolcengineAuthMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2434719133U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Actors_VolcengineASRActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVolcengineASRActor, AVolcengineASRActor::StaticClass, TEXT("AVolcengineASRActor"), &Z_Registration_Info_UClass_AVolcengineASRActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVolcengineASRActor), 2078513564U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Actors_VolcengineASRActor_h_1643208189(TEXT("/Script/WebSocketBP"),
		Z_CompiledInDeferFile_FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Actors_VolcengineASRActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Actors_VolcengineASRActor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Actors_VolcengineASRActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Actors_VolcengineASRActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
