// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class HW6_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AMyGameModeBase();
	
protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditDefaultsOnly, Category="Spawn")
	TSubclassOf<AActor> MoveItemClass;
	
	UPROPERTY(EditDefaultsOnly, Category = "Spawn")
	TSubclassOf<AActor> RotateItemClass;
	
	UPROPERTY(EditDefaultsOnly, Category = "Spawn")
	int32 MoveItemCount;

	UPROPERTY(EditDefaultsOnly, Category = "Spawn")
	int32 RotateItemCount;
	
	UPROPERTY(EditDefaultsOnly, Category = "Spawn")
	float SpawnRangeX;

	UPROPERTY(EditDefaultsOnly, Category = "Spawn")
	float SpawnRangeY;


	void SpawnItems(TSubclassOf<AActor> ItemClass, int32 Count);
};
