// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstLevelGameModeBase.h"


void AFirstLevelGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	// We can use FStrings in interesting ways
	FString name = "Kenny";
	int32 mana = 450;
	TArray<FStringFormatArg> args;
	args.Add(FStringFormatArg(name));
	args.Add(FStringFormatArg(mana));
	FString string = FString::Format(TEXT("Name = {0}, Mana = {1}"), args);

	UE_LOG(LogTemp, Warning, TEXT("Your string: %s"), *string);
}
