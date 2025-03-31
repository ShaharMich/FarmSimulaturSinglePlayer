// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FarmSim/FarmSimCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFarmSimCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
FARMSIM_API UClass* Z_Construct_UClass_AFarmSimCharacter();
FARMSIM_API UClass* Z_Construct_UClass_AFarmSimCharacter_NoRegister();
FARMSIM_API UClass* Z_Construct_UClass_UBudget_NoRegister();
FARMSIM_API UClass* Z_Construct_UClass_USaleSystem_NoRegister();
FARMSIM_API UEnum* Z_Construct_UEnum_FarmSim_EHarvestState();
UPackage* Z_Construct_UPackage__Script_FarmSim();
// End Cross Module References

// Begin Class AFarmSimCharacter
void AFarmSimCharacter::StaticRegisterNativesAFarmSimCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFarmSimCharacter);
UClass* Z_Construct_UClass_AFarmSimCharacter_NoRegister()
{
	return AFarmSimCharacter::StaticClass();
}
struct Z_Construct_UClass_AFarmSimCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FarmSimCharacter.h" },
		{ "ModuleRelativePath", "FarmSimCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FarmSimCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FarmSimCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "FarmSimCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "FarmSimCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "FarmSimCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "FarmSimCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "FarmSimCharacter" },
		{ "ModuleRelativePath", "FarmSimCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasSeeds_MetaData[] = {
		{ "Category", "FarmSimCharacter" },
		{ "ModuleRelativePath", "FarmSimCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeldSeed_MetaData[] = {
		{ "Category", "Processing" },
		{ "ModuleRelativePath", "FarmSimCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeldPlant_MetaData[] = {
		{ "Category", "Processing" },
		{ "ModuleRelativePath", "FarmSimCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasWater_MetaData[] = {
		{ "Category", "FarmSimCharacter" },
		{ "ModuleRelativePath", "FarmSimCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasPlant_MetaData[] = {
		{ "Category", "FarmSimCharacter" },
		{ "ModuleRelativePath", "FarmSimCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Budget_MetaData[] = {
		{ "Category", "Budget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FarmSimCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaleSystem_MetaData[] = {
		{ "Category", "Budget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FarmSimCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static void NewProp_HasSeeds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasSeeds;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HeldSeed;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HeldPlant;
	static void NewProp_HasWater_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasWater;
	static void NewProp_HasPlant_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasPlant;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Budget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaleSystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFarmSimCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmSimCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmSimCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmSimCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmSimCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmSimCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmSimCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmSimCharacter, CurrentState), Z_Construct_UEnum_FarmSim_EHarvestState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 2335897993
void Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_HasSeeds_SetBit(void* Obj)
{
	((AFarmSimCharacter*)Obj)->HasSeeds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_HasSeeds = { "HasSeeds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFarmSimCharacter), &Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_HasSeeds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasSeeds_MetaData), NewProp_HasSeeds_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_HeldSeed = { "HeldSeed", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmSimCharacter, HeldSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeldSeed_MetaData), NewProp_HeldSeed_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_HeldPlant = { "HeldPlant", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmSimCharacter, HeldPlant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeldPlant_MetaData), NewProp_HeldPlant_MetaData) };
void Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_HasWater_SetBit(void* Obj)
{
	((AFarmSimCharacter*)Obj)->HasWater = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_HasWater = { "HasWater", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFarmSimCharacter), &Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_HasWater_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasWater_MetaData), NewProp_HasWater_MetaData) };
void Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_HasPlant_SetBit(void* Obj)
{
	((AFarmSimCharacter*)Obj)->HasPlant = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_HasPlant = { "HasPlant", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFarmSimCharacter), &Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_HasPlant_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasPlant_MetaData), NewProp_HasPlant_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_Budget = { "Budget", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmSimCharacter, Budget), Z_Construct_UClass_UBudget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Budget_MetaData), NewProp_Budget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_SaleSystem = { "SaleSystem", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmSimCharacter, SaleSystem), Z_Construct_UClass_USaleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaleSystem_MetaData), NewProp_SaleSystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFarmSimCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_HasSeeds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_HeldSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_HeldPlant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_HasWater,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_HasPlant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_Budget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmSimCharacter_Statics::NewProp_SaleSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmSimCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFarmSimCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_FarmSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmSimCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFarmSimCharacter_Statics::ClassParams = {
	&AFarmSimCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFarmSimCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFarmSimCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmSimCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AFarmSimCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFarmSimCharacter()
{
	if (!Z_Registration_Info_UClass_AFarmSimCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFarmSimCharacter.OuterSingleton, Z_Construct_UClass_AFarmSimCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFarmSimCharacter.OuterSingleton;
}
template<> FARMSIM_API UClass* StaticClass<AFarmSimCharacter>()
{
	return AFarmSimCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFarmSimCharacter);
AFarmSimCharacter::~AFarmSimCharacter() {}
// End Class AFarmSimCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_FarmSimCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFarmSimCharacter, AFarmSimCharacter::StaticClass, TEXT("AFarmSimCharacter"), &Z_Registration_Info_UClass_AFarmSimCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFarmSimCharacter), 4167719062U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_FarmSimCharacter_h_1702015211(TEXT("/Script/FarmSim"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_FarmSimCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_FarmSimCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
