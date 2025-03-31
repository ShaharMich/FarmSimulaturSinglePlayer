// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FarmSim/HarvestGround.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHarvestGround() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
FARMSIM_API UClass* Z_Construct_UClass_AHarvestGround();
FARMSIM_API UClass* Z_Construct_UClass_AHarvestGround_NoRegister();
FARMSIM_API UEnum* Z_Construct_UEnum_FarmSim_EHarvestState();
FARMSIM_API UFunction* Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnPlanted__DelegateSignature();
FARMSIM_API UFunction* Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnRipped__DelegateSignature();
FARMSIM_API UFunction* Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnWatered__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_FarmSim();
// End Cross Module References

// Begin Enum EHarvestState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHarvestState;
static UEnum* EHarvestState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHarvestState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHarvestState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FarmSim_EHarvestState, (UObject*)Z_Construct_UPackage__Script_FarmSim(), TEXT("EHarvestState"));
	}
	return Z_Registration_Info_UEnum_EHarvestState.OuterSingleton;
}
template<> FARMSIM_API UEnum* StaticEnum<EHarvestState>()
{
	return EHarvestState_StaticEnum();
}
struct Z_Construct_UEnum_FarmSim_EHarvestState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "HarvestGround.h" },
		{ "Planted.Name", "EHarvestState::Planted" },
		{ "Ripped.Name", "EHarvestState::Ripped" },
		{ "Watered.Name", "EHarvestState::Watered" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHarvestState::Planted", (int64)EHarvestState::Planted },
		{ "EHarvestState::Watered", (int64)EHarvestState::Watered },
		{ "EHarvestState::Ripped", (int64)EHarvestState::Ripped },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FarmSim_EHarvestState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FarmSim,
	nullptr,
	"EHarvestState",
	"EHarvestState",
	Z_Construct_UEnum_FarmSim_EHarvestState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FarmSim_EHarvestState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FarmSim_EHarvestState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FarmSim_EHarvestState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FarmSim_EHarvestState()
{
	if (!Z_Registration_Info_UEnum_EHarvestState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHarvestState.InnerSingleton, Z_Construct_UEnum_FarmSim_EHarvestState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHarvestState.InnerSingleton;
}
// End Enum EHarvestState

// Begin Delegate FHarvestGroundOnPlanted
struct Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnPlanted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HarvestGround.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnPlanted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FarmSim, nullptr, "HarvestGroundOnPlanted__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnPlanted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnPlanted__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnPlanted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnPlanted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FHarvestGroundOnPlanted_DelegateWrapper(const FMulticastScriptDelegate& HarvestGroundOnPlanted)
{
	HarvestGroundOnPlanted.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FHarvestGroundOnPlanted

// Begin Delegate FHarvestGroundOnWatered
struct Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnWatered__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HarvestGround.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnWatered__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FarmSim, nullptr, "HarvestGroundOnWatered__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnWatered__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnWatered__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnWatered__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnWatered__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FHarvestGroundOnWatered_DelegateWrapper(const FMulticastScriptDelegate& HarvestGroundOnWatered)
{
	HarvestGroundOnWatered.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FHarvestGroundOnWatered

// Begin Delegate FHarvestGroundOnRipped
struct Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnRipped__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HarvestGround.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnRipped__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FarmSim, nullptr, "HarvestGroundOnRipped__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnRipped__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnRipped__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnRipped__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnRipped__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FHarvestGroundOnRipped_DelegateWrapper(const FMulticastScriptDelegate& HarvestGroundOnRipped)
{
	HarvestGroundOnRipped.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FHarvestGroundOnRipped

// Begin Class AHarvestGround Function ActivateHarvesting
struct Z_Construct_UFunction_AHarvestGround_ActivateHarvesting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HarvestGround.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHarvestGround_ActivateHarvesting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHarvestGround, nullptr, "ActivateHarvesting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHarvestGround_ActivateHarvesting_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHarvestGround_ActivateHarvesting_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AHarvestGround_ActivateHarvesting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHarvestGround_ActivateHarvesting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHarvestGround::execActivateHarvesting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateHarvesting();
	P_NATIVE_END;
}
// End Class AHarvestGround Function ActivateHarvesting

// Begin Class AHarvestGround
void AHarvestGround::StaticRegisterNativesAHarvestGround()
{
	UClass* Class = AHarvestGround::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateHarvesting", &AHarvestGround::execActivateHarvesting },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHarvestGround);
UClass* Z_Construct_UClass_AHarvestGround_NoRegister()
{
	return AHarvestGround::StaticClass();
}
struct Z_Construct_UClass_AHarvestGround_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HarvestGround.h" },
		{ "ModuleRelativePath", "HarvestGround.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[] = {
		{ "Category", "HarvestGround" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HarvestGround.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerMesh_MetaData[] = {
		{ "Category", "HarvestGround" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HarvestGround.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "HarvestGround" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HarvestGround.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Activated_MetaData[] = {
		{ "Category", "HarvestGround" },
		{ "ModuleRelativePath", "HarvestGround.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlanted_MetaData[] = {
		{ "ModuleRelativePath", "HarvestGround.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWatered_MetaData[] = {
		{ "ModuleRelativePath", "HarvestGround.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRipped_MetaData[] = {
		{ "ModuleRelativePath", "HarvestGround.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedName_MetaData[] = {
		{ "Category", "Seed" },
		{ "ModuleRelativePath", "HarvestGround.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "HarvestGround" },
		{ "ModuleRelativePath", "HarvestGround.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static void NewProp_Activated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Activated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlanted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWatered;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRipped;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SeedName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHarvestGround_ActivateHarvesting, "ActivateHarvesting" }, // 1368307758
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHarvestGround>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHarvestGround_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHarvestGround, RootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootComp_MetaData), NewProp_RootComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHarvestGround_Statics::NewProp_TriggerMesh = { "TriggerMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHarvestGround, TriggerMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerMesh_MetaData), NewProp_TriggerMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHarvestGround_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHarvestGround, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
void Z_Construct_UClass_AHarvestGround_Statics::NewProp_Activated_SetBit(void* Obj)
{
	((AHarvestGround*)Obj)->Activated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHarvestGround_Statics::NewProp_Activated = { "Activated", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHarvestGround), &Z_Construct_UClass_AHarvestGround_Statics::NewProp_Activated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Activated_MetaData), NewProp_Activated_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AHarvestGround_Statics::NewProp_OnPlanted = { "OnPlanted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHarvestGround, OnPlanted), Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnPlanted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlanted_MetaData), NewProp_OnPlanted_MetaData) }; // 3046038759
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AHarvestGround_Statics::NewProp_OnWatered = { "OnWatered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHarvestGround, OnWatered), Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnWatered__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWatered_MetaData), NewProp_OnWatered_MetaData) }; // 2016367118
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AHarvestGround_Statics::NewProp_OnRipped = { "OnRipped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHarvestGround, OnRipped), Z_Construct_UDelegateFunction_FarmSim_HarvestGroundOnRipped__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRipped_MetaData), NewProp_OnRipped_MetaData) }; // 2474845478
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AHarvestGround_Statics::NewProp_SeedName = { "SeedName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHarvestGround, SeedName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedName_MetaData), NewProp_SeedName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHarvestGround_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHarvestGround_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHarvestGround, CurrentState), Z_Construct_UEnum_FarmSim_EHarvestState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 2335897993
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHarvestGround_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarvestGround_Statics::NewProp_RootComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarvestGround_Statics::NewProp_TriggerMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarvestGround_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarvestGround_Statics::NewProp_Activated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarvestGround_Statics::NewProp_OnPlanted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarvestGround_Statics::NewProp_OnWatered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarvestGround_Statics::NewProp_OnRipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarvestGround_Statics::NewProp_SeedName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarvestGround_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarvestGround_Statics::NewProp_CurrentState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHarvestGround_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHarvestGround_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FarmSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHarvestGround_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHarvestGround_Statics::ClassParams = {
	&AHarvestGround::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHarvestGround_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHarvestGround_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHarvestGround_Statics::Class_MetaDataParams), Z_Construct_UClass_AHarvestGround_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHarvestGround()
{
	if (!Z_Registration_Info_UClass_AHarvestGround.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHarvestGround.OuterSingleton, Z_Construct_UClass_AHarvestGround_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHarvestGround.OuterSingleton;
}
template<> FARMSIM_API UClass* StaticClass<AHarvestGround>()
{
	return AHarvestGround::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHarvestGround);
AHarvestGround::~AHarvestGround() {}
// End Class AHarvestGround

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_HarvestGround_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHarvestState_StaticEnum, TEXT("EHarvestState"), &Z_Registration_Info_UEnum_EHarvestState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2335897993U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHarvestGround, AHarvestGround::StaticClass, TEXT("AHarvestGround"), &Z_Registration_Info_UClass_AHarvestGround, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHarvestGround), 2837634875U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_HarvestGround_h_1974408064(TEXT("/Script/FarmSim"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_HarvestGround_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_HarvestGround_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_HarvestGround_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_HarvestGround_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
