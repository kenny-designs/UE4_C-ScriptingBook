// Fill out your copyright notice in the Description page of Project Settings.


#include "Warior.h"

// Sets default values
AWarior::AWarior()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

FString AWarior::ToString()
{
	return FString::Printf(TEXT("An instance of AWarrior: %s"), *Name);
}

// Called when the game starts or when spawned
void AWarior::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWarior::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

