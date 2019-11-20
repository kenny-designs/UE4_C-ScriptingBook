// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyFirstActor.h"
#include "UE4CookbookGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class ACTORSANDCOMPONENTS_API AUE4CookbookGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AUE4CookbookGameModeBase();

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = UIFuncs)
	void ButtonClicked()
	{
		UE_LOG(LogTemp, Warning, TEXT("UI Button Clicked"));	
	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<class UUserWidget> Widget;

	UPROPERTY()
	AMyFirstActor* SpawnedActor;

	UFUNCTION()
	void DestroyActorFunction();
};
