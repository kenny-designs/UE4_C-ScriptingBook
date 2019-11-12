// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CREATINGCLASSES_UserProfile_generated_h
#error "UserProfile.generated.h already included, missing '#pragma once' in UserProfile.h"
#endif
#define CREATINGCLASSES_UserProfile_generated_h

#define CreatingClasses_Source_CreatingClasses_UserProfile_h_18_RPC_WRAPPERS
#define CreatingClasses_Source_CreatingClasses_UserProfile_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define CreatingClasses_Source_CreatingClasses_UserProfile_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserProfile(); \
	friend struct Z_Construct_UClass_UUserProfile_Statics; \
public: \
	DECLARE_CLASS(UUserProfile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CreatingClasses"), NO_API) \
	DECLARE_SERIALIZER(UUserProfile)


#define CreatingClasses_Source_CreatingClasses_UserProfile_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUUserProfile(); \
	friend struct Z_Construct_UClass_UUserProfile_Statics; \
public: \
	DECLARE_CLASS(UUserProfile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CreatingClasses"), NO_API) \
	DECLARE_SERIALIZER(UUserProfile)


#define CreatingClasses_Source_CreatingClasses_UserProfile_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserProfile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserProfile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserProfile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserProfile(UUserProfile&&); \
	NO_API UUserProfile(const UUserProfile&); \
public:


#define CreatingClasses_Source_CreatingClasses_UserProfile_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserProfile(UUserProfile&&); \
	NO_API UUserProfile(const UUserProfile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserProfile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserProfile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserProfile)


#define CreatingClasses_Source_CreatingClasses_UserProfile_h_18_PRIVATE_PROPERTY_OFFSET
#define CreatingClasses_Source_CreatingClasses_UserProfile_h_15_PROLOG
#define CreatingClasses_Source_CreatingClasses_UserProfile_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CreatingClasses_Source_CreatingClasses_UserProfile_h_18_PRIVATE_PROPERTY_OFFSET \
	CreatingClasses_Source_CreatingClasses_UserProfile_h_18_RPC_WRAPPERS \
	CreatingClasses_Source_CreatingClasses_UserProfile_h_18_INCLASS \
	CreatingClasses_Source_CreatingClasses_UserProfile_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CreatingClasses_Source_CreatingClasses_UserProfile_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CreatingClasses_Source_CreatingClasses_UserProfile_h_18_PRIVATE_PROPERTY_OFFSET \
	CreatingClasses_Source_CreatingClasses_UserProfile_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	CreatingClasses_Source_CreatingClasses_UserProfile_h_18_INCLASS_NO_PURE_DECLS \
	CreatingClasses_Source_CreatingClasses_UserProfile_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CREATINGCLASSES_API UClass* StaticClass<class UUserProfile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CreatingClasses_Source_CreatingClasses_UserProfile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
