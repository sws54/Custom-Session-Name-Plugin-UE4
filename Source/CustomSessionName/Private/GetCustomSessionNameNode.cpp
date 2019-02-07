// Fill out your copyright notice in the Description page of Project Settings.


#include "GetCustomSessionNameNode.h"

UGetCustomSessionNameNode::UGetCustomSessionNameNode(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer){}


FName UGetCustomSessionNameNode::GetCustomSessionName(FBlueprintSessionResult SearchResult)
{
	FString Name;
	(*SearchResult.OnlineResult.Session.SessionSettings.Settings.Find("CustomSessionName")).Data.GetValue(Name);
	
	if(Name.IsEmpty())
		return FName(TEXT("Custom Session"));
	
	return FName(*Name);
}
