// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Unreal_GithubTestGameMode.generated.h"

/**
 *  Simple GameMode for a third person game
 */
UCLASS(abstract)
class AUnreal_GithubTestGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	
	/** Constructor */
	AUnreal_GithubTestGameMode();
};



