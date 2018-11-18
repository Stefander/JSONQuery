#include "JSONQueryModule.h"

IMPLEMENT_MODULE(JSONQueryModule, JSONQuery);

#define LOCTEXT_NAMESPACE "JSONQuery"

JSONQueryModule::JSONQueryModule()
{
}

void JSONQueryModule::StartupModule()
{
	// Startup LOG MSG
	UE_LOG(JSONQueryLog, Warning, TEXT("JSONQuery: Log Started"));
}

void JSONQueryModule::ShutdownModule()
{
	// Shutdown LOG MSG
	UE_LOG(JSONQueryLog, Warning, TEXT("JSONQuery: Log Ended"));
}