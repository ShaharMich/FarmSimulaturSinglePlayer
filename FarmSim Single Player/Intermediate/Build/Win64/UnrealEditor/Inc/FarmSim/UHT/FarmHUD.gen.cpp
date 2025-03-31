// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FarmSim/FarmHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFarmHUD() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AHUD();
FARMSIM_API UClass* Z_Construct_UClass_AFarmHUD();
FARMSIM_API UClass* Z_Construct_UClass_AFarmHUD_NoRegister();
UPackage* Z_Construct_UPackage__Script_FarmSim();
// End Cross Module References

// Begin Class AFarmHUD
void AFarmHUD::StaticRegisterNativesAFarmHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFarmHUD);
UClass* Z_Construct_UClass_AFarmHUD_NoRegister()
{
	return AFarmHUD::StaticClass();
}
struct Z_Construct_UClass_AFarmHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "FarmHUD.h" },
		{ "ModuleRelativePath", "FarmHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFarmHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFarmHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_FarmSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFarmHUD_Statics::ClassParams = {
	&AFarmHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AFarmHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFarmHUD()
{
	if (!Z_Registration_Info_UClass_AFarmHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFarmHUD.OuterSingleton, Z_Construct_UClass_AFarmHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFarmHUD.OuterSingleton;
}
template<> FARMSIM_API UClass* StaticClass<AFarmHUD>()
{
	return AFarmHUD::StaticClass();
}
AFarmHUD::AFarmHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFarmHUD);
AFarmHUD::~AFarmHUD() {}
// End Class AFarmHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_FarmHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFarmHUD, AFarmHUD::StaticClass, TEXT("AFarmHUD"), &Z_Registration_Info_UClass_AFarmHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFarmHUD), 1762336065U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_FarmHUD_h_3823391594(TEXT("/Script/FarmSim"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_FarmHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_FarmHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
