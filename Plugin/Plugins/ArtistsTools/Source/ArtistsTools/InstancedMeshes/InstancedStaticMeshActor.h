// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InstancedStaticMeshActor.generated.h"

class UInstancedStaticMeshComponent;
class AStaticMeshActor;

UCLASS()
class ARTISTSTOOLS_API AInstancedStaticMeshActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInstancedStaticMeshActor();
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		UInstancedStaticMeshComponent* InstancedStaticMeshComponent;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		TArray<AStaticMeshActor*> StaticMeshActors{};

	UFUNCTION(CallInEditor, Category = "Functions")
		void Edit(); 
	UFUNCTION(CallInEditor, Category = "Functions")
		void StopEditing();
	UFUNCTION(BlueprintCallable)
	void AddCustomData(); 
	void SetName(const FString& name);
};
