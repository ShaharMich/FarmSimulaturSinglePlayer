// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FarmSim/SaleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaleSystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
FARMSIM_API UClass* Z_Construct_UClass_USaleSystem();
FARMSIM_API UClass* Z_Construct_UClass_USaleSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_FarmSim();
// End Cross Module References

// Begin Class USaleSystem Function AddProduct
struct Z_Construct_UFunction_USaleSystem_AddProduct_Statics
{
	struct SaleSystem_eventAddProduct_Parms
	{
		FString ProductName;
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Storage" },
		{ "ModuleRelativePath", "SaleSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProductName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaleSystem_AddProduct_Statics::NewProp_ProductName = { "ProductName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaleSystem_eventAddProduct_Parms, ProductName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaleSystem_AddProduct_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaleSystem_eventAddProduct_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaleSystem_AddProduct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaleSystem_AddProduct_Statics::NewProp_ProductName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaleSystem_AddProduct_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaleSystem_AddProduct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaleSystem_AddProduct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaleSystem, nullptr, "AddProduct", nullptr, nullptr, Z_Construct_UFunction_USaleSystem_AddProduct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaleSystem_AddProduct_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaleSystem_AddProduct_Statics::SaleSystem_eventAddProduct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaleSystem_AddProduct_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaleSystem_AddProduct_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USaleSystem_AddProduct_Statics::SaleSystem_eventAddProduct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaleSystem_AddProduct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaleSystem_AddProduct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaleSystem::execAddProduct)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ProductName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddProduct(Z_Param_ProductName,Z_Param_Amount);
	P_NATIVE_END;
}
// End Class USaleSystem Function AddProduct

// Begin Class USaleSystem Function GetProductPrice
struct Z_Construct_UFunction_USaleSystem_GetProductPrice_Statics
{
	struct SaleSystem_eventGetProductPrice_Parms
	{
		FName ProductName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Budget" },
		{ "ModuleRelativePath", "SaleSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProductName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USaleSystem_GetProductPrice_Statics::NewProp_ProductName = { "ProductName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaleSystem_eventGetProductPrice_Parms, ProductName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaleSystem_GetProductPrice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaleSystem_eventGetProductPrice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaleSystem_GetProductPrice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaleSystem_GetProductPrice_Statics::NewProp_ProductName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaleSystem_GetProductPrice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaleSystem_GetProductPrice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaleSystem_GetProductPrice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaleSystem, nullptr, "GetProductPrice", nullptr, nullptr, Z_Construct_UFunction_USaleSystem_GetProductPrice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaleSystem_GetProductPrice_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaleSystem_GetProductPrice_Statics::SaleSystem_eventGetProductPrice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaleSystem_GetProductPrice_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaleSystem_GetProductPrice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USaleSystem_GetProductPrice_Statics::SaleSystem_eventGetProductPrice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaleSystem_GetProductPrice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaleSystem_GetProductPrice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaleSystem::execGetProductPrice)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ProductName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetProductPrice(Z_Param_ProductName);
	P_NATIVE_END;
}
// End Class USaleSystem Function GetProductPrice

// Begin Class USaleSystem Function GetTotalProducts
struct Z_Construct_UFunction_USaleSystem_GetTotalProducts_Statics
{
	struct SaleSystem_eventGetTotalProducts_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Storage" },
		{ "ModuleRelativePath", "SaleSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaleSystem_GetTotalProducts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaleSystem_eventGetTotalProducts_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaleSystem_GetTotalProducts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaleSystem_GetTotalProducts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaleSystem_GetTotalProducts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaleSystem_GetTotalProducts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaleSystem, nullptr, "GetTotalProducts", nullptr, nullptr, Z_Construct_UFunction_USaleSystem_GetTotalProducts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaleSystem_GetTotalProducts_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaleSystem_GetTotalProducts_Statics::SaleSystem_eventGetTotalProducts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaleSystem_GetTotalProducts_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaleSystem_GetTotalProducts_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USaleSystem_GetTotalProducts_Statics::SaleSystem_eventGetTotalProducts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaleSystem_GetTotalProducts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaleSystem_GetTotalProducts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaleSystem::execGetTotalProducts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTotalProducts();
	P_NATIVE_END;
}
// End Class USaleSystem Function GetTotalProducts

// Begin Class USaleSystem Function IsAvailable
struct Z_Construct_UFunction_USaleSystem_IsAvailable_Statics
{
	struct SaleSystem_eventIsAvailable_Parms
	{
		FName ProductName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Storage" },
		{ "ModuleRelativePath", "SaleSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProductName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USaleSystem_IsAvailable_Statics::NewProp_ProductName = { "ProductName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaleSystem_eventIsAvailable_Parms, ProductName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaleSystem_IsAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaleSystem_eventIsAvailable_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaleSystem_IsAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaleSystem_IsAvailable_Statics::NewProp_ProductName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaleSystem_IsAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaleSystem_IsAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaleSystem_IsAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaleSystem, nullptr, "IsAvailable", nullptr, nullptr, Z_Construct_UFunction_USaleSystem_IsAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaleSystem_IsAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaleSystem_IsAvailable_Statics::SaleSystem_eventIsAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaleSystem_IsAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaleSystem_IsAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USaleSystem_IsAvailable_Statics::SaleSystem_eventIsAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaleSystem_IsAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaleSystem_IsAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaleSystem::execIsAvailable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ProductName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->IsAvailable(Z_Param_ProductName);
	P_NATIVE_END;
}
// End Class USaleSystem Function IsAvailable

// Begin Class USaleSystem Function RemoveProduct
struct Z_Construct_UFunction_USaleSystem_RemoveProduct_Statics
{
	struct SaleSystem_eventRemoveProduct_Parms
	{
		FString ProductName;
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Storage" },
		{ "ModuleRelativePath", "SaleSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProductName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaleSystem_RemoveProduct_Statics::NewProp_ProductName = { "ProductName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaleSystem_eventRemoveProduct_Parms, ProductName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaleSystem_RemoveProduct_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaleSystem_eventRemoveProduct_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaleSystem_RemoveProduct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaleSystem_RemoveProduct_Statics::NewProp_ProductName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaleSystem_RemoveProduct_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaleSystem_RemoveProduct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaleSystem_RemoveProduct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaleSystem, nullptr, "RemoveProduct", nullptr, nullptr, Z_Construct_UFunction_USaleSystem_RemoveProduct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaleSystem_RemoveProduct_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaleSystem_RemoveProduct_Statics::SaleSystem_eventRemoveProduct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaleSystem_RemoveProduct_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaleSystem_RemoveProduct_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USaleSystem_RemoveProduct_Statics::SaleSystem_eventRemoveProduct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaleSystem_RemoveProduct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaleSystem_RemoveProduct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaleSystem::execRemoveProduct)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ProductName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveProduct(Z_Param_ProductName,Z_Param_Amount);
	P_NATIVE_END;
}
// End Class USaleSystem Function RemoveProduct

// Begin Class USaleSystem
void USaleSystem::StaticRegisterNativesUSaleSystem()
{
	UClass* Class = USaleSystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddProduct", &USaleSystem::execAddProduct },
		{ "GetProductPrice", &USaleSystem::execGetProductPrice },
		{ "GetTotalProducts", &USaleSystem::execGetTotalProducts },
		{ "IsAvailable", &USaleSystem::execIsAvailable },
		{ "RemoveProduct", &USaleSystem::execRemoveProduct },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaleSystem);
UClass* Z_Construct_UClass_USaleSystem_NoRegister()
{
	return USaleSystem::StaticClass();
}
struct Z_Construct_UClass_USaleSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SaleSystem.h" },
		{ "ModuleRelativePath", "SaleSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WheatCount_MetaData[] = {
		{ "Category", "Storage" },
		{ "ModuleRelativePath", "SaleSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlourCount_MetaData[] = {
		{ "Category", "Storage" },
		{ "ModuleRelativePath", "SaleSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SesameCount_MetaData[] = {
		{ "Category", "Storage" },
		{ "ModuleRelativePath", "SaleSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TahiniCount_MetaData[] = {
		{ "Category", "Storage" },
		{ "ModuleRelativePath", "SaleSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_WheatCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FlourCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SesameCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TahiniCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USaleSystem_AddProduct, "AddProduct" }, // 188702556
		{ &Z_Construct_UFunction_USaleSystem_GetProductPrice, "GetProductPrice" }, // 928935963
		{ &Z_Construct_UFunction_USaleSystem_GetTotalProducts, "GetTotalProducts" }, // 1191245925
		{ &Z_Construct_UFunction_USaleSystem_IsAvailable, "IsAvailable" }, // 872413845
		{ &Z_Construct_UFunction_USaleSystem_RemoveProduct, "RemoveProduct" }, // 298203791
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaleSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaleSystem_Statics::NewProp_WheatCount = { "WheatCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaleSystem, WheatCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WheatCount_MetaData), NewProp_WheatCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaleSystem_Statics::NewProp_FlourCount = { "FlourCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaleSystem, FlourCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlourCount_MetaData), NewProp_FlourCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaleSystem_Statics::NewProp_SesameCount = { "SesameCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaleSystem, SesameCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SesameCount_MetaData), NewProp_SesameCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaleSystem_Statics::NewProp_TahiniCount = { "TahiniCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaleSystem, TahiniCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TahiniCount_MetaData), NewProp_TahiniCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaleSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaleSystem_Statics::NewProp_WheatCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaleSystem_Statics::NewProp_FlourCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaleSystem_Statics::NewProp_SesameCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaleSystem_Statics::NewProp_TahiniCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaleSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USaleSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FarmSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaleSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaleSystem_Statics::ClassParams = {
	&USaleSystem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USaleSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USaleSystem_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaleSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USaleSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaleSystem()
{
	if (!Z_Registration_Info_UClass_USaleSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaleSystem.OuterSingleton, Z_Construct_UClass_USaleSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaleSystem.OuterSingleton;
}
template<> FARMSIM_API UClass* StaticClass<USaleSystem>()
{
	return USaleSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaleSystem);
USaleSystem::~USaleSystem() {}
// End Class USaleSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_SaleSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaleSystem, USaleSystem::StaticClass, TEXT("USaleSystem"), &Z_Registration_Info_UClass_USaleSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaleSystem), 1298787097U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_SaleSystem_h_2221617509(TEXT("/Script/FarmSim"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_SaleSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_FarmSim_Single_Player_Source_FarmSim_SaleSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
