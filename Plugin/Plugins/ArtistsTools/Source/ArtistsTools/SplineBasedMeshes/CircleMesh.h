// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Public/Circle.h"
#include "../Enums/SpawnOptions.h"
#include "CircleMesh.generated.h"

class UInstancedStaticMeshComponent;
class AStaticMeshActor;

UCLASS()
class ARTISTSTOOLS_API ACircleMesh : public ACircle
{
	GENERATED_BODY()
public:
	ACircleMesh();
	UPROPERTY(EditAnywhere)
		UStaticMesh* StaticMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		UInstancedStaticMeshComponent* InstancedStaticMeshComponent;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		TArray<AStaticMeshActor*> StaticMeshActors{};

	virtual void OnConstruction(const FTransform& Transform) override;
	UFUNCTION(CallInEditor, Category = "Functions")
	virtual void Spawn() override; 


	UFUNCTION(CallInEditor, Category = "Functions")
		void Edit();
	UFUNCTION(CallInEditor, Category = "Functions")
		void StopEditing();
	UFUNCTION(BlueprintCallable)
		void AddCustomData();

private: 
};
