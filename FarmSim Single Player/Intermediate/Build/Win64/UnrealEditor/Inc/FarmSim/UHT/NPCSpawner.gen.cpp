// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FarmSim/NPCSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCSpawner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
FARMSIM_API UClass* Z_Construct_UClass_ANPC_NoRegister();
FARMSIM_API UClass* Z_Construct_UClass_ANPCSpawner();
FARMSIM_API UClass* Z_Construct_UClass_ANPCSpawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_FarmSim();
// End Cross Module References

// Begin Class ANPCSpawner Function SpawnNPC
struct Z_Construct_UFunction_ANPCSpawner_SpawnNPC_Statics
{
	struct NPCSpawner_eventSpawnNPC_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NPCSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPCSpawner_SpawnNPC_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCSpawner_eventSpawnNPC_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPCSpawner_SpawnNPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCSpawner_SpawnNPC_Statics::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCSpawner_SpawnNPC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCSpawner_SpawnNPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCSpawner, nullptr, "SpawnNPC", nullptr, nullptr, Z_Construct_UFunction_ANPCSpawner_SpawnNPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCSpawner_SpawnNPC_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANPCSpawner_SpawnNPC_Statics::NPCSpawner_eventSpawnNPC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCSpawner_SpawnNPC_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANPCSpawner_SpawnNPC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANPCSpawner_SpawnNPC_Statics::NPCSpawner_eventSpawnNPC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANPCSpawner_SpawnNPC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCSpawner_SpawnNPC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANPCSpawner::execSpawnNPC)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnNPC(Z_Param_DestroyedActor);
	P_NATIVE_END;
}
// End Class ANPCSpawner Function SpawnNPC

// Begin Class ANPCSpawner
void ANPCSpawner::StaticRegisterNativesANPCSpawner()
{
	UClass* Class = ANPCSpawner::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnNPC", &ANPCSpawner::execSpawnNPC },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPCSpawner);
UClass* Z_Construct_UClass_ANPCSpawner_NoRegister()
{
	return ANPCSpawner::StaticClass();
}
struct Z_Construct_UClass_ANPCSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NPCSpawner.h" },
		{ "ModuleRelativePath", "NPCSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCClass_MetaData[] = {
		{ "Category", "NPC" },
		{ "ModuleRelativePath", "NPCSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "NPCSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCQueue_MetaData[] = {
		{ "ModuleRelativePath", "NPCSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NPCClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCQueue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NPCQueue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANPCSpawner_SpawnNPC, "SpawnNPC" }, // 2177315232
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANPCSpawner_Statics::NewProp_NPCClass = { "NPCClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPCSpawner, NPCClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ANPC_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCClass_MetaData), NewProp_NPCClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANPCSpawner_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPCSpawner, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLocation_MetaData), NewProp_SpawnLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPCSpawner_Statics::NewProp_NPCQueue_Inner = { "NPCQueue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ANPC_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANPCSpawner_Statics::NewProp_NPCQueue = { "NPCQueue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPCSpawner, NPCQueue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCQueue_MetaData), NewProp_NPCQueue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPCSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCSpawner_Statics::NewProp_NPCClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCSpawner_Statics::NewProp_SpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCSpawner_Statics::NewProp_NPCQueue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCSpawner_Statics::NewProp_NPCQueue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANPCSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FarmSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPCSpawner_Statics::ClassParams = {
	&ANPCSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANPCSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANPCSpawner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ANPCSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANPCSpawner()
{
	if (!Z_Registration_Info_UClass_ANPCSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPCSpawner.OuterSingleton, Z_Construct_UClass_ANPCSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANPCSpawner.OuterSingleton;
}
template<> FARMSIM_API UClass* StaticClass<ANPCSpawner>()
{
	return ANPCSpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCSpawner);
ANPCSpawner::~ANPCSpawner() {}
// End Class ANPCSpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_NPCSpawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANPCSpawner, ANPCSpawner::StaticClass, TEXT("ANPCSpawner"), &Z_Registration_Info_UClass_ANPCSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPCSpawner), 1219433942U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_NPCSpawner_h_4082501537(TEXT("/Script/FarmSim"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_NPCSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_NPCSpawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
