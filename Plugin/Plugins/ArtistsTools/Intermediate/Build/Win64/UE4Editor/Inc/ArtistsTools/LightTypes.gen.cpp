// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArtistsTools/Enums/LightTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightTypes() {}
// Cross Module References
	ARTISTSTOOLS_API UEnum* Z_Construct_UEnum_ArtistsTools_LightTypes();
	UPackage* Z_Construct_UPackage__Script_ArtistsTools();
// End Cross Module References
	static UEnum* LightTypes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ArtistsTools_LightTypes, Z_Construct_UPackage__Script_ArtistsTools(), TEXT("LightTypes"));
		}
		return Singleton;
	}
	template<> ARTISTSTOOLS_API UEnum* StaticEnum<LightTypes>()
	{
		return LightTypes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_LightTypes(LightTypes_StaticEnum, TEXT("/Script/ArtistsTools"), TEXT("LightTypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ArtistsTools_LightTypes_Hash() { return 904024435U; }
	UEnum* Z_Construct_UEnum_ArtistsTools_LightTypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ArtistsTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("LightTypes"), 0, Get_Z_Construct_UEnum_ArtistsTools_LightTypes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LightTypes::PointLight", (int64)LightTypes::PointLight },
				{ "LightTypes::Spotlight", (int64)LightTypes::Spotlight },
				{ "LightTypes::RectLight", (int64)LightTypes::RectLight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Enums/LightTypes.h" },
				{ "PointLight.DisplayName", "PointLight" },
				{ "PointLight.Name", "LightTypes::PointLight" },
				{ "RectLight.DisplayName", "RectLight" },
				{ "RectLight.Name", "LightTypes::RectLight" },
				{ "Spotlight.DisplayName", "Spotlight" },
				{ "Spotlight.Name", "LightTypes::Spotlight" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ArtistsTools,
				nullptr,
				"LightTypes",
				"LightTypes",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
