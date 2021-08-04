// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARTISTSTOOLS_SpawnOptions_generated_h
#error "SpawnOptions.generated.h already included, missing '#pragma once' in SpawnOptions.h"
#endif
#define ARTISTSTOOLS_SpawnOptions_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Plugin_Plugins_ArtistsTools_Source_ArtistsTools_Enums_SpawnOptions_h


#define FOREACH_ENUM_SPAWNOPTIONS(op) \
	op(SpawnOptions::Default) \
	op(SpawnOptions::InCircle) \
	op(SpawnOptions::Corner) 

enum class SpawnOptions : uint8;
template<> ARTISTSTOOLS_API UEnum* StaticEnum<SpawnOptions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
