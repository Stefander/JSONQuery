/*	JSON Query Plugin
	Copyright(C) 2015-2018 Stefan 'Stefander' Wijnker
	Special thanks: RVillani, Zakkar, Kheka, conneich, Patrik2991, Quantum & johnbo (Unreal forums)

	This program is free software : you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.If not, see <http://www.gnu.org/licenses/>.
*/

#include "JsonFieldData.h"

//#include "Map.h"
#include "Engine/Engine.h"

//////////////////////////////////////////////////////////////////////////
// UJsonFieldData

/**
* Constructor
*/
UJsonFieldData::UJsonFieldData() {
	Reset();
}

UJsonFieldData* UJsonFieldData::Create() {
	// Construct the object and return it
	return NewObject<UJsonFieldData>();
}

bool UJsonFieldData::HasField(const FString& key) {
	return Data->HasField(key);
}

TArray<FString> UJsonFieldData::GetObjectKeys() {
	TArray<FString> stringArray;
	for (TMap<FString, TSharedPtr<FJsonValue>>::TConstIterator currJsonValue = Data->Values.CreateConstIterator(); currJsonValue; ++currJsonValue) {
		stringArray.Add((*currJsonValue).Key);
	}

	return stringArray;
}

UJsonFieldData* UJsonFieldData::GetRequest(const FString &url) {
	// Create new page data for the response
	UJsonFieldData* dataObj = Create();

	// Create the HTTP request
	TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
	HttpRequest->SetVerb("GET");
	HttpRequest->SetURL(CreateURL(url));
	HttpRequest->OnProcessRequestComplete().BindUObject(dataObj, &UJsonFieldData::OnReady);

	dataObj->AddToRoot();

	HttpRequest->ProcessRequest();

	return dataObj;
}

