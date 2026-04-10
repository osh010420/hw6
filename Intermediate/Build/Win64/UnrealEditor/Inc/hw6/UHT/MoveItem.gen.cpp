// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "hw6/Public/MoveItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveItem() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
HW6_API UClass* Z_Construct_UClass_AMoveItem();
HW6_API UClass* Z_Construct_UClass_AMoveItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_hw6();
// End Cross Module References

// Begin Class AMoveItem Function Move
struct Z_Construct_UFunction_AMoveItem_Move_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoveItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoveItem_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoveItem, nullptr, "Move", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveItem_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMoveItem_Move_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMoveItem_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoveItem_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMoveItem::execMove)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move();
	P_NATIVE_END;
}
// End Class AMoveItem Function Move

// Begin Class AMoveItem
void AMoveItem::StaticRegisterNativesAMoveItem()
{
	UClass* Class = AMoveItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Move", &AMoveItem::execMove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMoveItem);
UClass* Z_Construct_UClass_AMoveItem_NoRegister()
{
	return AMoveItem::StaticClass();
}
struct Z_Construct_UClass_AMoveItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MoveItem.h" },
		{ "ModuleRelativePath", "Public/MoveItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoveItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "item" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoveItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/MoveItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/MoveItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveDirection_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/MoveItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/MoveItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimerInterval_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xeb\x8f\x84\xec\xa0\x84\xea\xb3\xbc\xec\xa0\x9c - Tick\xec\xb2\x98\xeb\x9f\xbc \xec\x82\xac\xec\x9a\xa9\xed\x95\xa0 \xea\xb0\x92\n" },
#endif
		{ "ModuleRelativePath", "Public/MoveItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x8f\x84\xec\xa0\x84\xea\xb3\xbc\xec\xa0\x9c - Tick\xec\xb2\x98\xeb\x9f\xbc \xec\x82\xac\xec\x9a\xa9\xed\x95\xa0 \xea\xb0\x92" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeedMin_MetaData[] = {
		{ "Category", "Item|Random" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xeb\x8f\x84\xec\xa0\x84\xea\xb3\xbc\xec\xa0\x9c - \xeb\x9e\x9c\xeb\x8d\xa4\xec\x86\x8d\xec\x84\xb1 \xeb\xb6\x80\xec\x97\xac\n" },
#endif
		{ "ModuleRelativePath", "Public/MoveItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x8f\x84\xec\xa0\x84\xea\xb3\xbc\xec\xa0\x9c - \xeb\x9e\x9c\xeb\x8d\xa4\xec\x86\x8d\xec\x84\xb1 \xeb\xb6\x80\xec\x97\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeedMax_MetaData[] = {
		{ "Category", "Item|Random" },
		{ "ModuleRelativePath", "Public/MoveItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRangeMin_MetaData[] = {
		{ "Category", "Item|Random" },
		{ "ModuleRelativePath", "Public/MoveItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRangeMax_MetaData[] = {
		{ "Category", "Item|Random" },
		{ "ModuleRelativePath", "Public/MoveItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimerIntervalMin_MetaData[] = {
		{ "Category", "Item|Random" },
		{ "ModuleRelativePath", "Public/MoveItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimerIntervalMax_MetaData[] = {
		{ "Category", "Item|Random" },
		{ "ModuleRelativePath", "Public/MoveItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MoveDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimerInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeedMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeedMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRangeMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRangeMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimerIntervalMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimerIntervalMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMoveItem_Move, "Move" }, // 953783444
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoveItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveItem_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveItem, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveItem_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveItem, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveItem_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveItem, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveItem_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveItem, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMoveItem_Statics::NewProp_MoveDirection = { "MoveDirection", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveItem, MoveDirection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveDirection_MetaData), NewProp_MoveDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMoveItem_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveItem, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveItem_Statics::NewProp_TimerInterval = { "TimerInterval", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveItem, TimerInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimerInterval_MetaData), NewProp_TimerInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveItem_Statics::NewProp_MoveSpeedMin = { "MoveSpeedMin", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveItem, MoveSpeedMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeedMin_MetaData), NewProp_MoveSpeedMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveItem_Statics::NewProp_MoveSpeedMax = { "MoveSpeedMax", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveItem, MoveSpeedMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeedMax_MetaData), NewProp_MoveSpeedMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveItem_Statics::NewProp_MaxRangeMin = { "MaxRangeMin", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveItem, MaxRangeMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRangeMin_MetaData), NewProp_MaxRangeMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveItem_Statics::NewProp_MaxRangeMax = { "MaxRangeMax", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveItem, MaxRangeMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRangeMax_MetaData), NewProp_MaxRangeMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveItem_Statics::NewProp_TimerIntervalMin = { "TimerIntervalMin", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveItem, TimerIntervalMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimerIntervalMin_MetaData), NewProp_TimerIntervalMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveItem_Statics::NewProp_TimerIntervalMax = { "TimerIntervalMax", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveItem, TimerIntervalMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimerIntervalMax_MetaData), NewProp_TimerIntervalMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoveItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveItem_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveItem_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveItem_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveItem_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveItem_Statics::NewProp_MoveDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveItem_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveItem_Statics::NewProp_TimerInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveItem_Statics::NewProp_MoveSpeedMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveItem_Statics::NewProp_MoveSpeedMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveItem_Statics::NewProp_MaxRangeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveItem_Statics::NewProp_MaxRangeMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveItem_Statics::NewProp_TimerIntervalMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveItem_Statics::NewProp_TimerIntervalMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoveItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMoveItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_hw6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoveItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoveItem_Statics::ClassParams = {
	&AMoveItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMoveItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMoveItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMoveItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AMoveItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMoveItem()
{
	if (!Z_Registration_Info_UClass_AMoveItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoveItem.OuterSingleton, Z_Construct_UClass_AMoveItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMoveItem.OuterSingleton;
}
template<> HW6_API UClass* StaticClass<AMoveItem>()
{
	return AMoveItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMoveItem);
AMoveItem::~AMoveItem() {}
// End Class AMoveItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_SEONGHYEON_Hw6_hw6_Source_hw6_Public_MoveItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMoveItem, AMoveItem::StaticClass, TEXT("AMoveItem"), &Z_Registration_Info_UClass_AMoveItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoveItem), 4111682893U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_SEONGHYEON_Hw6_hw6_Source_hw6_Public_MoveItem_h_2260448996(TEXT("/Script/hw6"),
	Z_CompiledInDeferFile_FID_NBC_SEONGHYEON_Hw6_hw6_Source_hw6_Public_MoveItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_SEONGHYEON_Hw6_hw6_Source_hw6_Public_MoveItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
