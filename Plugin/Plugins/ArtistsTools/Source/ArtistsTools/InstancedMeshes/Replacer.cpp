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
	staticMeshArray.Reserve(actorArray.Num());
	for (int32 i = 0; i < actorArray.Num(); i++)
	{
		staticMeshArray.Add(Cast<AStaticMeshActor>(actorArray[i]));
	}
	// sorting on memeory addresses from the static meshes 
	// this should order the static meshes pointers so that they're sorted 
	Algo::Sort(staticMeshArray, [](AStaticMeshActor* sma1, AStaticMeshActor* sma2)
		{
			return sma1->GetStaticMeshComponent()->GetStaticMesh() <
				sma2->GetStaticMeshComponent()->GetStaticMesh();
		});
	// emptying an array that i'm not using the data from anymore
	actorArray.Empty();
	TArray<FReplacerStruct> sortedArray{};
	for (int32 i = 0; i < staticMeshArray.Num(); i++)
	{
		UStaticMeshComponent* staticMeshComp = staticMeshArray[i]->GetStaticMeshComponent();
		UStaticMesh* staticMesh = staticMeshComp->GetStaticMesh();
		const TArray <UMaterialInterface*>& materials = staticMeshComp->GetMaterials();
		bool bIsMeshFound = false;
		for (int32 j = 0; j < sortedArray.Num(); j++)
		{
			if (sortedArray[j].StaticMesh == staticMesh && AreMaterialEqual(materials, sortedArray[j].Materials))
			{
				sortedArray[j].ActorArray.Add(staticMeshArray[i]);
				bIsMeshFound = true;
				break;
			}
		}
		if (!bIsMeshFound)
		{
			FReplacerStruct arrstruct{};
			arrstruct.StaticMesh = staticMesh;
			arrstruct.Materials = materials;
			arrstruct.ActorArray.Add(staticMeshArray[i]);
			sortedArray.Add(arrstruct);
		}
	}
	// emptying it because I'm not going to use it anymore
	staticMeshArray.Empty();

	FVector Location(0.0f, 0.0f, 0.0f);
	FRotator Rotation(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;
	FAttachmentTransformRules attachmentRules{ EAttachmentRule::KeepRelative,false };
	for (int32 i = 0; i < sortedArray.Num(); i++)
	{
		const FReplacerStruct& replacerStruct = sortedArray[i];
		if (replacerStruct.ActorArray.Num() < MinAmountToReplace)
		{
			continue;
		}
		AInstancedStaticMeshActor* instancedStaticMeshActor = GetWorld()->SpawnActor<AInstancedStaticMeshActor>(Location, Rotation, SpawnInfo);
		// setting the name
		FName name = replacerStruct.StaticMesh->GetFName();
		FName name2{ name.ToString().Append(" instanced ") };
		instancedStaticMeshActor->SetName(name2.ToString());

		UInstancedStaticMeshComponent* instancedStaticMesh = instancedStaticMeshActor->InstancedStaticMeshComponent;
		instancedStaticMesh->SetWorldLocation(Location);
		instancedStaticMesh->SetWorldRotation(Rotation);

		instancedStaticMesh->SetStaticMesh(replacerStruct.StaticMesh);

		const TArray <UMaterialInterface*>& materials = replacerStruct.Materials;
		for (int32 j = 0; j < materials.Num(); j++)
		{
			instancedStaticMesh->SetMaterial(j, materials[j]);
		}

		const TArray<AActor*>& actorArray2 = replacerStruct.ActorArray;
		for (int32 j = 0; j < actorArray2.Num(); j++)
		{
			instancedStaticMesh->AddInstanceWorldSpace(actorArray2[j]->GetActorTransform());
			actorArray2[j]->Destroy();
		}
		instancedStaticMeshActor->AddCustomData();
		instancedStaticMesh->AttachToComponent(instancedStaticMeshActor->GetRootComponent(), attachmentRules);
		// emptying the data that I don't need
		sortedArray[i].ActorArray.Empty();
	}
}

bool AReplacer::CanBeInstanced(const FVector& scale)const
{
	// if the scales are mirrored they have a negative scale
	return scale.X > 0 && scale.Y > 0 && scale.Z > 0;
}

bool AReplacer::AreMaterialEqual(const TArray<UMaterialInterface*>& mat1, const TArray<UMaterialInterface*>& mat2)
{
	if (mat1.Num() != mat2.Num())
	{
		return false;
	}
	for (int32 i = 0; i < mat1.Num(); i++)
	{
		if (mat1[i] != mat2[i])
		{
			return false;
		}
	}
	return true;
}