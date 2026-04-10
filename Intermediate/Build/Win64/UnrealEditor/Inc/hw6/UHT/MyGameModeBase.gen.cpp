// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "hw6/Public/MyGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameModeBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
HW6_API UClass* Z_Construct_UClass_AMyGameModeBase();
HW6_API UClass* Z_Construct_UClass_AMyGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_hw6();
// End Cross Module References

// Begin Class AMyGameModeBase
void AMyGameModeBase::StaticRegisterNativesAMyGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyGameModeBase);
UClass* Z_Construct_UClass_AMyGameModeBase_NoRegister()
{
	return AMyGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AMyGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyGameModeBase.h" },
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveItemClass_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateItemClass_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveItemCount_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateItemCount_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRangeX_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRangeY_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_MoveItemClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RotateItemClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MoveItemCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RotateItemCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnRangeX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnRangeY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_MoveItemClass = { "MoveItemClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameModeBase, MoveItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveItemClass_MetaData), NewProp_MoveItemClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_RotateItemClass = { "RotateItemClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameModeBase, RotateItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateItemClass_MetaData), NewProp_RotateItemClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_MoveItemCount = { "MoveItemCount", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameModeBase, MoveItemCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveItemCount_MetaData), NewProp_MoveItemCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_RotateItemCount = { "RotateItemCount", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameModeBase, RotateItemCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateItemCount_MetaData), NewProp_RotateItemCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_SpawnRangeX = { "SpawnRangeX", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameModeBase, SpawnRangeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnRangeX_MetaData), NewProp_SpawnRangeX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_SpawnRangeY = { "SpawnRangeY", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameModeBase, SpawnRangeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnRangeY_MetaData), NewProp_SpawnRangeY_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGameModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_MoveItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_RotateItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_MoveItemCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_RotateItemCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_SpawnRangeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_SpawnRangeY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_hw6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyGameModeBase_Statics::ClassParams = {
	&AMyGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyGameModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyGameModeBase()
{
	if (!Z_Registration_Info_UClass_AMyGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyGameModeBase.OuterSingleton, Z_Construct_UClass_AMyGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyGameModeBase.OuterSingleton;
}
template<> HW6_API UClass* StaticClass<AMyGameModeBase>()
{
	return AMyGameModeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameModeBase);
AMyGameModeBase::~AMyGameModeBase() {}
// End Class AMyGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_SEONGHYEON_Hw6_hw6_Source_hw6_Public_MyGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyGameModeBase, AMyGameModeBase::StaticClass, TEXT("AMyGameModeBase"), &Z_Registration_Info_UClass_AMyGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGameModeBase), 2401919717U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_SEONGHYEON_Hw6_hw6_Source_hw6_Public_MyGameModeBase_h_733598018(TEXT("/Script/hw6"),
	Z_CompiledInDeferFile_FID_NBC_SEONGHYEON_Hw6_hw6_Source_hw6_Public_MyGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_SEONGHYEON_Hw6_hw6_Source_hw6_Public_MyGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
