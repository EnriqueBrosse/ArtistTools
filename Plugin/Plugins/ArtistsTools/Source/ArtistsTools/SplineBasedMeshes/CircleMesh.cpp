// Fill out your copyright notice in the Description page of Project Settings.


#include "CircleMesh.h"
#include "Components/SplineComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Engine/StaticMeshActor.h"
#include "Kismet/GameplayStatics.h"

ACircleMesh::ACircleMesh()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	InstancedStaticMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>("InstancedStaticMesh");
	InstancedStaticMeshComponent->SetMobility(EComponentMobility::Static);
	InstancedStaticMeshComponent->NumCustomDataFloats = 3;
	InstancedStaticMeshComponent->SetupAttachment(RootComponent);
}

void ACircleMesh::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	InstancedStaticMeshComponent->SetStaticMesh(StaticMesh);
}

void ACircleMesh::Spawn()
{
	InstancedStaticMeshComponent->ClearInstances();
	switch (SpawnOption)
	{
	case SpawnOptions::Default:
		for (uint32 i = 0; i < AmountOfSides; i++)
		{
			TArray<FTransform> transforms = MakeInstances(i, ESplineCoordinateSpace::Local);
			for (int32 j = 0; j < transforms.Num(); j++)
			{
				InstancedStaticMeshComponent->AddInstance(transforms[j]);
			}
		}
		break;
	case SpawnOptions::InCircle:
		for (uint32 i = 0; i < AmountOfSides; i++)
		{
			TArray<FTransform> transforms = MakeInstancesInCircle(i, ESplineCoordinateSpace::Local);
			for (int32 j = 0; j < transforms.Num(); j++)
			{
				InstancedStaticMeshComponent->AddInstance(transforms[j]);
			}
		}
		break;
	case SpawnOptions::Corner:
		for (uint32 i = 0; i < AmountOfSides; i++)
		{
			InstancedStaticMeshComponent->AddInstance(MakeInstancesInCorners(i, ESplineCoordinateSpace::Local));
		}
		break;
	default:
		break;
	}
	AddCustomData();
}

// same code as in the instancedmesh actor but i couldn't inherit from both circle and instancedmesh actor
void ACircleMesh::Edit()
{
	uint32 instanceCount = InstancedStaticMeshComponent->GetInstanceCount();
	FActorSpawnParameters spawnParameter{};
	spawnParameter.Owner = this;
	FAttachmentTransformRules attachmentRules{ EAttachmentRule::KeepWorld,false };
	const TArray<UMaterialInterface*>& materials = InstancedStaticMeshComponent->GetMaterials();
	for (uint32 i = 0; i < instanceCount; i++)
	{
		FTransform transform{};
		InstancedStaticMeshComponent->GetInstanceTransform(i, transform, true);
		AStaticMeshActor* staticMesh = GetWorld()->SpawnActor<AStaticMeshActor>(transform.GetLocation(), transform.GetRotation().Rotator(), spawnParameter);
		UStaticMeshComponent* staticMeshComp = staticMesh->GetStaticMeshComponent();
		staticMeshComp->SetStaticMesh(InstancedStaticMeshComponent->GetStaticMesh());
		for (int32 j = 0; j < materials.Num(); j++)
		{
			staticMeshComp->SetMaterial(j, materials[j]);
		}
		StaticMeshActors.Add(staticMesh);
		staticMesh->AttachToActor(this, attachmentRules);
	}
	InstancedStaticMeshComponent->ClearInstances();
}

void ACircleMesh::StopEditing()
{
	if (StaticMeshActors.Num() != 0)
	{
		for (int32 i = 0; i < StaticMeshActors.Num(); i++)
		{
			InstancedStaticMeshComponent->AddInstanceWorldSpace(StaticMeshActors[i]->GetTransform());
			StaticMeshActors[i]->Destroy();
		}
	}
	else
	{
		TArray<AActor*> actors{};
		GetAttachedActors(actors, true);
		for (int32 i = 0; i < actors.Num(); i++)
		{
			InstancedStaticMeshComponent->AddInstanceWorldSpace(actors[i]->GetTransform());
			actors[i]->Destroy();
		}
	}
	StaticMeshActors.Empty(0);
	AddCustomData();
}

void ACircleMesh::AddCustomData()
{
	uint32 instanceCount = InstancedStaticMeshComponent->GetInstanceCount();
	for (uint32 i = 0; i < instanceCount; i++)
	{
		FTransform transform{};
		InstancedStaticMeshComponent->GetInstanceTransform(i, transform, true);
		const FVector& location = transform.GetLocation();
		InstancedStaticMeshComponent->SetCustomDataValue(i, 0, location.X, true);
		InstancedStaticMeshComponent->SetCustomDataValue(i, 1, location.Y, true);
		InstancedStaticMeshComponent->SetCustomDataValue(i, 2, location.Z, true);
	}
}
