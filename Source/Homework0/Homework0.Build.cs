// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Homework0 : ModuleRules
{
	public Homework0(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
