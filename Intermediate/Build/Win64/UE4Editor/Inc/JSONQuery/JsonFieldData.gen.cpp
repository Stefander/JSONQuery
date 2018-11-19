// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JSONQuery/Classes/JsonFieldData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJsonFieldData() {}
// Cross Module References
	JSONQUERY_API UFunction* Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_JSONQuery();
	JSONQUERY_API UEnum* Z_Construct_UEnum_JSONQuery_EJSONResult();
	JSONQUERY_API UClass* Z_Construct_UClass_UJsonFieldData_NoRegister();
	JSONQUERY_API UClass* Z_Construct_UClass_UJsonFieldData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_Create();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_FromFile();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_FromString();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_GetBool();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_GetBoolArray();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_GetFloat();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_GetFloatArray();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_GetInt();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_GetIntArray();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_GetIsNull();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_GetObject();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_GetObjectArray();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_GetObjectKeys();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_GetRequest();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_GetString();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_GetStringArray();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_HasField();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_PostRequest();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_SetBoolArray();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_SetBoolean();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_SetFloat();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_SetFloatArray();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_SetInt();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_SetIntArray();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_SetNull();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_SetNullArray();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_SetObject();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_SetObjectArray();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_SetString();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_SetStringArray();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_ToString();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics
	{
		struct _Script_JSONQuery_eventOnGetResult_Parms
		{
			bool bSuccess;
			UJsonFieldData* JSON;
			EJSONResult Status;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSON;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_Status_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_Status = { UE4CodeGen_Private::EPropertyClass::Enum, "Status", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(_Script_JSONQuery_eventOnGetResult_Parms, Status), Z_Construct_UEnum_JSONQuery_EJSONResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_Status_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_Status_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_JSON = { UE4CodeGen_Private::EPropertyClass::Object, "JSON", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_JSONQuery_eventOnGetResult_Parms, JSON), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_bSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_JSONQuery_eventOnGetResult_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_bSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "bSuccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(_Script_JSONQuery_eventOnGetResult_Parms), &Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_bSuccess_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_bSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_JSON,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Generate a delegate for the OnGetResult event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_JSONQuery, "OnGetResult__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_JSONQuery_eventOnGetResult_Parms), Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EJSONResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_JSONQuery_EJSONResult, Z_Construct_UPackage__Script_JSONQuery(), TEXT("EJSONResult"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EJSONResult(EJSONResult_StaticEnum, TEXT("/Script/JSONQuery"), TEXT("EJSONResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_JSONQuery_EJSONResult_CRC() { return 1372477519U; }
	UEnum* Z_Construct_UEnum_JSONQuery_EJSONResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_JSONQuery();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EJSONResult"), 0, Get_Z_Construct_UEnum_JSONQuery_EJSONResult_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EJSONResult::Success", (int64)EJSONResult::Success },
				{ "EJSONResult::HttpFailed", (int64)EJSONResult::HttpFailed },
				{ "EJSONResult::JSONParsingFailed", (int64)EJSONResult::JSONParsingFailed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "JSON" },
				{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
				{ "ToolTip", "The possible status of a JSON POST/GET call." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_JSONQuery,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EJSONResult",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EJSONResult",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UJsonFieldData::StaticRegisterNativesUJsonFieldData()
	{
		UClass* Class = UJsonFieldData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Create", &UJsonFieldData::execCreate },
			{ "FromFile", &UJsonFieldData::execFromFile },
			{ "FromString", &UJsonFieldData::execFromString },
			{ "GetBool", &UJsonFieldData::execGetBool },
			{ "GetBoolArray", &UJsonFieldData::execGetBoolArray },
			{ "GetFloat", &UJsonFieldData::execGetFloat },
			{ "GetFloatArray", &UJsonFieldData::execGetFloatArray },
			{ "GetInt", &UJsonFieldData::execGetInt },
			{ "GetIntArray", &UJsonFieldData::execGetIntArray },
			{ "GetIsNull", &UJsonFieldData::execGetIsNull },
			{ "GetObject", &UJsonFieldData::execGetObject },
			{ "GetObjectArray", &UJsonFieldData::execGetObjectArray },
			{ "GetObjectKeys", &UJsonFieldData::execGetObjectKeys },
			{ "GetRequest", &UJsonFieldData::execGetRequest },
			{ "GetString", &UJsonFieldData::execGetString },
			{ "GetStringArray", &UJsonFieldData::execGetStringArray },
			{ "HasField", &UJsonFieldData::execHasField },
			{ "PostRequest", &UJsonFieldData::execPostRequest },
			{ "PostRequestWithFile", &UJsonFieldData::execPostRequestWithFile },
			{ "SetBoolArray", &UJsonFieldData::execSetBoolArray },
			{ "SetBoolean", &UJsonFieldData::execSetBoolean },
			{ "SetFloat", &UJsonFieldData::execSetFloat },
			{ "SetFloatArray", &UJsonFieldData::execSetFloatArray },
			{ "SetInt", &UJsonFieldData::execSetInt },
			{ "SetIntArray", &UJsonFieldData::execSetIntArray },
			{ "SetNull", &UJsonFieldData::execSetNull },
			{ "SetNullArray", &UJsonFieldData::execSetNullArray },
			{ "SetObject", &UJsonFieldData::execSetObject },
			{ "SetObjectArray", &UJsonFieldData::execSetObjectArray },
			{ "SetString", &UJsonFieldData::execSetString },
			{ "SetStringArray", &UJsonFieldData::execSetStringArray },
			{ "ToString", &UJsonFieldData::execToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJsonFieldData_Create_Statics
	{
		struct JsonFieldData_eventCreate_Parms
		{
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_Create_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventCreate_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_Create_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_Create_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_Create_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "Create JSON" },
		{ "Keywords", "new" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Create a new instance of the UJsonFieldData class, for use in Blueprint graphs.\n\n@return       A pointer to the newly created post data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_Create_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "Create", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(JsonFieldData_eventCreate_Parms), Z_Construct_UFunction_UJsonFieldData_Create_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_Create_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_Create_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_Create_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_Create()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_Create_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_FromFile_Statics
	{
		struct JsonFieldData_eventFromFile_Parms
		{
			FString FilePath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsonFieldData_eventFromFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(JsonFieldData_eventFromFile_Parms), &Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::NewProp_FilePath = { UE4CodeGen_Private::EPropertyClass::Str, "FilePath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventFromFile_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::NewProp_FilePath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::NewProp_FilePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::NewProp_FilePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "From File" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Creates new data from the\n\n@param        FilePath        Text Json File in game content folder\n\n@return       JsonFieldData Object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "FromFile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(JsonFieldData_eventFromFile_Parms), Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_FromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_FromString_Statics
	{
		struct JsonFieldData_eventFromString_Parms
		{
			FString dataString;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dataString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_dataString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UJsonFieldData_FromString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsonFieldData_eventFromString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_FromString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(JsonFieldData_eventFromString_Parms), &Z_Construct_UFunction_UJsonFieldData_FromString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_FromString_Statics::NewProp_dataString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_FromString_Statics::NewProp_dataString = { UE4CodeGen_Private::EPropertyClass::Str, "dataString", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventFromString_Parms, dataString), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_FromString_Statics::NewProp_dataString_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_FromString_Statics::NewProp_dataString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_FromString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_FromString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_FromString_Statics::NewProp_dataString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_FromString_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "From String" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Sets the fields from the supplied JSON string\n\n@param        dataString The JSON string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_FromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "FromString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(JsonFieldData_eventFromString_Parms), Z_Construct_UFunction_UJsonFieldData_FromString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_FromString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_FromString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_FromString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_FromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_FromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_GetBool_Statics
	{
		struct JsonFieldData_eventGetBool_Parms
		{
			FString key;
			bool success;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsonFieldData_eventGetBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(JsonFieldData_eventGetBool_Parms), &Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::NewProp_success_SetBit(void* Obj)
	{
		((JsonFieldData_eventGetBool_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::NewProp_success = { UE4CodeGen_Private::EPropertyClass::Bool, "success", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(JsonFieldData_eventGetBool_Parms), &Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventGetBool_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::NewProp_key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "Get Boolean Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Tries to get a boolean from the field data by key, returns the boolean when successful\n\n@param        key                             Key\n@param        success                 Was the boolean field found?\n\n@return       The requested boolean, always false when failed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "GetBool", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(JsonFieldData_eventGetBool_Parms), Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics
	{
		struct JsonFieldData_eventGetBoolArray_Parms
		{
			FString key;
			bool success;
			TArray<bool> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue_Inner;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventGetBoolArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::NewProp_success_SetBit(void* Obj)
	{
		((JsonFieldData_eventGetBoolArray_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::NewProp_success = { UE4CodeGen_Private::EPropertyClass::Bool, "success", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(JsonFieldData_eventGetBoolArray_Parms), &Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventGetBoolArray_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::NewProp_key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "Get Boolean Array Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Gets a boolean array from the post data with the given key\n\n@param        key                             Key\n@param        success                 Was the field found?\n\n@return       The requested array of booleans" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "GetBoolArray", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14420401, sizeof(JsonFieldData_eventGetBoolArray_Parms), Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetBoolArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics
	{
		struct JsonFieldData_eventGetFloat_Parms
		{
			FString key;
			bool success;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventGetFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::NewProp_success_SetBit(void* Obj)
	{
		((JsonFieldData_eventGetFloat_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::NewProp_success = { UE4CodeGen_Private::EPropertyClass::Bool, "success", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(JsonFieldData_eventGetFloat_Parms), &Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventGetFloat_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::NewProp_key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "Get Float Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Tries to get a float from the field data by key, returns the float when successful\n\n@param        key                             Key\n@param        success                 Was the float field found?\n\n@return       The requested float, always 0.0 when failed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "GetFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(JsonFieldData_eventGetFloat_Parms), Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics
	{
		struct JsonFieldData_eventGetFloatArray_Parms
		{
			FString key;
			bool success;
			TArray<float> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventGetFloatArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::NewProp_success_SetBit(void* Obj)
	{
		((JsonFieldData_eventGetFloatArray_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::NewProp_success = { UE4CodeGen_Private::EPropertyClass::Bool, "success", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(JsonFieldData_eventGetFloatArray_Parms), &Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventGetFloatArray_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::NewProp_key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "Get Float Array Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Gets a float array from the post data with the given key\n\n@param        key                             Key\n@param        success                 Was the field found?\n\n@return       The requested array of floats" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "GetFloatArray", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14420401, sizeof(JsonFieldData_eventGetFloatArray_Parms), Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetFloatArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_GetInt_Statics
	{
		struct JsonFieldData_eventGetInt_Parms
		{
			FString key;
			bool success;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventGetInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::NewProp_success_SetBit(void* Obj)
	{
		((JsonFieldData_eventGetInt_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::NewProp_success = { UE4CodeGen_Private::EPropertyClass::Bool, "success", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(JsonFieldData_eventGetInt_Parms), &Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventGetInt_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::NewProp_key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "Get Integer Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Tries to get an integer from the field data by key, returns the integer when successful\n\n@param        key                             Key\n@param        success                 Was the integer field found?\n\n@return       The requested integer, always 0 when failed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "GetInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(JsonFieldData_eventGetInt_Parms), Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics
	{
		struct JsonFieldData_eventGetIntArray_Parms
		{
			FString key;
			bool success;
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventGetIntArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::NewProp_success_SetBit(void* Obj)
	{
		((JsonFieldData_eventGetIntArray_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::NewProp_success = { UE4CodeGen_Private::EPropertyClass::Bool, "success", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(JsonFieldData_eventGetIntArray_Parms), &Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventGetIntArray_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::NewProp_key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "Get Integer Array Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Gets an integer array from the post data with the given key\n\n@param        key                             Key\n@param        success                 Was the field found?\n\n@return       The requested array of integers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "GetIntArray", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14420401, sizeof(JsonFieldData_eventGetIntArray_Parms), Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetIntArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics
	{
		struct JsonFieldData_eventGetIsNull_Parms
		{
			FString key;
			bool fieldExists;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_fieldExists_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_fieldExists;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsonFieldData_eventGetIsNull_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(JsonFieldData_eventGetIsNull_Parms), &Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::NewProp_fieldExists_SetBit(void* Obj)
	{
		((JsonFieldData_eventGetIsNull_Parms*)Obj)->fieldExists = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::NewProp_fieldExists = { UE4CodeGen_Private::EPropertyClass::Bool, "fieldExists", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(JsonFieldData_eventGetIsNull_Parms), &Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::NewProp_fieldExists_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventGetIsNull_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::NewProp_key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::NewProp_fieldExists,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "Get Field Is Null" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Checks if a field is null\n\n@param        key                             Key\n@param        fieldExists             Was the field found?\n\n@return       If the field is null. False if it's not or it was not found." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "GetIsNull", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(JsonFieldData_eventGetIsNull_Parms), Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetIsNull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_GetObject_Statics
	{
		struct JsonFieldData_eventGetObject_Parms
		{
			FString key;
			bool success;
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventGetObject_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::NewProp_success_SetBit(void* Obj)
	{
		((JsonFieldData_eventGetObject_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::NewProp_success = { UE4CodeGen_Private::EPropertyClass::Bool, "success", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(JsonFieldData_eventGetObject_Parms), &Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventGetObject_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::NewProp_key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "Get Object Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Gets the post data object from the post data with the given key\n\n@param        key                             Key\n@param        success                 Was the object field found?\n\n@return       The object itself" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "GetObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14420401, sizeof(JsonFieldData_eventGetObject_Parms), Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics
	{
		struct JsonFieldData_eventGetObjectArray_Parms
		{
			FString key;
			bool success;
			TArray<UJsonFieldData*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventGetObjectArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::NewProp_success_SetBit(void* Obj)
	{
		((JsonFieldData_eventGetObjectArray_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::NewProp_success = { UE4CodeGen_Private::EPropertyClass::Bool, "success", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(JsonFieldData_eventGetObjectArray_Parms), &Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventGetObjectArray_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::NewProp_key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "Get Object Array Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Gets an object array from the post data with the given key\n\n@param        key                             Key\n@param        success                 Was the field found?\n\n@return       The requested post data objects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "GetObjectArray", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14420401, sizeof(JsonFieldData_eventGetObjectArray_Parms), Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetObjectArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_GetObjectKeys_Statics
	{
		struct JsonFieldData_eventGetObjectKeys_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJsonFieldData_GetObjectKeys_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventGetObjectKeys_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetObjectKeys_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_GetObjectKeys_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetObjectKeys_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetObjectKeys_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetObjectKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "Get Object Keys" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Gets the keys from the supplied object\n\n@param        key                                             Key\n\n@return       Array of keys" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_GetObjectKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "GetObjectKeys", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(JsonFieldData_eventGetObjectKeys_Parms), Z_Construct_UFunction_UJsonFieldData_GetObjectKeys_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetObjectKeys_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetObjectKeys_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetObjectKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetObjectKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_GetObjectKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics
	{
		struct JsonFieldData_eventGetRequest_Parms
		{
			FString url;
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_url;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventGetRequest_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::NewProp_url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::NewProp_url = { UE4CodeGen_Private::EPropertyClass::Str, "url", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventGetRequest_Parms, url), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::NewProp_url_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::NewProp_url_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::NewProp_url,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "Get JSON Request" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Grabs a page from the internet\n\n@param        url                             The URL to request\n\n@return       The newly created post data that will be filled with the url response." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "GetRequest", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(JsonFieldData_eventGetRequest_Parms), Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_GetString_Statics
	{
		struct JsonFieldData_eventGetString_Parms
		{
			FString key;
			bool success;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventGetString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsonFieldData_GetString_Statics::NewProp_success_SetBit(void* Obj)
	{
		((JsonFieldData_eventGetString_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_GetString_Statics::NewProp_success = { UE4CodeGen_Private::EPropertyClass::Bool, "success", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(JsonFieldData_eventGetString_Parms), &Z_Construct_UFunction_UJsonFieldData_GetString_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetString_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetString_Statics::NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventGetString_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetString_Statics::NewProp_key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetString_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_GetString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetString_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetString_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetString_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "Get String Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Tries to get a string from the field data by key, returns the string when successful\n\n@param        key                             Key\n@param        success                 Was the string field found?\n\n@return       The requested string, empty if failed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "GetString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(JsonFieldData_eventGetString_Parms), Z_Construct_UFunction_UJsonFieldData_GetString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_GetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics
	{
		struct JsonFieldData_eventGetStringArray_Parms
		{
			FString key;
			bool success;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventGetStringArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::NewProp_success_SetBit(void* Obj)
	{
		((JsonFieldData_eventGetStringArray_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::NewProp_success = { UE4CodeGen_Private::EPropertyClass::Bool, "success", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(JsonFieldData_eventGetStringArray_Parms), &Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventGetStringArray_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::NewProp_key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "Get String Array Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Gets a string array from the post data with the given key\n\n@param        key                             Key\n@param        success                 Was the string found?\n\n@return       The requested array of strings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "GetStringArray", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14420401, sizeof(JsonFieldData_eventGetStringArray_Parms), Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetStringArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_HasField_Statics
	{
		struct JsonFieldData_eventHasField_Parms
		{
			FString key;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UJsonFieldData_HasField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsonFieldData_eventHasField_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_HasField_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(JsonFieldData_eventHasField_Parms), &Z_Construct_UFunction_UJsonFieldData_HasField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_HasField_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_HasField_Statics::NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventHasField_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_HasField_Statics::NewProp_key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_HasField_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_HasField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_HasField_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_HasField_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_HasField_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "Check If Field Exists" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Checks if a field exists in the JSON object\n\n@param        key     The field name to check\n\n@return       True if the field exists" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_HasField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "HasField", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(JsonFieldData_eventHasField_Parms), Z_Construct_UFunction_UJsonFieldData_HasField_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_HasField_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_HasField_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_HasField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_HasField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_HasField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_PostRequest_Statics
	{
		struct JsonFieldData_eventPostRequest_Parms
		{
			FString url;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_url;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_PostRequest_Statics::NewProp_url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_PostRequest_Statics::NewProp_url = { UE4CodeGen_Private::EPropertyClass::Str, "url", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventPostRequest_Parms, url), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_PostRequest_Statics::NewProp_url_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_PostRequest_Statics::NewProp_url_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_PostRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_PostRequest_Statics::NewProp_url,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_PostRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "Post JSON Request" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Posts the current request data to the internet\n\n@param        url                             The URL to post to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_PostRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "PostRequest", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(JsonFieldData_eventPostRequest_Parms), Z_Construct_UFunction_UJsonFieldData_PostRequest_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_PostRequest_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_PostRequest_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_PostRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_PostRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_PostRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics
	{
		struct JsonFieldData_eventPostRequestWithFile_Parms
		{
			FString FilePath;
			FString Url;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::NewProp_Url = { UE4CodeGen_Private::EPropertyClass::Str, "Url", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventPostRequestWithFile_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::NewProp_Url_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::NewProp_Url_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::NewProp_FilePath = { UE4CodeGen_Private::EPropertyClass::Str, "FilePath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventPostRequestWithFile_Parms, FilePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::NewProp_Url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::NewProp_FilePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "Post JSON Request and File" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Posts the current request data to the internet, together with a file\n\n@param        FilePath                The absolute path for a file\n@param        Url                             The URL to post to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "PostRequestWithFile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(JsonFieldData_eventPostRequestWithFile_Parms), Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics
	{
		struct JsonFieldData_eventSetBoolArray_Parms
		{
			FString key;
			TArray<bool> data;
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetBoolArray_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::NewProp_data = { UE4CodeGen_Private::EPropertyClass::Array, "data", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetBoolArray_Parms, data), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::NewProp_data_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::NewProp_data_Inner = { UE4CodeGen_Private::EPropertyClass::Bool, "data", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetBoolArray_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::NewProp_key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::NewProp_data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "Add Boolean Array Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Adds the supplied boolean array to the post data, under the given key\n\n@param        key                             Key\n@param        data                    Array\n\n@return       The object itself" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "SetBoolArray", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(JsonFieldData_eventSetBoolArray_Parms), Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetBoolArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics
	{
		struct JsonFieldData_eventSetBoolean_Parms
		{
			FString key;
			bool value;
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetBoolean_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::NewProp_value_SetBit(void* Obj)
	{
		((JsonFieldData_eventSetBoolean_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Bool, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(JsonFieldData_eventSetBoolean_Parms), &Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::NewProp_value_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::NewProp_value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::NewProp_value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetBoolean_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::NewProp_key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "Add Boolean Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Adds the supplied bool to the post data, under the given key\n\n@param        key                             Key\n@param        value                   Object value\n\n@return       The object itself" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "SetBoolean", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(JsonFieldData_eventSetBoolean_Parms), Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetBoolean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics
	{
		struct JsonFieldData_eventSetFloat_Parms
		{
			FString key;
			float value;
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetFloat_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Float, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetFloat_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::NewProp_value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::NewProp_value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetFloat_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::NewProp_key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "Add Float Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Adds the supplied float to the post data, under the given key\n\n@param        key                             Key\n@param        value                   Object value\n\n@return       The object itself" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "SetFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(JsonFieldData_eventSetFloat_Parms), Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics
	{
		struct JsonFieldData_eventSetFloatArray_Parms
		{
			FString key;
			TArray<float> data;
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetFloatArray_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::NewProp_data = { UE4CodeGen_Private::EPropertyClass::Array, "data", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetFloatArray_Parms, data), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::NewProp_data_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::NewProp_data_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "data", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetFloatArray_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::NewProp_key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::NewProp_data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "Add Float Array Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Adds the supplied float array to the post data, under the given key\n\n@param        key                             Key\n@param        data                    Array\n\n@return       The object itself" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "SetFloatArray", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(JsonFieldData_eventSetFloatArray_Parms), Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetFloatArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_SetInt_Statics
	{
		struct JsonFieldData_eventSetInt_Parms
		{
			FString key;
			int32 value;
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetInt_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Int, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetInt_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::NewProp_value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::NewProp_value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetInt_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::NewProp_key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "Add Integer Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Adds the supplied integer to the post data, under the given key\n\n@param        key                             Key\n@param        value                   Object value\n\n@return       The object itself" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "SetInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(JsonFieldData_eventSetInt_Parms), Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics
	{
		struct JsonFieldData_eventSetIntArray_Parms
		{
			FString key;
			TArray<int32> data;
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetIntArray_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::NewProp_data = { UE4CodeGen_Private::EPropertyClass::Array, "data", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetIntArray_Parms, data), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::NewProp_data_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::NewProp_data_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "data", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetIntArray_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::NewProp_key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::NewProp_data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "Add Integer Array Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Adds the supplied integer array to the post data, under the given key\n\n@param        key                             Key\n@param        data                    Array\n\n@return       The object itself" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "SetIntArray", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(JsonFieldData_eventSetIntArray_Parms), Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetIntArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_SetNull_Statics
	{
		struct JsonFieldData_eventSetNull_Parms
		{
			FString key;
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetNull_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetNull_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::NewProp_key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "Add Null Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Adds a null value to the post data, under the given key\n\n@param        key                             Key\n\n@return       The object itself" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "SetNull", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(JsonFieldData_eventSetNull_Parms), Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetNull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics
	{
		struct JsonFieldData_eventSetNullArray_Parms
		{
			FString key;
			int32 length;
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_length_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetNullArray_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::NewProp_length_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::NewProp_length = { UE4CodeGen_Private::EPropertyClass::Int, "length", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetNullArray_Parms, length), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::NewProp_length_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::NewProp_length_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetNullArray_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::NewProp_key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::NewProp_length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "Add Null Array Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Adds null array to the post data, under the given key, with the given number of nulls\n\n@param        key                                             Key\n@param        data                                    Array\n\n@return       The object itself" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "SetNullArray", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(JsonFieldData_eventSetNullArray_Parms), Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetNullArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_SetObject_Statics
	{
		struct JsonFieldData_eventSetObject_Parms
		{
			FString key;
			const UJsonFieldData* objectData;
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_objectData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_objectData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetObject_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::NewProp_objectData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::NewProp_objectData = { UE4CodeGen_Private::EPropertyClass::Object, "objectData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetObject_Parms, objectData), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::NewProp_objectData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::NewProp_objectData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetObject_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::NewProp_key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::NewProp_objectData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "Add Object Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Adds the supplied object to the post data, under the given key\n\n@param        key                             Key\n@param        objectData              Object data\n\n@return       The object itself" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "SetObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(JsonFieldData_eventSetObject_Parms), Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics
	{
		struct JsonFieldData_eventSetObjectArray_Parms
		{
			FString key;
			TArray<UJsonFieldData*> arrayData;
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arrayData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_arrayData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_arrayData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetObjectArray_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::NewProp_arrayData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::NewProp_arrayData = { UE4CodeGen_Private::EPropertyClass::Array, "arrayData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetObjectArray_Parms, arrayData), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::NewProp_arrayData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::NewProp_arrayData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::NewProp_arrayData_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "arrayData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetObjectArray_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::NewProp_key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::NewProp_arrayData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::NewProp_arrayData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "Add Object Array Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Adds the supplied object array to the post data, under the given key\n\n@param        key                             Key\n@param        objectData              Array of object data\n\n@return       The object itself" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "SetObjectArray", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(JsonFieldData_eventSetObjectArray_Parms), Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetObjectArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_SetString_Statics
	{
		struct JsonFieldData_eventSetString_Parms
		{
			FString key;
			FString value;
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_SetString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetString_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetString_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_SetString_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Str, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetString_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetString_Statics::NewProp_value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetString_Statics::NewProp_value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetString_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_SetString_Statics::NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetString_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetString_Statics::NewProp_key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetString_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_SetString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetString_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetString_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetString_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "Add String Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Adds the supplied string to the post data, under the given key\n\n@param        key                             Key\n@param        value                   Object value\n\n@return       The object itself" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_SetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "SetString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(JsonFieldData_eventSetString_Parms), Z_Construct_UFunction_UJsonFieldData_SetString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_SetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics
	{
		struct JsonFieldData_eventSetStringArray_Parms
		{
			FString key;
			TArray<FString> data;
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetStringArray_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::NewProp_data = { UE4CodeGen_Private::EPropertyClass::Array, "data", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetStringArray_Parms, data), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::NewProp_data_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::NewProp_data_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "data", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventSetStringArray_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::NewProp_key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::NewProp_data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "Add String Array Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Adds the supplied string array to the post data, under the given key\n\n@param        key                             Key\n@param        data                    Array\n\n@return       The object itself" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "SetStringArray", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(JsonFieldData_eventSetStringArray_Parms), Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetStringArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_ToString_Statics
	{
		struct JsonFieldData_eventToString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_ToString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonFieldData_eventToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_ToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_ToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_ToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "JSON To String" },
		{ "Keywords", "cast text convert serialize" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Get the JSON object as a string." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, "ToString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(JsonFieldData_eventToString_Parms), Z_Construct_UFunction_UJsonFieldData_ToString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_ToString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_ToString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_ToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_ToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_ToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UJsonFieldData_NoRegister()
	{
		return UJsonFieldData::StaticClass();
	}
	struct Z_Construct_UClass_UJsonFieldData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGetResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGetResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJsonFieldData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_JSONQuery,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJsonFieldData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJsonFieldData_Create, "Create" }, // 2324236725
		{ &Z_Construct_UFunction_UJsonFieldData_FromFile, "FromFile" }, // 560331543
		{ &Z_Construct_UFunction_UJsonFieldData_FromString, "FromString" }, // 2086582152
		{ &Z_Construct_UFunction_UJsonFieldData_GetBool, "GetBool" }, // 898938770
		{ &Z_Construct_UFunction_UJsonFieldData_GetBoolArray, "GetBoolArray" }, // 404049605
		{ &Z_Construct_UFunction_UJsonFieldData_GetFloat, "GetFloat" }, // 1015829312
		{ &Z_Construct_UFunction_UJsonFieldData_GetFloatArray, "GetFloatArray" }, // 2475109705
		{ &Z_Construct_UFunction_UJsonFieldData_GetInt, "GetInt" }, // 2089500394
		{ &Z_Construct_UFunction_UJsonFieldData_GetIntArray, "GetIntArray" }, // 3418470933
		{ &Z_Construct_UFunction_UJsonFieldData_GetIsNull, "GetIsNull" }, // 2862893288
		{ &Z_Construct_UFunction_UJsonFieldData_GetObject, "GetObject" }, // 1712205303
		{ &Z_Construct_UFunction_UJsonFieldData_GetObjectArray, "GetObjectArray" }, // 1946829215
		{ &Z_Construct_UFunction_UJsonFieldData_GetObjectKeys, "GetObjectKeys" }, // 3590720247
		{ &Z_Construct_UFunction_UJsonFieldData_GetRequest, "GetRequest" }, // 1856091937
		{ &Z_Construct_UFunction_UJsonFieldData_GetString, "GetString" }, // 2967433239
		{ &Z_Construct_UFunction_UJsonFieldData_GetStringArray, "GetStringArray" }, // 70661062
		{ &Z_Construct_UFunction_UJsonFieldData_HasField, "HasField" }, // 4201406413
		{ &Z_Construct_UFunction_UJsonFieldData_PostRequest, "PostRequest" }, // 2462662537
		{ &Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile, "PostRequestWithFile" }, // 704230931
		{ &Z_Construct_UFunction_UJsonFieldData_SetBoolArray, "SetBoolArray" }, // 2686181133
		{ &Z_Construct_UFunction_UJsonFieldData_SetBoolean, "SetBoolean" }, // 2265518870
		{ &Z_Construct_UFunction_UJsonFieldData_SetFloat, "SetFloat" }, // 3486863726
		{ &Z_Construct_UFunction_UJsonFieldData_SetFloatArray, "SetFloatArray" }, // 3857855961
		{ &Z_Construct_UFunction_UJsonFieldData_SetInt, "SetInt" }, // 2966871801
		{ &Z_Construct_UFunction_UJsonFieldData_SetIntArray, "SetIntArray" }, // 3075143403
		{ &Z_Construct_UFunction_UJsonFieldData_SetNull, "SetNull" }, // 3062671718
		{ &Z_Construct_UFunction_UJsonFieldData_SetNullArray, "SetNullArray" }, // 2825980885
		{ &Z_Construct_UFunction_UJsonFieldData_SetObject, "SetObject" }, // 3560860732
		{ &Z_Construct_UFunction_UJsonFieldData_SetObjectArray, "SetObjectArray" }, // 3579175186
		{ &Z_Construct_UFunction_UJsonFieldData_SetString, "SetString" }, // 57929918
		{ &Z_Construct_UFunction_UJsonFieldData_SetStringArray, "SetStringArray" }, // 1210610231
		{ &Z_Construct_UFunction_UJsonFieldData_ToString, "ToString" }, // 1318754573
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonFieldData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "JSON" },
		{ "IncludePath", "JsonFieldData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonFieldData_Statics::NewProp_OnGetResult_MetaData[] = {
		{ "Category", "JSON" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Event which triggers after the request returned something. Check bSuccess to know if it worked.\nCheck Status to know what happened on error." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJsonFieldData_Statics::NewProp_OnGetResult = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnGetResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UJsonFieldData, OnGetResult), Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UJsonFieldData_Statics::NewProp_OnGetResult_MetaData, ARRAY_COUNT(Z_Construct_UClass_UJsonFieldData_Statics::NewProp_OnGetResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJsonFieldData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonFieldData_Statics::NewProp_OnGetResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJsonFieldData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJsonFieldData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJsonFieldData_Statics::ClassParams = {
		&UJsonFieldData::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UJsonFieldData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UJsonFieldData_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UJsonFieldData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UJsonFieldData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJsonFieldData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJsonFieldData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJsonFieldData, 1614406259);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJsonFieldData(Z_Construct_UClass_UJsonFieldData, &UJsonFieldData::StaticClass, TEXT("/Script/JSONQuery"), TEXT("UJsonFieldData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJsonFieldData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
