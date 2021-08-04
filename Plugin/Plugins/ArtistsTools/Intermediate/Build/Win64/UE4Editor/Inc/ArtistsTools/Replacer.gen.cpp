// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArtistsTools/InstancedMeshes/Replacer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplacer() {}
// Cross Module References
	ARTISTSTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FKeyStruct();
	UPackage* Z_Construct_UPackage__Script_ArtistsTools();
	ARTISTSTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FArrayStruct();
	ARTISTSTOOLS_API UClass* Z_Construct_UClass_AReplacer_NoRegister();
	ARTISTSTOOLS_API UClass* Z_Construct_UClass_AReplacer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
class UScriptStruct* FKeyStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARTISTSTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FKeyStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyStruct, Z_Construct_UPackage__Script_ArtistsTools(), TEXT("KeyStruct"), sizeof(FKeyStruct), Get_Z_Construct_UScriptStruct_FKeyStruct_Hash());
	}
	return Singleton;
}
template<> ARTISTSTOOLS_API UScriptStruct* StaticStruct<FKeyStruct>()
{
	return FKeyStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKeyStruct(FKeyStruct::StaticStruct, TEXT("/Script/ArtistsTools"), TEXT("KeyStruct"), false, nullptr, nullptr);
static struct FScriptStruct_ArtistsTools_StaticRegisterNativesFKeyStruct
{
	FScriptStruct_ArtistsTools_StaticRegisterNativesFKeyStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KeyStruct")),new UScriptStruct::TCppStructOps<FKeyStruct>);
	}
} ScriptStruct_ArtistsTools_StaticRegisterNativesFKeyStruct;
	struct Z_Construct_UScriptStruct_FKeyStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//https://medium.com/swlh/using-custom-c-structs-as-tmap-keys-in-unreal-engine-ca3be6be3fea\n" },
		{ "ModuleRelativePath", "InstancedMeshes/Replacer.h" },
		{ "ToolTip", "https:medium.com/swlh/using-custom-c-structs-as-tmap-keys-in-unreal-engine-ca3be6be3fea" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyStruct>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ArtistsTools,
		nullptr,
		&NewStructOps,
		"KeyStruct",
		sizeof(FKeyStruct),
		alignof(FKeyStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeyStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKeyStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ArtistsTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KeyStruct"), sizeof(FKeyStruct), Get_Z_Construct_UScriptStruct_FKeyStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKeyStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKeyStruct_Hash() { return 1905477280U; }
class UScriptStruct* FArrayStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARTISTSTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FArrayStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArrayStruct, Z_Construct_UPackage__Script_ArtistsTools(), TEXT("ArrayStruct"), sizeof(FArrayStruct), Get_Z_Construct_UScriptStruct_FArrayStruct_Hash());
	}
	return Singleton;
}
template<> ARTISTSTOOLS_API UScriptStruct* StaticStruct<FArrayStruct>()
{
	return FArrayStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArrayStruct(FArrayStruct::StaticStruct, TEXT("/Script/ArtistsTools"), TEXT("ArrayStruct"), false, nullptr, nullptr);
static struct FScriptStruct_ArtistsTools_StaticRegisterNativesFArrayStruct
{
	FScriptStruct_ArtistsTools_StaticRegisterNativesFArrayStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ArrayStruct")),new UScriptStruct::TCppStructOps<FArrayStruct>);
	}
} ScriptStruct_ArtistsTools_StaticRegisterNativesFArrayStruct;
	struct Z_Construct_UScriptStruct_FArrayStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArrayStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "InstancedMeshes/Replacer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArrayStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArrayStruct>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArrayStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ArtistsTools,
		nullptr,
		&NewStructOps,
		"ArrayStruct",
		sizeof(FArrayStruct),
		alignof(FArrayStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArrayStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArrayStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArrayStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ArtistsTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArrayStruct"), sizeof(FArrayStruct), Get_Z_Construct_UScriptStruct_FArrayStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArrayStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArrayStruct_Hash() { return 2203820149U; }
	DEFINE_FUNCTION(AReplacer::execReplace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Replace();
		P_NATIVE_END;
	}
	void AReplacer::StaticRegisterNativesAReplacer()
	{
		UClass* Class = AReplacer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Replace", &AReplacer::execReplace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AReplacer_Replace_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReplacer_Replace_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "InstancedMeshes/Replacer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReplacer_Replace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReplacer, nullptr, "Replace", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReplacer_Replace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplacer_Replace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReplacer_Replace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReplacer_Replace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AReplacer_NoRegister()
	{
		return AReplacer::StaticClass();
	}
	struct Z_Construct_UClass_AReplacer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinAmountToReplace_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MinAmountToReplace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReplacer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArtistsTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AReplacer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AReplacer_Replace, "Replace" }, // 1995943990
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplacer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InstancedMeshes/Replacer.h" },
		{ "ModuleRelativePath", "InstancedMeshes/Replacer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplacer_Statics::NewProp_MinAmountToReplace_MetaData[] = {
		{ "Category", "Replacer" },
		{ "ModuleRelativePath", "InstancedMeshes/Replacer.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AReplacer_Statics::NewProp_MinAmountToReplace = { "MinAmountToReplace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReplacer, MinAmountToReplace), METADATA_PARAMS(Z_Construct_UClass_AReplacer_Statics::NewProp_MinAmountToReplace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReplacer_Statics::NewProp_MinAmountToReplace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AReplacer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReplacer_Statics::NewProp_MinAmountToReplace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReplacer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReplacer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AReplacer_Statics::ClassParams = {
		&AReplacer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AReplacer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AReplacer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AReplacer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AReplacer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AReplacer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AReplacer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AReplacer, 2088164030);
	template<> ARTISTSTOOLS_API UClass* StaticClass<AReplacer>()
	{
		return AReplacer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AReplacer(Z_Construct_UClass_AReplacer, &AReplacer::StaticClass, TEXT("/Script/ArtistsTools"), TEXT("AReplacer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReplacer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
