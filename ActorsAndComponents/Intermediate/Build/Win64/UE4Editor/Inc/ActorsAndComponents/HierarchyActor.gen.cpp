// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorsAndComponents/HierarchyActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHierarchyActor() {}
// Cross Module References
	ACTORSANDCOMPONENTS_API UClass* Z_Construct_UClass_AHierarchyActor_NoRegister();
	ACTORSANDCOMPONENTS_API UClass* Z_Construct_UClass_AHierarchyActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ActorsAndComponents();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AHierarchyActor::StaticRegisterNativesAHierarchyActor()
	{
	}
	UClass* Z_Construct_UClass_AHierarchyActor_NoRegister()
	{
		return AHierarchyActor::StaticClass();
	}
	struct Z_Construct_UClass_AHierarchyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxTwo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxTwo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxOne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildSceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildSceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHierarchyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ActorsAndComponents,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHierarchyActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HierarchyActor.h" },
		{ "ModuleRelativePath", "HierarchyActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHierarchyActor_Statics::NewProp_BoxTwo_MetaData[] = {
		{ "Category", "HierarchyActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HierarchyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHierarchyActor_Statics::NewProp_BoxTwo = { "BoxTwo", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHierarchyActor, BoxTwo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHierarchyActor_Statics::NewProp_BoxTwo_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHierarchyActor_Statics::NewProp_BoxTwo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHierarchyActor_Statics::NewProp_BoxOne_MetaData[] = {
		{ "Category", "HierarchyActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HierarchyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHierarchyActor_Statics::NewProp_BoxOne = { "BoxOne", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHierarchyActor, BoxOne), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHierarchyActor_Statics::NewProp_BoxOne_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHierarchyActor_Statics::NewProp_BoxOne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHierarchyActor_Statics::NewProp_ChildSceneComponent_MetaData[] = {
		{ "Category", "HierarchyActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HierarchyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHierarchyActor_Statics::NewProp_ChildSceneComponent = { "ChildSceneComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHierarchyActor, ChildSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHierarchyActor_Statics::NewProp_ChildSceneComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHierarchyActor_Statics::NewProp_ChildSceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHierarchyActor_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "HierarchyActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HierarchyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHierarchyActor_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHierarchyActor, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHierarchyActor_Statics::NewProp_Root_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHierarchyActor_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHierarchyActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHierarchyActor_Statics::NewProp_BoxTwo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHierarchyActor_Statics::NewProp_BoxOne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHierarchyActor_Statics::NewProp_ChildSceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHierarchyActor_Statics::NewProp_Root,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHierarchyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHierarchyActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHierarchyActor_Statics::ClassParams = {
		&AHierarchyActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHierarchyActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AHierarchyActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AHierarchyActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHierarchyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHierarchyActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHierarchyActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHierarchyActor, 3113202919);
	template<> ACTORSANDCOMPONENTS_API UClass* StaticClass<AHierarchyActor>()
	{
		return AHierarchyActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHierarchyActor(Z_Construct_UClass_AHierarchyActor, &AHierarchyActor::StaticClass, TEXT("/Script/ActorsAndComponents"), TEXT("AHierarchyActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHierarchyActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
