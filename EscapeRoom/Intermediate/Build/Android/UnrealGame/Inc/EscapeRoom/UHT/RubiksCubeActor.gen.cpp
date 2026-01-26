// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RubiksCubeActor.h"
#include "InputCoreTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRubiksCubeActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ESCAPEROOM_API UClass* Z_Construct_UClass_ARubiksCubeActor();
ESCAPEROOM_API UClass* Z_Construct_UClass_ARubiksCubeActor_NoRegister();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UPackage* Z_Construct_UPackage__Script_EscapeRoom();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARubiksCubeActor Function OnPieceClicked *********************************
struct Z_Construct_UFunction_ARubiksCubeActor_OnPieceClicked_Statics
{
	struct RubiksCubeActor_eventOnPieceClicked_Parms
	{
		UPrimitiveComponent* ClickedComp;
		FKey Button;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RubiksCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickedComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Button;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARubiksCubeActor_OnPieceClicked_Statics::NewProp_ClickedComp = { "ClickedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RubiksCubeActor_eventOnPieceClicked_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickedComp_MetaData), NewProp_ClickedComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARubiksCubeActor_OnPieceClicked_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RubiksCubeActor_eventOnPieceClicked_Parms, Button), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 3982742631
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARubiksCubeActor_OnPieceClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARubiksCubeActor_OnPieceClicked_Statics::NewProp_ClickedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARubiksCubeActor_OnPieceClicked_Statics::NewProp_Button,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARubiksCubeActor_OnPieceClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARubiksCubeActor_OnPieceClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARubiksCubeActor, nullptr, "OnPieceClicked", Z_Construct_UFunction_ARubiksCubeActor_OnPieceClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARubiksCubeActor_OnPieceClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARubiksCubeActor_OnPieceClicked_Statics::RubiksCubeActor_eventOnPieceClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARubiksCubeActor_OnPieceClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARubiksCubeActor_OnPieceClicked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARubiksCubeActor_OnPieceClicked_Statics::RubiksCubeActor_eventOnPieceClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARubiksCubeActor_OnPieceClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARubiksCubeActor_OnPieceClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARubiksCubeActor::execOnPieceClicked)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp);
	P_GET_STRUCT(FKey,Z_Param_Button);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPieceClicked(Z_Param_ClickedComp,Z_Param_Button);
	P_NATIVE_END;
}
// ********** End Class ARubiksCubeActor Function OnPieceClicked ***********************************

// ********** Begin Class ARubiksCubeActor Function TestRotateZPos *********************************
struct Z_Construct_UFunction_ARubiksCubeActor_TestRotateZPos_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Rubiks" },
		{ "ModuleRelativePath", "Public/RubiksCubeActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARubiksCubeActor_TestRotateZPos_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARubiksCubeActor, nullptr, "TestRotateZPos", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARubiksCubeActor_TestRotateZPos_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARubiksCubeActor_TestRotateZPos_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ARubiksCubeActor_TestRotateZPos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARubiksCubeActor_TestRotateZPos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARubiksCubeActor::execTestRotateZPos)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestRotateZPos();
	P_NATIVE_END;
}
// ********** End Class ARubiksCubeActor Function TestRotateZPos ***********************************

