// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FarmSim/ProductsStorage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProductsStorage() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
FARMSIM_API UClass* Z_Construct_UClass_AProductsStorage();
FARMSIM_API UClass* Z_Construct_UClass_AProductsStorage_NoRegister();
UPackage* Z_Construct_UPackage__Script_FarmSim();
// End Cross Module References

// Begin Class AProductsStorage
void AProductsStorage::StaticRegisterNativesAProductsStorage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProductsStorage);
UClass* Z_Construct_UClass_AProductsStorage_NoRegister()
{
	return AProductsStorage::StaticClass();
}
struct Z_Construct_UClass_AProductsStorage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ProductsStorage.h" },
		{ "ModuleRelativePath", "ProductsStorage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[] = {
		{ "Category", "ProductsStorage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProductsStorage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerMesh_MetaData[] = {
		{ "Category", "ProductsStorage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProductsStorage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "ProductsStorage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProductsStorage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProductsStorage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProductsStorage_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProductsStorage, RootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootComp_MetaData), NewProp_RootComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProductsStorage_Statics::NewProp_TriggerMesh = { "TriggerMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProductsStorage, TriggerMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerMesh_MetaData), NewProp_TriggerMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProductsStorage_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProductsStorage, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProductsStorage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProductsStorage_Statics::NewProp_RootComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProductsStorage_Statics::NewProp_TriggerMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProductsStorage_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProductsStorage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProductsStorage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FarmSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProductsStorage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProductsStorage_Statics::ClassParams = {
	&AProductsStorage::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AProductsStorage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AProductsStorage_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProductsStorage_Statics::Class_MetaDataParams), Z_Construct_UClass_AProductsStorage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProductsStorage()
{
	if (!Z_Registration_Info_UClass_AProductsStorage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProductsStorage.OuterSingleton, Z_Construct_UClass_AProductsStorage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProductsStorage.OuterSingleton;
}
template<> FARMSIM_API UClass* StaticClass<AProductsStorage>()
{
	return AProductsStorage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProductsStorage);
AProductsStorage::~AProductsStorage() {}
// End Class AProductsStorage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_ProductsStorage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProductsStorage, AProductsStorage::StaticClass, TEXT("AProductsStorage"), &Z_Registration_Info_UClass_AProductsStorage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProductsStorage), 2984069607U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_ProductsStorage_h_1679355769(TEXT("/Script/FarmSim"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_ProductsStorage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_ProductsStorage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
