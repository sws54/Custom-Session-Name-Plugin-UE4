#pragma once

#include "CoreMinimal.h"
#include "UObject/CoreOnline.h"

class APlayerController;
class IOnlineSubsystem;

struct FCustomSessionManager
{
public:
	FCustomSessionManager(const TCHAR* CallFunctionName, UObject* WorldContextObject, FName SystemName = NAME_None);

	void GetIDFromPlayerController(APlayerController* PlayerController);

	bool IsValid() const
	{
		return UserID.IsValid() && (OnlineSub != nullptr);
	}

public:
	TSharedPtr<const FUniqueNetId> UserID;
	IOnlineSubsystem* const OnlineSub;
	const TCHAR* DebugFunctionName;
};