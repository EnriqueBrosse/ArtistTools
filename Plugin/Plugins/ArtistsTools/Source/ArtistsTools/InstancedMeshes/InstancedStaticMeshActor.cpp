// Fill out your copyright notice in the Description page of Project Settings.
#include "InstancedStaticMeshActor.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Engine/StaticMeshActor.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AInstancedStaticMeshActor::AInstancedStaticMeshActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	InstancedStaticMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>("InstancedStaticMesh");
	SetRootComponent(InstancedStaticMeshComponent);
	InstancedStaticMeshComponent->SetMobility(EComponentMobility::Static);
	InstancedStaticMeshComponent->NumCustomDataFloats = 3;
}

void AInstancedStaticMeshActor::Edit()
{
	int32 instanceCount = InstancedStaticMeshComponent->GetInstanceCount(); 
	FActorSpawnParameters spawnParameter{};
	spawnParameter.Owner = this;
	FAttachmentTransformRules attachmentRules{ EAttachmentRule::KeepWorld,false};
	const TArray<UMaterialInterface*>& materials = InstancedStaticMeshComponent->GetMaterials();
	for (int32 i = 0; i < instanceCount; i++)
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

void AInstancedStaticMeshActor::StopEditing()
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
		GetAttachedActors(actors,true);
		for (int32 i = 0; i < actors.Num(); i++)
		{
			InstancedStaticMeshComponent->AddInstanceWorldSpace(actors[i]->GetTransform());
			actors[i]->Destroy();
		}
	}
	StaticMeshActors.Empty(0);
	AddCustomData();
}

void AInstancedStaticMeshActor::AddCustomData()
{
	int32 instanceCount = InstancedStaticMeshComponent->GetInstanceCount();
	for (int32 i = 0; i < instanceCount; i++)
	{
		FTransform transform{};
		InstancedStaticMeshComponent->GetInstanceTransform(i, transform, true);
		const FVector& location = transform.GetLocation();
		InstancedStaticMeshComponent->SetCustomDataValue(i, 0, location.X, true);
		InstancedStaticMeshComponent->SetCustomDataValue(i, 1, location.Y, true);
		InstancedStaticMeshComponent->SetCustomDataValue(i, 2, location.Z, true);
	}
}

void AInstancedStaticMeshActor::SetName(const FString& name)
{
#if WITH_EDITOR
	SetActorLabel(name,true);
#endif
}
