// Copyright 1998-2013 Epic Games, Inc. All Rights Reserved.
#include "JsonFieldData.h"

//#include "Map.h"
#include "Engine/Engine.h"

//////////////////////////////////////////////////////////////////////////
// UJsonFieldData

/**
* Constructor
*/
UJsonFieldData::UJsonFieldData()
{
	Reset();
}

UJsonFieldData* UJsonFieldData::GetRequest(const FString &url)
{
	// Create new page data for the response
	UJsonFieldData* dataObj = Create();

	// Create the HTTP request
	TSharedRef< IHttpRequest > HttpRequest = FHttpModule::Get().CreateRequest();
	HttpRequest->SetVerb("GET");
	HttpRequest->SetURL(CreateURL(url));
	HttpRequest->OnProcessRequestComplete().BindUObject(dataObj, &UJsonFieldData::OnReady);
	
	dataObj->AddToRoot();

	// Execute the request
	HttpRequest->ProcessRequest();

	// Return the page data
	return dataObj;
}

UJsonFieldData* UJsonFieldData::Create()
{
	// Construct the object and return it
	UJsonFieldData* fieldData = NewObject<UJsonFieldData>();
	return fieldData;
}

UJsonFieldData* UJsonFieldData::FromFile(const FString FilePath, EFolder RelativeTo)
{
	FString Result;
	FString StartPath;
	switch (RelativeTo)
	{
	case EFolder::Content: StartPath = FPaths::ProjectContentDir(); break;
	case EFolder::Project:
	default: StartPath = FPaths::ProjectDir(); break;
	}
	FString FullJsonPath = FPaths::ConvertRelativePathToFull(StartPath / FilePath);
	if (!FFileHelper::LoadFileToString(Result, *FullJsonPath))
	{
		UE_LOG(JSONQueryLog, Error, TEXT("Can't load json data from %s"), *FullJsonPath);
		return nullptr;
	}
	UJsonFieldData* JSON(Create());
	JSON->FromString(Result);
	return JSON;
}

FString UJsonFieldData::CreateURL(FString inputURL)
{
	if (!inputURL.StartsWith("http"))
	{
		return "http://" + inputURL;
	}

	return inputURL;
}

void UJsonFieldData::WriteObject(TSharedRef<TJsonWriter<TCHAR>> writer, FString key, FJsonValue* value)
{
	if (value->Type == EJson::Null)
	{
		// Write simple entry, don't a key when it isn't set
		if (key.Len() > 0)
		{
			writer->WriteNull(key);
		}
		else
		{
			writer->WriteNull();
		}
	}
	if (value->Type == EJson::String)
	{
		// Write simple string entry, don't a key when it isn't set
		if (key.Len() > 0)
		{
			writer->WriteValue(key, value->AsString());
		}
		else
		{
			writer->WriteValue(value->AsString());
		}
	}
	if (value->Type == EJson::Boolean)
	{
		// Write simple entry, don't a key when it isn't set
		if (key.Len() > 0)
		{
			writer->WriteValue(key, value->AsBool());
		}
		else
		{
			writer->WriteValue(value->AsBool());
		}
	}
	if (value->Type == EJson::Number)
	{
		// Write simple entry, don't a key when it isn't set
		if (key.Len() > 0)
		{
			writer->WriteValue(key, value->AsNumber());
		}
		else
		{
			writer->WriteValue(value->AsNumber());
		}
	}
	else if (value->Type == EJson::Object)
	{
		// Write object entry
		if (key.Len() > 0)
		{
			writer->WriteObjectStart(key);
		}
		else
		{
			writer->WriteObjectStart();
		}

		// Loop through all the values in the object data
		TSharedPtr<FJsonObject> objectData = value->AsObject();
		for (auto objectValue = objectData->Values.CreateIterator(); objectValue; ++objectValue)
		{
			// Using recursion to write the key and value to the writer
			WriteObject(writer, objectValue.Key(), objectValue.Value().Get());
		}

		writer->WriteObjectEnd();
	}
	else if (value->Type == EJson::Array)
	{
		// Process array entry
		writer->WriteArrayStart(key);
			
		TArray<TSharedPtr<FJsonValue>> objectArray = value->AsArray();
		for (int32 i = 0; i < objectArray.Num(); i++)
		{
			// Use recursion with an empty key to process all the values in the array
			WriteObject(writer, "", objectArray[i].Get());
		}

		writer->WriteArrayEnd();
	}
}

