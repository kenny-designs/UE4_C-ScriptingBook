// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UserProfile.h"
#include "CreatingClassesGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class CREATINGCLASSES_API ACreatingClassesGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UClassNames)
	TSubclassOf<UUserProfile> UPBlueprintClassName;

	void BeginPlay();
};
