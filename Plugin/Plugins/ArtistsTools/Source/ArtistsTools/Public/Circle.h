// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Enums/SpawnOptions.h"
#include "GameFramework/Actor.h"
// need it for the enum
#include "Components/SplineComponent.h"

#include "Circle.generated.h"


UCLASS()
class ARTISTSTOOLS_API ACircle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACircle();
	UPROPERTY(EditDefaultsOnly)
		USplineComponent* SplineComponent;
	UPROPERTY(EditAnywhere)
		uint32 AmountOfSides = 4;
	UPROPERTY(EditAnywhere)
		uint32 AmountOfObjectsPerSide = 1;
	UPROPERTY(EditAnywhere)
		float Range = 500;
	UPROPERTY(EditAnywhere)
		FVector Scale = FVector(1);
	UPROPERTY(EditAnywhere)
		FRotator RotationOffset = FRotator();
	UPROPERTY(EditAnywhere)
		SpawnOptions SpawnOption = SpawnOptions::Default;

	virtual void OnConstruction(const FTransform& Transform) override;

	virtual	void Spawn();

protected: 
	const FVector CalculatePosInCircle(uint32 index);
	float GetAngle(uint32 index);
	TArray<FTransform> MakeInstancesInCircle(uint32 index, ESplineCoordinateSpace::Type coordinateSpace);
	TArray<FTransform> MakeInstances(uint32 index, ESplineCoordinateSpace::Type coordinateSpace);
	FTransform MakeInstancesInCorners(uint32 index, ESplineCoordinateSpace::Type coordinateSpace);
};