// ********** Begin Class ARubiksCubeActor *********************************************************
void ARubiksCubeActor::StaticRegisterNativesARubiksCubeActor()
{
	UClass* Class = ARubiksCubeActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPieceClicked", &ARubiksCubeActor::execOnPieceClicked },
		{ "TestRotateZPos", &ARubiksCubeActor::execTestRotateZPos },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARubiksCubeActor;
UClass* ARubiksCubeActor::GetPrivateStaticClass()
{
	using TClass = ARubiksCubeActor;
	if (!Z_Registration_Info_UClass_ARubiksCubeActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RubiksCubeActor"),
			Z_Registration_Info_UClass_ARubiksCubeActor.InnerSingleton,
			StaticRegisterNativesARubiksCubeActor,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ARubiksCubeActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ARubiksCubeActor_NoRegister()
{
	return ARubiksCubeActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARubiksCubeActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RubiksCubeActor.h" },
		{ "ModuleRelativePath", "Public/RubiksCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RubiksCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubeMesh_MetaData[] = {
		{ "Category", "Rubiks" },
		{ "ModuleRelativePath", "Public/RubiksCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StickerGap_MetaData[] = {
		{ "Category", "Rubiks|Stickers" },
		{ "ModuleRelativePath", "Public/RubiksCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubeletSize_MetaData[] = {
		{ "Category", "Rubiks" },
		{ "ModuleRelativePath", "Public/RubiksCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Rubiks" },
		{ "ModuleRelativePath", "Public/RubiksCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pieces_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RubiksCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Z_Pos_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RubiksCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Z_Mid_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RubiksCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Z_Neg_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RubiksCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_Pos_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RubiksCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_Mid_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RubiksCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_Neg_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RubiksCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_Pos_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RubiksCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_Mid_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RubiksCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_Neg_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RubiksCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StickerPlaneMesh_MetaData[] = {
		{ "Category", "Rubiks|Stickers" },
		{ "ModuleRelativePath", "Public/RubiksCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StickerInset_MetaData[] = {
		{ "Category", "Rubiks|Stickers" },
		{ "ModuleRelativePath", "Public/RubiksCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinAnchor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Rubiks|Hierarchy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RubiksCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubeRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Rubiks|Hierarchy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RubiksCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MI_R_MetaData[] = {
		{ "Category", "Rubiks|Stickers" },
		{ "ModuleRelativePath", "Public/RubiksCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MI_G_MetaData[] = {
		{ "Category", "Rubiks|Stickers" },
		{ "ModuleRelativePath", "Public/RubiksCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MI_B_MetaData[] = {
		{ "Category", "Rubiks|Stickers" },
		{ "ModuleRelativePath", "Public/RubiksCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MI_O_MetaData[] = {
		{ "Category", "Rubiks|Stickers" },
		{ "ModuleRelativePath", "Public/RubiksCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MI_Y_MetaData[] = {
		{ "Category", "Rubiks|Stickers" },
		{ "ModuleRelativePath", "Public/RubiksCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MI_W_MetaData[] = {
		{ "Category", "Rubiks|Stickers" },
		{ "ModuleRelativePath", "Public/RubiksCubeActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CubeMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StickerGap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CubeletSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pieces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Pieces;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Z_Pos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Z_Mid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Z_Neg;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_X_Pos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_X_Mid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_X_Neg;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Y_Pos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Y_Mid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Y_Neg;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StickerPlaneMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StickerInset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PinAnchor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CubeRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MI_R;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MI_G;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MI_B;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MI_O;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MI_Y;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MI_W;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARubiksCubeActor_OnPieceClicked, "OnPieceClicked" }, // 134943715
		{ &Z_Construct_UFunction_ARubiksCubeActor_TestRotateZPos, "TestRotateZPos" }, // 2424419199
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARubiksCubeActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARubiksCubeActor, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_CubeMesh = { "CubeMesh", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARubiksCubeActor, CubeMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubeMesh_MetaData), NewProp_CubeMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_StickerGap = { "StickerGap", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARubiksCubeActor, StickerGap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StickerGap_MetaData), NewProp_StickerGap_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_CubeletSize = { "CubeletSize", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARubiksCubeActor, CubeletSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubeletSize_MetaData), NewProp_CubeletSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARubiksCubeActor, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_Pieces_Inner = { "Pieces", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_Pieces = { "Pieces", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARubiksCubeActor, Pieces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pieces_MetaData), NewProp_Pieces_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_Z_Pos = { "Z_Pos", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARubiksCubeActor, Z_Pos), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Z_Pos_MetaData), NewProp_Z_Pos_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_Z_Mid = { "Z_Mid", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARubiksCubeActor, Z_Mid), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Z_Mid_MetaData), NewProp_Z_Mid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_Z_Neg = { "Z_Neg", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARubiksCubeActor, Z_Neg), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Z_Neg_MetaData), NewProp_Z_Neg_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_X_Pos = { "X_Pos", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARubiksCubeActor, X_Pos), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_Pos_MetaData), NewProp_X_Pos_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_X_Mid = { "X_Mid", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARubiksCubeActor, X_Mid), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_Mid_MetaData), NewProp_X_Mid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_X_Neg = { "X_Neg", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARubiksCubeActor, X_Neg), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_Neg_MetaData), NewProp_X_Neg_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_Y_Pos = { "Y_Pos", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARubiksCubeActor, Y_Pos), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_Pos_MetaData), NewProp_Y_Pos_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_Y_Mid = { "Y_Mid", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARubiksCubeActor, Y_Mid), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_Mid_MetaData), NewProp_Y_Mid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_Y_Neg = { "Y_Neg", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARubiksCubeActor, Y_Neg), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_Neg_MetaData), NewProp_Y_Neg_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_StickerPlaneMesh = { "StickerPlaneMesh", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARubiksCubeActor, StickerPlaneMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StickerPlaneMesh_MetaData), NewProp_StickerPlaneMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_StickerInset = { "StickerInset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARubiksCubeActor, StickerInset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StickerInset_MetaData), NewProp_StickerInset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_PinAnchor = { "PinAnchor", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARubiksCubeActor, PinAnchor), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinAnchor_MetaData), NewProp_PinAnchor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_CubeRoot = { "CubeRoot", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARubiksCubeActor, CubeRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubeRoot_MetaData), NewProp_CubeRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_MI_R = { "MI_R", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARubiksCubeActor, MI_R), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MI_R_MetaData), NewProp_MI_R_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_MI_G = { "MI_G", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARubiksCubeActor, MI_G), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MI_G_MetaData), NewProp_MI_G_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_MI_B = { "MI_B", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARubiksCubeActor, MI_B), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MI_B_MetaData), NewProp_MI_B_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_MI_O = { "MI_O", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARubiksCubeActor, MI_O), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MI_O_MetaData), NewProp_MI_O_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_MI_Y = { "MI_Y", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARubiksCubeActor, MI_Y), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MI_Y_MetaData), NewProp_MI_Y_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_MI_W = { "MI_W", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARubiksCubeActor, MI_W), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MI_W_MetaData), NewProp_MI_W_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARubiksCubeActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_CubeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_StickerGap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_CubeletSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_Pieces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_Pieces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_Z_Pos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_Z_Mid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_Z_Neg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_X_Pos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_X_Mid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_X_Neg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_Y_Pos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_Y_Mid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_Y_Neg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_StickerPlaneMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_StickerInset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_PinAnchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_CubeRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_MI_R,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_MI_G,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_MI_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_MI_O,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_MI_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARubiksCubeActor_Statics::NewProp_MI_W,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARubiksCubeActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARubiksCubeActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeRoom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARubiksCubeActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARubiksCubeActor_Statics::ClassParams = {
	&ARubiksCubeActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARubiksCubeActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARubiksCubeActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARubiksCubeActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ARubiksCubeActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARubiksCubeActor()
{
	if (!Z_Registration_Info_UClass_ARubiksCubeActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARubiksCubeActor.OuterSingleton, Z_Construct_UClass_ARubiksCubeActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARubiksCubeActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARubiksCubeActor);
ARubiksCubeActor::~ARubiksCubeActor() {}
// ********** End Class ARubiksCubeActor ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EscapeRoom_Source_EscapeRoom_Public_RubiksCubeActor_h__Script_EscapeRoom_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARubiksCubeActor, ARubiksCubeActor::StaticClass, TEXT("ARubiksCubeActor"), &Z_Registration_Info_UClass_ARubiksCubeActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARubiksCubeActor), 1647239610U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EscapeRoom_Source_EscapeRoom_Public_RubiksCubeActor_h__Script_EscapeRoom_3966694910(TEXT("/Script/EscapeRoom"),
	Z_CompiledInDeferFile_FID_EscapeRoom_Source_EscapeRoom_Public_RubiksCubeActor_h__Script_EscapeRoom_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EscapeRoom_Source_EscapeRoom_Public_RubiksCubeActor_h__Script_EscapeRoom_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
