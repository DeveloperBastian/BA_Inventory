// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BA_Inventory : ModuleRules
{
	public BA_Inventory(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
