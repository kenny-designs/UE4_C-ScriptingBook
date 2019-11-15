// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameStateBase.h"

AMyGameStateBase::AMyGameStateBase()
{
	CurrentScore = 0;
}

void AMyGameStateBase::SetScore(int32 NewScore)
{
	CurrentScore = NewScore;
}

int32 AMyGameStateBase::GetScore()
{
	return CurrentScore;
}
