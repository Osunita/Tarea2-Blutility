// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Tarea2_Blutility : ModuleRules
{
	public Tarea2_Blutility(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
