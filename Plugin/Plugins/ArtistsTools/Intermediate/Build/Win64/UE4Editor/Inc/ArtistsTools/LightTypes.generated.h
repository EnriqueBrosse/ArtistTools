// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARTISTSTOOLS_LightTypes_generated_h
#error "LightTypes.generated.h already included, missing '#pragma once' in LightTypes.h"
#endif
#define ARTISTSTOOLS_LightTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Plugin_Plugins_ArtistsTools_Source_ArtistsTools_Enums_LightTypes_h


#define FOREACH_ENUM_LIGHTTYPES(op) \
	op(LightTypes::PointLight) \
	op(LightTypes::Spotlight) \
	op(LightTypes::RectLight) 

enum class LightTypes : uint8;
template<> ARTISTSTOOLS_API UEnum* StaticEnum<LightTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
