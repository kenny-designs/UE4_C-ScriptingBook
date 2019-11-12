// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CreatingClasses/ColoredTexture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColoredTexture() {}
// Cross Module References
	CREATINGCLASSES_API UScriptStruct* Z_Construct_UScriptStruct_FColoredTexture();
	UPackage* Z_Construct_UPackage__Script_CreatingClasses();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
// End Cross Module References
class UScriptStruct* FColoredTexture::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATINGCLASSES_API uint32 Get_Z_Construct_UScriptStruct_FColoredTexture_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FColoredTexture, Z_Construct_UPackage__Script_CreatingClasses(), TEXT("ColoredTexture"), sizeof(FColoredTexture), Get_Z_Construct_UScriptStruct_FColoredTexture_Hash());
	}
	return Singleton;
}
template<> CREATINGCLASSES_API UScriptStruct* StaticStruct<FColoredTexture>()
{
	return FColoredTexture::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FColoredTexture(FColoredTexture::StaticStruct, TEXT("/Script/CreatingClasses"), TEXT("ColoredTexture"), false, nullptr, nullptr);
static struct FScriptStruct_CreatingClasses_StaticRegisterNativesFColoredTexture
{
	FScriptStruct_CreatingClasses_StaticRegisterNativesFColoredTexture()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ColoredTexture")),new UScriptStruct::TCppStructOps<FColoredTexture>);
	}
} ScriptStruct_CreatingClasses_StaticRegisterNativesFColoredTexture;
	struct Z_Construct_UScriptStruct_FColoredTexture_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColoredTexture_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ColoredTexture.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FColoredTexture_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColoredTexture>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColoredTexture_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "ColoredTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColoredTexture_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColoredTexture, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FColoredTexture_Statics::NewProp_Color_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColoredTexture_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColoredTexture_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "ColoredTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FColoredTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColoredTexture, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FColoredTexture_Statics::NewProp_Texture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColoredTexture_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColoredTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColoredTexture_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColoredTexture_Statics::NewProp_Texture,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColoredTexture_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CreatingClasses,
		nullptr,
		&NewStructOps,
		"ColoredTexture",
		sizeof(FColoredTexture),
		alignof(FColoredTexture),
		Z_Construct_UScriptStruct_FColoredTexture_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FColoredTexture_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FColoredTexture_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FColoredTexture_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FColoredTexture()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FColoredTexture_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CreatingClasses();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ColoredTexture"), sizeof(FColoredTexture), Get_Z_Construct_UScriptStruct_FColoredTexture_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FColoredTexture_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FColoredTexture_Hash() { return 3134022324U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
