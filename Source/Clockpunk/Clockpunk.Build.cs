// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Clockpunk : ModuleRules
{
	public Clockpunk(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "AIModule" });
	}
}
