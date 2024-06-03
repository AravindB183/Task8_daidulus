// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEReferenceApp/MyHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyHUD() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UEREFERENCEAPP_API UClass* Z_Construct_UClass_AMyHUD();
	UEREFERENCEAPP_API UClass* Z_Construct_UClass_AMyHUD_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UEReferenceApp();
// End Cross Module References
	DEFINE_FUNCTION(AMyHUD::execCalculateAndDisplayDifferences)
	{
		P_GET_STRUCT(FVector,Z_Param_OwnshipLocation);
		P_GET_STRUCT(FVector,Z_Param_OwnshipVelocity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OwnshipHeading);
		P_GET_STRUCT(FVector,Z_Param_IntruderLocation);
		P_GET_STRUCT(FVector,Z_Param_IntruderVelocity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_IntruderHeading);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PositionDifference);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_VelocityDifference);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_HeadingDifference);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalculateAndDisplayDifferences(Z_Param_OwnshipLocation,Z_Param_OwnshipVelocity,Z_Param_OwnshipHeading,Z_Param_IntruderLocation,Z_Param_IntruderVelocity,Z_Param_IntruderHeading,Z_Param_Out_PositionDifference,Z_Param_Out_VelocityDifference,Z_Param_Out_HeadingDifference);
		P_NATIVE_END;
	}
	void AMyHUD::StaticRegisterNativesAMyHUD()
	{
		UClass* Class = AMyHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateAndDisplayDifferences", &AMyHUD::execCalculateAndDisplayDifferences },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics
	{
		struct MyHUD_eventCalculateAndDisplayDifferences_Parms
		{
			FVector OwnshipLocation;
			FVector OwnshipVelocity;
			float OwnshipHeading;
			FVector IntruderLocation;
			FVector IntruderVelocity;
			float IntruderHeading;
			FVector PositionDifference;
			FVector VelocityDifference;
			float HeadingDifference;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwnshipLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwnshipVelocity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OwnshipHeading;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IntruderLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IntruderVelocity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IntruderHeading;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionDifference;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityDifference;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadingDifference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics::NewProp_OwnshipLocation = { "OwnshipLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyHUD_eventCalculateAndDisplayDifferences_Parms, OwnshipLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics::NewProp_OwnshipVelocity = { "OwnshipVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyHUD_eventCalculateAndDisplayDifferences_Parms, OwnshipVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics::NewProp_OwnshipHeading = { "OwnshipHeading", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyHUD_eventCalculateAndDisplayDifferences_Parms, OwnshipHeading), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics::NewProp_IntruderLocation = { "IntruderLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyHUD_eventCalculateAndDisplayDifferences_Parms, IntruderLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics::NewProp_IntruderVelocity = { "IntruderVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyHUD_eventCalculateAndDisplayDifferences_Parms, IntruderVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics::NewProp_IntruderHeading = { "IntruderHeading", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyHUD_eventCalculateAndDisplayDifferences_Parms, IntruderHeading), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics::NewProp_PositionDifference = { "PositionDifference", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyHUD_eventCalculateAndDisplayDifferences_Parms, PositionDifference), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics::NewProp_VelocityDifference = { "VelocityDifference", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyHUD_eventCalculateAndDisplayDifferences_Parms, VelocityDifference), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics::NewProp_HeadingDifference = { "HeadingDifference", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyHUD_eventCalculateAndDisplayDifferences_Parms, HeadingDifference), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics::NewProp_OwnshipLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics::NewProp_OwnshipVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics::NewProp_OwnshipHeading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics::NewProp_IntruderLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics::NewProp_IntruderVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics::NewProp_IntruderHeading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics::NewProp_PositionDifference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics::NewProp_VelocityDifference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics::NewProp_HeadingDifference,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to calculate differences - make it BlueprintCallable to expose to Blueprints\n" },
#endif
		{ "ModuleRelativePath", "MyHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to calculate differences - make it BlueprintCallable to expose to Blueprints" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyHUD, nullptr, "CalculateAndDisplayDifferences", nullptr, nullptr, Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics::MyHUD_eventCalculateAndDisplayDifferences_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics::MyHUD_eventCalculateAndDisplayDifferences_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyHUD);
	UClass* Z_Construct_UClass_AMyHUD_NoRegister()
	{
		return AMyHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMyHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_UEReferenceApp,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyHUD_CalculateAndDisplayDifferences, "CalculateAndDisplayDifferences" }, // 3618255205
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyHUD_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MyHUD.h" },
		{ "ModuleRelativePath", "MyHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyHUD_Statics::ClassParams = {
		&AMyHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyHUD_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMyHUD()
	{
		if (!Z_Registration_Info_UClass_AMyHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyHUD.OuterSingleton, Z_Construct_UClass_AMyHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyHUD.OuterSingleton;
	}
	template<> UEREFERENCEAPP_API UClass* StaticClass<AMyHUD>()
	{
		return AMyHUD::StaticClass();
	}
	AMyHUD::AMyHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyHUD);
	AMyHUD::~AMyHUD() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_Source_UEReferenceApp_MyHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_Source_UEReferenceApp_MyHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyHUD, AMyHUD::StaticClass, TEXT("AMyHUD"), &Z_Registration_Info_UClass_AMyHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyHUD), 4241455307U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_Source_UEReferenceApp_MyHUD_h_4173483370(TEXT("/Script/UEReferenceApp"),
		Z_CompiledInDeferFile_FID_UnrealEngine_Source_UEReferenceApp_MyHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_Source_UEReferenceApp_MyHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
