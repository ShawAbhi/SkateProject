// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TouchInputSystem/Common/Data/EnumsStruct/FInGameButtonData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFInGameButtonData() {}

// ********** Begin Cross Module References ********************************************************
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
TOUCHINPUTSYSTEM_API UEnum* Z_Construct_UEnum_TouchInputSystem_EEnum_TouchMode();
TOUCHINPUTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInGameButtonData();
UPackage* Z_Construct_UPackage__Script_TouchInputSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FInGameButtonData *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInGameButtonData;
class UScriptStruct* FInGameButtonData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInGameButtonData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInGameButtonData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInGameButtonData, (UObject*)Z_Construct_UPackage__Script_TouchInputSystem(), TEXT("InGameButtonData"));
	}
	return Z_Registration_Info_UScriptStruct_FInGameButtonData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInGameButtonData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Common/Data/EnumsStruct/FInGameButtonData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsToggleButton_MetaData[] = {
		{ "Category", "TouchSystem" },
		{ "ModuleRelativePath", "Common/Data/EnumsStruct/FInGameButtonData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPassthroughTouch_MetaData[] = {
		{ "Category", "TouchSystem" },
		{ "ModuleRelativePath", "Common/Data/EnumsStruct/FInGameButtonData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireTouchMode_MetaData[] = {
		{ "Category", "TouchSystem" },
		{ "ModuleRelativePath", "Common/Data/EnumsStruct/FInGameButtonData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchModeToUse_MetaData[] = {
		{ "Category", "TouchSystem" },
		{ "EditCondition", "bRequireTouchMode" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Common/Data/EnumsStruct/FInGameButtonData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "TouchSystem" },
		{ "ModuleRelativePath", "Common/Data/EnumsStruct/FInGameButtonData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTickTouchEvent_MetaData[] = {
		{ "Category", "TouchSystem" },
		{ "ModuleRelativePath", "Common/Data/EnumsStruct/FInGameButtonData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchModeToTick_MetaData[] = {
		{ "Category", "TouchSystem" },
		{ "EditCondition", "bTickTouchEvent" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Common/Data/EnumsStruct/FInGameButtonData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSeparateActionToTick_MetaData[] = {
		{ "Category", "TouchSystem" },
		{ "EditCondition", "bTickTouchEvent" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Common/Data/EnumsStruct/FInGameButtonData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActionToTick_MetaData[] = {
		{ "Category", "TouchSystem" },
		{ "EditCondition", "bSeparateActionToTick" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Common/Data/EnumsStruct/FInGameButtonData.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsToggleButton_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsToggleButton;
	static void NewProp_bPassthroughTouch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPassthroughTouch;
	static void NewProp_bRequireTouchMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireTouchMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TouchModeToUse_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TouchModeToUse_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TouchModeToUse;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static void NewProp_bTickTouchEvent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTickTouchEvent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TouchModeToTick_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TouchModeToTick;
	static void NewProp_bSeparateActionToTick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSeparateActionToTick;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputActionToTick;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInGameButtonData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_bIsToggleButton_SetBit(void* Obj)
{
	((FInGameButtonData*)Obj)->bIsToggleButton = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_bIsToggleButton = { "bIsToggleButton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInGameButtonData), &Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_bIsToggleButton_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsToggleButton_MetaData), NewProp_bIsToggleButton_MetaData) };
void Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_bPassthroughTouch_SetBit(void* Obj)
{
	((FInGameButtonData*)Obj)->bPassthroughTouch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_bPassthroughTouch = { "bPassthroughTouch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInGameButtonData), &Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_bPassthroughTouch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPassthroughTouch_MetaData), NewProp_bPassthroughTouch_MetaData) };
void Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_bRequireTouchMode_SetBit(void* Obj)
{
	((FInGameButtonData*)Obj)->bRequireTouchMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_bRequireTouchMode = { "bRequireTouchMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInGameButtonData), &Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_bRequireTouchMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireTouchMode_MetaData), NewProp_bRequireTouchMode_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_TouchModeToUse_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_TouchModeToUse_Inner = { "TouchModeToUse", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_TouchInputSystem_EEnum_TouchMode, METADATA_PARAMS(0, nullptr) }; // 4282262165
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_TouchModeToUse = { "TouchModeToUse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInGameButtonData, TouchModeToUse), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchModeToUse_MetaData), NewProp_TouchModeToUse_MetaData) }; // 4282262165
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInGameButtonData, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
void Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_bTickTouchEvent_SetBit(void* Obj)
{
	((FInGameButtonData*)Obj)->bTickTouchEvent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_bTickTouchEvent = { "bTickTouchEvent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInGameButtonData), &Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_bTickTouchEvent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTickTouchEvent_MetaData), NewProp_bTickTouchEvent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_TouchModeToTick_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_TouchModeToTick = { "TouchModeToTick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInGameButtonData, TouchModeToTick), Z_Construct_UEnum_TouchInputSystem_EEnum_TouchMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchModeToTick_MetaData), NewProp_TouchModeToTick_MetaData) }; // 4282262165
void Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_bSeparateActionToTick_SetBit(void* Obj)
{
	((FInGameButtonData*)Obj)->bSeparateActionToTick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_bSeparateActionToTick = { "bSeparateActionToTick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInGameButtonData), &Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_bSeparateActionToTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSeparateActionToTick_MetaData), NewProp_bSeparateActionToTick_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_InputActionToTick = { "InputActionToTick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInGameButtonData, InputActionToTick), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActionToTick_MetaData), NewProp_InputActionToTick_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInGameButtonData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_bIsToggleButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_bPassthroughTouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_bRequireTouchMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_TouchModeToUse_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_TouchModeToUse_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_TouchModeToUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_bTickTouchEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_TouchModeToTick_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_TouchModeToTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_bSeparateActionToTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewProp_InputActionToTick,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInGameButtonData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInGameButtonData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TouchInputSystem,
	nullptr,
	&NewStructOps,
	"InGameButtonData",
	Z_Construct_UScriptStruct_FInGameButtonData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInGameButtonData_Statics::PropPointers),
	sizeof(FInGameButtonData),
	alignof(FInGameButtonData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInGameButtonData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInGameButtonData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInGameButtonData()
{
	if (!Z_Registration_Info_UScriptStruct_FInGameButtonData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInGameButtonData.InnerSingleton, Z_Construct_UScriptStruct_FInGameButtonData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInGameButtonData.InnerSingleton;
}
// ********** End ScriptStruct FInGameButtonData ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Data_EnumsStruct_FInGameButtonData_h__Script_TouchInputSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInGameButtonData::StaticStruct, Z_Construct_UScriptStruct_FInGameButtonData_Statics::NewStructOps, TEXT("InGameButtonData"), &Z_Registration_Info_UScriptStruct_FInGameButtonData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInGameButtonData), 479906529U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Data_EnumsStruct_FInGameButtonData_h__Script_TouchInputSystem_3930157635(TEXT("/Script/TouchInputSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Data_EnumsStruct_FInGameButtonData_h__Script_TouchInputSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Data_EnumsStruct_FInGameButtonData_h__Script_TouchInputSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
