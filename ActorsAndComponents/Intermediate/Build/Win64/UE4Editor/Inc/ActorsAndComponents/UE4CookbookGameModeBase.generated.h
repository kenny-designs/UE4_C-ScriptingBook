// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTORSANDCOMPONENTS_UE4CookbookGameModeBase_generated_h
#error "UE4CookbookGameModeBase.generated.h already included, missing '#pragma once' in UE4CookbookGameModeBase.h"
#endif
#define ACTORSANDCOMPONENTS_UE4CookbookGameModeBase_generated_h

#define ActorsAndComponents_Source_ActorsAndComponents_UE4CookbookGameModeBase_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDestroyActorFunction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyActorFunction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execButtonClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ButtonClicked(); \
		P_NATIVE_END; \
	}


#define ActorsAndComponents_Source_ActorsAndComponents_UE4CookbookGameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDestroyActorFunction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyActorFunction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execButtonClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ButtonClicked(); \
		P_NATIVE_END; \
	}


#define ActorsAndComponents_Source_ActorsAndComponents_UE4CookbookGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUE4CookbookGameModeBase(); \
	friend struct Z_Construct_UClass_AUE4CookbookGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AUE4CookbookGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ActorsAndComponents"), NO_API) \
	DECLARE_SERIALIZER(AUE4CookbookGameModeBase)


#define ActorsAndComponents_Source_ActorsAndComponents_UE4CookbookGameModeBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAUE4CookbookGameModeBase(); \
	friend struct Z_Construct_UClass_AUE4CookbookGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AUE4CookbookGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ActorsAndComponents"), NO_API) \
	DECLARE_SERIALIZER(AUE4CookbookGameModeBase)


#define ActorsAndComponents_Source_ActorsAndComponents_UE4CookbookGameModeBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUE4CookbookGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUE4CookbookGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUE4CookbookGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUE4CookbookGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUE4CookbookGameModeBase(AUE4CookbookGameModeBase&&); \
	NO_API AUE4CookbookGameModeBase(const AUE4CookbookGameModeBase&); \
public:


#define ActorsAndComponents_Source_ActorsAndComponents_UE4CookbookGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUE4CookbookGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUE4CookbookGameModeBase(AUE4CookbookGameModeBase&&); \
	NO_API AUE4CookbookGameModeBase(const AUE4CookbookGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUE4CookbookGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUE4CookbookGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUE4CookbookGameModeBase)


#define ActorsAndComponents_Source_ActorsAndComponents_UE4CookbookGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET
#define ActorsAndComponents_Source_ActorsAndComponents_UE4CookbookGameModeBase_h_13_PROLOG
#define ActorsAndComponents_Source_ActorsAndComponents_UE4CookbookGameModeBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActorsAndComponents_Source_ActorsAndComponents_UE4CookbookGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	ActorsAndComponents_Source_ActorsAndComponents_UE4CookbookGameModeBase_h_16_RPC_WRAPPERS \
	ActorsAndComponents_Source_ActorsAndComponents_UE4CookbookGameModeBase_h_16_INCLASS \
	ActorsAndComponents_Source_ActorsAndComponents_UE4CookbookGameModeBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActorsAndComponents_Source_ActorsAndComponents_UE4CookbookGameModeBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActorsAndComponents_Source_ActorsAndComponents_UE4CookbookGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	ActorsAndComponents_Source_ActorsAndComponents_UE4CookbookGameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ActorsAndComponents_Source_ActorsAndComponents_UE4CookbookGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
	ActorsAndComponents_Source_ActorsAndComponents_UE4CookbookGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTORSANDCOMPONENTS_API UClass* StaticClass<class AUE4CookbookGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActorsAndComponents_Source_ActorsAndComponents_UE4CookbookGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
