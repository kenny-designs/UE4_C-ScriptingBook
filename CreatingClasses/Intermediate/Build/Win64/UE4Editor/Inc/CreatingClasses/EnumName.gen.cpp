// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CreatingClasses/EnumName.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnumName() {}
// Cross Module References
	CREATINGCLASSES_API UEnum* Z_Construct_UEnum_CreatingClasses_Status();
	UPackage* Z_Construct_UPackage__Script_CreatingClasses();
// End Cross Module References
	static UEnum* Status_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CreatingClasses_Status, Z_Construct_UPackage__Script_CreatingClasses(), TEXT("Status"));
		}
		return Singleton;
	}
	template<> CREATINGCLASSES_API UEnum* StaticEnum<Status>()
	{
		return Status_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_Status(Status_StaticEnum, TEXT("/Script/CreatingClasses"), TEXT("Status"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CreatingClasses_Status_Hash() { return 536005659U; }
	UEnum* Z_Construct_UEnum_CreatingClasses_Status()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CreatingClasses();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Status"), 0, Get_Z_Construct_UEnum_CreatingClasses_Status_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Stopped", (int64)Stopped },
				{ "Moving", (int64)Moving },
				{ "Attacking", (int64)Attacking },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attacking.DisplayName", "Attacking" },
				{ "Attacking.Name", "Attacking" },
				{ "ModuleRelativePath", "EnumName.h" },
				{ "Moving.DisplayName", "Moving" },
				{ "Moving.Name", "Moving" },
				{ "Stopped.DisplayName", "Stopped" },
				{ "Stopped.Name", "Stopped" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CreatingClasses,
				nullptr,
				"Status",
				"Status",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
