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

#pragma once

#include "JSONQueryModule.h"
#include "CoreMinimal.h"
#include "Http.h"
#include "Json.h"
#include "JsonFieldData.generated.h"

/**
* The possible status of a JSON POST/GET call.
*/
UENUM(BlueprintType, Category = "JSON")
enum class EJSONResult : uint8
{
	Success = 0,
	HttpFailed,
	JSONParsingFailed
};

// Generate a delegate for the OnGetResult event
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnGetResult, const bool, bSuccess, class UJsonFieldData*, JSON, const EJSONResult, Status);

UCLASS(BlueprintType, Blueprintable, Category = "JSON")
class UJsonFieldData : public UObject
{
	GENERATED_BODY()

public:
	/* The actual field data */
	TSharedPtr<FJsonObject> Data;

	/**
	* Constructor
	*/
	UJsonFieldData();

	/**
	* Create a new instance of the UJsonFieldData class, for use in Blueprint graphs.
	*
	* @return	A pointer to the newly created post data
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Create JSON", Keywords = "new"), Category = "JSON")
	static UJsonFieldData* Create();

	/**
	* Checks if a field exists in the JSON object
	*
	* @param	key	The field name to check
	*
	* @return	True if the field exists
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Check If Field Exists"), Category = "JSON")
		bool HasField(const FString& key);

	/**
	* Gets the keys from the supplied object
	*
	* @param	key						Key
	*
	* @return	Array of keys
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Object Keys"), Category = "JSON")
	TArray<FString> GetObjectKeys();

	/**
	* Grabs a page from the internet
	*
	* @param	url				The URL to request
	*
	* @return	The newly created post data that will be filled with the url response.
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get JSON Request"), Category = "JSON")
		static UJsonFieldData* GetRequest(const FString& url);

	/**
	* Event which triggers after the request returned something. Check bSuccess to know if it worked.
	* Check Status to know what happened on error.
	*/
	UPROPERTY(BlueprintAssignable, Category = "JSON")
		FOnGetResult OnGetResult;

	/**
	* Posts the current request data to the internet
	*
	* @param	url				The URL to post to
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Post JSON Request"), Category = "JSON")
	void PostRequest(const FString& url);

	/**
	* Sets the fields from the supplied JSON string
	*
	* @param	dataString The JSON string
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "From String"), Category = "JSON")
		bool FromString(const FString& dataString);

	/**
	* Get the JSON object as a string.
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "JSON To String", CompactNodeTitle = "->", Keywords = "cast text convert serialize"), Category = "JSON")
		FString ToString();

	//** FROM/POST FILE **//

	/**
	* Creates new data from the
	*
	* @param	FilePath	Text Json File in game content folder
	*
	* @return	JsonFieldData Object
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "From File"), Category = "JSON")
		bool FromFile(const FString& FilePath);

	/**
	* Posts the current request data to the internet, together with a file
	*
	* @param	FilePath		The absolute path for a file
	* @param	Url				The URL to post to
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Post JSON Request and File"), Category = "JSON")
		void PostRequestWithFile(FString FilePath, const FString& Url);

	//** GETTER/SETTERS **//

	/**
	* Gets the post data object from the post data with the given key
	*
	* @param	key				Key
	* @param	success			Was the object field found?
	*
	* @return	The object itself
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Object Field"), Category = "JSON")
		UJsonFieldData* GetObject(const FString& key, bool& success);

	/**
	* Adds the supplied object to the post data, under the given key
	*
	* @param	key				Key
	* @param	objectData		Object data
	*
	* @return	The object itself
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Object Field"), Category = "JSON")
		UJsonFieldData* SetObject(const FString& key, const UJsonFieldData* objectData);

	/**
	* Gets an object array from the post data with the given key
	*
	* @param	key				Key
	* @param	success			Was the field found?
	*
	* @return	The requested post data objects
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Object Array Field"), Category = "JSON")
		TArray<UJsonFieldData*> GetObjectArray(const FString& key, bool& success);

	/**
	* Adds the supplied object array to the post data, under the given key
	*
	* @param	key				Key
	* @param	objectData		Array of object data
	*
	* @return	The object itself
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Object Array Field"), Category = "JSON")
		UJsonFieldData* SetObjectArray(const FString& key, const TArray<UJsonFieldData*> arrayData);

	//** FSTRING **//

	/**
	* Tries to get a string from the field data by key, returns the string when successful
	*
	* @param	key				Key
	* @param	success			Was the string field found?
	*
	* @return	The requested string, empty if failed
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get String Field"), Category = "JSON")
		FString GetString(const FString& key, bool& success) const;

	/**
	* Adds the supplied string to the post data, under the given key
	*
	* @param	key				Key
	* @param	value			Object value
	*
	* @return	The object itself
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add String Field"), Category = "JSON")
		UJsonFieldData* SetString(const FString& key, const FString& value);

	/**
	* Gets a string array from the post data with the given key
	*
	* @param	key				Key
	* @param	success			Was the string found?
	*
	* @return	The requested array of strings
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get String Array Field"), Category = "JSON")
		TArray<FString> GetStringArray(const FString& key, bool& success);

	/**
	* Adds the supplied string array to the post data, under the given key
	*
	* @param	key				Key
	* @param	data			Array
	*
	* @return	The object itself
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add String Array Field"), Category = "JSON")
		UJsonFieldData* SetStringArray(const FString& key, const TArray<FString> data);

	//** BOOL **//

