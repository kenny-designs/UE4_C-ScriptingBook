// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FirstLevelGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTLEVEL_API AFirstLevelGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	void BeginPlay();
};
