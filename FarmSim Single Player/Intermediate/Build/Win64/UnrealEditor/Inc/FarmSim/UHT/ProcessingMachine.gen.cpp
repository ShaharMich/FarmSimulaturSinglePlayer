// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FarmSim/ProcessingMachine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProcessingMachine() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
FARMSIM_API UClass* Z_Construct_UClass_AFarmSimCharacter_NoRegister();
FARMSIM_API UClass* Z_Construct_UClass_AProcessingMachine();
FARMSIM_API UClass* Z_Construct_UClass_AProcessingMachine_NoRegister();
UPackage* Z_Construct_UPackage__Script_FarmSim();
// End Cross Module References

// Begin Class AProcessingMachine Function ActivateProcessing
struct Z_Construct_UFunction_AProcessingMachine_ActivateProcessing_Statics
{
	struct ProcessingMachine_eventActivateProcessing_Parms
	{
		AFarmSimCharacter* Player;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProcessingMachine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProcessingMachine_ActivateProcessing_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProcessingMachine_eventActivateProcessing_Parms, Player), Z_Construct_UClass_AFarmSimCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProcessingMachine_ActivateProcessing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProcessingMachine_ActivateProcessing_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProcessingMachine_ActivateProcessing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProcessingMachine_ActivateProcessing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProcessingMachine, nullptr, "ActivateProcessing", nullptr, nullptr, Z_Construct_UFunction_AProcessingMachine_ActivateProcessing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProcessingMachine_ActivateProcessing_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProcessingMachine_ActivateProcessing_Statics::ProcessingMachine_eventActivateProcessing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProcessingMachine_ActivateProcessing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProcessingMachine_ActivateProcessing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProcessingMachine_ActivateProcessing_Statics::ProcessingMachine_eventActivateProcessing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProcessingMachine_ActivateProcessing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProcessingMachine_ActivateProcessing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProcessingMachine::execActivateProcessing)
{
	P_GET_OBJECT(AFarmSimCharacter,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateProcessing(Z_Param_Player);
	P_NATIVE_END;
}
// End Class AProcessingMachine Function ActivateProcessing

// Begin Class AProcessingMachine
void AProcessingMachine::StaticRegisterNativesAProcessingMachine()
{
	UClass* Class = AProcessingMachine::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateProcessing", &AProcessingMachine::execActivateProcessing },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProcessingMachine);
UClass* Z_Construct_UClass_AProcessingMachine_NoRegister()
{
	return AProcessingMachine::StaticClass();
}
struct Z_Construct_UClass_AProcessingMachine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ProcessingMachine.h" },
		{ "ModuleRelativePath", "ProcessingMachine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[] = {
		{ "Category", "ProcessingMachine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProcessingMachine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerMesh_MetaData[] = {
		{ "Category", "ProcessingMachine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProcessingMachine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredSeedType_MetaData[] = {
		{ "Category", "Processing" },
		{ "ModuleRelativePath", "ProcessingMachine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProcessedProduct_MetaData[] = {
		{ "Category", "Processing" },
		{ "ModuleRelativePath", "ProcessingMachine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsProcessing_MetaData[] = {
		{ "Category", "Processing" },
		{ "ModuleRelativePath", "ProcessingMachine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerMesh;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RequiredSeedType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProcessedProduct;
	static void NewProp_bIsProcessing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsProcessing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AProcessingMachine_ActivateProcessing, "ActivateProcessing" }, // 359946338
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProcessingMachine>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProcessingMachine_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProcessingMachine, RootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootComp_MetaData), NewProp_RootComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProcessingMachine_Statics::NewProp_TriggerMesh = { "TriggerMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProcessingMachine, TriggerMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerMesh_MetaData), NewProp_TriggerMesh_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AProcessingMachine_Statics::NewProp_RequiredSeedType = { "RequiredSeedType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProcessingMachine, RequiredSeedType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredSeedType_MetaData), NewProp_RequiredSeedType_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AProcessingMachine_Statics::NewProp_ProcessedProduct = { "ProcessedProduct", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProcessingMachine, ProcessedProduct), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProcessedProduct_MetaData), NewProp_ProcessedProduct_MetaData) };
void Z_Construct_UClass_AProcessingMachine_Statics::NewProp_bIsProcessing_SetBit(void* Obj)
{
	((AProcessingMachine*)Obj)->bIsProcessing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProcessingMachine_Statics::NewProp_bIsProcessing = { "bIsProcessing", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AProcessingMachine), &Z_Construct_UClass_AProcessingMachine_Statics::NewProp_bIsProcessing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsProcessing_MetaData), NewProp_bIsProcessing_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProcessingMachine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcessingMachine_Statics::NewProp_RootComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcessingMachine_Statics::NewProp_TriggerMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcessingMachine_Statics::NewProp_RequiredSeedType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcessingMachine_Statics::NewProp_ProcessedProduct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcessingMachine_Statics::NewProp_bIsProcessing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProcessingMachine_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProcessingMachine_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FarmSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProcessingMachine_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProcessingMachine_Statics::ClassParams = {
	&AProcessingMachine::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AProcessingMachine_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AProcessingMachine_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProcessingMachine_Statics::Class_MetaDataParams), Z_Construct_UClass_AProcessingMachine_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProcessingMachine()
{
	if (!Z_Registration_Info_UClass_AProcessingMachine.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProcessingMachine.OuterSingleton, Z_Construct_UClass_AProcessingMachine_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProcessingMachine.OuterSingleton;
}
template<> FARMSIM_API UClass* StaticClass<AProcessingMachine>()
{
	return AProcessingMachine::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProcessingMachine);
AProcessingMachine::~AProcessingMachine() {}
// End Class AProcessingMachine

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_ProcessingMachine_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProcessingMachine, AProcessingMachine::StaticClass, TEXT("AProcessingMachine"), &Z_Registration_Info_UClass_AProcessingMachine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProcessingMachine), 376668237U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_ProcessingMachine_h_54882011(TEXT("/Script/FarmSim"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_ProcessingMachine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_ProcessingMachine_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
