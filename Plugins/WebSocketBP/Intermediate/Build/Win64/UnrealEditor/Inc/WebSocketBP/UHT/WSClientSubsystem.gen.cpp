// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WSClientSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWSClientSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_WebSocketBP();
	WEBSOCKETBP_API UClass* Z_Construct_UClass_UWSClientSubsystem();
	WEBSOCKETBP_API UClass* Z_Construct_UClass_UWSClientSubsystem_NoRegister();
	WEBSOCKETBP_API UClass* Z_Construct_UClass_UWSJsonData();
	WEBSOCKETBP_API UClass* Z_Construct_UClass_UWSJsonData_NoRegister();
	WEBSOCKETBP_API UEnum* Z_Construct_UEnum_WebSocketBP_EWSBinaryType();
	WEBSOCKETBP_API UFunction* Z_Construct_UDelegateFunction_WebSocketBP_WSClosedDelegate__DelegateSignature();
	WEBSOCKETBP_API UFunction* Z_Construct_UDelegateFunction_WebSocketBP_WSConnectedDelegate__DelegateSignature();
	WEBSOCKETBP_API UFunction* Z_Construct_UDelegateFunction_WebSocketBP_WSConnectionErrorDelegate__DelegateSignature();
	WEBSOCKETBP_API UFunction* Z_Construct_UDelegateFunction_WebSocketBP_WSEventDelegate__DelegateSignature();
	WEBSOCKETBP_API UFunction* Z_Construct_UDelegateFunction_WebSocketBP_WSMessageDelegate__DelegateSignature();
	WEBSOCKETBP_API UScriptStruct* Z_Construct_UScriptStruct_FWSBinaryMessage();
	WEBSOCKETBP_API UScriptStruct* Z_Construct_UScriptStruct_FWSEventMessage();
	WEBSOCKETBP_API UScriptStruct* Z_Construct_UScriptStruct_FWSHttpHeader();
	WEBSOCKETBP_API UScriptStruct* Z_Construct_UScriptStruct_FWSKeyValuePair();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WSHttpHeader;
