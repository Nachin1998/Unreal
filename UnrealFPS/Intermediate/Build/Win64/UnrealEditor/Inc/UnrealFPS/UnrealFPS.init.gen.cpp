// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealFPS_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UnrealFPS;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UnrealFPS()
	{
		if (!Z_Registration_Info_UPackage__Script_UnrealFPS.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UnrealFPS",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xEAFCAB8C,
				0x3EAFD4D2,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UnrealFPS.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UnrealFPS.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UnrealFPS(Z_Construct_UPackage__Script_UnrealFPS, TEXT("/Script/UnrealFPS"), Z_Registration_Info_UPackage__Script_UnrealFPS, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEAFCAB8C, 0x3EAFD4D2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
