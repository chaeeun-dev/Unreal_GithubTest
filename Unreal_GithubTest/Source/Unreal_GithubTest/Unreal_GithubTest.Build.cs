// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Unreal_GithubTest : ModuleRules
{
	public Unreal_GithubTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"Unreal_GithubTest",
			"Unreal_GithubTest/Variant_Platforming",
			"Unreal_GithubTest/Variant_Platforming/Animation",
			"Unreal_GithubTest/Variant_Combat",
			"Unreal_GithubTest/Variant_Combat/AI",
			"Unreal_GithubTest/Variant_Combat/Animation",
			"Unreal_GithubTest/Variant_Combat/Gameplay",
			"Unreal_GithubTest/Variant_Combat/Interfaces",
			"Unreal_GithubTest/Variant_Combat/UI",
			"Unreal_GithubTest/Variant_SideScrolling",
			"Unreal_GithubTest/Variant_SideScrolling/AI",
			"Unreal_GithubTest/Variant_SideScrolling/Gameplay",
			"Unreal_GithubTest/Variant_SideScrolling/Interfaces",
			"Unreal_GithubTest/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
