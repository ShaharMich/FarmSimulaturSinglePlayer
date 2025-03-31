// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Budget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FARMSIM_Budget_generated_h
#error "Budget.generated.h already included, missing '#pragma once' in Budget.h"
#endif
#define FARMSIM_Budget_generated_h

#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_Budget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCanAfford); \
	DECLARE_FUNCTION(execIncreaseBudget); \
	DECLARE_FUNCTION(execDecreaseBudget); \
	DECLARE_FUNCTION(execGetBudget);


#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_Budget_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBudget(); \
	friend struct Z_Construct_UClass_UBudget_Statics; \
public: \
	DECLARE_CLASS(UBudget, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FarmSim"), NO_API) \
	DECLARE_SERIALIZER(UBudget)


#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_Budget_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBudget(UBudget&&); \
	UBudget(const UBudget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBudget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBudget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBudget) \
	NO_API virtual ~UBudget();


#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_Budget_h_9_PROLOG
#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_Budget_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_Budget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_Budget_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_Budget_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FARMSIM_API UClass* StaticClass<class UBudget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_Budget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
