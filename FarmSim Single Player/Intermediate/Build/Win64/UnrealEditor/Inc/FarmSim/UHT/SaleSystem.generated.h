// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SaleSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FARMSIM_SaleSystem_generated_h
#error "SaleSystem.generated.h already included, missing '#pragma once' in SaleSystem.h"
#endif
#define FARMSIM_SaleSystem_generated_h

#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_SaleSystem_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetProductPrice); \
	DECLARE_FUNCTION(execIsAvailable); \
	DECLARE_FUNCTION(execGetTotalProducts); \
	DECLARE_FUNCTION(execRemoveProduct); \
	DECLARE_FUNCTION(execAddProduct);


#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_SaleSystem_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaleSystem(); \
	friend struct Z_Construct_UClass_USaleSystem_Statics; \
public: \
	DECLARE_CLASS(USaleSystem, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FarmSim"), NO_API) \
	DECLARE_SERIALIZER(USaleSystem)


#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_SaleSystem_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USaleSystem(USaleSystem&&); \
	USaleSystem(const USaleSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaleSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaleSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USaleSystem) \
	NO_API virtual ~USaleSystem();


#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_SaleSystem_h_10_PROLOG
#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_SaleSystem_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_SaleSystem_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_SaleSystem_h_13_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_SaleSystem_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FARMSIM_API UClass* StaticClass<class USaleSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_SaleSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
