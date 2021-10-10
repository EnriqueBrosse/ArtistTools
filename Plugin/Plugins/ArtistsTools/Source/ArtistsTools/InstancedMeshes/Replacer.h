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
		UStaticMesh* StaticMesh;
	TArray <UMaterialInterface*> Materials;
	TArray<FTransform> TransformArray;
	TArray<AActor*> ActorArray;
};

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
	bool AreMaterialEqual(const TArray<UMaterialInterface*>& mat1, const TArray<UMaterialInterface*>& mat2);
};
