// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GaussianActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraComponent;
#ifdef GSRUNTIME_GaussianActor_generated_h
#error "GaussianActor.generated.h already included, missing '#pragma once' in GaussianActor.h"
#endif
#define GSRUNTIME_GaussianActor_generated_h

#define FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_24_SPARSE_DATA
#define FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execfor_debug_fun); \
	DECLARE_FUNCTION(execreset_niagara);


#define FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execfor_debug_fun); \
	DECLARE_FUNCTION(execreset_niagara);


#define FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_24_ACCESSORS
#define FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGaussianActor(); \
	friend struct Z_Construct_UClass_AGaussianActor_Statics; \
public: \
	DECLARE_CLASS(AGaussianActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GSRuntime"), NO_API) \
	DECLARE_SERIALIZER(AGaussianActor)


#define FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAGaussianActor(); \
	friend struct Z_Construct_UClass_AGaussianActor_Statics; \
public: \
	DECLARE_CLASS(AGaussianActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GSRuntime"), NO_API) \
	DECLARE_SERIALIZER(AGaussianActor)


#define FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGaussianActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGaussianActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGaussianActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGaussianActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGaussianActor(AGaussianActor&&); \
	NO_API AGaussianActor(const AGaussianActor&); \
public: \
	NO_API virtual ~AGaussianActor();


#define FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGaussianActor(AGaussianActor&&); \
	NO_API AGaussianActor(const AGaussianActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGaussianActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGaussianActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGaussianActor) \
	NO_API virtual ~AGaussianActor();


#define FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_21_PROLOG
#define FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_24_SPARSE_DATA \
	FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_24_RPC_WRAPPERS \
	FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_24_ACCESSORS \
	FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_24_INCLASS \
	FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_24_SPARSE_DATA \
	FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_24_ACCESSORS \
	FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_24_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GSRUNTIME_API UClass* StaticClass<class AGaussianActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h


#define FOREACH_ENUM_ECROPTYPE(op) \
	op(ECropType::CropNothing) \
	op(ECropType::CropInside) \
	op(ECropType::CropOutside) 

enum class ECropType : uint8;
template<> struct TIsUEnumClass<ECropType> { enum { Value = true }; };
template<> GSRUNTIME_API UEnum* StaticEnum<ECropType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
