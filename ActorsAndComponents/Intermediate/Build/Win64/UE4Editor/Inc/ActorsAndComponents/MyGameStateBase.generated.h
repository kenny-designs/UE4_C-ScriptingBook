// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTORSANDCOMPONENTS_MyGameStateBase_generated_h
#error "MyGameStateBase.generated.h already included, missing '#pragma once' in MyGameStateBase.h"
#endif
#define ACTORSANDCOMPONENTS_MyGameStateBase_generated_h

#define ActorsAndComponents_Source_ActorsAndComponents_MyGameStateBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetScore) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetScore(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScore) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewScore); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScore(Z_Param_NewScore); \
		P_NATIVE_END; \
	}


#define ActorsAndComponents_Source_ActorsAndComponents_MyGameStateBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetScore) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetScore(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScore) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewScore); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScore(Z_Param_NewScore); \
		P_NATIVE_END; \
	}


#define ActorsAndComponents_Source_ActorsAndComponents_MyGameStateBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGameStateBase(); \
	friend struct Z_Construct_UClass_AMyGameStateBase_Statics; \
public: \
	DECLARE_CLASS(AMyGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorsAndComponents"), NO_API) \
	DECLARE_SERIALIZER(AMyGameStateBase)


#define ActorsAndComponents_Source_ActorsAndComponents_MyGameStateBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyGameStateBase(); \
	friend struct Z_Construct_UClass_AMyGameStateBase_Statics; \
public: \
	DECLARE_CLASS(AMyGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorsAndComponents"), NO_API) \
	DECLARE_SERIALIZER(AMyGameStateBase)


#define ActorsAndComponents_Source_ActorsAndComponents_MyGameStateBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameStateBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameStateBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameStateBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameStateBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameStateBase(AMyGameStateBase&&); \
	NO_API AMyGameStateBase(const AMyGameStateBase&); \
public:


#define ActorsAndComponents_Source_ActorsAndComponents_MyGameStateBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameStateBase(AMyGameStateBase&&); \
	NO_API AMyGameStateBase(const AMyGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameStateBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameStateBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyGameStateBase)


#define ActorsAndComponents_Source_ActorsAndComponents_MyGameStateBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentScore() { return STRUCT_OFFSET(AMyGameStateBase, CurrentScore); }


#define ActorsAndComponents_Source_ActorsAndComponents_MyGameStateBase_h_12_PROLOG
#define ActorsAndComponents_Source_ActorsAndComponents_MyGameStateBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActorsAndComponents_Source_ActorsAndComponents_MyGameStateBase_h_15_PRIVATE_PROPERTY_OFFSET \
	ActorsAndComponents_Source_ActorsAndComponents_MyGameStateBase_h_15_RPC_WRAPPERS \
	ActorsAndComponents_Source_ActorsAndComponents_MyGameStateBase_h_15_INCLASS \
	ActorsAndComponents_Source_ActorsAndComponents_MyGameStateBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActorsAndComponents_Source_ActorsAndComponents_MyGameStateBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActorsAndComponents_Source_ActorsAndComponents_MyGameStateBase_h_15_PRIVATE_PROPERTY_OFFSET \
	ActorsAndComponents_Source_ActorsAndComponents_MyGameStateBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ActorsAndComponents_Source_ActorsAndComponents_MyGameStateBase_h_15_INCLASS_NO_PURE_DECLS \
	ActorsAndComponents_Source_ActorsAndComponents_MyGameStateBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTORSANDCOMPONENTS_API UClass* StaticClass<class AMyGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActorsAndComponents_Source_ActorsAndComponents_MyGameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
