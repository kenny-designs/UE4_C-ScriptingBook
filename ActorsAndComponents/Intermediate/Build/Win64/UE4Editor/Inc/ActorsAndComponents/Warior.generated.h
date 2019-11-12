// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTORSANDCOMPONENTS_Warior_generated_h
#error "Warior.generated.h already included, missing '#pragma once' in Warior.h"
#endif
#define ACTORSANDCOMPONENTS_Warior_generated_h

#define ActorsAndComponents_Source_ActorsAndComponents_Warior_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->ToString(); \
		P_NATIVE_END; \
	}


#define ActorsAndComponents_Source_ActorsAndComponents_Warior_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->ToString(); \
		P_NATIVE_END; \
	}


#define ActorsAndComponents_Source_ActorsAndComponents_Warior_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWarior(); \
	friend struct Z_Construct_UClass_AWarior_Statics; \
public: \
	DECLARE_CLASS(AWarior, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorsAndComponents"), NO_API) \
	DECLARE_SERIALIZER(AWarior)


#define ActorsAndComponents_Source_ActorsAndComponents_Warior_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAWarior(); \
	friend struct Z_Construct_UClass_AWarior_Statics; \
public: \
	DECLARE_CLASS(AWarior, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorsAndComponents"), NO_API) \
	DECLARE_SERIALIZER(AWarior)


#define ActorsAndComponents_Source_ActorsAndComponents_Warior_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWarior(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWarior) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarior); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarior); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWarior(AWarior&&); \
	NO_API AWarior(const AWarior&); \
public:


#define ActorsAndComponents_Source_ActorsAndComponents_Warior_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWarior(AWarior&&); \
	NO_API AWarior(const AWarior&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarior); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarior); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWarior)


#define ActorsAndComponents_Source_ActorsAndComponents_Warior_h_12_PRIVATE_PROPERTY_OFFSET
#define ActorsAndComponents_Source_ActorsAndComponents_Warior_h_9_PROLOG
#define ActorsAndComponents_Source_ActorsAndComponents_Warior_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActorsAndComponents_Source_ActorsAndComponents_Warior_h_12_PRIVATE_PROPERTY_OFFSET \
	ActorsAndComponents_Source_ActorsAndComponents_Warior_h_12_RPC_WRAPPERS \
	ActorsAndComponents_Source_ActorsAndComponents_Warior_h_12_INCLASS \
	ActorsAndComponents_Source_ActorsAndComponents_Warior_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActorsAndComponents_Source_ActorsAndComponents_Warior_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActorsAndComponents_Source_ActorsAndComponents_Warior_h_12_PRIVATE_PROPERTY_OFFSET \
	ActorsAndComponents_Source_ActorsAndComponents_Warior_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ActorsAndComponents_Source_ActorsAndComponents_Warior_h_12_INCLASS_NO_PURE_DECLS \
	ActorsAndComponents_Source_ActorsAndComponents_Warior_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTORSANDCOMPONENTS_API UClass* StaticClass<class AWarior>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActorsAndComponents_Source_ActorsAndComponents_Warior_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
