#pragma once
#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class SpawnOptions : uint8 
{
	Default = 0 UMETA(DisplayName = "Default"),
	InCircle = 1  UMETA(DisplayName = "InCircle"),
	Corner = 2     UMETA(DisplayName = "Corner"),
};
