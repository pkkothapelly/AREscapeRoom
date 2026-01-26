// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RubiksCubeActor.h"

#ifdef ESCAPEROOM_RubiksCubeActor_generated_h
#error "RubiksCubeActor.generated.h already included, missing '#pragma once' in RubiksCubeActor.h"
#endif
#define ESCAPEROOM_RubiksCubeActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UPrimitiveComponent;
struct FKey;

// ********** Begin Class ARubiksCubeActor *********************************************************
#define FID_EscapeRoom_Source_EscapeRoom_Public_RubiksCubeActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPieceClicked); \
	DECLARE_FUNCTION(execTestRotateZPos);


ESCAPEROOM_API UClass* Z_Construct_UClass_ARubiksCubeActor_NoRegister();

#define FID_EscapeRoom_Source_EscapeRoom_Public_RubiksCubeActor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARubiksCubeActor(); \
	friend struct Z_Construct_UClass_ARubiksCubeActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ESCAPEROOM_API UClass* Z_Construct_UClass_ARubiksCubeActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ARubiksCubeActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EscapeRoom"), Z_Construct_UClass_ARubiksCubeActor_NoRegister) \
	DECLARE_SERIALIZER(ARubiksCubeActor)


#define FID_EscapeRoom_Source_EscapeRoom_Public_RubiksCubeActor_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARubiksCubeActor(ARubiksCubeActor&&) = delete; \
	ARubiksCubeActor(const ARubiksCubeActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARubiksCubeActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARubiksCubeActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARubiksCubeActor) \
	NO_API virtual ~ARubiksCubeActor();


#define FID_EscapeRoom_Source_EscapeRoom_Public_RubiksCubeActor_h_17_PROLOG
#define FID_EscapeRoom_Source_EscapeRoom_Public_RubiksCubeActor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EscapeRoom_Source_EscapeRoom_Public_RubiksCubeActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EscapeRoom_Source_EscapeRoom_Public_RubiksCubeActor_h_20_INCLASS_NO_PURE_DECLS \
	FID_EscapeRoom_Source_EscapeRoom_Public_RubiksCubeActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARubiksCubeActor;

// ********** End Class ARubiksCubeActor ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EscapeRoom_Source_EscapeRoom_Public_RubiksCubeActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
