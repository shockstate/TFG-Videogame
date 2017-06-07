// Fill out your copyright notice in the Description page of Project Settings.

#include "SecondPlayer.h"
#include "PawnCamera.h"

APawnCamera::APawnCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	static ConstructorHelpers::FObjectFinder<UBlueprint> WeaponBlueprint(TEXT("Blueprint'/Game/Ability.Ability'"));
	timerGoldPerSecond = 0.0f;
	totalGold = 200;
	AbilitySpawn = NULL;

	if (WeaponBlueprint.Succeeded()) {
		AbilitySpawn = (UClass*)WeaponBlueprint.Object->GeneratedClass;

	}
	GetMeshComponent()->ToggleVisibility();
	AutoPossessPlayer = EAutoReceiveInput::Player0;
	

}

void APawnCamera::BeginPlay() {
	Super::BeginPlay();

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = Instigator;
	AHability *spawner = GetWorld()->SpawnActor<AHability>(AbilitySpawn, SpawnParams);

	if (spawner) {
		activeAbility = spawner;
	}
}

void APawnCamera::Tick(float DeltaTime)
{	
	timerGoldPerSecond+= DeltaTime;
	if (timerGoldPerSecond > 5.0f) {
		totalGold += 10;
		timerGoldPerSecond = 0.0f;
	}
	Super::Tick(DeltaTime);
	const FRotator rotation = GetViewRotation();
	direction = FRotationMatrix(rotation).GetScaledAxis(EAxis::X);
	activeAbility->InitTheRay(direction, GetMeshComponent()->GetComponentLocation());
	
}
void APawnCamera::SetupPlayerInputComponent(class UInputComponent* InInputComponent) {
	Super::SetupPlayerInputComponent(InInputComponent);

	check(InInputComponent);

	InInputComponent->BindAction("Spell", IE_Pressed, this, &APawnCamera::Fire);
}

void APawnCamera::Fire() {
	if (totalGold > activeAbility->goldCost) {
		int goldSpent = activeAbility->Deploy();
		totalGold = totalGold - goldSpent;
	}
}


