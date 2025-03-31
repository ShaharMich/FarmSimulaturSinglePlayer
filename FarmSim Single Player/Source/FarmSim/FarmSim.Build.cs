// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FarmSim : ModuleRules
{
	public FarmSim(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "AIModule", "UMG" });
	}
}
