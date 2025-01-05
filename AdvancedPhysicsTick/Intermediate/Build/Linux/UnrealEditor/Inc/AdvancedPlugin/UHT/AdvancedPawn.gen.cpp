// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedPlugin/Public/AdvancedPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedPawn() {}

// Begin Cross Module References
ADVANCEDPLUGIN_API UClass* Z_Construct_UClass_AAdvancedPawn();
ADVANCEDPLUGIN_API UClass* Z_Construct_UClass_AAdvancedPawn_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AdvancedPlugin();
// End Cross Module References

// Begin Class AAdvancedPawn Function AddForce
struct Z_Construct_UFunction_AAdvancedPawn_AddForce_Statics
{
	struct AdvancedPawn_eventAddForce_Parms
	{
		const UPrimitiveComponent* InComponent;
		FVector InForce;
		bool bAccelChange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AdvancedTick|Physics" },
		{ "Comment", "/**\n\x09 *\x09""Add a force to a single rigid body.\n\x09 *  This is like a 'thruster'. Good for adding a burst over some (non zero) time. Should be called every frame for the duration of the force.\n\x09 *  CALL THIS FUNCTION ONLY AdvancedTick or TickAsync!\n\x09 *\n\x09 *\x09@param\x09InForce\x09\x09\x09""Force vector to apply. Magnitude indicates strength of force.\n\x09 *  @param  bAccelChange\x09If true, Force is taken as a change in acceleration instead of a physical force (i.e. mass will have no effect).\n\x09 */" },
		{ "CPP_Default_bAccelChange", "false" },
		{ "ModuleRelativePath", "Public/AdvancedPawn.h" },
		{ "ToolTip", "Add a force to a single rigid body.\nThis is like a 'thruster'. Good for adding a burst over some (non zero) time. Should be called every frame for the duration of the force.\nCALL THIS FUNCTION ONLY AdvancedTick or TickAsync!\n\n@param  InForce                 Force vector to apply. Magnitude indicates strength of force.\n@param  bAccelChange        If true, Force is taken as a change in acceleration instead of a physical force (i.e. mass will have no effect)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InForce;
	static void NewProp_bAccelChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccelChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvancedPawn_AddForce_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedPawn_eventAddForce_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponent_MetaData), NewProp_InComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvancedPawn_AddForce_Statics::NewProp_InForce = { "InForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedPawn_eventAddForce_Parms, InForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAdvancedPawn_AddForce_Statics::NewProp_bAccelChange_SetBit(void* Obj)
{
	((AdvancedPawn_eventAddForce_Parms*)Obj)->bAccelChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvancedPawn_AddForce_Statics::NewProp_bAccelChange = { "bAccelChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedPawn_eventAddForce_Parms), &Z_Construct_UFunction_AAdvancedPawn_AddForce_Statics::NewProp_bAccelChange_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvancedPawn_AddForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedPawn_AddForce_Statics::NewProp_InComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedPawn_AddForce_Statics::NewProp_InForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedPawn_AddForce_Statics::NewProp_bAccelChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_AddForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvancedPawn_AddForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvancedPawn, nullptr, "AddForce", nullptr, nullptr, Z_Construct_UFunction_AAdvancedPawn_AddForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_AddForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAdvancedPawn_AddForce_Statics::AdvancedPawn_eventAddForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_AddForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAdvancedPawn_AddForce_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAdvancedPawn_AddForce_Statics::AdvancedPawn_eventAddForce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAdvancedPawn_AddForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAdvancedPawn_AddForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAdvancedPawn::execAddForce)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
	P_GET_STRUCT(FVector,Z_Param_InForce);
	P_GET_UBOOL(Z_Param_bAccelChange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddForce(Z_Param_InComponent,Z_Param_InForce,Z_Param_bAccelChange);
	P_NATIVE_END;
}
// End Class AAdvancedPawn Function AddForce

// Begin Class AAdvancedPawn Function AddForceAtLocation
struct Z_Construct_UFunction_AAdvancedPawn_AddForceAtLocation_Statics
{
	struct AdvancedPawn_eventAddForceAtLocation_Parms
	{
		const UPrimitiveComponent* InComponent;
		FVector Force;
		FVector Position;
		bool bIsLocalForce;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AdvancedTick|Physics" },
		{ "Comment", "/**\n\x09 *\x09""Add a force to a single rigid body at a particular location in world space.\n\x09 *  This is like a 'thruster'. Good for adding a burst over some (non zero) time. Should be called every frame for the duration of the force.\n\x09 *  CALL THIS FUNCTION ONLY AdvancedTick or TickAsync!\n\x09 *\n\x09 *\x09@param Force\x09\x09\x09""Force vector to apply. Magnitude indicates strength of force.\n\x09 *\x09@param Location\x09\x09\x09Location to apply force, in world space.\n\x09 *\x09@param bIsLocalForce\x09If a SkeletalMeshComponent, name of body to apply force to. 'None' indicates root body.\n\x09 */" },
		{ "CPP_Default_bIsLocalForce", "false" },
		{ "ModuleRelativePath", "Public/AdvancedPawn.h" },
		{ "ToolTip", "Add a force to a single rigid body at a particular location in world space.\nThis is like a 'thruster'. Good for adding a burst over some (non zero) time. Should be called every frame for the duration of the force.\nCALL THIS FUNCTION ONLY AdvancedTick or TickAsync!\n\n@param Force                    Force vector to apply. Magnitude indicates strength of force.\n@param Location                 Location to apply force, in world space.\n@param bIsLocalForce    If a SkeletalMeshComponent, name of body to apply force to. 'None' indicates root body." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static void NewProp_bIsLocalForce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocalForce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvancedPawn_AddForceAtLocation_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedPawn_eventAddForceAtLocation_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponent_MetaData), NewProp_InComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvancedPawn_AddForceAtLocation_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedPawn_eventAddForceAtLocation_Parms, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvancedPawn_AddForceAtLocation_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedPawn_eventAddForceAtLocation_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAdvancedPawn_AddForceAtLocation_Statics::NewProp_bIsLocalForce_SetBit(void* Obj)
{
	((AdvancedPawn_eventAddForceAtLocation_Parms*)Obj)->bIsLocalForce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvancedPawn_AddForceAtLocation_Statics::NewProp_bIsLocalForce = { "bIsLocalForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedPawn_eventAddForceAtLocation_Parms), &Z_Construct_UFunction_AAdvancedPawn_AddForceAtLocation_Statics::NewProp_bIsLocalForce_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvancedPawn_AddForceAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedPawn_AddForceAtLocation_Statics::NewProp_InComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedPawn_AddForceAtLocation_Statics::NewProp_Force,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedPawn_AddForceAtLocation_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedPawn_AddForceAtLocation_Statics::NewProp_bIsLocalForce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_AddForceAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvancedPawn_AddForceAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvancedPawn, nullptr, "AddForceAtLocation", nullptr, nullptr, Z_Construct_UFunction_AAdvancedPawn_AddForceAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_AddForceAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAdvancedPawn_AddForceAtLocation_Statics::AdvancedPawn_eventAddForceAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_AddForceAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAdvancedPawn_AddForceAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAdvancedPawn_AddForceAtLocation_Statics::AdvancedPawn_eventAddForceAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAdvancedPawn_AddForceAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAdvancedPawn_AddForceAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAdvancedPawn::execAddForceAtLocation)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
	P_GET_STRUCT(FVector,Z_Param_Force);
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_GET_UBOOL(Z_Param_bIsLocalForce);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddForceAtLocation(Z_Param_InComponent,Z_Param_Force,Z_Param_Position,Z_Param_bIsLocalForce);
	P_NATIVE_END;
}
// End Class AAdvancedPawn Function AddForceAtLocation

// Begin Class AAdvancedPawn Function AddImpulse
struct Z_Construct_UFunction_AAdvancedPawn_AddImpulse_Statics
{
	struct AdvancedPawn_eventAddImpulse_Parms
	{
		const UPrimitiveComponent* InComponent;
		FVector Impulse;
		bool bVelChange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AdvancedTick|Physics" },
		{ "Comment", "/**\n\x09 *\x09""Add an impulse to a single rigid body. Good for one time instant burst.\n\x09 *  CALL THIS FUNCTION ONLY AdvancedTick or TickAsync!\n\x09 *\n\x09 *\x09@param\x09Impulse\x09\x09Magnitude and direction of impulse to apply.\n\x09 *\x09@param\x09""BoneName\x09If a SkeletalMeshComponent, name of body to apply impulse to. 'None' indicates root body.\n\x09 *\x09@param\x09""bVelChange\x09If true, the Strength is taken as a change in velocity instead of an impulse (ie. mass will have no effect).\n\x09 */" },
		{ "CPP_Default_bVelChange", "false" },
		{ "ModuleRelativePath", "Public/AdvancedPawn.h" },
		{ "ToolTip", "Add an impulse to a single rigid body. Good for one time instant burst.\nCALL THIS FUNCTION ONLY AdvancedTick or TickAsync!\n\n@param  Impulse         Magnitude and direction of impulse to apply.\n@param  BoneName        If a SkeletalMeshComponent, name of body to apply impulse to. 'None' indicates root body.\n@param  bVelChange      If true, the Strength is taken as a change in velocity instead of an impulse (ie. mass will have no effect)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Impulse;
	static void NewProp_bVelChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVelChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvancedPawn_AddImpulse_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedPawn_eventAddImpulse_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponent_MetaData), NewProp_InComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvancedPawn_AddImpulse_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedPawn_eventAddImpulse_Parms, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAdvancedPawn_AddImpulse_Statics::NewProp_bVelChange_SetBit(void* Obj)
{
	((AdvancedPawn_eventAddImpulse_Parms*)Obj)->bVelChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvancedPawn_AddImpulse_Statics::NewProp_bVelChange = { "bVelChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedPawn_eventAddImpulse_Parms), &Z_Construct_UFunction_AAdvancedPawn_AddImpulse_Statics::NewProp_bVelChange_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvancedPawn_AddImpulse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedPawn_AddImpulse_Statics::NewProp_InComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedPawn_AddImpulse_Statics::NewProp_Impulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedPawn_AddImpulse_Statics::NewProp_bVelChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_AddImpulse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvancedPawn_AddImpulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvancedPawn, nullptr, "AddImpulse", nullptr, nullptr, Z_Construct_UFunction_AAdvancedPawn_AddImpulse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_AddImpulse_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAdvancedPawn_AddImpulse_Statics::AdvancedPawn_eventAddImpulse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_AddImpulse_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAdvancedPawn_AddImpulse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAdvancedPawn_AddImpulse_Statics::AdvancedPawn_eventAddImpulse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAdvancedPawn_AddImpulse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAdvancedPawn_AddImpulse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAdvancedPawn::execAddImpulse)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
	P_GET_STRUCT(FVector,Z_Param_Impulse);
	P_GET_UBOOL(Z_Param_bVelChange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddImpulse(Z_Param_InComponent,Z_Param_Impulse,Z_Param_bVelChange);
	P_NATIVE_END;
}
// End Class AAdvancedPawn Function AddImpulse

// Begin Class AAdvancedPawn Function AddImpulseAtLocation
struct Z_Construct_UFunction_AAdvancedPawn_AddImpulseAtLocation_Statics
{
	struct AdvancedPawn_eventAddImpulseAtLocation_Parms
	{
		const UPrimitiveComponent* InComponent;
		FVector Impulse;
		FVector Position;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AdvancedTick|Physics" },
		{ "Comment", "/**\n\x09 *\x09""Add an impulse to a single rigid body at a specific location.\n\x09 *  CALL THIS FUNCTION ONLY AdvancedTick or TickAsync!\n\x09 *\n\x09 *\x09@param\x09Impulse\x09\x09Magnitude and direction of impulse to apply.\n\x09 *\x09@param\x09Location\x09Point in world space to apply impulse at.\n\x09 *\x09@param\x09""BoneName\x09If a SkeletalMeshComponent, name of bone to apply impulse to. 'None' indicates root body.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AdvancedPawn.h" },
		{ "ToolTip", "Add an impulse to a single rigid body at a specific location.\nCALL THIS FUNCTION ONLY AdvancedTick or TickAsync!\n\n@param  Impulse         Magnitude and direction of impulse to apply.\n@param  Location        Point in world space to apply impulse at.\n@param  BoneName        If a SkeletalMeshComponent, name of bone to apply impulse to. 'None' indicates root body." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Impulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvancedPawn_AddImpulseAtLocation_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedPawn_eventAddImpulseAtLocation_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponent_MetaData), NewProp_InComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvancedPawn_AddImpulseAtLocation_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedPawn_eventAddImpulseAtLocation_Parms, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvancedPawn_AddImpulseAtLocation_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedPawn_eventAddImpulseAtLocation_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvancedPawn_AddImpulseAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedPawn_AddImpulseAtLocation_Statics::NewProp_InComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedPawn_AddImpulseAtLocation_Statics::NewProp_Impulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedPawn_AddImpulseAtLocation_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_AddImpulseAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvancedPawn_AddImpulseAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvancedPawn, nullptr, "AddImpulseAtLocation", nullptr, nullptr, Z_Construct_UFunction_AAdvancedPawn_AddImpulseAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_AddImpulseAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAdvancedPawn_AddImpulseAtLocation_Statics::AdvancedPawn_eventAddImpulseAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_AddImpulseAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAdvancedPawn_AddImpulseAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAdvancedPawn_AddImpulseAtLocation_Statics::AdvancedPawn_eventAddImpulseAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAdvancedPawn_AddImpulseAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAdvancedPawn_AddImpulseAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAdvancedPawn::execAddImpulseAtLocation)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
	P_GET_STRUCT(FVector,Z_Param_Impulse);
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddImpulseAtLocation(Z_Param_InComponent,Z_Param_Impulse,Z_Param_Position);
	P_NATIVE_END;
}
// End Class AAdvancedPawn Function AddImpulseAtLocation

// Begin Class AAdvancedPawn Function AddTorque
struct Z_Construct_UFunction_AAdvancedPawn_AddTorque_Statics
{
	struct AdvancedPawn_eventAddTorque_Parms
	{
		const UPrimitiveComponent* InComponent;
		FVector Torque;
		bool bAccelChange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AdvancedTick|Physics" },
		{ "Comment", "/**\n\x09 *\x09""Add a torque to a single rigid body.\n\x09 *  CALL THIS FUNCTION ONLY AdvancedTick or TickAsync!\n\x09 * \n\x09 *\x09@param Torque\x09\x09Torque to apply. Direction is axis of rotation and magnitude is strength of torque.\n\x09 *\x09@param BoneName\x09\x09If a SkeletalMeshComponent, name of body to apply torque to. 'None' indicates root body.\n\x09 *  @param bAccelChange If true, Torque is taken as a change in angular acceleration instead of a physical torque (i.e. mass will have no effect).\n\x09 */" },
		{ "CPP_Default_bAccelChange", "false" },
		{ "ModuleRelativePath", "Public/AdvancedPawn.h" },
		{ "ToolTip", "Add a torque to a single rigid body.\nCALL THIS FUNCTION ONLY AdvancedTick or TickAsync!\n\n@param Torque           Torque to apply. Direction is axis of rotation and magnitude is strength of torque.\n@param BoneName         If a SkeletalMeshComponent, name of body to apply torque to. 'None' indicates root body.\n@param bAccelChange If true, Torque is taken as a change in angular acceleration instead of a physical torque (i.e. mass will have no effect)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Torque;
	static void NewProp_bAccelChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccelChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvancedPawn_AddTorque_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedPawn_eventAddTorque_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponent_MetaData), NewProp_InComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvancedPawn_AddTorque_Statics::NewProp_Torque = { "Torque", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedPawn_eventAddTorque_Parms, Torque), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAdvancedPawn_AddTorque_Statics::NewProp_bAccelChange_SetBit(void* Obj)
{
	((AdvancedPawn_eventAddTorque_Parms*)Obj)->bAccelChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvancedPawn_AddTorque_Statics::NewProp_bAccelChange = { "bAccelChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedPawn_eventAddTorque_Parms), &Z_Construct_UFunction_AAdvancedPawn_AddTorque_Statics::NewProp_bAccelChange_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvancedPawn_AddTorque_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedPawn_AddTorque_Statics::NewProp_InComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedPawn_AddTorque_Statics::NewProp_Torque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedPawn_AddTorque_Statics::NewProp_bAccelChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_AddTorque_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvancedPawn_AddTorque_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvancedPawn, nullptr, "AddTorque", nullptr, nullptr, Z_Construct_UFunction_AAdvancedPawn_AddTorque_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_AddTorque_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAdvancedPawn_AddTorque_Statics::AdvancedPawn_eventAddTorque_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_AddTorque_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAdvancedPawn_AddTorque_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAdvancedPawn_AddTorque_Statics::AdvancedPawn_eventAddTorque_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAdvancedPawn_AddTorque()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAdvancedPawn_AddTorque_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAdvancedPawn::execAddTorque)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
	P_GET_STRUCT(FVector,Z_Param_Torque);
	P_GET_UBOOL(Z_Param_bAccelChange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTorque(Z_Param_InComponent,Z_Param_Torque,Z_Param_bAccelChange);
	P_NATIVE_END;
}
// End Class AAdvancedPawn Function AddTorque

// Begin Class AAdvancedPawn Function AdvancedTick
struct AdvancedPawn_eventAdvancedTick_Parms
{
	float DeltaTime;
	float SimTime;
};
static FName NAME_AAdvancedPawn_AdvancedTick = FName(TEXT("AdvancedTick"));
void AAdvancedPawn::AdvancedTick(float DeltaTime, float SimTime)
{
	AdvancedPawn_eventAdvancedTick_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	Parms.SimTime=SimTime;
	ProcessEvent(FindFunctionChecked(NAME_AAdvancedPawn_AdvancedTick),&Parms);
}
struct Z_Construct_UFunction_AAdvancedPawn_AdvancedTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every advanced physics tick */" },
		{ "DisplayName", "Advanced Tick" },
		{ "ModuleRelativePath", "Public/AdvancedPawn.h" },
		{ "ToolTip", "Event called every advanced physics tick" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SimTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAdvancedPawn_AdvancedTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedPawn_eventAdvancedTick_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAdvancedPawn_AdvancedTick_Statics::NewProp_SimTime = { "SimTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedPawn_eventAdvancedTick_Parms, SimTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvancedPawn_AdvancedTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedPawn_AdvancedTick_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedPawn_AdvancedTick_Statics::NewProp_SimTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_AdvancedTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvancedPawn_AdvancedTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvancedPawn, nullptr, "AdvancedTick", nullptr, nullptr, Z_Construct_UFunction_AAdvancedPawn_AdvancedTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_AdvancedTick_Statics::PropPointers), sizeof(AdvancedPawn_eventAdvancedTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_AdvancedTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAdvancedPawn_AdvancedTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(AdvancedPawn_eventAdvancedTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAdvancedPawn_AdvancedTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAdvancedPawn_AdvancedTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AAdvancedPawn Function AdvancedTick

// Begin Class AAdvancedPawn Function GetLinearVelocity
struct Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocity_Statics
{
	struct AdvancedPawn_eventGetLinearVelocity_Parms
	{
		const UPrimitiveComponent* InComponent;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AdvancedTick|Physics" },
		{ "Comment", "/**\n\x09 *\x09Get the linear velocity of a single body.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AdvancedPawn.h" },
		{ "ToolTip", "Get the linear velocity of a single body." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocity_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedPawn_eventGetLinearVelocity_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponent_MetaData), NewProp_InComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedPawn_eventGetLinearVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocity_Statics::NewProp_InComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvancedPawn, nullptr, "GetLinearVelocity", nullptr, nullptr, Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocity_Statics::AdvancedPawn_eventGetLinearVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocity_Statics::AdvancedPawn_eventGetLinearVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAdvancedPawn::execGetLinearVelocity)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetLinearVelocity(Z_Param_InComponent);
	P_NATIVE_END;
}
// End Class AAdvancedPawn Function GetLinearVelocity

// Begin Class AAdvancedPawn Function GetLinearVelocityAtPoint
struct Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocityAtPoint_Statics
{
	struct AdvancedPawn_eventGetLinearVelocityAtPoint_Parms
	{
		const UPrimitiveComponent* InComponent;
		FVector Point;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AdvancedTick|Physics" },
		{ "Comment", "/**\n\x09 *\x09Get the linear velocity of a point on a single body.\n\x09 *\x09@param Point\x09\x09\x09Point is specified in world space.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AdvancedPawn.h" },
		{ "ToolTip", "Get the linear velocity of a point on a single body.\n@param Point                    Point is specified in world space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocityAtPoint_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedPawn_eventGetLinearVelocityAtPoint_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponent_MetaData), NewProp_InComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocityAtPoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedPawn_eventGetLinearVelocityAtPoint_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocityAtPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedPawn_eventGetLinearVelocityAtPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocityAtPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocityAtPoint_Statics::NewProp_InComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocityAtPoint_Statics::NewProp_Point,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocityAtPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocityAtPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocityAtPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvancedPawn, nullptr, "GetLinearVelocityAtPoint", nullptr, nullptr, Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocityAtPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocityAtPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocityAtPoint_Statics::AdvancedPawn_eventGetLinearVelocityAtPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocityAtPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocityAtPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocityAtPoint_Statics::AdvancedPawn_eventGetLinearVelocityAtPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocityAtPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocityAtPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAdvancedPawn::execGetLinearVelocityAtPoint)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
	P_GET_STRUCT(FVector,Z_Param_Point);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetLinearVelocityAtPoint(Z_Param_InComponent,Z_Param_Point);
	P_NATIVE_END;
}
// End Class AAdvancedPawn Function GetLinearVelocityAtPoint

// Begin Class AAdvancedPawn Function GetPrimitiveCOM
struct Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveCOM_Statics
{
	struct AdvancedPawn_eventGetPrimitiveCOM_Parms
	{
		const UPrimitiveComponent* InComponent;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AdvancedTick|Physics" },
		{ "Comment", "/*\n\x09 *\x09Get the center of mass in primitive component\n\x09 */" },
		{ "DisplayName", "Get Center of Mass" },
		{ "ModuleRelativePath", "Public/AdvancedPawn.h" },
		{ "ToolTip", "*      Get the center of mass in primitive component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveCOM_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedPawn_eventGetPrimitiveCOM_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponent_MetaData), NewProp_InComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveCOM_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedPawn_eventGetPrimitiveCOM_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveCOM_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveCOM_Statics::NewProp_InComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveCOM_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveCOM_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveCOM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvancedPawn, nullptr, "GetPrimitiveCOM", nullptr, nullptr, Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveCOM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveCOM_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveCOM_Statics::AdvancedPawn_eventGetPrimitiveCOM_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveCOM_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveCOM_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveCOM_Statics::AdvancedPawn_eventGetPrimitiveCOM_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveCOM()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveCOM_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAdvancedPawn::execGetPrimitiveCOM)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetPrimitiveCOM(Z_Param_InComponent);
	P_NATIVE_END;
}
// End Class AAdvancedPawn Function GetPrimitiveCOM

// Begin Class AAdvancedPawn Function GetPrimitiveWorldTransform
struct Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveWorldTransform_Statics
{
	struct AdvancedPawn_eventGetPrimitiveWorldTransform_Parms
	{
		const UPrimitiveComponent* InComponent;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AdvancedTick|Physics" },
		{ "Comment", "/* Get the current component-to-world transform for this component */" },
		{ "DisplayName", "Get World Transform" },
		{ "ModuleRelativePath", "Public/AdvancedPawn.h" },
		{ "ToolTip", "Get the current component-to-world transform for this component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveWorldTransform_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedPawn_eventGetPrimitiveWorldTransform_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponent_MetaData), NewProp_InComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveWorldTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedPawn_eventGetPrimitiveWorldTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveWorldTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveWorldTransform_Statics::NewProp_InComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveWorldTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveWorldTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvancedPawn, nullptr, "GetPrimitiveWorldTransform", nullptr, nullptr, Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveWorldTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveWorldTransform_Statics::AdvancedPawn_eventGetPrimitiveWorldTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveWorldTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveWorldTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveWorldTransform_Statics::AdvancedPawn_eventGetPrimitiveWorldTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveWorldTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveWorldTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAdvancedPawn::execGetPrimitiveWorldTransform)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetPrimitiveWorldTransform(Z_Param_InComponent);
	P_NATIVE_END;
}
// End Class AAdvancedPawn Function GetPrimitiveWorldTransform

// Begin Class AAdvancedPawn
void AAdvancedPawn::StaticRegisterNativesAAdvancedPawn()
{
	UClass* Class = AAdvancedPawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddForce", &AAdvancedPawn::execAddForce },
		{ "AddForceAtLocation", &AAdvancedPawn::execAddForceAtLocation },
		{ "AddImpulse", &AAdvancedPawn::execAddImpulse },
		{ "AddImpulseAtLocation", &AAdvancedPawn::execAddImpulseAtLocation },
		{ "AddTorque", &AAdvancedPawn::execAddTorque },
		{ "GetLinearVelocity", &AAdvancedPawn::execGetLinearVelocity },
		{ "GetLinearVelocityAtPoint", &AAdvancedPawn::execGetLinearVelocityAtPoint },
		{ "GetPrimitiveCOM", &AAdvancedPawn::execGetPrimitiveCOM },
		{ "GetPrimitiveWorldTransform", &AAdvancedPawn::execGetPrimitiveWorldTransform },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAdvancedPawn);
UClass* Z_Construct_UClass_AAdvancedPawn_NoRegister()
{
	return AAdvancedPawn::StaticClass();
}
struct Z_Construct_UClass_AAdvancedPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AdvancedPawn.h" },
		{ "ModuleRelativePath", "Public/AdvancedPawn.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAdvancedPawn_AddForce, "AddForce" }, // 3334494097
		{ &Z_Construct_UFunction_AAdvancedPawn_AddForceAtLocation, "AddForceAtLocation" }, // 1679457991
		{ &Z_Construct_UFunction_AAdvancedPawn_AddImpulse, "AddImpulse" }, // 56272812
		{ &Z_Construct_UFunction_AAdvancedPawn_AddImpulseAtLocation, "AddImpulseAtLocation" }, // 1786579367
		{ &Z_Construct_UFunction_AAdvancedPawn_AddTorque, "AddTorque" }, // 2730331310
		{ &Z_Construct_UFunction_AAdvancedPawn_AdvancedTick, "AdvancedTick" }, // 1658466978
		{ &Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocity, "GetLinearVelocity" }, // 1773539919
		{ &Z_Construct_UFunction_AAdvancedPawn_GetLinearVelocityAtPoint, "GetLinearVelocityAtPoint" }, // 3709444998
		{ &Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveCOM, "GetPrimitiveCOM" }, // 200474185
		{ &Z_Construct_UFunction_AAdvancedPawn_GetPrimitiveWorldTransform, "GetPrimitiveWorldTransform" }, // 2676829809
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvancedPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAdvancedPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAdvancedPawn_Statics::ClassParams = {
	&AAdvancedPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AAdvancedPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAdvancedPawn()
{
	if (!Z_Registration_Info_UClass_AAdvancedPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAdvancedPawn.OuterSingleton, Z_Construct_UClass_AAdvancedPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAdvancedPawn.OuterSingleton;
}
template<> ADVANCEDPLUGIN_API UClass* StaticClass<AAdvancedPawn>()
{
	return AAdvancedPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvancedPawn);
AAdvancedPawn::~AAdvancedPawn() {}
// End Class AAdvancedPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEPlugins_Compiled_AT_HostProject_Plugins_AdvancedPhysicsTick_Source_AdvancedPlugin_Public_AdvancedPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAdvancedPawn, AAdvancedPawn::StaticClass, TEXT("AAdvancedPawn"), &Z_Registration_Info_UClass_AAdvancedPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAdvancedPawn), 4061323167U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEPlugins_Compiled_AT_HostProject_Plugins_AdvancedPhysicsTick_Source_AdvancedPlugin_Public_AdvancedPawn_h_2337442576(TEXT("/Script/AdvancedPlugin"),
	Z_CompiledInDeferFile_FID_UEPlugins_Compiled_AT_HostProject_Plugins_AdvancedPhysicsTick_Source_AdvancedPlugin_Public_AdvancedPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEPlugins_Compiled_AT_HostProject_Plugins_AdvancedPhysicsTick_Source_AdvancedPlugin_Public_AdvancedPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
