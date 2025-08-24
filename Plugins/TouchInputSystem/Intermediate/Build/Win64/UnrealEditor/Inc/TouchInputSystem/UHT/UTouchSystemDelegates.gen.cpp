// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TouchInputSystem/Common/Delegates/UTouchSystemDelegates.h"
#include "TouchInputSystem/Common/Data/EnumsStruct/FTouchInputInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUTouchSystemDelegates() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
TOUCHINPUTSYSTEM_API UClass* Z_Construct_UClass_UTouchSystemDelegates();
TOUCHINPUTSYSTEM_API UClass* Z_Construct_UClass_UTouchSystemDelegates_NoRegister();
TOUCHINPUTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamBool__DelegateSignature();
TOUCHINPUTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamFloat__DelegateSignature();
TOUCHINPUTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamInputStruct__DelegateSignature();
TOUCHINPUTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamUint8__DelegateSignature();
TOUCHINPUTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateZeroParams__DelegateSignature();
TOUCHINPUTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTouchInputInfo();
UPackage* Z_Construct_UPackage__Script_TouchInputSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FDynamicMulticastDelegateZeroParams ***********************************
struct Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateZeroParams__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Common/Delegates/UTouchSystemDelegates.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateZeroParams__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchSystemDelegates, nullptr, "DynamicMulticastDelegateZeroParams__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateZeroParams__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateZeroParams__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateZeroParams__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateZeroParams__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UTouchSystemDelegates::FDynamicMulticastDelegateZeroParams_DelegateWrapper(const FMulticastScriptDelegate& DynamicMulticastDelegateZeroParams)
{
	DynamicMulticastDelegateZeroParams.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FDynamicMulticastDelegateZeroParams *************************************

// ********** Begin Delegate FDynamicMulticastDelegateOneParamBool *********************************
struct Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamBool__DelegateSignature_Statics
{
	struct TouchSystemDelegates_eventDynamicMulticastDelegateOneParamBool_Parms
	{
		bool bValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Common/Delegates/UTouchSystemDelegates.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamBool__DelegateSignature_Statics::NewProp_bValue_SetBit(void* Obj)
{
	((TouchSystemDelegates_eventDynamicMulticastDelegateOneParamBool_Parms*)Obj)->bValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamBool__DelegateSignature_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchSystemDelegates_eventDynamicMulticastDelegateOneParamBool_Parms), &Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamBool__DelegateSignature_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamBool__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamBool__DelegateSignature_Statics::NewProp_bValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamBool__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamBool__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchSystemDelegates, nullptr, "DynamicMulticastDelegateOneParamBool__DelegateSignature", Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamBool__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamBool__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamBool__DelegateSignature_Statics::TouchSystemDelegates_eventDynamicMulticastDelegateOneParamBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamBool__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamBool__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamBool__DelegateSignature_Statics::TouchSystemDelegates_eventDynamicMulticastDelegateOneParamBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamBool__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamBool__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UTouchSystemDelegates::FDynamicMulticastDelegateOneParamBool_DelegateWrapper(const FMulticastScriptDelegate& DynamicMulticastDelegateOneParamBool, bool bValue)
{
	struct TouchSystemDelegates_eventDynamicMulticastDelegateOneParamBool_Parms
	{
		bool bValue;
	};
	TouchSystemDelegates_eventDynamicMulticastDelegateOneParamBool_Parms Parms;
	Parms.bValue=bValue ? true : false;
	DynamicMulticastDelegateOneParamBool.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FDynamicMulticastDelegateOneParamBool ***********************************

// ********** Begin Delegate FDynamicMulticastDelegateOneParamFloat ********************************
struct Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamFloat__DelegateSignature_Statics
{
	struct TouchSystemDelegates_eventDynamicMulticastDelegateOneParamFloat_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Common/Delegates/UTouchSystemDelegates.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamFloat__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchSystemDelegates_eventDynamicMulticastDelegateOneParamFloat_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamFloat__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamFloat__DelegateSignature_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamFloat__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamFloat__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchSystemDelegates, nullptr, "DynamicMulticastDelegateOneParamFloat__DelegateSignature", Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamFloat__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamFloat__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamFloat__DelegateSignature_Statics::TouchSystemDelegates_eventDynamicMulticastDelegateOneParamFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamFloat__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamFloat__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamFloat__DelegateSignature_Statics::TouchSystemDelegates_eventDynamicMulticastDelegateOneParamFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamFloat__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamFloat__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UTouchSystemDelegates::FDynamicMulticastDelegateOneParamFloat_DelegateWrapper(const FMulticastScriptDelegate& DynamicMulticastDelegateOneParamFloat, float Value)
{
	struct TouchSystemDelegates_eventDynamicMulticastDelegateOneParamFloat_Parms
	{
		float Value;
	};
	TouchSystemDelegates_eventDynamicMulticastDelegateOneParamFloat_Parms Parms;
	Parms.Value=Value;
	DynamicMulticastDelegateOneParamFloat.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FDynamicMulticastDelegateOneParamFloat **********************************

// ********** Begin Delegate FDynamicMulticastDelegateOneParamUint8 ********************************
struct Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamUint8__DelegateSignature_Statics
{
	struct TouchSystemDelegates_eventDynamicMulticastDelegateOneParamUint8_Parms
	{
		uint8 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Common/Delegates/UTouchSystemDelegates.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamUint8__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchSystemDelegates_eventDynamicMulticastDelegateOneParamUint8_Parms, Value), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamUint8__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamUint8__DelegateSignature_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamUint8__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamUint8__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchSystemDelegates, nullptr, "DynamicMulticastDelegateOneParamUint8__DelegateSignature", Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamUint8__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamUint8__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamUint8__DelegateSignature_Statics::TouchSystemDelegates_eventDynamicMulticastDelegateOneParamUint8_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamUint8__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamUint8__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamUint8__DelegateSignature_Statics::TouchSystemDelegates_eventDynamicMulticastDelegateOneParamUint8_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamUint8__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamUint8__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UTouchSystemDelegates::FDynamicMulticastDelegateOneParamUint8_DelegateWrapper(const FMulticastScriptDelegate& DynamicMulticastDelegateOneParamUint8, uint8 Value)
{
	struct TouchSystemDelegates_eventDynamicMulticastDelegateOneParamUint8_Parms
	{
		uint8 Value;
	};
	TouchSystemDelegates_eventDynamicMulticastDelegateOneParamUint8_Parms Parms;
	Parms.Value=Value;
	DynamicMulticastDelegateOneParamUint8.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FDynamicMulticastDelegateOneParamUint8 **********************************

// ********** Begin Delegate FDynamicMulticastDelegateOneParamInputStruct **************************
struct Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamInputStruct__DelegateSignature_Statics
{
	struct TouchSystemDelegates_eventDynamicMulticastDelegateOneParamInputStruct_Parms
	{
		FTouchInputInfo TouchInput;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Common/Delegates/UTouchSystemDelegates.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TouchInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamInputStruct__DelegateSignature_Statics::NewProp_TouchInput = { "TouchInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchSystemDelegates_eventDynamicMulticastDelegateOneParamInputStruct_Parms, TouchInput), Z_Construct_UScriptStruct_FTouchInputInfo, METADATA_PARAMS(0, nullptr) }; // 2955306383
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamInputStruct__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamInputStruct__DelegateSignature_Statics::NewProp_TouchInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamInputStruct__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamInputStruct__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchSystemDelegates, nullptr, "DynamicMulticastDelegateOneParamInputStruct__DelegateSignature", Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamInputStruct__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamInputStruct__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamInputStruct__DelegateSignature_Statics::TouchSystemDelegates_eventDynamicMulticastDelegateOneParamInputStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamInputStruct__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamInputStruct__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamInputStruct__DelegateSignature_Statics::TouchSystemDelegates_eventDynamicMulticastDelegateOneParamInputStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamInputStruct__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamInputStruct__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UTouchSystemDelegates::FDynamicMulticastDelegateOneParamInputStruct_DelegateWrapper(const FMulticastScriptDelegate& DynamicMulticastDelegateOneParamInputStruct, FTouchInputInfo TouchInput)
{
	struct TouchSystemDelegates_eventDynamicMulticastDelegateOneParamInputStruct_Parms
	{
		FTouchInputInfo TouchInput;
	};
	TouchSystemDelegates_eventDynamicMulticastDelegateOneParamInputStruct_Parms Parms;
	Parms.TouchInput=TouchInput;
	DynamicMulticastDelegateOneParamInputStruct.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FDynamicMulticastDelegateOneParamInputStruct ****************************

// ********** Begin Class UTouchSystemDelegates ****************************************************
void UTouchSystemDelegates::StaticRegisterNativesUTouchSystemDelegates()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTouchSystemDelegates;
UClass* UTouchSystemDelegates::GetPrivateStaticClass()
{
	using TClass = UTouchSystemDelegates;
	if (!Z_Registration_Info_UClass_UTouchSystemDelegates.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TouchSystemDelegates"),
			Z_Registration_Info_UClass_UTouchSystemDelegates.InnerSingleton,
			StaticRegisterNativesUTouchSystemDelegates,
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
	return Z_Registration_Info_UClass_UTouchSystemDelegates.InnerSingleton;
}
UClass* Z_Construct_UClass_UTouchSystemDelegates_NoRegister()
{
	return UTouchSystemDelegates::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTouchSystemDelegates_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Common/Delegates/UTouchSystemDelegates.h" },
		{ "ModuleRelativePath", "Common/Delegates/UTouchSystemDelegates.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamBool__DelegateSignature, "DynamicMulticastDelegateOneParamBool__DelegateSignature" }, // 404724478
		{ &Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamFloat__DelegateSignature, "DynamicMulticastDelegateOneParamFloat__DelegateSignature" }, // 1649761453
		{ &Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamInputStruct__DelegateSignature, "DynamicMulticastDelegateOneParamInputStruct__DelegateSignature" }, // 2849260931
		{ &Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamUint8__DelegateSignature, "DynamicMulticastDelegateOneParamUint8__DelegateSignature" }, // 1717799910
		{ &Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateZeroParams__DelegateSignature, "DynamicMulticastDelegateZeroParams__DelegateSignature" }, // 605373130
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTouchSystemDelegates>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTouchSystemDelegates_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TouchInputSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchSystemDelegates_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTouchSystemDelegates_Statics::ClassParams = {
	&UTouchSystemDelegates::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchSystemDelegates_Statics::Class_MetaDataParams), Z_Construct_UClass_UTouchSystemDelegates_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTouchSystemDelegates()
{
	if (!Z_Registration_Info_UClass_UTouchSystemDelegates.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTouchSystemDelegates.OuterSingleton, Z_Construct_UClass_UTouchSystemDelegates_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTouchSystemDelegates.OuterSingleton;
}
UTouchSystemDelegates::UTouchSystemDelegates(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchSystemDelegates);
UTouchSystemDelegates::~UTouchSystemDelegates() {}
// ********** End Class UTouchSystemDelegates ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Delegates_UTouchSystemDelegates_h__Script_TouchInputSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTouchSystemDelegates, UTouchSystemDelegates::StaticClass, TEXT("UTouchSystemDelegates"), &Z_Registration_Info_UClass_UTouchSystemDelegates, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTouchSystemDelegates), 122612687U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Delegates_UTouchSystemDelegates_h__Script_TouchInputSystem_992265824(TEXT("/Script/TouchInputSystem"),
	Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Delegates_UTouchSystemDelegates_h__Script_TouchInputSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Delegates_UTouchSystemDelegates_h__Script_TouchInputSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
