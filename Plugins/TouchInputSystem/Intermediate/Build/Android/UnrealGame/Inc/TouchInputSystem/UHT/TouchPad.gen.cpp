// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TouchInputSystem/Widget/TouchPad/TouchPad.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTouchPad() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
TOUCHINPUTSYSTEM_API UClass* Z_Construct_UClass_UBaseTouchButton();
TOUCHINPUTSYSTEM_API UClass* Z_Construct_UClass_UTouchPad();
TOUCHINPUTSYSTEM_API UClass* Z_Construct_UClass_UTouchPad_NoRegister();
UPackage* Z_Construct_UPackage__Script_TouchInputSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTouchPad Function BroadcastControlRotation ******************************
struct Z_Construct_UFunction_UTouchPad_BroadcastControlRotation_Statics
{
	struct TouchPad_eventBroadcastControlRotation_Parms
	{
		FVector2D ControlRotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TouchPad" },
		{ "ModuleRelativePath", "Widget/TouchPad/TouchPad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchPad_BroadcastControlRotation_Statics::NewProp_ControlRotation = { "ControlRotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchPad_eventBroadcastControlRotation_Parms, ControlRotation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlRotation_MetaData), NewProp_ControlRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchPad_BroadcastControlRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchPad_BroadcastControlRotation_Statics::NewProp_ControlRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchPad_BroadcastControlRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchPad_BroadcastControlRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchPad, nullptr, "BroadcastControlRotation", Z_Construct_UFunction_UTouchPad_BroadcastControlRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchPad_BroadcastControlRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchPad_BroadcastControlRotation_Statics::TouchPad_eventBroadcastControlRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchPad_BroadcastControlRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchPad_BroadcastControlRotation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchPad_BroadcastControlRotation_Statics::TouchPad_eventBroadcastControlRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchPad_BroadcastControlRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchPad_BroadcastControlRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchPad::execBroadcastControlRotation)
{
	P_GET_STRUCT(FVector2D,Z_Param_ControlRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BroadcastControlRotation(Z_Param_ControlRotation);
	P_NATIVE_END;
}
// ********** End Class UTouchPad Function BroadcastControlRotation ********************************

// ********** Begin Class UTouchPad ****************************************************************
void UTouchPad::StaticRegisterNativesUTouchPad()
{
	UClass* Class = UTouchPad::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BroadcastControlRotation", &UTouchPad::execBroadcastControlRotation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTouchPad;
UClass* UTouchPad::GetPrivateStaticClass()
{
	using TClass = UTouchPad;
	if (!Z_Registration_Info_UClass_UTouchPad.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TouchPad"),
			Z_Registration_Info_UClass_UTouchPad.InnerSingleton,
			StaticRegisterNativesUTouchPad,
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
	return Z_Registration_Info_UClass_UTouchPad.InnerSingleton;
}
UClass* Z_Construct_UClass_UTouchPad_NoRegister()
{
	return UTouchPad::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTouchPad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widget/TouchPad/TouchPad.h" },
		{ "ModuleRelativePath", "Widget/TouchPad/TouchPad.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTouchPad_BroadcastControlRotation, "BroadcastControlRotation" }, // 1442224291
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTouchPad>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTouchPad_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseTouchButton,
	(UObject* (*)())Z_Construct_UPackage__Script_TouchInputSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchPad_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTouchPad_Statics::ClassParams = {
	&UTouchPad::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchPad_Statics::Class_MetaDataParams), Z_Construct_UClass_UTouchPad_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTouchPad()
{
	if (!Z_Registration_Info_UClass_UTouchPad.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTouchPad.OuterSingleton, Z_Construct_UClass_UTouchPad_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTouchPad.OuterSingleton;
}
UTouchPad::UTouchPad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchPad);
UTouchPad::~UTouchPad() {}
// ********** End Class UTouchPad ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_TouchPad_TouchPad_h__Script_TouchInputSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTouchPad, UTouchPad::StaticClass, TEXT("UTouchPad"), &Z_Registration_Info_UClass_UTouchPad, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTouchPad), 1377253538U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_TouchPad_TouchPad_h__Script_TouchInputSystem_1435209819(TEXT("/Script/TouchInputSystem"),
	Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_TouchPad_TouchPad_h__Script_TouchInputSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_TouchPad_TouchPad_h__Script_TouchInputSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
