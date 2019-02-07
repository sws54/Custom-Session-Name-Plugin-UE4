// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "FindSessionsCallbackProxy.h"
#include "GetCustomSessionNameNode.generated.h"


UCLASS()
class UGetCustomSessionNameNode: public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintPure , Category = "Online|Custom Session")
	static FName GetCustomSessionName(FBlueprintSessionResult SearchRes);
};