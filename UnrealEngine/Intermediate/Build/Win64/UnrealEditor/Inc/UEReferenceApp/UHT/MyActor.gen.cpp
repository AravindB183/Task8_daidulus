// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEReferenceApp/MyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UEREFERENCEAPP_API UClass* Z_Construct_UClass_AMyActor();
	UEREFERENCEAPP_API UClass* Z_Construct_UClass_AMyActor_NoRegister();
	UEREFERENCEAPP_API UScriptStruct* Z_Construct_UScriptStruct_FParameters();
	UPackage* Z_Construct_UPackage__Script_UEReferenceApp();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Parameters;
class UScriptStruct* FParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Parameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Parameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParameters, (UObject*)Z_Construct_UPackage__Script_UEReferenceApp(), TEXT("Parameters"));
	}
	return Z_Registration_Info_UScriptStruct_Parameters.OuterSingleton;
}
template<> UEREFERENCEAPP_API UScriptStruct* StaticStruct<FParameters>()
{
	return FParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RCirWcb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RCirWcb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RCirArt_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RCirArt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RCirSst_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RCirSst;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateArtRadius_MetaData[];
#endif
		static void NewProp_UpdateArtRadius_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UpdateArtRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateArtRadiusCheck_MetaData[];
#endif
		static void NewProp_UpdateArtRadiusCheck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UpdateArtRadiusCheck;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tt_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RCirArtScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RCirArtScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirWcb_MetaData[] = {
		{ "Category", "DAA Parameters" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirWcb = { "RCirWcb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParameters, RCirWcb), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirWcb_MetaData), Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirWcb_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirArt_MetaData[] = {
		{ "Category", "DAA Parameters" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirArt = { "RCirArt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParameters, RCirArt), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirArt_MetaData), Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirArt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirSst_MetaData[] = {
		{ "Category", "DAA Parameters" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirSst = { "RCirSst", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParameters, RCirSst), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirSst_MetaData), Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirSst_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameters_Statics::NewProp_UpdateArtRadius_MetaData[] = {
		{ "Category", "DAA Parameters" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FParameters_Statics::NewProp_UpdateArtRadius_SetBit(void* Obj)
	{
		((FParameters*)Obj)->UpdateArtRadius = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParameters_Statics::NewProp_UpdateArtRadius = { "UpdateArtRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FParameters), &Z_Construct_UScriptStruct_FParameters_Statics::NewProp_UpdateArtRadius_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameters_Statics::NewProp_UpdateArtRadius_MetaData), Z_Construct_UScriptStruct_FParameters_Statics::NewProp_UpdateArtRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameters_Statics::NewProp_UpdateArtRadiusCheck_MetaData[] = {
		{ "Category", "DAA Parameters" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FParameters_Statics::NewProp_UpdateArtRadiusCheck_SetBit(void* Obj)
	{
		((FParameters*)Obj)->UpdateArtRadiusCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParameters_Statics::NewProp_UpdateArtRadiusCheck = { "UpdateArtRadiusCheck", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FParameters), &Z_Construct_UScriptStruct_FParameters_Statics::NewProp_UpdateArtRadiusCheck_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameters_Statics::NewProp_UpdateArtRadiusCheck_MetaData), Z_Construct_UScriptStruct_FParameters_Statics::NewProp_UpdateArtRadiusCheck_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameters_Statics::NewProp_Tt_MetaData[] = {
		{ "Category", "DAA Parameters" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParameters_Statics::NewProp_Tt = { "Tt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParameters, Tt), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameters_Statics::NewProp_Tt_MetaData), Z_Construct_UScriptStruct_FParameters_Statics::NewProp_Tt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirArtScale_MetaData[] = {
		{ "Category", "DAA Parameters" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirArtScale = { "RCirArtScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParameters, RCirArtScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirArtScale_MetaData), Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirArtScale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirWcb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirArt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirSst,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameters_Statics::NewProp_UpdateArtRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameters_Statics::NewProp_UpdateArtRadiusCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameters_Statics::NewProp_Tt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirArtScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UEReferenceApp,
		nullptr,
		&NewStructOps,
		"Parameters",
		Z_Construct_UScriptStruct_FParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameters_Statics::PropPointers),
		sizeof(FParameters),
		alignof(FParameters),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FParameters_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameters_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_Parameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Parameters.InnerSingleton, Z_Construct_UScriptStruct_FParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Parameters.InnerSingleton;
	}
	DEFINE_FUNCTION(AMyActor::execSaveDataIntoCsvFile)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_FirstTimeEntry);
		P_GET_STRUCT(FVector,Z_Param_LocationInDegreesofOwnship);
		P_GET_STRUCT(FVector,Z_Param_LocationInXYZofOwnship);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HeadingofOwnship);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SpeedofOwnship);
		P_GET_STRUCT(FVector,Z_Param_LocationInDegreesofIntruder);
		P_GET_STRUCT(FVector,Z_Param_LocationInXYZofIntruder);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HeadingofIntruder);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SpeedofIntruder);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndAngle);
		P_GET_PROPERTY(FIntProperty,Z_Param_ThreatLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveDataIntoCsvFile(Z_Param_FirstTimeEntry,Z_Param_LocationInDegreesofOwnship,Z_Param_LocationInXYZofOwnship,Z_Param_HeadingofOwnship,Z_Param_SpeedofOwnship,Z_Param_LocationInDegreesofIntruder,Z_Param_LocationInXYZofIntruder,Z_Param_HeadingofIntruder,Z_Param_SpeedofIntruder,Z_Param_StartAngle,Z_Param_EndAngle,Z_Param_ThreatLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyActor::execRasDaa)
	{
		P_GET_STRUCT(FVector,Z_Param_Ownship);
		P_GET_STRUCT(FVector,Z_Param_Intruder);
		P_GET_STRUCT(FVector,Z_Param_OwnshipHeadingSpeed);
		P_GET_STRUCT(FVector,Z_Param_IntruderHeadingSpeed);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_StartAngle);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_EndAngle);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Alert);
		P_GET_STRUCT(FParameters,Z_Param_Parameters);
		P_GET_STRUCT_REF(FParameters,Z_Param_Out_TestOutParameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RasDaa(Z_Param_Ownship,Z_Param_Intruder,Z_Param_OwnshipHeadingSpeed,Z_Param_IntruderHeadingSpeed,Z_Param_Out_StartAngle,Z_Param_Out_EndAngle,Z_Param_Out_Alert,Z_Param_Parameters,Z_Param_Out_TestOutParameters);
		P_NATIVE_END;
	}
	void AMyActor::StaticRegisterNativesAMyActor()
	{
		UClass* Class = AMyActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RasDaa", &AMyActor::execRasDaa },
			{ "SaveDataIntoCsvFile", &AMyActor::execSaveDataIntoCsvFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyActor_RasDaa_Statics
	{
		struct MyActor_eventRasDaa_Parms
		{
			FVector Ownship;
			FVector Intruder;
			FVector OwnshipHeadingSpeed;
			FVector IntruderHeadingSpeed;
			float StartAngle;
			float EndAngle;
			int32 Alert;
			FParameters Parameters;
			FParameters TestOutParameters;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ownship_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ownship;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intruder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Intruder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnshipHeadingSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwnshipHeadingSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntruderHeadingSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IntruderHeadingSpeed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndAngle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Alert;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TestOutParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_Ownship_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_Ownship = { "Ownship", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventRasDaa_Parms, Ownship), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_Ownship_MetaData), Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_Ownship_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_Intruder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_Intruder = { "Intruder", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventRasDaa_Parms, Intruder), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_Intruder_MetaData), Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_Intruder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_OwnshipHeadingSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_OwnshipHeadingSpeed = { "OwnshipHeadingSpeed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventRasDaa_Parms, OwnshipHeadingSpeed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_OwnshipHeadingSpeed_MetaData), Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_OwnshipHeadingSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_IntruderHeadingSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_IntruderHeadingSpeed = { "IntruderHeadingSpeed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventRasDaa_Parms, IntruderHeadingSpeed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_IntruderHeadingSpeed_MetaData), Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_IntruderHeadingSpeed_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_StartAngle = { "StartAngle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventRasDaa_Parms, StartAngle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_EndAngle = { "EndAngle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventRasDaa_Parms, EndAngle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_Alert = { "Alert", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventRasDaa_Parms, Alert), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventRasDaa_Parms, Parameters), Z_Construct_UScriptStruct_FParameters, METADATA_PARAMS(0, nullptr) }; // 1623641948
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_TestOutParameters = { "TestOutParameters", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventRasDaa_Parms, TestOutParameters), Z_Construct_UScriptStruct_FParameters, METADATA_PARAMS(0, nullptr) }; // 1623641948
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyActor_RasDaa_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_Ownship,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_Intruder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_OwnshipHeadingSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_IntruderHeadingSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_StartAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_EndAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_Alert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_TestOutParameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_RasDaa_Statics::Function_MetaDataParams[] = {
		{ "Category", "DAA Calculation" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_RasDaa_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor, nullptr, "RasDaa", nullptr, nullptr, Z_Construct_UFunction_AMyActor_RasDaa_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_RasDaa_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyActor_RasDaa_Statics::MyActor_eventRasDaa_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_RasDaa_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyActor_RasDaa_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_RasDaa_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyActor_RasDaa_Statics::MyActor_eventRasDaa_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyActor_RasDaa()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor_RasDaa_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics
	{
		struct MyActor_eventSaveDataIntoCsvFile_Parms
		{
			int32 FirstTimeEntry;
			FVector LocationInDegreesofOwnship;
			FVector LocationInXYZofOwnship;
			float HeadingofOwnship;
			float SpeedofOwnship;
			FVector LocationInDegreesofIntruder;
			FVector LocationInXYZofIntruder;
			float HeadingofIntruder;
			float SpeedofIntruder;
			float StartAngle;
			float EndAngle;
			int32 ThreatLevel;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_FirstTimeEntry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationInDegreesofOwnship_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationInDegreesofOwnship;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationInXYZofOwnship_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationInXYZofOwnship;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadingofOwnship_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadingofOwnship;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedofOwnship_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedofOwnship;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationInDegreesofIntruder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationInDegreesofIntruder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationInXYZofIntruder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationInXYZofIntruder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadingofIntruder_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadingofIntruder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedofIntruder_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedofIntruder;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndAngle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ThreatLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_FirstTimeEntry = { "FirstTimeEntry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventSaveDataIntoCsvFile_Parms, FirstTimeEntry), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInDegreesofOwnship_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInDegreesofOwnship = { "LocationInDegreesofOwnship", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventSaveDataIntoCsvFile_Parms, LocationInDegreesofOwnship), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInDegreesofOwnship_MetaData), Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInDegreesofOwnship_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInXYZofOwnship_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInXYZofOwnship = { "LocationInXYZofOwnship", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventSaveDataIntoCsvFile_Parms, LocationInXYZofOwnship), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInXYZofOwnship_MetaData), Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInXYZofOwnship_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_HeadingofOwnship_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_HeadingofOwnship = { "HeadingofOwnship", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventSaveDataIntoCsvFile_Parms, HeadingofOwnship), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_HeadingofOwnship_MetaData), Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_HeadingofOwnship_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_SpeedofOwnship_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_SpeedofOwnship = { "SpeedofOwnship", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventSaveDataIntoCsvFile_Parms, SpeedofOwnship), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_SpeedofOwnship_MetaData), Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_SpeedofOwnship_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInDegreesofIntruder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInDegreesofIntruder = { "LocationInDegreesofIntruder", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventSaveDataIntoCsvFile_Parms, LocationInDegreesofIntruder), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInDegreesofIntruder_MetaData), Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInDegreesofIntruder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInXYZofIntruder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInXYZofIntruder = { "LocationInXYZofIntruder", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventSaveDataIntoCsvFile_Parms, LocationInXYZofIntruder), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInXYZofIntruder_MetaData), Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInXYZofIntruder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_HeadingofIntruder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_HeadingofIntruder = { "HeadingofIntruder", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventSaveDataIntoCsvFile_Parms, HeadingofIntruder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_HeadingofIntruder_MetaData), Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_HeadingofIntruder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_SpeedofIntruder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_SpeedofIntruder = { "SpeedofIntruder", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventSaveDataIntoCsvFile_Parms, SpeedofIntruder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_SpeedofIntruder_MetaData), Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_SpeedofIntruder_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_StartAngle = { "StartAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventSaveDataIntoCsvFile_Parms, StartAngle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_EndAngle = { "EndAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventSaveDataIntoCsvFile_Parms, EndAngle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_ThreatLevel = { "ThreatLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventSaveDataIntoCsvFile_Parms, ThreatLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_FirstTimeEntry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInDegreesofOwnship,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInXYZofOwnship,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_HeadingofOwnship,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_SpeedofOwnship,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInDegreesofIntruder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInXYZofIntruder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_HeadingofIntruder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_SpeedofIntruder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_StartAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_EndAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_ThreatLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data Saving" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor, nullptr, "SaveDataIntoCsvFile", nullptr, nullptr, Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::MyActor_eventSaveDataIntoCsvFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::MyActor_eventSaveDataIntoCsvFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyActor);
	UClass* Z_Construct_UClass_AMyActor_NoRegister()
	{
		return AMyActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UEReferenceApp,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyActor_RasDaa, "RasDaa" }, // 3770719461
		{ &Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile, "SaveDataIntoCsvFile" }, // 871512361
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyActor.h" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActor_Statics::ClassParams = {
		&AMyActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMyActor()
	{
		if (!Z_Registration_Info_UClass_AMyActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActor.OuterSingleton, Z_Construct_UClass_AMyActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyActor.OuterSingleton;
	}
	template<> UEREFERENCEAPP_API UClass* StaticClass<AMyActor>()
	{
		return AMyActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor);
	AMyActor::~AMyActor() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_Statics::ScriptStructInfo[] = {
		{ FParameters::StaticStruct, Z_Construct_UScriptStruct_FParameters_Statics::NewStructOps, TEXT("Parameters"), &Z_Registration_Info_UScriptStruct_Parameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParameters), 1623641948U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyActor, AMyActor::StaticClass, TEXT("AMyActor"), &Z_Registration_Info_UClass_AMyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActor), 3050505568U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_3400765575(TEXT("/Script/UEReferenceApp"),
		Z_CompiledInDeferFile_FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
