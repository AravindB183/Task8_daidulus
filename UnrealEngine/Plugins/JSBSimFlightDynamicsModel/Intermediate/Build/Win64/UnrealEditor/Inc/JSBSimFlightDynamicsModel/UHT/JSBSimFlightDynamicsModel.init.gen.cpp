// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJSBSimFlightDynamicsModel_init() {}
	JSBSIMFLIGHTDYNAMICSMODEL_API UFunction* Z_Construct_UDelegateFunction_JSBSimFlightDynamicsModel_DelegateAircraftCrashed__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_JSBSimFlightDynamicsModel;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel()
	{
		if (!Z_Registration_Info_UPackage__Script_JSBSimFlightDynamicsModel.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_JSBSimFlightDynamicsModel_DelegateAircraftCrashed__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/JSBSimFlightDynamicsModel",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD144BF03,
				0xA0C1775C,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_JSBSimFlightDynamicsModel.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_JSBSimFlightDynamicsModel.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_JSBSimFlightDynamicsModel(Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel, TEXT("/Script/JSBSimFlightDynamicsModel"), Z_Registration_Info_UPackage__Script_JSBSimFlightDynamicsModel, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD144BF03, 0xA0C1775C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
