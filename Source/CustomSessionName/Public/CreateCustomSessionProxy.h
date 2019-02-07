// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "CreateCustomSessionProxy.generated.h"

class APlayerController;

UCLASS(MinimalAPI)
class UCreateCustomSessionProxy : public UOnlineBlueprintCallProxyBase
{
	GENERATED_UCLASS_BODY()


	UPROPERTY(BlueprintAssignable)
	FEmptyOnlineDelegate OnSuccess;


	UPROPERTY(BlueprintAssignable)
	FEmptyOnlineDelegate OnFailure;


	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "Online|Custom Session")
	static UCreateCustomSessionProxy* CreateCustomSession(UObject* WorldContextObject, class APlayerController* PlayerController, int32 PublicConnections, bool bUseLAN,FName CustomSessionName);

	virtual void Activate() override;

private:

	void OnCreateCustomCompleted(FName SessionName, bool bWasSuccessful);
	void OnStartCustomCompleted(FName SessionName, bool bWasSuccessful);

	FOnCreateSessionCompleteDelegate CreateCompleteDelegate;
	FOnStartSessionCompleteDelegate StartCompleteDelegate;

	FDelegateHandle CreateCompleteDelegateHandle;
	FDelegateHandle StartCompleteDelegateHandle;

	TWeakObjectPtr<APlayerController> PlayerControllerWeakPtr;

	int NumPublicConnections;

	bool bUseLAN;

	FName ProxyCustomSessionName;

	UObject* WorldContextObject;
	
};
