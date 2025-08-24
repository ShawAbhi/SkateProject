// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TouchInputSystem/Widget/BaseTouchButton.h"
#include "InputActionValue.h"
#include "Layout/Geometry.h"
#include "TouchInputSystem/Common/Data/EnumsStruct/FInGameButtonData.h"
#include "TouchInputSystem/Common/Data/EnumsStruct/FTouchInputInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBaseTouchButton() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerPressed_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
TOUCHINPUTSYSTEM_API UClass* Z_Construct_UClass_UBaseTouchButton();
TOUCHINPUTSYSTEM_API UClass* Z_Construct_UClass_UBaseTouchButton_NoRegister();
TOUCHINPUTSYSTEM_API UEnum* Z_Construct_UEnum_TouchInputSystem_EEnum_TouchMode();
TOUCHINPUTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamInputStruct__DelegateSignature();
TOUCHINPUTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInGameButtonData();
TOUCHINPUTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTouchInputInfo();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_TouchInputSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBaseTouchButton Function EventOnEventReceived ***************************
struct BaseTouchButton_eventEventOnEventReceived_Parms
{
	FVector FingerLocation;
	EEnum_TouchMode TouchMode;
};
static FName NAME_UBaseTouchButton_EventOnEventReceived = FName(TEXT("EventOnEventReceived"));
void UBaseTouchButton::EventOnEventReceived(FVector const& FingerLocation, EEnum_TouchMode TouchMode)
{
	UFunction* Func = FindFunctionChecked(NAME_UBaseTouchButton_EventOnEventReceived);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BaseTouchButton_eventEventOnEventReceived_Parms Parms;
		Parms.FingerLocation=FingerLocation;
		Parms.TouchMode=TouchMode;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		EventOnEventReceived_Implementation(FingerLocation, TouchMode);
	}
}
struct Z_Construct_UFunction_UBaseTouchButton_EventOnEventReceived_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseInGameButton" },
		{ "ModuleRelativePath", "Widget/BaseTouchButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FingerLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FingerLocation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TouchMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TouchMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTouchButton_EventOnEventReceived_Statics::NewProp_FingerLocation = { "FingerLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseTouchButton_eventEventOnEventReceived_Parms, FingerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FingerLocation_MetaData), NewProp_FingerLocation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTouchButton_EventOnEventReceived_Statics::NewProp_TouchMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTouchButton_EventOnEventReceived_Statics::NewProp_TouchMode = { "TouchMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseTouchButton_eventEventOnEventReceived_Parms, TouchMode), Z_Construct_UEnum_TouchInputSystem_EEnum_TouchMode, METADATA_PARAMS(0, nullptr) }; // 4282262165
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTouchButton_EventOnEventReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTouchButton_EventOnEventReceived_Statics::NewProp_FingerLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTouchButton_EventOnEventReceived_Statics::NewProp_TouchMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTouchButton_EventOnEventReceived_Statics::NewProp_TouchMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_EventOnEventReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTouchButton_EventOnEventReceived_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseTouchButton, nullptr, "EventOnEventReceived", Z_Construct_UFunction_UBaseTouchButton_EventOnEventReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_EventOnEventReceived_Statics::PropPointers), sizeof(BaseTouchButton_eventEventOnEventReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_EventOnEventReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseTouchButton_EventOnEventReceived_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BaseTouchButton_eventEventOnEventReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseTouchButton_EventOnEventReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseTouchButton_EventOnEventReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseTouchButton::execEventOnEventReceived)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_FingerLocation);
	P_GET_ENUM(EEnum_TouchMode,Z_Param_TouchMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EventOnEventReceived_Implementation(Z_Param_Out_FingerLocation,EEnum_TouchMode(Z_Param_TouchMode));
	P_NATIVE_END;
}
// ********** End Class UBaseTouchButton Function EventOnEventReceived *****************************

