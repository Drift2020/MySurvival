// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival/SurvivalGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivalGameModeBase() {}
// Cross Module References
	SURVIVAL_API UClass* Z_Construct_UClass_ASurvivalGameModeBase_NoRegister();
	SURVIVAL_API UClass* Z_Construct_UClass_ASurvivalGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Survival();
// End Cross Module References
	void ASurvivalGameModeBase::StaticRegisterNativesASurvivalGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASurvivalGameModeBase);
	UClass* Z_Construct_UClass_ASurvivalGameModeBase_NoRegister()
	{
		return ASurvivalGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASurvivalGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASurvivalGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SurvivalGameModeBase.h" },
		{ "ModuleRelativePath", "SurvivalGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASurvivalGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvivalGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASurvivalGameModeBase_Statics::ClassParams = {
		&ASurvivalGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASurvivalGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ASurvivalGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASurvivalGameModeBase.OuterSingleton, Z_Construct_UClass_ASurvivalGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASurvivalGameModeBase.OuterSingleton;
	}
	template<> SURVIVAL_API UClass* StaticClass<ASurvivalGameModeBase>()
	{
		return ASurvivalGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvivalGameModeBase);
	struct Z_CompiledInDeferFile_FID_Survival_Source_Survival_SurvivalGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Survival_Source_Survival_SurvivalGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASurvivalGameModeBase, ASurvivalGameModeBase::StaticClass, TEXT("ASurvivalGameModeBase"), &Z_Registration_Info_UClass_ASurvivalGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASurvivalGameModeBase), 3179783413U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Survival_Source_Survival_SurvivalGameModeBase_h_2419194744(TEXT("/Script/Survival"),
		Z_CompiledInDeferFile_FID_Survival_Source_Survival_SurvivalGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Survival_Source_Survival_SurvivalGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
