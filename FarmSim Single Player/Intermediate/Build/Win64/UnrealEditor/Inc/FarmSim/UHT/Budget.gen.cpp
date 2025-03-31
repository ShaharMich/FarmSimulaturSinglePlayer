// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FarmSim/Budget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBudget() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
FARMSIM_API UClass* Z_Construct_UClass_UBudget();
FARMSIM_API UClass* Z_Construct_UClass_UBudget_NoRegister();
UPackage* Z_Construct_UPackage__Script_FarmSim();
// End Cross Module References

// Begin Class UBudget Function CanAfford
struct Z_Construct_UFunction_UBudget_CanAfford_Statics
{
	struct Budget_eventCanAfford_Parms
	{
		float Amount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Budget" },
		{ "ModuleRelativePath", "Budget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBudget_CanAfford_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Budget_eventCanAfford_Parms, Amount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBudget_CanAfford_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Budget_eventCanAfford_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBudget_CanAfford_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Budget_eventCanAfford_Parms), &Z_Construct_UFunction_UBudget_CanAfford_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBudget_CanAfford_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBudget_CanAfford_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBudget_CanAfford_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBudget_CanAfford_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBudget_CanAfford_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBudget, nullptr, "CanAfford", nullptr, nullptr, Z_Construct_UFunction_UBudget_CanAfford_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBudget_CanAfford_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBudget_CanAfford_Statics::Budget_eventCanAfford_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBudget_CanAfford_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBudget_CanAfford_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBudget_CanAfford_Statics::Budget_eventCanAfford_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBudget_CanAfford()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBudget_CanAfford_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBudget::execCanAfford)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanAfford(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UBudget Function CanAfford

// Begin Class UBudget Function DecreaseBudget
struct Z_Construct_UFunction_UBudget_DecreaseBudget_Statics
{
	struct Budget_eventDecreaseBudget_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Budget" },
		{ "ModuleRelativePath", "Budget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBudget_DecreaseBudget_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Budget_eventDecreaseBudget_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBudget_DecreaseBudget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBudget_DecreaseBudget_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBudget_DecreaseBudget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBudget_DecreaseBudget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBudget, nullptr, "DecreaseBudget", nullptr, nullptr, Z_Construct_UFunction_UBudget_DecreaseBudget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBudget_DecreaseBudget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBudget_DecreaseBudget_Statics::Budget_eventDecreaseBudget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBudget_DecreaseBudget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBudget_DecreaseBudget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBudget_DecreaseBudget_Statics::Budget_eventDecreaseBudget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBudget_DecreaseBudget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBudget_DecreaseBudget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBudget::execDecreaseBudget)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DecreaseBudget(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UBudget Function DecreaseBudget

// Begin Class UBudget Function GetBudget
struct Z_Construct_UFunction_UBudget_GetBudget_Statics
{
	struct Budget_eventGetBudget_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Budget" },
		{ "ModuleRelativePath", "Budget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBudget_GetBudget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Budget_eventGetBudget_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBudget_GetBudget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBudget_GetBudget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBudget_GetBudget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBudget_GetBudget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBudget, nullptr, "GetBudget", nullptr, nullptr, Z_Construct_UFunction_UBudget_GetBudget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBudget_GetBudget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBudget_GetBudget_Statics::Budget_eventGetBudget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBudget_GetBudget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBudget_GetBudget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBudget_GetBudget_Statics::Budget_eventGetBudget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBudget_GetBudget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBudget_GetBudget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBudget::execGetBudget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetBudget();
	P_NATIVE_END;
}
// End Class UBudget Function GetBudget

// Begin Class UBudget Function IncreaseBudget
struct Z_Construct_UFunction_UBudget_IncreaseBudget_Statics
{
	struct Budget_eventIncreaseBudget_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Budget" },
		{ "ModuleRelativePath", "Budget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBudget_IncreaseBudget_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Budget_eventIncreaseBudget_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBudget_IncreaseBudget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBudget_IncreaseBudget_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBudget_IncreaseBudget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBudget_IncreaseBudget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBudget, nullptr, "IncreaseBudget", nullptr, nullptr, Z_Construct_UFunction_UBudget_IncreaseBudget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBudget_IncreaseBudget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBudget_IncreaseBudget_Statics::Budget_eventIncreaseBudget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBudget_IncreaseBudget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBudget_IncreaseBudget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBudget_IncreaseBudget_Statics::Budget_eventIncreaseBudget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBudget_IncreaseBudget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBudget_IncreaseBudget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBudget::execIncreaseBudget)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseBudget(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UBudget Function IncreaseBudget

// Begin Class UBudget
void UBudget::StaticRegisterNativesUBudget()
{
	UClass* Class = UBudget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanAfford", &UBudget::execCanAfford },
		{ "DecreaseBudget", &UBudget::execDecreaseBudget },
		{ "GetBudget", &UBudget::execGetBudget },
		{ "IncreaseBudget", &UBudget::execIncreaseBudget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBudget);
UClass* Z_Construct_UClass_UBudget_NoRegister()
{
	return UBudget::StaticClass();
}
struct Z_Construct_UClass_UBudget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Budget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Budget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBudget_CanAfford, "CanAfford" }, // 634040104
		{ &Z_Construct_UFunction_UBudget_DecreaseBudget, "DecreaseBudget" }, // 3400117691
		{ &Z_Construct_UFunction_UBudget_GetBudget, "GetBudget" }, // 3893760388
		{ &Z_Construct_UFunction_UBudget_IncreaseBudget, "IncreaseBudget" }, // 611926706
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBudget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBudget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FarmSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBudget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBudget_Statics::ClassParams = {
	&UBudget::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBudget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBudget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBudget()
{
	if (!Z_Registration_Info_UClass_UBudget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBudget.OuterSingleton, Z_Construct_UClass_UBudget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBudget.OuterSingleton;
}
template<> FARMSIM_API UClass* StaticClass<UBudget>()
{
	return UBudget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBudget);
UBudget::~UBudget() {}
// End Class UBudget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_Budget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBudget, UBudget::StaticClass, TEXT("UBudget"), &Z_Registration_Info_UClass_UBudget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBudget), 274398430U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_Budget_h_2365066012(TEXT("/Script/FarmSim"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_Budget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_Budget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