	/**
	* Tries to get a boolean from the field data by key, returns the boolean when successful
	*
	* @param	key				Key
	* @param	success			Was the boolean field found?
	*
	* @return	The requested boolean, always false when failed
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Boolean Field"), Category = "JSON")
		bool GetBool(const FString& key, bool& success) const;

	/**
	* Adds the supplied bool to the post data, under the given key
	*
	* @param	key				Key
	* @param	value			Object value
	*
	* @return	The object itself
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Boolean Field"), Category = "JSON")
		UJsonFieldData* SetBoolean(const FString& key, const bool value);
	
	/**
	* Gets a boolean array from the post data with the given key
	*
	* @param	key				Key
	* @param	success			Was the field found?
	*
	* @return	The requested array of booleans
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Boolean Array Field"), Category = "JSON")
		TArray<bool> GetBoolArray(const FString& key, bool& success);

	/**
	* Adds the supplied boolean array to the post data, under the given key
	*
	* @param	key				Key
	* @param	data			Array
	*
	* @return	The object itself
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Boolean Array Field"), Category = "JSON")
		UJsonFieldData* SetBoolArray(const FString& key, const TArray<bool> data);

	//** FLOAT **//

	/**
	* Tries to get a float from the field data by key, returns the float when successful
	*
	* @param	key				Key
	* @param	success			Was the float field found?
	*
	* @return	The requested float, always 0.0 when failed
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Float Field"), Category = "JSON")
		float GetFloat(const FString& key, bool& success) const;

	/**
	* Adds the supplied float to the post data, under the given key
	*
	* @param	key				Key
	* @param	value			Object value
	*
	* @return	The object itself
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Float Field"), Category = "JSON")
		UJsonFieldData* SetFloat(const FString& key, const float value);

	/**
	* Gets a float array from the post data with the given key
	*
	* @param	key				Key
	* @param	success			Was the field found?
	*
	* @return	The requested array of floats
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Float Array Field"), Category = "JSON")
		TArray<float> GetFloatArray(const FString& key, bool& success);

	/**
	* Adds the supplied float array to the post data, under the given key
	*
	* @param	key				Key
	* @param	data			Array
	*
	* @return	The object itself
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Float Array Field"), Category = "JSON")
		UJsonFieldData* SetFloatArray(const FString& key, const TArray<float> data);

	//** INT32 **//

	/**
	* Tries to get an integer from the field data by key, returns the integer when successful
	*
	* @param	key				Key
	* @param	success			Was the integer field found?
	*
	* @return	The requested integer, always 0 when failed
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Integer Field"), Category = "JSON")
		int32 GetInt(const FString& key, bool& success) const;

	/**
	* Adds the supplied integer to the post data, under the given key
	*
	* @param	key				Key
	* @param	value			Object value
	*
	* @return	The object itself
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Integer Field"), Category = "JSON")
		UJsonFieldData* SetInt(const FString& key, const int32 value);

	/**
	* Gets an integer array from the post data with the given key
	*
	* @param	key				Key
	* @param	success			Was the field found?
	*
	* @return	The requested array of integers
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Integer Array Field"), Category = "JSON")
		TArray<int32> GetIntArray(const FString& key, bool& success);

	/**
	* Adds the supplied integer array to the post data, under the given key
	*
	* @param	key				Key
	* @param	data			Array
	*
	* @return	The object itself
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Integer Array Field"), Category = "JSON")
		UJsonFieldData* SetIntArray(const FString& key, const TArray<int32> data);

	//** NULL **//

	/**
	* Checks if a field is null
	*
	* @param	key				Key
	* @param	fieldExists		Was the field found?
	*
	* @return	If the field is null. False if it's not or it was not found.
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Field Is Null"), Category = "JSON")
		bool GetIsNull(const FString& key, bool& fieldExists) const;

	/**
	* Adds a null value to the post data, under the given key
	*
	* @param	key				Key
	*
	* @return	The object itself
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Null Field"), Category = "JSON")
		UJsonFieldData* SetNull(const FString& key);

	/**
	* Adds null array to the post data, under the given key, with the given number of nulls
	*
	* @param	key						Key
	* @param	data					Array
	*
	* @return	The object itself
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Null Array Field"), Category = "JSON")
		UJsonFieldData* SetNullArray(const FString& key, const int32& length);

private:
	/**
	* Resets the current page data
	*/
	void Reset();

	/**
	* Prefixes the input URL with http:// if necessary
	*
	* @param	inputURL		The input URL
	*
	* @return	The output URL
	*/
	static FString CreateURL(FString inputURL);

	/**
	* This function will write the supplied key and value to the JsonWriter
	*
	* @param	writer			The JsonWriter to use
	* @param	key				Object key
	* @param	value			Object value
	*/
	void WriteObject(TSharedRef<TJsonWriter<TCHAR>> writer, FString key, FJsonValue* value);

	/**
	* Callback for IHttpRequest::OnProcessRequestComplete()
	*
	* @param	Request					HTTP request pointer
	* @param	Response				Response pointer
	* @param	bWasSuccessful			Whether the request was successful or not
	*/
	void OnReady(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
};