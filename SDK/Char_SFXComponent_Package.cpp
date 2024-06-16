/**
 * Name: Rumbleverse
 * Version: Latest
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop Waterfall Collide SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StopWaterfallCollideSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop Waterfall Collide SFX");
		
		UChar_SFXComponent_C_StopWaterfallCollideSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Waterfall Collide SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayWaterfallCollideSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Waterfall Collide SFX");
		
		UChar_SFXComponent_C_PlayWaterfallCollideSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.StartViciousChargedFall
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StartViciousChargedFall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.StartViciousChargedFall");
		
		UChar_SFXComponent_C_StartViciousChargedFall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop Poison Mist SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StopPoisonMistSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop Poison Mist SFX");
		
		UChar_SFXComponent_C_StopPoisonMistSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Poison Mist SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayPoisonMistSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Poison Mist SFX");
		
		UChar_SFXComponent_C_PlayPoisonMistSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Pole Swing Whoosh on Rotation
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayPoleSwingWhooshonRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Pole Swing Whoosh on Rotation");
		
		UChar_SFXComponent_C_PlayPoleSwingWhooshonRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.End PoleSwing SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::EndPoleSwingSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.End PoleSwing SFX");
		
		UChar_SFXComponent_C_EndPoleSwingSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Start PoleSwing SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StartPoleSwingSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Start PoleSwing SFX");
		
		UChar_SFXComponent_C_StartPoleSwingSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Kill Spawned SFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAudioComponent*                             AudioComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FadeOutDuration                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EAudioFaderCurve                                   FadeCurve                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_SFXComponent_C::KillSpawnedSFX(class UAudioComponent* AudioComponent, float FadeOutDuration, EAudioFaderCurve FadeCurve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Kill Spawned SFX");
		
		UChar_SFXComponent_C_KillSpawnedSFX_Params params {};
		params.AudioComponent = AudioComponent;
		params.FadeOutDuration = FadeOutDuration;
		params.FadeCurve = FadeCurve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Spawn Attached SFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAudioComponent*                             StopAudioComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FadeOutDuration                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundBase*                                  NewSound                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             AttachToComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        AttachPointName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAudioComponent*                             SpawnedAudioComponent                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_SFXComponent_C::SpawnAttachedSFX(class UAudioComponent* StopAudioComponent, float FadeOutDuration, class USoundBase* NewSound, class USceneComponent* AttachToComponent, const class FName& AttachPointName, class UAudioComponent** SpawnedAudioComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Spawn Attached SFX");
		
		UChar_SFXComponent_C_SpawnAttachedSFX_Params params {};
		params.StopAudioComponent = StopAudioComponent;
		params.FadeOutDuration = FadeOutDuration;
		params.NewSound = NewSound;
		params.AttachToComponent = AttachToComponent;
		params.AttachPointName = AttachPointName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnedAudioComponent != nullptr)
			*SpawnedAudioComponent = params.SpawnedAudioComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Fountain EMO OS
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayFountainEMOOS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Fountain EMO OS");
		
		UChar_SFXComponent_C_PlayFountainEMOOS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop Fountain Emo
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StopFountainEmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop Fountain Emo");
		
		UChar_SFXComponent_C_StopFountainEmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Fountain Emo
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayFountainEmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Fountain Emo");
		
		UChar_SFXComponent_C_PlayFountainEmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop Keen Dance Emote
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StopKeenDanceEmote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop Keen Dance Emote");
		
		UChar_SFXComponent_C_StopKeenDanceEmote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Keen Dance Emote
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayKeenDanceEmote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Keen Dance Emote");
		
		UChar_SFXComponent_C_PlayKeenDanceEmote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop Edge Hold SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StopEdgeHoldSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop Edge Hold SFX");
		
		UChar_SFXComponent_C_StopEdgeHoldSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Edge Hold SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayEdgeHoldSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Edge Hold SFX");
		
		UChar_SFXComponent_C_PlayEdgeHoldSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Wall Slide Attach
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGAdditionalParams                         AdditionalParams                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UChar_SFXComponent_C::PlayWallSlideAttach(const struct FIGAdditionalParams& AdditionalParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Wall Slide Attach");
		
		UChar_SFXComponent_C_PlayWallSlideAttach_Params params {};
		params.AdditionalParams = AdditionalParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play KeyBat Flip Loop
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayKeyBatFlipLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play KeyBat Flip Loop");
		
		UChar_SFXComponent_C_PlayKeyBatFlipLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop KeyBat Flip Loop
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StopKeyBatFlipLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop KeyBat Flip Loop");
		
		UChar_SFXComponent_C_StopKeyBatFlipLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop Starfish_Whoosh_LP
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StopStarfish_Whoosh_LP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop Starfish_Whoosh_LP");
		
		UChar_SFXComponent_C_StopStarfish_Whoosh_LP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Starfish_Whoosh_LP
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayStarfish_Whoosh_LP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Starfish_Whoosh_LP");
		
		UChar_SFXComponent_C_PlayStarfish_Whoosh_LP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop BullRush_LP
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StopBullRush_LP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop BullRush_LP");
		
		UChar_SFXComponent_C_StopBullRush_LP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play BullRush_LP
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayBullRush_LP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play BullRush_LP");
		
		UChar_SFXComponent_C_PlayBullRush_LP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop Keybat_Fly_LP
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StopKeybat_Fly_LP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop Keybat_Fly_LP");
		
		UChar_SFXComponent_C_StopKeybat_Fly_LP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Keybat_Fly_LP
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayKeybat_Fly_LP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Keybat_Fly_LP");
		
		UChar_SFXComponent_C_PlayKeybat_Fly_LP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop BroomSweep_LP
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StopBroomSweep_LP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop BroomSweep_LP");
		
		UChar_SFXComponent_C_StopBroomSweep_LP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play BroomSweep_LP
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayBroomSweep_LP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play BroomSweep_LP");
		
		UChar_SFXComponent_C_PlayBroomSweep_LP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play ReviveFailed SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayReviveFailedSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play ReviveFailed SFX");
		
		UChar_SFXComponent_C_PlayReviveFailedSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play ReviveCharge SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayReviveChargeSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play ReviveCharge SFX");
		
		UChar_SFXComponent_C_PlayReviveChargeSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Debug Print to Screen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                TextColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_SFXComponent_C::DebugPrinttoScreen(const class FString& inString, const struct FLinearColor& TextColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Debug Print to Screen");
		
		UChar_SFXComponent_C_DebugPrinttoScreen_Params params {};
		params.inString = inString;
		params.TextColor = TextColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Fade Out By Fall Trajectory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAudioComponent*                             in_AudioComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DownwardDrawDistance                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ClampMin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ClampMax                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EDrawDebugTrace                                    DebugDrawType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_SFXComponent_C::FadeOutByFallTrajectory(class UAudioComponent* in_AudioComponent, float DownwardDrawDistance, float ClampMin, float ClampMax, EDrawDebugTrace DebugDrawType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Fade Out By Fall Trajectory");
		
		UChar_SFXComponent_C_FadeOutByFallTrajectory_Params params {};
		params.in_AudioComponent = in_AudioComponent;
		params.DownwardDrawDistance = DownwardDrawDistance;
		params.ClampMin = ClampMin;
		params.ClampMax = ClampMax;
		params.DebugDrawType = DebugDrawType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop SuperStar Falling SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StopSuperStarFallingSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop SuperStar Falling SFX");
		
		UChar_SFXComponent_C_StopSuperStarFallingSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play SuperStar Falling SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlaySuperStarFallingSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play SuperStar Falling SFX");
		
		UChar_SFXComponent_C_PlaySuperStarFallingSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Trace Fall Trajectory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DownwardDistance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EDrawDebugTrace                                    DebugDraw                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UChar_SFXComponent_C::TraceFallTrajectory(float DownwardDistance, EDrawDebugTrace DebugDraw, struct FHitResult* OutHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Trace Fall Trajectory");
		
		UChar_SFXComponent_C_TraceFallTrajectory_Params params {};
		params.DownwardDistance = DownwardDistance;
		params.DebugDraw = DebugDraw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHit != nullptr)
			*OutHit = params.OutHit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Spawn Attached Sound By Role
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundBase*                                  LocalSound                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundAttenuation*                           LocalAttenuation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundBase*                                  FriendlySound                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundAttenuation*                           FriendlyAttenuation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundBase*                                  EnemySound                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundAttenuation*                           EnemyAttenuation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        AttachPoint                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAudioComponent*                             SpawnedSound                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_SFXComponent_C::SpawnAttachedSoundByRole(class USoundBase* LocalSound, class USoundAttenuation* LocalAttenuation, class USoundBase* FriendlySound, class USoundAttenuation* FriendlyAttenuation, class USoundBase* EnemySound, class USoundAttenuation* EnemyAttenuation, const class FName& AttachPoint, class UAudioComponent** SpawnedSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Spawn Attached Sound By Role");
		
		UChar_SFXComponent_C_SpawnAttachedSoundByRole_Params params {};
		params.LocalSound = LocalSound;
		params.LocalAttenuation = LocalAttenuation;
		params.FriendlySound = FriendlySound;
		params.FriendlyAttenuation = FriendlyAttenuation;
		params.EnemySound = EnemySound;
		params.EnemyAttenuation = EnemyAttenuation;
		params.AttachPoint = AttachPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnedSound != nullptr)
			*SpawnedSound = params.SpawnedSound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Grab Activation SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayGrabActivationSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Grab Activation SFX");
		
		UChar_SFXComponent_C_PlayGrabActivationSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Validate Footstep SFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundBase*                                  inFootstepSound                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsLocalOrFriendly                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USoundBase*                                  outFootstepSound                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_SFXComponent_C::ValidateFootstepSFX(class USoundBase* inFootstepSound, bool IsLocalOrFriendly, class USoundBase** outFootstepSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Validate Footstep SFX");
		
		UChar_SFXComponent_C_ValidateFootstepSFX_Params params {};
		params.inFootstepSound = inFootstepSound;
		params.IsLocalOrFriendly = IsLocalOrFriendly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outFootstepSound != nullptr)
			*outFootstepSound = params.outFootstepSound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.OnMovementModeChanged_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMovementMode                                      PrevMovementMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      PreviousCustomMode                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_SFXComponent_C::OnMovementModeChanged_cb(class ACharacter* Character, EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.OnMovementModeChanged_cb");
		
		UChar_SFXComponent_C_OnMovementModeChanged_cb_Params params {};
		params.Character = Character;
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Movement Mode Set
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMovementMode                                      PrevMovementMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      PreviousCustomMode                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_SFXComponent_C::MovementModeSet(class ACharacter* Character, EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Movement Mode Set");
		
		UChar_SFXComponent_C_MovementModeSet_Params params {};
		params.Character = Character;
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Set Cliffhanger SFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      MovementMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_SFXComponent_C::SetCliffhangerSFX(class ACharacter* Character, unsigned char MovementMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Set Cliffhanger SFX");
		
		UChar_SFXComponent_C_SetCliffhangerSFX_Params params {};
		params.Character = Character;
		params.MovementMode = MovementMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop Teampose4 Wind Loop
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StopTeampose4WindLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop Teampose4 Wind Loop");
		
		UChar_SFXComponent_C_StopTeampose4WindLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Teampose4 Wind Loop
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayTeampose4WindLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Teampose4 Wind Loop");
		
		UChar_SFXComponent_C_PlayTeampose4WindLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Teampose0 Sparkle
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayTeampose0Sparkle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Teampose0 Sparkle");
		
		UChar_SFXComponent_C_PlayTeampose0Sparkle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop Teampose0 Sparkle Loop
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StopTeampose0SparkleLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop Teampose0 Sparkle Loop");
		
		UChar_SFXComponent_C_StopTeampose0SparkleLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.EmoteButterflyEnd
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::EmoteButterflyEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.EmoteButterflyEnd");
		
		UChar_SFXComponent_C_EmoteButterflyEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.EmoteButterflyLanded
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::EmoteButterflyLanded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.EmoteButterflyLanded");
		
		UChar_SFXComponent_C_EmoteButterflyLanded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop Firework Emote SFX Loop
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StopFireworkEmoteSFXLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop Firework Emote SFX Loop");
		
		UChar_SFXComponent_C_StopFireworkEmoteSFXLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Firework Emote SFX Loop
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayFireworkEmoteSFXLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Firework Emote SFX Loop");
		
		UChar_SFXComponent_C_PlayFireworkEmoteSFXLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Special Move Activation SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlaySpecialMoveActivationSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Special Move Activation SFX");
		
		UChar_SFXComponent_C_PlaySpecialMoveActivationSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play ReviveTaker SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayReviveTakerSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play ReviveTaker SFX");
		
		UChar_SFXComponent_C_PlayReviveTakerSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play ReviveGiver SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayReviveGiverSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play ReviveGiver SFX");
		
		UChar_SFXComponent_C_PlayReviveGiverSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop Ball Bounce SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StopBallBounceSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop Ball Bounce SFX");
		
		UChar_SFXComponent_C_StopBallBounceSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Ball Bounce SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayBallBounceSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Ball Bounce SFX");
		
		UChar_SFXComponent_C_PlayBallBounceSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Stamina SFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             AttachToComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_SFXComponent_C::PlayStaminaSFX(class USceneComponent* AttachToComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Stamina SFX");
		
		UChar_SFXComponent_C_PlayStaminaSFX_Params params {};
		params.AttachToComponent = AttachToComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Set Landing Sound Volume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UseDefaultJumpLandVolume                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChar_SFXComponent_C::SetLandingSoundVolume(bool UseDefaultJumpLandVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Set Landing Sound Volume");
		
		UChar_SFXComponent_C_SetLandingSoundVolume_Params params {};
		params.UseDefaultJumpLandVolume = UseDefaultJumpLandVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Adjust Pitch and Volume by BodyType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGBodyType                                        BodyType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_SFXComponent_C::AdjustPitchandVolumebyBodyType(EIGBodyType BodyType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Adjust Pitch and Volume by BodyType");
		
		UChar_SFXComponent_C_AdjustPitchandVolumebyBodyType_Params params {};
		params.BodyType = BodyType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop Cannon Free Fall Wind SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StopCannonFreeFallWindSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop Cannon Free Fall Wind SFX");
		
		UChar_SFXComponent_C_StopCannonFreeFallWindSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Cannon Free Fall Wind SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayCannonFreeFallWindSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Cannon Free Fall Wind SFX");
		
		UChar_SFXComponent_C_PlayCannonFreeFallWindSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop Cannon Launch Wind SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StopCannonLaunchWindSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop Cannon Launch Wind SFX");
		
		UChar_SFXComponent_C_StopCannonLaunchWindSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Cannon Launch Wind SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayCannonLaunchWindSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Cannon Launch Wind SFX");
		
		UChar_SFXComponent_C_PlayCannonLaunchWindSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop Long Jump Loop
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StopLongJumpLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop Long Jump Loop");
		
		UChar_SFXComponent_C_StopLongJumpLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Long Jump Loop
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayLongJumpLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Long Jump Loop");
		
		UChar_SFXComponent_C_PlayLongJumpLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Falling Meteor Impact SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayFallingMeteorImpactSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Falling Meteor Impact SFX");
		
		UChar_SFXComponent_C_PlayFallingMeteorImpactSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Special Falling Meteor Impact SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlaySpecialFallingMeteorImpactSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Special Falling Meteor Impact SFX");
		
		UChar_SFXComponent_C_PlaySpecialFallingMeteorImpactSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Ground Impact SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayGroundImpactSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Ground Impact SFX");
		
		UChar_SFXComponent_C_PlayGroundImpactSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Foley SFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundBase*                                  SoundCue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_SFXComponent_C::PlayFoleySFX(class USoundBase* SoundCue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Foley SFX");
		
		UChar_SFXComponent_C_PlayFoleySFX_Params params {};
		params.SoundCue = SoundCue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Local And Remote Surface SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayLocalAndRemoteSurfaceSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Local And Remote Surface SFX");
		
		UChar_SFXComponent_C_PlayLocalAndRemoteSurfaceSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Get Player Movement Speed and Footstep Volume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AdditionalParamsNameParam                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_SFXComponent_C::GetPlayerMovementSpeedandFootstepVolume(const class FName& AdditionalParamsNameParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Get Player Movement Speed and Footstep Volume");
		
		UChar_SFXComponent_C_GetPlayerMovementSpeedandFootstepVolume_Params params {};
		params.AdditionalParamsNameParam = AdditionalParamsNameParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop Rocket Jump Charge
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StopRocketJumpCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop Rocket Jump Charge");
		
		UChar_SFXComponent_C_StopRocketJumpCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play RocketJump Charge SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayRocketJumpChargeSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play RocketJump Charge SFX");
		
		UChar_SFXComponent_C_PlayRocketJumpChargeSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Perk Deactivate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     PerkAsset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_SFXComponent_C::PerkDeactivate(class UObject* PerkAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Perk Deactivate");
		
		UChar_SFXComponent_C_PerkDeactivate_Params params {};
		params.PerkAsset = PerkAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Perk Removed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     PerkAsset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_SFXComponent_C::PerkRemoved(class UObject* PerkAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Perk Removed");
		
		UChar_SFXComponent_C_PerkRemoved_Params params {};
		params.PerkAsset = PerkAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Perk Gained
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     PerkAsset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_SFXComponent_C::PerkGained(class UObject* PerkAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Perk Gained");
		
		UChar_SFXComponent_C_PerkGained_Params params {};
		params.PerkAsset = PerkAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Perk Activated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     PerkAsset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_SFXComponent_C::PerkActivated(class UObject* PerkAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Perk Activated");
		
		UChar_SFXComponent_C_PerkActivated_Params params {};
		params.PerkAsset = PerkAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop PowerUp Block Loop SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StopPowerUpBlockLoopSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop PowerUp Block Loop SFX");
		
		UChar_SFXComponent_C_StopPowerUpBlockLoopSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play PowerUp Block Loop SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayPowerUpBlockLoopSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play PowerUp Block Loop SFX");
		
		UChar_SFXComponent_C_PlayPowerUpBlockLoopSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Consumable Magazine SFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                DynamicParamsTag                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_SFXComponent_C::PlayConsumableMagazineSFX(const struct FGameplayTag& DynamicParamsTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Consumable Magazine SFX");
		
		UChar_SFXComponent_C_PlayConsumableMagazineSFX_Params params {};
		params.DynamicParamsTag = DynamicParamsTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Consumable Powder SFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                DynamicParamsTag                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_SFXComponent_C::PlayConsumablePowderSFX(const struct FGameplayTag& DynamicParamsTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Consumable Powder SFX");
		
		UChar_SFXComponent_C_PlayConsumablePowderSFX_Params params {};
		params.DynamicParamsTag = DynamicParamsTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Consumable Drink SFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                DynamicParamsTag                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_SFXComponent_C::PlayConsumableDrinkSFX(const struct FGameplayTag& DynamicParamsTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Consumable Drink SFX");
		
		UChar_SFXComponent_C_PlayConsumableDrinkSFX_Params params {};
		params.DynamicParamsTag = DynamicParamsTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop Consumable SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StopConsumableSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop Consumable SFX");
		
		UChar_SFXComponent_C_StopConsumableSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Consumable Food SFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                DynamicParamsTag                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_SFXComponent_C::PlayConsumableFoodSFX(const struct FGameplayTag& DynamicParamsTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Consumable Food SFX");
		
		UChar_SFXComponent_C_PlayConsumableFoodSFX_Params params {};
		params.DynamicParamsTag = DynamicParamsTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop PowerUp Loop SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StopPowerUpLoopSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop PowerUp Loop SFX");
		
		UChar_SFXComponent_C_StopPowerUpLoopSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Update Traversal Free Fall SFX Volume
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::UpdateTraversalFreeFallSFXVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Update Traversal Free Fall SFX Volume");
		
		UChar_SFXComponent_C_UpdateTraversalFreeFallSFXVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop Traversal Free Fall SFX Volume Update
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StopTraversalFreeFallSFXVolumeUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop Traversal Free Fall SFX Volume Update");
		
		UChar_SFXComponent_C_StopTraversalFreeFallSFXVolumeUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Start Traversal Free Fall SFX Volume Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              UpdateInterval                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_SFXComponent_C::StartTraversalFreeFallSFXVolumeUpdate(float UpdateInterval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Start Traversal Free Fall SFX Volume Update");
		
		UChar_SFXComponent_C_StartTraversalFreeFallSFXVolumeUpdate_Params params {};
		params.UpdateInterval = UpdateInterval;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Update Player Falling Duration
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::UpdatePlayerFallingDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Update Player Falling Duration");
		
		UChar_SFXComponent_C_UpdatePlayerFallingDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop Player Falling Update
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StopPlayerFallingUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop Player Falling Update");
		
		UChar_SFXComponent_C_StopPlayerFallingUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Start Player Falling Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              UpdateInterval                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_SFXComponent_C::StartPlayerFallingUpdate(float UpdateInterval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Start Player Falling Update");
		
		UChar_SFXComponent_C_StartPlayerFallingUpdate_Params params {};
		params.UpdateInterval = UpdateInterval;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop Traversal Free Fall SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StopTraversalFreeFallSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop Traversal Free Fall SFX");
		
		UChar_SFXComponent_C_StopTraversalFreeFallSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Traversal Free Fall SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayTraversalFreeFallSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Traversal Free Fall SFX");
		
		UChar_SFXComponent_C_PlayTraversalFreeFallSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop Free Fall VO
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StopFreeFallVO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop Free Fall VO");
		
		UChar_SFXComponent_C_StopFreeFallVO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Free Fall VO
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        VOGruntName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_SFXComponent_C::PlayFreeFallVO(const class FName& VOGruntName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Free Fall VO");
		
		UChar_SFXComponent_C_PlayFreeFallVO_Params params {};
		params.VOGruntName = VOGruntName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop Free Fall SFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HardStop                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChar_SFXComponent_C::StopFreeFallSFX(bool HardStop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop Free Fall SFX");
		
		UChar_SFXComponent_C_StopFreeFallSFX_Params params {};
		params.HardStop = HardStop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Free Fall SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayFreeFallSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Free Fall SFX");
		
		UChar_SFXComponent_C_PlayFreeFallSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop 1stLvl Free Fall SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::Stop1stLvlFreeFallSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop 1stLvl Free Fall SFX");
		
		UChar_SFXComponent_C_Stop1stLvlFreeFallSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play 1stLvl Free Fall SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::Play1stLvlFreeFallSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play 1stLvl Free Fall SFX");
		
		UChar_SFXComponent_C_Play1stLvlFreeFallSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play 3rdLvl Falling Meteor SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::Play3rdLvlFallingMeteorSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play 3rdLvl Falling Meteor SFX");
		
		UChar_SFXComponent_C_Play3rdLvlFallingMeteorSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play 2ndLvl Falling Meteor SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::Play2ndLvlFallingMeteorSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play 2ndLvl Falling Meteor SFX");
		
		UChar_SFXComponent_C_Play2ndLvlFallingMeteorSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play 1stLvl Falling Meteor SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::Play1stLvlFallingMeteorSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play 1stLvl Falling Meteor SFX");
		
		UChar_SFXComponent_C_Play1stLvlFallingMeteorSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play LowLvl Falling Meteor SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayLowLvlFallingMeteorSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play LowLvl Falling Meteor SFX");
		
		UChar_SFXComponent_C_PlayLowLvlFallingMeteorSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop Charge Up Start SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StopChargeUpStartSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop Charge Up Start SFX");
		
		UChar_SFXComponent_C_StopChargeUpStartSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Charge Up Start SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayChargeUpStartSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Charge Up Start SFX");
		
		UChar_SFXComponent_C_PlayChargeUpStartSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop Charge Up Hold SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StopChargeUpHoldSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop Charge Up Hold SFX");
		
		UChar_SFXComponent_C_StopChargeUpHoldSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Play Charge Up Hold SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PlayChargeUpHoldSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Play Charge Up Hold SFX");
		
		UChar_SFXComponent_C_PlayChargeUpHoldSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Stop Falling Meteor SFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::StopFallingMeteorSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Stop Falling Meteor SFX");
		
		UChar_SFXComponent_C_StopFallingMeteorSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.HandleAnimNotifyAudioBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FIGCharacterAudioAnimNotifyEventInfo        EventInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UChar_SFXComponent_C::HandleAnimNotifyAudioBP(const class FName& EventName, const struct FIGCharacterAudioAnimNotifyEventInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.HandleAnimNotifyAudioBP");
		
		UChar_SFXComponent_C_HandleAnimNotifyAudioBP_Params params {};
		params.EventName = EventName;
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.HandleAnimNotifyStateBeginAudioBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FIGCharacterAudioAnimNotifyEventInfo        EventInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UChar_SFXComponent_C::HandleAnimNotifyStateBeginAudioBP(const class FName& EventName, const struct FIGCharacterAudioAnimNotifyEventInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.HandleAnimNotifyStateBeginAudioBP");
		
		UChar_SFXComponent_C_HandleAnimNotifyStateBeginAudioBP_Params params {};
		params.EventName = EventName;
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.HandleAnimNotifyStateEndAudioBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FIGCharacterAudioAnimNotifyEventInfo        EventInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UChar_SFXComponent_C::HandleAnimNotifyStateEndAudioBP(const class FName& EventName, const struct FIGCharacterAudioAnimNotifyEventInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.HandleAnimNotifyStateEndAudioBP");
		
		UChar_SFXComponent_C_HandleAnimNotifyStateEndAudioBP_Params params {};
		params.EventName = EventName;
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Event MinFallingDurationExceeded
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::EventMinFallingDurationExceeded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Event MinFallingDurationExceeded");
		
		UChar_SFXComponent_C_EventMinFallingDurationExceeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.ReceiveBeginPlay");
		
		UChar_SFXComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.OnCannonFired
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::OnCannonFired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.OnCannonFired");
		
		UChar_SFXComponent_C_OnCannonFired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.On BR Free Fall End
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::OnBRFreeFallEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.On BR Free Fall End");
		
		UChar_SFXComponent_C_OnBRFreeFallEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.HandleClashAudioBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Attacker                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Victim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_SFXComponent_C::HandleClashAudioBP(class AActor* Attacker, class AActor* Victim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.HandleClashAudioBP");
		
		UChar_SFXComponent_C_HandleClashAudioBP_Params params {};
		params.Attacker = Attacker;
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.HandleCannonLaunchEnd
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::HandleCannonLaunchEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.HandleCannonLaunchEnd");
		
		UChar_SFXComponent_C_HandleCannonLaunchEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.HandleCharacterReset
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::HandleCharacterReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.HandleCharacterReset");
		
		UChar_SFXComponent_C_HandleCharacterReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.OnEnteredSuperStarModeSFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::OnEnteredSuperStarModeSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.OnEnteredSuperStarModeSFX");
		
		UChar_SFXComponent_C_OnEnteredSuperStarModeSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.OnExitedSuperStarModeSFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::OnExitedSuperStarModeSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.OnExitedSuperStarModeSFX");
		
		UChar_SFXComponent_C_OnExitedSuperStarModeSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.CustomTick
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::CustomTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.CustomTick");
		
		UChar_SFXComponent_C_CustomTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.Event ResetFreeFallSFX
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::EventResetFreeFallSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.Event ResetFreeFallSFX");
		
		UChar_SFXComponent_C_EventResetFreeFallSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.OnBrokenByViciousAttack
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::OnBrokenByViciousAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.OnBrokenByViciousAttack");
		
		UChar_SFXComponent_C_OnBrokenByViciousAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.HandleStashUnstashAudioBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsStashing                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsLargeItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChar_SFXComponent_C::HandleStashUnstashAudioBP(bool IsStashing, bool IsLargeItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.HandleStashUnstashAudioBP");
		
		UChar_SFXComponent_C_HandleStashUnstashAudioBP_Params params {};
		params.IsStashing = IsStashing;
		params.IsLargeItem = IsLargeItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.PreTeleport
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::PreTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.PreTeleport");
		
		UChar_SFXComponent_C_PreTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.PostTeleport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TeleportDestination                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_SFXComponent_C::PostTeleport(const struct FVector& TeleportDestination)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.PostTeleport");
		
		UChar_SFXComponent_C_PostTeleport_Params params {};
		params.TeleportDestination = TeleportDestination;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.HandleUnpocketSFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Attacker                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Victim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DroppedAnItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChar_SFXComponent_C::HandleUnpocketSFXBP(class AActor* Attacker, class AActor* Victim, bool DroppedAnItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.HandleUnpocketSFXBP");
		
		UChar_SFXComponent_C_HandleUnpocketSFXBP_Params params {};
		params.Attacker = Attacker;
		params.Victim = Victim;
		params.DroppedAnItem = DroppedAnItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.ExecuteUbergraph_Char_SFXComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_SFXComponent_C::ExecuteUbergraph_Char_SFXComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.ExecuteUbergraph_Char_SFXComponent");
		
		UChar_SFXComponent_C_ExecuteUbergraph_Char_SFXComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.OnResetFreeFallSFX__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::OnResetFreeFallSFX__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.OnResetFreeFallSFX__DelegateSignature");
		
		UChar_SFXComponent_C_OnResetFreeFallSFX__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_SFXComponent.Char_SFXComponent_C.OnMinFallingDurationExceeded__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChar_SFXComponent_C::OnMinFallingDurationExceeded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SFXComponent.Char_SFXComponent_C.OnMinFallingDurationExceeded__DelegateSignature");
		
		UChar_SFXComponent_C_OnMinFallingDurationExceeded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChar_SFXComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChar_SFXComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Char_SFXComponent.Char_SFXComponent_C");
		return ptr;
	}

}


