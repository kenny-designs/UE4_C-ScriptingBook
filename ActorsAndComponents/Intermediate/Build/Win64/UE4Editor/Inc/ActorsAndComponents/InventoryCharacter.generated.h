// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
class AInventoryActor;
#ifdef ACTORSANDCOMPONENTS_InventoryCharacter_generated_h
#error "InventoryCharacter.generated.h already included, missing '#pragma once' in InventoryCharacter.h"
#endif
#define ACTORSANDCOMPONENTS_InventoryCharacter_generated_h

#define ActorsAndComponents_Source_ActorsAndComponents_InventoryCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AxisValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_AxisValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_MyComp); \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_UBOOL(Z_Param_bSelfMoved); \
		P_GET_STRUCT(FVector,Z_Param_HitLocation); \
		P_GET_STRUCT(FVector,Z_Param_HitNormal); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyHit(Z_Param_MyComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_bSelfMoved,Z_Param_HitLocation,Z_Param_HitNormal,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeItem) \
	{ \
		P_GET_OBJECT(AInventoryActor,Z_Param_InventoryItem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeItem(Z_Param_InventoryItem); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DropItem(); \
		P_NATIVE_END; \
	}


#define ActorsAndComponents_Source_ActorsAndComponents_InventoryCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AxisValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_AxisValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_MyComp); \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_UBOOL(Z_Param_bSelfMoved); \
		P_GET_STRUCT(FVector,Z_Param_HitLocation); \
		P_GET_STRUCT(FVector,Z_Param_HitNormal); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyHit(Z_Param_MyComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_bSelfMoved,Z_Param_HitLocation,Z_Param_HitNormal,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeItem) \
	{ \
		P_GET_OBJECT(AInventoryActor,Z_Param_InventoryItem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeItem(Z_Param_InventoryItem); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DropItem(); \
		P_NATIVE_END; \
	}


#define ActorsAndComponents_Source_ActorsAndComponents_InventoryCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInventoryCharacter(); \
	friend struct Z_Construct_UClass_AInventoryCharacter_Statics; \
public: \
	DECLARE_CLASS(AInventoryCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorsAndComponents"), NO_API) \
	DECLARE_SERIALIZER(AInventoryCharacter)


#define ActorsAndComponents_Source_ActorsAndComponents_InventoryCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAInventoryCharacter(); \
	friend struct Z_Construct_UClass_AInventoryCharacter_Statics; \
public: \
	DECLARE_CLASS(AInventoryCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorsAndComponents"), NO_API) \
	DECLARE_SERIALIZER(AInventoryCharacter)


#define ActorsAndComponents_Source_ActorsAndComponents_InventoryCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInventoryCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInventoryCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInventoryCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInventoryCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInventoryCharacter(AInventoryCharacter&&); \
	NO_API AInventoryCharacter(const AInventoryCharacter&); \
public:


#define ActorsAndComponents_Source_ActorsAndComponents_InventoryCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInventoryCharacter(AInventoryCharacter&&); \
	NO_API AInventoryCharacter(const AInventoryCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInventoryCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInventoryCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInventoryCharacter)


#define ActorsAndComponents_Source_ActorsAndComponents_InventoryCharacter_h_14_PRIVATE_PROPERTY_OFFSET
#define ActorsAndComponents_Source_ActorsAndComponents_InventoryCharacter_h_11_PROLOG
#define ActorsAndComponents_Source_ActorsAndComponents_InventoryCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActorsAndComponents_Source_ActorsAndComponents_InventoryCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ActorsAndComponents_Source_ActorsAndComponents_InventoryCharacter_h_14_RPC_WRAPPERS \
	ActorsAndComponents_Source_ActorsAndComponents_InventoryCharacter_h_14_INCLASS \
	ActorsAndComponents_Source_ActorsAndComponents_InventoryCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActorsAndComponents_Source_ActorsAndComponents_InventoryCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActorsAndComponents_Source_ActorsAndComponents_InventoryCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ActorsAndComponents_Source_ActorsAndComponents_InventoryCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ActorsAndComponents_Source_ActorsAndComponents_InventoryCharacter_h_14_INCLASS_NO_PURE_DECLS \
	ActorsAndComponents_Source_ActorsAndComponents_InventoryCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTORSANDCOMPONENTS_API UClass* StaticClass<class AInventoryCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActorsAndComponents_Source_ActorsAndComponents_InventoryCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
