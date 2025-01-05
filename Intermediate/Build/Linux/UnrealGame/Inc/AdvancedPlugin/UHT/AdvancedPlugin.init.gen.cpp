// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedPlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AdvancedPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AdvancedPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_AdvancedPlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AdvancedPlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xE1345297,
				0x9DBD3C7D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AdvancedPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AdvancedPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AdvancedPlugin(Z_Construct_UPackage__Script_AdvancedPlugin, TEXT("/Script/AdvancedPlugin"), Z_Registration_Info_UPackage__Script_AdvancedPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE1345297, 0x9DBD3C7D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
