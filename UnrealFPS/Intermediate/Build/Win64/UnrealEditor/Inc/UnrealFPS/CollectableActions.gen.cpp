// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealFPS/CollectableActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectableActions() {}
// Cross Module References
	UNREALFPS_API UClass* Z_Construct_UClass_UCollectableActions_NoRegister();
	UNREALFPS_API UClass* Z_Construct_UClass_UCollectableActions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_UnrealFPS();
// End Cross Module References
	DEFINE_FUNCTION(ICollectableActions::execOnCollectableCollected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCollectableCollected_Implementation();
		P_NATIVE_END;
	}
	void ICollectableActions::OnCollectableCollected()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnCollectableCollected instead.");
	}
	void UCollectableActions::StaticRegisterNativesUCollectableActions()
	{
		UClass* Class = UCollectableActions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCollectableCollected", &ICollectableActions::execOnCollectableCollected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCollectableActions_OnCollectableCollected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCollectableActions_OnCollectableCollected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collectables" },
		{ "ModuleRelativePath", "CollectableActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCollectableActions_OnCollectableCollected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCollectableActions, nullptr, "OnCollectableCollected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCollectableActions_OnCollectableCollected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCollectableActions_OnCollectableCollected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCollectableActions_OnCollectableCollected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCollectableActions_OnCollectableCollected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCollectableActions);
	UClass* Z_Construct_UClass_UCollectableActions_NoRegister()
	{
		return UCollectableActions::StaticClass();
	}
	struct Z_Construct_UClass_UCollectableActions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCollectableActions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealFPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCollectableActions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCollectableActions_OnCollectableCollected, "OnCollectableCollected" }, // 2500647205
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollectableActions_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "CollectableActions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCollectableActions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICollectableActions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCollectableActions_Statics::ClassParams = {
		&UCollectableActions::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCollectableActions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCollectableActions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCollectableActions()
	{
		if (!Z_Registration_Info_UClass_UCollectableActions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCollectableActions.OuterSingleton, Z_Construct_UClass_UCollectableActions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCollectableActions.OuterSingleton;
	}
	template<> UNREALFPS_API UClass* StaticClass<UCollectableActions>()
	{
		return UCollectableActions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCollectableActions);
	static FName NAME_UCollectableActions_OnCollectableCollected = FName(TEXT("OnCollectableCollected"));
	void ICollectableActions::Execute_OnCollectableCollected(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCollectableActions::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UCollectableActions_OnCollectableCollected);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ICollectableActions*)(O->GetNativeInterfaceAddress(UCollectableActions::StaticClass())))
		{
			I->OnCollectableCollected_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCollectableActions, UCollectableActions::StaticClass, TEXT("UCollectableActions"), &Z_Registration_Info_UClass_UCollectableActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCollectableActions), 612415119U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_819523897(TEXT("/Script/UnrealFPS"),
		Z_CompiledInDeferFile_FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