void UJsonFieldData::PostRequest(const FString &url)
{
	FString outStr = ToString();

	// Log the post data for the user (OPTIONAL)
	UE_LOG(LogTemp, Warning, TEXT("Post data: %s"), *outStr);

	// Create the post request with the generated data
	TSharedRef< IHttpRequest > HttpRequest = FHttpModule::Get().CreateRequest();
	HttpRequest->SetVerb("POST");
	HttpRequest->SetHeader("User-Agent", "UnrealEngine4Client/1.0");
	HttpRequest->SetURL(CreateURL(url));
	HttpRequest->SetHeader("Content-Type", "application/json");
	HttpRequest->SetContentAsString(outStr);
	HttpRequest->OnProcessRequestComplete().BindUObject(this, &UJsonFieldData::OnReady);

	AddToRoot();
	// Execute the request
	HttpRequest->ProcessRequest();
}

void UJsonFieldData::PostRequestWithFile(FString FilePath, const FString &Url)
{
	FPaths::NormalizeFilename(FilePath);
	TArray<uint8> RawFileData;
	if (!FFileHelper::LoadFileToArray(RawFileData, *FilePath))
	{
		OnGetResult.Broadcast(false, this, EJSONResult::JSONParsingFailed);
		return;
	}

	// The post content
	static const FString Boundary = "UnrealEngine4FormDataBoundary";
	TArray<uint8> Buffer;

	// Add the JSON as a POST var named 'json'
	FString JSONStr = ToString();
	FString Text = FString("\r\n--") + Boundary + "\r\n"
		+ "Content-Type: text/plain; charset=\"utf-8\"\r\n"
		+ "Content-disposition: form-data; name=\"json\"\r\n\r\n"
		+ JSONStr;

	// add the file
	FString PathPart, Filename, Extension;
	FPaths::Split(FilePath, PathPart, Filename, Extension);
	Filename += FString(".") + Extension;
	Text += FString("\r\n--") + Boundary + "\r\n"
		+ "Content-Type: application/octet-stream\r\n"
		+ "Content-disposition: form-data; name=\"file\"; filename=\"" + Filename + "\"\r\n\r\n";
	FTCHARToUTF8 Converter1(*Text);
	Buffer.Append((uint8*)(ANSICHAR*)Converter1.Get(), Converter1.Length());
	Buffer.Append(RawFileData);

	// end POST variables
	Text = FString("\r\n--") + Boundary + "--\r\n";
	FTCHARToUTF8 Converter2(*Text);
	Buffer.Append((uint8*)(ANSICHAR*)Converter2.Get(), Converter2.Length());

	// Create the post request with the generated data
	TSharedRef< IHttpRequest > HttpRequest = FHttpModule::Get().CreateRequest();
	HttpRequest->SetVerb("POST");
	HttpRequest->SetHeader("User-Agent", "UnrealEngine4Client/1.0");
	HttpRequest->SetHeader("Content-Type", FString("multipart/form-data; boundary=") + Boundary);
	HttpRequest->SetURL(CreateURL(Url));
	HttpRequest->SetContent(Buffer);
	HttpRequest->OnProcessRequestComplete().BindUObject(this, &UJsonFieldData::OnReady);

	// Log the post data for the user (OPTIONAL)
	UE_LOG(LogTemp, Warning, TEXT("Post data: %s"), *JSONStr);

	AddToRoot();
	// Execute the request
	HttpRequest->ProcessRequest();
}

UJsonFieldData* UJsonFieldData::SetString(const FString& key, const FString& value)
{
	Data->SetStringField(*key,*value);
	return this;
}

UJsonFieldData* UJsonFieldData::SetBoolean(const FString& key, const bool value)
{
	Data->SetBoolField(*key, value);
	return this;
}

UJsonFieldData* UJsonFieldData::SetFloat(const FString& key, const float value)
{
	Data->SetNumberField(*key, static_cast<double>(value));
	return this;
}

UJsonFieldData* UJsonFieldData::SetInt(const FString& key, const int32 value)
{
	Data->SetNumberField(*key, static_cast<double>(value));
	return this;
}

