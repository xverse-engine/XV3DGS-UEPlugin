// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSRuntime_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GSRuntime;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GSRuntime()
	{
		if (!Z_Registration_Info_UPackage__Script_GSRuntime.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GSRuntime",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xAFA16EAE,
				0x61E4C8BD,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GSRuntime.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GSRuntime.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GSRuntime(Z_Construct_UPackage__Script_GSRuntime, TEXT("/Script/GSRuntime"), Z_Registration_Info_UPackage__Script_GSRuntime, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xAFA16EAE, 0x61E4C8BD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
