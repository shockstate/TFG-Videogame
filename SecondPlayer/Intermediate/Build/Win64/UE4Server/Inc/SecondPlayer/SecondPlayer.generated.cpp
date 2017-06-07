// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SecondPlayer.h"
#include "SecondPlayer.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1SecondPlayer() {}
	void AMine::StaticRegisterNativesAMine()
	{
		FNativeFunctionRegistrar::RegisterFunction(AMine::StaticClass(), "OnHit",(Native)&AMine::execOnHit);
	}
	IMPLEMENT_CLASS(AMine, 1401451840);
	void AHability::StaticRegisterNativesAHability()
	{
	}
	IMPLEMENT_CLASS(AHability, 3979630633);
	void AMyPawn::StaticRegisterNativesAMyPawn()
	{
	}
	IMPLEMENT_CLASS(AMyPawn, 4280594670);
	void APawnCamera::StaticRegisterNativesAPawnCamera()
	{
	}
	IMPLEMENT_CLASS(APawnCamera, 3939244040);
	void ASecondPlayerGameModeBase::StaticRegisterNativesASecondPlayerGameModeBase()
	{
	}
	IMPLEMENT_CLASS(ASecondPlayerGameModeBase, 3657009489);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_APawn();
	ENGINE_API class UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_ADefaultPawn();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();

	SECONDPLAYER_API class UFunction* Z_Construct_UFunction_AMine_OnHit();
	SECONDPLAYER_API class UClass* Z_Construct_UClass_AMine_NoRegister();
	SECONDPLAYER_API class UClass* Z_Construct_UClass_AMine();
	SECONDPLAYER_API class UClass* Z_Construct_UClass_AHability_NoRegister();
	SECONDPLAYER_API class UClass* Z_Construct_UClass_AHability();
	SECONDPLAYER_API class UClass* Z_Construct_UClass_AMyPawn_NoRegister();
	SECONDPLAYER_API class UClass* Z_Construct_UClass_AMyPawn();
	SECONDPLAYER_API class UClass* Z_Construct_UClass_APawnCamera_NoRegister();
	SECONDPLAYER_API class UClass* Z_Construct_UClass_APawnCamera();
	SECONDPLAYER_API class UClass* Z_Construct_UClass_ASecondPlayerGameModeBase_NoRegister();
	SECONDPLAYER_API class UClass* Z_Construct_UClass_ASecondPlayerGameModeBase();
	SECONDPLAYER_API class UPackage* Z_Construct_UPackage__Script_SecondPlayer();
	UFunction* Z_Construct_UFunction_AMine_OnHit()
	{
		struct Mine_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UObject* Outer=Z_Construct_UClass_AMine();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00C20401, 65535, sizeof(Mine_eventOnHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Hit, Mine_eventOnHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, Mine_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, Mine_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, Mine_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_HitComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HitComp, Mine_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Mine.h"));
			MetaData->SetValue(NewProp_Hit, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_HitComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMine_NoRegister()
	{
		return AMine::StaticClass();
	}
	UClass* Z_Construct_UClass_AMine()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_SecondPlayer();
			OuterClass = AMine::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AMine_OnHit());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMine_OnHit(), "OnHit"); // 3461190097
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Mine.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Mine.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMine(Z_Construct_UClass_AMine, &AMine::StaticClass, TEXT("AMine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMine);
	UClass* Z_Construct_UClass_AHability_NoRegister()
	{
		return AHability::StaticClass();
	}
	UClass* Z_Construct_UClass_AHability()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_SecondPlayer();
			OuterClass = AHability::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_MineClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MineClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(MineClass, AHability), 0x0014000000000004, Z_Construct_UClass_AMine_NoRegister(), UClass::StaticClass());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Hability.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Hability.h"));
				MetaData->SetValue(NewProp_MineClass, TEXT("Category"), TEXT("Hability"));
				MetaData->SetValue(NewProp_MineClass, TEXT("ModuleRelativePath"), TEXT("Hability.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHability(Z_Construct_UClass_AHability, &AHability::StaticClass, TEXT("AHability"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHability);
	UClass* Z_Construct_UClass_AMyPawn_NoRegister()
	{
		return AMyPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyPawn()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_SecondPlayer();
			OuterClass = AMyPawn::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_OurVisibleComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OurVisibleComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OurVisibleComponent, AMyPawn), 0x0010000000080009, Z_Construct_UClass_USceneComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyPawn.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyPawn.h"));
				MetaData->SetValue(NewProp_OurVisibleComponent, TEXT("Category"), TEXT("MyPawn"));
				MetaData->SetValue(NewProp_OurVisibleComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_OurVisibleComponent, TEXT("ModuleRelativePath"), TEXT("MyPawn.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPawn(Z_Construct_UClass_AMyPawn, &AMyPawn::StaticClass, TEXT("AMyPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPawn);
	UClass* Z_Construct_UClass_APawnCamera_NoRegister()
	{
		return APawnCamera::StaticClass();
	}
	UClass* Z_Construct_UClass_APawnCamera()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ADefaultPawn();
			Z_Construct_UPackage__Script_SecondPlayer();
			OuterClass = APawnCamera::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_AbilitySpawn = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AbilitySpawn"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(AbilitySpawn, APawnCamera), 0x0014000000020001, Z_Construct_UClass_AHability_NoRegister(), UClass::StaticClass());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PawnCamera.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PawnCamera.h"));
				MetaData->SetValue(NewProp_AbilitySpawn, TEXT("Category"), TEXT("Spawn"));
				MetaData->SetValue(NewProp_AbilitySpawn, TEXT("ModuleRelativePath"), TEXT("PawnCamera.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APawnCamera(Z_Construct_UClass_APawnCamera, &APawnCamera::StaticClass, TEXT("APawnCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APawnCamera);
	UClass* Z_Construct_UClass_ASecondPlayerGameModeBase_NoRegister()
	{
		return ASecondPlayerGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ASecondPlayerGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_SecondPlayer();
			OuterClass = ASecondPlayerGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SecondPlayerGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("SecondPlayerGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASecondPlayerGameModeBase(Z_Construct_UClass_ASecondPlayerGameModeBase, &ASecondPlayerGameModeBase::StaticClass, TEXT("ASecondPlayerGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASecondPlayerGameModeBase);
	UPackage* Z_Construct_UPackage__Script_SecondPlayer()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/SecondPlayer")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x01D9F622;
			Guid.B = 0x63A3FC3E;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
