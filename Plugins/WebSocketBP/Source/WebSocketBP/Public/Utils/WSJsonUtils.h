#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonSerializer.h"
#include "Subsystems/WSClientSubsystem.h"
#include "WSJsonUtils.generated.h"

/**
 * Utility functions for working with JSON in WebSocket communications
 */
UCLASS()
class WEBSOCKETBP_API UWSJsonUtils : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    // Parse a JSON string into a JsonData object
    UFUNCTION(BlueprintCallable, Category = "WebSocket|JSON")
    static UWSJsonData* ParseJsonString(const FString& JsonString);
    
    // Get a string from a JsonData object
    UFUNCTION(BlueprintCallable, Category = "WebSocket|JSON")
    static bool GetStringField(UWSJsonData* JsonData, const FString& FieldName, FString& OutString);
    
    // Get a number from a JsonData object
    UFUNCTION(BlueprintCallable, Category = "WebSocket|JSON")
    static bool GetNumberField(UWSJsonData* JsonData, const FString& FieldName, float& OutNumber);
    
    // Get a boolean from a JsonData object
    UFUNCTION(BlueprintCallable, Category = "WebSocket|JSON")
    static bool GetBoolField(UWSJsonData* JsonData, const FString& FieldName, bool& OutBool);
    
    // Get a nested JsonData object from a JsonData object
    UFUNCTION(BlueprintCallable, Category = "WebSocket|JSON")
    static UWSJsonData* GetObjectField(UWSJsonData* JsonData, const FString& FieldName);
    
    // Get an array of strings from a JsonData object
    UFUNCTION(BlueprintCallable, Category = "WebSocket|JSON")
    static bool GetStringArrayField(UWSJsonData* JsonData, const FString& FieldName, TArray<FString>& OutArray);
    
    // Get an array of numbers from a JsonData object
    UFUNCTION(BlueprintCallable, Category = "WebSocket|JSON")
    static bool GetNumberArrayField(UWSJsonData* JsonData, const FString& FieldName, TArray<float>& OutArray);
    
    // Convert a JsonData object to a string (for debugging)
    UFUNCTION(BlueprintCallable, Category = "WebSocket|JSON")
    static FString JsonToString(UWSJsonData* JsonData, bool bPrettyPrint = true);
}; 