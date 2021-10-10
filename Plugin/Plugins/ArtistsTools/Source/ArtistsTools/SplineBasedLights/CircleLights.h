// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Public/Circle.h"
#include "../Enums/LightTypes.h"
#include "CircleLights.generated.h"

class ALight;

UCLASS()
class ARTISTSTOOLS_API ACircleLights : public ACircle
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	ACircleLights();
	UFUNCTION(CallInEditor, Category = "Functions")
		virtual void Spawn() override;

	UPROPERTY(EditAnywhere, Category = "LightSettings")
		ELightTypes LightType = ELightTypes::RectLight;
	UPROPERTY(EditAnywhere, Category = "LightSettings")
		ELightUnits LightUnits = ELightUnits::Candelas;
	UPROPERTY(EditAnywhere, Category = "LightSettings")
		float Intensity = 8.f;
	UPROPERTY(EditAnywhere, Category = "LightSettings")
		float AttenuationRadius = 2500.f;

	UPROPERTY(EditAnywhere, Category = "RectLightSettings")
		float BarnDoorAngle = 90;
	UPROPERTY(EditAnywhere, Category = "RectLightSettings")
		float BarnDoorLength = 50;
	UPROPERTY(EditAnywhere, Category = "RectLightSettings")
		float SourceHeight = 45;
	UPROPERTY(EditAnywhere, Category = "RectLightSettings")
		float SourceWidth = 45;

	UPROPERTY(EditAnywhere, Category = "PointLightSettings")
		float SoftSourceRadius;
	UPROPERTY(EditAnywhere, Category = "PointLightSettings")
		float SourceLength;
	UPROPERTY(EditAnywhere, Category = "PointLightSettings")
		float SourceRadius;

	UPROPERTY(EditAnywhere, Category = "SpotLightSettings")
		float InnerConeAngle = 45.0f;
	UPROPERTY(EditAnywhere, Category = "SpotLightSettings")
		float OuterConeAngle = 90.0f;

private:
	void SpawnLight(const FTransform& transform);
	TArray<ALight*> LightArray{};
};
