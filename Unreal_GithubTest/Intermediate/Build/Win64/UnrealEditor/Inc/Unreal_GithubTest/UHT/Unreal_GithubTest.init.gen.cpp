// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnreal_GithubTest_init() {}
	UNREAL_GITHUBTEST_API UFunction* Z_Construct_UDelegateFunction_Unreal_GithubTest_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Unreal_GithubTest;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Unreal_GithubTest()
	{
		if (!Z_Registration_Info_UPackage__Script_Unreal_GithubTest.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Unreal_GithubTest_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Unreal_GithubTest",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x3758C3F4,
				0x29EDDD6C,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Unreal_GithubTest.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Unreal_GithubTest.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Unreal_GithubTest(Z_Construct_UPackage__Script_Unreal_GithubTest, TEXT("/Script/Unreal_GithubTest"), Z_Registration_Info_UPackage__Script_Unreal_GithubTest, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3758C3F4, 0x29EDDD6C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
