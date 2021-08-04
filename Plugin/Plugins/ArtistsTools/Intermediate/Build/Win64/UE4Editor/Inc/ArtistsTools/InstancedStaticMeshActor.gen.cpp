// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArtistsTools/InstancedMeshes/InstancedStaticMeshActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInstancedStaticMeshActor() {}
// Cross Module References
	ARTISTSTOOLS_API UClass* Z_Construct_UClass_AInstancedStaticMeshActor_NoRegister();
	ARTISTSTOOLS_API UClass* Z_Construct_UClass_AInstancedStaticMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArtistsTools();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AInstancedStaticMeshActor::execAddCustomData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCustomData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInstancedStaticMeshActor::execStopEditing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopEditing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInstancedStaticMeshActor::execEdit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Edit();
		P_NATIVE_END;
	}
	void AInstancedStaticMeshActor::StaticRegisterNativesAInstancedStaticMeshActor()
	{
		UClass* Class = AInstancedStaticMeshActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCustomData", &AInstancedStaticMeshActor::execAddCustomData },
			{ "Edit", &AInstancedStaticMeshActor::execEdit },
			{ "StopEditing", &AInstancedStaticMeshActor::execStopEditing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInstancedStaticMeshActor_AddCustomData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInstancedStaticMeshActor_AddCustomData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InstancedMeshes/InstancedStaticMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInstancedStaticMeshActor_AddCustomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInstancedStaticMeshActor, nullptr, "AddCustomData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInstancedStaticMeshActor_AddCustomData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInstancedStaticMeshActor_AddCustomData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInstancedStaticMeshActor_AddCustomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInstancedStaticMeshActor_AddCustomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInstancedStaticMeshActor_Edit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInstancedStaticMeshActor_Edit_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "InstancedMeshes/InstancedStaticMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInstancedStaticMeshActor_Edit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInstancedStaticMeshActor, nullptr, "Edit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInstancedStaticMeshActor_Edit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInstancedStaticMeshActor_Edit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInstancedStaticMeshActor_Edit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInstancedStaticMeshActor_Edit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInstancedStaticMeshActor_StopEditing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInstancedStaticMeshActor_StopEditing_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "InstancedMeshes/InstancedStaticMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInstancedStaticMeshActor_StopEditing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInstancedStaticMeshActor, nullptr, "StopEditing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInstancedStaticMeshActor_StopEditing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInstancedStaticMeshActor_StopEditing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInstancedStaticMeshActor_StopEditing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInstancedStaticMeshActor_StopEditing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInstancedStaticMeshActor_NoRegister()
	{
		return AInstancedStaticMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_AInstancedStaticMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancedStaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstancedStaticMeshComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StaticMeshActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInstancedStaticMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArtistsTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInstancedStaticMeshActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInstancedStaticMeshActor_AddCustomData, "AddCustomData" }, // 1888852808
		{ &Z_Construct_UFunction_AInstancedStaticMeshActor_Edit, "Edit" }, // 855746810
		{ &Z_Construct_UFunction_AInstancedStaticMeshActor_StopEditing, "StopEditing" }, // 3976289024
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInstancedStaticMeshActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InstancedMeshes/InstancedStaticMeshActor.h" },
		{ "ModuleRelativePath", "InstancedMeshes/InstancedStaticMeshActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInstancedStaticMeshActor_Statics::NewProp_InstancedStaticMeshComponent_MetaData[] = {
		{ "Category", "InstancedStaticMeshActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InstancedMeshes/InstancedStaticMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInstancedStaticMeshActor_Statics::NewProp_InstancedStaticMeshComponent = { "InstancedStaticMeshComponent", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInstancedStaticMeshActor, InstancedStaticMeshComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInstancedStaticMeshActor_Statics::NewProp_InstancedStaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInstancedStaticMeshActor_Statics::NewProp_InstancedStaticMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInstancedStaticMeshActor_Statics::NewProp_StaticMeshActors_Inner = { "StaticMeshActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInstancedStaticMeshActor_Statics::NewProp_StaticMeshActors_MetaData[] = {
		{ "Category", "InstancedStaticMeshActor" },
		{ "ModuleRelativePath", "InstancedMeshes/InstancedStaticMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AInstancedStaticMeshActor_Statics::NewProp_StaticMeshActors = { "StaticMeshActors", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInstancedStaticMeshActor, StaticMeshActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AInstancedStaticMeshActor_Statics::NewProp_StaticMeshActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInstancedStaticMeshActor_Statics::NewProp_StaticMeshActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInstancedStaticMeshActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInstancedStaticMeshActor_Statics::NewProp_InstancedStaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInstancedStaticMeshActor_Statics::NewProp_StaticMeshActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInstancedStaticMeshActor_Statics::NewProp_StaticMeshActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInstancedStaticMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInstancedStaticMeshActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInstancedStaticMeshActor_Statics::ClassParams = {
		&AInstancedStaticMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInstancedStaticMeshActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AInstancedStaticMeshActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInstancedStaticMeshActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInstancedStaticMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInstancedStaticMeshActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInstancedStaticMeshActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInstancedStaticMeshActor, 4222123970);
	template<> ARTISTSTOOLS_API UClass* StaticClass<AInstancedStaticMeshActor>()
	{
		return AInstancedStaticMeshActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInstancedStaticMeshActor(Z_Construct_UClass_AInstancedStaticMeshActor, &AInstancedStaticMeshActor::StaticClass, TEXT("/Script/ArtistsTools"), TEXT("AInstancedStaticMeshActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInstancedStaticMeshActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
