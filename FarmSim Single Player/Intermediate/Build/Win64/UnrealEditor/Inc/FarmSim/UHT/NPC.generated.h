// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NPC.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FARMSIM_NPC_generated_h
#error "NPC.generated.h already included, missing '#pragma once' in NPC.h"
#endif
#define FARMSIM_NPC_generated_h

#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_NPC_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCompletePurchase); \
	DECLARE_FUNCTION(execMoveToCounter);


#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_NPC_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPC(); \
	friend struct Z_Construct_UClass_ANPC_Statics; \
public: \
	DECLARE_CLASS(ANPC, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FarmSim"), NO_API) \
	DECLARE_SERIALIZER(ANPC)


#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_NPC_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANPC(ANPC&&); \
	ANPC(const ANPC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANPC) \
	NO_API virtual ~ANPC();


#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_NPC_h_9_PROLOG
#define FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_NPC_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_NPC_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_NPC_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_NPC_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FARMSIM_API UClass* StaticClass<class ANPC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_NPC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
