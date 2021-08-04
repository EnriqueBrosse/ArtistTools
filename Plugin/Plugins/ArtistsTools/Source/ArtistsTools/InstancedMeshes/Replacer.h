// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/StaticMesh.h"
#include "Replacer.generated.h"


USTRUCT()
struct FArrayStruct
{
	GENERATED_BODY()
	TArray<FTransform> TransformArray;
	TArray<AActor*> ActorArray;
};
//https://medium.com/swlh/using-custom-c-structs-as-tmap-keys-in-unreal-engine-ca3be6be3fea
USTRUCT()
struct FKeyStruct
{
	GENERATED_BODY()
		UStaticMesh* StaticMesh;
	TArray <UMaterialInterface*> Materials;
	bool operator==(const FKeyStruct& other) const
	{
		return Equals(other);
	}

	bool Equals(const FKeyStruct& other) const
	{

		if (StaticMesh != other.StaticMesh
			|| Materials.Num() != other.Materials.Num())
		{
			return false;
		}
		for (int32 i = 0; i < Materials.Num(); i++)
		{
			if (Materials[i] != other.Materials[i])
			{
				return false;
			}
		}
		return true;
	}
};

#if UE_BUILD_DEBUG
uint32 GetTypeHash(const FKeyStruct& Thing);
#else // optimize by inlining in shipping and development builds
FORCEINLINE uint32 GetTypeHash(const FKeyStruct& Thing)
{
	uint32 Hash = FCrc::MemCrc32(&Thing, sizeof(FKeyStruct));
	return Hash;
}
#endif


UCLASS()
class ARTISTSTOOLS_API AReplacer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AReplacer();
	UFUNCTION(CallInEditor)
		void Replace();

	UPROPERTY(EditAnywhere)
		int MinAmountToReplace = 2;
private: 
	bool CanBeInstanced(const FVector& scale)const;
};
