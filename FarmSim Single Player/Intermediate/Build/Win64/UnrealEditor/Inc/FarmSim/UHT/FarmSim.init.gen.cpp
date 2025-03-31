// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFarmSim_init() {}
	FARMSIM_API UFunction* Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnPlanted__DelegateSignature();
	FARMSIM_API UFunction* Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnRipped__DelegateSignature();
	FARMSIM_API UFunction* Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnWatered__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FarmSim;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FarmSim()
	{
		if (!Z_Registration_Info_UPackage__Script_FarmSim.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnPlanted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnRipped__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnWatered__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FarmSim",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x284D1B38,
				0x4CCA94B9,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FarmSim.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FarmSim.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FarmSim(Z_Construct_UPackage__Script_FarmSim, TEXT("/Script/FarmSim"), Z_Registration_Info_UPackage__Script_FarmSim, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x284D1B38, 0x4CCA94B9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
