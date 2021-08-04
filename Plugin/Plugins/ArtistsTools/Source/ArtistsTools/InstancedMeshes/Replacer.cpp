// Fill out your copyright notice in the Description page of Project Settings.


#include "Replacer.h"
#include "InstancedStaticMeshActor.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/StaticMeshActor.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "GameFramework/Actor.h"


// Sets default values
AReplacer::AReplacer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;
}

// Called when the game starts or when spawned
void AReplacer::Replace()
{
	// get all the static mesh actors 
	TArray<AActor*> actorArray{};
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AStaticMeshActor::StaticClass(), actorArray);
	TArray<AStaticMeshActor*> staticMeshArray{};
	for (int32 i = 0; i < actorArray.Num(); i++)
	{
		staticMeshArray.Add(Cast<AStaticMeshActor>(actorArray[i]));
	}
	// make the map for the different meshes and instances 
	TMap<FKeyStruct, FArrayStruct> map{};
	TArray<AActor*> meshesToDelete{};
	for (int32 i = 0; i < staticMeshArray.Num(); i++)
	{
		UStaticMeshComponent* staticMesh = staticMeshArray[i]->GetStaticMeshComponent();
		FKeyStruct key{};
		key.StaticMesh = staticMesh->GetStaticMesh();
		key.Materials = staticMesh->GetMaterials();
		if (!CanBeInstanced(staticMesh->GetComponentScale()))
		{
			continue;
		}
		if (map.Contains(key))
		{
			map.Find(key)->TransformArray.Add(staticMeshArray[i]->GetTransform());
			map.Find(key)->ActorArray.Add(staticMeshArray[i]);
		}
		else
		{
			FArrayStruct arrStruct{};
			arrStruct.TransformArray.Add(staticMeshArray[i]->GetTransform());
			arrStruct.ActorArray.Add(staticMeshArray[i]);
			map.Add(key, arrStruct);
		}
	}

	FVector Location(0.0f, 0.0f, 0.0f);
	FRotator Rotation(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;
	FAttachmentTransformRules attachmentRules{ EAttachmentRule::KeepRelative,false };
	// make the instanced static meshes 
	for (const TPair<FKeyStruct, FArrayStruct>& pair : map)
	{
		if (pair.Value.TransformArray.Num() < MinAmountToReplace)
		{
			continue;
		}
		AInstancedStaticMeshActor* instancedStaticMeshActor = GetWorld()->SpawnActor<AInstancedStaticMeshActor>(Location, Rotation, SpawnInfo);
		FName name = pair.Key.StaticMesh->GetFName();
		FName name2{ name.ToString().Append(" instanced ") };
		instancedStaticMeshActor->SetName(name2.ToString());

		UInstancedStaticMeshComponent* instancedStaticMesh = instancedStaticMeshActor->InstancedStaticMeshComponent;
		instancedStaticMesh->SetWorldLocation(Location);
		instancedStaticMesh->SetWorldRotation(Rotation);

		instancedStaticMesh->SetStaticMesh(pair.Key.StaticMesh);

		const TArray <UMaterialInterface*>& materials = pair.Key.Materials;
		for (int32 i = 0; i < materials.Num(); i++)
		{
			instancedStaticMesh->SetMaterial(i, materials[i]);
		}

		const TArray<FTransform>& transformArray = pair.Value.TransformArray;
		const TArray<AActor*>& actorArray2 = pair.Value.ActorArray;
		for (int32 i = 0; i < transformArray.Num(); i++)
		{
			instancedStaticMesh->AddInstance(transformArray[i]);
			meshesToDelete.Add(actorArray2[i]);
		}
		instancedStaticMesh->AttachToComponent(instancedStaticMeshActor->GetRootComponent(),attachmentRules);
		instancedStaticMeshActor->AddCustomData();
	}
	// destroy all the actors
	for (int32 i = 0; i < meshesToDelete.Num(); i++)
	{
		meshesToDelete[i]->Destroy();
	}
}

bool AReplacer::CanBeInstanced(const FVector& scale)const
{
	// if the scales are mirrored they have a negative scale
	return scale.X > 0 && scale.Y > 0 && scale.Z > 0;
}