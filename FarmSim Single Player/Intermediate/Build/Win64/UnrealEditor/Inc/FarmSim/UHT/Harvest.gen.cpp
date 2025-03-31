// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FarmSim/Harvest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHarvest() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
FARMSIM_API UClass* Z_Construct_UClass_UHarvest();
FARMSIM_API UClass* Z_Construct_UClass_UHarvest_NoRegister();
FARMSIM_API UEnum* Z_Construct_UEnum_FarmSim_EHarvestState();
UPackage* Z_Construct_UPackage__Script_FarmSim();
// End Cross Module References

// Begin Class UHarvest Function OnHarvestGroundPlanted
struct Z_Construct_UFunction_UHarvest_OnHarvestGroundPlanted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Harvest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHarvest_OnHarvestGroundPlanted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHarvest, nullptr, "OnHarvestGroundPlanted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHarvest_OnHarvestGroundPlanted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHarvest_OnHarvestGroundPlanted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHarvest_OnHarvestGroundPlanted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHarvest_OnHarvestGroundPlanted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHarvest::execOnHarvestGroundPlanted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHarvestGroundPlanted();
	P_NATIVE_END;
}
// End Class UHarvest Function OnHarvestGroundPlanted

// Begin Class UHarvest Function OnHarvestGroundRipped
struct Z_Construct_UFunction_UHarvest_OnHarvestGroundRipped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Harvest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHarvest_OnHarvestGroundRipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHarvest, nullptr, "OnHarvestGroundRipped", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHarvest_OnHarvestGroundRipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHarvest_OnHarvestGroundRipped_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHarvest_OnHarvestGroundRipped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHarvest_OnHarvestGroundRipped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHarvest::execOnHarvestGroundRipped)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHarvestGroundRipped();
	P_NATIVE_END;
}
// End Class UHarvest Function OnHarvestGroundRipped

// Begin Class UHarvest Function OnHarvestGroundWatered
struct Z_Construct_UFunction_UHarvest_OnHarvestGroundWatered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Harvest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHarvest_OnHarvestGroundWatered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHarvest, nullptr, "OnHarvestGroundWatered", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHarvest_OnHarvestGroundWatered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHarvest_OnHarvestGroundWatered_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHarvest_OnHarvestGroundWatered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHarvest_OnHarvestGroundWatered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHarvest::execOnHarvestGroundWatered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHarvestGroundWatered();
	P_NATIVE_END;
}
// End Class UHarvest Function OnHarvestGroundWatered

