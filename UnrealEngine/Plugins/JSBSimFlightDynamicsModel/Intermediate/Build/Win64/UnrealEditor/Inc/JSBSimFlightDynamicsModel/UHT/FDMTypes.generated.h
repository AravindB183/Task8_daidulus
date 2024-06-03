// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FDMTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JSBSIMFLIGHTDYNAMICSMODEL_FDMTypes_generated_h
#error "FDMTypes.generated.h already included, missing '#pragma once' in FDMTypes.h"
#endif
#define JSBSIMFLIGHTDYNAMICSMODEL_FDMTypes_generated_h

#define FID_UnrealEngine_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_FDMTypes_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTank_Statics; \
	JSBSIMFLIGHTDYNAMICSMODEL_API static class UScriptStruct* StaticStruct();


template<> JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* StaticStruct<struct FTank>();

#define FID_UnrealEngine_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_FDMTypes_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGear_Statics; \
	JSBSIMFLIGHTDYNAMICSMODEL_API static class UScriptStruct* StaticStruct();


template<> JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* StaticStruct<struct FGear>();

#define FID_UnrealEngine_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_FDMTypes_h_143_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEngineCommand_Statics; \
	JSBSIMFLIGHTDYNAMICSMODEL_API static class UScriptStruct* StaticStruct();


template<> JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* StaticStruct<struct FEngineCommand>();

#define FID_UnrealEngine_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_FDMTypes_h_206_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEngineState_Statics; \
	JSBSIMFLIGHTDYNAMICSMODEL_API static class UScriptStruct* StaticStruct();


template<> JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* StaticStruct<struct FEngineState>();

#define FID_UnrealEngine_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_FDMTypes_h_270_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFlightControlCommands_Statics; \
	JSBSIMFLIGHTDYNAMICSMODEL_API static class UScriptStruct* StaticStruct();


template<> JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* StaticStruct<struct FFlightControlCommands>();

#define FID_UnrealEngine_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_FDMTypes_h_350_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAircraftState_Statics; \
	JSBSIMFLIGHTDYNAMICSMODEL_API static class UScriptStruct* StaticStruct();


template<> JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* StaticStruct<struct FAircraftState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_FDMTypes_h


#define FOREACH_ENUM_EENGINETYPE(op) \
	op(EEngineType::Unknown) \
	op(EEngineType::Rocket) \
	op(EEngineType::Piston) \
	op(EEngineType::Turbine) \
	op(EEngineType::Turboprop) \
	op(EEngineType::Electric) 

enum class EEngineType : uint8;
template<> struct TIsUEnumClass<EEngineType> { enum { Value = true }; };
template<> JSBSIMFLIGHTDYNAMICSMODEL_API UEnum* StaticEnum<EEngineType>();

#define FOREACH_ENUM_EMAGNETOSMODE(op) \
	op(EMagnetosMode::Off) \
	op(EMagnetosMode::Left) \
	op(EMagnetosMode::Right) \
	op(EMagnetosMode::Both) 

enum class EMagnetosMode : uint8;
template<> struct TIsUEnumClass<EMagnetosMode> { enum { Value = true }; };
template<> JSBSIMFLIGHTDYNAMICSMODEL_API UEnum* StaticEnum<EMagnetosMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
