// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Harvest.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FARMSIM_Harvest_generated_h
#error "Harvest.generated.h already included, missing '#pragma once' in Harvest.h"
#endif
#define FARMSIM_Harvest_generated_h

#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_Harvest_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHarvestGroundRipped); \
	DECLARE_FUNCTION(execOnHarvestGroundWatered); \
	DECLARE_FUNCTION(execOnHarvestGroundPlanted); \
	DECLARE_FUNCTION(execSetPoints);


#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_Harvest_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHarvest(); \
	friend struct Z_Construct_UClass_UHarvest_Statics; \
public: \
	DECLARE_CLASS(UHarvest, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FarmSim"), NO_API) \
	DECLARE_SERIALIZER(UHarvest)


#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_Harvest_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHarvest(UHarvest&&); \
	UHarvest(const UHarvest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHarvest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHarvest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHarvest) \
	NO_API virtual ~UHarvest();


#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_Harvest_h_11_PROLOG
#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_Harvest_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_Harvest_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_Harvest_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_Harvest_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FARMSIM_API UClass* StaticClass<class UHarvest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_Harvest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
