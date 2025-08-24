// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TouchInputSystem/Common/Data/EnumsStruct/ETouchMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeETouchMode() {}

// ********** Begin Cross Module References ********************************************************
TOUCHINPUTSYSTEM_API UEnum* Z_Construct_UEnum_TouchInputSystem_EEnum_TouchMode();
UPackage* Z_Construct_UPackage__Script_TouchInputSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EEnum_TouchMode ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnum_TouchMode;
static UEnum* EEnum_TouchMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnum_TouchMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnum_TouchMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TouchInputSystem_EEnum_TouchMode, (UObject*)Z_Construct_UPackage__Script_TouchInputSystem(), TEXT("EEnum_TouchMode"));
	}
	return Z_Registration_Info_UEnum_EEnum_TouchMode.OuterSingleton;
}
template<> TOUCHINPUTSYSTEM_API UEnum* StaticEnum<EEnum_TouchMode>()
{
	return EEnum_TouchMode_StaticEnum();
}
struct Z_Construct_UEnum_TouchInputSystem_EEnum_TouchMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Hold.DisplayName", "Hold" },
		{ "Hold.Name", "EEnum_TouchMode::Hold" },
		{ "HoldReleased.DisplayName", "HoldReleased" },
		{ "HoldReleased.Name", "EEnum_TouchMode::HoldReleased" },
		{ "ModuleRelativePath", "Common/Data/EnumsStruct/ETouchMode.h" },
		{ "Moved.DisplayName", "Moved" },
		{ "Moved.Name", "EEnum_TouchMode::Moved" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EEnum_TouchMode::None" },
		{ "Pressed.DisplayName", "Pressed" },
		{ "Pressed.Name", "EEnum_TouchMode::Pressed" },
		{ "Released.DisplayName", "Released" },
		{ "Released.Name", "EEnum_TouchMode::Released" },
		{ "Tap.DisplayName", "Tap" },
		{ "Tap.Name", "EEnum_TouchMode::Tap" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnum_TouchMode::None", (int64)EEnum_TouchMode::None },
		{ "EEnum_TouchMode::Pressed", (int64)EEnum_TouchMode::Pressed },
		{ "EEnum_TouchMode::Released", (int64)EEnum_TouchMode::Released },
		{ "EEnum_TouchMode::Moved", (int64)EEnum_TouchMode::Moved },
		{ "EEnum_TouchMode::Tap", (int64)EEnum_TouchMode::Tap },
		{ "EEnum_TouchMode::Hold", (int64)EEnum_TouchMode::Hold },
		{ "EEnum_TouchMode::HoldReleased", (int64)EEnum_TouchMode::HoldReleased },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TouchInputSystem_EEnum_TouchMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TouchInputSystem,
	nullptr,
	"EEnum_TouchMode",
	"EEnum_TouchMode",
	Z_Construct_UEnum_TouchInputSystem_EEnum_TouchMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TouchInputSystem_EEnum_TouchMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TouchInputSystem_EEnum_TouchMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TouchInputSystem_EEnum_TouchMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TouchInputSystem_EEnum_TouchMode()
{
	if (!Z_Registration_Info_UEnum_EEnum_TouchMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnum_TouchMode.InnerSingleton, Z_Construct_UEnum_TouchInputSystem_EEnum_TouchMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnum_TouchMode.InnerSingleton;
}
// ********** End Enum EEnum_TouchMode *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Data_EnumsStruct_ETouchMode_h__Script_TouchInputSystem_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEnum_TouchMode_StaticEnum, TEXT("EEnum_TouchMode"), &Z_Registration_Info_UEnum_EEnum_TouchMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4282262165U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Data_EnumsStruct_ETouchMode_h__Script_TouchInputSystem_771710369(TEXT("/Script/TouchInputSystem"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Data_EnumsStruct_ETouchMode_h__Script_TouchInputSystem_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Data_EnumsStruct_ETouchMode_h__Script_TouchInputSystem_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
