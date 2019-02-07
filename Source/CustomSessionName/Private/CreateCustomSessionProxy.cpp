// Fill out your copyright notice in the Description page of Project Settings.

#include "CreateCustomSessionProxy.h"
#include "EngineGlobals.h"
#include "Engine/Engine.h"
#include "OnlineSubsystemUtils.h"
#include "CustomSessionManager.h"
#include "GameFramework/PlayerController.h"


UCreateCustomSessionProxy::UCreateCustomSessionProxy(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, CreateCompleteDelegate(FOnCreateSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnCreateCustomCompleted))
	, StartCompleteDelegate(FOnStartSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnStartCustomCompleted))
	, NumPublicConnections(1)
{
}

UCreateCustomSessionProxy* UCreateCustomSessionProxy::CreateCustomSession(UObject* WorldContextObject, class APlayerController* PlayerController, int32 PublicConnections, bool bUseLAN,FName CustomSessionName)
{
	UCreateCustomSessionProxy* Proxy = NewObject<UCreateCustomSessionProxy>();
	Proxy->PlayerControllerWeakPtr = PlayerController;
	Proxy->NumPublicConnections = PublicConnections;
	Proxy->bUseLAN = bUseLAN;
	Proxy->WorldContextObject = WorldContextObject;
	Proxy->ProxyCustomSessionName = CustomSessionName;

	return Proxy;
}

void UCreateCustomSessionProxy::Activate()
{
	FCustomSessionManager Helper(TEXT("CreateCustomSession"), WorldContextObject);
	Helper.GetIDFromPlayerController(PlayerControllerWeakPtr.Get());
	
	if (Helper.IsValid())
	{
		auto Sessions = Helper.OnlineSub->GetSessionInterface();
		if (Sessions.IsValid())
		{
			CreateCompleteDelegateHandle = Sessions->AddOnCreateSessionCompleteDelegate_Handle(CreateCompleteDelegate);

			FOnlineSessionSettings Settings;
			Settings.NumPublicConnections = NumPublicConnections;
			Settings.bShouldAdvertise = true;
			Settings.bAllowJoinInProgress = true;
			Settings.bIsLANMatch = bUseLAN;
			Settings.bUsesPresence = true;
			Settings.bAllowJoinViaPresence = true;
			Settings.Set(TEXT("CustomSessionName"), ProxyCustomSessionName.ToString(), EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);

			Sessions->CreateSession(*Helper.UserID, NAME_GameSession, Settings);
			

			// OnCreateCompleted will get called, nothing more to do now
			return;
		}
		else
		{
			FFrame::KismetExecutionMessage(TEXT("Sessions not supported by Online Subsystem"), ELogVerbosity::Warning);
		}
	}

	// Fail immediately
	OnFailure.Broadcast();

}

void UCreateCustomSessionProxy::OnCreateCustomCompleted(FName SessionName, bool bWasSuccessful)
{

	FCustomSessionManager Helper(TEXT("CreateCustomSessionCallback"), WorldContextObject);
	Helper.GetIDFromPlayerController(PlayerControllerWeakPtr.Get());

	if (Helper.IsValid())
	{
		auto Sessions = Helper.OnlineSub->GetSessionInterface();
		if (Sessions.IsValid())
		{
			Sessions->ClearOnCreateSessionCompleteDelegate_Handle(CreateCompleteDelegateHandle);

			if (bWasSuccessful)
			{
				StartCompleteDelegateHandle = Sessions->AddOnStartSessionCompleteDelegate_Handle(StartCompleteDelegate);
				Sessions->StartSession(NAME_GameSession);

				// OnStartCompleted will get called, nothing more to do now
				return;
			}
		}
	}

	if (!bWasSuccessful)
	{
		OnFailure.Broadcast();
	}

}

void UCreateCustomSessionProxy::OnStartCustomCompleted(FName SessionName, bool bWasSuccessful)
{
	FCustomSessionManager Helper(TEXT("StartCustomSessionCallback"), WorldContextObject);
	Helper.GetIDFromPlayerController(PlayerControllerWeakPtr.Get());

	if (Helper.IsValid())
	{
		auto Sessions = Helper.OnlineSub->GetSessionInterface();
		if (Sessions.IsValid())
		{
			Sessions->ClearOnStartSessionCompleteDelegate_Handle(StartCompleteDelegateHandle);
		}
	}

	if (bWasSuccessful)
	{
		OnSuccess.Broadcast();
	}
	else
	{
		OnFailure.Broadcast();
	}
}
