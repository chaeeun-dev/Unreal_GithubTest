// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Unreal_GithubTestCharacter.h"

#ifdef UNREAL_GITHUBTEST_Unreal_GithubTestCharacter_generated_h
#error "Unreal_GithubTestCharacter.generated.h already included, missing '#pragma once' in Unreal_GithubTestCharacter.h"
#endif
#define UNREAL_GITHUBTEST_Unreal_GithubTestCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AUnreal_GithubTestCharacter **********************************************
#define FID_Unreal_GithubTest_Source_Unreal_GithubTest_Unreal_GithubTestCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


UNREAL_GITHUBTEST_API UClass* Z_Construct_UClass_AUnreal_GithubTestCharacter_NoRegister();

#define FID_Unreal_GithubTest_Source_Unreal_GithubTest_Unreal_GithubTestCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnreal_GithubTestCharacter(); \
	friend struct Z_Construct_UClass_AUnreal_GithubTestCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREAL_GITHUBTEST_API UClass* Z_Construct_UClass_AUnreal_GithubTestCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AUnreal_GithubTestCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Unreal_GithubTest"), Z_Construct_UClass_AUnreal_GithubTestCharacter_NoRegister) \
	DECLARE_SERIALIZER(AUnreal_GithubTestCharacter)


#define FID_Unreal_GithubTest_Source_Unreal_GithubTest_Unreal_GithubTestCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AUnreal_GithubTestCharacter(AUnreal_GithubTestCharacter&&) = delete; \
	AUnreal_GithubTestCharacter(const AUnreal_GithubTestCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnreal_GithubTestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnreal_GithubTestCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AUnreal_GithubTestCharacter) \
	NO_API virtual ~AUnreal_GithubTestCharacter();


#define FID_Unreal_GithubTest_Source_Unreal_GithubTest_Unreal_GithubTestCharacter_h_21_PROLOG
#define FID_Unreal_GithubTest_Source_Unreal_GithubTest_Unreal_GithubTestCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_GithubTest_Source_Unreal_GithubTest_Unreal_GithubTestCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_GithubTest_Source_Unreal_GithubTest_Unreal_GithubTestCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Unreal_GithubTest_Source_Unreal_GithubTest_Unreal_GithubTestCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AUnreal_GithubTestCharacter;

// ********** End Class AUnreal_GithubTestCharacter ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_GithubTest_Source_Unreal_GithubTest_Unreal_GithubTestCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
