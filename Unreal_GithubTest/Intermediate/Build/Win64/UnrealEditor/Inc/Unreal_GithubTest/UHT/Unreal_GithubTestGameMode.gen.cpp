// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_GithubTestGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUnreal_GithubTestGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UNREAL_GITHUBTEST_API UClass* Z_Construct_UClass_AUnreal_GithubTestGameMode();
UNREAL_GITHUBTEST_API UClass* Z_Construct_UClass_AUnreal_GithubTestGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Unreal_GithubTest();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AUnreal_GithubTestGameMode ***********************************************
void AUnreal_GithubTestGameMode::StaticRegisterNativesAUnreal_GithubTestGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AUnreal_GithubTestGameMode;
UClass* AUnreal_GithubTestGameMode::GetPrivateStaticClass()
{
	using TClass = AUnreal_GithubTestGameMode;
	if (!Z_Registration_Info_UClass_AUnreal_GithubTestGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Unreal_GithubTestGameMode"),
			Z_Registration_Info_UClass_AUnreal_GithubTestGameMode.InnerSingleton,
			StaticRegisterNativesAUnreal_GithubTestGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AUnreal_GithubTestGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AUnreal_GithubTestGameMode_NoRegister()
{
	return AUnreal_GithubTestGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AUnreal_GithubTestGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Unreal_GithubTestGameMode.h" },
		{ "ModuleRelativePath", "Unreal_GithubTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnreal_GithubTestGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUnreal_GithubTestGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Unreal_GithubTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal_GithubTestGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnreal_GithubTestGameMode_Statics::ClassParams = {
	&AUnreal_GithubTestGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal_GithubTestGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUnreal_GithubTestGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUnreal_GithubTestGameMode()
{
	if (!Z_Registration_Info_UClass_AUnreal_GithubTestGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnreal_GithubTestGameMode.OuterSingleton, Z_Construct_UClass_AUnreal_GithubTestGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUnreal_GithubTestGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUnreal_GithubTestGameMode);
AUnreal_GithubTestGameMode::~AUnreal_GithubTestGameMode() {}
// ********** End Class AUnreal_GithubTestGameMode *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_GithubTest_Source_Unreal_GithubTest_Unreal_GithubTestGameMode_h__Script_Unreal_GithubTest_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUnreal_GithubTestGameMode, AUnreal_GithubTestGameMode::StaticClass, TEXT("AUnreal_GithubTestGameMode"), &Z_Registration_Info_UClass_AUnreal_GithubTestGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnreal_GithubTestGameMode), 2451390075U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_GithubTest_Source_Unreal_GithubTest_Unreal_GithubTestGameMode_h__Script_Unreal_GithubTest_825537824(TEXT("/Script/Unreal_GithubTest"),
	Z_CompiledInDeferFile_FID_Unreal_GithubTest_Source_Unreal_GithubTest_Unreal_GithubTestGameMode_h__Script_Unreal_GithubTest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_GithubTest_Source_Unreal_GithubTest_Unreal_GithubTestGameMode_h__Script_Unreal_GithubTest_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