// ********** Begin Class UBaseTouchButton Function EventOnMoved ***********************************
struct BaseTouchButton_eventEventOnMoved_Parms
{
	FVector FingerLocation;
};
static FName NAME_UBaseTouchButton_EventOnMoved = FName(TEXT("EventOnMoved"));
void UBaseTouchButton::EventOnMoved(FVector const& FingerLocation)
{
	UFunction* Func = FindFunctionChecked(NAME_UBaseTouchButton_EventOnMoved);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BaseTouchButton_eventEventOnMoved_Parms Parms;
		Parms.FingerLocation=FingerLocation;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		EventOnMoved_Implementation(FingerLocation);
	}
}
struct Z_Construct_UFunction_UBaseTouchButton_EventOnMoved_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseInGameButton" },
		{ "ModuleRelativePath", "Widget/BaseTouchButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FingerLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FingerLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTouchButton_EventOnMoved_Statics::NewProp_FingerLocation = { "FingerLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseTouchButton_eventEventOnMoved_Parms, FingerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FingerLocation_MetaData), NewProp_FingerLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTouchButton_EventOnMoved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTouchButton_EventOnMoved_Statics::NewProp_FingerLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_EventOnMoved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTouchButton_EventOnMoved_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseTouchButton, nullptr, "EventOnMoved", Z_Construct_UFunction_UBaseTouchButton_EventOnMoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_EventOnMoved_Statics::PropPointers), sizeof(BaseTouchButton_eventEventOnMoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_EventOnMoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseTouchButton_EventOnMoved_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BaseTouchButton_eventEventOnMoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseTouchButton_EventOnMoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseTouchButton_EventOnMoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseTouchButton::execEventOnMoved)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_FingerLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EventOnMoved_Implementation(Z_Param_Out_FingerLocation);
	P_NATIVE_END;
}
// ********** End Class UBaseTouchButton Function EventOnMoved *************************************

// ********** Begin Class UBaseTouchButton Function EventOnPressed *********************************
struct BaseTouchButton_eventEventOnPressed_Parms
{
	FVector FingerLocation;
};
static FName NAME_UBaseTouchButton_EventOnPressed = FName(TEXT("EventOnPressed"));
void UBaseTouchButton::EventOnPressed(FVector const& FingerLocation)
{
	UFunction* Func = FindFunctionChecked(NAME_UBaseTouchButton_EventOnPressed);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BaseTouchButton_eventEventOnPressed_Parms Parms;
		Parms.FingerLocation=FingerLocation;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		EventOnPressed_Implementation(FingerLocation);
	}
}
struct Z_Construct_UFunction_UBaseTouchButton_EventOnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseInGameButton" },
		{ "ModuleRelativePath", "Widget/BaseTouchButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FingerLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FingerLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTouchButton_EventOnPressed_Statics::NewProp_FingerLocation = { "FingerLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseTouchButton_eventEventOnPressed_Parms, FingerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FingerLocation_MetaData), NewProp_FingerLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTouchButton_EventOnPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTouchButton_EventOnPressed_Statics::NewProp_FingerLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_EventOnPressed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTouchButton_EventOnPressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseTouchButton, nullptr, "EventOnPressed", Z_Construct_UFunction_UBaseTouchButton_EventOnPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_EventOnPressed_Statics::PropPointers), sizeof(BaseTouchButton_eventEventOnPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_EventOnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseTouchButton_EventOnPressed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BaseTouchButton_eventEventOnPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseTouchButton_EventOnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseTouchButton_EventOnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseTouchButton::execEventOnPressed)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_FingerLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EventOnPressed_Implementation(Z_Param_Out_FingerLocation);
	P_NATIVE_END;
}
// ********** End Class UBaseTouchButton Function EventOnPressed ***********************************

// ********** Begin Class UBaseTouchButton Function EventOnReleased ********************************
struct BaseTouchButton_eventEventOnReleased_Parms
{
	FVector FingerLocation;
};
static FName NAME_UBaseTouchButton_EventOnReleased = FName(TEXT("EventOnReleased"));
void UBaseTouchButton::EventOnReleased(FVector const& FingerLocation)
{
	UFunction* Func = FindFunctionChecked(NAME_UBaseTouchButton_EventOnReleased);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BaseTouchButton_eventEventOnReleased_Parms Parms;
		Parms.FingerLocation=FingerLocation;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		EventOnReleased_Implementation(FingerLocation);
	}
}
struct Z_Construct_UFunction_UBaseTouchButton_EventOnReleased_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseInGameButton" },
		{ "ModuleRelativePath", "Widget/BaseTouchButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FingerLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FingerLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTouchButton_EventOnReleased_Statics::NewProp_FingerLocation = { "FingerLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseTouchButton_eventEventOnReleased_Parms, FingerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FingerLocation_MetaData), NewProp_FingerLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTouchButton_EventOnReleased_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTouchButton_EventOnReleased_Statics::NewProp_FingerLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_EventOnReleased_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTouchButton_EventOnReleased_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseTouchButton, nullptr, "EventOnReleased", Z_Construct_UFunction_UBaseTouchButton_EventOnReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_EventOnReleased_Statics::PropPointers), sizeof(BaseTouchButton_eventEventOnReleased_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_EventOnReleased_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseTouchButton_EventOnReleased_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BaseTouchButton_eventEventOnReleased_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseTouchButton_EventOnReleased()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseTouchButton_EventOnReleased_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseTouchButton::execEventOnReleased)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_FingerLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EventOnReleased_Implementation(Z_Param_Out_FingerLocation);
	P_NATIVE_END;
}
// ********** End Class UBaseTouchButton Function EventOnReleased **********************************

