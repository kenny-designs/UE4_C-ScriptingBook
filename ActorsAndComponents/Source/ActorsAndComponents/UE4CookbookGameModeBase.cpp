// Fill out your copyright notice in the Description page of Project Settings.


#include "UE4CookbookGameModeBase.h"
#include "MyFirstActor.h"
#include "InventoryCharacter.h"
#include "Blueprint/UserWidget.h"

AUE4CookbookGameModeBase::AUE4CookbookGameModeBase()
{
	DefaultPawnClass = AInventoryActor::StaticClass();
}

void AUE4CookbookGameModeBase::BeginPlay()
{
	// Call the parent class version of this function
	Super::BeginPlay();

	// Displays a red message on the screen for 10 seconds
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Actor Spawning"));

	// Spawn an instance of the AMyFirstActor class at the default location
	FTransform SpawnLocation;
	SpawnedActor = GetWorld()->SpawnActor<AMyFirstActor>(AMyFirstActor::StaticClass(), SpawnLocation);

	// Destroy our spawned actor after 10 seconds
	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, this, &AUE4CookbookGameModeBase::DestroyActorFunction, 10);

	// Add the widget to the screen
	// TODO: disabled widget
	/*
	if (Widget)
	{
		UUserWidget* Menu = CreateWidget<UUserWidget>(GetWorld(), Widget);

		if (Menu)
		{
			Menu->AddToViewport();
			GetWorld()->GetFirstPlayerController()->bShowMouseCursor = true;
		}
	}
	*/
}

void AUE4CookbookGameModeBase::DestroyActorFunction()
{
	if (SpawnedActor != nullptr)
	{
		// Displays a red message on the screen for 10 seconds
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Actor Destroyed"));
		SpawnedActor->Destroy();
	}
}
