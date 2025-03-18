#include "Utils/WSJsonUtils.h"

UWSJsonData* UWSJsonUtils::ParseJsonString(const FString& JsonString)
{
    // 获取世界上下文以创建 UWSJsonData 对象
    UWorld* World = GEngine->GetCurrentPlayWorld();
    if (!World)
    {
        return nullptr;
    }
    
    UWSClientSubsystem* Subsystem = World->GetSubsystem<UWSClientSubsystem>();
    if (!Subsystem)
    {
        return nullptr;
    }
    
    // 使用子系统的方法解析 JSON 字符串
    return Subsystem->ParseJsonString(JsonString);
}

bool UWSJsonUtils::GetStringField(UWSJsonData* JsonData, const FString& FieldName, FString& OutString)
{
    if (!JsonData)
    {
        return false;
    }
    
    return JsonData->GetStringField(FieldName, OutString);
}

bool UWSJsonUtils::GetNumberField(UWSJsonData* JsonData, const FString& FieldName, float& OutNumber)
{
    if (!JsonData)
    {
        return false;
    }
    
    return JsonData->GetNumberField(FieldName, OutNumber);
}

bool UWSJsonUtils::GetBoolField(UWSJsonData* JsonData, const FString& FieldName, bool& OutBool)
{
    if (!JsonData)
    {
        return false;
    }
    
    return JsonData->GetBoolField(FieldName, OutBool);
}

UWSJsonData* UWSJsonUtils::GetObjectField(UWSJsonData* JsonData, const FString& FieldName)
{
    if (!JsonData || !JsonData->GetJsonObject().IsValid())
    {
        return nullptr;
    }
    
    // 获取世界上下文以创建 UWSJsonData 对象
    UWorld* World = GEngine->GetCurrentPlayWorld();
    if (!World)
    {
        return nullptr;
    }
    
    UWSClientSubsystem* Subsystem = World->GetSubsystem<UWSClientSubsystem>();
    if (!Subsystem)
    {
        return nullptr;
    }
    
    // 创建一个新的 JsonData 对象
    UWSJsonData* ResultJsonData = Subsystem->CreateJsonData();
    
    // 如果存在对象字段，设置其值
    if (JsonData->GetJsonObject()->HasField(FieldName) && JsonData->GetJsonObject()->GetObjectField(FieldName).IsValid())
    {
        ResultJsonData->JsonObject = JsonData->GetJsonObject()->GetObjectField(FieldName);
        return ResultJsonData;
    }
    
    return nullptr;
}

bool UWSJsonUtils::GetStringArrayField(UWSJsonData* JsonData, const FString& FieldName, TArray<FString>& OutArray)
{
    if (!JsonData || !JsonData->GetJsonObject().IsValid())
    {
        return false;
    }
    
    if (!JsonData->GetJsonObject()->HasField(FieldName))
    {
        return false;
    }
    
    OutArray.Empty();
    const TArray<TSharedPtr<FJsonValue>>* JsonArray;
    if (JsonData->GetJsonObject()->TryGetArrayField(FieldName, JsonArray))
    {
        for (const TSharedPtr<FJsonValue>& Value : *JsonArray)
        {
            OutArray.Add(Value->AsString());
        }
        return true;
    }
    
    return false;
}

bool UWSJsonUtils::GetNumberArrayField(UWSJsonData* JsonData, const FString& FieldName, TArray<float>& OutArray)
{
    if (!JsonData || !JsonData->GetJsonObject().IsValid())
    {
        return false;
    }
    
    if (!JsonData->GetJsonObject()->HasField(FieldName))
    {
        return false;
    }
    
    OutArray.Empty();
    const TArray<TSharedPtr<FJsonValue>>* JsonArray;
    if (JsonData->GetJsonObject()->TryGetArrayField(FieldName, JsonArray))
    {
        for (const TSharedPtr<FJsonValue>& Value : *JsonArray)
        {
            OutArray.Add(Value->AsNumber());
        }
        return true;
    }
    
    return false;
}

FString UWSJsonUtils::JsonToString(UWSJsonData* JsonData, bool bPrettyPrint)
{
    if (!JsonData)
    {
        return TEXT("{}");
    }
    
    return JsonData->ToString(bPrettyPrint);
} 