// Fill out your copyright notice in the Description page of Project Settings.

//필수기능
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotateItem.generated.h"

UCLASS()
class HW6_API ARotateItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARotateItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USceneComponent *SceneRoot;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item|Component")
	UStaticMeshComponent *StaticMesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item|Rotation")
	float RotationSpeed;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Item|Rotation")
	FRotator RotationAxis;

	UFUNCTION()
	void RotateActor(float DeltaTime);
	

};
