// Fill out your copyright notice in the Description page of Project Settings.


#include "CircleLights.h"
#include "Engine/RectLight.h"
#include "Engine/PointLight.h"
#include "Engine/SpotLight.h"

#include "Components/RectLightComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SpotLightComponent.h"

// Sets default values
ACircleLights::ACircleLights()
{
}

void ACircleLights::Spawn()
{
	if (LightArray.Num() != 0)
	{
		for (int32 i = 0; i < LightArray.Num(); i++)
		{
			if (LightArray[i]->IsValidLowLevelFast())
			{
				LightArray[i]->Destroy();
			}
		}
	}
	else
	{
		TArray<AActor*> actors{};
		GetAttachedActors(actors, true);
		for (int32 i = 0; i < actors.Num(); i++)
		{
			actors[i]->Destroy();
		}
	}
	LightArray.Empty(0);

	switch (SpawnOption)
	{
	case SpawnOptions::Default:
		for (uint32 i = 0; i < AmountOfSides; i++)
		{
			TArray<FTransform> transforms = MakeInstances(i, ESplineCoordinateSpace::World);
			for (int32 j = 0; j < transforms.Num(); j++)
			{
				SpawnLight(transforms[j]);
			}
		}
		break;
	case SpawnOptions::InCircle:
		for (uint32 i = 0; i < AmountOfSides; i++)
		{
			TArray<FTransform> transforms = MakeInstancesInCircle(i, ESplineCoordinateSpace::World);
			for (int32 j = 0; j < transforms.Num(); j++)
			{
				SpawnLight(transforms[j]);
			}
		}
		break;
	case SpawnOptions::Corner:
		for (uint32 i = 0; i < AmountOfSides; i++)
		{
			SpawnLight(MakeInstancesInCorners(i, ESplineCoordinateSpace::World));
		}
		break;
	default:
		break;
	}
	for (int32 i = 0; i < LightArray.Num(); i++)
	{
		LightArray[i]->SetMobility(EComponentMobility::Static);
	}
}

void ACircleLights::SpawnLight(const FTransform& transform)
{
	FActorSpawnParameters spawnParameter{};
	spawnParameter.Owner = this;
	FAttachmentTransformRules attachmentRules{ EAttachmentRule::KeepWorld,false };

	switch (LightType)
	{
	case LightTypes::PointLight:
	{
		APointLight* pointLight = GetWorld()->SpawnActor<APointLight>
			(transform.GetLocation(), transform.GetRotation().Rotator(), spawnParameter);
		UPointLightComponent* lightComp = pointLight->PointLightComponent;
		lightComp->SetIntensityUnits(LightUnits);
		lightComp->SetIntensity(Intensity);
		lightComp->SetAttenuationRadius(AttenuationRadius);
		lightComp->SetSoftSourceRadius(SoftSourceRadius);
		lightComp->SetSourceLength(SourceLength);
		lightComp->SetSourceRadius(SourceRadius);
		pointLight->AttachToActor(this, attachmentRules);
		LightArray.Add(pointLight);
	}
		break;
	case LightTypes::Spotlight:
	{
		ASpotLight* spotLight = GetWorld()->SpawnActor<ASpotLight>
			(transform.GetLocation(), transform.GetRotation().Rotator(), spawnParameter);
		USpotLightComponent* lightComp = spotLight->SpotLightComponent;
		lightComp->SetIntensityUnits(LightUnits);
		lightComp->SetIntensity(Intensity);
		lightComp->SetAttenuationRadius(AttenuationRadius);
		lightComp->SetSoftSourceRadius(SoftSourceRadius);
		lightComp->SetSourceLength(SourceLength);
		lightComp->SetSourceRadius(SourceRadius);
		lightComp->SetInnerConeAngle(InnerConeAngle);
		lightComp->SetOuterConeAngle(OuterConeAngle);
		spotLight->AttachToActor(this, attachmentRules);
		LightArray.Add(spotLight);
	}
		break;
	case LightTypes::RectLight:
	{
		ARectLight* rectLight = GetWorld()->SpawnActor<ARectLight>
			(transform.GetLocation(), transform.GetRotation().Rotator(), spawnParameter);
		URectLightComponent* lightComp = rectLight->RectLightComponent;
		lightComp->SetIntensityUnits(LightUnits);
		lightComp->SetIntensity(Intensity);
		lightComp->SetAttenuationRadius(AttenuationRadius);
		lightComp->SetBarnDoorAngle(BarnDoorAngle);
		lightComp->SetBarnDoorLength(BarnDoorLength);
		lightComp->SetSourceHeight(SourceHeight);
		lightComp->SetSourceWidth(SourceWidth);
		rectLight->AttachToActor(this, attachmentRules);
		LightArray.Add(rectLight);
	}
		break;
	default:
		break;
	}
}
