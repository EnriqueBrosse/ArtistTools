// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArtistsTools/SplineBasedMeshes/CircleMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCircleMesh() {}
// Cross Module References
	ARTISTSTOOLS_API UClass* Z_Construct_UClass_ACircleMesh_NoRegister();
	ARTISTSTOOLS_API UClass* Z_Construct_UClass_ACircleMesh();
	ARTISTSTOOLS_API UClass* Z_Construct_UClass_ACircle();
	UPackage* Z_Construct_UPackage__Script_ArtistsTools();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACircleMesh::execAddCustomData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCustomData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACircleMesh::execStopEditing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopEditing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACircleMesh::execEdit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Edit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACircleMesh::execSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Spawn();
		P_NATIVE_END;
	}
	void ACircleMesh::StaticRegisterNativesACircleMesh()
	{
		UClass* Class = ACircleMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCustomData", &ACircleMesh::execAddCustomData },
			{ "Edit", &ACircleMesh::execEdit },
			{ "Spawn", &ACircleMesh::execSpawn },
			{ "StopEditing", &ACircleMesh::execStopEditing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACircleMesh_AddCustomData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACircleMesh_AddCustomData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SplineBasedMeshes/CircleMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACircleMesh_AddCustomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACircleMesh, nullptr, "AddCustomData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACircleMesh_AddCustomData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACircleMesh_AddCustomData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACircleMesh_AddCustomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACircleMesh_AddCustomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACircleMesh_Edit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACircleMesh_Edit_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "SplineBasedMeshes/CircleMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACircleMesh_Edit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACircleMesh, nullptr, "Edit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACircleMesh_Edit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACircleMesh_Edit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACircleMesh_Edit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACircleMesh_Edit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACircleMesh_Spawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACircleMesh_Spawn_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "SplineBasedMeshes/CircleMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACircleMesh_Spawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACircleMesh, nullptr, "Spawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACircleMesh_Spawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACircleMesh_Spawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACircleMesh_Spawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACircleMesh_Spawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACircleMesh_StopEditing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACircleMesh_StopEditing_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "SplineBasedMeshes/CircleMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACircleMesh_StopEditing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACircleMesh, nullptr, "StopEditing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACircleMesh_StopEditing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACircleMesh_StopEditing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACircleMesh_StopEditing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACircleMesh_StopEditing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACircleMesh_NoRegister()
	{
		return ACircleMesh::StaticClass();
	}
	struct Z_Construct_UClass_ACircleMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
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
	UObject* (*const Z_Construct_UClass_ACircleMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACircle,
		(UObject* (*)())Z_Construct_UPackage__Script_ArtistsTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACircleMesh_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACircleMesh_AddCustomData, "AddCustomData" }, // 627138419
		{ &Z_Construct_UFunction_ACircleMesh_Edit, "Edit" }, // 3284532407
		{ &Z_Construct_UFunction_ACircleMesh_Spawn, "Spawn" }, // 2456140666
		{ &Z_Construct_UFunction_ACircleMesh_StopEditing, "StopEditing" }, // 3284863584
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircleMesh_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SplineBasedMeshes/CircleMesh.h" },
		{ "ModuleRelativePath", "SplineBasedMeshes/CircleMesh.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircleMesh_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "CircleMesh" },
		{ "ModuleRelativePath", "SplineBasedMeshes/CircleMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACircleMesh_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACircleMesh, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACircleMesh_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACircleMesh_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircleMesh_Statics::NewProp_InstancedStaticMeshComponent_MetaData[] = {
		{ "Category", "CircleMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SplineBasedMeshes/CircleMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACircleMesh_Statics::NewProp_InstancedStaticMeshComponent = { "InstancedStaticMeshComponent", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACircleMesh, InstancedStaticMeshComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACircleMesh_Statics::NewProp_InstancedStaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACircleMesh_Statics::NewProp_InstancedStaticMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACircleMesh_Statics::NewProp_StaticMeshActors_Inner = { "StaticMeshActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircleMesh_Statics::NewProp_StaticMeshActors_MetaData[] = {
		{ "Category", "CircleMesh" },
		{ "ModuleRelativePath", "SplineBasedMeshes/CircleMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACircleMesh_Statics::NewProp_StaticMeshActors = { "StaticMeshActors", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACircleMesh, StaticMeshActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACircleMesh_Statics::NewProp_StaticMeshActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACircleMesh_Statics::NewProp_StaticMeshActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACircleMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACircleMesh_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACircleMesh_Statics::NewProp_InstancedStaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACircleMesh_Statics::NewProp_StaticMeshActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACircleMesh_Statics::NewProp_StaticMeshActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACircleMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACircleMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACircleMesh_Statics::ClassParams = {
		&ACircleMesh::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACircleMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACircleMesh_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACircleMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACircleMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACircleMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACircleMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACircleMesh, 1168900743);
	template<> ARTISTSTOOLS_API UClass* StaticClass<ACircleMesh>()
	{
		return ACircleMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACircleMesh(Z_Construct_UClass_ACircleMesh, &ACircleMesh::StaticClass, TEXT("/Script/ArtistsTools"), TEXT("ACircleMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACircleMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
