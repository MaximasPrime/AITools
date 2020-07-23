// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AITools/Public/AIToolsBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIToolsBPLibrary() {}
// Cross Module References
	AITOOLS_API UClass* Z_Construct_UClass_UAIToolsBPLibrary_NoRegister();
	AITOOLS_API UClass* Z_Construct_UClass_UAIToolsBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AITools();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAIToolsBPLibrary::execSetVisionAndHearing)
	{
		P_GET_OBJECT(UAIPerceptionComponent,Z_Param_Perception);
		P_GET_UBOOL(Z_Param_ChangeVision);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SightRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LossSightRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HalfAngle);
		P_GET_UBOOL(Z_Param_ChangeHearing);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HearingRange);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAIToolsBPLibrary::SetVisionAndHearing(Z_Param_Perception,Z_Param_ChangeVision,Z_Param_SightRadius,Z_Param_LossSightRadius,Z_Param_HalfAngle,Z_Param_ChangeHearing,Z_Param_HearingRange,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	void UAIToolsBPLibrary::StaticRegisterNativesUAIToolsBPLibrary()
	{
		UClass* Class = UAIToolsBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetVisionAndHearing", &UAIToolsBPLibrary::execSetVisionAndHearing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics
	{
		struct AIToolsBPLibrary_eventSetVisionAndHearing_Parms
		{
			UAIPerceptionComponent* Perception;
			bool ChangeVision;
			float SightRadius;
			float LossSightRadius;
			float HalfAngle;
			bool ChangeHearing;
			float HearingRange;
			bool Success;
		};
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HearingRange;
		static void NewProp_ChangeHearing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ChangeHearing;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfAngle;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LossSightRadius;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SightRadius;
		static void NewProp_ChangeVision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ChangeVision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Perception;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((AIToolsBPLibrary_eventSetVisionAndHearing_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIToolsBPLibrary_eventSetVisionAndHearing_Parms), &Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::NewProp_HearingRange = { "HearingRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIToolsBPLibrary_eventSetVisionAndHearing_Parms, HearingRange), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::NewProp_ChangeHearing_SetBit(void* Obj)
	{
		((AIToolsBPLibrary_eventSetVisionAndHearing_Parms*)Obj)->ChangeHearing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::NewProp_ChangeHearing = { "ChangeHearing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIToolsBPLibrary_eventSetVisionAndHearing_Parms), &Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::NewProp_ChangeHearing_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::NewProp_HalfAngle = { "HalfAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIToolsBPLibrary_eventSetVisionAndHearing_Parms, HalfAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::NewProp_LossSightRadius = { "LossSightRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIToolsBPLibrary_eventSetVisionAndHearing_Parms, LossSightRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::NewProp_SightRadius = { "SightRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIToolsBPLibrary_eventSetVisionAndHearing_Parms, SightRadius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::NewProp_ChangeVision_SetBit(void* Obj)
	{
		((AIToolsBPLibrary_eventSetVisionAndHearing_Parms*)Obj)->ChangeVision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::NewProp_ChangeVision = { "ChangeVision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIToolsBPLibrary_eventSetVisionAndHearing_Parms), &Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::NewProp_ChangeVision_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::NewProp_Perception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIToolsBPLibrary_eventSetVisionAndHearing_Parms, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::NewProp_Perception_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::NewProp_Perception_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::NewProp_HearingRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::NewProp_ChangeHearing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::NewProp_HalfAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::NewProp_LossSightRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::NewProp_SightRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::NewProp_ChangeVision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::NewProp_Perception,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::Function_MetaDataParams[] = {
		{ "Category", "AITools|Perception" },
		{ "ModuleRelativePath", "Public/AIToolsBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIToolsBPLibrary, nullptr, "SetVisionAndHearing", nullptr, nullptr, sizeof(AIToolsBPLibrary_eventSetVisionAndHearing_Parms), Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIToolsBPLibrary_NoRegister()
	{
		return UAIToolsBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAIToolsBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIToolsBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AITools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAIToolsBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIToolsBPLibrary_SetVisionAndHearing, "SetVisionAndHearing" }, // 677582980
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIToolsBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "AIToolsBPLibrary.h" },
		{ "ModuleRelativePath", "Public/AIToolsBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIToolsBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIToolsBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIToolsBPLibrary_Statics::ClassParams = {
		&UAIToolsBPLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAIToolsBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIToolsBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIToolsBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIToolsBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIToolsBPLibrary, 3509610638);
	template<> AITOOLS_API UClass* StaticClass<UAIToolsBPLibrary>()
	{
		return UAIToolsBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIToolsBPLibrary(Z_Construct_UClass_UAIToolsBPLibrary, &UAIToolsBPLibrary::StaticClass, TEXT("/Script/AITools"), TEXT("UAIToolsBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIToolsBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
