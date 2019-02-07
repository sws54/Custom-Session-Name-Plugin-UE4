// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomSessionName/Public/GetCustomSessionNameNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetCustomSessionNameNode() {}
// Cross Module References
	CUSTOMSESSIONNAME_API UClass* Z_Construct_UClass_UGetCustomSessionNameNode_NoRegister();
	CUSTOMSESSIONNAME_API UClass* Z_Construct_UClass_UGetCustomSessionNameNode();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CustomSessionName();
	CUSTOMSESSIONNAME_API UFunction* Z_Construct_UFunction_UGetCustomSessionNameNode_GetCustomSessionName();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
// End Cross Module References
	void UGetCustomSessionNameNode::StaticRegisterNativesUGetCustomSessionNameNode()
	{
		UClass* Class = UGetCustomSessionNameNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomSessionName", &UGetCustomSessionNameNode::execGetCustomSessionName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGetCustomSessionNameNode_GetCustomSessionName_Statics
	{
		struct GetCustomSessionNameNode_eventGetCustomSessionName_Parms
		{
			FBlueprintSessionResult SearchRes;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SearchRes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGetCustomSessionNameNode_GetCustomSessionName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GetCustomSessionNameNode_eventGetCustomSessionName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGetCustomSessionNameNode_GetCustomSessionName_Statics::NewProp_SearchRes = { UE4CodeGen_Private::EPropertyClass::Struct, "SearchRes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GetCustomSessionNameNode_eventGetCustomSessionName_Parms, SearchRes), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetCustomSessionNameNode_GetCustomSessionName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetCustomSessionNameNode_GetCustomSessionName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetCustomSessionNameNode_GetCustomSessionName_Statics::NewProp_SearchRes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetCustomSessionNameNode_GetCustomSessionName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Custom Session" },
		{ "ModuleRelativePath", "Public/GetCustomSessionNameNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetCustomSessionNameNode_GetCustomSessionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetCustomSessionNameNode, "GetCustomSessionName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(GetCustomSessionNameNode_eventGetCustomSessionName_Parms), Z_Construct_UFunction_UGetCustomSessionNameNode_GetCustomSessionName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGetCustomSessionNameNode_GetCustomSessionName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetCustomSessionNameNode_GetCustomSessionName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGetCustomSessionNameNode_GetCustomSessionName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetCustomSessionNameNode_GetCustomSessionName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetCustomSessionNameNode_GetCustomSessionName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGetCustomSessionNameNode_NoRegister()
	{
		return UGetCustomSessionNameNode::StaticClass();
	}
	struct Z_Construct_UClass_UGetCustomSessionNameNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGetCustomSessionNameNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomSessionName,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGetCustomSessionNameNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGetCustomSessionNameNode_GetCustomSessionName, "GetCustomSessionName" }, // 1022290468
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetCustomSessionNameNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GetCustomSessionNameNode.h" },
		{ "ModuleRelativePath", "Public/GetCustomSessionNameNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetCustomSessionNameNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetCustomSessionNameNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGetCustomSessionNameNode_Statics::ClassParams = {
		&UGetCustomSessionNameNode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGetCustomSessionNameNode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGetCustomSessionNameNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGetCustomSessionNameNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGetCustomSessionNameNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGetCustomSessionNameNode, 2996016892);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGetCustomSessionNameNode(Z_Construct_UClass_UGetCustomSessionNameNode, &UGetCustomSessionNameNode::StaticClass, TEXT("/Script/CustomSessionName"), TEXT("UGetCustomSessionNameNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetCustomSessionNameNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
