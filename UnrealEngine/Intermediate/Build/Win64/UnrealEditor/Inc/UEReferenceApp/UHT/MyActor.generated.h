// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FParameters;
#ifdef UEREFERENCEAPP_MyActor_generated_h
#error "MyActor.generated.h already included, missing '#pragma once' in MyActor.h"
#endif
#define UEREFERENCEAPP_MyActor_generated_h

#define FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FParameters_Statics; \
	UEREFERENCEAPP_API static class UScriptStruct* StaticStruct();


template<> UEREFERENCEAPP_API UScriptStruct* StaticStruct<struct FParameters>();

#define FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_39_SPARSE_DATA
#define FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_39_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_39_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveDataIntoCsvFile); \
	DECLARE_FUNCTION(execRasDaa);


#define FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_39_ACCESSORS
#define FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend struct Z_Construct_UClass_AMyActor_Statics; \
public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEReferenceApp"), NO_API) \
	DECLARE_SERIALIZER(AMyActor)


#define FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyActor) \
	NO_API virtual ~AMyActor();


#define FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_36_PROLOG
#define FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_39_SPARSE_DATA \
	FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_39_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_39_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_39_ACCESSORS \
	FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_39_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEREFERENCEAPP_API UClass* StaticClass<class AMyActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_Source_UEReferenceApp_MyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