UJsonFieldData* UJsonFieldData::SetNull(const FString& key)
{
	Data->SetObjectField(*key, NULL);
	return this;
}

UJsonFieldData* UJsonFieldData::SetObject(const FString& key, const UJsonFieldData* objectData)
{
	Data->SetObjectField(*key, objectData->Data);
	return this;
}

UJsonFieldData* UJsonFieldData::SetObjectArray(const FString& key, const TArray<UJsonFieldData*> objectData)
{
	TArray<TSharedPtr<FJsonValue>> *dataArray = new TArray<TSharedPtr<FJsonValue>>();

	// Loop through the array and create new shared FJsonValueObject instances for every FJsonObject
	for (int32 i = 0; i < objectData.Num(); i++) {
		dataArray->Add(MakeShareable(new FJsonValueObject(objectData[i]->Data)));
	}

	Data->SetArrayField(*key, *dataArray);
	return this;
}

UJsonFieldData* UJsonFieldData::SetStringArray(const FString& key, const TArray<FString> stringData)
{
	TArray<TSharedPtr<FJsonValue>> *dataArray = new TArray<TSharedPtr<FJsonValue>>();

	// Loop through the input array and add new shareable FJsonValueString instances to the data array
	for (int32 i=0; i < stringData.Num(); i++)
	{
		dataArray->Add(MakeShareable(new FJsonValueString(stringData[i])));
	}

	Data->SetArrayField(*key, *dataArray);
	return this;
}

UJsonFieldData* UJsonFieldData::SetBoolArray(const FString& key, const TArray<bool> data)
{
	TArray<TSharedPtr<FJsonValue>> *dataArray = new TArray<TSharedPtr<FJsonValue>>();

	// Loop through the input array and add new shareable FJsonValueString instances to the data array
	for (int32 i = 0; i < data.Num(); i++)
	{
		dataArray->Add(MakeShareable(new FJsonValueBoolean(data[i])));
	}

	Data->SetArrayField(*key, *dataArray);
	return this;
}

UJsonFieldData* UJsonFieldData::SetFloatArray(const FString& key, const TArray<float> data)
{
	TArray<TSharedPtr<FJsonValue>> *dataArray = new TArray<TSharedPtr<FJsonValue>>();

	// Loop through the input array and add new shareable FJsonValueString instances to the data array
	for (int32 i = 0; i < data.Num(); i++)
	{
		dataArray->Add(MakeShareable(new FJsonValueNumber(static_cast<double>(data[i]))));
	}

	Data->SetArrayField(*key, *dataArray);
	return this;
}

UJsonFieldData* UJsonFieldData::SetIntArray(const FString& key, const TArray<int32> data)
{
	TArray<TSharedPtr<FJsonValue>> *dataArray = new TArray<TSharedPtr<FJsonValue>>();

	// Loop through the input array and add new shareable FJsonValueString instances to the data array
	for (int32 i = 0; i < data.Num(); i++)
	{
		dataArray->Add(MakeShareable(new FJsonValueNumber(static_cast<double>(data[i]))));
	}

	Data->SetArrayField(*key, *dataArray);
	return this;
}

UJsonFieldData* UJsonFieldData::SetNullArray(const FString& key, const int32& length)
{
	TArray<TSharedPtr<FJsonValue>> *dataArray = new TArray<TSharedPtr<FJsonValue>>();

	// Loop through the input array and add new shareable FJsonValueString instances to the data array
	for (int32 i = 0; i < length; i++)
	{
		dataArray->Add(MakeShareable(new FJsonValueNull()));
	}

	Data->SetArrayField(*key, *dataArray);
	return this;
}

UJsonFieldData* UJsonFieldData::GetObject(const FString& key, bool& success)
{
	UJsonFieldData* fieldObj = NULL;

	// Try to get the object field from the data
	const TSharedPtr<FJsonObject> *outPtr;
	if (!Data->TryGetObjectField(*key, outPtr))
	{
		// Throw an error and return NULL when the key could not be found
		UE_LOG(JSONQueryLog, Error, TEXT("Entry '%s' not found in the field data!"), *key);
		success = false;
		return NULL;
	}

	// Create a new field data object and assign the data
	fieldObj = UJsonFieldData::Create();
	fieldObj->Data = *outPtr;

	// Return the newly created object
	success = true;
	return fieldObj;
}

