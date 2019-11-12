// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CreatingClasses/CreatingClassesGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreatingClassesGameModeBase() {}
// Cross Module References
	CREATINGCLASSES_API UClass* Z_Construct_UClass_ACreatingClassesGameModeBase_NoRegister();
	CREATINGCLASSES_API UClass* Z_Construct_UClass_ACreatingClassesGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CreatingClasses();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CREATINGCLASSES_API UClass* Z_Construct_UClass_UUserProfile_NoRegister();
// End Cross Module References
	void ACreatingClassesGameModeBase::StaticRegisterNativesACreatingClassesGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACreatingClassesGameModeBase_NoRegister()
	{
		return ACreatingClassesGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACreatingClassesGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UPBlueprintClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UPBlueprintClassName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACreatingClassesGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CreatingClasses,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreatingClassesGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CreatingClassesGameModeBase.h" },
		{ "ModuleRelativePath", "CreatingClassesGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreatingClassesGameModeBase_Statics::NewProp_UPBlueprintClassName_MetaData[] = {
		{ "Category", "UClassNames" },
		{ "ModuleRelativePath", "CreatingClassesGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACreatingClassesGameModeBase_Statics::NewProp_UPBlueprintClassName = { "UPBlueprintClassName", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACreatingClassesGameModeBase, UPBlueprintClassName), Z_Construct_UClass_UUserProfile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACreatingClassesGameModeBase_Statics::NewProp_UPBlueprintClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACreatingClassesGameModeBase_Statics::NewProp_UPBlueprintClassName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACreatingClassesGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreatingClassesGameModeBase_Statics::NewProp_UPBlueprintClassName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACreatingClassesGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACreatingClassesGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACreatingClassesGameModeBase_Statics::ClassParams = {
		&ACreatingClassesGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACreatingClassesGameModeBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ACreatingClassesGameModeBase_Statics::PropPointers),
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ACreatingClassesGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACreatingClassesGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACreatingClassesGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACreatingClassesGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACreatingClassesGameModeBase, 312192817);
	template<> CREATINGCLASSES_API UClass* StaticClass<ACreatingClassesGameModeBase>()
	{
		return ACreatingClassesGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACreatingClassesGameModeBase(Z_Construct_UClass_ACreatingClassesGameModeBase, &ACreatingClassesGameModeBase::StaticClass, TEXT("/Script/CreatingClasses"), TEXT("ACreatingClassesGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACreatingClassesGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
