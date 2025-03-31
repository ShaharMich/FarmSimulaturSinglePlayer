// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FarmSim/GrowingPlants.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrowingPlants() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
FARMSIM_API UClass* Z_Construct_UClass_AGrowingPlants();
FARMSIM_API UClass* Z_Construct_UClass_AGrowingPlants_NoRegister();
FARMSIM_API UClass* Z_Construct_UClass_UHarvest_NoRegister();
UPackage* Z_Construct_UPackage__Script_FarmSim();
// End Cross Module References

// Begin Class AGrowingPlants
void AGrowingPlants::StaticRegisterNativesAGrowingPlants()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGrowingPlants);
UClass* Z_Construct_UClass_AGrowingPlants_NoRegister()
{
	return AGrowingPlants::StaticClass();
}
struct Z_Construct_UClass_AGrowingPlants_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GrowingPlants.h" },
		{ "ModuleRelativePath", "GrowingPlants.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[] = {
		{ "Category", "GrowingPlants" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GrowingPlants.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Point1_MetaData[] = {
		{ "Category", "GrowingPlants" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GrowingPlants.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Point2_MetaData[] = {
		{ "Category", "GrowingPlants" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GrowingPlants.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Point3_MetaData[] = {
		{ "Category", "GrowingPlants" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GrowingPlants.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "GrowingPlants" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GrowingPlants.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Harvest_MetaData[] = {
		{ "Category", "GrowingPlants" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GrowingPlants.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedName_MetaData[] = {
		{ "Category", "Seed" },
		{ "ModuleRelativePath", "GrowingPlants.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductName_MetaData[] = {
		{ "Category", "Seed" },
		{ "ModuleRelativePath", "GrowingPlants.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Point1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Point2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Point3;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Harvest;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SeedName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProductName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrowingPlants>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrowingPlants_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrowingPlants, RootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootComp_MetaData), NewProp_RootComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrowingPlants_Statics::NewProp_Point1 = { "Point1", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrowingPlants, Point1), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Point1_MetaData), NewProp_Point1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrowingPlants_Statics::NewProp_Point2 = { "Point2", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrowingPlants, Point2), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Point2_MetaData), NewProp_Point2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrowingPlants_Statics::NewProp_Point3 = { "Point3", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrowingPlants, Point3), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Point3_MetaData), NewProp_Point3_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrowingPlants_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrowingPlants, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrowingPlants_Statics::NewProp_Harvest = { "Harvest", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrowingPlants, Harvest), Z_Construct_UClass_UHarvest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Harvest_MetaData), NewProp_Harvest_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGrowingPlants_Statics::NewProp_SeedName = { "SeedName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrowingPlants, SeedName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedName_MetaData), NewProp_SeedName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGrowingPlants_Statics::NewProp_ProductName = { "ProductName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrowingPlants, ProductName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductName_MetaData), NewProp_ProductName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrowingPlants_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrowingPlants_Statics::NewProp_RootComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrowingPlants_Statics::NewProp_Point1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrowingPlants_Statics::NewProp_Point2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrowingPlants_Statics::NewProp_Point3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrowingPlants_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrowingPlants_Statics::NewProp_Harvest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrowingPlants_Statics::NewProp_SeedName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrowingPlants_Statics::NewProp_ProductName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrowingPlants_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGrowingPlants_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FarmSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrowingPlants_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrowingPlants_Statics::ClassParams = {
	&AGrowingPlants::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGrowingPlants_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGrowingPlants_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrowingPlants_Statics::Class_MetaDataParams), Z_Construct_UClass_AGrowingPlants_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGrowingPlants()
{
	if (!Z_Registration_Info_UClass_AGrowingPlants.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGrowingPlants.OuterSingleton, Z_Construct_UClass_AGrowingPlants_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGrowingPlants.OuterSingleton;
}
template<> FARMSIM_API UClass* StaticClass<AGrowingPlants>()
{
	return AGrowingPlants::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGrowingPlants);
AGrowingPlants::~AGrowingPlants() {}
// End Class AGrowingPlants

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_GrowingPlants_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGrowingPlants, AGrowingPlants::StaticClass, TEXT("AGrowingPlants"), &Z_Registration_Info_UClass_AGrowingPlants, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGrowingPlants), 587427198U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_GrowingPlants_h_714944642(TEXT("/Script/FarmSim"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_GrowingPlants_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_GrowingPlants_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
