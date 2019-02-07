// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomSessionName/Public/CreateCustomSessionProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreateCustomSessionProxy() {}
// Cross Module References
	CUSTOMSESSIONNAME_API UClass* Z_Construct_UClass_UCreateCustomSessionProxy_NoRegister();
	CUSTOMSESSIONNAME_API UClass* Z_Construct_UClass_UCreateCustomSessionProxy();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_CustomSessionName();
	CUSTOMSESSIONNAME_API UFunction* Z_Construct_UFunction_UCreateCustomSessionProxy_CreateCustomSession();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	void UCreateCustomSessionProxy::StaticRegisterNativesUCreateCustomSessionProxy()
	{
		UClass* Class = UCreateCustomSessionProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateCustomSession", &UCreateCustomSessionProxy::execCreateCustomSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCreateCustomSessionProxy_CreateCustomSession_Statics
	{
		struct CreateCustomSessionProxy_eventCreateCustomSession_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			int32 PublicConnections;
			bool bUseLAN;
			FName CustomSessionName;
			UCreateCustomSessionProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CustomSessionName;
		static void NewProp_bUseLAN_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLAN;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PublicConnections;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreateCustomSessionProxy_CreateCustomSession_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CreateCustomSessionProxy_eventCreateCustomSession_Parms, ReturnValue), Z_Construct_UClass_UCreateCustomSessionProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCreateCustomSessionProxy_CreateCustomSession_Statics::NewProp_CustomSessionName = { UE4CodeGen_Private::EPropertyClass::Name, "CustomSessionName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CreateCustomSessionProxy_eventCreateCustomSession_Parms, CustomSessionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCreateCustomSessionProxy_CreateCustomSession_Statics::NewProp_bUseLAN_SetBit(void* Obj)
	{
		((CreateCustomSessionProxy_eventCreateCustomSession_Parms*)Obj)->bUseLAN = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateCustomSessionProxy_CreateCustomSession_Statics::NewProp_bUseLAN = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseLAN", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CreateCustomSessionProxy_eventCreateCustomSession_Parms), &Z_Construct_UFunction_UCreateCustomSessionProxy_CreateCustomSession_Statics::NewProp_bUseLAN_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCreateCustomSessionProxy_CreateCustomSession_Statics::NewProp_PublicConnections = { UE4CodeGen_Private::EPropertyClass::Int, "PublicConnections", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CreateCustomSessionProxy_eventCreateCustomSession_Parms, PublicConnections), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreateCustomSessionProxy_CreateCustomSession_Statics::NewProp_PlayerController = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CreateCustomSessionProxy_eventCreateCustomSession_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreateCustomSessionProxy_CreateCustomSession_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CreateCustomSessionProxy_eventCreateCustomSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreateCustomSessionProxy_CreateCustomSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateCustomSessionProxy_CreateCustomSession_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateCustomSessionProxy_CreateCustomSession_Statics::NewProp_CustomSessionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateCustomSessionProxy_CreateCustomSession_Statics::NewProp_bUseLAN,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateCustomSessionProxy_CreateCustomSession_Statics::NewProp_PublicConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateCustomSessionProxy_CreateCustomSession_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateCustomSessionProxy_CreateCustomSession_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreateCustomSessionProxy_CreateCustomSession_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Custom Session" },
		{ "ModuleRelativePath", "Public/CreateCustomSessionProxy.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreateCustomSessionProxy_CreateCustomSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreateCustomSessionProxy, "CreateCustomSession", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CreateCustomSessionProxy_eventCreateCustomSession_Parms), Z_Construct_UFunction_UCreateCustomSessionProxy_CreateCustomSession_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCreateCustomSessionProxy_CreateCustomSession_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreateCustomSessionProxy_CreateCustomSession_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCreateCustomSessionProxy_CreateCustomSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreateCustomSessionProxy_CreateCustomSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCreateCustomSessionProxy_CreateCustomSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCreateCustomSessionProxy_NoRegister()
	{
		return UCreateCustomSessionProxy::StaticClass();
	}
	struct Z_Construct_UClass_UCreateCustomSessionProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCreateCustomSessionProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomSessionName,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCreateCustomSessionProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCreateCustomSessionProxy_CreateCustomSession, "CreateCustomSession" }, // 3421048016
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateCustomSessionProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CreateCustomSessionProxy.h" },
		{ "ModuleRelativePath", "Public/CreateCustomSessionProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateCustomSessionProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/CreateCustomSessionProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCreateCustomSessionProxy_Statics::NewProp_OnFailure = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnFailure", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UCreateCustomSessionProxy, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCreateCustomSessionProxy_Statics::NewProp_OnFailure_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCreateCustomSessionProxy_Statics::NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateCustomSessionProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/CreateCustomSessionProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCreateCustomSessionProxy_Statics::NewProp_OnSuccess = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSuccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UCreateCustomSessionProxy, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCreateCustomSessionProxy_Statics::NewProp_OnSuccess_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCreateCustomSessionProxy_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCreateCustomSessionProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateCustomSessionProxy_Statics::NewProp_OnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateCustomSessionProxy_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCreateCustomSessionProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreateCustomSessionProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCreateCustomSessionProxy_Statics::ClassParams = {
		&UCreateCustomSessionProxy::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008800A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCreateCustomSessionProxy_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCreateCustomSessionProxy_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCreateCustomSessionProxy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCreateCustomSessionProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCreateCustomSessionProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCreateCustomSessionProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCreateCustomSessionProxy, 2410710024);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCreateCustomSessionProxy(Z_Construct_UClass_UCreateCustomSessionProxy, &UCreateCustomSessionProxy::StaticClass, TEXT("/Script/CustomSessionName"), TEXT("UCreateCustomSessionProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreateCustomSessionProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
