// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FarmHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FARMSIM_FarmHUD_generated_h
#error "FarmHUD.generated.h already included, missing '#pragma once' in FarmHUD.h"
#endif
#define FARMSIM_FarmHUD_generated_h

#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_FarmHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFarmHUD(); \
	friend struct Z_Construct_UClass_AFarmHUD_Statics; \
public: \
	DECLARE_CLASS(AFarmHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FarmSim"), NO_API) \
	DECLARE_SERIALIZER(AFarmHUD)


#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_FarmHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFarmHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFarmHUD(AFarmHUD&&); \
	AFarmHUD(const AFarmHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFarmHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFarmHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFarmHUD) \
	NO_API virtual ~AFarmHUD();


#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_FarmHUD_h_12_PROLOG
#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_FarmHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_FarmHUD_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_FarmHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FARMSIM_API UClass* StaticClass<class AFarmHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_FarmHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
