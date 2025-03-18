// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utils/WSJsonUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWSJsonData;
#ifdef WEBSOCKETBP_WSJsonUtils_generated_h
#error "WSJsonUtils.generated.h already included, missing '#pragma once' in WSJsonUtils.h"
#endif
#define WEBSOCKETBP_WSJsonUtils_generated_h

#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Utils_WSJsonUtils_h_16_SPARSE_DATA
#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Utils_WSJsonUtils_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Utils_WSJsonUtils_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Utils_WSJsonUtils_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJsonToString); \
	DECLARE_FUNCTION(execGetNumberArrayField); \
	DECLARE_FUNCTION(execGetStringArrayField); \
	DECLARE_FUNCTION(execGetObjectField); \
	DECLARE_FUNCTION(execGetBoolField); \
	DECLARE_FUNCTION(execGetNumberField); \
	DECLARE_FUNCTION(execGetStringField); \
	DECLARE_FUNCTION(execParseJsonString);


#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Utils_WSJsonUtils_h_16_ACCESSORS
#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Utils_WSJsonUtils_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWSJsonUtils(); \
	friend struct Z_Construct_UClass_UWSJsonUtils_Statics; \
public: \
	DECLARE_CLASS(UWSJsonUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebSocketBP"), NO_API) \
	DECLARE_SERIALIZER(UWSJsonUtils)


#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Utils_WSJsonUtils_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWSJsonUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWSJsonUtils(UWSJsonUtils&&); \
	NO_API UWSJsonUtils(const UWSJsonUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWSJsonUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWSJsonUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWSJsonUtils) \
	NO_API virtual ~UWSJsonUtils();


#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Utils_WSJsonUtils_h_13_PROLOG
#define FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Utils_WSJsonUtils_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Utils_WSJsonUtils_h_16_SPARSE_DATA \
	FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Utils_WSJsonUtils_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Utils_WSJsonUtils_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Utils_WSJsonUtils_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Utils_WSJsonUtils_h_16_ACCESSORS \
	FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Utils_WSJsonUtils_h_16_INCLASS_NO_PURE_DECLS \
	FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Utils_WSJsonUtils_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEBSOCKETBP_API UClass* StaticClass<class UWSJsonUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WSPluginProject_Plugins_WebSocketBP_Source_WebSocketBP_Public_Utils_WSJsonUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
