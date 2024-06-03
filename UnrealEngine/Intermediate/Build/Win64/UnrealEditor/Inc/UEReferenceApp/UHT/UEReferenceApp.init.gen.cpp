// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUEReferenceApp_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UEReferenceApp;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UEReferenceApp()
	{
		if (!Z_Registration_Info_UPackage__Script_UEReferenceApp.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UEReferenceApp",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x22DDA586,
				0xA3EDCF31,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UEReferenceApp.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UEReferenceApp.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UEReferenceApp(Z_Construct_UPackage__Script_UEReferenceApp, TEXT("/Script/UEReferenceApp"), Z_Registration_Info_UPackage__Script_UEReferenceApp, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x22DDA586, 0xA3EDCF31));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
