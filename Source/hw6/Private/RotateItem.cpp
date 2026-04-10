// Fill out your copyright notice in the Description page of Project Settings.

//필수기능
#include "RotateItem.h"

// Sets default values
ARotateItem::ARotateItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>("SceneRoot");
	SetRootComponent(SceneRoot);
	
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	StaticMesh->SetupAttachment(SceneRoot);
	
	RotationSpeed = 90.0f;

}

// Called when the game starts or when spawned
void ARotateItem::BeginPlay()
{
	Super::BeginPlay();
	

	// 도전과제 - 랜덤 속성
	RotationSpeed = FMath::RandRange(30.0f, 150.0f);

	// 회전 방향 랜덤 설정 (시계/반시계)
	float Direction = FMath::RandBool() ? 1.0f : -1.0f;
	RotationSpeed *= Direction;

	// 회전 축 랜덤 선택
	int32 AxisIndex = FMath::RandRange(0, 2);
	if (AxisIndex == 0)      RotationAxis = FRotator(0.f, 1.f, 0.f); 
	else if (AxisIndex == 1) RotationAxis = FRotator(1.f, 0.f, 0.f); 
	else                     RotationAxis = FRotator(0.f, 0.f, 1.f); 
}

void ARotateItem::RotateActor(float DeltaTime)
{
	if (!FMath::IsNearlyZero(RotationSpeed))
	{
		AddActorLocalRotation(FRotator(0.0f, RotationSpeed * DeltaTime, 0.0f));
	}

}

// Called every frame
void ARotateItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FRotator DeltaRotation = RotationAxis * RotationSpeed * DeltaTime;
	AddActorLocalRotation(DeltaRotation);
}