class UScriptStruct* FWSHttpHeader::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WSHttpHeader.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WSHttpHeader.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWSHttpHeader, (UObject*)Z_Construct_UPackage__Script_WebSocketBP(), TEXT("WSHttpHeader"));
	}
	return Z_Registration_Info_UScriptStruct_WSHttpHeader.OuterSingleton;
}
template<> WEBSOCKETBP_API UScriptStruct* StaticStruct<FWSHttpHeader>()
{
	return FWSHttpHeader::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWSHttpHeader_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWSHttpHeader_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8d\x95\xe4\xb8\xaaHTTP\xe5\xa4\xb4\xe7\xbb\x93\xe6\x9e\x84\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe8\x93\x9d\xe5\x9b\xbe\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\x95\xe4\xb8\xaaHTTP\xe5\xa4\xb4\xe7\xbb\x93\xe6\x9e\x84\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe8\x93\x9d\xe5\x9b\xbe" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FWSHttpHeader_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWSHttpHeader>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWSHttpHeader_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "WebSocket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// HTTP\xe5\xa4\xb4\xe5\x90\x8d\xe7\xa7\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HTTP\xe5\xa4\xb4\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWSHttpHeader_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWSHttpHeader, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWSHttpHeader_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FWSHttpHeader_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWSHttpHeader_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "WebSocket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// HTTP\xe5\xa4\xb4\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HTTP\xe5\xa4\xb4\xe5\x80\xbc" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWSHttpHeader_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWSHttpHeader, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWSHttpHeader_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FWSHttpHeader_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWSHttpHeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWSHttpHeader_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWSHttpHeader_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWSHttpHeader_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebSocketBP,
		nullptr,
		&NewStructOps,
		"WSHttpHeader",
		Z_Construct_UScriptStruct_FWSHttpHeader_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWSHttpHeader_Statics::PropPointers),
		sizeof(FWSHttpHeader),
		alignof(FWSHttpHeader),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWSHttpHeader_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWSHttpHeader_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWSHttpHeader_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FWSHttpHeader()
	{
		if (!Z_Registration_Info_UScriptStruct_WSHttpHeader.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WSHttpHeader.InnerSingleton, Z_Construct_UScriptStruct_FWSHttpHeader_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WSHttpHeader.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WSKeyValuePair;
class UScriptStruct* FWSKeyValuePair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WSKeyValuePair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WSKeyValuePair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWSKeyValuePair, (UObject*)Z_Construct_UPackage__Script_WebSocketBP(), TEXT("WSKeyValuePair"));
	}
	return Z_Registration_Info_UScriptStruct_WSKeyValuePair.OuterSingleton;
}
template<> WEBSOCKETBP_API UScriptStruct* StaticStruct<FWSKeyValuePair>()
{
	return FWSKeyValuePair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWSKeyValuePair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWSKeyValuePair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xae\x80\xe5\x8d\x95\xe9\x94\xae\xe5\x80\xbc\xe5\xaf\xb9\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe8\x93\x9d\xe5\x9b\xbe\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xae\x80\xe5\x8d\x95\xe9\x94\xae\xe5\x80\xbc\xe5\xaf\xb9\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe8\x93\x9d\xe5\x9b\xbe" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FWSKeyValuePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWSKeyValuePair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWSKeyValuePair_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "WebSocket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x94\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x94\xae" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWSKeyValuePair_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWSKeyValuePair, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWSKeyValuePair_Statics::NewProp_Key_MetaData), Z_Construct_UScriptStruct_FWSKeyValuePair_Statics::NewProp_Key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWSKeyValuePair_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "WebSocket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x80\xbc" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWSKeyValuePair_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWSKeyValuePair, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWSKeyValuePair_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FWSKeyValuePair_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWSKeyValuePair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWSKeyValuePair_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWSKeyValuePair_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWSKeyValuePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebSocketBP,
		nullptr,
		&NewStructOps,
		"WSKeyValuePair",
		Z_Construct_UScriptStruct_FWSKeyValuePair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWSKeyValuePair_Statics::PropPointers),
		sizeof(FWSKeyValuePair),
		alignof(FWSKeyValuePair),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWSKeyValuePair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWSKeyValuePair_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWSKeyValuePair_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FWSKeyValuePair()
	{
		if (!Z_Registration_Info_UScriptStruct_WSKeyValuePair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WSKeyValuePair.InnerSingleton, Z_Construct_UScriptStruct_FWSKeyValuePair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WSKeyValuePair.InnerSingleton;
	}
	DEFINE_FUNCTION(UWSJsonData::execToString)
	{
		P_GET_UBOOL(Z_Param_bPrettyPrint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ToString(Z_Param_bPrettyPrint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSJsonData::execGetBinaryField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBinaryField(Z_Param_FieldName,Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSJsonData::execSetBinaryField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBinaryField(Z_Param_FieldName,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSJsonData::execGetNumberArrayField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(float,Z_Param_Out_OutValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNumberArrayField(Z_Param_FieldName,Z_Param_Out_OutValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSJsonData::execGetStringArrayField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetStringArrayField(Z_Param_FieldName,Z_Param_Out_OutValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSJsonData::execSetObjectField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_OBJECT(UWSJsonData,Z_Param_JsonValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetObjectField(Z_Param_FieldName,Z_Param_JsonValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSJsonData::execSetNumberArrayField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(float,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNumberArrayField(Z_Param_FieldName,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSJsonData::execSetStringArrayField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStringArrayField(Z_Param_FieldName,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSJsonData::execGetBoolField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_UBOOL_REF(Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBoolField(Z_Param_FieldName,Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSJsonData::execGetNumberField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNumberField(Z_Param_FieldName,Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSJsonData::execGetStringField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetStringField(Z_Param_FieldName,Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSJsonData::execSetBoolField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoolField(Z_Param_FieldName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSJsonData::execSetNumberField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNumberField(Z_Param_FieldName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSJsonData::execSetStringField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStringField(Z_Param_FieldName,Z_Param_Value);
		P_NATIVE_END;
	}
	void UWSJsonData::StaticRegisterNativesUWSJsonData()
	{
		UClass* Class = UWSJsonData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBinaryField", &UWSJsonData::execGetBinaryField },
			{ "GetBoolField", &UWSJsonData::execGetBoolField },
			{ "GetNumberArrayField", &UWSJsonData::execGetNumberArrayField },
			{ "GetNumberField", &UWSJsonData::execGetNumberField },
			{ "GetStringArrayField", &UWSJsonData::execGetStringArrayField },
			{ "GetStringField", &UWSJsonData::execGetStringField },
			{ "SetBinaryField", &UWSJsonData::execSetBinaryField },
			{ "SetBoolField", &UWSJsonData::execSetBoolField },
			{ "SetNumberArrayField", &UWSJsonData::execSetNumberArrayField },
			{ "SetNumberField", &UWSJsonData::execSetNumberField },
			{ "SetObjectField", &UWSJsonData::execSetObjectField },
			{ "SetStringArrayField", &UWSJsonData::execSetStringArrayField },
			{ "SetStringField", &UWSJsonData::execSetStringField },
			{ "ToString", &UWSJsonData::execToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWSJsonData_GetBinaryField_Statics
	{
		struct WSJsonData_eventGetBinaryField_Parms
		{
			FString FieldName;
			TArray<uint8> OutValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_GetBinaryField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSJsonData_GetBinaryField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonData_eventGetBinaryField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_GetBinaryField_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UWSJsonData_GetBinaryField_Statics::NewProp_FieldName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWSJsonData_GetBinaryField_Statics::NewProp_OutValue_Inner = { "OutValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWSJsonData_GetBinaryField_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonData_eventGetBinaryField_Parms, OutValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UWSJsonData_GetBinaryField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WSJsonData_eventGetBinaryField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWSJsonData_GetBinaryField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WSJsonData_eventGetBinaryField_Parms), &Z_Construct_UFunction_UWSJsonData_GetBinaryField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSJsonData_GetBinaryField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_GetBinaryField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_GetBinaryField_Statics::NewProp_OutValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_GetBinaryField_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_GetBinaryField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_GetBinaryField_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|JSON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x8e\xb7\xe5\x8f\x96\xe4\xba\x8c\xe8\xbf\x9b\xe5\x88\xb6\xe6\x95\xb0\xe6\x8d\xae\xe5\xad\x97\xe6\xae\xb5\xef\xbc\x88\xe4\xbb\x8e""Base64\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe8\xa7\xa3\xe7\xa0\x81\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe4\xba\x8c\xe8\xbf\x9b\xe5\x88\xb6\xe6\x95\xb0\xe6\x8d\xae\xe5\xad\x97\xe6\xae\xb5\xef\xbc\x88\xe4\xbb\x8e""Base64\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe8\xa7\xa3\xe7\xa0\x81\xef\xbc\x89" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSJsonData_GetBinaryField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSJsonData, nullptr, "GetBinaryField", nullptr, nullptr, Z_Construct_UFunction_UWSJsonData_GetBinaryField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_GetBinaryField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSJsonData_GetBinaryField_Statics::WSJsonData_eventGetBinaryField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_GetBinaryField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSJsonData_GetBinaryField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_GetBinaryField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSJsonData_GetBinaryField_Statics::WSJsonData_eventGetBinaryField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSJsonData_GetBinaryField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSJsonData_GetBinaryField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSJsonData_GetBoolField_Statics
	{
		struct WSJsonData_eventGetBoolField_Parms
		{
			FString FieldName;
			bool OutValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static void NewProp_OutValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_GetBoolField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSJsonData_GetBoolField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonData_eventGetBoolField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_GetBoolField_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UWSJsonData_GetBoolField_Statics::NewProp_FieldName_MetaData) };
	void Z_Construct_UFunction_UWSJsonData_GetBoolField_Statics::NewProp_OutValue_SetBit(void* Obj)
	{
		((WSJsonData_eventGetBoolField_Parms*)Obj)->OutValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWSJsonData_GetBoolField_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WSJsonData_eventGetBoolField_Parms), &Z_Construct_UFunction_UWSJsonData_GetBoolField_Statics::NewProp_OutValue_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UWSJsonData_GetBoolField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WSJsonData_eventGetBoolField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWSJsonData_GetBoolField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WSJsonData_eventGetBoolField_Parms), &Z_Construct_UFunction_UWSJsonData_GetBoolField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSJsonData_GetBoolField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_GetBoolField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_GetBoolField_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_GetBoolField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_GetBoolField_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|JSON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\x8eJSON\xe5\xaf\xb9\xe8\xb1\xa1\xe4\xb8\xad\xe8\x8e\xb7\xe5\x8f\x96\xe5\xb8\x83\xe5\xb0\x94\xe5\xad\x97\xe6\xae\xb5\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x8eJSON\xe5\xaf\xb9\xe8\xb1\xa1\xe4\xb8\xad\xe8\x8e\xb7\xe5\x8f\x96\xe5\xb8\x83\xe5\xb0\x94\xe5\xad\x97\xe6\xae\xb5" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSJsonData_GetBoolField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSJsonData, nullptr, "GetBoolField", nullptr, nullptr, Z_Construct_UFunction_UWSJsonData_GetBoolField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_GetBoolField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSJsonData_GetBoolField_Statics::WSJsonData_eventGetBoolField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_GetBoolField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSJsonData_GetBoolField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_GetBoolField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSJsonData_GetBoolField_Statics::WSJsonData_eventGetBoolField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSJsonData_GetBoolField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSJsonData_GetBoolField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSJsonData_GetNumberArrayField_Statics
	{
		struct WSJsonData_eventGetNumberArrayField_Parms
		{
			FString FieldName;
			TArray<float> OutValues;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutValues;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_GetNumberArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSJsonData_GetNumberArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonData_eventGetNumberArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_GetNumberArrayField_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UWSJsonData_GetNumberArrayField_Statics::NewProp_FieldName_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWSJsonData_GetNumberArrayField_Statics::NewProp_OutValues_Inner = { "OutValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWSJsonData_GetNumberArrayField_Statics::NewProp_OutValues = { "OutValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonData_eventGetNumberArrayField_Parms, OutValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UWSJsonData_GetNumberArrayField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WSJsonData_eventGetNumberArrayField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWSJsonData_GetNumberArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WSJsonData_eventGetNumberArrayField_Parms), &Z_Construct_UFunction_UWSJsonData_GetNumberArrayField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSJsonData_GetNumberArrayField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_GetNumberArrayField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_GetNumberArrayField_Statics::NewProp_OutValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_GetNumberArrayField_Statics::NewProp_OutValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_GetNumberArrayField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_GetNumberArrayField_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|JSON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x8e\xb7\xe5\x8f\x96\xe6\x95\xb0\xe5\x80\xbc\xe6\x95\xb0\xe7\xbb\x84\xe5\xad\x97\xe6\xae\xb5\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x95\xb0\xe5\x80\xbc\xe6\x95\xb0\xe7\xbb\x84\xe5\xad\x97\xe6\xae\xb5" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSJsonData_GetNumberArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSJsonData, nullptr, "GetNumberArrayField", nullptr, nullptr, Z_Construct_UFunction_UWSJsonData_GetNumberArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_GetNumberArrayField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSJsonData_GetNumberArrayField_Statics::WSJsonData_eventGetNumberArrayField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_GetNumberArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSJsonData_GetNumberArrayField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_GetNumberArrayField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSJsonData_GetNumberArrayField_Statics::WSJsonData_eventGetNumberArrayField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSJsonData_GetNumberArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSJsonData_GetNumberArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSJsonData_GetNumberField_Statics
	{
		struct WSJsonData_eventGetNumberField_Parms
		{
			FString FieldName;
			float OutValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_GetNumberField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSJsonData_GetNumberField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonData_eventGetNumberField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_GetNumberField_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UWSJsonData_GetNumberField_Statics::NewProp_FieldName_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWSJsonData_GetNumberField_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonData_eventGetNumberField_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UWSJsonData_GetNumberField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WSJsonData_eventGetNumberField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWSJsonData_GetNumberField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WSJsonData_eventGetNumberField_Parms), &Z_Construct_UFunction_UWSJsonData_GetNumberField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSJsonData_GetNumberField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_GetNumberField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_GetNumberField_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_GetNumberField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_GetNumberField_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|JSON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\x8eJSON\xe5\xaf\xb9\xe8\xb1\xa1\xe4\xb8\xad\xe8\x8e\xb7\xe5\x8f\x96\xe6\x95\xb0\xe5\x80\xbc\xe5\xad\x97\xe6\xae\xb5\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x8eJSON\xe5\xaf\xb9\xe8\xb1\xa1\xe4\xb8\xad\xe8\x8e\xb7\xe5\x8f\x96\xe6\x95\xb0\xe5\x80\xbc\xe5\xad\x97\xe6\xae\xb5" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSJsonData_GetNumberField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSJsonData, nullptr, "GetNumberField", nullptr, nullptr, Z_Construct_UFunction_UWSJsonData_GetNumberField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_GetNumberField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSJsonData_GetNumberField_Statics::WSJsonData_eventGetNumberField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_GetNumberField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSJsonData_GetNumberField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_GetNumberField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSJsonData_GetNumberField_Statics::WSJsonData_eventGetNumberField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSJsonData_GetNumberField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSJsonData_GetNumberField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSJsonData_GetStringArrayField_Statics
	{
		struct WSJsonData_eventGetStringArrayField_Parms
		{
			FString FieldName;
			TArray<FString> OutValues;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutValues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutValues;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_GetStringArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSJsonData_GetStringArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonData_eventGetStringArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_GetStringArrayField_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UWSJsonData_GetStringArrayField_Statics::NewProp_FieldName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSJsonData_GetStringArrayField_Statics::NewProp_OutValues_Inner = { "OutValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWSJsonData_GetStringArrayField_Statics::NewProp_OutValues = { "OutValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonData_eventGetStringArrayField_Parms, OutValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UWSJsonData_GetStringArrayField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WSJsonData_eventGetStringArrayField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWSJsonData_GetStringArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WSJsonData_eventGetStringArrayField_Parms), &Z_Construct_UFunction_UWSJsonData_GetStringArrayField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSJsonData_GetStringArrayField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_GetStringArrayField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_GetStringArrayField_Statics::NewProp_OutValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_GetStringArrayField_Statics::NewProp_OutValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_GetStringArrayField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_GetStringArrayField_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|JSON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x8e\xb7\xe5\x8f\x96\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe6\x95\xb0\xe7\xbb\x84\xe5\xad\x97\xe6\xae\xb5\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe6\x95\xb0\xe7\xbb\x84\xe5\xad\x97\xe6\xae\xb5" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSJsonData_GetStringArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSJsonData, nullptr, "GetStringArrayField", nullptr, nullptr, Z_Construct_UFunction_UWSJsonData_GetStringArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_GetStringArrayField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSJsonData_GetStringArrayField_Statics::WSJsonData_eventGetStringArrayField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_GetStringArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSJsonData_GetStringArrayField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_GetStringArrayField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSJsonData_GetStringArrayField_Statics::WSJsonData_eventGetStringArrayField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSJsonData_GetStringArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSJsonData_GetStringArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSJsonData_GetStringField_Statics
	{
		struct WSJsonData_eventGetStringField_Parms
		{
			FString FieldName;
			FString OutValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_GetStringField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSJsonData_GetStringField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonData_eventGetStringField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_GetStringField_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UWSJsonData_GetStringField_Statics::NewProp_FieldName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSJsonData_GetStringField_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonData_eventGetStringField_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UWSJsonData_GetStringField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WSJsonData_eventGetStringField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWSJsonData_GetStringField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WSJsonData_eventGetStringField_Parms), &Z_Construct_UFunction_UWSJsonData_GetStringField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSJsonData_GetStringField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_GetStringField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_GetStringField_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_GetStringField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_GetStringField_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|JSON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\x8eJSON\xe5\xaf\xb9\xe8\xb1\xa1\xe4\xb8\xad\xe8\x8e\xb7\xe5\x8f\x96\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe5\xad\x97\xe6\xae\xb5\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x8eJSON\xe5\xaf\xb9\xe8\xb1\xa1\xe4\xb8\xad\xe8\x8e\xb7\xe5\x8f\x96\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe5\xad\x97\xe6\xae\xb5" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSJsonData_GetStringField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSJsonData, nullptr, "GetStringField", nullptr, nullptr, Z_Construct_UFunction_UWSJsonData_GetStringField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_GetStringField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSJsonData_GetStringField_Statics::WSJsonData_eventGetStringField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_GetStringField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSJsonData_GetStringField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_GetStringField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSJsonData_GetStringField_Statics::WSJsonData_eventGetStringField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSJsonData_GetStringField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSJsonData_GetStringField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSJsonData_SetBinaryField_Statics
	{
		struct WSJsonData_eventSetBinaryField_Parms
		{
			FString FieldName;
			TArray<uint8> Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_SetBinaryField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSJsonData_SetBinaryField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonData_eventSetBinaryField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetBinaryField_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UWSJsonData_SetBinaryField_Statics::NewProp_FieldName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWSJsonData_SetBinaryField_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_SetBinaryField_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWSJsonData_SetBinaryField_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonData_eventSetBinaryField_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetBinaryField_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UWSJsonData_SetBinaryField_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSJsonData_SetBinaryField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_SetBinaryField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_SetBinaryField_Statics::NewProp_Value_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_SetBinaryField_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_SetBinaryField_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|JSON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xae\xbe\xe7\xbd\xae\xe4\xba\x8c\xe8\xbf\x9b\xe5\x88\xb6\xe6\x95\xb0\xe6\x8d\xae\xe5\xad\x97\xe6\xae\xb5\xef\xbc\x88""Base64\xe7\xbc\x96\xe7\xa0\x81\xe4\xb8\xba\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe4\xba\x8c\xe8\xbf\x9b\xe5\x88\xb6\xe6\x95\xb0\xe6\x8d\xae\xe5\xad\x97\xe6\xae\xb5\xef\xbc\x88""Base64\xe7\xbc\x96\xe7\xa0\x81\xe4\xb8\xba\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xef\xbc\x89" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSJsonData_SetBinaryField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSJsonData, nullptr, "SetBinaryField", nullptr, nullptr, Z_Construct_UFunction_UWSJsonData_SetBinaryField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetBinaryField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSJsonData_SetBinaryField_Statics::WSJsonData_eventSetBinaryField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetBinaryField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSJsonData_SetBinaryField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetBinaryField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSJsonData_SetBinaryField_Statics::WSJsonData_eventSetBinaryField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSJsonData_SetBinaryField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSJsonData_SetBinaryField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSJsonData_SetBoolField_Statics
	{
		struct WSJsonData_eventSetBoolField_Parms
		{
			FString FieldName;
			bool Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_SetBoolField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSJsonData_SetBoolField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonData_eventSetBoolField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetBoolField_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UWSJsonData_SetBoolField_Statics::NewProp_FieldName_MetaData) };
	void Z_Construct_UFunction_UWSJsonData_SetBoolField_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((WSJsonData_eventSetBoolField_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWSJsonData_SetBoolField_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WSJsonData_eventSetBoolField_Parms), &Z_Construct_UFunction_UWSJsonData_SetBoolField_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSJsonData_SetBoolField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_SetBoolField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_SetBoolField_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_SetBoolField_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|JSON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xae\xbe\xe7\xbd\xae\xe5\xb8\x83\xe5\xb0\x94\xe5\xad\x97\xe6\xae\xb5\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe5\xb8\x83\xe5\xb0\x94\xe5\xad\x97\xe6\xae\xb5" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSJsonData_SetBoolField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSJsonData, nullptr, "SetBoolField", nullptr, nullptr, Z_Construct_UFunction_UWSJsonData_SetBoolField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetBoolField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSJsonData_SetBoolField_Statics::WSJsonData_eventSetBoolField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetBoolField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSJsonData_SetBoolField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetBoolField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSJsonData_SetBoolField_Statics::WSJsonData_eventSetBoolField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSJsonData_SetBoolField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSJsonData_SetBoolField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSJsonData_SetNumberArrayField_Statics
	{
		struct WSJsonData_eventSetNumberArrayField_Parms
		{
			FString FieldName;
			TArray<float> Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_SetNumberArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSJsonData_SetNumberArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonData_eventSetNumberArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetNumberArrayField_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UWSJsonData_SetNumberArrayField_Statics::NewProp_FieldName_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWSJsonData_SetNumberArrayField_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_SetNumberArrayField_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWSJsonData_SetNumberArrayField_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonData_eventSetNumberArrayField_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetNumberArrayField_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UWSJsonData_SetNumberArrayField_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSJsonData_SetNumberArrayField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_SetNumberArrayField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_SetNumberArrayField_Statics::NewProp_Value_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_SetNumberArrayField_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_SetNumberArrayField_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|JSON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xae\xbe\xe7\xbd\xae\xe6\x95\xb0\xe5\x80\xbc\xe6\x95\xb0\xe7\xbb\x84\xe5\xad\x97\xe6\xae\xb5\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe6\x95\xb0\xe5\x80\xbc\xe6\x95\xb0\xe7\xbb\x84\xe5\xad\x97\xe6\xae\xb5" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSJsonData_SetNumberArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSJsonData, nullptr, "SetNumberArrayField", nullptr, nullptr, Z_Construct_UFunction_UWSJsonData_SetNumberArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetNumberArrayField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSJsonData_SetNumberArrayField_Statics::WSJsonData_eventSetNumberArrayField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetNumberArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSJsonData_SetNumberArrayField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetNumberArrayField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSJsonData_SetNumberArrayField_Statics::WSJsonData_eventSetNumberArrayField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSJsonData_SetNumberArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSJsonData_SetNumberArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSJsonData_SetNumberField_Statics
	{
		struct WSJsonData_eventSetNumberField_Parms
		{
			FString FieldName;
			float Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_SetNumberField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSJsonData_SetNumberField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonData_eventSetNumberField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetNumberField_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UWSJsonData_SetNumberField_Statics::NewProp_FieldName_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWSJsonData_SetNumberField_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonData_eventSetNumberField_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSJsonData_SetNumberField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_SetNumberField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_SetNumberField_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_SetNumberField_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|JSON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xae\xbe\xe7\xbd\xae\xe6\x95\xb0\xe5\x80\xbc\xe5\xad\x97\xe6\xae\xb5\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe6\x95\xb0\xe5\x80\xbc\xe5\xad\x97\xe6\xae\xb5" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSJsonData_SetNumberField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSJsonData, nullptr, "SetNumberField", nullptr, nullptr, Z_Construct_UFunction_UWSJsonData_SetNumberField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetNumberField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSJsonData_SetNumberField_Statics::WSJsonData_eventSetNumberField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetNumberField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSJsonData_SetNumberField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetNumberField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSJsonData_SetNumberField_Statics::WSJsonData_eventSetNumberField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSJsonData_SetNumberField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSJsonData_SetNumberField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSJsonData_SetObjectField_Statics
	{
		struct WSJsonData_eventSetObjectField_Parms
		{
			FString FieldName;
			UWSJsonData* JsonValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_SetObjectField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSJsonData_SetObjectField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonData_eventSetObjectField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetObjectField_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UWSJsonData_SetObjectField_Statics::NewProp_FieldName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWSJsonData_SetObjectField_Statics::NewProp_JsonValue = { "JsonValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonData_eventSetObjectField_Parms, JsonValue), Z_Construct_UClass_UWSJsonData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSJsonData_SetObjectField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_SetObjectField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_SetObjectField_Statics::NewProp_JsonValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_SetObjectField_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|JSON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xae\xbe\xe7\xbd\xae\xe5\xaf\xb9\xe8\xb1\xa1\xe5\xad\x97\xe6\xae\xb5\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe5\xaf\xb9\xe8\xb1\xa1\xe5\xad\x97\xe6\xae\xb5" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSJsonData_SetObjectField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSJsonData, nullptr, "SetObjectField", nullptr, nullptr, Z_Construct_UFunction_UWSJsonData_SetObjectField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetObjectField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSJsonData_SetObjectField_Statics::WSJsonData_eventSetObjectField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetObjectField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSJsonData_SetObjectField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetObjectField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSJsonData_SetObjectField_Statics::WSJsonData_eventSetObjectField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSJsonData_SetObjectField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSJsonData_SetObjectField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSJsonData_SetStringArrayField_Statics
	{
		struct WSJsonData_eventSetStringArrayField_Parms
		{
			FString FieldName;
			TArray<FString> Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_SetStringArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSJsonData_SetStringArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonData_eventSetStringArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetStringArrayField_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UWSJsonData_SetStringArrayField_Statics::NewProp_FieldName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSJsonData_SetStringArrayField_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_SetStringArrayField_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWSJsonData_SetStringArrayField_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonData_eventSetStringArrayField_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetStringArrayField_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UWSJsonData_SetStringArrayField_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSJsonData_SetStringArrayField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_SetStringArrayField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_SetStringArrayField_Statics::NewProp_Value_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_SetStringArrayField_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_SetStringArrayField_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|JSON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xae\xbe\xe7\xbd\xae\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe6\x95\xb0\xe7\xbb\x84\xe5\xad\x97\xe6\xae\xb5\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe6\x95\xb0\xe7\xbb\x84\xe5\xad\x97\xe6\xae\xb5" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSJsonData_SetStringArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSJsonData, nullptr, "SetStringArrayField", nullptr, nullptr, Z_Construct_UFunction_UWSJsonData_SetStringArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetStringArrayField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSJsonData_SetStringArrayField_Statics::WSJsonData_eventSetStringArrayField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetStringArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSJsonData_SetStringArrayField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetStringArrayField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSJsonData_SetStringArrayField_Statics::WSJsonData_eventSetStringArrayField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSJsonData_SetStringArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSJsonData_SetStringArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSJsonData_SetStringField_Statics
	{
		struct WSJsonData_eventSetStringField_Parms
		{
			FString FieldName;
			FString Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_SetStringField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSJsonData_SetStringField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonData_eventSetStringField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetStringField_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UWSJsonData_SetStringField_Statics::NewProp_FieldName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_SetStringField_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSJsonData_SetStringField_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonData_eventSetStringField_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetStringField_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UWSJsonData_SetStringField_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSJsonData_SetStringField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_SetStringField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_SetStringField_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_SetStringField_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|JSON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xae\xbe\xe7\xbd\xae\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe5\xad\x97\xe6\xae\xb5\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe5\xad\x97\xe6\xae\xb5" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSJsonData_SetStringField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSJsonData, nullptr, "SetStringField", nullptr, nullptr, Z_Construct_UFunction_UWSJsonData_SetStringField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetStringField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSJsonData_SetStringField_Statics::WSJsonData_eventSetStringField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetStringField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSJsonData_SetStringField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_SetStringField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSJsonData_SetStringField_Statics::WSJsonData_eventSetStringField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSJsonData_SetStringField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSJsonData_SetStringField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSJsonData_ToString_Statics
	{
		struct WSJsonData_eventToString_Parms
		{
			bool bPrettyPrint;
			FString ReturnValue;
		};
		static void NewProp_bPrettyPrint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrettyPrint;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWSJsonData_ToString_Statics::NewProp_bPrettyPrint_SetBit(void* Obj)
	{
		((WSJsonData_eventToString_Parms*)Obj)->bPrettyPrint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWSJsonData_ToString_Statics::NewProp_bPrettyPrint = { "bPrettyPrint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WSJsonData_eventToString_Parms), &Z_Construct_UFunction_UWSJsonData_ToString_Statics::NewProp_bPrettyPrint_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSJsonData_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonData_eventToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSJsonData_ToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_ToString_Statics::NewProp_bPrettyPrint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonData_ToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonData_ToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|JSON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xb0\x86JSON\xe5\xaf\xb9\xe8\xb1\xa1\xe8\xbd\xac\xe6\x8d\xa2\xe4\xb8\xba\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\n" },
#endif
		{ "CPP_Default_bPrettyPrint", "false" },
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb0\x86JSON\xe5\xaf\xb9\xe8\xb1\xa1\xe8\xbd\xac\xe6\x8d\xa2\xe4\xb8\xba\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSJsonData_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSJsonData, nullptr, "ToString", nullptr, nullptr, Z_Construct_UFunction_UWSJsonData_ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_ToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSJsonData_ToString_Statics::WSJsonData_eventToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_ToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSJsonData_ToString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonData_ToString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSJsonData_ToString_Statics::WSJsonData_eventToString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSJsonData_ToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSJsonData_ToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWSJsonData);
	UClass* Z_Construct_UClass_UWSJsonData_NoRegister()
	{
		return UWSJsonData::StaticClass();
	}
	struct Z_Construct_UClass_UWSJsonData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWSJsonData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WebSocketBP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWSJsonData_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UWSJsonData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWSJsonData_GetBinaryField, "GetBinaryField" }, // 3533034410
		{ &Z_Construct_UFunction_UWSJsonData_GetBoolField, "GetBoolField" }, // 440315762
		{ &Z_Construct_UFunction_UWSJsonData_GetNumberArrayField, "GetNumberArrayField" }, // 3368579388
		{ &Z_Construct_UFunction_UWSJsonData_GetNumberField, "GetNumberField" }, // 3268993429
		{ &Z_Construct_UFunction_UWSJsonData_GetStringArrayField, "GetStringArrayField" }, // 1754761380
		{ &Z_Construct_UFunction_UWSJsonData_GetStringField, "GetStringField" }, // 2893691820
		{ &Z_Construct_UFunction_UWSJsonData_SetBinaryField, "SetBinaryField" }, // 2516816628
		{ &Z_Construct_UFunction_UWSJsonData_SetBoolField, "SetBoolField" }, // 3567930247
		{ &Z_Construct_UFunction_UWSJsonData_SetNumberArrayField, "SetNumberArrayField" }, // 2967617002
		{ &Z_Construct_UFunction_UWSJsonData_SetNumberField, "SetNumberField" }, // 804590133
		{ &Z_Construct_UFunction_UWSJsonData_SetObjectField, "SetObjectField" }, // 1258706758
		{ &Z_Construct_UFunction_UWSJsonData_SetStringArrayField, "SetStringArrayField" }, // 1114309684
		{ &Z_Construct_UFunction_UWSJsonData_SetStringField, "SetStringField" }, // 60311043
		{ &Z_Construct_UFunction_UWSJsonData_ToString, "ToString" }, // 3613546805
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWSJsonData_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWSJsonData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe7\x94\xa8\xe7\x9a\x84JSON\xe6\x95\xb0\xe6\x8d\xae\xe7\xb1\xbb\n" },
#endif
		{ "IncludePath", "Subsystems/WSClientSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe7\x94\xa8\xe7\x9a\x84JSON\xe6\x95\xb0\xe6\x8d\xae\xe7\xb1\xbb" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWSJsonData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWSJsonData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWSJsonData_Statics::ClassParams = {
		&UWSJsonData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWSJsonData_Statics::Class_MetaDataParams), Z_Construct_UClass_UWSJsonData_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UWSJsonData()
	{
		if (!Z_Registration_Info_UClass_UWSJsonData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWSJsonData.OuterSingleton, Z_Construct_UClass_UWSJsonData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWSJsonData.OuterSingleton;
	}
	template<> WEBSOCKETBP_API UClass* StaticClass<UWSJsonData>()
	{
		return UWSJsonData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWSJsonData);
	UWSJsonData::~UWSJsonData() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WSEventMessage;
class UScriptStruct* FWSEventMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WSEventMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WSEventMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWSEventMessage, (UObject*)Z_Construct_UPackage__Script_WebSocketBP(), TEXT("WSEventMessage"));
	}
	return Z_Registration_Info_UScriptStruct_WSEventMessage.OuterSingleton;
}
template<> WEBSOCKETBP_API UScriptStruct* StaticStruct<FWSEventMessage>()
{
	return FWSEventMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWSEventMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RawMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWSEventMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Message structure for events received from the WebSocket server\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Message structure for events received from the WebSocket server" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FWSEventMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWSEventMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWSEventMessage_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "WebSocket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The event name/type\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The event name/type" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWSEventMessage_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWSEventMessage, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWSEventMessage_Statics::NewProp_EventName_MetaData), Z_Construct_UScriptStruct_FWSEventMessage_Statics::NewProp_EventName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWSEventMessage_Statics::NewProp_RawMessage_MetaData[] = {
		{ "Category", "WebSocket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The raw JSON message string\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The raw JSON message string" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWSEventMessage_Statics::NewProp_RawMessage = { "RawMessage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWSEventMessage, RawMessage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWSEventMessage_Statics::NewProp_RawMessage_MetaData), Z_Construct_UScriptStruct_FWSEventMessage_Statics::NewProp_RawMessage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWSEventMessage_Statics::NewProp_JsonData_MetaData[] = {
		{ "Category", "WebSocket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbd\xbf\xe7\x94\xa8UObject\xe5\x8f\x96\xe4\xbb\xa3TSharedPtr<FJsonObject>\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbd\xbf\xe7\x94\xa8UObject\xe5\x8f\x96\xe4\xbb\xa3TSharedPtr<FJsonObject>" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWSEventMessage_Statics::NewProp_JsonData = { "JsonData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWSEventMessage, JsonData), Z_Construct_UClass_UWSJsonData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWSEventMessage_Statics::NewProp_JsonData_MetaData), Z_Construct_UScriptStruct_FWSEventMessage_Statics::NewProp_JsonData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWSEventMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWSEventMessage_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWSEventMessage_Statics::NewProp_RawMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWSEventMessage_Statics::NewProp_JsonData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWSEventMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebSocketBP,
		nullptr,
		&NewStructOps,
		"WSEventMessage",
		Z_Construct_UScriptStruct_FWSEventMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWSEventMessage_Statics::PropPointers),
		sizeof(FWSEventMessage),
		alignof(FWSEventMessage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWSEventMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWSEventMessage_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWSEventMessage_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FWSEventMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_WSEventMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WSEventMessage.InnerSingleton, Z_Construct_UScriptStruct_FWSEventMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WSEventMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WSBinaryMessage;
class UScriptStruct* FWSBinaryMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WSBinaryMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WSBinaryMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWSBinaryMessage, (UObject*)Z_Construct_UPackage__Script_WebSocketBP(), TEXT("WSBinaryMessage"));
	}
	return Z_Registration_Info_UScriptStruct_WSBinaryMessage.OuterSingleton;
}
template<> WEBSOCKETBP_API UScriptStruct* StaticStruct<FWSBinaryMessage>()
{
	return FWSBinaryMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWSBinaryMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWSBinaryMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xba\x8c\xe8\xbf\x9b\xe5\x88\xb6\xe6\xb6\x88\xe6\x81\xaf\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\xef\xbc\x8c\xe4\xb8\xbb\xe8\xa6\x81\xe4\xbe\x9b""C++\xe4\xbd\xbf\xe7\x94\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xba\x8c\xe8\xbf\x9b\xe5\x88\xb6\xe6\xb6\x88\xe6\x81\xaf\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\xef\xbc\x8c\xe4\xb8\xbb\xe8\xa6\x81\xe4\xbe\x9b""C++\xe4\xbd\xbf\xe7\x94\xa8" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FWSBinaryMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWSBinaryMessage>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWSBinaryMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebSocketBP,
		nullptr,
		&NewStructOps,
		"WSBinaryMessage",
		nullptr,
		0,
		sizeof(FWSBinaryMessage),
		alignof(FWSBinaryMessage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWSBinaryMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWSBinaryMessage_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWSBinaryMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_WSBinaryMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WSBinaryMessage.InnerSingleton, Z_Construct_UScriptStruct_FWSBinaryMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WSBinaryMessage.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWSBinaryType;
	static UEnum* EWSBinaryType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWSBinaryType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWSBinaryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WebSocketBP_EWSBinaryType, (UObject*)Z_Construct_UPackage__Script_WebSocketBP(), TEXT("EWSBinaryType"));
		}
		return Z_Registration_Info_UEnum_EWSBinaryType.OuterSingleton;
	}
	template<> WEBSOCKETBP_API UEnum* StaticEnum<EWSBinaryType>()
	{
		return EWSBinaryType_StaticEnum();
	}
	struct Z_Construct_UEnum_WebSocketBP_EWSBinaryType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WebSocketBP_EWSBinaryType_Statics::Enumerators[] = {
		{ "EWSBinaryType::Unknown", (int64)EWSBinaryType::Unknown },
		{ "EWSBinaryType::Image_JPEG", (int64)EWSBinaryType::Image_JPEG },
		{ "EWSBinaryType::Image_PNG", (int64)EWSBinaryType::Image_PNG },
		{ "EWSBinaryType::Image_GIF", (int64)EWSBinaryType::Image_GIF },
		{ "EWSBinaryType::Image_WEBP", (int64)EWSBinaryType::Image_WEBP },
		{ "EWSBinaryType::Audio_MP3", (int64)EWSBinaryType::Audio_MP3 },
		{ "EWSBinaryType::Audio_WAV", (int64)EWSBinaryType::Audio_WAV },
		{ "EWSBinaryType::Audio_OGG", (int64)EWSBinaryType::Audio_OGG },
		{ "EWSBinaryType::Video_MP4", (int64)EWSBinaryType::Video_MP4 },
		{ "EWSBinaryType::Video_WEBM", (int64)EWSBinaryType::Video_WEBM },
		{ "EWSBinaryType::PDF", (int64)EWSBinaryType::PDF },
		{ "EWSBinaryType::ZIP", (int64)EWSBinaryType::ZIP },
		{ "EWSBinaryType::Custom", (int64)EWSBinaryType::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WebSocketBP_EWSBinaryType_Statics::Enum_MetaDataParams[] = {
		{ "Audio_MP3.Name", "EWSBinaryType::Audio_MP3" },
		{ "Audio_OGG.Name", "EWSBinaryType::Audio_OGG" },
		{ "Audio_WAV.Name", "EWSBinaryType::Audio_WAV" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xb8\xb8\xe8\xa7\x81\xe4\xba\x8c\xe8\xbf\x9b\xe5\x88\xb6\xe6\x95\xb0\xe6\x8d\xaeMIME\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "Custom.Name", "EWSBinaryType::Custom" },
		{ "Image_GIF.Name", "EWSBinaryType::Image_GIF" },
		{ "Image_JPEG.Name", "EWSBinaryType::Image_JPEG" },
		{ "Image_PNG.Name", "EWSBinaryType::Image_PNG" },
		{ "Image_WEBP.Name", "EWSBinaryType::Image_WEBP" },
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
		{ "PDF.Name", "EWSBinaryType::PDF" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb8\xb8\xe8\xa7\x81\xe4\xba\x8c\xe8\xbf\x9b\xe5\x88\xb6\xe6\x95\xb0\xe6\x8d\xaeMIME\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
		{ "Unknown.Name", "EWSBinaryType::Unknown" },
		{ "Video_MP4.Name", "EWSBinaryType::Video_MP4" },
		{ "Video_WEBM.Name", "EWSBinaryType::Video_WEBM" },
		{ "ZIP.Name", "EWSBinaryType::ZIP" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WebSocketBP_EWSBinaryType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WebSocketBP,
		nullptr,
		"EWSBinaryType",
		"EWSBinaryType",
		Z_Construct_UEnum_WebSocketBP_EWSBinaryType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WebSocketBP_EWSBinaryType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WebSocketBP_EWSBinaryType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WebSocketBP_EWSBinaryType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_WebSocketBP_EWSBinaryType()
	{
		if (!Z_Registration_Info_UEnum_EWSBinaryType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWSBinaryType.InnerSingleton, Z_Construct_UEnum_WebSocketBP_EWSBinaryType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWSBinaryType.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_WebSocketBP_WSConnectedDelegate__DelegateSignature_Statics
	{
		struct _Script_WebSocketBP_eventWSConnectedDelegate_Parms
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
	void Z_Construct_UDelegateFunction_WebSocketBP_WSConnectedDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_WebSocketBP_eventWSConnectedDelegate_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_WebSocketBP_WSConnectedDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_WebSocketBP_eventWSConnectedDelegate_Parms), &Z_Construct_UDelegateFunction_WebSocketBP_WSConnectedDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WebSocketBP_WSConnectedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WebSocketBP_WSConnectedDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WebSocketBP_WSConnectedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dynamic multicast delegates for blueprint binding\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic multicast delegates for blueprint binding" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WebSocketBP_WSConnectedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WebSocketBP, nullptr, "WSConnectedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WebSocketBP_WSConnectedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_WSConnectedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WebSocketBP_WSConnectedDelegate__DelegateSignature_Statics::_Script_WebSocketBP_eventWSConnectedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_WSConnectedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WebSocketBP_WSConnectedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_WSConnectedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_WebSocketBP_WSConnectedDelegate__DelegateSignature_Statics::_Script_WebSocketBP_eventWSConnectedDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_WebSocketBP_WSConnectedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WebSocketBP_WSConnectedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FWSConnectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& WSConnectedDelegate, bool bWasSuccessful)
{
	struct _Script_WebSocketBP_eventWSConnectedDelegate_Parms
	{
		bool bWasSuccessful;
	};
	_Script_WebSocketBP_eventWSConnectedDelegate_Parms Parms;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	WSConnectedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_WebSocketBP_WSConnectionErrorDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WebSocketBP_WSConnectionErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WebSocketBP_WSConnectionErrorDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WebSocketBP, nullptr, "WSConnectionErrorDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_WSConnectionErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WebSocketBP_WSConnectionErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_WebSocketBP_WSConnectionErrorDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WebSocketBP_WSConnectionErrorDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FWSConnectionErrorDelegate_DelegateWrapper(const FMulticastScriptDelegate& WSConnectionErrorDelegate)
{
	WSConnectionErrorDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_WebSocketBP_WSClosedDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WebSocketBP_WSClosedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WebSocketBP_WSClosedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WebSocketBP, nullptr, "WSClosedDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_WSClosedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WebSocketBP_WSClosedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_WebSocketBP_WSClosedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WebSocketBP_WSClosedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FWSClosedDelegate_DelegateWrapper(const FMulticastScriptDelegate& WSClosedDelegate)
{
	WSClosedDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_WebSocketBP_WSMessageDelegate__DelegateSignature_Statics
	{
		struct _Script_WebSocketBP_eventWSMessageDelegate_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WebSocketBP_WSMessageDelegate__DelegateSignature_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_WebSocketBP_WSMessageDelegate__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WebSocketBP_eventWSMessageDelegate_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_WSMessageDelegate__DelegateSignature_Statics::NewProp_Message_MetaData), Z_Construct_UDelegateFunction_WebSocketBP_WSMessageDelegate__DelegateSignature_Statics::NewProp_Message_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WebSocketBP_WSMessageDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WebSocketBP_WSMessageDelegate__DelegateSignature_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WebSocketBP_WSMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WebSocketBP_WSMessageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WebSocketBP, nullptr, "WSMessageDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WebSocketBP_WSMessageDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_WSMessageDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WebSocketBP_WSMessageDelegate__DelegateSignature_Statics::_Script_WebSocketBP_eventWSMessageDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_WSMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WebSocketBP_WSMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_WSMessageDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_WebSocketBP_WSMessageDelegate__DelegateSignature_Statics::_Script_WebSocketBP_eventWSMessageDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_WebSocketBP_WSMessageDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WebSocketBP_WSMessageDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FWSMessageDelegate_DelegateWrapper(const FMulticastScriptDelegate& WSMessageDelegate, const FString& Message)
{
	struct _Script_WebSocketBP_eventWSMessageDelegate_Parms
	{
		FString Message;
	};
	_Script_WebSocketBP_eventWSMessageDelegate_Parms Parms;
	Parms.Message=Message;
	WSMessageDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_WebSocketBP_WSEventDelegate__DelegateSignature_Statics
	{
		struct _Script_WebSocketBP_eventWSEventDelegate_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WebSocketBP_WSEventDelegate__DelegateSignature_Statics::NewProp_EventMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_WebSocketBP_WSEventDelegate__DelegateSignature_Statics::NewProp_EventMessage = { "EventMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WebSocketBP_eventWSEventDelegate_Parms, EventMessage), Z_Construct_UScriptStruct_FWSEventMessage, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_WSEventDelegate__DelegateSignature_Statics::NewProp_EventMessage_MetaData), Z_Construct_UDelegateFunction_WebSocketBP_WSEventDelegate__DelegateSignature_Statics::NewProp_EventMessage_MetaData) }; // 657497059
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WebSocketBP_WSEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WebSocketBP_WSEventDelegate__DelegateSignature_Statics::NewProp_EventMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WebSocketBP_WSEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WebSocketBP_WSEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WebSocketBP, nullptr, "WSEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WebSocketBP_WSEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_WSEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WebSocketBP_WSEventDelegate__DelegateSignature_Statics::_Script_WebSocketBP_eventWSEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_WSEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WebSocketBP_WSEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WebSocketBP_WSEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_WebSocketBP_WSEventDelegate__DelegateSignature_Statics::_Script_WebSocketBP_eventWSEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_WebSocketBP_WSEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WebSocketBP_WSEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FWSEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& WSEventDelegate, FWSEventMessage const& EventMessage)
{
	struct _Script_WebSocketBP_eventWSEventDelegate_Parms
	{
		FWSEventMessage EventMessage;
	};
	_Script_WebSocketBP_eventWSEventDelegate_Parms Parms;
	Parms.EventMessage=EventMessage;
	WSEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UWSClientSubsystem::execSetAutoReconnect)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxRetries);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoReconnect(Z_Param_bEnabled,Z_Param_Delay,Z_Param_MaxRetries);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSClientSubsystem::execGetConnectionHeaders)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FWSHttpHeader>*)Z_Param__Result=P_THIS->GetConnectionHeaders();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSClientSubsystem::execGetConnectionURL)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetConnectionURL();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSClientSubsystem::execParseJsonString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWSJsonData**)Z_Param__Result=P_THIS->ParseJsonString(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSClientSubsystem::execCreateJsonDataFromKeyValuePairs)
	{
		P_GET_TARRAY_REF(FWSKeyValuePair,Z_Param_Out_KeyValuePairs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWSJsonData**)Z_Param__Result=P_THIS->CreateJsonDataFromKeyValuePairs(Z_Param_Out_KeyValuePairs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSClientSubsystem::execCreateJsonData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWSJsonData**)Z_Param__Result=P_THIS->CreateJsonData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSClientSubsystem::execSendBinaryFromBytes)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendBinaryFromBytes(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSClientSubsystem::execSendMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendMessage(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSClientSubsystem::execSendJSONSimple)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_GET_TARRAY_REF(FWSKeyValuePair,Z_Param_Out_KeyValuePairs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendJSONSimple(Z_Param_EventName,Z_Param_Out_KeyValuePairs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSClientSubsystem::execSendJSON)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_GET_OBJECT(UWSJsonData,Z_Param_JsonData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendJSON(Z_Param_EventName,Z_Param_JsonData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSClientSubsystem::execReconnect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Reconnect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSClientSubsystem::execIsConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConnected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSClientSubsystem::execDisconnect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disconnect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSClientSubsystem::execConnectSimple)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerURL);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConnectSimple(Z_Param_ServerURL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSClientSubsystem::execConnect)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerURL);
		P_GET_TARRAY_REF(FWSHttpHeader,Z_Param_Out_Headers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Connect(Z_Param_ServerURL,Z_Param_Out_Headers);
		P_NATIVE_END;
	}
	void UWSClientSubsystem::StaticRegisterNativesUWSClientSubsystem()
	{
		UClass* Class = UWSClientSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Connect", &UWSClientSubsystem::execConnect },
			{ "ConnectSimple", &UWSClientSubsystem::execConnectSimple },
			{ "CreateJsonData", &UWSClientSubsystem::execCreateJsonData },
			{ "CreateJsonDataFromKeyValuePairs", &UWSClientSubsystem::execCreateJsonDataFromKeyValuePairs },
			{ "Disconnect", &UWSClientSubsystem::execDisconnect },
			{ "GetConnectionHeaders", &UWSClientSubsystem::execGetConnectionHeaders },
			{ "GetConnectionURL", &UWSClientSubsystem::execGetConnectionURL },
			{ "IsConnected", &UWSClientSubsystem::execIsConnected },
			{ "ParseJsonString", &UWSClientSubsystem::execParseJsonString },
			{ "Reconnect", &UWSClientSubsystem::execReconnect },
			{ "SendBinaryFromBytes", &UWSClientSubsystem::execSendBinaryFromBytes },
			{ "SendJSON", &UWSClientSubsystem::execSendJSON },
			{ "SendJSONSimple", &UWSClientSubsystem::execSendJSONSimple },
			{ "SendMessage", &UWSClientSubsystem::execSendMessage },
			{ "SetAutoReconnect", &UWSClientSubsystem::execSetAutoReconnect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWSClientSubsystem_Connect_Statics
	{
		struct WSClientSubsystem_eventConnect_Parms
		{
			FString ServerURL;
			TArray<FWSHttpHeader> Headers;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerURL;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Headers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Headers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Headers;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSClientSubsystem_Connect_Statics::NewProp_ServerURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSClientSubsystem_Connect_Statics::NewProp_ServerURL = { "ServerURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSClientSubsystem_eventConnect_Parms, ServerURL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_Connect_Statics::NewProp_ServerURL_MetaData), Z_Construct_UFunction_UWSClientSubsystem_Connect_Statics::NewProp_ServerURL_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWSClientSubsystem_Connect_Statics::NewProp_Headers_Inner = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWSHttpHeader, METADATA_PARAMS(0, nullptr) }; // 3550665286
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSClientSubsystem_Connect_Statics::NewProp_Headers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWSClientSubsystem_Connect_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSClientSubsystem_eventConnect_Parms, Headers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_Connect_Statics::NewProp_Headers_MetaData), Z_Construct_UFunction_UWSClientSubsystem_Connect_Statics::NewProp_Headers_MetaData) }; // 3550665286
	void Z_Construct_UFunction_UWSClientSubsystem_Connect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WSClientSubsystem_eventConnect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWSClientSubsystem_Connect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WSClientSubsystem_eventConnect_Parms), &Z_Construct_UFunction_UWSClientSubsystem_Connect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSClientSubsystem_Connect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_Connect_Statics::NewProp_ServerURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_Connect_Statics::NewProp_Headers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_Connect_Statics::NewProp_Headers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_Connect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSClientSubsystem_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// WebSocket connection management\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WebSocket connection management" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSClientSubsystem_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSClientSubsystem, nullptr, "Connect", nullptr, nullptr, Z_Construct_UFunction_UWSClientSubsystem_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_Connect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSClientSubsystem_Connect_Statics::WSClientSubsystem_eventConnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_Connect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSClientSubsystem_Connect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_Connect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSClientSubsystem_Connect_Statics::WSClientSubsystem_eventConnect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSClientSubsystem_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSClientSubsystem_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSClientSubsystem_ConnectSimple_Statics
	{
		struct WSClientSubsystem_eventConnectSimple_Parms
		{
			FString ServerURL;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerURL;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSClientSubsystem_ConnectSimple_Statics::NewProp_ServerURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSClientSubsystem_ConnectSimple_Statics::NewProp_ServerURL = { "ServerURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSClientSubsystem_eventConnectSimple_Parms, ServerURL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_ConnectSimple_Statics::NewProp_ServerURL_MetaData), Z_Construct_UFunction_UWSClientSubsystem_ConnectSimple_Statics::NewProp_ServerURL_MetaData) };
	void Z_Construct_UFunction_UWSClientSubsystem_ConnectSimple_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WSClientSubsystem_eventConnectSimple_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWSClientSubsystem_ConnectSimple_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WSClientSubsystem_eventConnectSimple_Parms), &Z_Construct_UFunction_UWSClientSubsystem_ConnectSimple_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSClientSubsystem_ConnectSimple_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_ConnectSimple_Statics::NewProp_ServerURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_ConnectSimple_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSClientSubsystem_ConnectSimple_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xae\x80\xe5\x8c\x96\xe7\x89\x88\xe7\x9a\x84\xe8\xbf\x9e\xe6\x8e\xa5\xe6\x96\xb9\xe6\xb3\x95\xef\xbc\x8c\xe6\x97\xa0\xe9\x9c\x80\xe5\xa4\xb4\xe9\x83\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xae\x80\xe5\x8c\x96\xe7\x89\x88\xe7\x9a\x84\xe8\xbf\x9e\xe6\x8e\xa5\xe6\x96\xb9\xe6\xb3\x95\xef\xbc\x8c\xe6\x97\xa0\xe9\x9c\x80\xe5\xa4\xb4\xe9\x83\xa8" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSClientSubsystem_ConnectSimple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSClientSubsystem, nullptr, "ConnectSimple", nullptr, nullptr, Z_Construct_UFunction_UWSClientSubsystem_ConnectSimple_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_ConnectSimple_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSClientSubsystem_ConnectSimple_Statics::WSClientSubsystem_eventConnectSimple_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_ConnectSimple_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSClientSubsystem_ConnectSimple_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_ConnectSimple_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSClientSubsystem_ConnectSimple_Statics::WSClientSubsystem_eventConnectSimple_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSClientSubsystem_ConnectSimple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSClientSubsystem_ConnectSimple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSClientSubsystem_CreateJsonData_Statics
	{
		struct WSClientSubsystem_eventCreateJsonData_Parms
		{
			UWSJsonData* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWSClientSubsystem_CreateJsonData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSClientSubsystem_eventCreateJsonData_Parms, ReturnValue), Z_Construct_UClass_UWSJsonData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSClientSubsystem_CreateJsonData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_CreateJsonData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSClientSubsystem_CreateJsonData_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|JSON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Utility method for blueprints to create simple JSON objects\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility method for blueprints to create simple JSON objects" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSClientSubsystem_CreateJsonData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSClientSubsystem, nullptr, "CreateJsonData", nullptr, nullptr, Z_Construct_UFunction_UWSClientSubsystem_CreateJsonData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_CreateJsonData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSClientSubsystem_CreateJsonData_Statics::WSClientSubsystem_eventCreateJsonData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_CreateJsonData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSClientSubsystem_CreateJsonData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_CreateJsonData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSClientSubsystem_CreateJsonData_Statics::WSClientSubsystem_eventCreateJsonData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSClientSubsystem_CreateJsonData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSClientSubsystem_CreateJsonData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSClientSubsystem_CreateJsonDataFromKeyValuePairs_Statics
	{
		struct WSClientSubsystem_eventCreateJsonDataFromKeyValuePairs_Parms
		{
			TArray<FWSKeyValuePair> KeyValuePairs;
			UWSJsonData* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyValuePairs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyValuePairs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyValuePairs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWSClientSubsystem_CreateJsonDataFromKeyValuePairs_Statics::NewProp_KeyValuePairs_Inner = { "KeyValuePairs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWSKeyValuePair, METADATA_PARAMS(0, nullptr) }; // 1603614416
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSClientSubsystem_CreateJsonDataFromKeyValuePairs_Statics::NewProp_KeyValuePairs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWSClientSubsystem_CreateJsonDataFromKeyValuePairs_Statics::NewProp_KeyValuePairs = { "KeyValuePairs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSClientSubsystem_eventCreateJsonDataFromKeyValuePairs_Parms, KeyValuePairs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_CreateJsonDataFromKeyValuePairs_Statics::NewProp_KeyValuePairs_MetaData), Z_Construct_UFunction_UWSClientSubsystem_CreateJsonDataFromKeyValuePairs_Statics::NewProp_KeyValuePairs_MetaData) }; // 1603614416
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWSClientSubsystem_CreateJsonDataFromKeyValuePairs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSClientSubsystem_eventCreateJsonDataFromKeyValuePairs_Parms, ReturnValue), Z_Construct_UClass_UWSJsonData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSClientSubsystem_CreateJsonDataFromKeyValuePairs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_CreateJsonDataFromKeyValuePairs_Statics::NewProp_KeyValuePairs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_CreateJsonDataFromKeyValuePairs_Statics::NewProp_KeyValuePairs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_CreateJsonDataFromKeyValuePairs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSClientSubsystem_CreateJsonDataFromKeyValuePairs_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|JSON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\x8e\xe9\x94\xae\xe5\x80\xbc\xe5\xaf\xb9\xe6\x95\xb0\xe7\xbb\x84\xe5\x88\x9b\xe5\xbb\xbaJSON\xe5\xaf\xb9\xe8\xb1\xa1\n" },
#endif
		{ "DisplayName", "Create JSON From Key-Value Pairs" },
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x8e\xe9\x94\xae\xe5\x80\xbc\xe5\xaf\xb9\xe6\x95\xb0\xe7\xbb\x84\xe5\x88\x9b\xe5\xbb\xbaJSON\xe5\xaf\xb9\xe8\xb1\xa1" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSClientSubsystem_CreateJsonDataFromKeyValuePairs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSClientSubsystem, nullptr, "CreateJsonDataFromKeyValuePairs", nullptr, nullptr, Z_Construct_UFunction_UWSClientSubsystem_CreateJsonDataFromKeyValuePairs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_CreateJsonDataFromKeyValuePairs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSClientSubsystem_CreateJsonDataFromKeyValuePairs_Statics::WSClientSubsystem_eventCreateJsonDataFromKeyValuePairs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_CreateJsonDataFromKeyValuePairs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSClientSubsystem_CreateJsonDataFromKeyValuePairs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_CreateJsonDataFromKeyValuePairs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSClientSubsystem_CreateJsonDataFromKeyValuePairs_Statics::WSClientSubsystem_eventCreateJsonDataFromKeyValuePairs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSClientSubsystem_CreateJsonDataFromKeyValuePairs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSClientSubsystem_CreateJsonDataFromKeyValuePairs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSClientSubsystem_Disconnect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSClientSubsystem_Disconnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSClientSubsystem_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSClientSubsystem, nullptr, "Disconnect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_Disconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSClientSubsystem_Disconnect_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UWSClientSubsystem_Disconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSClientSubsystem_Disconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSClientSubsystem_GetConnectionHeaders_Statics
	{
		struct WSClientSubsystem_eventGetConnectionHeaders_Parms
		{
			TArray<FWSHttpHeader> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWSClientSubsystem_GetConnectionHeaders_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWSHttpHeader, METADATA_PARAMS(0, nullptr) }; // 3550665286
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWSClientSubsystem_GetConnectionHeaders_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSClientSubsystem_eventGetConnectionHeaders_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3550665286
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSClientSubsystem_GetConnectionHeaders_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_GetConnectionHeaders_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_GetConnectionHeaders_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSClientSubsystem_GetConnectionHeaders_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the last connection headers\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the last connection headers" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSClientSubsystem_GetConnectionHeaders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSClientSubsystem, nullptr, "GetConnectionHeaders", nullptr, nullptr, Z_Construct_UFunction_UWSClientSubsystem_GetConnectionHeaders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_GetConnectionHeaders_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSClientSubsystem_GetConnectionHeaders_Statics::WSClientSubsystem_eventGetConnectionHeaders_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_GetConnectionHeaders_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSClientSubsystem_GetConnectionHeaders_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_GetConnectionHeaders_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSClientSubsystem_GetConnectionHeaders_Statics::WSClientSubsystem_eventGetConnectionHeaders_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSClientSubsystem_GetConnectionHeaders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSClientSubsystem_GetConnectionHeaders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSClientSubsystem_GetConnectionURL_Statics
	{
		struct WSClientSubsystem_eventGetConnectionURL_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSClientSubsystem_GetConnectionURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSClientSubsystem_eventGetConnectionURL_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSClientSubsystem_GetConnectionURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_GetConnectionURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSClientSubsystem_GetConnectionURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the last connection URL\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the last connection URL" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSClientSubsystem_GetConnectionURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSClientSubsystem, nullptr, "GetConnectionURL", nullptr, nullptr, Z_Construct_UFunction_UWSClientSubsystem_GetConnectionURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_GetConnectionURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSClientSubsystem_GetConnectionURL_Statics::WSClientSubsystem_eventGetConnectionURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_GetConnectionURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSClientSubsystem_GetConnectionURL_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_GetConnectionURL_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSClientSubsystem_GetConnectionURL_Statics::WSClientSubsystem_eventGetConnectionURL_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSClientSubsystem_GetConnectionURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSClientSubsystem_GetConnectionURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSClientSubsystem_IsConnected_Statics
	{
		struct WSClientSubsystem_eventIsConnected_Parms
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
	void Z_Construct_UFunction_UWSClientSubsystem_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WSClientSubsystem_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWSClientSubsystem_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WSClientSubsystem_eventIsConnected_Parms), &Z_Construct_UFunction_UWSClientSubsystem_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSClientSubsystem_IsConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_IsConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSClientSubsystem_IsConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSClientSubsystem_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSClientSubsystem, nullptr, "IsConnected", nullptr, nullptr, Z_Construct_UFunction_UWSClientSubsystem_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_IsConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSClientSubsystem_IsConnected_Statics::WSClientSubsystem_eventIsConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_IsConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSClientSubsystem_IsConnected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_IsConnected_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSClientSubsystem_IsConnected_Statics::WSClientSubsystem_eventIsConnected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSClientSubsystem_IsConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSClientSubsystem_IsConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSClientSubsystem_ParseJsonString_Statics
	{
		struct WSClientSubsystem_eventParseJsonString_Parms
		{
			FString JsonString;
			UWSJsonData* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSClientSubsystem_ParseJsonString_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSClientSubsystem_ParseJsonString_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSClientSubsystem_eventParseJsonString_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_ParseJsonString_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_UWSClientSubsystem_ParseJsonString_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWSClientSubsystem_ParseJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSClientSubsystem_eventParseJsonString_Parms, ReturnValue), Z_Construct_UClass_UWSJsonData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSClientSubsystem_ParseJsonString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_ParseJsonString_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_ParseJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSClientSubsystem_ParseJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|JSON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\x8e\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe8\xa7\xa3\xe6\x9e\x90JSON\xe5\xaf\xb9\xe8\xb1\xa1\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x8e\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe8\xa7\xa3\xe6\x9e\x90JSON\xe5\xaf\xb9\xe8\xb1\xa1" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSClientSubsystem_ParseJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSClientSubsystem, nullptr, "ParseJsonString", nullptr, nullptr, Z_Construct_UFunction_UWSClientSubsystem_ParseJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_ParseJsonString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSClientSubsystem_ParseJsonString_Statics::WSClientSubsystem_eventParseJsonString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_ParseJsonString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSClientSubsystem_ParseJsonString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_ParseJsonString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSClientSubsystem_ParseJsonString_Statics::WSClientSubsystem_eventParseJsonString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSClientSubsystem_ParseJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSClientSubsystem_ParseJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSClientSubsystem_Reconnect_Statics
	{
		struct WSClientSubsystem_eventReconnect_Parms
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
	void Z_Construct_UFunction_UWSClientSubsystem_Reconnect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WSClientSubsystem_eventReconnect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWSClientSubsystem_Reconnect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WSClientSubsystem_eventReconnect_Parms), &Z_Construct_UFunction_UWSClientSubsystem_Reconnect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSClientSubsystem_Reconnect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_Reconnect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSClientSubsystem_Reconnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSClientSubsystem_Reconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSClientSubsystem, nullptr, "Reconnect", nullptr, nullptr, Z_Construct_UFunction_UWSClientSubsystem_Reconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_Reconnect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSClientSubsystem_Reconnect_Statics::WSClientSubsystem_eventReconnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_Reconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSClientSubsystem_Reconnect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_Reconnect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSClientSubsystem_Reconnect_Statics::WSClientSubsystem_eventReconnect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSClientSubsystem_Reconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSClientSubsystem_Reconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSClientSubsystem_SendBinaryFromBytes_Statics
	{
		struct WSClientSubsystem_eventSendBinaryFromBytes_Parms
		{
			TArray<uint8> Data;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWSClientSubsystem_SendBinaryFromBytes_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSClientSubsystem_SendBinaryFromBytes_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWSClientSubsystem_SendBinaryFromBytes_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSClientSubsystem_eventSendBinaryFromBytes_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_SendBinaryFromBytes_Statics::NewProp_Data_MetaData), Z_Construct_UFunction_UWSClientSubsystem_SendBinaryFromBytes_Statics::NewProp_Data_MetaData) };
	void Z_Construct_UFunction_UWSClientSubsystem_SendBinaryFromBytes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WSClientSubsystem_eventSendBinaryFromBytes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWSClientSubsystem_SendBinaryFromBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WSClientSubsystem_eventSendBinaryFromBytes_Parms), &Z_Construct_UFunction_UWSClientSubsystem_SendBinaryFromBytes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSClientSubsystem_SendBinaryFromBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_SendBinaryFromBytes_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_SendBinaryFromBytes_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_SendBinaryFromBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSClientSubsystem_SendBinaryFromBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe4\xbb\x8e\xe5\xad\x97\xe8\x8a\x82\xe6\x95\xb0\xe7\xbb\x84\xe5\x8f\x91\xe9\x80\x81\xe4\xba\x8c\xe8\xbf\x9b\xe5\x88\xb6\xe6\x95\xb0\xe6\x8d\xae (\xe8\x93\x9d\xe5\x9b\xbe\xe6\x8e\xa5\xe5\x8f\xa3)\n\x09 * \xe6\xb3\xa8\xe6\x84\x8f: \xe9\x80\x82\xe7\x94\xa8\xe4\xba\x8e\xe7\xae\x80\xe5\x8d\x95\xe7\x9a\x84\xe4\xba\x8c\xe8\xbf\x9b\xe5\x88\xb6\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe4\xb8\x8d\xe5\xbb\xba\xe8\xae\xae\xe7\x94\xa8\xe4\xba\x8e\xe5\x8f\x91\xe9\x80\x81\xe5\xa4\xa7\xe5\x9e\x8b\xe4\xba\x8c\xe8\xbf\x9b\xe5\x88\xb6\xe6\x95\xb0\xe6\x8d\xae\n\x09 * @param Data \xe8\xa6\x81\xe5\x8f\x91\xe9\x80\x81\xe7\x9a\x84\xe4\xba\x8c\xe8\xbf\x9b\xe5\x88\xb6\xe6\x95\xb0\xe6\x8d\xae\n\x09 * @return \xe6\x98\xaf\xe5\x90\xa6\xe6\x88\x90\xe5\x8a\x9f\xe5\x8f\x91\xe9\x80\x81\n\x09 */" },
#endif
		{ "DisplayName", "Send Binary Data" },
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x8e\xe5\xad\x97\xe8\x8a\x82\xe6\x95\xb0\xe7\xbb\x84\xe5\x8f\x91\xe9\x80\x81\xe4\xba\x8c\xe8\xbf\x9b\xe5\x88\xb6\xe6\x95\xb0\xe6\x8d\xae (\xe8\x93\x9d\xe5\x9b\xbe\xe6\x8e\xa5\xe5\x8f\xa3)\n\xe6\xb3\xa8\xe6\x84\x8f: \xe9\x80\x82\xe7\x94\xa8\xe4\xba\x8e\xe7\xae\x80\xe5\x8d\x95\xe7\x9a\x84\xe4\xba\x8c\xe8\xbf\x9b\xe5\x88\xb6\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe4\xb8\x8d\xe5\xbb\xba\xe8\xae\xae\xe7\x94\xa8\xe4\xba\x8e\xe5\x8f\x91\xe9\x80\x81\xe5\xa4\xa7\xe5\x9e\x8b\xe4\xba\x8c\xe8\xbf\x9b\xe5\x88\xb6\xe6\x95\xb0\xe6\x8d\xae\n@param Data \xe8\xa6\x81\xe5\x8f\x91\xe9\x80\x81\xe7\x9a\x84\xe4\xba\x8c\xe8\xbf\x9b\xe5\x88\xb6\xe6\x95\xb0\xe6\x8d\xae\n@return \xe6\x98\xaf\xe5\x90\xa6\xe6\x88\x90\xe5\x8a\x9f\xe5\x8f\x91\xe9\x80\x81" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSClientSubsystem_SendBinaryFromBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSClientSubsystem, nullptr, "SendBinaryFromBytes", nullptr, nullptr, Z_Construct_UFunction_UWSClientSubsystem_SendBinaryFromBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_SendBinaryFromBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSClientSubsystem_SendBinaryFromBytes_Statics::WSClientSubsystem_eventSendBinaryFromBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_SendBinaryFromBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSClientSubsystem_SendBinaryFromBytes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_SendBinaryFromBytes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSClientSubsystem_SendBinaryFromBytes_Statics::WSClientSubsystem_eventSendBinaryFromBytes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSClientSubsystem_SendBinaryFromBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSClientSubsystem_SendBinaryFromBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSClientSubsystem_SendJSON_Statics
	{
		struct WSClientSubsystem_eventSendJSON_Parms
		{
			FString EventName;
			UWSJsonData* JsonData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSClientSubsystem_SendJSON_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSClientSubsystem_SendJSON_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSClientSubsystem_eventSendJSON_Parms, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_SendJSON_Statics::NewProp_EventName_MetaData), Z_Construct_UFunction_UWSClientSubsystem_SendJSON_Statics::NewProp_EventName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWSClientSubsystem_SendJSON_Statics::NewProp_JsonData = { "JsonData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSClientSubsystem_eventSendJSON_Parms, JsonData), Z_Construct_UClass_UWSJsonData_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UWSClientSubsystem_SendJSON_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WSClientSubsystem_eventSendJSON_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWSClientSubsystem_SendJSON_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WSClientSubsystem_eventSendJSON_Parms), &Z_Construct_UFunction_UWSClientSubsystem_SendJSON_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSClientSubsystem_SendJSON_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_SendJSON_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_SendJSON_Statics::NewProp_JsonData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_SendJSON_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSClientSubsystem_SendJSON_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// JSON message sending\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "JSON message sending" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSClientSubsystem_SendJSON_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSClientSubsystem, nullptr, "SendJSON", nullptr, nullptr, Z_Construct_UFunction_UWSClientSubsystem_SendJSON_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_SendJSON_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSClientSubsystem_SendJSON_Statics::WSClientSubsystem_eventSendJSON_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_SendJSON_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSClientSubsystem_SendJSON_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_SendJSON_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSClientSubsystem_SendJSON_Statics::WSClientSubsystem_eventSendJSON_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSClientSubsystem_SendJSON()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSClientSubsystem_SendJSON_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple_Statics
	{
		struct WSClientSubsystem_eventSendJSONSimple_Parms
		{
			FString EventName;
			TArray<FWSKeyValuePair> KeyValuePairs;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyValuePairs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyValuePairs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyValuePairs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSClientSubsystem_eventSendJSONSimple_Parms, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple_Statics::NewProp_EventName_MetaData), Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple_Statics::NewProp_EventName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple_Statics::NewProp_KeyValuePairs_Inner = { "KeyValuePairs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWSKeyValuePair, METADATA_PARAMS(0, nullptr) }; // 1603614416
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple_Statics::NewProp_KeyValuePairs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple_Statics::NewProp_KeyValuePairs = { "KeyValuePairs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSClientSubsystem_eventSendJSONSimple_Parms, KeyValuePairs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple_Statics::NewProp_KeyValuePairs_MetaData), Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple_Statics::NewProp_KeyValuePairs_MetaData) }; // 1603614416
	void Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WSClientSubsystem_eventSendJSONSimple_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WSClientSubsystem_eventSendJSONSimple_Parms), &Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple_Statics::NewProp_KeyValuePairs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple_Statics::NewProp_KeyValuePairs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xae\x80\xe5\x8c\x96\xe7\x89\x88SendJSON\xef\xbc\x8c\xe6\x94\xaf\xe6\x8c\x81\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xe7\x9a\x84\xe9\x94\xae\xe5\x80\xbc\xe5\xaf\xb9\xe6\x95\xb0\xe7\xbb\x84\n" },
#endif
		{ "DisplayName", "Send JSON (Simple)" },
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xae\x80\xe5\x8c\x96\xe7\x89\x88SendJSON\xef\xbc\x8c\xe6\x94\xaf\xe6\x8c\x81\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xe7\x9a\x84\xe9\x94\xae\xe5\x80\xbc\xe5\xaf\xb9\xe6\x95\xb0\xe7\xbb\x84" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSClientSubsystem, nullptr, "SendJSONSimple", nullptr, nullptr, Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple_Statics::WSClientSubsystem_eventSendJSONSimple_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple_Statics::WSClientSubsystem_eventSendJSONSimple_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSClientSubsystem_SendMessage_Statics
	{
		struct WSClientSubsystem_eventSendMessage_Parms
		{
			FString Message;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSClientSubsystem_SendMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSClientSubsystem_SendMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSClientSubsystem_eventSendMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_SendMessage_Statics::NewProp_Message_MetaData), Z_Construct_UFunction_UWSClientSubsystem_SendMessage_Statics::NewProp_Message_MetaData) };
	void Z_Construct_UFunction_UWSClientSubsystem_SendMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WSClientSubsystem_eventSendMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWSClientSubsystem_SendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WSClientSubsystem_eventSendMessage_Parms), &Z_Construct_UFunction_UWSClientSubsystem_SendMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSClientSubsystem_SendMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_SendMessage_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_SendMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSClientSubsystem_SendMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Raw message sending\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Raw message sending" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSClientSubsystem_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSClientSubsystem, nullptr, "SendMessage", nullptr, nullptr, Z_Construct_UFunction_UWSClientSubsystem_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_SendMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSClientSubsystem_SendMessage_Statics::WSClientSubsystem_eventSendMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_SendMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSClientSubsystem_SendMessage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_SendMessage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSClientSubsystem_SendMessage_Statics::WSClientSubsystem_eventSendMessage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSClientSubsystem_SendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSClientSubsystem_SendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSClientSubsystem_SetAutoReconnect_Statics
	{
		struct WSClientSubsystem_eventSetAutoReconnect_Parms
		{
			bool bEnabled;
			float Delay;
			int32 MaxRetries;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxRetries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWSClientSubsystem_SetAutoReconnect_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((WSClientSubsystem_eventSetAutoReconnect_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWSClientSubsystem_SetAutoReconnect_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WSClientSubsystem_eventSetAutoReconnect_Parms), &Z_Construct_UFunction_UWSClientSubsystem_SetAutoReconnect_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWSClientSubsystem_SetAutoReconnect_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSClientSubsystem_eventSetAutoReconnect_Parms, Delay), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWSClientSubsystem_SetAutoReconnect_Statics::NewProp_MaxRetries = { "MaxRetries", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSClientSubsystem_eventSetAutoReconnect_Parms, MaxRetries), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSClientSubsystem_SetAutoReconnect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_SetAutoReconnect_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_SetAutoReconnect_Statics::NewProp_Delay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSClientSubsystem_SetAutoReconnect_Statics::NewProp_MaxRetries,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSClientSubsystem_SetAutoReconnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|AutoReconnect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Auto-reconnect settings\n" },
#endif
		{ "CPP_Default_Delay", "5.000000" },
		{ "CPP_Default_MaxRetries", "-1" },
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Auto-reconnect settings" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSClientSubsystem_SetAutoReconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSClientSubsystem, nullptr, "SetAutoReconnect", nullptr, nullptr, Z_Construct_UFunction_UWSClientSubsystem_SetAutoReconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_SetAutoReconnect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSClientSubsystem_SetAutoReconnect_Statics::WSClientSubsystem_eventSetAutoReconnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_SetAutoReconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSClientSubsystem_SetAutoReconnect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSClientSubsystem_SetAutoReconnect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSClientSubsystem_SetAutoReconnect_Statics::WSClientSubsystem_eventSetAutoReconnect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSClientSubsystem_SetAutoReconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSClientSubsystem_SetAutoReconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWSClientSubsystem);
	UClass* Z_Construct_UClass_UWSClientSubsystem_NoRegister()
	{
		return UWSClientSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UWSClientSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConnected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConnectionError_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnectionError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnClosed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClosed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMessage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWSClientSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_WebSocketBP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWSClientSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UWSClientSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWSClientSubsystem_Connect, "Connect" }, // 1106083789
		{ &Z_Construct_UFunction_UWSClientSubsystem_ConnectSimple, "ConnectSimple" }, // 1835790927
		{ &Z_Construct_UFunction_UWSClientSubsystem_CreateJsonData, "CreateJsonData" }, // 916678114
		{ &Z_Construct_UFunction_UWSClientSubsystem_CreateJsonDataFromKeyValuePairs, "CreateJsonDataFromKeyValuePairs" }, // 3888176117
		{ &Z_Construct_UFunction_UWSClientSubsystem_Disconnect, "Disconnect" }, // 2792670570
		{ &Z_Construct_UFunction_UWSClientSubsystem_GetConnectionHeaders, "GetConnectionHeaders" }, // 2408109995
		{ &Z_Construct_UFunction_UWSClientSubsystem_GetConnectionURL, "GetConnectionURL" }, // 58406325
		{ &Z_Construct_UFunction_UWSClientSubsystem_IsConnected, "IsConnected" }, // 878808262
		{ &Z_Construct_UFunction_UWSClientSubsystem_ParseJsonString, "ParseJsonString" }, // 156281278
		{ &Z_Construct_UFunction_UWSClientSubsystem_Reconnect, "Reconnect" }, // 3644245956
		{ &Z_Construct_UFunction_UWSClientSubsystem_SendBinaryFromBytes, "SendBinaryFromBytes" }, // 1820023816
		{ &Z_Construct_UFunction_UWSClientSubsystem_SendJSON, "SendJSON" }, // 4292536755
		{ &Z_Construct_UFunction_UWSClientSubsystem_SendJSONSimple, "SendJSONSimple" }, // 246195776
		{ &Z_Construct_UFunction_UWSClientSubsystem_SendMessage, "SendMessage" }, // 2706375998
		{ &Z_Construct_UFunction_UWSClientSubsystem_SetAutoReconnect, "SetAutoReconnect" }, // 1998406410
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWSClientSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWSClientSubsystem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * WebSocket\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe5\xad\x90\xe7\xb3\xbb\xe7\xbb\x9f\n * \n * \xe6\x8f\x90\xe4\xbe\x9bWebSocket\xe9\x80\x9a\xe4\xbf\xa1\xe5\x8a\x9f\xe8\x83\xbd\xef\xbc\x8c\xe6\x94\xaf\xe6\x8c\x81JSON\xe5\x92\x8c\xe4\xba\x8c\xe8\xbf\x9b\xe5\x88\xb6\xe6\x95\xb0\xe6\x8d\xae\xe3\x80\x82\n * \xe6\xb3\xa8\xe6\x84\x8f\xef\xbc\x9a\xe4\xba\x8c\xe8\xbf\x9b\xe5\x88\xb6\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x88\xe5\xa6\x82\xe5\x9b\xbe\xe7\x89\x87\xe3\x80\x81\xe9\x9f\xb3\xe9\xa2\x91\xe3\x80\x81\xe8\xa7\x86\xe9\xa2\x91\xe7\xad\x89\xef\xbc\x89\xe4\xbb\x85\xe5\x9c\xa8""C++\xe4\xbb\xa3\xe7\xa0\x81\xe4\xb8\xad\xe9\x80\x9a\xe8\xbf\x87OnBinaryMessage\xe4\xbb\xa3\xe7\x90\x86\xe6\x8e\xa5\xe6\x94\xb6\xef\xbc\x8c\n * \xe4\xb8\x8d\xe4\xbc\x9a\xe5\x90\x91\xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\x91\xe9\x80\x81\xe4\xba\x8c\xe8\xbf\x9b\xe5\x88\xb6\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe5\x9b\xa0\xe4\xb8\xba\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\x8d\xe9\x80\x82\xe5\x90\x88\xe5\xa4\x84\xe7\x90\x86\xe5\xa4\xa7\xe9\x87\x8f\xe4\xba\x8c\xe8\xbf\x9b\xe5\x88\xb6\xe6\x95\xb0\xe6\x8d\xae\xe3\x80\x82\n * \xe5\xa6\x82\xe9\x9c\x80\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xe4\xbd\xbf\xe7\x94\xa8\xe4\xba\x8c\xe8\xbf\x9b\xe5\x88\xb6\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe8\xaf\xb7\xe5\x9c\xa8""C++\xe4\xb8\xad\xe5\x88\x9b\xe5\xbb\xba\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe5\xa4\x84\xe7\x90\x86\xe9\x80\xbb\xe8\xbe\x91\xef\xbc\x8c\xe7\x84\xb6\xe5\x90\x8e\xe5\xb0\x86\xe5\xa4\x84\xe7\x90\x86\xe7\xbb\x93\xe6\x9e\x9c\xe6\x9a\xb4\xe9\x9c\xb2\xe7\xbb\x99\xe8\x93\x9d\xe5\x9b\xbe\xe3\x80\x82\n */" },
#endif
		{ "IncludePath", "Subsystems/WSClientSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WebSocket\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe5\xad\x90\xe7\xb3\xbb\xe7\xbb\x9f\n\n\xe6\x8f\x90\xe4\xbe\x9bWebSocket\xe9\x80\x9a\xe4\xbf\xa1\xe5\x8a\x9f\xe8\x83\xbd\xef\xbc\x8c\xe6\x94\xaf\xe6\x8c\x81JSON\xe5\x92\x8c\xe4\xba\x8c\xe8\xbf\x9b\xe5\x88\xb6\xe6\x95\xb0\xe6\x8d\xae\xe3\x80\x82\n\xe6\xb3\xa8\xe6\x84\x8f\xef\xbc\x9a\xe4\xba\x8c\xe8\xbf\x9b\xe5\x88\xb6\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x88\xe5\xa6\x82\xe5\x9b\xbe\xe7\x89\x87\xe3\x80\x81\xe9\x9f\xb3\xe9\xa2\x91\xe3\x80\x81\xe8\xa7\x86\xe9\xa2\x91\xe7\xad\x89\xef\xbc\x89\xe4\xbb\x85\xe5\x9c\xa8""C++\xe4\xbb\xa3\xe7\xa0\x81\xe4\xb8\xad\xe9\x80\x9a\xe8\xbf\x87OnBinaryMessage\xe4\xbb\xa3\xe7\x90\x86\xe6\x8e\xa5\xe6\x94\xb6\xef\xbc\x8c\n\xe4\xb8\x8d\xe4\xbc\x9a\xe5\x90\x91\xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\x91\xe9\x80\x81\xe4\xba\x8c\xe8\xbf\x9b\xe5\x88\xb6\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe5\x9b\xa0\xe4\xb8\xba\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\x8d\xe9\x80\x82\xe5\x90\x88\xe5\xa4\x84\xe7\x90\x86\xe5\xa4\xa7\xe9\x87\x8f\xe4\xba\x8c\xe8\xbf\x9b\xe5\x88\xb6\xe6\x95\xb0\xe6\x8d\xae\xe3\x80\x82\n\xe5\xa6\x82\xe9\x9c\x80\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xe4\xbd\xbf\xe7\x94\xa8\xe4\xba\x8c\xe8\xbf\x9b\xe5\x88\xb6\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe8\xaf\xb7\xe5\x9c\xa8""C++\xe4\xb8\xad\xe5\x88\x9b\xe5\xbb\xba\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe5\xa4\x84\xe7\x90\x86\xe9\x80\xbb\xe8\xbe\x91\xef\xbc\x8c\xe7\x84\xb6\xe5\x90\x8e\xe5\xb0\x86\xe5\xa4\x84\xe7\x90\x86\xe7\xbb\x93\xe6\x9e\x9c\xe6\x9a\xb4\xe9\x9c\xb2\xe7\xbb\x99\xe8\x93\x9d\xe5\x9b\xbe\xe3\x80\x82" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWSClientSubsystem_Statics::NewProp_OnConnected_MetaData[] = {
		{ "Category", "WebSocket|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint bindable delegates\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint bindable delegates" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWSClientSubsystem_Statics::NewProp_OnConnected = { "OnConnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWSClientSubsystem, OnConnected), Z_Construct_UDelegateFunction_WebSocketBP_WSConnectedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWSClientSubsystem_Statics::NewProp_OnConnected_MetaData), Z_Construct_UClass_UWSClientSubsystem_Statics::NewProp_OnConnected_MetaData) }; // 3099287389
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWSClientSubsystem_Statics::NewProp_OnConnectionError_MetaData[] = {
		{ "Category", "WebSocket|Events" },
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWSClientSubsystem_Statics::NewProp_OnConnectionError = { "OnConnectionError", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWSClientSubsystem, OnConnectionError), Z_Construct_UDelegateFunction_WebSocketBP_WSConnectionErrorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWSClientSubsystem_Statics::NewProp_OnConnectionError_MetaData), Z_Construct_UClass_UWSClientSubsystem_Statics::NewProp_OnConnectionError_MetaData) }; // 2693278941
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWSClientSubsystem_Statics::NewProp_OnClosed_MetaData[] = {
		{ "Category", "WebSocket|Events" },
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWSClientSubsystem_Statics::NewProp_OnClosed = { "OnClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWSClientSubsystem, OnClosed), Z_Construct_UDelegateFunction_WebSocketBP_WSClosedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWSClientSubsystem_Statics::NewProp_OnClosed_MetaData), Z_Construct_UClass_UWSClientSubsystem_Statics::NewProp_OnClosed_MetaData) }; // 3731425016
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWSClientSubsystem_Statics::NewProp_OnMessage_MetaData[] = {
		{ "Category", "WebSocket|Events" },
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWSClientSubsystem_Statics::NewProp_OnMessage = { "OnMessage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWSClientSubsystem, OnMessage), Z_Construct_UDelegateFunction_WebSocketBP_WSMessageDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWSClientSubsystem_Statics::NewProp_OnMessage_MetaData), Z_Construct_UClass_UWSClientSubsystem_Statics::NewProp_OnMessage_MetaData) }; // 2830892459
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWSClientSubsystem_Statics::NewProp_OnEvent_MetaData[] = {
		{ "Category", "WebSocket|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// New event-based delegate (more structured than raw message)\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/WSClientSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "New event-based delegate (more structured than raw message)" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWSClientSubsystem_Statics::NewProp_OnEvent = { "OnEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWSClientSubsystem, OnEvent), Z_Construct_UDelegateFunction_WebSocketBP_WSEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWSClientSubsystem_Statics::NewProp_OnEvent_MetaData), Z_Construct_UClass_UWSClientSubsystem_Statics::NewProp_OnEvent_MetaData) }; // 2737187573
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWSClientSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWSClientSubsystem_Statics::NewProp_OnConnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWSClientSubsystem_Statics::NewProp_OnConnectionError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWSClientSubsystem_Statics::NewProp_OnClosed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWSClientSubsystem_Statics::NewProp_OnMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWSClientSubsystem_Statics::NewProp_OnEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWSClientSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWSClientSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWSClientSubsystem_Statics::ClassParams = {
		&UWSClientSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWSClientSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWSClientSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWSClientSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UWSClientSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWSClientSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UWSClientSubsystem()
	{
		if (!Z_Registration_Info_UClass_UWSClientSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWSClientSubsystem.OuterSingleton, Z_Construct_UClass_UWSClientSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWSClientSubsystem.OuterSingleton;
	}
	template<> WEBSOCKETBP_API UClass* StaticClass<UWSClientSubsystem>()
	{
		return UWSClientSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWSClientSubsystem);
	UWSClientSubsystem::~UWSClientSubsystem() {}
	struct Z_CompiledInDeferFile_FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSClientSubsystem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSClientSubsystem_h_Statics::EnumInfo[] = {
		{ EWSBinaryType_StaticEnum, TEXT("EWSBinaryType"), &Z_Registration_Info_UEnum_EWSBinaryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4171511624U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSClientSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FWSHttpHeader::StaticStruct, Z_Construct_UScriptStruct_FWSHttpHeader_Statics::NewStructOps, TEXT("WSHttpHeader"), &Z_Registration_Info_UScriptStruct_WSHttpHeader, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWSHttpHeader), 3550665286U) },
		{ FWSKeyValuePair::StaticStruct, Z_Construct_UScriptStruct_FWSKeyValuePair_Statics::NewStructOps, TEXT("WSKeyValuePair"), &Z_Registration_Info_UScriptStruct_WSKeyValuePair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWSKeyValuePair), 1603614416U) },
		{ FWSEventMessage::StaticStruct, Z_Construct_UScriptStruct_FWSEventMessage_Statics::NewStructOps, TEXT("WSEventMessage"), &Z_Registration_Info_UScriptStruct_WSEventMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWSEventMessage), 657497059U) },
		{ FWSBinaryMessage::StaticStruct, Z_Construct_UScriptStruct_FWSBinaryMessage_Statics::NewStructOps, TEXT("WSBinaryMessage"), &Z_Registration_Info_UScriptStruct_WSBinaryMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWSBinaryMessage), 1015461166U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSClientSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWSJsonData, UWSJsonData::StaticClass, TEXT("UWSJsonData"), &Z_Registration_Info_UClass_UWSJsonData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWSJsonData), 447739320U) },
		{ Z_Construct_UClass_UWSClientSubsystem, UWSClientSubsystem::StaticClass, TEXT("UWSClientSubsystem"), &Z_Registration_Info_UClass_UWSClientSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWSClientSubsystem), 1291365524U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSClientSubsystem_h_1895584535(TEXT("/Script/WebSocketBP"),
		Z_CompiledInDeferFile_FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSClientSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSClientSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSClientSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSClientSubsystem_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSClientSubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Subsystems_WSClientSubsystem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
