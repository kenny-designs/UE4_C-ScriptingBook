// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTORSANDCOMPONENTS_ActorSpawnerComponent_generated_h
#error "ActorSpawnerComponent.generated.h already included, missing '#pragma once' in ActorSpawnerComponent.h"
#endif
#define ACTORSANDCOMPONENTS_ActorSpawnerComponent_generated_h

#define ActorsAndComponents_Source_ActorsAndComponents_ActorSpawnerComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Spawn(); \
		P_NATIVE_END; \
	}


#define ActorsAndComponents_Source_ActorsAndComponents_ActorSpawnerComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Spawn(); \
		P_NATIVE_END; \
	}


#define ActorsAndComponents_Source_ActorsAndComponents_ActorSpawnerComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorSpawnerComponent(); \
	friend struct Z_Construct_UClass_UActorSpawnerComponent_Statics; \
public: \
	DECLARE_CLASS(UActorSpawnerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActorsAndComponents"), NO_API) \
	DECLARE_SERIALIZER(UActorSpawnerComponent)


#define ActorsAndComponents_Source_ActorsAndComponents_ActorSpawnerComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUActorSpawnerComponent(); \
	friend struct Z_Construct_UClass_UActorSpawnerComponent_Statics; \
public: \
	DECLARE_CLASS(UActorSpawnerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActorsAndComponents"), NO_API) \
	DECLARE_SERIALIZER(UActorSpawnerComponent)


#define ActorsAndComponents_Source_ActorsAndComponents_ActorSpawnerComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorSpawnerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorSpawnerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorSpawnerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorSpawnerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorSpawnerComponent(UActorSpawnerComponent&&); \
	NO_API UActorSpawnerComponent(const UActorSpawnerComponent&); \
public:


#define ActorsAndComponents_Source_ActorsAndComponents_ActorSpawnerComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorSpawnerComponent(UActorSpawnerComponent&&); \
	NO_API UActorSpawnerComponent(const UActorSpawnerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorSpawnerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorSpawnerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorSpawnerComponent)


#define ActorsAndComponents_Source_ActorsAndComponents_ActorSpawnerComponent_h_13_PRIVATE_PROPERTY_OFFSET
#define ActorsAndComponents_Source_ActorsAndComponents_ActorSpawnerComponent_h_10_PROLOG
#define ActorsAndComponents_Source_ActorsAndComponents_ActorSpawnerComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActorsAndComponents_Source_ActorsAndComponents_ActorSpawnerComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	ActorsAndComponents_Source_ActorsAndComponents_ActorSpawnerComponent_h_13_RPC_WRAPPERS \
	ActorsAndComponents_Source_ActorsAndComponents_ActorSpawnerComponent_h_13_INCLASS \
	ActorsAndComponents_Source_ActorsAndComponents_ActorSpawnerComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActorsAndComponents_Source_ActorsAndComponents_ActorSpawnerComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActorsAndComponents_Source_ActorsAndComponents_ActorSpawnerComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	ActorsAndComponents_Source_ActorsAndComponents_ActorSpawnerComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ActorsAndComponents_Source_ActorsAndComponents_ActorSpawnerComponent_h_13_INCLASS_NO_PURE_DECLS \
	ActorsAndComponents_Source_ActorsAndComponents_ActorSpawnerComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTORSANDCOMPONENTS_API UClass* StaticClass<class UActorSpawnerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActorsAndComponents_Source_ActorsAndComponents_ActorSpawnerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
