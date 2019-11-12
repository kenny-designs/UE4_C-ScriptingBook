// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorsAndComponents/UE4CookbookGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE4CookbookGameModeBase() {}
// Cross Module References
	ACTORSANDCOMPONENTS_API UClass* Z_Construct_UClass_AUE4CookbookGameModeBase_NoRegister();
	ACTORSANDCOMPONENTS_API UClass* Z_Construct_UClass_AUE4CookbookGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ActorsAndComponents();
	ACTORSANDCOMPONENTS_API UFunction* Z_Construct_UFunction_AUE4CookbookGameModeBase_DestroyActorFunction();
	ACTORSANDCOMPONENTS_API UClass* Z_Construct_UClass_AMyFirstActor_NoRegister();
// End Cross Module References
	void AUE4CookbookGameModeBase::StaticRegisterNativesAUE4CookbookGameModeBase()
	{
		UClass* Class = AUE4CookbookGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyActorFunction", &AUE4CookbookGameModeBase::execDestroyActorFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUE4CookbookGameModeBase_DestroyActorFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUE4CookbookGameModeBase_DestroyActorFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UE4CookbookGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUE4CookbookGameModeBase_DestroyActorFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUE4CookbookGameModeBase, nullptr, "DestroyActorFunction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUE4CookbookGameModeBase_DestroyActorFunction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUE4CookbookGameModeBase_DestroyActorFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUE4CookbookGameModeBase_DestroyActorFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUE4CookbookGameModeBase_DestroyActorFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUE4CookbookGameModeBase_NoRegister()
	{
		return AUE4CookbookGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUE4CookbookGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE4CookbookGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ActorsAndComponents,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUE4CookbookGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUE4CookbookGameModeBase_DestroyActorFunction, "DestroyActorFunction" }, // 2829632127
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4CookbookGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UE4CookbookGameModeBase.h" },
		{ "ModuleRelativePath", "UE4CookbookGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4CookbookGameModeBase_Statics::NewProp_SpawnedActor_MetaData[] = {
		{ "ModuleRelativePath", "UE4CookbookGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE4CookbookGameModeBase_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUE4CookbookGameModeBase, SpawnedActor), Z_Construct_UClass_AMyFirstActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUE4CookbookGameModeBase_Statics::NewProp_SpawnedActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4CookbookGameModeBase_Statics::NewProp_SpawnedActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUE4CookbookGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4CookbookGameModeBase_Statics::NewProp_SpawnedActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE4CookbookGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE4CookbookGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUE4CookbookGameModeBase_Statics::ClassParams = {
		&AUE4CookbookGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUE4CookbookGameModeBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AUE4CookbookGameModeBase_Statics::PropPointers),
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AUE4CookbookGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUE4CookbookGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE4CookbookGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUE4CookbookGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUE4CookbookGameModeBase, 3738867199);
	template<> ACTORSANDCOMPONENTS_API UClass* StaticClass<AUE4CookbookGameModeBase>()
	{
		return AUE4CookbookGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUE4CookbookGameModeBase(Z_Construct_UClass_AUE4CookbookGameModeBase, &AUE4CookbookGameModeBase::StaticClass, TEXT("/Script/ActorsAndComponents"), TEXT("AUE4CookbookGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE4CookbookGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
