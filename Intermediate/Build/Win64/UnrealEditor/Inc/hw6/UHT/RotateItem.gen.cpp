// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "hw6/Public/RotateItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotateItem() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
HW6_API UClass* Z_Construct_UClass_ARotateItem();
HW6_API UClass* Z_Construct_UClass_ARotateItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_hw6();
// End Cross Module References

// Begin Class ARotateItem Function RotateActor
struct Z_Construct_UFunction_ARotateItem_RotateActor_Statics
{
	struct RotateItem_eventRotateActor_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RotateItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARotateItem_RotateActor_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotateItem_eventRotateActor_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARotateItem_RotateActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARotateItem_RotateActor_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARotateItem_RotateActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARotateItem_RotateActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARotateItem, nullptr, "RotateActor", nullptr, nullptr, Z_Construct_UFunction_ARotateItem_RotateActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARotateItem_RotateActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARotateItem_RotateActor_Statics::RotateItem_eventRotateActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARotateItem_RotateActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARotateItem_RotateActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARotateItem_RotateActor_Statics::RotateItem_eventRotateActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARotateItem_RotateActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARotateItem_RotateActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARotateItem::execRotateActor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RotateActor(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class ARotateItem Function RotateActor

// Begin Class ARotateItem
void ARotateItem::StaticRegisterNativesARotateItem()
{
	UClass* Class = ARotateItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RotateActor", &ARotateItem::execRotateActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARotateItem);
UClass* Z_Construct_UClass_ARotateItem_NoRegister()
{
	return ARotateItem::StaticClass();
}
struct Z_Construct_UClass_ARotateItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RotateItem.h" },
		{ "ModuleRelativePath", "Public/RotateItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "RotateItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RotateItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Item|Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RotateItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Item|Rotation" },
		{ "ModuleRelativePath", "Public/RotateItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAxis_MetaData[] = {
		{ "Category", "Item|Rotation" },
		{ "ModuleRelativePath", "Public/RotateItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationAxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARotateItem_RotateActor, "RotateActor" }, // 4254334258
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotateItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotateItem_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotateItem, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotateItem_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotateItem, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotateItem_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotateItem, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARotateItem_Statics::NewProp_RotationAxis = { "RotationAxis", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotateItem, RotationAxis), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAxis_MetaData), NewProp_RotationAxis_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARotateItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotateItem_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotateItem_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotateItem_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotateItem_Statics::NewProp_RotationAxis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotateItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARotateItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_hw6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotateItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARotateItem_Statics::ClassParams = {
	&ARotateItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARotateItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARotateItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARotateItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ARotateItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARotateItem()
{
	if (!Z_Registration_Info_UClass_ARotateItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARotateItem.OuterSingleton, Z_Construct_UClass_ARotateItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARotateItem.OuterSingleton;
}
template<> HW6_API UClass* StaticClass<ARotateItem>()
{
	return ARotateItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARotateItem);
ARotateItem::~ARotateItem() {}
// End Class ARotateItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_SEONGHYEON_Hw6_hw6_Source_hw6_Public_RotateItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARotateItem, ARotateItem::StaticClass, TEXT("ARotateItem"), &Z_Registration_Info_UClass_ARotateItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARotateItem), 3247759169U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_SEONGHYEON_Hw6_hw6_Source_hw6_Public_RotateItem_h_1850406956(TEXT("/Script/hw6"),
	Z_CompiledInDeferFile_FID_NBC_SEONGHYEON_Hw6_hw6_Source_hw6_Public_RotateItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_SEONGHYEON_Hw6_hw6_Source_hw6_Public_RotateItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
