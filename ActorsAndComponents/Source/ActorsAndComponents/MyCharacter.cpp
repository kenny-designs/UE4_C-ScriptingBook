// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	LastInput = FVector2D::ZeroVector;
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float len = LastInput.Size();

	// If the player's input is greater than 1, normalize it
	if (len > 1.0f)
	{
		LastInput /= len;
	}

	AddMovementInput(GetActorForwardVector(), LastInput.Y);
	AddMovementInput(GetActorRightVector(), LastInput.X);

	// Zero off last input values
	LastInput = FVector2D(0, 0);
}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);
	PlayerInputComponent->BindAxis("Forward", this, &AMyCharacter::Forward);
	PlayerInputComponent->BindAxis("Back", this, &AMyCharacter::Back);
	PlayerInputComponent->BindAxis("Left", this, &AMyCharacter::Left);
	PlayerInputComponent->BindAxis("Right", this, &AMyCharacter::Right);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMyCharacter::Jump);
}

void AMyCharacter::Forward(float amount)
{
	// We use a += of the amount added so that when the other function modifying .Y (::Back())
	// affects lastInput, it won't overwrite with 0's
	LastInput.Y += amount;
}

void AMyCharacter::Back(float amount)
{
	LastInput.Y -= amount;
}

void AMyCharacter::Left(float amount)
{
	LastInput.X -= amount;
}

void AMyCharacter::Right(float amount)
{
	LastInput.X += amount;
}

