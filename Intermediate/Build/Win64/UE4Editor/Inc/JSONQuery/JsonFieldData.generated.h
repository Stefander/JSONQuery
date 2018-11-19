// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UJsonFieldData;
enum class EJSONResult : uint8;
#ifdef JSONQUERY_JsonFieldData_generated_h
#error "JsonFieldData.generated.h already included, missing '#pragma once' in JsonFieldData.h"
#endif
#define JSONQUERY_JsonFieldData_generated_h

#define JSONQueryProject_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_39_DELEGATE \
struct _Script_JSONQuery_eventOnGetResult_Parms \
{ \
	bool bSuccess; \
	UJsonFieldData* JSON; \
	EJSONResult Status; \
}; \
static inline void FOnGetResult_DelegateWrapper(const FMulticastScriptDelegate& OnGetResult, bool bSuccess, UJsonFieldData* JSON, const EJSONResult Status) \
{ \
	_Script_JSONQuery_eventOnGetResult_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.JSON=JSON; \
	Parms.Status=Status; \
	OnGetResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define JSONQueryProject_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetNullArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_length); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetNullArray(Z_Param_key,Z_Param_Out_length); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNull) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetNull(Z_Param_key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsNull) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_fieldExists); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsNull(Z_Param_key,Z_Param_Out_fieldExists); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIntArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_TARRAY(int32,Z_Param_data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetIntArray(Z_Param_key,Z_Param_data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetIntArray(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetInt(Z_Param_key,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetInt(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloatArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_TARRAY(float,Z_Param_data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetFloatArray(Z_Param_key,Z_Param_data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloatArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<float>*)Z_Param__Result=P_THIS->GetFloatArray(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetFloat(Z_Param_key,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFloat(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_TARRAY(bool,Z_Param_data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetBoolArray(Z_Param_key,Z_Param_data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoolArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<bool>*)Z_Param__Result=P_THIS->GetBoolArray(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolean) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL(Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetBoolean(Z_Param_key,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBool(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStringArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_TARRAY(FString,Z_Param_data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetStringArray(Z_Param_key,Z_Param_data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStringArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetStringArray(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetString(Z_Param_key,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetString(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetObjectArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_TARRAY(UJsonFieldData*,Z_Param_arrayData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetObjectArray(Z_Param_key,Z_Param_arrayData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UJsonFieldData*>*)Z_Param__Result=P_THIS->GetObjectArray(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetObject) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_OBJECT(UJsonFieldData,Z_Param_objectData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetObject(Z_Param_key,Z_Param_objectData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObject) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=P_THIS->GetObject(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostRequestWithFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PostRequestWithFile(Z_Param_FilePath,Z_Param_Url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFromFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->FromFile(Z_Param_FilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->ToString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFromString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_dataString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->FromString(Z_Param_dataString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PostRequest(Z_Param_url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=UJsonFieldData::GetRequest(Z_Param_url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectKeys) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetObjectKeys(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasField(Z_Param_key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=UJsonFieldData::Create(); \
		P_NATIVE_END; \
	}


#define JSONQueryProject_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetNullArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_length); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetNullArray(Z_Param_key,Z_Param_Out_length); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNull) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetNull(Z_Param_key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsNull) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_fieldExists); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsNull(Z_Param_key,Z_Param_Out_fieldExists); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIntArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_TARRAY(int32,Z_Param_data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetIntArray(Z_Param_key,Z_Param_data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetIntArray(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetInt(Z_Param_key,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetInt(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloatArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_TARRAY(float,Z_Param_data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetFloatArray(Z_Param_key,Z_Param_data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloatArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<float>*)Z_Param__Result=P_THIS->GetFloatArray(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetFloat(Z_Param_key,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFloat(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_TARRAY(bool,Z_Param_data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetBoolArray(Z_Param_key,Z_Param_data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoolArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<bool>*)Z_Param__Result=P_THIS->GetBoolArray(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolean) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL(Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetBoolean(Z_Param_key,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBool(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStringArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_TARRAY(FString,Z_Param_data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetStringArray(Z_Param_key,Z_Param_data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStringArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetStringArray(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetString(Z_Param_key,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetString(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetObjectArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_TARRAY(UJsonFieldData*,Z_Param_arrayData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetObjectArray(Z_Param_key,Z_Param_arrayData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UJsonFieldData*>*)Z_Param__Result=P_THIS->GetObjectArray(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetObject) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_OBJECT(UJsonFieldData,Z_Param_objectData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetObject(Z_Param_key,Z_Param_objectData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObject) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=P_THIS->GetObject(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostRequestWithFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PostRequestWithFile(Z_Param_FilePath,Z_Param_Url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFromFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->FromFile(Z_Param_FilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->ToString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFromString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_dataString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->FromString(Z_Param_dataString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PostRequest(Z_Param_url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=UJsonFieldData::GetRequest(Z_Param_url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectKeys) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetObjectKeys(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasField(Z_Param_key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=UJsonFieldData::Create(); \
		P_NATIVE_END; \
	}


#define JSONQueryProject_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJsonFieldData(); \
	friend struct Z_Construct_UClass_UJsonFieldData_Statics; \
public: \
	DECLARE_CLASS(UJsonFieldData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JSONQuery"), NO_API) \
	DECLARE_SERIALIZER(UJsonFieldData)


#define JSONQueryProject_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUJsonFieldData(); \
	friend struct Z_Construct_UClass_UJsonFieldData_Statics; \
public: \
	DECLARE_CLASS(UJsonFieldData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JSONQuery"), NO_API) \
	DECLARE_SERIALIZER(UJsonFieldData)


#define JSONQueryProject_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonFieldData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonFieldData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonFieldData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonFieldData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonFieldData(UJsonFieldData&&); \
	NO_API UJsonFieldData(const UJsonFieldData&); \
public:


#define JSONQueryProject_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonFieldData(UJsonFieldData&&); \
	NO_API UJsonFieldData(const UJsonFieldData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonFieldData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonFieldData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UJsonFieldData)


#define JSONQueryProject_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_PRIVATE_PROPERTY_OFFSET
#define JSONQueryProject_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_41_PROLOG
#define JSONQueryProject_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JSONQueryProject_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_PRIVATE_PROPERTY_OFFSET \
	JSONQueryProject_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_RPC_WRAPPERS \
	JSONQueryProject_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_INCLASS \
	JSONQueryProject_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JSONQueryProject_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JSONQueryProject_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_PRIVATE_PROPERTY_OFFSET \
	JSONQueryProject_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	JSONQueryProject_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_INCLASS_NO_PURE_DECLS \
	JSONQueryProject_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JSONQueryProject_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h


#define FOREACH_ENUM_EJSONRESULT(op) \
	op(EJSONResult::Success) \
	op(EJSONResult::HttpFailed) \
	op(EJSONResult::JSONParsingFailed) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
