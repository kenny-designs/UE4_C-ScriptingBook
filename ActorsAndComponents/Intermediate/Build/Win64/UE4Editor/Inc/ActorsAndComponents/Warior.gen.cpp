// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorsAndComponents/Warior.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarior() {}
// Cross Module References
	ACTORSANDCOMPONENTS_API UClass* Z_Construct_UClass_AWarior_NoRegister();
	ACTORSANDCOMPONENTS_API UClass* Z_Construct_UClass_AWarior();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ActorsAndComponents();
	ACTORSANDCOMPONENTS_API UFunction* Z_Construct_UFunction_AWarior_ToString();
// End Cross Module References
	void AWarior::StaticRegisterNativesAWarior()
	{
		UClass* Class = AWarior::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToString", &AWarior::execToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWarior_ToString_Statics
	{
		struct Warior_eventToString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AWarior_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Warior_eventToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWarior_ToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarior_ToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWarior_ToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "Comment", "// Returns message containing the Name property\n" },
		{ "ModuleRelativePath", "Warior.h" },
		{ "ToolTip", "Returns message containing the Name property" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWarior_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWarior, nullptr, "ToString", nullptr, nullptr, sizeof(Warior_eventToString_Parms), Z_Construct_UFunction_AWarior_ToString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWarior_ToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWarior_ToString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWarior_ToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWarior_ToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWarior_ToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWarior_NoRegister()
	{
		return AWarior::StaticClass();
	}
	struct Z_Construct_UClass_AWarior_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWarior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ActorsAndComponents,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWarior_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWarior_ToString, "ToString" }, // 938519187
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWarior_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Warior.h" },
		{ "ModuleRelativePath", "Warior.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWarior_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "// Name of the Actor\n" },
		{ "ModuleRelativePath", "Warior.h" },
		{ "ToolTip", "Name of the Actor" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AWarior_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWarior, Name), METADATA_PARAMS(Z_Construct_UClass_AWarior_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWarior_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWarior_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarior_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWarior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarior>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWarior_Statics::ClassParams = {
		&AWarior::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWarior_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AWarior_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AWarior_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWarior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWarior()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWarior_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWarior, 1006034508);
	template<> ACTORSANDCOMPONENTS_API UClass* StaticClass<AWarior>()
	{
		return AWarior::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWarior(Z_Construct_UClass_AWarior, &AWarior::StaticClass, TEXT("/Script/ActorsAndComponents"), TEXT("AWarior"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWarior);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
