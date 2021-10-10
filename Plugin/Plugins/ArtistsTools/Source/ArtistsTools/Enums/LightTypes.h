#pragma once
#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class ELightTypes : uint8
{
	PointLight = 0 UMETA(DisplayName = "PointLight"),
	Spotlight = 1  UMETA(DisplayName = "Spotlight"),
	RectLight = 2     UMETA(DisplayName = "RectLight"),
};
