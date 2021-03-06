// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "GameFramework/PlayerInput.h"
#include "UE4CookbookGameModeBase.h"
#include "Components/CapsuleComponent.h"

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

	// Get PlayerInput to register keybindings
	auto PlayerInput = GetWorld()->GetFirstPlayerController()->PlayerInput;

	// Define action mappings
	FInputAxisKeyMapping Forward("Forward", EKeys::W, 1.0f);
	FInputAxisKeyMapping Back("Back", EKeys::S, 1.0f);
	FInputAxisKeyMapping Left("Left", EKeys::A, 1.0f);
	FInputAxisKeyMapping Right("Right", EKeys::D, 1.0f);
	FInputActionKeyMapping Jump("Jump", EKeys::SpaceBar);

	// Add Keys to controller
	PlayerInput->AddAxisMapping(Forward);
	PlayerInput->AddAxisMapping(Back);
	PlayerInput->AddAxisMapping(Left);
	PlayerInput->AddAxisMapping(Right);
	PlayerInput->AddActionMapping(Jump);

	// Setup keybindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAxis("Forward", this, &AMyCharacter::Forward);
	PlayerInputComponent->BindAxis("Back", this, &AMyCharacter::Back);
	PlayerInputComponent->BindAxis("Left", this, &AMyCharacter::Left);
	PlayerInputComponent->BindAxis("Right", this, &AMyCharacter::Right);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMyCharacter::Jump);

	// Calling function for hotkey
	auto GameMode = Cast<AUE4CookbookGameModeBase>(GetWorld()->GetAuthGameMode());
	auto Func = &AUE4CookbookGameModeBase::ButtonClicked;

	if (GameMode && Func)
	{
		PlayerInputComponent->BindAction("HotKey_UIButton_Spell", IE_Pressed, GameMode, Func);
	}
}

void AMyCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	if (RootComponent)
	{
		// Attach contact function to all bounding components
		GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &AMyCharacter::OnOverlapsBegin);
		GetCapsuleComponent()->OnComponentEndOverlap.AddDynamic(this, &AMyCharacter::OnOverlapsEnd);
	}
}

void AMyCharacter::OnOverlapsBegin_Implementation(UPrimitiveComponent* Comp,
	                               AActor* OtherActor,
	                               UPrimitiveComponent* OtherComp,
	                               int32 OtherBodyIndex,
	                               bool bFromSweep,
	                               const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Overlaps character began!"));
}

void AMyCharacter::OnOverlapsEnd_Implementation(UPrimitiveComponent* Comp,
	                             AActor* OtherActor,
	                             UPrimitiveComponent* OtherComp,
	                             int32 OtherBodyIndex)
{
	UE_LOG(LogTemp, Warning, TEXT("Overlaps character ended."));
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

