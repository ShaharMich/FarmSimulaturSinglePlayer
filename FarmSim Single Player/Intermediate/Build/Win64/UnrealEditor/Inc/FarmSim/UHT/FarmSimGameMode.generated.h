// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FarmSimGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FARMSIM_FarmSimGameMode_generated_h
#error "FarmSimGameMode.generated.h already included, missing '#pragma once' in FarmSimGameMode.h"
#endif
#define FARMSIM_FarmSimGameMode_generated_h

#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_FarmSimGameMode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFarmSimGameMode(); \
	friend struct Z_Construct_UClass_AFarmSimGameMode_Statics; \
public: \
	DECLARE_CLASS(AFarmSimGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FarmSim"), FARMSIM_API) \
	DECLARE_SERIALIZER(AFarmSimGameMode)


#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_FarmSimGameMode_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFarmSimGameMode(AFarmSimGameMode&&); \
	AFarmSimGameMode(const AFarmSimGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FARMSIM_API, AFarmSimGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFarmSimGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFarmSimGameMode) \
	FARMSIM_API virtual ~AFarmSimGameMode();


#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_FarmSimGameMode_h_10_PROLOG
#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_FarmSimGameMode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_FarmSimGameMode_h_13_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_FarmSimGameMode_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FARMSIM_API UClass* StaticClass<class AFarmSimGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_FarmSimGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
