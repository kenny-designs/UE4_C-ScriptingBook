// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorsAndComponents/RandomMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomMovementComponent() {}
// Cross Module References
	ACTORSANDCOMPONENTS_API UClass* Z_Construct_UClass_URandomMovementComponent_NoRegister();
	ACTORSANDCOMPONENTS_API UClass* Z_Construct_UClass_URandomMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ActorsAndComponents();
// End Cross Module References
	void URandomMovementComponent::StaticRegisterNativesURandomMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_URandomMovementComponent_NoRegister()
	{
		return URandomMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_URandomMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URandomMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ActorsAndComponents,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URandomMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RandomMovementComponent.h" },
		{ "ModuleRelativePath", "RandomMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URandomMovementComponent_Statics::NewProp_MovementRadius_MetaData[] = {
		{ "ModuleRelativePath", "RandomMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URandomMovementComponent_Statics::NewProp_MovementRadius = { "MovementRadius", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URandomMovementComponent, MovementRadius), METADATA_PARAMS(Z_Construct_UClass_URandomMovementComponent_Statics::NewProp_MovementRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_URandomMovementComponent_Statics::NewProp_MovementRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URandomMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URandomMovementComponent_Statics::NewProp_MovementRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URandomMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URandomMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URandomMovementComponent_Statics::ClassParams = {
		&URandomMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URandomMovementComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_URandomMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URandomMovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URandomMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URandomMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URandomMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URandomMovementComponent, 120496827);
	template<> ACTORSANDCOMPONENTS_API UClass* StaticClass<URandomMovementComponent>()
	{
		return URandomMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URandomMovementComponent(Z_Construct_UClass_URandomMovementComponent, &URandomMovementComponent::StaticClass, TEXT("/Script/ActorsAndComponents"), TEXT("URandomMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URandomMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
