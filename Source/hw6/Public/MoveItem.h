// Fill out your copyright notice in the Description page of Project Settings.

//필수기능
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoveItem.generated.h"

class USceneComponent;
class UStaticMeshComponent;

UCLASS()
class HW6_API AMoveItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMoveItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USceneComponent *SceneRoot;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="item")
	UStaticMeshComponent *StaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	float MoveSpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	float MaxRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	int MoveDirection;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	FVector StartLocation;
	
	//도전과제 - Tick처럼 사용할 값
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	float TimerInterval;
	
	//도전과제 - 랜덤속성 부여
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item|Random")
	float MoveSpeedMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item|Random")
	float MoveSpeedMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item|Random")
	float MaxRangeMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item|Random")
	float MaxRangeMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item|Random")
	float TimerIntervalMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item|Random")
	float TimerIntervalMax;
	
	UFUNCTION(BlueprintCallable)
	void Move();
	
	//도전과제 - 타이머 활용
	FTimerHandle MoveTimerHandle;
};