TArray<FString> UJsonFieldData::GetStringArray(const FString& key, bool& success)
{
	TArray<FString> stringArray;

	// Try to get the array field from the post data
	const TArray<TSharedPtr<FJsonValue>> *arrayPtr;
	if (Data->TryGetArrayField(*key, arrayPtr))
	{
		// Iterate through the array and use the string value from all the entries
		for (int32 i=0; i < arrayPtr->Num(); i++)
		{
			stringArray.Add((*arrayPtr)[i]->AsString());
		}
		success = true;
	}
	else
	{
		// Throw an error when the entry could not be found in the field data
		UE_LOG(JSONQueryLog, Error, TEXT("Array entry '%s' not found in the field data!"), *key);
		success = false;
	}

	// Return the array, if unsuccessful the array will be empty
	return stringArray;
}

TArray<bool> UJsonFieldData::GetBoolArray(const FString& key, bool& success)
{
	TArray<bool> array;

	// Try to get the array field from the post data
	const TArray<TSharedPtr<FJsonValue>> *arrayPtr;
	if (Data->TryGetArrayField(*key, arrayPtr))
	{
		// Iterate through the array and use the bool value from all the entries
		for (int32 i = 0; i < arrayPtr->Num(); i++)
		{
			array.Add((*arrayPtr)[i]->AsBool());
		}
		success = true;
	}
	else
	{
		// Throw an error when the entry could not be found in the field data
		UE_LOG(JSONQueryLog, Error, TEXT("Array entry '%s' not found in the field data!"), *key);
		success = false;
	}

	// Return the array, if unsuccessful the array will be empty
	return array;
}

TArray<int32> UJsonFieldData::GetIntArray(const FString& key, bool& success)
{
	TArray<int32> array;

	// Try to get the array field from the post data
	const TArray<TSharedPtr<FJsonValue>> *arrayPtr;
	if (Data->TryGetArrayField(*key, arrayPtr))
	{
		// Iterate through the array and use the bool value from all the entries
		for (int32 i = 0; i < arrayPtr->Num(); i++)
		{
			array.Add(static_cast<int32>((*arrayPtr)[i]->AsNumber()));
		}
		success = true;
	}
	else
	{
		// Throw an error when the entry could not be found in the field data
		UE_LOG(JSONQueryLog, Error, TEXT("Array entry '%s' not found in the field data!"), *key);
		success = false;
	}

	// Return the array, if unsuccessful the array will be empty
	return array;
}

TArray<float> UJsonFieldData::GetFloatArray(const FString& key, bool& success)
{
	TArray<float> array;

	// Try to get the array field from the post data
	const TArray<TSharedPtr<FJsonValue>> *arrayPtr;
	if (Data->TryGetArrayField(*key, arrayPtr))
	{
		// Iterate through the array and use the bool value from all the entries
		for (int32 i = 0; i < arrayPtr->Num(); i++)
		{
			array.Add(static_cast<float>((*arrayPtr)[i]->AsNumber()));
		}
		success = true;
	}
	else
	{
		// Throw an error when the entry could not be found in the field data
		UE_LOG(JSONQueryLog, Error, TEXT("Array entry '%s' not found in the field data!"), *key);
		success = false;
	}

	// Return the array, if unsuccessful the array will be empty
	return array;
}

TArray<UJsonFieldData*> UJsonFieldData::GetObjectArray(const FString& key, bool& success)
{
	TArray<UJsonFieldData*> objectArray;

	// Try to fetch and assign the array to the array pointer
	const TArray<TSharedPtr<FJsonValue>> *arrayPtr;
	if (Data->TryGetArrayField(*key, arrayPtr))
	{
		// Iterate through the input array and create new post data objects for every entry and add them to the objectArray
		for (int32 i = 0; i < arrayPtr->Num(); i++)
		{
			UJsonFieldData* pageData = Create(); 
			pageData->Data = (*arrayPtr)[i]->AsObject();
			objectArray.Add(pageData);
		}
		success = true;
	}
	else
	{
		// Throw an error, since the value with the supplied key could not be found
		UE_LOG(JSONQueryLog, Error, TEXT("Array entry '%s' not found in the field data!"), *key);
		success = false;
	}

	// Return the array, will be empty if unsuccessful
	return objectArray;
}