// Begin Class UHarvest Function SetPoints
struct Z_Construct_UFunction_UHarvest_SetPoints_Statics
{
	struct Harvest_eventSetPoints_Parms
	{
		FVector Point1;
		FVector Point2;
		FVector Point3;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Harvest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Point1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Point2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Point3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHarvest_SetPoints_Statics::NewProp_Point1 = { "Point1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Harvest_eventSetPoints_Parms, Point1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHarvest_SetPoints_Statics::NewProp_Point2 = { "Point2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Harvest_eventSetPoints_Parms, Point2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHarvest_SetPoints_Statics::NewProp_Point3 = { "Point3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Harvest_eventSetPoints_Parms, Point3), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHarvest_SetPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHarvest_SetPoints_Statics::NewProp_Point1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHarvest_SetPoints_Statics::NewProp_Point2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHarvest_SetPoints_Statics::NewProp_Point3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHarvest_SetPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHarvest_SetPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHarvest, nullptr, "SetPoints", nullptr, nullptr, Z_Construct_UFunction_UHarvest_SetPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHarvest_SetPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHarvest_SetPoints_Statics::Harvest_eventSetPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHarvest_SetPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHarvest_SetPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHarvest_SetPoints_Statics::Harvest_eventSetPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHarvest_SetPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHarvest_SetPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHarvest::execSetPoints)
{
	P_GET_STRUCT(FVector,Z_Param_Point1);
	P_GET_STRUCT(FVector,Z_Param_Point2);
	P_GET_STRUCT(FVector,Z_Param_Point3);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPoints(Z_Param_Point1,Z_Param_Point2,Z_Param_Point3);
	P_NATIVE_END;
}
// End Class UHarvest Function SetPoints

// Begin Class UHarvest
void UHarvest::StaticRegisterNativesUHarvest()
{
	UClass* Class = UHarvest::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnHarvestGroundPlanted", &UHarvest::execOnHarvestGroundPlanted },
		{ "OnHarvestGroundRipped", &UHarvest::execOnHarvestGroundRipped },
		{ "OnHarvestGroundWatered", &UHarvest::execOnHarvestGroundWatered },
		{ "SetPoints", &UHarvest::execSetPoints },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHarvest);
UClass* Z_Construct_UClass_UHarvest_NoRegister()
{
	return UHarvest::StaticClass();
}
struct Z_Construct_UClass_UHarvest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Harvest.h" },
		{ "ModuleRelativePath", "Harvest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveTime_MetaData[] = {
		{ "Category", "Harvest" },
		{ "ModuleRelativePath", "Harvest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerActors_MetaData[] = {
		{ "Category", "Harvest" },
		{ "ModuleRelativePath", "Harvest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsActivated_MetaData[] = {
		{ "Category", "Harvest" },
		{ "ModuleRelativePath", "Harvest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "Harvest" },
		{ "ModuleRelativePath", "Harvest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CropName_MetaData[] = {
		{ "Category", "Crop" },
		{ "ModuleRelativePath", "Harvest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TriggerActors;
	static void NewProp_IsActivated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsActivated;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CropName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHarvest_OnHarvestGroundPlanted, "OnHarvestGroundPlanted" }, // 2191566892
		{ &Z_Construct_UFunction_UHarvest_OnHarvestGroundRipped, "OnHarvestGroundRipped" }, // 2701030885
		{ &Z_Construct_UFunction_UHarvest_OnHarvestGroundWatered, "OnHarvestGroundWatered" }, // 3206574655
		{ &Z_Construct_UFunction_UHarvest_SetPoints, "SetPoints" }, // 18538456
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHarvest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHarvest_Statics::NewProp_MoveTime = { "MoveTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHarvest, MoveTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveTime_MetaData), NewProp_MoveTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHarvest_Statics::NewProp_TriggerActors_Inner = { "TriggerActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHarvest_Statics::NewProp_TriggerActors = { "TriggerActors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHarvest, TriggerActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerActors_MetaData), NewProp_TriggerActors_MetaData) };
void Z_Construct_UClass_UHarvest_Statics::NewProp_IsActivated_SetBit(void* Obj)
{
	((UHarvest*)Obj)->IsActivated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHarvest_Statics::NewProp_IsActivated = { "IsActivated", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHarvest), &Z_Construct_UClass_UHarvest_Statics::NewProp_IsActivated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsActivated_MetaData), NewProp_IsActivated_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHarvest_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHarvest_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHarvest, CurrentState), Z_Construct_UEnum_FarmSim_EHarvestState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 2335897993
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHarvest_Statics::NewProp_CropName = { "CropName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHarvest, CropName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CropName_MetaData), NewProp_CropName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHarvest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHarvest_Statics::NewProp_MoveTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHarvest_Statics::NewProp_TriggerActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHarvest_Statics::NewProp_TriggerActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHarvest_Statics::NewProp_IsActivated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHarvest_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHarvest_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHarvest_Statics::NewProp_CropName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHarvest_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHarvest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FarmSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHarvest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHarvest_Statics::ClassParams = {
	&UHarvest::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHarvest_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHarvest_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHarvest_Statics::Class_MetaDataParams), Z_Construct_UClass_UHarvest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHarvest()
{
	if (!Z_Registration_Info_UClass_UHarvest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHarvest.OuterSingleton, Z_Construct_UClass_UHarvest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHarvest.OuterSingleton;
}
template<> FARMSIM_API UClass* StaticClass<UHarvest>()
{
	return UHarvest::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHarvest);
UHarvest::~UHarvest() {}
// End Class UHarvest

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_Harvest_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHarvest, UHarvest::StaticClass, TEXT("UHarvest"), &Z_Registration_Info_UClass_UHarvest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHarvest), 3970178515U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_Harvest_h_888056151(TEXT("/Script/FarmSim"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_Harvest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_Harvest_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
