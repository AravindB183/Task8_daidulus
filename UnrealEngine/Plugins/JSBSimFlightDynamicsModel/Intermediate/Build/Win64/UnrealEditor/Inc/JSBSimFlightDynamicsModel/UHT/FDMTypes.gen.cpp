// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JSBSimFlightDynamicsModel/Public/FDMTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFDMTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	JSBSIMFLIGHTDYNAMICSMODEL_API UEnum* Z_Construct_UEnum_JSBSimFlightDynamicsModel_EEngineType();
	JSBSIMFLIGHTDYNAMICSMODEL_API UEnum* Z_Construct_UEnum_JSBSimFlightDynamicsModel_EMagnetosMode();
	JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FAircraftState();
	JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FEngineCommand();
	JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FEngineState();
	JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FFlightControlCommands();
	JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FGear();
	JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FTank();
	UPackage* Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Tank;
class UScriptStruct* FTank::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Tank.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Tank.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTank, (UObject*)Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel(), TEXT("Tank"));
	}
	return Z_Registration_Info_UScriptStruct_Tank.OuterSingleton;
}
template<> JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* StaticStruct<FTank>()
{
	return FTank::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTank_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FuelDensityPoundsPerGallon_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_FuelDensityPoundsPerGallon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentGallons_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ContentGallons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapacityGallons_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_CapacityGallons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FillPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_FillPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureCelcius_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_TemperatureCelcius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTank_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTank_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTank>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTank_Statics::NewProp_FuelDensityPoundsPerGallon_MetaData[] = {
		{ "Category", "Tank" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Editable in Initial Conditions\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Editable in Initial Conditions" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FTank_Statics::NewProp_FuelDensityPoundsPerGallon = { "FuelDensityPoundsPerGallon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTank, FuelDensityPoundsPerGallon), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTank_Statics::NewProp_FuelDensityPoundsPerGallon_MetaData), Z_Construct_UScriptStruct_FTank_Statics::NewProp_FuelDensityPoundsPerGallon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTank_Statics::NewProp_ContentGallons_MetaData[] = {
		{ "Category", "Tank" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FTank_Statics::NewProp_ContentGallons = { "ContentGallons", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTank, ContentGallons), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTank_Statics::NewProp_ContentGallons_MetaData), Z_Construct_UScriptStruct_FTank_Statics::NewProp_ContentGallons_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTank_Statics::NewProp_CapacityGallons_MetaData[] = {
		{ "Category", "Tank" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Basic Properties\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic Properties" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FTank_Statics::NewProp_CapacityGallons = { "CapacityGallons", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTank, CapacityGallons), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTank_Statics::NewProp_CapacityGallons_MetaData), Z_Construct_UScriptStruct_FTank_Statics::NewProp_CapacityGallons_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTank_Statics::NewProp_FillPercentage_MetaData[] = {
		{ "Category", "Tank" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FTank_Statics::NewProp_FillPercentage = { "FillPercentage", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTank, FillPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTank_Statics::NewProp_FillPercentage_MetaData), Z_Construct_UScriptStruct_FTank_Statics::NewProp_FillPercentage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTank_Statics::NewProp_TemperatureCelcius_MetaData[] = {
		{ "Category", "Tank" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FTank_Statics::NewProp_TemperatureCelcius = { "TemperatureCelcius", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTank, TemperatureCelcius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTank_Statics::NewProp_TemperatureCelcius_MetaData), Z_Construct_UScriptStruct_FTank_Statics::NewProp_TemperatureCelcius_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTank_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTank_Statics::NewProp_FuelDensityPoundsPerGallon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTank_Statics::NewProp_ContentGallons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTank_Statics::NewProp_CapacityGallons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTank_Statics::NewProp_FillPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTank_Statics::NewProp_TemperatureCelcius,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTank_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel,
		nullptr,
		&NewStructOps,
		"Tank",
		Z_Construct_UScriptStruct_FTank_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTank_Statics::PropPointers),
		sizeof(FTank),
		alignof(FTank),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTank_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTank_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTank_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTank()
	{
		if (!Z_Registration_Info_UScriptStruct_Tank.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Tank.InnerSingleton, Z_Construct_UScriptStruct_FTank_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Tank.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Gear;
class UScriptStruct* FGear::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Gear.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Gear.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGear, (UObject*)Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel(), TEXT("Gear"));
	}
	return Z_Registration_Info_UScriptStruct_Gear.OuterSingleton;
}
template<> JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* StaticStruct<FGear>()
{
	return FGear::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGear_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedPosition_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_NormalizedPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsFrontBogey_MetaData[];
#endif
		static void NewProp_IsFrontBogey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFrontBogey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsRearBogey_MetaData[];
#endif
		static void NewProp_IsRearBogey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsRearBogey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsBogey_MetaData[];
#endif
		static void NewProp_IsBogey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsBogey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasWeightOnWheel_MetaData[];
#endif
		static void NewProp_HasWeightOnWheel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasWeightOnWheel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelRollLinearVelocityMetersPerSec_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_WheelRollLinearVelocityMetersPerSec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsUp_MetaData[];
#endif
		static void NewProp_IsUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsDown_MetaData[];
#endif
		static void NewProp_IsDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGear_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGear_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGear>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGear_Statics::NewProp_NormalizedPosition_MetaData[] = {
		{ "Category", "Gear" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * 1 = Down, 0 = up\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "1 = Down, 0 = up" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_NormalizedPosition = { "NormalizedPosition", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGear, NormalizedPosition), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGear_Statics::NewProp_NormalizedPosition_MetaData), Z_Construct_UScriptStruct_FGear_Statics::NewProp_NormalizedPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsFrontBogey_MetaData[] = {
		{ "Category", "Gear" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n    * Doesn't exist in JSBSim, but need to be set in Editor in case you want to do separate gear animations \n    */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Doesn't exist in JSBSim, but need to be set in Editor in case you want to do separate gear animations" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsFrontBogey_SetBit(void* Obj)
	{
		((FGear*)Obj)->IsFrontBogey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsFrontBogey = { "IsFrontBogey", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGear), &Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsFrontBogey_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsFrontBogey_MetaData), Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsFrontBogey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsRearBogey_MetaData[] = {
		{ "Category", "Gear" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n    * Doesn't exist in JSBSim, but need to be set in Editor in case you want to do separate gear animations\n    */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Doesn't exist in JSBSim, but need to be set in Editor in case you want to do separate gear animations" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsRearBogey_SetBit(void* Obj)
	{
		((FGear*)Obj)->IsRearBogey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsRearBogey = { "IsRearBogey", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGear), &Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsRearBogey_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsRearBogey_MetaData), Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsRearBogey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGear_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Gear" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Basic Properties from JSBSim - Read Only\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic Properties from JSBSim - Read Only" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGear, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGear_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FGear_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsBogey_MetaData[] = {
		{ "Category", "Gear" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsBogey_SetBit(void* Obj)
	{
		((FGear*)Obj)->IsBogey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsBogey = { "IsBogey", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGear), &Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsBogey_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsBogey_MetaData), Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsBogey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGear_Statics::NewProp_HasWeightOnWheel_MetaData[] = {
		{ "Category", "Gear" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGear_Statics::NewProp_HasWeightOnWheel_SetBit(void* Obj)
	{
		((FGear*)Obj)->HasWeightOnWheel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_HasWeightOnWheel = { "HasWeightOnWheel", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGear), &Z_Construct_UScriptStruct_FGear_Statics::NewProp_HasWeightOnWheel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGear_Statics::NewProp_HasWeightOnWheel_MetaData), Z_Construct_UScriptStruct_FGear_Statics::NewProp_HasWeightOnWheel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGear_Statics::NewProp_WheelRollLinearVelocityMetersPerSec_MetaData[] = {
		{ "Category", "Gear" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_WheelRollLinearVelocityMetersPerSec = { "WheelRollLinearVelocityMetersPerSec", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGear, WheelRollLinearVelocityMetersPerSec), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGear_Statics::NewProp_WheelRollLinearVelocityMetersPerSec_MetaData), Z_Construct_UScriptStruct_FGear_Statics::NewProp_WheelRollLinearVelocityMetersPerSec_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsUp_MetaData[] = {
		{ "Category", "Gear" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsUp_SetBit(void* Obj)
	{
		((FGear*)Obj)->IsUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsUp = { "IsUp", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGear), &Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsUp_MetaData), Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsUp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsDown_MetaData[] = {
		{ "Category", "Gear" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsDown_SetBit(void* Obj)
	{
		((FGear*)Obj)->IsDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsDown = { "IsDown", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGear), &Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsDown_MetaData), Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsDown_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGear_Statics::NewProp_RelativeLocation_MetaData[] = {
		{ "Category", "Gear" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_RelativeLocation = { "RelativeLocation", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGear, RelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGear_Statics::NewProp_RelativeLocation_MetaData), Z_Construct_UScriptStruct_FGear_Statics::NewProp_RelativeLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGear_Statics::NewProp_Force_MetaData[] = {
		{ "Category", "Gear" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGear, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGear_Statics::NewProp_Force_MetaData), Z_Construct_UScriptStruct_FGear_Statics::NewProp_Force_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGear_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_NormalizedPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsFrontBogey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsRearBogey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsBogey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_HasWeightOnWheel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_WheelRollLinearVelocityMetersPerSec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_RelativeLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_Force,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGear_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel,
		nullptr,
		&NewStructOps,
		"Gear",
		Z_Construct_UScriptStruct_FGear_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGear_Statics::PropPointers),
		sizeof(FGear),
		alignof(FGear),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGear_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGear_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGear_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGear()
	{
		if (!Z_Registration_Info_UScriptStruct_Gear.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Gear.InnerSingleton, Z_Construct_UScriptStruct_FGear_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Gear.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEngineType;
	static UEnum* EEngineType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEngineType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEngineType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_JSBSimFlightDynamicsModel_EEngineType, (UObject*)Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel(), TEXT("EEngineType"));
		}
		return Z_Registration_Info_UEnum_EEngineType.OuterSingleton;
	}
	template<> JSBSIMFLIGHTDYNAMICSMODEL_API UEnum* StaticEnum<EEngineType>()
	{
		return EEngineType_StaticEnum();
	}
	struct Z_Construct_UEnum_JSBSimFlightDynamicsModel_EEngineType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_JSBSimFlightDynamicsModel_EEngineType_Statics::Enumerators[] = {
		{ "EEngineType::Unknown", (int64)EEngineType::Unknown },
		{ "EEngineType::Rocket", (int64)EEngineType::Rocket },
		{ "EEngineType::Piston", (int64)EEngineType::Piston },
		{ "EEngineType::Turbine", (int64)EEngineType::Turbine },
		{ "EEngineType::Turboprop", (int64)EEngineType::Turboprop },
		{ "EEngineType::Electric", (int64)EEngineType::Electric },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_JSBSimFlightDynamicsModel_EEngineType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Electric.Name", "EEngineType::Electric" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
		{ "Piston.Name", "EEngineType::Piston" },
		{ "Rocket.Name", "EEngineType::Rocket" },
		{ "Turbine.Name", "EEngineType::Turbine" },
		{ "Turboprop.Name", "EEngineType::Turboprop" },
		{ "Unknown.Name", "EEngineType::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_JSBSimFlightDynamicsModel_EEngineType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel,
		nullptr,
		"EEngineType",
		"EEngineType",
		Z_Construct_UEnum_JSBSimFlightDynamicsModel_EEngineType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_JSBSimFlightDynamicsModel_EEngineType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_JSBSimFlightDynamicsModel_EEngineType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_JSBSimFlightDynamicsModel_EEngineType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_JSBSimFlightDynamicsModel_EEngineType()
	{
		if (!Z_Registration_Info_UEnum_EEngineType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEngineType.InnerSingleton, Z_Construct_UEnum_JSBSimFlightDynamicsModel_EEngineType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEngineType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMagnetosMode;
	static UEnum* EMagnetosMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMagnetosMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMagnetosMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_JSBSimFlightDynamicsModel_EMagnetosMode, (UObject*)Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel(), TEXT("EMagnetosMode"));
		}
		return Z_Registration_Info_UEnum_EMagnetosMode.OuterSingleton;
	}
	template<> JSBSIMFLIGHTDYNAMICSMODEL_API UEnum* StaticEnum<EMagnetosMode>()
	{
		return EMagnetosMode_StaticEnum();
	}
	struct Z_Construct_UEnum_JSBSimFlightDynamicsModel_EMagnetosMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_JSBSimFlightDynamicsModel_EMagnetosMode_Statics::Enumerators[] = {
		{ "EMagnetosMode::Off", (int64)EMagnetosMode::Off },
		{ "EMagnetosMode::Left", (int64)EMagnetosMode::Left },
		{ "EMagnetosMode::Right", (int64)EMagnetosMode::Right },
		{ "EMagnetosMode::Both", (int64)EMagnetosMode::Both },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_JSBSimFlightDynamicsModel_EMagnetosMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Both.Name", "EMagnetosMode::Both" },
		{ "Left.Name", "EMagnetosMode::Left" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
		{ "Off.Name", "EMagnetosMode::Off" },
		{ "Right.Name", "EMagnetosMode::Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_JSBSimFlightDynamicsModel_EMagnetosMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel,
		nullptr,
		"EMagnetosMode",
		"EMagnetosMode",
		Z_Construct_UEnum_JSBSimFlightDynamicsModel_EMagnetosMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_JSBSimFlightDynamicsModel_EMagnetosMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_JSBSimFlightDynamicsModel_EMagnetosMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_JSBSimFlightDynamicsModel_EMagnetosMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_JSBSimFlightDynamicsModel_EMagnetosMode()
	{
		if (!Z_Registration_Info_UEnum_EMagnetosMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMagnetosMode.InnerSingleton, Z_Construct_UEnum_JSBSimFlightDynamicsModel_EMagnetosMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMagnetosMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EngineCommand;
class UScriptStruct* FEngineCommand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EngineCommand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EngineCommand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineCommand, (UObject*)Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel(), TEXT("EngineCommand"));
	}
	return Z_Registration_Info_UScriptStruct_EngineCommand.OuterSingleton;
}
template<> JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* StaticStruct<FEngineCommand>()
{
	return FEngineCommand::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEngineCommand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Throttle_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Throttle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mixture_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Mixture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Starter_MetaData[];
#endif
		static void NewProp_Starter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Starter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Running_MetaData[];
#endif
		static void NewProp_Running_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Running;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropellerAdvance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_PropellerAdvance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropellerFeather_MetaData[];
#endif
		static void NewProp_PropellerFeather_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PropellerFeather;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Magnetos_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnetos_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Magnetos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Augmentation_MetaData[];
#endif
		static void NewProp_Augmentation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Augmentation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Injection_MetaData[];
#endif
		static void NewProp_Injection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Injection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ignition_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Ignition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reverse_MetaData[];
#endif
		static void NewProp_Reverse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Reverse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CutOff_MetaData[];
#endif
		static void NewProp_CutOff_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CutOff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratorPower_MetaData[];
#endif
		static void NewProp_GeneratorPower_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_GeneratorPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[];
#endif
		static void NewProp_Condition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Condition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineCommand_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEngineCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineCommand>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Throttle_MetaData[] = {
		{ "Category", "EngineCommand" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [0..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [0..1] value expected" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Throttle = { "Throttle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineCommand, Throttle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Throttle_MetaData), Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Throttle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Mixture_MetaData[] = {
		{ "Category", "EngineCommand" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [0..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [0..1] value expected" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Mixture = { "Mixture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineCommand, Mixture), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Mixture_MetaData), Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Mixture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Starter_MetaData[] = {
		{ "Category", "EngineCommand" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Starter_SetBit(void* Obj)
	{
		((FEngineCommand*)Obj)->Starter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Starter = { "Starter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineCommand), &Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Starter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Starter_MetaData), Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Starter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Running_MetaData[] = {
		{ "Category", "EngineCommand" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Running_SetBit(void* Obj)
	{
		((FEngineCommand*)Obj)->Running = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Running = { "Running", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineCommand), &Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Running_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Running_MetaData), Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Running_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_PropellerAdvance_MetaData[] = {
		{ "Category", "EngineCommand" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_PropellerAdvance = { "PropellerAdvance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineCommand, PropellerAdvance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_PropellerAdvance_MetaData), Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_PropellerAdvance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_PropellerFeather_MetaData[] = {
		{ "Category", "EngineCommand" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_PropellerFeather_SetBit(void* Obj)
	{
		((FEngineCommand*)Obj)->PropellerFeather = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_PropellerFeather = { "PropellerFeather", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineCommand), &Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_PropellerFeather_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_PropellerFeather_MetaData), Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_PropellerFeather_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Magnetos_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Magnetos_MetaData[] = {
		{ "Category", "EngineCommand" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Piston Engine Commands\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Piston Engine Commands" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Magnetos = { "Magnetos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineCommand, Magnetos), Z_Construct_UEnum_JSBSimFlightDynamicsModel_EMagnetosMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Magnetos_MetaData), Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Magnetos_MetaData) }; // 1501845971
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Augmentation_MetaData[] = {
		{ "Category", "EngineCommand" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turbine Engine Commands\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turbine Engine Commands" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Augmentation_SetBit(void* Obj)
	{
		((FEngineCommand*)Obj)->Augmentation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Augmentation = { "Augmentation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineCommand), &Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Augmentation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Augmentation_MetaData), Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Augmentation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Injection_MetaData[] = {
		{ "Category", "EngineCommand" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Injection_SetBit(void* Obj)
	{
		((FEngineCommand*)Obj)->Injection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Injection = { "Injection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineCommand), &Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Injection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Injection_MetaData), Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Injection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Ignition_MetaData[] = {
		{ "Category", "EngineCommand" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Ignition = { "Ignition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineCommand, Ignition), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Ignition_MetaData), Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Ignition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Reverse_MetaData[] = {
		{ "Category", "EngineCommand" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turbine & TurboPropeller Engine Commands\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turbine & TurboPropeller Engine Commands" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Reverse_SetBit(void* Obj)
	{
		((FEngineCommand*)Obj)->Reverse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Reverse = { "Reverse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineCommand), &Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Reverse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Reverse_MetaData), Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Reverse_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_CutOff_MetaData[] = {
		{ "Category", "EngineCommand" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_CutOff_SetBit(void* Obj)
	{
		((FEngineCommand*)Obj)->CutOff = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_CutOff = { "CutOff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineCommand), &Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_CutOff_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_CutOff_MetaData), Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_CutOff_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_GeneratorPower_MetaData[] = {
		{ "Category", "EngineCommand" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TurboPropeller Engine Commands\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TurboPropeller Engine Commands" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_GeneratorPower_SetBit(void* Obj)
	{
		((FEngineCommand*)Obj)->GeneratorPower = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_GeneratorPower = { "GeneratorPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineCommand), &Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_GeneratorPower_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_GeneratorPower_MetaData), Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_GeneratorPower_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Condition_MetaData[] = {
		{ "Category", "EngineCommand" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Condition_SetBit(void* Obj)
	{
		((FEngineCommand*)Obj)->Condition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineCommand), &Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Condition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Condition_MetaData), Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Condition_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEngineCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Throttle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Mixture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Starter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Running,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_PropellerAdvance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_PropellerFeather,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Magnetos_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Magnetos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Augmentation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Injection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Ignition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Reverse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_CutOff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_GeneratorPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Condition,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel,
		nullptr,
		&NewStructOps,
		"EngineCommand",
		Z_Construct_UScriptStruct_FEngineCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineCommand_Statics::PropPointers),
		sizeof(FEngineCommand),
		alignof(FEngineCommand),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineCommand_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEngineCommand_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineCommand_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEngineCommand()
	{
		if (!Z_Registration_Info_UScriptStruct_EngineCommand.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EngineCommand.InnerSingleton, Z_Construct_UScriptStruct_FEngineCommand_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EngineCommand.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EngineState;
class UScriptStruct* FEngineState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EngineState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EngineState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineState, (UObject*)Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel(), TEXT("EngineState"));
	}
	return Z_Registration_Info_UScriptStruct_EngineState.OuterSingleton;
}
template<> JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* StaticStruct<FEngineState>()
{
	return FEngineState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEngineState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_EngineType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EngineType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Starter_MetaData[];
#endif
		static void NewProp_Starter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Starter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Running_MetaData[];
#endif
		static void NewProp_Running_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Running;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thrust_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Thrust;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineRPM_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_EngineRPM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_N1_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_N1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_N2_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_N2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Augmentation_MetaData[];
#endif
		static void NewProp_Augmentation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Augmentation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reversed_MetaData[];
#endif
		static void NewProp_Reversed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Reversed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Injection_MetaData[];
#endif
		static void NewProp_Injection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Injection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CutOff_MetaData[];
#endif
		static void NewProp_CutOff_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CutOff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ignition_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Ignition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratorPower_MetaData[];
#endif
		static void NewProp_GeneratorPower_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_GeneratorPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[];
#endif
		static void NewProp_Condition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Condition;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Magnetos_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnetos_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Magnetos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEngineState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineState>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_EngineType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_EngineType_MetaData[] = {
		{ "Category", "EngineState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Type\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_EngineType = { "EngineType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineState, EngineType), Z_Construct_UEnum_JSBSimFlightDynamicsModel_EEngineType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_EngineType_MetaData), Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_EngineType_MetaData) }; // 1663521791
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Starter_MetaData[] = {
		{ "Category", "EngineState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Common Engine States\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Common Engine States" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Starter_SetBit(void* Obj)
	{
		((FEngineState*)Obj)->Starter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Starter = { "Starter", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineState), &Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Starter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Starter_MetaData), Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Starter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Running_MetaData[] = {
		{ "Category", "EngineState" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Running_SetBit(void* Obj)
	{
		((FEngineState*)Obj)->Running = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Running = { "Running", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineState), &Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Running_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Running_MetaData), Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Running_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Thrust_MetaData[] = {
		{ "Category", "EngineState" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Thrust = { "Thrust", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineState, Thrust), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Thrust_MetaData), Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Thrust_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_EngineRPM_MetaData[] = {
		{ "Category", "EngineState" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_EngineRPM = { "EngineRPM", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineState, EngineRPM), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_EngineRPM_MetaData), Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_EngineRPM_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_N1_MetaData[] = {
		{ "Category", "EngineState" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_N1 = { "N1", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineState, N1), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_N1_MetaData), Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_N1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_N2_MetaData[] = {
		{ "Category", "EngineState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turbine\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turbine" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_N2 = { "N2", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineState, N2), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_N2_MetaData), Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_N2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Augmentation_MetaData[] = {
		{ "Category", "EngineState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turbine\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turbine" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Augmentation_SetBit(void* Obj)
	{
		((FEngineState*)Obj)->Augmentation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Augmentation = { "Augmentation", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineState), &Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Augmentation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Augmentation_MetaData), Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Augmentation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Reversed_MetaData[] = {
		{ "Category", "EngineState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turbine\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turbine" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Reversed_SetBit(void* Obj)
	{
		((FEngineState*)Obj)->Reversed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Reversed = { "Reversed", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineState), &Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Reversed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Reversed_MetaData), Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Reversed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Injection_MetaData[] = {
		{ "Category", "EngineState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turbine + TurboProp\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turbine + TurboProp" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Injection_SetBit(void* Obj)
	{
		((FEngineState*)Obj)->Injection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Injection = { "Injection", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineState), &Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Injection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Injection_MetaData), Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Injection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_CutOff_MetaData[] = {
		{ "Category", "EngineState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turbine\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turbine" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_CutOff_SetBit(void* Obj)
	{
		((FEngineState*)Obj)->CutOff = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_CutOff = { "CutOff", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineState), &Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_CutOff_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_CutOff_MetaData), Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_CutOff_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Ignition_MetaData[] = {
		{ "Category", "EngineState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turbine + TurboProp\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turbine + TurboProp" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Ignition = { "Ignition", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineState, Ignition), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Ignition_MetaData), Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Ignition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_GeneratorPower_MetaData[] = {
		{ "Category", "EngineState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turbine + \n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turbine +" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_GeneratorPower_SetBit(void* Obj)
	{
		((FEngineState*)Obj)->GeneratorPower = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_GeneratorPower = { "GeneratorPower", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineState), &Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_GeneratorPower_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_GeneratorPower_MetaData), Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_GeneratorPower_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Condition_MetaData[] = {
		{ "Category", "EngineState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TurboProp\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TurboProp" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Condition_SetBit(void* Obj)
	{
		((FEngineState*)Obj)->Condition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineState), &Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Condition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Condition_MetaData), Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Condition_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Magnetos_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Magnetos_MetaData[] = {
		{ "Category", "EngineState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TurboProp\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TurboProp" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Magnetos = { "Magnetos", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineState, Magnetos), Z_Construct_UEnum_JSBSimFlightDynamicsModel_EMagnetosMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Magnetos_MetaData), Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Magnetos_MetaData) }; // 1501845971
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEngineState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_EngineType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_EngineType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Starter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Running,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Thrust,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_EngineRPM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_N1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_N2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Augmentation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Reversed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Injection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_CutOff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Ignition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_GeneratorPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Condition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Magnetos_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Magnetos,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel,
		nullptr,
		&NewStructOps,
		"EngineState",
		Z_Construct_UScriptStruct_FEngineState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineState_Statics::PropPointers),
		sizeof(FEngineState),
		alignof(FEngineState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEngineState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEngineState()
	{
		if (!Z_Registration_Info_UScriptStruct_EngineState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EngineState.InnerSingleton, Z_Construct_UScriptStruct_FEngineState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EngineState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlightControlCommands;
class UScriptStruct* FFlightControlCommands::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlightControlCommands.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlightControlCommands.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlightControlCommands, (UObject*)Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel(), TEXT("FlightControlCommands"));
	}
	return Z_Registration_Info_UScriptStruct_FlightControlCommands.OuterSingleton;
}
template<> JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* StaticStruct<FFlightControlCommands>()
{
	return FFlightControlCommands::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFlightControlCommands_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Aileron_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Aileron;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Elevator_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Elevator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rudder_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Rudder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawTrim_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_YawTrim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchTrim_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_PitchTrim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollTrim_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_RollTrim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Steer_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Steer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftBrake_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_LeftBrake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightBrake_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_RightBrake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterBrake_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_CenterBrake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParkingBrake_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ParkingBrake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GearDown_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_GearDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flap_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Flap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedBrake_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SpeedBrake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spoiler_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Spoiler;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlightControlCommands_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlightControlCommands>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Aileron_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [-1..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [-1..1] value expected" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Aileron = { "Aileron", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, Aileron), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Aileron_MetaData), Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Aileron_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Elevator_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [-1..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [-1..1] value expected" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Elevator = { "Elevator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, Elevator), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Elevator_MetaData), Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Elevator_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Rudder_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [-1..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [-1..1] value expected" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Rudder = { "Rudder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, Rudder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Rudder_MetaData), Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Rudder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_YawTrim_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [-1..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [-1..1] value expected" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_YawTrim = { "YawTrim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, YawTrim), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_YawTrim_MetaData), Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_YawTrim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_PitchTrim_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [-1..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [-1..1] value expected" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_PitchTrim = { "PitchTrim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, PitchTrim), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_PitchTrim_MetaData), Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_PitchTrim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_RollTrim_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [-1..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [-1..1] value expected" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_RollTrim = { "RollTrim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, RollTrim), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_RollTrim_MetaData), Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_RollTrim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Steer_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [-1..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [-1..1] value expected" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Steer = { "Steer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, Steer), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Steer_MetaData), Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Steer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_LeftBrake_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [0..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [0..1] value expected" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_LeftBrake = { "LeftBrake", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, LeftBrake), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_LeftBrake_MetaData), Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_LeftBrake_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_RightBrake_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [0..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [0..1] value expected" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_RightBrake = { "RightBrake", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, RightBrake), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_RightBrake_MetaData), Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_RightBrake_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_CenterBrake_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [0..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [0..1] value expected" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_CenterBrake = { "CenterBrake", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, CenterBrake), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_CenterBrake_MetaData), Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_CenterBrake_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_ParkingBrake_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [0..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [0..1] value expected" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_ParkingBrake = { "ParkingBrake", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, ParkingBrake), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_ParkingBrake_MetaData), Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_ParkingBrake_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_GearDown_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [0..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [0..1] value expected" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_GearDown = { "GearDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, GearDown), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_GearDown_MetaData), Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_GearDown_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Flap_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [0..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [0..1] value expected" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Flap = { "Flap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, Flap), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Flap_MetaData), Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Flap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_SpeedBrake_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [0..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [0..1] value expected" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_SpeedBrake = { "SpeedBrake", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, SpeedBrake), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_SpeedBrake_MetaData), Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_SpeedBrake_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Spoiler_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [0..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [0..1] value expected" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Spoiler = { "Spoiler", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, Spoiler), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Spoiler_MetaData), Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Spoiler_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlightControlCommands_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Aileron,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Elevator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Rudder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_YawTrim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_PitchTrim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_RollTrim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Steer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_LeftBrake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_RightBrake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_CenterBrake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_ParkingBrake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_GearDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Flap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_SpeedBrake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Spoiler,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel,
		nullptr,
		&NewStructOps,
		"FlightControlCommands",
		Z_Construct_UScriptStruct_FFlightControlCommands_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlightControlCommands_Statics::PropPointers),
		sizeof(FFlightControlCommands),
		alignof(FFlightControlCommands),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlightControlCommands_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFlightControlCommands_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlightControlCommands_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFlightControlCommands()
	{
		if (!Z_Registration_Info_UScriptStruct_FlightControlCommands.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlightControlCommands.InnerSingleton, Z_Construct_UScriptStruct_FFlightControlCommands_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FlightControlCommands.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AircraftState;
class UScriptStruct* FAircraftState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AircraftState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AircraftState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAircraftState, (UObject*)Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel(), TEXT("AircraftState"));
	}
	return Z_Registration_Info_UScriptStruct_AircraftState.OuterSingleton;
}
template<> JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* StaticStruct<FAircraftState>()
{
	return FAircraftState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAircraftState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElevatorPosition_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ElevatorPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftAileronPosition_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_LeftAileronPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightAileronPosition_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_RightAileronPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RudderPosition_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_RudderPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlapPosition_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_FlapPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedBrakePosition_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SpeedBrakePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpoilersPosition_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SpoilersPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalibratedAirSpeedKts_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_CalibratedAirSpeedKts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundSpeedKts_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_GroundSpeedKts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalVelocityKts_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_TotalVelocityKts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityNEDfps_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityNEDfps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AltitudeASLFt_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_AltitudeASLFt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AltitudeAGLFt_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_AltitudeAGLFt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AltitudeRateFtps_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_AltitudeRateFtps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StallWarning_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_StallWarning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ECEFLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ECEFLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Latitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Longitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalEulerAngles_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalEulerAngles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EulerRates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EulerRates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UEForwardHorizontal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UEForwardHorizontal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Crashed_MetaData[];
#endif
		static void NewProp_Crashed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Crashed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAircraftState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAircraftState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAircraftState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_ElevatorPosition_MetaData[] = {
		{ "Category", "Articulations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Articulated Parts State in degrees\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Articulated Parts State in degrees" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_ElevatorPosition = { "ElevatorPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, ElevatorPosition), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_ElevatorPosition_MetaData), Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_ElevatorPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_LeftAileronPosition_MetaData[] = {
		{ "Category", "Articulations" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_LeftAileronPosition = { "LeftAileronPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, LeftAileronPosition), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_LeftAileronPosition_MetaData), Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_LeftAileronPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_RightAileronPosition_MetaData[] = {
		{ "Category", "Articulations" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_RightAileronPosition = { "RightAileronPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, RightAileronPosition), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_RightAileronPosition_MetaData), Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_RightAileronPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_RudderPosition_MetaData[] = {
		{ "Category", "Articulations" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_RudderPosition = { "RudderPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, RudderPosition), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_RudderPosition_MetaData), Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_RudderPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_FlapPosition_MetaData[] = {
		{ "Category", "Articulations" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_FlapPosition = { "FlapPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, FlapPosition), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_FlapPosition_MetaData), Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_FlapPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_SpeedBrakePosition_MetaData[] = {
		{ "Category", "Articulations" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_SpeedBrakePosition = { "SpeedBrakePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, SpeedBrakePosition), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_SpeedBrakePosition_MetaData), Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_SpeedBrakePosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_SpoilersPosition_MetaData[] = {
		{ "Category", "Articulations" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_SpoilersPosition = { "SpoilersPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, SpoilersPosition), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_SpoilersPosition_MetaData), Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_SpoilersPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_CalibratedAirSpeedKts_MetaData[] = {
		{ "Category", "Speed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Speed\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_CalibratedAirSpeedKts = { "CalibratedAirSpeedKts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, CalibratedAirSpeedKts), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_CalibratedAirSpeedKts_MetaData), Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_CalibratedAirSpeedKts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_GroundSpeedKts_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_GroundSpeedKts = { "GroundSpeedKts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, GroundSpeedKts), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_GroundSpeedKts_MetaData), Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_GroundSpeedKts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_TotalVelocityKts_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_TotalVelocityKts = { "TotalVelocityKts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, TotalVelocityKts), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_TotalVelocityKts_MetaData), Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_TotalVelocityKts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_VelocityNEDfps_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_VelocityNEDfps = { "VelocityNEDfps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, VelocityNEDfps), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_VelocityNEDfps_MetaData), Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_VelocityNEDfps_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_AltitudeASLFt_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_AltitudeASLFt = { "AltitudeASLFt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, AltitudeASLFt), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_AltitudeASLFt_MetaData), Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_AltitudeASLFt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_AltitudeAGLFt_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_AltitudeAGLFt = { "AltitudeAGLFt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, AltitudeAGLFt), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_AltitudeAGLFt_MetaData), Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_AltitudeAGLFt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_AltitudeRateFtps_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_AltitudeRateFtps = { "AltitudeRateFtps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, AltitudeRateFtps), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_AltitudeRateFtps_MetaData), Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_AltitudeRateFtps_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_StallWarning_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_StallWarning = { "StallWarning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, StallWarning), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_StallWarning_MetaData), Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_StallWarning_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_ECEFLocation_MetaData[] = {
		{ "Category", "Transformation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Transformation\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transformation" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_ECEFLocation = { "ECEFLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, ECEFLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_ECEFLocation_MetaData), Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_ECEFLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_Latitude_MetaData[] = {
		{ "Category", "Transformation" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, Latitude), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_Latitude_MetaData), Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_Latitude_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_Longitude_MetaData[] = {
		{ "Category", "Transformation" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, Longitude), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_Longitude_MetaData), Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_Longitude_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_LocalEulerAngles_MetaData[] = {
		{ "Category", "Transformation" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_LocalEulerAngles = { "LocalEulerAngles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, LocalEulerAngles), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_LocalEulerAngles_MetaData), Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_LocalEulerAngles_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_EulerRates_MetaData[] = {
		{ "Category", "Transformation" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_EulerRates = { "EulerRates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, EulerRates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_EulerRates_MetaData), Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_EulerRates_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_UEForwardHorizontal_MetaData[] = {
		{ "Category", "Transformation" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_UEForwardHorizontal = { "UEForwardHorizontal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, UEForwardHorizontal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_UEForwardHorizontal_MetaData), Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_UEForwardHorizontal_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_Crashed_MetaData[] = {
		{ "Category", "Misc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Misc\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Misc" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_Crashed_SetBit(void* Obj)
	{
		((FAircraftState*)Obj)->Crashed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_Crashed = { "Crashed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAircraftState), &Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_Crashed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_Crashed_MetaData), Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_Crashed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAircraftState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_ElevatorPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_LeftAileronPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_RightAileronPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_RudderPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_FlapPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_SpeedBrakePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_SpoilersPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_CalibratedAirSpeedKts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_GroundSpeedKts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_TotalVelocityKts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_VelocityNEDfps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_AltitudeASLFt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_AltitudeAGLFt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_AltitudeRateFtps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_StallWarning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_ECEFLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_Latitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_Longitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_LocalEulerAngles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_EulerRates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_UEForwardHorizontal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_Crashed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAircraftState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel,
		nullptr,
		&NewStructOps,
		"AircraftState",
		Z_Construct_UScriptStruct_FAircraftState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraftState_Statics::PropPointers),
		sizeof(FAircraftState),
		alignof(FAircraftState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraftState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAircraftState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraftState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAircraftState()
	{
		if (!Z_Registration_Info_UScriptStruct_AircraftState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AircraftState.InnerSingleton, Z_Construct_UScriptStruct_FAircraftState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AircraftState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_FDMTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_FDMTypes_h_Statics::EnumInfo[] = {
		{ EEngineType_StaticEnum, TEXT("EEngineType"), &Z_Registration_Info_UEnum_EEngineType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1663521791U) },
		{ EMagnetosMode_StaticEnum, TEXT("EMagnetosMode"), &Z_Registration_Info_UEnum_EMagnetosMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1501845971U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_FDMTypes_h_Statics::ScriptStructInfo[] = {
		{ FTank::StaticStruct, Z_Construct_UScriptStruct_FTank_Statics::NewStructOps, TEXT("Tank"), &Z_Registration_Info_UScriptStruct_Tank, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTank), 2675892497U) },
		{ FGear::StaticStruct, Z_Construct_UScriptStruct_FGear_Statics::NewStructOps, TEXT("Gear"), &Z_Registration_Info_UScriptStruct_Gear, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGear), 405490347U) },
		{ FEngineCommand::StaticStruct, Z_Construct_UScriptStruct_FEngineCommand_Statics::NewStructOps, TEXT("EngineCommand"), &Z_Registration_Info_UScriptStruct_EngineCommand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEngineCommand), 4189965018U) },
		{ FEngineState::StaticStruct, Z_Construct_UScriptStruct_FEngineState_Statics::NewStructOps, TEXT("EngineState"), &Z_Registration_Info_UScriptStruct_EngineState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEngineState), 3747633780U) },
		{ FFlightControlCommands::StaticStruct, Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewStructOps, TEXT("FlightControlCommands"), &Z_Registration_Info_UScriptStruct_FlightControlCommands, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlightControlCommands), 947152987U) },
		{ FAircraftState::StaticStruct, Z_Construct_UScriptStruct_FAircraftState_Statics::NewStructOps, TEXT("AircraftState"), &Z_Registration_Info_UScriptStruct_AircraftState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAircraftState), 4255368207U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_FDMTypes_h_2269860270(TEXT("/Script/JSBSimFlightDynamicsModel"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_FDMTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_FDMTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UnrealEngine_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_FDMTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_FDMTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
