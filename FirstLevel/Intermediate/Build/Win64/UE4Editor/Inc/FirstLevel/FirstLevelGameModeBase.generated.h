// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTLEVEL_FirstLevelGameModeBase_generated_h
#error "FirstLevelGameModeBase.generated.h already included, missing '#pragma once' in FirstLevelGameModeBase.h"
#endif
#define FIRSTLEVEL_FirstLevelGameModeBase_generated_h

#define FirstLevel_Source_FirstLevel_FirstLevelGameModeBase_h_15_RPC_WRAPPERS
#define FirstLevel_Source_FirstLevel_FirstLevelGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FirstLevel_Source_FirstLevel_FirstLevelGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstLevelGameModeBase(); \
	friend struct Z_Construct_UClass_AFirstLevelGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AFirstLevelGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FirstLevel"), NO_API) \
	DECLARE_SERIALIZER(AFirstLevelGameModeBase)


#define FirstLevel_Source_FirstLevel_FirstLevelGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFirstLevelGameModeBase(); \
	friend struct Z_Construct_UClass_AFirstLevelGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AFirstLevelGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FirstLevel"), NO_API) \
	DECLARE_SERIALIZER(AFirstLevelGameModeBase)


#define FirstLevel_Source_FirstLevel_FirstLevelGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstLevelGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstLevelGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstLevelGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstLevelGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstLevelGameModeBase(AFirstLevelGameModeBase&&); \
	NO_API AFirstLevelGameModeBase(const AFirstLevelGameModeBase&); \
public:


#define FirstLevel_Source_FirstLevel_FirstLevelGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstLevelGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstLevelGameModeBase(AFirstLevelGameModeBase&&); \
	NO_API AFirstLevelGameModeBase(const AFirstLevelGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstLevelGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstLevelGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstLevelGameModeBase)


#define FirstLevel_Source_FirstLevel_FirstLevelGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define FirstLevel_Source_FirstLevel_FirstLevelGameModeBase_h_12_PROLOG
#define FirstLevel_Source_FirstLevel_FirstLevelGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstLevel_Source_FirstLevel_FirstLevelGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstLevel_Source_FirstLevel_FirstLevelGameModeBase_h_15_RPC_WRAPPERS \
	FirstLevel_Source_FirstLevel_FirstLevelGameModeBase_h_15_INCLASS \
	FirstLevel_Source_FirstLevel_FirstLevelGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstLevel_Source_FirstLevel_FirstLevelGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstLevel_Source_FirstLevel_FirstLevelGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstLevel_Source_FirstLevel_FirstLevelGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstLevel_Source_FirstLevel_FirstLevelGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FirstLevel_Source_FirstLevel_FirstLevelGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTLEVEL_API UClass* StaticClass<class AFirstLevelGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstLevel_Source_FirstLevel_FirstLevelGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
