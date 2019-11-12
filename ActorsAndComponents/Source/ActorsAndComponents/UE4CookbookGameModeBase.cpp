// Fill out your copyright notice in the Description page of Project Settings.


#include "UE4CookbookGameModeBase.h"
#include "MyFirstActor.h"

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
