// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GSRuntime/Public/GaussianActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGaussianActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_ALocationVolume_NoRegister();
	GSRUNTIME_API UClass* Z_Construct_UClass_AGaussianActor();
	GSRUNTIME_API UClass* Z_Construct_UClass_AGaussianActor_NoRegister();
	GSRUNTIME_API UEnum* Z_Construct_UEnum_GSRuntime_ECropType();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GSRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECropType;
	static UEnum* ECropType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECropType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECropType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GSRuntime_ECropType, Z_Construct_UPackage__Script_GSRuntime(), TEXT("ECropType"));
		}
		return Z_Registration_Info_UEnum_ECropType.OuterSingleton;
	}
	template<> GSRUNTIME_API UEnum* StaticEnum<ECropType>()
	{
		return ECropType_StaticEnum();
	}
	struct Z_Construct_UEnum_GSRuntime_ECropType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GSRuntime_ECropType_Statics::Enumerators[] = {
		{ "ECropType::CropNothing", (int64)ECropType::CropNothing },
		{ "ECropType::CropInside", (int64)ECropType::CropInside },
		{ "ECropType::CropOutside", (int64)ECropType::CropOutside },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GSRuntime_ECropType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CropInside.DisplayName", "kill inside volume" },
		{ "CropInside.Name", "ECropType::CropInside" },
		{ "CropNothing.DisplayName", "kill nothing" },
		{ "CropNothing.Name", "ECropType::CropNothing" },
		{ "CropOutside.DisplayName", "kill outside volume" },
		{ "CropOutside.Name", "ECropType::CropOutside" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GSRuntime_ECropType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GSRuntime,
		nullptr,
		"ECropType",
		"ECropType",
		Z_Construct_UEnum_GSRuntime_ECropType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GSRuntime_ECropType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GSRuntime_ECropType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GSRuntime_ECropType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GSRuntime_ECropType()
	{
		if (!Z_Registration_Info_UEnum_ECropType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECropType.InnerSingleton, Z_Construct_UEnum_GSRuntime_ECropType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECropType.InnerSingleton;
	}
	DEFINE_FUNCTION(AGaussianActor::execfor_debug_fun)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->for_debug_fun();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGaussianActor::execreset_niagara)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_inNiagaraComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->reset_niagara(Z_Param_inNiagaraComp);
		P_NATIVE_END;
	}
	void AGaussianActor::StaticRegisterNativesAGaussianActor()
	{
		UClass* Class = AGaussianActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "for_debug_fun", &AGaussianActor::execfor_debug_fun },
			{ "reset_niagara", &AGaussianActor::execreset_niagara },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGaussianActor_for_debug_fun_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaussianActor_for_debug_fun_Statics::Function_MetaDataParams[] = {
		{ "Category", "GSPluginBaseTag" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaussianActor_for_debug_fun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaussianActor, nullptr, "for_debug_fun", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGaussianActor_for_debug_fun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaussianActor_for_debug_fun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGaussianActor_for_debug_fun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGaussianActor_for_debug_fun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics
	{
		struct GaussianActor_eventreset_niagara_Parms
		{
			UNiagaraComponent* inNiagaraComp;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inNiagaraComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inNiagaraComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::NewProp_inNiagaraComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::NewProp_inNiagaraComp = { "inNiagaraComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GaussianActor_eventreset_niagara_Parms, inNiagaraComp), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::NewProp_inNiagaraComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::NewProp_inNiagaraComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::NewProp_inNiagaraComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::Function_MetaDataParams[] = {
		{ "Category", "GSPluginBaseTag" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaussianActor, nullptr, "reset_niagara", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::GaussianActor_eventreset_niagara_Parms), Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGaussianActor_reset_niagara()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGaussianActor_reset_niagara_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGaussianActor);
	UClass* Z_Construct_UClass_AGaussianActor_NoRegister()
	{
		return AGaussianActor::StaticClass();
	}
	struct Z_Construct_UClass_AGaussianActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureBase_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TextureBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLodNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DataLodNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParticleNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WithRelighting_MetaData[];
#endif
		static void NewProp_WithRelighting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WithRelighting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlbedoTint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlbedoTint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CropVolume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CropVolume;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CropType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CropType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CropType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGaussianActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GSRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGaussianActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGaussianActor_for_debug_fun, "for_debug_fun" }, // 2787515994
		{ &Z_Construct_UFunction_AGaussianActor_reset_niagara, "reset_niagara" }, // 1632790783
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaussianActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GaussianActor.h" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaussianActor_Statics::NewProp_TextureBase_MetaData[] = {
		{ "Category", "GSPluginBaseTag" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AGaussianActor_Statics::NewProp_TextureBase = { "TextureBase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGaussianActor, TextureBase), METADATA_PARAMS(Z_Construct_UClass_AGaussianActor_Statics::NewProp_TextureBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianActor_Statics::NewProp_TextureBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaussianActor_Statics::NewProp_DataLodNum_MetaData[] = {
		{ "Category", "GSPluginBaseTag" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGaussianActor_Statics::NewProp_DataLodNum = { "DataLodNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGaussianActor, DataLodNum), METADATA_PARAMS(Z_Construct_UClass_AGaussianActor_Statics::NewProp_DataLodNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianActor_Statics::NewProp_DataLodNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaussianActor_Statics::NewProp_ParticleNum_MetaData[] = {
		{ "Category", "GSPluginBaseTag" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGaussianActor_Statics::NewProp_ParticleNum = { "ParticleNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGaussianActor, ParticleNum), METADATA_PARAMS(Z_Construct_UClass_AGaussianActor_Statics::NewProp_ParticleNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianActor_Statics::NewProp_ParticleNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaussianActor_Statics::NewProp_WithRelighting_MetaData[] = {
		{ "Category", "User Control" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
	};
#endif
	void Z_Construct_UClass_AGaussianActor_Statics::NewProp_WithRelighting_SetBit(void* Obj)
	{
		((AGaussianActor*)Obj)->WithRelighting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGaussianActor_Statics::NewProp_WithRelighting = { "WithRelighting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGaussianActor), &Z_Construct_UClass_AGaussianActor_Statics::NewProp_WithRelighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGaussianActor_Statics::NewProp_WithRelighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianActor_Statics::NewProp_WithRelighting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaussianActor_Statics::NewProp_AlbedoTint_MetaData[] = {
		{ "Category", "User Control" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGaussianActor_Statics::NewProp_AlbedoTint = { "AlbedoTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGaussianActor, AlbedoTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AGaussianActor_Statics::NewProp_AlbedoTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianActor_Statics::NewProp_AlbedoTint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaussianActor_Statics::NewProp_CropVolume_MetaData[] = {
		{ "Category", "User Control" },
		{ "Comment", "//-1:dynamic lod\n" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
		{ "ToolTip", "-1:dynamic lod" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGaussianActor_Statics::NewProp_CropVolume = { "CropVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGaussianActor, CropVolume), Z_Construct_UClass_ALocationVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGaussianActor_Statics::NewProp_CropVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianActor_Statics::NewProp_CropVolume_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGaussianActor_Statics::NewProp_CropType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaussianActor_Statics::NewProp_CropType_MetaData[] = {
		{ "Category", "User Control" },
		{ "ModuleRelativePath", "Public/GaussianActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGaussianActor_Statics::NewProp_CropType = { "CropType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGaussianActor, CropType), Z_Construct_UEnum_GSRuntime_ECropType, METADATA_PARAMS(Z_Construct_UClass_AGaussianActor_Statics::NewProp_CropType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianActor_Statics::NewProp_CropType_MetaData)) }; // 76950466
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGaussianActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaussianActor_Statics::NewProp_TextureBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaussianActor_Statics::NewProp_DataLodNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaussianActor_Statics::NewProp_ParticleNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaussianActor_Statics::NewProp_WithRelighting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaussianActor_Statics::NewProp_AlbedoTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaussianActor_Statics::NewProp_CropVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaussianActor_Statics::NewProp_CropType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaussianActor_Statics::NewProp_CropType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGaussianActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGaussianActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGaussianActor_Statics::ClassParams = {
		&AGaussianActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGaussianActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGaussianActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGaussianActor()
	{
		if (!Z_Registration_Info_UClass_AGaussianActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGaussianActor.OuterSingleton, Z_Construct_UClass_AGaussianActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGaussianActor.OuterSingleton;
	}
	template<> GSRUNTIME_API UClass* StaticClass<AGaussianActor>()
	{
		return AGaussianActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGaussianActor);
	AGaussianActor::~AGaussianActor() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_Statics::EnumInfo[] = {
		{ ECropType_StaticEnum, TEXT("ECropType"), &Z_Registration_Info_UEnum_ECropType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 76950466U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGaussianActor, AGaussianActor::StaticClass, TEXT("AGaussianActor"), &Z_Registration_Info_UClass_AGaussianActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGaussianActor), 1259359805U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_3800290636(TEXT("/Script/GSRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
