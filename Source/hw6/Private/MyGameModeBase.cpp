// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"

AMyGameModeBase::AMyGameModeBase()
{
	MoveItemCount   = 5;
	RotateItemCount = 5;
	SpawnRangeX     = 1000.0f;
	SpawnRangeY     = 1000.0f;
}

void AMyGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	SpawnItems(MoveItemClass,   MoveItemCount);
	SpawnItems(RotateItemClass, RotateItemCount);
}

void AMyGameModeBase::SpawnItems(TSubclassOf<AActor> ItemClass, int32 Count)
{
	// 클래스가 지정 안 됐으면 건너뜀
	if (!ItemClass) return;

	UWorld* World = GetWorld();
	if (!World) return;

	for (int32 i = 0; i < Count; i++)
	{
		FVector RandomLocation = FVector(
			FMath::FRandRange(-SpawnRangeX, SpawnRangeX),
			FMath::FRandRange(-SpawnRangeY, SpawnRangeY),
			50.0f  // 바닥 위 높이
		);

		FRotator RandomRotation = FRotator(
			0.0f,
			FMath::FRandRange(0.0f, 360.0f),
			0.0f
		);

		FActorSpawnParameters Params;
		Params.SpawnCollisionHandlingOverride =
			ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

		World->SpawnActor<AActor>(ItemClass, RandomLocation, RandomRotation, Params);
	}
}