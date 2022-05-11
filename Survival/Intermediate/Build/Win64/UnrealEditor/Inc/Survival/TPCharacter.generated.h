// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SURVIVAL_TPCharacter_generated_h
#error "TPCharacter.generated.h already included, missing '#pragma once' in TPCharacter.h"
#endif
#define SURVIVAL_TPCharacter_generated_h

#define FID_Survival_Source_Survival_TPCharacter_h_12_SPARSE_DATA
#define FID_Survival_Source_Survival_TPCharacter_h_12_RPC_WRAPPERS
#define FID_Survival_Source_Survival_TPCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Survival_Source_Survival_TPCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPCharacter(); \
	friend struct Z_Construct_UClass_ATPCharacter_Statics; \
public: \
	DECLARE_CLASS(ATPCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Survival"), NO_API) \
	DECLARE_SERIALIZER(ATPCharacter)


#define FID_Survival_Source_Survival_TPCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATPCharacter(); \
	friend struct Z_Construct_UClass_ATPCharacter_Statics; \
public: \
	DECLARE_CLASS(ATPCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Survival"), NO_API) \
	DECLARE_SERIALIZER(ATPCharacter)


#define FID_Survival_Source_Survival_TPCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATPCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATPCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPCharacter(ATPCharacter&&); \
	NO_API ATPCharacter(const ATPCharacter&); \
public:


#define FID_Survival_Source_Survival_TPCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPCharacter(ATPCharacter&&); \
	NO_API ATPCharacter(const ATPCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATPCharacter)


#define FID_Survival_Source_Survival_TPCharacter_h_9_PROLOG
#define FID_Survival_Source_Survival_TPCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Survival_Source_Survival_TPCharacter_h_12_SPARSE_DATA \
	FID_Survival_Source_Survival_TPCharacter_h_12_RPC_WRAPPERS \
	FID_Survival_Source_Survival_TPCharacter_h_12_INCLASS \
	FID_Survival_Source_Survival_TPCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Survival_Source_Survival_TPCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Survival_Source_Survival_TPCharacter_h_12_SPARSE_DATA \
	FID_Survival_Source_Survival_TPCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Survival_Source_Survival_TPCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_Survival_Source_Survival_TPCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVAL_API UClass* StaticClass<class ATPCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Survival_Source_Survival_TPCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
