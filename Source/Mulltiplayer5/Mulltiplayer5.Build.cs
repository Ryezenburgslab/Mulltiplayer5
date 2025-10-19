// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Mulltiplayer5 : ModuleRules
{
	public Mulltiplayer5(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
