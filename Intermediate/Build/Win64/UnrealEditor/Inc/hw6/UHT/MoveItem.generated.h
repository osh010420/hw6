// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HW6_MoveItem_generated_h
#error "MoveItem.generated.h already included, missing '#pragma once' in MoveItem.h"
#endif
#define HW6_MoveItem_generated_h

#define FID_NBC_SEONGHYEON_Hw6_hw6_Source_hw6_Public_MoveItem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMove);


#define FID_NBC_SEONGHYEON_Hw6_hw6_Source_hw6_Public_MoveItem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMoveItem(); \
	friend struct Z_Construct_UClass_AMoveItem_Statics; \
public: \
	DECLARE_CLASS(AMoveItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/hw6"), NO_API) \
	DECLARE_SERIALIZER(AMoveItem)


#define FID_NBC_SEONGHYEON_Hw6_hw6_Source_hw6_Public_MoveItem_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMoveItem(AMoveItem&&); \
	AMoveItem(const AMoveItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMoveItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoveItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMoveItem) \
	NO_API virtual ~AMoveItem();


#define FID_NBC_SEONGHYEON_Hw6_hw6_Source_hw6_Public_MoveItem_h_13_PROLOG
#define FID_NBC_SEONGHYEON_Hw6_hw6_Source_hw6_Public_MoveItem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NBC_SEONGHYEON_Hw6_hw6_Source_hw6_Public_MoveItem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NBC_SEONGHYEON_Hw6_hw6_Source_hw6_Public_MoveItem_h_16_INCLASS_NO_PURE_DECLS \
	FID_NBC_SEONGHYEON_Hw6_hw6_Source_hw6_Public_MoveItem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW6_API UClass* StaticClass<class AMoveItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NBC_SEONGHYEON_Hw6_hw6_Source_hw6_Public_MoveItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
