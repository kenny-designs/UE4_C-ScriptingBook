// Fill out your copyright notice in the Description page of Project Settings.


#include "CreatingClassesGameModeBase.h"

void ACreatingClassesGameModeBase::BeginPlay()
{
	ACreatingClassesGameModeBase* gm = Cast<ACreatingClassesGameModeBase>(GetWorld()->GetAuthGameMode());

	if (gm)
	{
		UUserProfile* newObject = NewObject<UUserProfile>((UObject*)GetTransientPackage(), UUserProfile::StaticClass());

		// pattern for destroying an object
		if (newObject)
		{
			newObject->ConditionalBeginDestroy();
			newObject = nullptr;
		}
	}
}