// ********** Begin Class UBaseTouchButton Function GetIsActive ************************************
struct Z_Construct_UFunction_UBaseTouchButton_GetIsActive_Statics
{
	struct BaseTouchButton_eventGetIsActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseInGameButton" },
		{ "ModuleRelativePath", "Widget/BaseTouchButton.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseTouchButton_GetIsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseTouchButton_eventGetIsActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTouchButton_GetIsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseTouchButton_eventGetIsActive_Parms), &Z_Construct_UFunction_UBaseTouchButton_GetIsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTouchButton_GetIsActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTouchButton_GetIsActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_GetIsActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTouchButton_GetIsActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseTouchButton, nullptr, "GetIsActive", Z_Construct_UFunction_UBaseTouchButton_GetIsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_GetIsActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseTouchButton_GetIsActive_Statics::BaseTouchButton_eventGetIsActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_GetIsActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseTouchButton_GetIsActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseTouchButton_GetIsActive_Statics::BaseTouchButton_eventGetIsActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseTouchButton_GetIsActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseTouchButton_GetIsActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseTouchButton::execGetIsActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsActive();
	P_NATIVE_END;
}
// ********** End Class UBaseTouchButton Function GetIsActive **************************************

// ********** Begin Class UBaseTouchButton Function GetPayload *************************************
struct Z_Construct_UFunction_UBaseTouchButton_GetPayload_Statics
{
	struct BaseTouchButton_eventGetPayload_Parms
	{
		FTouchInputInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/BaseTouchButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTouchButton_GetPayload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseTouchButton_eventGetPayload_Parms, ReturnValue), Z_Construct_UScriptStruct_FTouchInputInfo, METADATA_PARAMS(0, nullptr) }; // 2955306383
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTouchButton_GetPayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTouchButton_GetPayload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_GetPayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTouchButton_GetPayload_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseTouchButton, nullptr, "GetPayload", Z_Construct_UFunction_UBaseTouchButton_GetPayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_GetPayload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseTouchButton_GetPayload_Statics::BaseTouchButton_eventGetPayload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_GetPayload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseTouchButton_GetPayload_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseTouchButton_GetPayload_Statics::BaseTouchButton_eventGetPayload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseTouchButton_GetPayload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseTouchButton_GetPayload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseTouchButton::execGetPayload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTouchInputInfo*)Z_Param__Result=P_THIS->GetPayload();
	P_NATIVE_END;
}
// ********** End Class UBaseTouchButton Function GetPayload ***************************************

