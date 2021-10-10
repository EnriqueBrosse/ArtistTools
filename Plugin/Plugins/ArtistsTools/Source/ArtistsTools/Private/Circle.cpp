// Fill out your copyright notice in the Description page of Project Settings.


#include "Circle.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ACircle::ACircle()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	SplineComponent = CreateDefaultSubobject<USplineComponent>("SplineComponent");
	SplineComponent->SetClosedLoop(true);
	SplineComponent->SetMobility(EComponentMobility::Static);
	SetRootComponent(SplineComponent);
}

TArray<FTransform> ACircle::MakeInstancesInCircle(uint32 index, ESplineCoordinateSpace::Type coordinateSpace)
{
	TArray<FTransform> transforms{};
	transforms.Reserve(AmountOfObjectsPerSide);
	float alpha = 0.0f;
	for (size_t i = 0; i < AmountOfObjectsPerSide; i++)
	{
		const FVector& loc1 = SplineComponent->GetLocationAtSplinePoint(index, coordinateSpace);
		const FVector& loc2 = SplineComponent->GetLocationAtSplinePoint(index + 1, coordinateSpace);
		const FRotator& rot1 = SplineComponent->GetRotationAtSplinePoint(index, coordinateSpace);
		const FRotator& rot2 = SplineComponent->GetRotationAtSplinePoint(index + 1, coordinateSpace);
		alpha += 1.f / float(AmountOfObjectsPerSide + 1);

		const FVector& lerpVec = UKismetMathLibrary::VLerp(loc1, loc2, alpha);
		const FRotator& lerpRot = UKismetMathLibrary::RLerp(rot1, rot2, alpha, true);
		transforms.Add(UKismetMathLibrary::MakeTransform(lerpVec,
			UKismetMathLibrary::ComposeRotators(lerpRot, RotationOffset), Scale));
	}
	return transforms;
}

TArray<FTransform> ACircle::MakeInstances(uint32 index, ESplineCoordinateSpace::Type coordinateSpace)
{
	TArray<FTransform> transforms{};
	transforms.Reserve(AmountOfObjectsPerSide);
	float alpha = 0.0f;
	for (size_t i = 0; i < AmountOfObjectsPerSide; i++)
	{
		const FVector& loc1 = SplineComponent->GetLocationAtSplinePoint(index, coordinateSpace);
		const FVector& loc2 = SplineComponent->GetLocationAtSplinePoint(index + 1, coordinateSpace);
		const FRotator& rot1 = SplineComponent->GetRotationAtSplinePoint(index, coordinateSpace);
		const FRotator& rot2 = SplineComponent->GetRotationAtSplinePoint(index + 1, coordinateSpace);
		alpha += 1.f / float(AmountOfObjectsPerSide + 1);

		const FVector& lerpVec = UKismetMathLibrary::VLerp(loc1, loc2, alpha);
		const FRotator& lerpRot = UKismetMathLibrary::RLerp(rot1, rot2, 0.5f, true);
		transforms.Add(UKismetMathLibrary::MakeTransform(lerpVec,
			UKismetMathLibrary::ComposeRotators(lerpRot, RotationOffset), Scale));
	}
	return transforms;
}

FTransform ACircle::MakeInstancesInCorners(uint32 index, ESplineCoordinateSpace::Type coordinateSpace)
{
	const FVector& loc1 = SplineComponent->GetLocationAtSplinePoint(index, coordinateSpace);
	const FRotator& rot1 = SplineComponent->GetRotationAtSplinePoint(index, coordinateSpace);
	return UKismetMathLibrary::MakeTransform(loc1,
		UKismetMathLibrary::ComposeRotators(rot1, RotationOffset), Scale);
}

void ACircle::OnConstruction(const FTransform& Transform)
{
	SplineComponent->ClearSplinePoints();
	for (size_t i = 0; i < AmountOfSides; i++)
	{
		SplineComponent->AddSplinePointAtIndex(CalculatePosInCircle(i), i, ESplineCoordinateSpace::Local);
	}
}

const FVector ACircle::CalculatePosInCircle(uint32 index)
{
	const float angle = UKismetMathLibrary::DegreesToRadians(GetAngle(index));
	FVector returnValue{};
	returnValue.X = cosf(angle) * Range;
	returnValue.Y = sinf(angle) * Range;
	return returnValue;
}

float ACircle::GetAngle(uint32 index)
{
	return (360.0f / float(AmountOfSides)) * index;
}
void ACircle::Spawn()
{
}
