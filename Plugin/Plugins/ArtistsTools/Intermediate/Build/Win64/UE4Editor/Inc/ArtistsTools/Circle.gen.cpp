// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArtistsTools/Public/Circle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCircle() {}
// Cross Module References
	ARTISTSTOOLS_API UClass* Z_Construct_UClass_ACircle_NoRegister();
	ARTISTSTOOLS_API UClass* Z_Construct_UClass_ACircle();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArtistsTools();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ARTISTSTOOLS_API UEnum* Z_Construct_UEnum_ArtistsTools_SpawnOptions();
// End Cross Module References
	void ACircle::StaticRegisterNativesACircle()
	{
	}
	UClass* Z_Construct_UClass_ACircle_NoRegister()
	{
		return ACircle::StaticClass();
	}
	struct Z_Construct_UClass_ACircle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmountOfSides_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_AmountOfSides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmountOfObjectsPerSide_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_AmountOfObjectsPerSide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpawnOption_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpawnOption;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACircle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArtistsTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Circle.h" },
		{ "ModuleRelativePath", "Public/Circle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircle_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "Category", "Circle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Circle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACircle_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACircle, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACircle_Statics::NewProp_SplineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACircle_Statics::NewProp_SplineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircle_Statics::NewProp_AmountOfSides_MetaData[] = {
		{ "Category", "Circle" },
		{ "ModuleRelativePath", "Public/Circle.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ACircle_Statics::NewProp_AmountOfSides = { "AmountOfSides", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACircle, AmountOfSides), METADATA_PARAMS(Z_Construct_UClass_ACircle_Statics::NewProp_AmountOfSides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACircle_Statics::NewProp_AmountOfSides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircle_Statics::NewProp_AmountOfObjectsPerSide_MetaData[] = {
		{ "Category", "Circle" },
		{ "ModuleRelativePath", "Public/Circle.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ACircle_Statics::NewProp_AmountOfObjectsPerSide = { "AmountOfObjectsPerSide", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACircle, AmountOfObjectsPerSide), METADATA_PARAMS(Z_Construct_UClass_ACircle_Statics::NewProp_AmountOfObjectsPerSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACircle_Statics::NewProp_AmountOfObjectsPerSide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircle_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "Circle" },
		{ "ModuleRelativePath", "Public/Circle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACircle_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACircle, Range), METADATA_PARAMS(Z_Construct_UClass_ACircle_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACircle_Statics::NewProp_Range_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircle_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Circle" },
		{ "ModuleRelativePath", "Public/Circle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACircle_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACircle, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACircle_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACircle_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircle_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "Category", "Circle" },
		{ "ModuleRelativePath", "Public/Circle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACircle_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACircle, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ACircle_Statics::NewProp_RotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACircle_Statics::NewProp_RotationOffset_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACircle_Statics::NewProp_SpawnOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircle_Statics::NewProp_SpawnOption_MetaData[] = {
		{ "Category", "Circle" },
		{ "ModuleRelativePath", "Public/Circle.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACircle_Statics::NewProp_SpawnOption = { "SpawnOption", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACircle, SpawnOption), Z_Construct_UEnum_ArtistsTools_SpawnOptions, METADATA_PARAMS(Z_Construct_UClass_ACircle_Statics::NewProp_SpawnOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACircle_Statics::NewProp_SpawnOption_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACircle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACircle_Statics::NewProp_SplineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACircle_Statics::NewProp_AmountOfSides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACircle_Statics::NewProp_AmountOfObjectsPerSide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACircle_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACircle_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACircle_Statics::NewProp_RotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACircle_Statics::NewProp_SpawnOption_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACircle_Statics::NewProp_SpawnOption,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACircle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACircle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACircle_Statics::ClassParams = {
		&ACircle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACircle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACircle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACircle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACircle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACircle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACircle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACircle, 3592973991);
	template<> ARTISTSTOOLS_API UClass* StaticClass<ACircle>()
	{
		return ACircle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACircle(Z_Construct_UClass_ACircle, &ACircle::StaticClass, TEXT("/Script/ArtistsTools"), TEXT("ACircle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACircle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
