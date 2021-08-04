// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArtistsTools/SplineBasedLights/CircleLights.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCircleLights() {}
// Cross Module References
	ARTISTSTOOLS_API UClass* Z_Construct_UClass_ACircleLights_NoRegister();
	ARTISTSTOOLS_API UClass* Z_Construct_UClass_ACircleLights();
	ARTISTSTOOLS_API UClass* Z_Construct_UClass_ACircle();
	UPackage* Z_Construct_UPackage__Script_ArtistsTools();
	ARTISTSTOOLS_API UEnum* Z_Construct_UEnum_ArtistsTools_LightTypes();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightUnits();
// End Cross Module References
	DEFINE_FUNCTION(ACircleLights::execSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Spawn();
		P_NATIVE_END;
	}
	void ACircleLights::StaticRegisterNativesACircleLights()
	{
		UClass* Class = ACircleLights::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Spawn", &ACircleLights::execSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACircleLights_Spawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACircleLights_Spawn_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "SplineBasedLights/CircleLights.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACircleLights_Spawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACircleLights, nullptr, "Spawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACircleLights_Spawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACircleLights_Spawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACircleLights_Spawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACircleLights_Spawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACircleLights_NoRegister()
	{
		return ACircleLights::StaticClass();
	}
	struct Z_Construct_UClass_ACircleLights_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LightType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LightType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LightUnits_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightUnits_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LightUnits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttenuationRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarnDoorAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BarnDoorAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarnDoorLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BarnDoorLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SourceHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SourceWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoftSourceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SoftSourceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SourceLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SourceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerConeAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InnerConeAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterConeAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OuterConeAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACircleLights_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACircle,
		(UObject* (*)())Z_Construct_UPackage__Script_ArtistsTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACircleLights_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACircleLights_Spawn, "Spawn" }, // 1751293962
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircleLights_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SplineBasedLights/CircleLights.h" },
		{ "ModuleRelativePath", "SplineBasedLights/CircleLights.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACircleLights_Statics::NewProp_LightType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircleLights_Statics::NewProp_LightType_MetaData[] = {
		{ "Category", "LightSettings" },
		{ "ModuleRelativePath", "SplineBasedLights/CircleLights.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACircleLights_Statics::NewProp_LightType = { "LightType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACircleLights, LightType), Z_Construct_UEnum_ArtistsTools_LightTypes, METADATA_PARAMS(Z_Construct_UClass_ACircleLights_Statics::NewProp_LightType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACircleLights_Statics::NewProp_LightType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACircleLights_Statics::NewProp_LightUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircleLights_Statics::NewProp_LightUnits_MetaData[] = {
		{ "Category", "LightSettings" },
		{ "ModuleRelativePath", "SplineBasedLights/CircleLights.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACircleLights_Statics::NewProp_LightUnits = { "LightUnits", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACircleLights, LightUnits), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(Z_Construct_UClass_ACircleLights_Statics::NewProp_LightUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACircleLights_Statics::NewProp_LightUnits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircleLights_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "LightSettings" },
		{ "ModuleRelativePath", "SplineBasedLights/CircleLights.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACircleLights_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACircleLights, Intensity), METADATA_PARAMS(Z_Construct_UClass_ACircleLights_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACircleLights_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircleLights_Statics::NewProp_AttenuationRadius_MetaData[] = {
		{ "Category", "LightSettings" },
		{ "ModuleRelativePath", "SplineBasedLights/CircleLights.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACircleLights_Statics::NewProp_AttenuationRadius = { "AttenuationRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACircleLights, AttenuationRadius), METADATA_PARAMS(Z_Construct_UClass_ACircleLights_Statics::NewProp_AttenuationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACircleLights_Statics::NewProp_AttenuationRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircleLights_Statics::NewProp_BarnDoorAngle_MetaData[] = {
		{ "Category", "RectLightSettings" },
		{ "ModuleRelativePath", "SplineBasedLights/CircleLights.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACircleLights_Statics::NewProp_BarnDoorAngle = { "BarnDoorAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACircleLights, BarnDoorAngle), METADATA_PARAMS(Z_Construct_UClass_ACircleLights_Statics::NewProp_BarnDoorAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACircleLights_Statics::NewProp_BarnDoorAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircleLights_Statics::NewProp_BarnDoorLength_MetaData[] = {
		{ "Category", "RectLightSettings" },
		{ "ModuleRelativePath", "SplineBasedLights/CircleLights.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACircleLights_Statics::NewProp_BarnDoorLength = { "BarnDoorLength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACircleLights, BarnDoorLength), METADATA_PARAMS(Z_Construct_UClass_ACircleLights_Statics::NewProp_BarnDoorLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACircleLights_Statics::NewProp_BarnDoorLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircleLights_Statics::NewProp_SourceHeight_MetaData[] = {
		{ "Category", "RectLightSettings" },
		{ "ModuleRelativePath", "SplineBasedLights/CircleLights.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACircleLights_Statics::NewProp_SourceHeight = { "SourceHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACircleLights, SourceHeight), METADATA_PARAMS(Z_Construct_UClass_ACircleLights_Statics::NewProp_SourceHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACircleLights_Statics::NewProp_SourceHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircleLights_Statics::NewProp_SourceWidth_MetaData[] = {
		{ "Category", "RectLightSettings" },
		{ "ModuleRelativePath", "SplineBasedLights/CircleLights.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACircleLights_Statics::NewProp_SourceWidth = { "SourceWidth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACircleLights, SourceWidth), METADATA_PARAMS(Z_Construct_UClass_ACircleLights_Statics::NewProp_SourceWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACircleLights_Statics::NewProp_SourceWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircleLights_Statics::NewProp_SoftSourceRadius_MetaData[] = {
		{ "Category", "PointLightSettings" },
		{ "ModuleRelativePath", "SplineBasedLights/CircleLights.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACircleLights_Statics::NewProp_SoftSourceRadius = { "SoftSourceRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACircleLights, SoftSourceRadius), METADATA_PARAMS(Z_Construct_UClass_ACircleLights_Statics::NewProp_SoftSourceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACircleLights_Statics::NewProp_SoftSourceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircleLights_Statics::NewProp_SourceLength_MetaData[] = {
		{ "Category", "PointLightSettings" },
		{ "ModuleRelativePath", "SplineBasedLights/CircleLights.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACircleLights_Statics::NewProp_SourceLength = { "SourceLength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACircleLights, SourceLength), METADATA_PARAMS(Z_Construct_UClass_ACircleLights_Statics::NewProp_SourceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACircleLights_Statics::NewProp_SourceLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircleLights_Statics::NewProp_SourceRadius_MetaData[] = {
		{ "Category", "PointLightSettings" },
		{ "ModuleRelativePath", "SplineBasedLights/CircleLights.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACircleLights_Statics::NewProp_SourceRadius = { "SourceRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACircleLights, SourceRadius), METADATA_PARAMS(Z_Construct_UClass_ACircleLights_Statics::NewProp_SourceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACircleLights_Statics::NewProp_SourceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircleLights_Statics::NewProp_InnerConeAngle_MetaData[] = {
		{ "Category", "SpotLightSettings" },
		{ "ModuleRelativePath", "SplineBasedLights/CircleLights.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACircleLights_Statics::NewProp_InnerConeAngle = { "InnerConeAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACircleLights, InnerConeAngle), METADATA_PARAMS(Z_Construct_UClass_ACircleLights_Statics::NewProp_InnerConeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACircleLights_Statics::NewProp_InnerConeAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircleLights_Statics::NewProp_OuterConeAngle_MetaData[] = {
		{ "Category", "SpotLightSettings" },
		{ "ModuleRelativePath", "SplineBasedLights/CircleLights.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACircleLights_Statics::NewProp_OuterConeAngle = { "OuterConeAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACircleLights, OuterConeAngle), METADATA_PARAMS(Z_Construct_UClass_ACircleLights_Statics::NewProp_OuterConeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACircleLights_Statics::NewProp_OuterConeAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACircleLights_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACircleLights_Statics::NewProp_LightType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACircleLights_Statics::NewProp_LightType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACircleLights_Statics::NewProp_LightUnits_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACircleLights_Statics::NewProp_LightUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACircleLights_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACircleLights_Statics::NewProp_AttenuationRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACircleLights_Statics::NewProp_BarnDoorAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACircleLights_Statics::NewProp_BarnDoorLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACircleLights_Statics::NewProp_SourceHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACircleLights_Statics::NewProp_SourceWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACircleLights_Statics::NewProp_SoftSourceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACircleLights_Statics::NewProp_SourceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACircleLights_Statics::NewProp_SourceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACircleLights_Statics::NewProp_InnerConeAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACircleLights_Statics::NewProp_OuterConeAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACircleLights_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACircleLights>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACircleLights_Statics::ClassParams = {
		&ACircleLights::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACircleLights_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACircleLights_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACircleLights_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACircleLights_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACircleLights()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACircleLights_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACircleLights, 3481128113);
	template<> ARTISTSTOOLS_API UClass* StaticClass<ACircleLights>()
	{
		return ACircleLights::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACircleLights(Z_Construct_UClass_ACircleLights, &ACircleLights::StaticClass, TEXT("/Script/ArtistsTools"), TEXT("ACircleLights"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACircleLights);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