TArray<FString> UJsonFieldData::GetObjectKeys()
{
	TArray<FString> stringArray;

	for (auto currJsonValue = Data->Values.CreateConstIterator(); currJsonValue; ++currJsonValue)
	{
		stringArray.Add((*currJsonValue).Key);
	}

	// Return the array, will be empty if unsuccessful
	return stringArray;
}

FString UJsonFieldData::GetString(const FString& key, bool& success) const
{
	FString outString;

	// If the current post data isn't valid, return an empty string
	if (!Data->TryGetStringField(*key, outString))
	{
		UE_LOG(JSONQueryLog, Error, TEXT("String entry '%s' not found in the field data!"), *key);
		success = false;
		return "";
	}

	success = true;
	return outString;
}

bool UJsonFieldData::GetBool(const FString& key, bool& success) const
{
	bool value;

	// If the current post data isn't valid, return an empty string
	if (!Data->TryGetBoolField(*key, value))
	{
		UE_LOG(JSONQueryLog, Error, TEXT("Boolean entry '%s' not found in the field data!"), *key);
		success = false;
		return false;
	}

	success = true;
	return value;
}

int32 UJsonFieldData::GetInt(const FString& key, bool& success) const
{
	int32 value;

	// If the current post data isn't valid, return an empty string
	if (!Data->TryGetNumberField(*key, value))
	{
		UE_LOG(JSONQueryLog, Error, TEXT("Number entry '%s' not found in the field data!"), *key);
		success = false;
		return 0;
	}

	success = true;
	return value;
}

float UJsonFieldData::GetFloat(const FString& key, bool& success) const
{
	double value;

	// If the current post data isn't valid, return an empty string
	if (!Data->TryGetNumberField(*key, value))
	{
		UE_LOG(JSONQueryLog, Error, TEXT("Number entry '%s' not found in the field data!"), *key);
		success = false;
		return 0.0f;
	}

	success = true;
	return static_cast<float>(value);
}

bool UJsonFieldData::GetIsNull(const FString& key, bool& success) const
{
	// If the current post data isn't valid, return an empty string
	if (!Data->HasField(key))
	{
		UE_LOG(JSONQueryLog, Error, TEXT("Number entry '%s' not found in the field data!"), *key);
		success = false;
		return false;
	}

	success = true;
	return Data->HasTypedField<EJson::Null>(key);
}

void UJsonFieldData::Reset()
{
	// If the post data is valid
	if (Data.IsValid())
	{
		// Clear the current post data
		Data.Reset();
	}

	// Create a new JSON object
	Data = MakeShareable(new FJsonObject());
}

bool UJsonFieldData::FromString(const FString& dataString)
{
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(dataString);

	// Deserialize the JSON data
	bool isDeserialized = FJsonSerializer::Deserialize(JsonReader, Data);

	if (!isDeserialized || !Data.IsValid())
	{
		UE_LOG(JSONQueryLog, Error, TEXT("JSON data is invalid! Input:\n'%s'"), *dataString);
		return false;
	}

	return true;
}

void UJsonFieldData::OnReady(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	RemoveFromRoot();
	if (!bWasSuccessful)
	{
		UE_LOG(JSONQueryLog, Error, TEXT("Response was invalid! Please check the URL."));

		// Broadcast the failed event
		OnGetResult.Broadcast(false, this, EJSONResult::HttpFailed);
		return;
	}

	// Process the string
	if (!FromString(Response->GetContentAsString()))
	{
		OnGetResult.Broadcast(false, this, EJSONResult::JSONParsingFailed);
	}

	UE_LOG(JSONQueryLog, Error, TEXT("Got result: %s", *Response->GetContentAsString()));
	// Broadcast the result event
	OnGetResult.Broadcast(true, this, EJSONResult::Success);
}

FString UJsonFieldData::ToString()
{
	FString outStr;
	TSharedRef<TJsonWriter<TCHAR>> JsonWriter = TJsonWriterFactory<TCHAR>::Create(&outStr);

	// Start writing the response
	WriteObject(JsonWriter, "", new FJsonValueObject(Data));
	JsonWriter->Close();

	return outStr;
}

bool UJsonFieldData::HasField(const FString& key)
{
	return Data->HasField(key);
}