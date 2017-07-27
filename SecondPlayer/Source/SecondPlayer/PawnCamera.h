// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/DefaultPawn.h"
#include "Hability.h"
#include "PawnCamera.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPLAYER_API APawnCamera : public ADefaultPawn
{
	GENERATED_UCLASS_BODY()
		
	AHability *activeAbility;

	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(UInputComponent* InInputComponent) override;

	UPROPERTY(VisibleAnywhere, Category = Spawn)
	TSubclassOf<class AHability> AbilitySpawn;

	void Fire();

private:
	FVector direction;
	float timerGoldPerSecond;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 totalGold;

	UFUNCTION(BlueprintCallable, Category = Setup)
		int getTotalGold();



	
};
