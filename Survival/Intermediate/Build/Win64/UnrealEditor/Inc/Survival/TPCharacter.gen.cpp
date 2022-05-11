// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival/TPCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPCharacter() {}
// Cross Module References
	SURVIVAL_API UClass* Z_Construct_UClass_ATPCharacter_NoRegister();
	SURVIVAL_API UClass* Z_Construct_UClass_ATPCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Survival();
// End Cross Module References
	void ATPCharacter::StaticRegisterNativesATPCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPCharacter);
	UClass* Z_Construct_UClass_ATPCharacter_NoRegister()
	{
		return ATPCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATPCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bisDead_MetaData[];
#endif
		static void NewProp_bisDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bisDead;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TPCharacter.h" },
		{ "ModuleRelativePath", "TPCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPCharacter_Statics::NewProp_bisDead_MetaData[] = {
		{ "Category", "TPCharacter" },
		{ "ModuleRelativePath", "TPCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ATPCharacter_Statics::NewProp_bisDead_SetBit(void* Obj)
	{
		((ATPCharacter*)Obj)->bisDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATPCharacter_Statics::NewProp_bisDead = { "bisDead", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATPCharacter), &Z_Construct_UClass_ATPCharacter_Statics::NewProp_bisDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATPCharacter_Statics::NewProp_bisDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPCharacter_Statics::NewProp_bisDead_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATPCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPCharacter_Statics::NewProp_bisDead,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPCharacter_Statics::ClassParams = {
		&ATPCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATPCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATPCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATPCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATPCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATPCharacter()
	{
		if (!Z_Registration_Info_UClass_ATPCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPCharacter.OuterSingleton, Z_Construct_UClass_ATPCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATPCharacter.OuterSingleton;
	}
	template<> SURVIVAL_API UClass* StaticClass<ATPCharacter>()
	{
		return ATPCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPCharacter);
	struct Z_CompiledInDeferFile_FID_Survival_Source_Survival_TPCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Survival_Source_Survival_TPCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATPCharacter, ATPCharacter::StaticClass, TEXT("ATPCharacter"), &Z_Registration_Info_UClass_ATPCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPCharacter), 2979960094U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Survival_Source_Survival_TPCharacter_h_2744543686(TEXT("/Script/Survival"),
		Z_CompiledInDeferFile_FID_Survival_Source_Survival_TPCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Survival_Source_Survival_TPCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
