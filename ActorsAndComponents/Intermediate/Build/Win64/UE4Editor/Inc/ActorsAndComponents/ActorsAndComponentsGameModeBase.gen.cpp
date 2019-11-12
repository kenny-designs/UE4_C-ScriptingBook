// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorsAndComponents/ActorsAndComponentsGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorsAndComponentsGameModeBase() {}
// Cross Module References
	ACTORSANDCOMPONENTS_API UClass* Z_Construct_UClass_AActorsAndComponentsGameModeBase_NoRegister();
	ACTORSANDCOMPONENTS_API UClass* Z_Construct_UClass_AActorsAndComponentsGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ActorsAndComponents();
// End Cross Module References
	void AActorsAndComponentsGameModeBase::StaticRegisterNativesAActorsAndComponentsGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AActorsAndComponentsGameModeBase_NoRegister()
	{
		return AActorsAndComponentsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AActorsAndComponentsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActorsAndComponentsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ActorsAndComponents,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorsAndComponentsGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ActorsAndComponentsGameModeBase.h" },
		{ "ModuleRelativePath", "ActorsAndComponentsGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActorsAndComponentsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorsAndComponentsGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AActorsAndComponentsGameModeBase_Statics::ClassParams = {
		&AActorsAndComponentsGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AActorsAndComponentsGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AActorsAndComponentsGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActorsAndComponentsGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AActorsAndComponentsGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AActorsAndComponentsGameModeBase, 3993675023);
	template<> ACTORSANDCOMPONENTS_API UClass* StaticClass<AActorsAndComponentsGameModeBase>()
	{
		return AActorsAndComponentsGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActorsAndComponentsGameModeBase(Z_Construct_UClass_AActorsAndComponentsGameModeBase, &AActorsAndComponentsGameModeBase::StaticClass, TEXT("/Script/ActorsAndComponents"), TEXT("AActorsAndComponentsGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActorsAndComponentsGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
