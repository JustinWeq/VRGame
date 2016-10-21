// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "vr_game.h"
#include "vr_game.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1vr_game() {}
FName VR_GAME_Fire = FName(TEXT("Fire"));
	void AMainPlayer::Fire()
	{
		ProcessEvent(FindFunctionChecked(VR_GAME_Fire),NULL);
	}
	void AMainPlayer::StaticRegisterNativesAMainPlayer()
	{
		FNativeFunctionRegistrar::RegisterFunction(AMainPlayer::StaticClass(), "EndJump",(Native)&AMainPlayer::execEndJump);
		FNativeFunctionRegistrar::RegisterFunction(AMainPlayer::StaticClass(), "Fire",(Native)&AMainPlayer::execFire);
		FNativeFunctionRegistrar::RegisterFunction(AMainPlayer::StaticClass(), "MoveForward",(Native)&AMainPlayer::execMoveForward);
		FNativeFunctionRegistrar::RegisterFunction(AMainPlayer::StaticClass(), "MoveRight",(Native)&AMainPlayer::execMoveRight);
		FNativeFunctionRegistrar::RegisterFunction(AMainPlayer::StaticClass(), "StartJump",(Native)&AMainPlayer::execStartJump);
	}
	IMPLEMENT_CLASS(AMainPlayer, 2343694086);
	void AVR_HUD::StaticRegisterNativesAVR_HUD()
	{
	}
	IMPLEMENT_CLASS(AVR_HUD, 1786294775);
	void AVRGameMode::StaticRegisterNativesAVRGameMode()
	{
		FNativeFunctionRegistrar::RegisterFunction(AVRGameMode::StaticClass(), "BeginPlay",(Native)&AVRGameMode::execBeginPlay);
	}
	IMPLEMENT_CLASS(AVRGameMode, 1831847066);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AHUD();
	ENGINE_API class UClass* Z_Construct_UClass_AGameMode();

	VR_GAME_API class UFunction* Z_Construct_UFunction_AMainPlayer_EndJump();
	VR_GAME_API class UFunction* Z_Construct_UFunction_AMainPlayer_Fire();
	VR_GAME_API class UFunction* Z_Construct_UFunction_AMainPlayer_MoveForward();
	VR_GAME_API class UFunction* Z_Construct_UFunction_AMainPlayer_MoveRight();
	VR_GAME_API class UFunction* Z_Construct_UFunction_AMainPlayer_StartJump();
	VR_GAME_API class UClass* Z_Construct_UClass_AMainPlayer_NoRegister();
	VR_GAME_API class UClass* Z_Construct_UClass_AMainPlayer();
	VR_GAME_API class UClass* Z_Construct_UClass_AVR_HUD_NoRegister();
	VR_GAME_API class UClass* Z_Construct_UClass_AVR_HUD();
	VR_GAME_API class UFunction* Z_Construct_UFunction_AVRGameMode_BeginPlay();
	VR_GAME_API class UClass* Z_Construct_UClass_AVRGameMode_NoRegister();
	VR_GAME_API class UClass* Z_Construct_UClass_AVRGameMode();
	VR_GAME_API class UPackage* Z_Construct_UPackage__Script_vr_game();
	UFunction* Z_Construct_UFunction_AMainPlayer_EndJump()
	{
		UObject* Outer=Z_Construct_UClass_AMainPlayer();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EndJump"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MainPlayer.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMainPlayer_Fire()
	{
		UObject* Outer=Z_Construct_UClass_AMainPlayer();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Fire"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x80220CC0, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MainPlayer.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMainPlayer_MoveForward()
	{
		struct MainPlayer_eventMoveForward_Parms
		{
			float value;
		};
		UObject* Outer=Z_Construct_UClass_AMainPlayer();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MoveForward"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(MainPlayer_eventMoveForward_Parms));
			UProperty* NewProp_value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(value, MainPlayer_eventMoveForward_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MainPlayer.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMainPlayer_MoveRight()
	{
		struct MainPlayer_eventMoveRight_Parms
		{
			float value;
		};
		UObject* Outer=Z_Construct_UClass_AMainPlayer();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MoveRight"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(MainPlayer_eventMoveRight_Parms));
			UProperty* NewProp_value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(value, MainPlayer_eventMoveRight_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MainPlayer.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMainPlayer_StartJump()
	{
		UObject* Outer=Z_Construct_UClass_AMainPlayer();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StartJump"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MainPlayer.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("UFUNCTION()\n       void LookUp(float value);"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMainPlayer_NoRegister()
	{
		return AMainPlayer::StaticClass();
	}
	UClass* Z_Construct_UClass_AMainPlayer()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_vr_game();
			OuterClass = AMainPlayer::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AMainPlayer_EndJump());
				OuterClass->LinkChild(Z_Construct_UFunction_AMainPlayer_Fire());
				OuterClass->LinkChild(Z_Construct_UFunction_AMainPlayer_MoveForward());
				OuterClass->LinkChild(Z_Construct_UFunction_AMainPlayer_MoveRight());
				OuterClass->LinkChild(Z_Construct_UFunction_AMainPlayer_StartJump());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_cameraPosition = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("cameraPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(cameraPosition, AMainPlayer), 0x0010000000000005, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_FPSCamera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FPSCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FPSCamera, AMainPlayer), 0x0010000000080009, Z_Construct_UClass_UCameraComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMainPlayer_EndJump(), "EndJump"); // 2614520282
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMainPlayer_Fire(), "Fire"); // 637120870
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMainPlayer_MoveForward(), "MoveForward"); // 3983257027
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMainPlayer_MoveRight(), "MoveRight"); // 3138645677
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMainPlayer_StartJump(), "StartJump"); // 4068133032
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MainPlayer.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MainPlayer.h"));
				MetaData->SetValue(NewProp_cameraPosition, TEXT("Category"), TEXT("GamePlay"));
				MetaData->SetValue(NewProp_cameraPosition, TEXT("ModuleRelativePath"), TEXT("MainPlayer.h"));
				MetaData->SetValue(NewProp_FPSCamera, TEXT("Category"), TEXT("GamePlay"));
				MetaData->SetValue(NewProp_FPSCamera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FPSCamera, TEXT("ModuleRelativePath"), TEXT("MainPlayer.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainPlayer(Z_Construct_UClass_AMainPlayer, &AMainPlayer::StaticClass, TEXT("AMainPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainPlayer);
	UClass* Z_Construct_UClass_AVR_HUD_NoRegister()
	{
		return AVR_HUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AVR_HUD()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AHUD();
			Z_Construct_UPackage__Script_vr_game();
			OuterClass = AVR_HUD::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2090028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Rendering Actor Input Replication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VR_HUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("VR_HUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVR_HUD(Z_Construct_UClass_AVR_HUD, &AVR_HUD::StaticClass, TEXT("AVR_HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVR_HUD);
	UFunction* Z_Construct_UFunction_AVRGameMode_BeginPlay()
	{
		UObject* Outer=Z_Construct_UClass_AVRGameMode();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BeginPlay"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00040401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("VRGameMode.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVRGameMode_NoRegister()
	{
		return AVRGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AVRGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameMode();
			Z_Construct_UPackage__Script_vr_game();
			OuterClass = AVRGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2090028C;

				OuterClass->LinkChild(Z_Construct_UFunction_AVRGameMode_BeginPlay());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRGameMode_BeginPlay(), "BeginPlay"); // 521117821
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VRGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("VRGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRGameMode(Z_Construct_UClass_AVRGameMode, &AVRGameMode::StaticClass, TEXT("AVRGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRGameMode);
	UPackage* Z_Construct_UPackage__Script_vr_game()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/vr_game")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x17292355;
			Guid.B = 0x16AEBD87;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
