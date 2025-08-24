// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TouchInputSystem/Widget/Joystick/TouchJoystick.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTouchJoystick() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
TOUCHINPUTSYSTEM_API UClass* Z_Construct_UClass_UBaseTouchButton();
TOUCHINPUTSYSTEM_API UClass* Z_Construct_UClass_UTouchJoystick();
TOUCHINPUTSYSTEM_API UClass* Z_Construct_UClass_UTouchJoystick_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UPackage* Z_Construct_UPackage__Script_TouchInputSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTouchJoystick Function GetCenterPosition ********************************
struct Z_Construct_UFunction_UTouchJoystick_GetCenterPosition_Statics
{
	struct TouchJoystick_eventGetCenterPosition_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Joystick" },
		{ "ModuleRelativePath", "Widget/Joystick/TouchJoystick.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchJoystick_GetCenterPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchJoystick_eventGetCenterPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchJoystick_GetCenterPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchJoystick_GetCenterPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchJoystick_GetCenterPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchJoystick_GetCenterPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchJoystick, nullptr, "GetCenterPosition", Z_Construct_UFunction_UTouchJoystick_GetCenterPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchJoystick_GetCenterPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchJoystick_GetCenterPosition_Statics::TouchJoystick_eventGetCenterPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchJoystick_GetCenterPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchJoystick_GetCenterPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchJoystick_GetCenterPosition_Statics::TouchJoystick_eventGetCenterPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchJoystick_GetCenterPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchJoystick_GetCenterPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchJoystick::execGetCenterPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetCenterPosition();
	P_NATIVE_END;
}
// ********** End Class UTouchJoystick Function GetCenterPosition **********************************

// ********** Begin Class UTouchJoystick Function JoystickOutput ***********************************
struct TouchJoystick_eventJoystickOutput_Parms
{
	FVector Direction;
	float Scale;
};
static FName NAME_UTouchJoystick_JoystickOutput = FName(TEXT("JoystickOutput"));
void UTouchJoystick::JoystickOutput(FVector const& Direction, const float Scale)
{
	UFunction* Func = FindFunctionChecked(NAME_UTouchJoystick_JoystickOutput);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		TouchJoystick_eventJoystickOutput_Parms Parms;
		Parms.Direction=Direction;
		Parms.Scale=Scale;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		JoystickOutput_Implementation(Direction, Scale);
	}
}
struct Z_Construct_UFunction_UTouchJoystick_JoystickOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/Joystick/TouchJoystick.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchJoystick_JoystickOutput_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchJoystick_eventJoystickOutput_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTouchJoystick_JoystickOutput_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchJoystick_eventJoystickOutput_Parms, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchJoystick_JoystickOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchJoystick_JoystickOutput_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchJoystick_JoystickOutput_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchJoystick_JoystickOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchJoystick_JoystickOutput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchJoystick, nullptr, "JoystickOutput", Z_Construct_UFunction_UTouchJoystick_JoystickOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchJoystick_JoystickOutput_Statics::PropPointers), sizeof(TouchJoystick_eventJoystickOutput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchJoystick_JoystickOutput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchJoystick_JoystickOutput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TouchJoystick_eventJoystickOutput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchJoystick_JoystickOutput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchJoystick_JoystickOutput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchJoystick::execJoystickOutput)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JoystickOutput_Implementation(Z_Param_Out_Direction,Z_Param_Scale);
	P_NATIVE_END;
}
// ********** End Class UTouchJoystick Function JoystickOutput *************************************

// ********** Begin Class UTouchJoystick ***********************************************************
void UTouchJoystick::StaticRegisterNativesUTouchJoystick()
{
	UClass* Class = UTouchJoystick::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCenterPosition", &UTouchJoystick::execGetCenterPosition },
		{ "JoystickOutput", &UTouchJoystick::execJoystickOutput },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTouchJoystick;
UClass* UTouchJoystick::GetPrivateStaticClass()
{
	using TClass = UTouchJoystick;
	if (!Z_Registration_Info_UClass_UTouchJoystick.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TouchJoystick"),
			Z_Registration_Info_UClass_UTouchJoystick.InnerSingleton,
			StaticRegisterNativesUTouchJoystick,
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
	return Z_Registration_Info_UClass_UTouchJoystick.InnerSingleton;
}
UClass* Z_Construct_UClass_UTouchJoystick_NoRegister()
{
	return UTouchJoystick::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTouchJoystick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widget/Joystick/TouchJoystick.h" },
		{ "ModuleRelativePath", "Widget/Joystick/TouchJoystick.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasePanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Joystick" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget/Joystick/TouchJoystick.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbPadImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Joystick" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget/Joystick/TouchJoystick.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Joystick" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget/Joystick/TouchJoystick.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchOriginalScale_MetaData[] = {
		{ "Category", "Joystick" },
		{ "ModuleRelativePath", "Widget/Joystick/TouchJoystick.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BasePanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThumbPadImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TouchOriginalScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTouchJoystick_GetCenterPosition, "GetCenterPosition" }, // 855058779
		{ &Z_Construct_UFunction_UTouchJoystick_JoystickOutput, "JoystickOutput" }, // 677352995
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTouchJoystick>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTouchJoystick_Statics::NewProp_BasePanel = { "BasePanel", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchJoystick, BasePanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasePanel_MetaData), NewProp_BasePanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTouchJoystick_Statics::NewProp_ThumbPadImage = { "ThumbPadImage", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchJoystick, ThumbPadImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbPadImage_MetaData), NewProp_ThumbPadImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTouchJoystick_Statics::NewProp_BackgroundImage = { "BackgroundImage", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchJoystick, BackgroundImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundImage_MetaData), NewProp_BackgroundImage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTouchJoystick_Statics::NewProp_TouchOriginalScale = { "TouchOriginalScale", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchJoystick, TouchOriginalScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchOriginalScale_MetaData), NewProp_TouchOriginalScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTouchJoystick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchJoystick_Statics::NewProp_BasePanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchJoystick_Statics::NewProp_ThumbPadImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchJoystick_Statics::NewProp_BackgroundImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchJoystick_Statics::NewProp_TouchOriginalScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchJoystick_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTouchJoystick_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseTouchButton,
	(UObject* (*)())Z_Construct_UPackage__Script_TouchInputSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchJoystick_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTouchJoystick_Statics::ClassParams = {
	&UTouchJoystick::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTouchJoystick_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTouchJoystick_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchJoystick_Statics::Class_MetaDataParams), Z_Construct_UClass_UTouchJoystick_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTouchJoystick()
{
	if (!Z_Registration_Info_UClass_UTouchJoystick.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTouchJoystick.OuterSingleton, Z_Construct_UClass_UTouchJoystick_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTouchJoystick.OuterSingleton;
}
UTouchJoystick::UTouchJoystick(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchJoystick);
UTouchJoystick::~UTouchJoystick() {}
// ********** End Class UTouchJoystick *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_Joystick_TouchJoystick_h__Script_TouchInputSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTouchJoystick, UTouchJoystick::StaticClass, TEXT("UTouchJoystick"), &Z_Registration_Info_UClass_UTouchJoystick, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTouchJoystick), 1882248632U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_Joystick_TouchJoystick_h__Script_TouchInputSystem_3275973731(TEXT("/Script/TouchInputSystem"),
	Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_Joystick_TouchJoystick_h__Script_TouchInputSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_Joystick_TouchJoystick_h__Script_TouchInputSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
