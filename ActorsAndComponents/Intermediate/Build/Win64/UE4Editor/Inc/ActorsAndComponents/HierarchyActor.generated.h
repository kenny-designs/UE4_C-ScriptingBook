// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTORSANDCOMPONENTS_HierarchyActor_generated_h
#error "HierarchyActor.generated.h already included, missing '#pragma once' in HierarchyActor.h"
#endif
#define ACTORSANDCOMPONENTS_HierarchyActor_generated_h

#define ActorsAndComponents_Source_ActorsAndComponents_HierarchyActor_h_12_RPC_WRAPPERS
#define ActorsAndComponents_Source_ActorsAndComponents_HierarchyActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ActorsAndComponents_Source_ActorsAndComponents_HierarchyActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHierarchyActor(); \
	friend struct Z_Construct_UClass_AHierarchyActor_Statics; \
public: \
	DECLARE_CLASS(AHierarchyActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorsAndComponents"), NO_API) \
	DECLARE_SERIALIZER(AHierarchyActor)


#define ActorsAndComponents_Source_ActorsAndComponents_HierarchyActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHierarchyActor(); \
	friend struct Z_Construct_UClass_AHierarchyActor_Statics; \
public: \
	DECLARE_CLASS(AHierarchyActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorsAndComponents"), NO_API) \
	DECLARE_SERIALIZER(AHierarchyActor)


#define ActorsAndComponents_Source_ActorsAndComponents_HierarchyActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHierarchyActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHierarchyActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHierarchyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHierarchyActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHierarchyActor(AHierarchyActor&&); \
	NO_API AHierarchyActor(const AHierarchyActor&); \
public:


#define ActorsAndComponents_Source_ActorsAndComponents_HierarchyActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHierarchyActor(AHierarchyActor&&); \
	NO_API AHierarchyActor(const AHierarchyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHierarchyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHierarchyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHierarchyActor)


#define ActorsAndComponents_Source_ActorsAndComponents_HierarchyActor_h_12_PRIVATE_PROPERTY_OFFSET
#define ActorsAndComponents_Source_ActorsAndComponents_HierarchyActor_h_9_PROLOG
#define ActorsAndComponents_Source_ActorsAndComponents_HierarchyActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActorsAndComponents_Source_ActorsAndComponents_HierarchyActor_h_12_PRIVATE_PROPERTY_OFFSET \
	ActorsAndComponents_Source_ActorsAndComponents_HierarchyActor_h_12_RPC_WRAPPERS \
	ActorsAndComponents_Source_ActorsAndComponents_HierarchyActor_h_12_INCLASS \
	ActorsAndComponents_Source_ActorsAndComponents_HierarchyActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActorsAndComponents_Source_ActorsAndComponents_HierarchyActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActorsAndComponents_Source_ActorsAndComponents_HierarchyActor_h_12_PRIVATE_PROPERTY_OFFSET \
	ActorsAndComponents_Source_ActorsAndComponents_HierarchyActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ActorsAndComponents_Source_ActorsAndComponents_HierarchyActor_h_12_INCLASS_NO_PURE_DECLS \
	ActorsAndComponents_Source_ActorsAndComponents_HierarchyActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTORSANDCOMPONENTS_API UClass* StaticClass<class AHierarchyActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActorsAndComponents_Source_ActorsAndComponents_HierarchyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
