// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TouchInputSystem/Common/Data/EnumsStruct/FTouchInputInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFTouchInputInfo() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_ETouchIndex();
TOUCHINPUTSYSTEM_API UEnum* Z_Construct_UEnum_TouchInputSystem_EEnum_TouchMode();
TOUCHINPUTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTouchInputInfo();
UPackage* Z_Construct_UPackage__Script_TouchInputSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FTouchInputInfo ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTouchInputInfo;
class UScriptStruct* FTouchInputInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTouchInputInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTouchInputInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTouchInputInfo, (UObject*)Z_Construct_UPackage__Script_TouchInputSystem(), TEXT("TouchInputInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FTouchInputInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTouchInputInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Common/Data/EnumsStruct/FTouchInputInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FingerLocation_MetaData[] = {
		{ "Category", "TouchSystem" },
		{ "ModuleRelativePath", "Common/Data/EnumsStruct/FTouchInputInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchEventType_MetaData[] = {
		{ "Category", "TouchSystem" },
		{ "ModuleRelativePath", "Common/Data/EnumsStruct/FTouchInputInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsToggle_MetaData[] = {
		{ "Category", "TouchSystem" },
		{ "ModuleRelativePath", "Common/Data/EnumsStruct/FTouchInputInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchIndex_MetaData[] = {
		{ "Category", "TouchSystem" },
		{ "ModuleRelativePath", "Common/Data/EnumsStruct/FTouchInputInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FingerLocation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TouchEventType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TouchEventType;
	static void NewProp_bIsToggle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsToggle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TouchIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTouchInputInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTouchInputInfo_Statics::NewProp_FingerLocation = { "FingerLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchInputInfo, FingerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FingerLocation_MetaData), NewProp_FingerLocation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTouchInputInfo_Statics::NewProp_TouchEventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTouchInputInfo_Statics::NewProp_TouchEventType = { "TouchEventType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchInputInfo, TouchEventType), Z_Construct_UEnum_TouchInputSystem_EEnum_TouchMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchEventType_MetaData), NewProp_TouchEventType_MetaData) }; // 4282262165
void Z_Construct_UScriptStruct_FTouchInputInfo_Statics::NewProp_bIsToggle_SetBit(void* Obj)
{
	((FTouchInputInfo*)Obj)->bIsToggle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTouchInputInfo_Statics::NewProp_bIsToggle = { "bIsToggle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTouchInputInfo), &Z_Construct_UScriptStruct_FTouchInputInfo_Statics::NewProp_bIsToggle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsToggle_MetaData), NewProp_bIsToggle_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTouchInputInfo_Statics::NewProp_TouchIndex = { "TouchIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchInputInfo, TouchIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchIndex_MetaData), NewProp_TouchIndex_MetaData) }; // 3556756081
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTouchInputInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchInputInfo_Statics::NewProp_FingerLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchInputInfo_Statics::NewProp_TouchEventType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchInputInfo_Statics::NewProp_TouchEventType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchInputInfo_Statics::NewProp_bIsToggle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchInputInfo_Statics::NewProp_TouchIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchInputInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTouchInputInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TouchInputSystem,
	nullptr,
	&NewStructOps,
	"TouchInputInfo",
	Z_Construct_UScriptStruct_FTouchInputInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchInputInfo_Statics::PropPointers),
	sizeof(FTouchInputInfo),
	alignof(FTouchInputInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchInputInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTouchInputInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTouchInputInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FTouchInputInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTouchInputInfo.InnerSingleton, Z_Construct_UScriptStruct_FTouchInputInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTouchInputInfo.InnerSingleton;
}
// ********** End ScriptStruct FTouchInputInfo *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Data_EnumsStruct_FTouchInputInfo_h__Script_TouchInputSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTouchInputInfo::StaticStruct, Z_Construct_UScriptStruct_FTouchInputInfo_Statics::NewStructOps, TEXT("TouchInputInfo"), &Z_Registration_Info_UScriptStruct_FTouchInputInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTouchInputInfo), 2955306383U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Data_EnumsStruct_FTouchInputInfo_h__Script_TouchInputSystem_535145595(TEXT("/Script/TouchInputSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Data_EnumsStruct_FTouchInputInfo_h__Script_TouchInputSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Data_EnumsStruct_FTouchInputInfo_h__Script_TouchInputSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
