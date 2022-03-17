// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class treegame : ModuleRules
{
	public treegame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