// ********** Begin Class UBaseTouchButton Function HandleTouchIndexMessages ***********************
struct Z_Construct_UFunction_UBaseTouchButton_HandleTouchIndexMessages_Statics
{
	struct BaseTouchButton_eventHandleTouchIndexMessages_Parms
	{
		FTouchInputInfo TouchInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/BaseTouchButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TouchInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTouchButton_HandleTouchIndexMessages_Statics::NewProp_TouchInfo = { "TouchInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseTouchButton_eventHandleTouchIndexMessages_Parms, TouchInfo), Z_Construct_UScriptStruct_FTouchInputInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchInfo_MetaData), NewProp_TouchInfo_MetaData) }; // 2955306383
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTouchButton_HandleTouchIndexMessages_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTouchButton_HandleTouchIndexMessages_Statics::NewProp_TouchInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_HandleTouchIndexMessages_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTouchButton_HandleTouchIndexMessages_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseTouchButton, nullptr, "HandleTouchIndexMessages", Z_Construct_UFunction_UBaseTouchButton_HandleTouchIndexMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_HandleTouchIndexMessages_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseTouchButton_HandleTouchIndexMessages_Statics::BaseTouchButton_eventHandleTouchIndexMessages_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_HandleTouchIndexMessages_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseTouchButton_HandleTouchIndexMessages_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseTouchButton_HandleTouchIndexMessages_Statics::BaseTouchButton_eventHandleTouchIndexMessages_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseTouchButton_HandleTouchIndexMessages()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseTouchButton_HandleTouchIndexMessages_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseTouchButton::execHandleTouchIndexMessages)
{
	P_GET_STRUCT(FTouchInputInfo,Z_Param_TouchInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTouchIndexMessages(Z_Param_TouchInfo);
	P_NATIVE_END;
}
// ********** End Class UBaseTouchButton Function HandleTouchIndexMessages *************************

// ********** Begin Class UBaseTouchButton Function InjectInputToTouchEvent ************************
struct Z_Construct_UFunction_UBaseTouchButton_InjectInputToTouchEvent_Statics
{
	struct BaseTouchButton_eventInjectInputToTouchEvent_Parms
	{
		UInputAction* InputActionToCall;
		EEnum_TouchMode TouchMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseInGameButton" },
		{ "ModuleRelativePath", "Widget/BaseTouchButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputActionToCall;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TouchMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TouchMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTouchButton_InjectInputToTouchEvent_Statics::NewProp_InputActionToCall = { "InputActionToCall", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseTouchButton_eventInjectInputToTouchEvent_Parms, InputActionToCall), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTouchButton_InjectInputToTouchEvent_Statics::NewProp_TouchMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTouchButton_InjectInputToTouchEvent_Statics::NewProp_TouchMode = { "TouchMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseTouchButton_eventInjectInputToTouchEvent_Parms, TouchMode), Z_Construct_UEnum_TouchInputSystem_EEnum_TouchMode, METADATA_PARAMS(0, nullptr) }; // 4282262165
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTouchButton_InjectInputToTouchEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTouchButton_InjectInputToTouchEvent_Statics::NewProp_InputActionToCall,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTouchButton_InjectInputToTouchEvent_Statics::NewProp_TouchMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTouchButton_InjectInputToTouchEvent_Statics::NewProp_TouchMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_InjectInputToTouchEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTouchButton_InjectInputToTouchEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseTouchButton, nullptr, "InjectInputToTouchEvent", Z_Construct_UFunction_UBaseTouchButton_InjectInputToTouchEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_InjectInputToTouchEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseTouchButton_InjectInputToTouchEvent_Statics::BaseTouchButton_eventInjectInputToTouchEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_InjectInputToTouchEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseTouchButton_InjectInputToTouchEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseTouchButton_InjectInputToTouchEvent_Statics::BaseTouchButton_eventInjectInputToTouchEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseTouchButton_InjectInputToTouchEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseTouchButton_InjectInputToTouchEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseTouchButton::execInjectInputToTouchEvent)
{
	P_GET_OBJECT(UInputAction,Z_Param_InputActionToCall);
	P_GET_ENUM(EEnum_TouchMode,Z_Param_TouchMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InjectInputToTouchEvent(Z_Param_InputActionToCall,EEnum_TouchMode(Z_Param_TouchMode));
	P_NATIVE_END;
}
// ********** End Class UBaseTouchButton Function InjectInputToTouchEvent **************************

// ********** Begin Class UBaseTouchButton Function InjectValueToInput *****************************
struct BaseTouchButton_eventInjectValueToInput_Parms
{
	FInputActionValue ActionValue;
};
static FName NAME_UBaseTouchButton_InjectValueToInput = FName(TEXT("InjectValueToInput"));
void UBaseTouchButton::InjectValueToInput(FInputActionValue ActionValue)
{
	UFunction* Func = FindFunctionChecked(NAME_UBaseTouchButton_InjectValueToInput);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BaseTouchButton_eventInjectValueToInput_Parms Parms;
		Parms.ActionValue=ActionValue;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		InjectValueToInput_Implementation(ActionValue);
	}
}
struct Z_Construct_UFunction_UBaseTouchButton_InjectValueToInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseInGameButton" },
		{ "ModuleRelativePath", "Widget/BaseTouchButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTouchButton_InjectValueToInput_Statics::NewProp_ActionValue = { "ActionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseTouchButton_eventInjectValueToInput_Parms, ActionValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(0, nullptr) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTouchButton_InjectValueToInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTouchButton_InjectValueToInput_Statics::NewProp_ActionValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_InjectValueToInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTouchButton_InjectValueToInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseTouchButton, nullptr, "InjectValueToInput", Z_Construct_UFunction_UBaseTouchButton_InjectValueToInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_InjectValueToInput_Statics::PropPointers), sizeof(BaseTouchButton_eventInjectValueToInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_InjectValueToInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseTouchButton_InjectValueToInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BaseTouchButton_eventInjectValueToInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseTouchButton_InjectValueToInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseTouchButton_InjectValueToInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseTouchButton::execInjectValueToInput)
{
	P_GET_STRUCT(FInputActionValue,Z_Param_ActionValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InjectValueToInput_Implementation(Z_Param_ActionValue);
	P_NATIVE_END;
}
// ********** End Class UBaseTouchButton Function InjectValueToInput *******************************

// ********** Begin Class UBaseTouchButton Function InjectValueToInputEvent ************************
struct BaseTouchButton_eventInjectValueToInputEvent_Parms
{
	UInputAction* InputActionToCall;
	FInputActionValue ActionValue;
};
static FName NAME_UBaseTouchButton_InjectValueToInputEvent = FName(TEXT("InjectValueToInputEvent"));
void UBaseTouchButton::InjectValueToInputEvent(UInputAction* InputActionToCall, FInputActionValue ActionValue)
{
	UFunction* Func = FindFunctionChecked(NAME_UBaseTouchButton_InjectValueToInputEvent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BaseTouchButton_eventInjectValueToInputEvent_Parms Parms;
		Parms.InputActionToCall=InputActionToCall;
		Parms.ActionValue=ActionValue;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		InjectValueToInputEvent_Implementation(InputActionToCall, ActionValue);
	}
}
struct Z_Construct_UFunction_UBaseTouchButton_InjectValueToInputEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseInGameButton" },
		{ "ModuleRelativePath", "Widget/BaseTouchButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputActionToCall;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTouchButton_InjectValueToInputEvent_Statics::NewProp_InputActionToCall = { "InputActionToCall", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseTouchButton_eventInjectValueToInputEvent_Parms, InputActionToCall), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTouchButton_InjectValueToInputEvent_Statics::NewProp_ActionValue = { "ActionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseTouchButton_eventInjectValueToInputEvent_Parms, ActionValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(0, nullptr) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTouchButton_InjectValueToInputEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTouchButton_InjectValueToInputEvent_Statics::NewProp_InputActionToCall,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTouchButton_InjectValueToInputEvent_Statics::NewProp_ActionValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_InjectValueToInputEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTouchButton_InjectValueToInputEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseTouchButton, nullptr, "InjectValueToInputEvent", Z_Construct_UFunction_UBaseTouchButton_InjectValueToInputEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_InjectValueToInputEvent_Statics::PropPointers), sizeof(BaseTouchButton_eventInjectValueToInputEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_InjectValueToInputEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseTouchButton_InjectValueToInputEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BaseTouchButton_eventInjectValueToInputEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseTouchButton_InjectValueToInputEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseTouchButton_InjectValueToInputEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseTouchButton::execInjectValueToInputEvent)
{
	P_GET_OBJECT(UInputAction,Z_Param_InputActionToCall);
	P_GET_STRUCT(FInputActionValue,Z_Param_ActionValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InjectValueToInputEvent_Implementation(Z_Param_InputActionToCall,Z_Param_ActionValue);
	P_NATIVE_END;
}
// ********** End Class UBaseTouchButton Function InjectValueToInputEvent **************************

// ********** Begin Class UBaseTouchButton Function SetButtonActive ********************************
struct Z_Construct_UFunction_UBaseTouchButton_SetButtonActive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/BaseTouchButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTouchButton_SetButtonActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseTouchButton, nullptr, "SetButtonActive", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_SetButtonActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseTouchButton_SetButtonActive_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBaseTouchButton_SetButtonActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseTouchButton_SetButtonActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseTouchButton::execSetButtonActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetButtonActive();
	P_NATIVE_END;
}
// ********** End Class UBaseTouchButton Function SetButtonActive **********************************

// ********** Begin Class UBaseTouchButton Function SetButtonInactive ******************************
struct Z_Construct_UFunction_UBaseTouchButton_SetButtonInactive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/BaseTouchButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTouchButton_SetButtonInactive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseTouchButton, nullptr, "SetButtonInactive", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_SetButtonInactive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseTouchButton_SetButtonInactive_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBaseTouchButton_SetButtonInactive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseTouchButton_SetButtonInactive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseTouchButton::execSetButtonInactive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetButtonInactive();
	P_NATIVE_END;
}
// ********** End Class UBaseTouchButton Function SetButtonInactive ********************************

// ********** Begin Class UBaseTouchButton Function SetIsActive ************************************
struct BaseTouchButton_eventSetIsActive_Parms
{
	bool bNewIsActive;
};
static FName NAME_UBaseTouchButton_SetIsActive = FName(TEXT("SetIsActive"));
void UBaseTouchButton::SetIsActive(bool bNewIsActive)
{
	UFunction* Func = FindFunctionChecked(NAME_UBaseTouchButton_SetIsActive);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BaseTouchButton_eventSetIsActive_Parms Parms;
		Parms.bNewIsActive=bNewIsActive ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		SetIsActive_Implementation(bNewIsActive);
	}
}
struct Z_Construct_UFunction_UBaseTouchButton_SetIsActive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseInGameButton" },
		{ "ModuleRelativePath", "Widget/BaseTouchButton.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewIsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewIsActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseTouchButton_SetIsActive_Statics::NewProp_bNewIsActive_SetBit(void* Obj)
{
	((BaseTouchButton_eventSetIsActive_Parms*)Obj)->bNewIsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTouchButton_SetIsActive_Statics::NewProp_bNewIsActive = { "bNewIsActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseTouchButton_eventSetIsActive_Parms), &Z_Construct_UFunction_UBaseTouchButton_SetIsActive_Statics::NewProp_bNewIsActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTouchButton_SetIsActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTouchButton_SetIsActive_Statics::NewProp_bNewIsActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_SetIsActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTouchButton_SetIsActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseTouchButton, nullptr, "SetIsActive", Z_Construct_UFunction_UBaseTouchButton_SetIsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_SetIsActive_Statics::PropPointers), sizeof(BaseTouchButton_eventSetIsActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTouchButton_SetIsActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseTouchButton_SetIsActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BaseTouchButton_eventSetIsActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseTouchButton_SetIsActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseTouchButton_SetIsActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseTouchButton::execSetIsActive)
{
	P_GET_UBOOL(Z_Param_bNewIsActive);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsActive_Implementation(Z_Param_bNewIsActive);
	P_NATIVE_END;
}
// ********** End Class UBaseTouchButton Function SetIsActive **************************************

// ********** Begin Class UBaseTouchButton *********************************************************
void UBaseTouchButton::StaticRegisterNativesUBaseTouchButton()
{
	UClass* Class = UBaseTouchButton::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EventOnEventReceived", &UBaseTouchButton::execEventOnEventReceived },
		{ "EventOnMoved", &UBaseTouchButton::execEventOnMoved },
		{ "EventOnPressed", &UBaseTouchButton::execEventOnPressed },
		{ "EventOnReleased", &UBaseTouchButton::execEventOnReleased },
		{ "GetIsActive", &UBaseTouchButton::execGetIsActive },
		{ "GetPayload", &UBaseTouchButton::execGetPayload },
		{ "HandleTouchIndexMessages", &UBaseTouchButton::execHandleTouchIndexMessages },
		{ "InjectInputToTouchEvent", &UBaseTouchButton::execInjectInputToTouchEvent },
		{ "InjectValueToInput", &UBaseTouchButton::execInjectValueToInput },
		{ "InjectValueToInputEvent", &UBaseTouchButton::execInjectValueToInputEvent },
		{ "SetButtonActive", &UBaseTouchButton::execSetButtonActive },
		{ "SetButtonInactive", &UBaseTouchButton::execSetButtonInactive },
		{ "SetIsActive", &UBaseTouchButton::execSetIsActive },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBaseTouchButton;
UClass* UBaseTouchButton::GetPrivateStaticClass()
{
	using TClass = UBaseTouchButton;
	if (!Z_Registration_Info_UClass_UBaseTouchButton.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BaseTouchButton"),
			Z_Registration_Info_UClass_UBaseTouchButton.InnerSingleton,
			StaticRegisterNativesUBaseTouchButton,
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
	return Z_Registration_Info_UClass_UBaseTouchButton.InnerSingleton;
}
UClass* Z_Construct_UClass_UBaseTouchButton_NoRegister()
{
	return UBaseTouchButton::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBaseTouchButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widget/BaseTouchButton.h" },
		{ "ModuleRelativePath", "Widget/BaseTouchButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownTrigger_MetaData[] = {
		{ "ModuleRelativePath", "Widget/BaseTouchButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Widget/BaseTouchButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActionToTick_MetaData[] = {
		{ "ModuleRelativePath", "Widget/BaseTouchButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPointerIndex_MetaData[] = {
		{ "Category", "BaseInGameButton" },
		{ "ModuleRelativePath", "Widget/BaseTouchButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWasPressed_MetaData[] = {
		{ "Category", "BaseInGameButton" },
		{ "ModuleRelativePath", "Widget/BaseTouchButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchGeometry_MetaData[] = {
		{ "Category", "BaseInGameButton" },
		{ "ModuleRelativePath", "Widget/BaseTouchButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInjectDefaultActionValue_MetaData[] = {
		{ "Category", "BaseInGameButton" },
		{ "ModuleRelativePath", "Widget/BaseTouchButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultActionValue_MetaData[] = {
		{ "Category", "BaseInGameButton" },
		{ "EditCondition", "bInjectDefaultActionValue" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Widget/BaseTouchButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonData_MetaData[] = {
		{ "Category", "BaseInGameButton" },
		{ "ModuleRelativePath", "Widget/BaseTouchButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInputReceivedDelegate_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Widget/BaseTouchButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DownTrigger;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputSubsystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputActionToTick;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPointerIndex;
	static void NewProp_bWasPressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasPressed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TouchGeometry;
	static void NewProp_bInjectDefaultActionValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInjectDefaultActionValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultActionValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonData;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInputReceivedDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseTouchButton_EventOnEventReceived, "EventOnEventReceived" }, // 1071133020
		{ &Z_Construct_UFunction_UBaseTouchButton_EventOnMoved, "EventOnMoved" }, // 972299804
		{ &Z_Construct_UFunction_UBaseTouchButton_EventOnPressed, "EventOnPressed" }, // 3520051304
		{ &Z_Construct_UFunction_UBaseTouchButton_EventOnReleased, "EventOnReleased" }, // 2894997407
		{ &Z_Construct_UFunction_UBaseTouchButton_GetIsActive, "GetIsActive" }, // 2193961670
		{ &Z_Construct_UFunction_UBaseTouchButton_GetPayload, "GetPayload" }, // 4214812804
		{ &Z_Construct_UFunction_UBaseTouchButton_HandleTouchIndexMessages, "HandleTouchIndexMessages" }, // 58567076
		{ &Z_Construct_UFunction_UBaseTouchButton_InjectInputToTouchEvent, "InjectInputToTouchEvent" }, // 3971126460
		{ &Z_Construct_UFunction_UBaseTouchButton_InjectValueToInput, "InjectValueToInput" }, // 1879449867
		{ &Z_Construct_UFunction_UBaseTouchButton_InjectValueToInputEvent, "InjectValueToInputEvent" }, // 4021227399
		{ &Z_Construct_UFunction_UBaseTouchButton_SetButtonActive, "SetButtonActive" }, // 71224285
		{ &Z_Construct_UFunction_UBaseTouchButton_SetButtonInactive, "SetButtonInactive" }, // 3298793325
		{ &Z_Construct_UFunction_UBaseTouchButton_SetIsActive, "SetIsActive" }, // 1909820359
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseTouchButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseTouchButton_Statics::NewProp_DownTrigger = { "DownTrigger", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseTouchButton, DownTrigger), Z_Construct_UClass_UInputTriggerPressed_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownTrigger_MetaData), NewProp_DownTrigger_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseTouchButton_Statics::NewProp_InputSubsystem = { "InputSubsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseTouchButton, InputSubsystem), Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputSubsystem_MetaData), NewProp_InputSubsystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseTouchButton_Statics::NewProp_InputActionToTick = { "InputActionToTick", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseTouchButton, InputActionToTick), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActionToTick_MetaData), NewProp_InputActionToTick_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBaseTouchButton_Statics::NewProp_CurrentPointerIndex = { "CurrentPointerIndex", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseTouchButton, CurrentPointerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPointerIndex_MetaData), NewProp_CurrentPointerIndex_MetaData) };
void Z_Construct_UClass_UBaseTouchButton_Statics::NewProp_bWasPressed_SetBit(void* Obj)
{
	((UBaseTouchButton*)Obj)->bWasPressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseTouchButton_Statics::NewProp_bWasPressed = { "bWasPressed", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseTouchButton), &Z_Construct_UClass_UBaseTouchButton_Statics::NewProp_bWasPressed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWasPressed_MetaData), NewProp_bWasPressed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseTouchButton_Statics::NewProp_TouchGeometry = { "TouchGeometry", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseTouchButton, TouchGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchGeometry_MetaData), NewProp_TouchGeometry_MetaData) }; // 2519437962
void Z_Construct_UClass_UBaseTouchButton_Statics::NewProp_bInjectDefaultActionValue_SetBit(void* Obj)
{
	((UBaseTouchButton*)Obj)->bInjectDefaultActionValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseTouchButton_Statics::NewProp_bInjectDefaultActionValue = { "bInjectDefaultActionValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseTouchButton), &Z_Construct_UClass_UBaseTouchButton_Statics::NewProp_bInjectDefaultActionValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInjectDefaultActionValue_MetaData), NewProp_bInjectDefaultActionValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseTouchButton_Statics::NewProp_DefaultActionValue = { "DefaultActionValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseTouchButton, DefaultActionValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultActionValue_MetaData), NewProp_DefaultActionValue_MetaData) }; // 203218767
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseTouchButton_Statics::NewProp_ButtonData = { "ButtonData", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseTouchButton, ButtonData), Z_Construct_UScriptStruct_FInGameButtonData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonData_MetaData), NewProp_ButtonData_MetaData) }; // 479906529
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseTouchButton_Statics::NewProp_OnInputReceivedDelegate = { "OnInputReceivedDelegate", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseTouchButton, OnInputReceivedDelegate), Z_Construct_UDelegateFunction_UTouchSystemDelegates_DynamicMulticastDelegateOneParamInputStruct__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInputReceivedDelegate_MetaData), NewProp_OnInputReceivedDelegate_MetaData) }; // 2849260931
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseTouchButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTouchButton_Statics::NewProp_DownTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTouchButton_Statics::NewProp_InputSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTouchButton_Statics::NewProp_InputActionToTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTouchButton_Statics::NewProp_CurrentPointerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTouchButton_Statics::NewProp_bWasPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTouchButton_Statics::NewProp_TouchGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTouchButton_Statics::NewProp_bInjectDefaultActionValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTouchButton_Statics::NewProp_DefaultActionValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTouchButton_Statics::NewProp_ButtonData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTouchButton_Statics::NewProp_OnInputReceivedDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTouchButton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseTouchButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_TouchInputSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTouchButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseTouchButton_Statics::ClassParams = {
	&UBaseTouchButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBaseTouchButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTouchButton_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTouchButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseTouchButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseTouchButton()
{
	if (!Z_Registration_Info_UClass_UBaseTouchButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseTouchButton.OuterSingleton, Z_Construct_UClass_UBaseTouchButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseTouchButton.OuterSingleton;
}
UBaseTouchButton::UBaseTouchButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseTouchButton);
UBaseTouchButton::~UBaseTouchButton() {}
// ********** End Class UBaseTouchButton ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_BaseTouchButton_h__Script_TouchInputSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseTouchButton, UBaseTouchButton::StaticClass, TEXT("UBaseTouchButton"), &Z_Registration_Info_UClass_UBaseTouchButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseTouchButton), 3945391997U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_BaseTouchButton_h__Script_TouchInputSystem_2319471284(TEXT("/Script/TouchInputSystem"),
	Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_BaseTouchButton_h__Script_TouchInputSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_BaseTouchButton_h__Script_TouchInputSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
