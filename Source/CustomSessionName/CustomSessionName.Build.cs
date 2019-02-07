// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CustomSessionName : ModuleRules
{
	public CustomSessionName(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
     
		PublicDependencyModuleNames.AddRange(
			new string[]
			{"Core","OnlineSubsystem"});
			
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{"CoreUObject","Engine","OnlineSubsystem","OnlineSubsystemUtils"});

	}
}