void UJsonFieldData::PostRequest(const FString &url) {
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

bool UJsonFieldData::FromString(const FString& dataString) {
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(dataString);

	// Deserialize the JSON data
	bool isDeserialized = FJsonSerializer::Deserialize(JsonReader, Data);

	if (!isDeserialized || !Data.IsValid()) {
		UE_LOG(JSONQueryLog, Error, TEXT("JSON data is invalid! Input:\n'%s'!"), *dataString);
		return false;
	}

	return true;
}

FString UJsonFieldData::ToString() {
	FString outStr;
	TSharedRef<TJsonWriter<TCHAR>> JsonWriter = TJsonWriterFactory<TCHAR>::Create(&outStr);

	// Start writing the response
	WriteObject(JsonWriter, "", new FJsonValueObject(Data));
	JsonWriter->Close();

	return outStr;
}

//** FROM/POST FILE **//

bool UJsonFieldData::FromFile(const FString& FilePath) {
	FString Result;
	FString FullJsonPath = FPaths::ConvertRelativePathToFull(FPaths::ProjectContentDir() / FilePath);
	if (!FFileHelper::LoadFileToString(Result, *FullJsonPath)) {
		UE_LOG(JSONQueryLog, Error, TEXT("Can't load JSON data from '%s'!"), *FilePath);
	}

	return FromString(Result);
}

void UJsonFieldData::PostRequestWithFile(FString FilePath, const FString &Url) {
	FPaths::NormalizeFilename(FilePath);
	TArray<uint8> RawFileData;
	if (!FFileHelper::LoadFileToArray(RawFileData, *FilePath)) {
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
	//HttpRequest->ProcessRequest();
}

//** GETTER/SETTERS **//

UJsonFieldData* UJsonFieldData::GetObject(const FString& key, bool& success) {
	UJsonFieldData* fieldObj = NULL;
	const TSharedPtr<FJsonObject> *outPtr;
	if (!Data->TryGetObjectField(*key, outPtr)) {
		UE_LOG(JSONQueryLog, Error, TEXT("Entry '%s' not found in the field data!"), *key);
		success = false;
		return NULL;
	}

	fieldObj = UJsonFieldData::Create();
	fieldObj->Data = *outPtr;
	success = true;
	return fieldObj;
}

UJsonFieldData* UJsonFieldData::SetObject(const FString& key, const UJsonFieldData* objectData) {
	Data->SetObjectField(*key, objectData->Data);
	return this;
}

TArray<UJsonFieldData*> UJsonFieldData::GetObjectArray(const FString& key, bool& success) {
	TArray<UJsonFieldData*> objectArray;
	const TArray<TSharedPtr<FJsonValue>>* valueArray;
	success = Data->TryGetArrayField(*key, valueArray);
	if (success) {
		for (int32 i = 0; i < valueArray->Num(); i++) {
			UJsonFieldData* pageData = Create();
			pageData->Data = (*valueArray)[i]->AsObject();
			objectArray.Add(pageData);
		}
	}

	return objectArray;
}

UJsonFieldData* UJsonFieldData::SetObjectArray(const FString& key, const TArray<UJsonFieldData*> objectData) {
	TArray<TSharedPtr<FJsonValue>> *dataArray = new TArray<TSharedPtr<FJsonValue>>();
	for (int32 i = 0; i < objectData.Num(); i++) {
		dataArray->Add(MakeShareable(new FJsonValueObject(objectData[i]->Data)));
	}

	Data->SetArrayField(*key, *dataArray);
	return this;
}

//** FSTRING **//
FString UJsonFieldData::GetString(const FString& key, bool& success) const {
	FString outString = "";
	success = Data->TryGetStringField(*key, outString);
	if (!success) {
		UE_LOG(JSONQueryLog, Error, TEXT("String entry '%s' not found in the field data!"), *key);
	}

	return outString;
}

UJsonFieldData* UJsonFieldData::SetString(const FString& key, const FString& value) {
	Data->SetStringField(*key, *value);
	return this;
}

TArray<FString> UJsonFieldData::GetStringArray(const FString& key, bool& success) {
	TArray<FString> stringArray;
	const TArray<TSharedPtr<FJsonValue>>* valueArray;
	success = Data->TryGetArrayField(key, valueArray);
	if (success) {
		for (int32 i = 0; i < valueArray->Num(); i++) {
			UJsonFieldData* pageData = Create();
			stringArray.Add((*valueArray)[i]->AsString());
		}
	}

	return stringArray;
}

UJsonFieldData* UJsonFieldData::SetStringArray(const FString& key, const TArray<FString> stringData) {
	TArray<TSharedPtr<FJsonValue>> *dataArray = new TArray<TSharedPtr<FJsonValue>>();
	for (int32 i = 0; i < stringData.Num(); i++) {
		dataArray->Add(MakeShareable(new FJsonValueString(stringData[i])));
	}

	Data->SetArrayField(*key, *dataArray);
	return this;
}

//** BOOL **//
bool UJsonFieldData::GetBool(const FString& key, bool& success) const {
	bool value = false;
	success = Data->TryGetBoolField(*key, value);
	if (!success) {
		UE_LOG(JSONQueryLog, Error, TEXT("Boolean entry '%s' not found in the field data!"), *key);
	}

	return value;
}

UJsonFieldData* UJsonFieldData::SetBoolean(const FString& key, const bool value) {
	Data->SetBoolField(*key, value);
	return this;
}

TArray<bool> UJsonFieldData::GetBoolArray(const FString& key, bool& success) {
	TArray<bool> boolArray;
	const TArray<TSharedPtr<FJsonValue>>* valueArray;
	success = Data->TryGetArrayField(*key, valueArray);
	if (success) {
		for (int32 i = 0; i < valueArray->Num(); i++) {
			UJsonFieldData* pageData = Create();
			boolArray.Add((*valueArray)[i]->AsBool());
		}
	}

	return boolArray;
}

UJsonFieldData* UJsonFieldData::SetBoolArray(const FString& key, const TArray<bool> data) {
	TArray<TSharedPtr<FJsonValue>> *dataArray = new TArray<TSharedPtr<FJsonValue>>();
	for (int32 i = 0; i < data.Num(); i++) {
		dataArray->Add(MakeShareable(new FJsonValueBoolean(data[i])));
	}

	Data->SetArrayField(*key, *dataArray);
	return this;
}

//** FLOAT **//
float UJsonFieldData::GetFloat(const FString& key, bool& success) const {
	double value = 0.0f;
	success = Data->TryGetNumberField(*key, value);
	if (!success) {
		UE_LOG(JSONQueryLog, Error, TEXT("Number entry '%s' not found in the field data!"), *key);
	}

	return static_cast<float>(value);
}

UJsonFieldData* UJsonFieldData::SetFloat(const FString& key, const float value) {
	Data->SetNumberField(*key, static_cast<double>(value));
	return this;
}

TArray<float> UJsonFieldData::GetFloatArray(const FString& key, bool& success) {
	TArray<float> floatArray;
	const TArray<TSharedPtr<FJsonValue>>* valueArray;
	success = Data->TryGetArrayField(*key, valueArray);
	if (success) {
		for (int32 i = 0; i < valueArray->Num(); i++) {
			UJsonFieldData* pageData = Create();
			floatArray.Add(static_cast<float>((*valueArray)[i]->AsNumber()));
		}
	}

	return floatArray;
}

UJsonFieldData* UJsonFieldData::SetFloatArray(const FString& key, const TArray<float> data) {
	TArray<TSharedPtr<FJsonValue>> *dataArray = new TArray<TSharedPtr<FJsonValue>>();
	for (int32 i = 0; i < data.Num(); i++) {
		dataArray->Add(MakeShareable(new FJsonValueNumber(static_cast<double>(data[i]))));
	}

	Data->SetArrayField(*key, *dataArray);
	return this;
}

//** INT32 **//
int32 UJsonFieldData::GetInt(const FString& key, bool& success) const {
	int32 value = 0;
	success = Data->TryGetNumberField(*key, value);
	if (!success) {
		UE_LOG(JSONQueryLog, Error, TEXT("Number entry '%s' not found in the field data!"), *key);
	}

	return value;
}

UJsonFieldData* UJsonFieldData::SetInt(const FString& key, const int32 value) {
	Data->SetNumberField(*key, static_cast<double>(value));
	return this;
}

TArray<int32> UJsonFieldData::GetIntArray(const FString& key, bool& success) {
	TArray<int32> intArray;
	const TArray<TSharedPtr<FJsonValue>>* valueArray;
	success = Data->TryGetArrayField(*key, valueArray);
	if (success) {
		for (int32 i = 0; i < valueArray->Num(); i++) {
			UJsonFieldData* pageData = Create();
			intArray.Add(static_cast<int32>((*valueArray)[i]->AsNumber()));
		}
	}

	return intArray;
}

UJsonFieldData* UJsonFieldData::SetIntArray(const FString& key, const TArray<int32> data) {
	TArray<TSharedPtr<FJsonValue>> *dataArray = new TArray<TSharedPtr<FJsonValue>>();
	for (int32 i = 0; i < data.Num(); i++) {
		dataArray->Add(MakeShareable(new FJsonValueNumber(static_cast<double>(data[i]))));
	}

	Data->SetArrayField(*key, *dataArray);
	return this;
}

//** NULL **//
UJsonFieldData* UJsonFieldData::SetNull(const FString& key) {
	Data->SetObjectField(*key, NULL);
	return this;
}

bool UJsonFieldData::GetIsNull(const FString& key, bool& success) const {
	// If the current post data isn't valid, return an empty string
	success = Data->HasField(key);
	if (!success) {
		UE_LOG(JSONQueryLog, Error, TEXT("Number entry '%s' not found in the field data!"), *key);
	}

	return Data->HasTypedField<EJson::Null>(key);
}

UJsonFieldData* UJsonFieldData::SetNullArray(const FString& key, const int32& length) {
	TArray<TSharedPtr<FJsonValue>> *dataArray = new TArray<TSharedPtr<FJsonValue>>();
	for (int32 i = 0; i < length; i++) {
		dataArray->Add(MakeShareable(new FJsonValueNull()));
	}

	Data->SetArrayField(*key, *dataArray);
	return this;
}

//** PRIVATE **//
void UJsonFieldData::Reset() {
	// If the post data is valid
	if (Data.IsValid()) {
		// Clear the current post data
		Data.Reset();
	}

	// Create a new JSON object
	Data = MakeShareable(new FJsonObject());
}

FString UJsonFieldData::CreateURL(FString inputURL) {
	if (!inputURL.StartsWith("http")) {
		return "http://" + inputURL;
	}

	return inputURL;
}

void UJsonFieldData::WriteObject(TSharedRef<TJsonWriter<TCHAR>> writer, FString key, FJsonValue* value) {
	bool hasKey = key.Len() > 0;
	TSharedPtr<FJsonObject> objectData;
	TArray<TSharedPtr<FJsonValue>> objectArray;

	switch (value->Type) {
		case EJson::Object:
			if (hasKey) {
				writer->WriteObjectStart(key);
			} else {
				writer->WriteObjectStart();
			}

			objectData = value->AsObject();
			for (TMap<FString, TSharedPtr<FJsonValue>>::TIterator objectValue = objectData->Values.CreateIterator(); objectValue; ++objectValue) {
				WriteObject(writer, objectValue.Key(), objectValue.Value().Get());
			}

			writer->WriteObjectEnd();
			break;
		case EJson::String:
			if (hasKey) {
				writer->WriteValue(key, value->AsString());
			} else {
				writer->WriteValue(value->AsString());
			}
			break;
		case EJson::Boolean:
			if (hasKey) {
				writer->WriteValue(key, value->AsBool());
			} else {
				writer->WriteValue(value->AsBool());
			}
			break;
		case EJson::Number:
			if (hasKey) {
				writer->WriteValue(key, value->AsNumber());
			} else {
				writer->WriteValue(value->AsNumber());
			}
			break;
		case EJson::Array:
			if (hasKey) {
				writer->WriteArrayStart(key);
			} else {
				writer->WriteArrayStart();
			}

			objectArray = value->AsArray();
			for (int32 i = 0; i < objectArray.Num(); i++) {
				WriteObject(writer, "", objectArray[i].Get());
			}

			writer->WriteArrayEnd();
			break;
		case EJson::Null:
			if (hasKey) {
				writer->WriteNull(key);
			} else {
				writer->WriteNull();
			}
			break;
		default:
			break;
	}
}

void UJsonFieldData::OnReady(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful) {
	RemoveFromRoot();
	if (!bWasSuccessful) {
		UE_LOG(JSONQueryLog, Error, TEXT("Response was invalid! Please check the URL. Error: %i"), Response->GetResponseCode());
		
		// Broadcast the failed event
		OnGetResult.Broadcast(false, this, EJSONResult::HttpFailed);
		return;
	}

	// Process the string
	if (!FromString(Response->GetContentAsString())) {
		OnGetResult.Broadcast(false, this, EJSONResult::JSONParsingFailed);
	}

	// Broadcast the result event
	OnGetResult.Broadcast(true, this, EJSONResult::Success);
}