
#include "CustomSessionManager.h"
#include "OnlineSessionInterface.h"
#include "CoreOnline.h"

FCustomSessionManager::FCustomSessionManager(const TCHAR* CallFunctionName, UObject* WorldContextObject, FName SystemName /*= NAME_None*/)
	: OnlineSub(Online::GetSubsystem(GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull), SystemName))
	, DebugFunctionName(CallFunctionName)
{
	if (OnlineSub == nullptr)
	{
		FFrame::KismetExecutionMessage(*FString::Printf(TEXT("%s - Invalid or uninitialized OnlineSubsystem"), CallFunctionName), ELogVerbosity::Warning);
	}
}

void FCustomSessionManager::GetIDFromPlayerController(APlayerController* PlayerController)
{
	UserID.Reset();

	if (APlayerState* PlayerState = (PlayerController != NULL) ? PlayerController->PlayerState : NULL)
	{
		UserID = PlayerState->UniqueId.GetUniqueNetId();
		if (!UserID.IsValid())
		{
			FFrame::KismetExecutionMessage(*FString::Printf(TEXT("%s - Cannot map local player to unique net ID"), DebugFunctionName), ELogVerbosity::Warning);
		}
	}
	else
	{
		FFrame::KismetExecutionMessage(*FString::Printf(TEXT("%s - Invalid player state"), DebugFunctionName), ELogVerbosity::Warning);
	}
}

