// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Utils/WSJsonUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWSJsonUtils() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_WebSocketBP();
	WEBSOCKETBP_API UClass* Z_Construct_UClass_UWSJsonData_NoRegister();
	WEBSOCKETBP_API UClass* Z_Construct_UClass_UWSJsonUtils();
	WEBSOCKETBP_API UClass* Z_Construct_UClass_UWSJsonUtils_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWSJsonUtils::execJsonToString)
	{
		P_GET_OBJECT(UWSJsonData,Z_Param_JsonData);
		P_GET_UBOOL(Z_Param_bPrettyPrint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UWSJsonUtils::JsonToString(Z_Param_JsonData,Z_Param_bPrettyPrint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSJsonUtils::execGetNumberArrayField)
	{
		P_GET_OBJECT(UWSJsonData,Z_Param_JsonData);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(float,Z_Param_Out_OutArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWSJsonUtils::GetNumberArrayField(Z_Param_JsonData,Z_Param_FieldName,Z_Param_Out_OutArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSJsonUtils::execGetStringArrayField)
	{
		P_GET_OBJECT(UWSJsonData,Z_Param_JsonData);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWSJsonUtils::GetStringArrayField(Z_Param_JsonData,Z_Param_FieldName,Z_Param_Out_OutArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSJsonUtils::execGetObjectField)
	{
		P_GET_OBJECT(UWSJsonData,Z_Param_JsonData);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWSJsonData**)Z_Param__Result=UWSJsonUtils::GetObjectField(Z_Param_JsonData,Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSJsonUtils::execGetBoolField)
	{
		P_GET_OBJECT(UWSJsonData,Z_Param_JsonData);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_UBOOL_REF(Z_Param_Out_OutBool);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWSJsonUtils::GetBoolField(Z_Param_JsonData,Z_Param_FieldName,Z_Param_Out_OutBool);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSJsonUtils::execGetNumberField)
	{
		P_GET_OBJECT(UWSJsonData,Z_Param_JsonData);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWSJsonUtils::GetNumberField(Z_Param_JsonData,Z_Param_FieldName,Z_Param_Out_OutNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSJsonUtils::execGetStringField)
	{
		P_GET_OBJECT(UWSJsonData,Z_Param_JsonData);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWSJsonUtils::GetStringField(Z_Param_JsonData,Z_Param_FieldName,Z_Param_Out_OutString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWSJsonUtils::execParseJsonString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWSJsonData**)Z_Param__Result=UWSJsonUtils::ParseJsonString(Z_Param_JsonString);
		P_NATIVE_END;
	}
	void UWSJsonUtils::StaticRegisterNativesUWSJsonUtils()
	{
		UClass* Class = UWSJsonUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoolField", &UWSJsonUtils::execGetBoolField },
			{ "GetNumberArrayField", &UWSJsonUtils::execGetNumberArrayField },
			{ "GetNumberField", &UWSJsonUtils::execGetNumberField },
			{ "GetObjectField", &UWSJsonUtils::execGetObjectField },
			{ "GetStringArrayField", &UWSJsonUtils::execGetStringArrayField },
			{ "GetStringField", &UWSJsonUtils::execGetStringField },
			{ "JsonToString", &UWSJsonUtils::execJsonToString },
			{ "ParseJsonString", &UWSJsonUtils::execParseJsonString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWSJsonUtils_GetBoolField_Statics
	{
		struct WSJsonUtils_eventGetBoolField_Parms
		{
			UWSJsonData* JsonData;
			FString FieldName;
			bool OutBool;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static void NewProp_OutBool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OutBool;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWSJsonUtils_GetBoolField_Statics::NewProp_JsonData = { "JsonData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonUtils_eventGetBoolField_Parms, JsonData), Z_Construct_UClass_UWSJsonData_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonUtils_GetBoolField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSJsonUtils_GetBoolField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonUtils_eventGetBoolField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_GetBoolField_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UWSJsonUtils_GetBoolField_Statics::NewProp_FieldName_MetaData) };
	void Z_Construct_UFunction_UWSJsonUtils_GetBoolField_Statics::NewProp_OutBool_SetBit(void* Obj)
	{
		((WSJsonUtils_eventGetBoolField_Parms*)Obj)->OutBool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWSJsonUtils_GetBoolField_Statics::NewProp_OutBool = { "OutBool", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WSJsonUtils_eventGetBoolField_Parms), &Z_Construct_UFunction_UWSJsonUtils_GetBoolField_Statics::NewProp_OutBool_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UWSJsonUtils_GetBoolField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WSJsonUtils_eventGetBoolField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWSJsonUtils_GetBoolField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WSJsonUtils_eventGetBoolField_Parms), &Z_Construct_UFunction_UWSJsonUtils_GetBoolField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSJsonUtils_GetBoolField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_GetBoolField_Statics::NewProp_JsonData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_GetBoolField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_GetBoolField_Statics::NewProp_OutBool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_GetBoolField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonUtils_GetBoolField_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|JSON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get a boolean from a JsonData object\n" },
#endif
		{ "ModuleRelativePath", "Public/Utils/WSJsonUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a boolean from a JsonData object" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSJsonUtils_GetBoolField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSJsonUtils, nullptr, "GetBoolField", nullptr, nullptr, Z_Construct_UFunction_UWSJsonUtils_GetBoolField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_GetBoolField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSJsonUtils_GetBoolField_Statics::WSJsonUtils_eventGetBoolField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_GetBoolField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSJsonUtils_GetBoolField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_GetBoolField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSJsonUtils_GetBoolField_Statics::WSJsonUtils_eventGetBoolField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSJsonUtils_GetBoolField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSJsonUtils_GetBoolField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSJsonUtils_GetNumberArrayField_Statics
	{
		struct WSJsonUtils_eventGetNumberArrayField_Parms
		{
			UWSJsonData* JsonData;
			FString FieldName;
			TArray<float> OutArray;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWSJsonUtils_GetNumberArrayField_Statics::NewProp_JsonData = { "JsonData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonUtils_eventGetNumberArrayField_Parms, JsonData), Z_Construct_UClass_UWSJsonData_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonUtils_GetNumberArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSJsonUtils_GetNumberArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonUtils_eventGetNumberArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_GetNumberArrayField_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UWSJsonUtils_GetNumberArrayField_Statics::NewProp_FieldName_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWSJsonUtils_GetNumberArrayField_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWSJsonUtils_GetNumberArrayField_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonUtils_eventGetNumberArrayField_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UWSJsonUtils_GetNumberArrayField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WSJsonUtils_eventGetNumberArrayField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWSJsonUtils_GetNumberArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WSJsonUtils_eventGetNumberArrayField_Parms), &Z_Construct_UFunction_UWSJsonUtils_GetNumberArrayField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSJsonUtils_GetNumberArrayField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_GetNumberArrayField_Statics::NewProp_JsonData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_GetNumberArrayField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_GetNumberArrayField_Statics::NewProp_OutArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_GetNumberArrayField_Statics::NewProp_OutArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_GetNumberArrayField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonUtils_GetNumberArrayField_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|JSON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get an array of numbers from a JsonData object\n" },
#endif
		{ "ModuleRelativePath", "Public/Utils/WSJsonUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get an array of numbers from a JsonData object" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSJsonUtils_GetNumberArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSJsonUtils, nullptr, "GetNumberArrayField", nullptr, nullptr, Z_Construct_UFunction_UWSJsonUtils_GetNumberArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_GetNumberArrayField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSJsonUtils_GetNumberArrayField_Statics::WSJsonUtils_eventGetNumberArrayField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_GetNumberArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSJsonUtils_GetNumberArrayField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_GetNumberArrayField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSJsonUtils_GetNumberArrayField_Statics::WSJsonUtils_eventGetNumberArrayField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSJsonUtils_GetNumberArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSJsonUtils_GetNumberArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSJsonUtils_GetNumberField_Statics
	{
		struct WSJsonUtils_eventGetNumberField_Parms
		{
			UWSJsonData* JsonData;
			FString FieldName;
			float OutNumber;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutNumber;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWSJsonUtils_GetNumberField_Statics::NewProp_JsonData = { "JsonData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonUtils_eventGetNumberField_Parms, JsonData), Z_Construct_UClass_UWSJsonData_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonUtils_GetNumberField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSJsonUtils_GetNumberField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonUtils_eventGetNumberField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_GetNumberField_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UWSJsonUtils_GetNumberField_Statics::NewProp_FieldName_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWSJsonUtils_GetNumberField_Statics::NewProp_OutNumber = { "OutNumber", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonUtils_eventGetNumberField_Parms, OutNumber), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UWSJsonUtils_GetNumberField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WSJsonUtils_eventGetNumberField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWSJsonUtils_GetNumberField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WSJsonUtils_eventGetNumberField_Parms), &Z_Construct_UFunction_UWSJsonUtils_GetNumberField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSJsonUtils_GetNumberField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_GetNumberField_Statics::NewProp_JsonData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_GetNumberField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_GetNumberField_Statics::NewProp_OutNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_GetNumberField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonUtils_GetNumberField_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|JSON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get a number from a JsonData object\n" },
#endif
		{ "ModuleRelativePath", "Public/Utils/WSJsonUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a number from a JsonData object" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSJsonUtils_GetNumberField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSJsonUtils, nullptr, "GetNumberField", nullptr, nullptr, Z_Construct_UFunction_UWSJsonUtils_GetNumberField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_GetNumberField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSJsonUtils_GetNumberField_Statics::WSJsonUtils_eventGetNumberField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_GetNumberField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSJsonUtils_GetNumberField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_GetNumberField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSJsonUtils_GetNumberField_Statics::WSJsonUtils_eventGetNumberField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSJsonUtils_GetNumberField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSJsonUtils_GetNumberField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSJsonUtils_GetObjectField_Statics
	{
		struct WSJsonUtils_eventGetObjectField_Parms
		{
			UWSJsonData* JsonData;
			FString FieldName;
			UWSJsonData* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWSJsonUtils_GetObjectField_Statics::NewProp_JsonData = { "JsonData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonUtils_eventGetObjectField_Parms, JsonData), Z_Construct_UClass_UWSJsonData_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonUtils_GetObjectField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSJsonUtils_GetObjectField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonUtils_eventGetObjectField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_GetObjectField_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UWSJsonUtils_GetObjectField_Statics::NewProp_FieldName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWSJsonUtils_GetObjectField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonUtils_eventGetObjectField_Parms, ReturnValue), Z_Construct_UClass_UWSJsonData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSJsonUtils_GetObjectField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_GetObjectField_Statics::NewProp_JsonData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_GetObjectField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_GetObjectField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonUtils_GetObjectField_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|JSON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get a nested JsonData object from a JsonData object\n" },
#endif
		{ "ModuleRelativePath", "Public/Utils/WSJsonUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a nested JsonData object from a JsonData object" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSJsonUtils_GetObjectField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSJsonUtils, nullptr, "GetObjectField", nullptr, nullptr, Z_Construct_UFunction_UWSJsonUtils_GetObjectField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_GetObjectField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSJsonUtils_GetObjectField_Statics::WSJsonUtils_eventGetObjectField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_GetObjectField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSJsonUtils_GetObjectField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_GetObjectField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSJsonUtils_GetObjectField_Statics::WSJsonUtils_eventGetObjectField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSJsonUtils_GetObjectField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSJsonUtils_GetObjectField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSJsonUtils_GetStringArrayField_Statics
	{
		struct WSJsonUtils_eventGetStringArrayField_Parms
		{
			UWSJsonData* JsonData;
			FString FieldName;
			TArray<FString> OutArray;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWSJsonUtils_GetStringArrayField_Statics::NewProp_JsonData = { "JsonData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonUtils_eventGetStringArrayField_Parms, JsonData), Z_Construct_UClass_UWSJsonData_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonUtils_GetStringArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSJsonUtils_GetStringArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonUtils_eventGetStringArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_GetStringArrayField_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UWSJsonUtils_GetStringArrayField_Statics::NewProp_FieldName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSJsonUtils_GetStringArrayField_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWSJsonUtils_GetStringArrayField_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonUtils_eventGetStringArrayField_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UWSJsonUtils_GetStringArrayField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WSJsonUtils_eventGetStringArrayField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWSJsonUtils_GetStringArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WSJsonUtils_eventGetStringArrayField_Parms), &Z_Construct_UFunction_UWSJsonUtils_GetStringArrayField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSJsonUtils_GetStringArrayField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_GetStringArrayField_Statics::NewProp_JsonData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_GetStringArrayField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_GetStringArrayField_Statics::NewProp_OutArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_GetStringArrayField_Statics::NewProp_OutArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_GetStringArrayField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonUtils_GetStringArrayField_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|JSON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get an array of strings from a JsonData object\n" },
#endif
		{ "ModuleRelativePath", "Public/Utils/WSJsonUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get an array of strings from a JsonData object" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSJsonUtils_GetStringArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSJsonUtils, nullptr, "GetStringArrayField", nullptr, nullptr, Z_Construct_UFunction_UWSJsonUtils_GetStringArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_GetStringArrayField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSJsonUtils_GetStringArrayField_Statics::WSJsonUtils_eventGetStringArrayField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_GetStringArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSJsonUtils_GetStringArrayField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_GetStringArrayField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSJsonUtils_GetStringArrayField_Statics::WSJsonUtils_eventGetStringArrayField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSJsonUtils_GetStringArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSJsonUtils_GetStringArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSJsonUtils_GetStringField_Statics
	{
		struct WSJsonUtils_eventGetStringField_Parms
		{
			UWSJsonData* JsonData;
			FString FieldName;
			FString OutString;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutString;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWSJsonUtils_GetStringField_Statics::NewProp_JsonData = { "JsonData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonUtils_eventGetStringField_Parms, JsonData), Z_Construct_UClass_UWSJsonData_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonUtils_GetStringField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSJsonUtils_GetStringField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonUtils_eventGetStringField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_GetStringField_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UWSJsonUtils_GetStringField_Statics::NewProp_FieldName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSJsonUtils_GetStringField_Statics::NewProp_OutString = { "OutString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonUtils_eventGetStringField_Parms, OutString), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UWSJsonUtils_GetStringField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WSJsonUtils_eventGetStringField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWSJsonUtils_GetStringField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WSJsonUtils_eventGetStringField_Parms), &Z_Construct_UFunction_UWSJsonUtils_GetStringField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSJsonUtils_GetStringField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_GetStringField_Statics::NewProp_JsonData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_GetStringField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_GetStringField_Statics::NewProp_OutString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_GetStringField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonUtils_GetStringField_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|JSON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get a string from a JsonData object\n" },
#endif
		{ "ModuleRelativePath", "Public/Utils/WSJsonUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a string from a JsonData object" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSJsonUtils_GetStringField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSJsonUtils, nullptr, "GetStringField", nullptr, nullptr, Z_Construct_UFunction_UWSJsonUtils_GetStringField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_GetStringField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSJsonUtils_GetStringField_Statics::WSJsonUtils_eventGetStringField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_GetStringField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSJsonUtils_GetStringField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_GetStringField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSJsonUtils_GetStringField_Statics::WSJsonUtils_eventGetStringField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSJsonUtils_GetStringField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSJsonUtils_GetStringField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSJsonUtils_JsonToString_Statics
	{
		struct WSJsonUtils_eventJsonToString_Parms
		{
			UWSJsonData* JsonData;
			bool bPrettyPrint;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonData;
		static void NewProp_bPrettyPrint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrettyPrint;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWSJsonUtils_JsonToString_Statics::NewProp_JsonData = { "JsonData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonUtils_eventJsonToString_Parms, JsonData), Z_Construct_UClass_UWSJsonData_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UWSJsonUtils_JsonToString_Statics::NewProp_bPrettyPrint_SetBit(void* Obj)
	{
		((WSJsonUtils_eventJsonToString_Parms*)Obj)->bPrettyPrint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWSJsonUtils_JsonToString_Statics::NewProp_bPrettyPrint = { "bPrettyPrint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WSJsonUtils_eventJsonToString_Parms), &Z_Construct_UFunction_UWSJsonUtils_JsonToString_Statics::NewProp_bPrettyPrint_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSJsonUtils_JsonToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonUtils_eventJsonToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSJsonUtils_JsonToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_JsonToString_Statics::NewProp_JsonData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_JsonToString_Statics::NewProp_bPrettyPrint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_JsonToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonUtils_JsonToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|JSON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convert a JsonData object to a string (for debugging)\n" },
#endif
		{ "CPP_Default_bPrettyPrint", "true" },
		{ "ModuleRelativePath", "Public/Utils/WSJsonUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert a JsonData object to a string (for debugging)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSJsonUtils_JsonToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSJsonUtils, nullptr, "JsonToString", nullptr, nullptr, Z_Construct_UFunction_UWSJsonUtils_JsonToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_JsonToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSJsonUtils_JsonToString_Statics::WSJsonUtils_eventJsonToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_JsonToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSJsonUtils_JsonToString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_JsonToString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSJsonUtils_JsonToString_Statics::WSJsonUtils_eventJsonToString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSJsonUtils_JsonToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSJsonUtils_JsonToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWSJsonUtils_ParseJsonString_Statics
	{
		struct WSJsonUtils_eventParseJsonString_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonUtils_ParseJsonString_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWSJsonUtils_ParseJsonString_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonUtils_eventParseJsonString_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_ParseJsonString_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_UWSJsonUtils_ParseJsonString_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWSJsonUtils_ParseJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WSJsonUtils_eventParseJsonString_Parms, ReturnValue), Z_Construct_UClass_UWSJsonData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWSJsonUtils_ParseJsonString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_ParseJsonString_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWSJsonUtils_ParseJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWSJsonUtils_ParseJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket|JSON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Parse a JSON string into a JsonData object\n" },
#endif
		{ "ModuleRelativePath", "Public/Utils/WSJsonUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parse a JSON string into a JsonData object" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWSJsonUtils_ParseJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWSJsonUtils, nullptr, "ParseJsonString", nullptr, nullptr, Z_Construct_UFunction_UWSJsonUtils_ParseJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_ParseJsonString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWSJsonUtils_ParseJsonString_Statics::WSJsonUtils_eventParseJsonString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_ParseJsonString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWSJsonUtils_ParseJsonString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWSJsonUtils_ParseJsonString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWSJsonUtils_ParseJsonString_Statics::WSJsonUtils_eventParseJsonString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWSJsonUtils_ParseJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWSJsonUtils_ParseJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWSJsonUtils);
	UClass* Z_Construct_UClass_UWSJsonUtils_NoRegister()
	{
		return UWSJsonUtils::StaticClass();
	}
	struct Z_Construct_UClass_UWSJsonUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWSJsonUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WebSocketBP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWSJsonUtils_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UWSJsonUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWSJsonUtils_GetBoolField, "GetBoolField" }, // 3432600446
		{ &Z_Construct_UFunction_UWSJsonUtils_GetNumberArrayField, "GetNumberArrayField" }, // 1094078105
		{ &Z_Construct_UFunction_UWSJsonUtils_GetNumberField, "GetNumberField" }, // 2344330932
		{ &Z_Construct_UFunction_UWSJsonUtils_GetObjectField, "GetObjectField" }, // 3425342033
		{ &Z_Construct_UFunction_UWSJsonUtils_GetStringArrayField, "GetStringArrayField" }, // 711073194
		{ &Z_Construct_UFunction_UWSJsonUtils_GetStringField, "GetStringField" }, // 217747737
		{ &Z_Construct_UFunction_UWSJsonUtils_JsonToString, "JsonToString" }, // 1444176784
		{ &Z_Construct_UFunction_UWSJsonUtils_ParseJsonString, "ParseJsonString" }, // 2142458346
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWSJsonUtils_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWSJsonUtils_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Utility functions for working with JSON in WebSocket communications\n */" },
#endif
		{ "IncludePath", "Utils/WSJsonUtils.h" },
		{ "ModuleRelativePath", "Public/Utils/WSJsonUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility functions for working with JSON in WebSocket communications" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWSJsonUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWSJsonUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWSJsonUtils_Statics::ClassParams = {
		&UWSJsonUtils::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWSJsonUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UWSJsonUtils_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UWSJsonUtils()
	{
		if (!Z_Registration_Info_UClass_UWSJsonUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWSJsonUtils.OuterSingleton, Z_Construct_UClass_UWSJsonUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWSJsonUtils.OuterSingleton;
	}
	template<> WEBSOCKETBP_API UClass* StaticClass<UWSJsonUtils>()
	{
		return UWSJsonUtils::StaticClass();
	}
	UWSJsonUtils::UWSJsonUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWSJsonUtils);
	UWSJsonUtils::~UWSJsonUtils() {}
	struct Z_CompiledInDeferFile_FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Utils_WSJsonUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Utils_WSJsonUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWSJsonUtils, UWSJsonUtils::StaticClass, TEXT("UWSJsonUtils"), &Z_Registration_Info_UClass_UWSJsonUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWSJsonUtils), 1120437850U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Utils_WSJsonUtils_h_1321007758(TEXT("/Script/WebSocketBP"),
		Z_CompiledInDeferFile_FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Utils_WSJsonUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Utils_WSJsonUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
