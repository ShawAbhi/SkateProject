// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTouchInputSystem_init() {}
	TOUCHINPUTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamBool__DelegateSignature();
	TOUCHINPUTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamFloat__DelegateSignature();
	TOUCHINPUTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamInputStruct__DelegateSignature();
	TOUCHINPUTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamUint8__DelegateSignature();
	TOUCHINPUTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateZeroParams__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TouchInputSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TouchInputSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_TouchInputSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamBool__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamFloat__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamInputStruct__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamUint8__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateZeroParams__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TouchInputSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x09CE73C3,
				0xE8BC870C,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TouchInputSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TouchInputSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TouchInputSystem(Z_Construct_UPackage__Script_TouchInputSystem, TEXT("/Script/TouchInputSystem"), Z_Registration_Info_UPackage__Script_TouchInputSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x09CE73C3, 0xE8BC870C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
