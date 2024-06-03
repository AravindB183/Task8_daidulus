// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEReferenceApp/UEReferenceAppGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUEReferenceAppGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UEREFERENCEAPP_API UClass* Z_Construct_UClass_AUEReferenceAppGameModeBase();
	UEREFERENCEAPP_API UClass* Z_Construct_UClass_AUEReferenceAppGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UEReferenceApp();
// End Cross Module References
	void AUEReferenceAppGameModeBase::StaticRegisterNativesAUEReferenceAppGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUEReferenceAppGameModeBase);
	UClass* Z_Construct_UClass_AUEReferenceAppGameModeBase_NoRegister()
	{
		return AUEReferenceAppGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUEReferenceAppGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUEReferenceAppGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UEReferenceApp,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUEReferenceAppGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUEReferenceAppGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UEReferenceAppGameModeBase.h" },
		{ "ModuleRelativePath", "UEReferenceAppGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUEReferenceAppGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUEReferenceAppGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUEReferenceAppGameModeBase_Statics::ClassParams = {
		&AUEReferenceAppGameModeBase::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUEReferenceAppGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AUEReferenceAppGameModeBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AUEReferenceAppGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUEReferenceAppGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUEReferenceAppGameModeBase.OuterSingleton, Z_Construct_UClass_AUEReferenceAppGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUEReferenceAppGameModeBase.OuterSingleton;
	}
	template<> UEREFERENCEAPP_API UClass* StaticClass<AUEReferenceAppGameModeBase>()
	{
		return AUEReferenceAppGameModeBase::StaticClass();
	}
	AUEReferenceAppGameModeBase::AUEReferenceAppGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUEReferenceAppGameModeBase);
	AUEReferenceAppGameModeBase::~AUEReferenceAppGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_Source_UEReferenceApp_UEReferenceAppGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_Source_UEReferenceApp_UEReferenceAppGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUEReferenceAppGameModeBase, AUEReferenceAppGameModeBase::StaticClass, TEXT("AUEReferenceAppGameModeBase"), &Z_Registration_Info_UClass_AUEReferenceAppGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUEReferenceAppGameModeBase), 831438308U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_Source_UEReferenceApp_UEReferenceAppGameModeBase_h_3859845044(TEXT("/Script/UEReferenceApp"),
		Z_CompiledInDeferFile_FID_UnrealEngine_Source_UEReferenceApp_UEReferenceAppGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_Source_UEReferenceApp_UEReferenceAppGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
