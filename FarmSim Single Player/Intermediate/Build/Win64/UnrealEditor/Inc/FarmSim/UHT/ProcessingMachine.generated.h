// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProcessingMachine.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFarmSimCharacter;
#ifdef FARMSIM_ProcessingMachine_generated_h
#error "ProcessingMachine.generated.h already included, missing '#pragma once' in ProcessingMachine.h"
#endif
#define FARMSIM_ProcessingMachine_generated_h

#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_ProcessingMachine_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execActivateProcessing);


#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_ProcessingMachine_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProcessingMachine(); \
	friend struct Z_Construct_UClass_AProcessingMachine_Statics; \
public: \
	DECLARE_CLASS(AProcessingMachine, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FarmSim"), NO_API) \
	DECLARE_SERIALIZER(AProcessingMachine)


#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_ProcessingMachine_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AProcessingMachine(AProcessingMachine&&); \
	AProcessingMachine(const AProcessingMachine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProcessingMachine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProcessingMachine); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProcessingMachine) \
	NO_API virtual ~AProcessingMachine();


#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_ProcessingMachine_h_13_PROLOG
#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_ProcessingMachine_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_ProcessingMachine_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_ProcessingMachine_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_ProcessingMachine_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FARMSIM_API UClass* StaticClass<class AProcessingMachine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_ProcessingMachine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
