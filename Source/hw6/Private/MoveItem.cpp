// Fill out your copyright notice in the Description page of Project Settings.

//필수기능
#include "MoveItem.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values


AMoveItem::AMoveItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	SceneRoot = CreateDefaultSubobject<USceneComponent>("SceneRoot");
	SetRootComponent(SceneRoot);
	
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	StaticMesh->SetupAttachment(SceneRoot);
	
	MoveSpeed = 100.0f;
	MaxRange = 100.0f;
	TimerInterval = 10.0f; //Tick함수 처럼 사용할 값
	StartLocation = FVector::ZeroVector;
	MoveDirection = 1;
	
	//랜덤속성 부여
	MoveSpeedMin = 120.0f;
	MoveSpeedMax = 360.0f;
	MaxRangeMin = 200.0f;
	MaxRangeMax = 800.0f;
	TimerIntervalMin = 0.01f;
	TimerIntervalMax = 0.03f;
}


void AMoveItem::BeginPlay()
{
	Super::BeginPlay();
	
	StartLocation = GetActorLocation();
	
	//도전과제 - 랜덤 속성 부여
	MoveSpeed = FMath::FRandRange(MoveSpeedMin, MoveSpeedMax);
	MaxRange = FMath::FRandRange(MaxRangeMin, MaxRangeMax);
	TimerInterval = FMath::FRandRange(TimerIntervalMin, TimerIntervalMax);
	MoveDirection = FMath::RandBool() ? 1 : -1;
	
	//도전과제 - 시간 기반 로직
	GetWorld()->GetTimerManager().SetTimer(
			MoveTimerHandle,
			this,
			&AMoveItem::Move,
			TimerInterval, 
			true
		);
	
	
}

void AMoveItem::Move()
{
	FVector CurrentLocation = GetActorLocation();
	float NewX = CurrentLocation.X + (MoveSpeed  * TimerInterval * MoveDirection);
	const float MinX = StartLocation.X - MaxRange;
	const float MaxX = StartLocation.X + MaxRange;

	if (NewX >= MaxX)
	{
		NewX = MaxX;
		MoveDirection = -1;
	}
	else if (NewX <= MinX)
	{
		NewX = MinX;
		MoveDirection = 1;
	}

	SetActorLocation(FVector(NewX, CurrentLocation.Y, CurrentLocation.Z));
}
// Called every frame
void AMoveItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

