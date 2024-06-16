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
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.EmotesStop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGAdditionalParams                         IGAdditionalParams                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UChar_VFXComponent_C::EmotesStop(const struct FIGAdditionalParams& IGAdditionalParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.EmotesStop");
		
		UChar_VFXComponent_C_EmotesStop_Params params {};
		params.IGAdditionalParams = IGAdditionalParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.StopFOVUpdate
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::StopFOVUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.StopFOVUpdate");
		
		UChar_VFXComponent_C_StopFOVUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.FOVTimerUpdate
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::FOVTimerUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.FOVTimerUpdate");
		
		UChar_VFXComponent_C_FOVTimerUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.StartFOVUpdate
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::StartFOVUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.StartFOVUpdate");
		
		UChar_VFXComponent_C_StartFOVUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.Emotes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGAdditionalParams                         IGAdditionalParams                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UChar_VFXComponent_C::Emotes(const struct FIGAdditionalParams& IGAdditionalParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.Emotes");
		
		UChar_VFXComponent_C_Emotes_Params params {};
		params.IGAdditionalParams = IGAdditionalParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.PoleSwingingEnd
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::PoleSwingingEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.PoleSwingingEnd");
		
		UChar_VFXComponent_C_PoleSwingingEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.PoleSwingingStart
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::PoleSwingingStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.PoleSwingingStart");
		
		UChar_VFXComponent_C_PoleSwingingStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.HandleUnpocketVFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Attacker                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Victim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DroppedAnItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChar_VFXComponent_C::HandleUnpocketVFX(class AActor* Attacker, class AActor* Victim, bool DroppedAnItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.HandleUnpocketVFX");
		
		UChar_VFXComponent_C_HandleUnpocketVFX_Params params {};
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
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.StopWaterfallVFX
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::StopWaterfallVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.StopWaterfallVFX");
		
		UChar_VFXComponent_C_StopWaterfallVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.Spawn Waterfall VFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WaterType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_VFXComponent_C::SpawnWaterfallVFX(const class FName& WaterType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.Spawn Waterfall VFX");
		
		UChar_VFXComponent_C_SpawnWaterfallVFX_Params params {};
		params.WaterType = WaterType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.GC_UpdateTime
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::GC_UpdateTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.GC_UpdateTime");
		
		UChar_VFXComponent_C_GC_UpdateTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.GC_SpawnMeterResult
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::GC_SpawnMeterResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.GC_SpawnMeterResult");
		
		UChar_VFXComponent_C_GC_SpawnMeterResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.GC_DeactivateMeterTry
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::GC_DeactivateMeterTry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.GC_DeactivateMeterTry");
		
		UChar_VFXComponent_C_GC_DeactivateMeterTry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.GC_SpawnMeterTry
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::GC_SpawnMeterTry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.GC_SpawnMeterTry");
		
		UChar_VFXComponent_C_GC_SpawnMeterTry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.SpecialImpactDecal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGAdditionalParams                         IGAdditionalParams                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UChar_VFXComponent_C::SpecialImpactDecal(const struct FIGAdditionalParams& IGAdditionalParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.SpecialImpactDecal");
		
		UChar_VFXComponent_C_SpecialImpactDecal_Params params {};
		params.IGAdditionalParams = IGAdditionalParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.StopBroomWiggle
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::StopBroomWiggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.StopBroomWiggle");
		
		UChar_VFXComponent_C_StopBroomWiggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.StartBroomWiggle
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::StartBroomWiggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.StartBroomWiggle");
		
		UChar_VFXComponent_C_StartBroomWiggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.ApplyTeamDecals
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::ApplyTeamDecals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.ApplyTeamDecals");
		
		UChar_VFXComponent_C_ApplyTeamDecals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.OnTeamInfoUpdated
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::OnTeamInfoUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.OnTeamInfoUpdated");
		
		UChar_VFXComponent_C_OnTeamInfoUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.StopWaterWakeIfActive
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::StopWaterWakeIfActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.StopWaterWakeIfActive");
		
		UChar_VFXComponent_C_StopWaterWakeIfActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.WaterWakeLoop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGVFXCharacterAnimNotifyEventInfo          IGVFXCharacterAnimNotifyEventInfo                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UChar_VFXComponent_C::WaterWakeLoop(const struct FIGVFXCharacterAnimNotifyEventInfo& IGVFXCharacterAnimNotifyEventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.WaterWakeLoop");
		
		UChar_VFXComponent_C_WaterWakeLoop_Params params {};
		params.IGVFXCharacterAnimNotifyEventInfo = IGVFXCharacterAnimNotifyEventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.SpawnWaterWake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGVFXCharacterAnimNotifyEventInfo          EventInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UChar_VFXComponent_C::SpawnWaterWake(const struct FIGVFXCharacterAnimNotifyEventInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.SpawnWaterWake");
		
		UChar_VFXComponent_C_SpawnWaterWake_Params params {};
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.StopHidingLeaves
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::StopHidingLeaves()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.StopHidingLeaves");
		
		UChar_VFXComponent_C_StopHidingLeaves_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.SpawnHidingLeaves
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                LeafColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     LeafScale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UParticleSystem*                             LeafEmitter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_VFXComponent_C::SpawnHidingLeaves(const struct FLinearColor& LeafColor, const struct FVector& LeafScale, class UParticleSystem* LeafEmitter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.SpawnHidingLeaves");
		
		UChar_VFXComponent_C_SpawnHidingLeaves_Params params {};
		params.LeafColor = LeafColor;
		params.LeafScale = LeafScale;
		params.LeafEmitter = LeafEmitter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.OnCombatModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsInCombatMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChar_VFXComponent_C::OnCombatModeChanged(bool IsInCombatMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.OnCombatModeChanged");
		
		UChar_VFXComponent_C_OnCombatModeChanged_Params params {};
		params.IsInCombatMode = IsInCombatMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.PerkPocketDimension
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsStashing                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsLargeItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChar_VFXComponent_C::PerkPocketDimension(bool IsStashing, bool IsLargeItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.PerkPocketDimension");
		
		UChar_VFXComponent_C_PerkPocketDimension_Params params {};
		params.IsStashing = IsStashing;
		params.IsLargeItem = IsLargeItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.SpecialAttacksDeactivate
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::SpecialAttacksDeactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.SpecialAttacksDeactivate");
		
		UChar_VFXComponent_C_SpecialAttacksDeactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.SpawnAirDodgeBounce
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::SpawnAirDodgeBounce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.SpawnAirDodgeBounce");
		
		UChar_VFXComponent_C_SpawnAirDodgeBounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.AirDodgeBoostTimer
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::AirDodgeBoostTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.AirDodgeBoostTimer");
		
		UChar_VFXComponent_C_AirDodgeBoostTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.OnCharacterBounced
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BounceIntensity                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_VFXComponent_C::OnCharacterBounced(float BounceIntensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.OnCharacterBounced");
		
		UChar_VFXComponent_C_OnCharacterBounced_Params params {};
		params.BounceIntensity = BounceIntensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.RocketJump
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Start                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FIGAdditionalParams                         IGAdditionalParams                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FIGDynamicParams                            IGDynamicParams                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UChar_VFXComponent_C::RocketJump(bool Start, const struct FIGAdditionalParams& IGAdditionalParams, const struct FIGDynamicParams& IGDynamicParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.RocketJump");
		
		UChar_VFXComponent_C_RocketJump_Params params {};
		params.Start = Start;
		params.IGAdditionalParams = IGAdditionalParams;
		params.IGDynamicParams = IGDynamicParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.SetWaterColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFXSystemComponent*                          PSystem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UChar_VFXComponent_C::SetWaterColor(class UFXSystemComponent* PSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.SetWaterColor");
		
		UChar_VFXComponent_C_SetWaterColor_Params params {};
		params.PSystem = PSystem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.GetGameState
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::GetGameState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.GetGameState");
		
		UChar_VFXComponent_C_GetGameState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.TeamPose4Stop
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::TeamPose4Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.TeamPose4Stop");
		
		UChar_VFXComponent_C_TeamPose4Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.TeamPose4Start
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::TeamPose4Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.TeamPose4Start");
		
		UChar_VFXComponent_C_TeamPose4Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.SetCliffHangerVFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      MovementMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_VFXComponent_C::SetCliffHangerVFX(class ACharacter* Character, unsigned char MovementMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.SetCliffHangerVFX");
		
		UChar_VFXComponent_C_SetCliffHangerVFX_Params params {};
		params.Character = Character;
		params.MovementMode = MovementMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.MovementModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMovementMode                                      PrevMovementMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      PreviousCustomMode                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_VFXComponent_C::MovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.MovementModeChanged");
		
		UChar_VFXComponent_C_MovementModeChanged_Params params {};
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
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.SetButterflyLanded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              EmitterTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ParticleTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Velocity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_VFXComponent_C::SetButterflyLanded(const class FName& EventName, float EmitterTime, int32_t ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.SetButterflyLanded");
		
		UChar_VFXComponent_C_SetButterflyLanded_Params params {};
		params.EventName = EventName;
		params.EmitterTime = EmitterTime;
		params.ParticleTime = ParticleTime;
		params.Location = Location;
		params.Velocity = Velocity;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.TeamPose2Stop
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::TeamPose2Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.TeamPose2Stop");
		
		UChar_VFXComponent_C_TeamPose2Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.TeamPose2Start
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::TeamPose2Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.TeamPose2Start");
		
		UChar_VFXComponent_C_TeamPose2Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.ClearFallingVFX
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::ClearFallingVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.ClearFallingVFX");
		
		UChar_VFXComponent_C_ClearFallingVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.DeactivateSuperstarHelix
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::DeactivateSuperstarHelix()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.DeactivateSuperstarHelix");
		
		UChar_VFXComponent_C_DeactivateSuperstarHelix_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.SpawnSuperstarHelix
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::SpawnSuperstarHelix()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.SpawnSuperstarHelix");
		
		UChar_VFXComponent_C_SpawnSuperstarHelix_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.SpawnStaminaVFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticleSystem*                             EmitterTemplate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             Attachment                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      ConsumeableSK                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PuffOut                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChar_VFXComponent_C::SpawnStaminaVFX(class UParticleSystem* EmitterTemplate, class USceneComponent* Attachment, class USkeletalMeshComponent* ConsumeableSK, bool PuffOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.SpawnStaminaVFX");
		
		UChar_VFXComponent_C_SpawnStaminaVFX_Params params {};
		params.EmitterTemplate = EmitterTemplate;
		params.Attachment = Attachment;
		params.ConsumeableSK = ConsumeableSK;
		params.PuffOut = PuffOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.StartWorldCameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGAdditionalParams                         AdditionalParams                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UChar_VFXComponent_C::StartWorldCameraShake(const struct FIGAdditionalParams& AdditionalParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.StartWorldCameraShake");
		
		UChar_VFXComponent_C_StartWorldCameraShake_Params params {};
		params.AdditionalParams = AdditionalParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.OnExitedSuperstarMode
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::OnExitedSuperstarMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.OnExitedSuperstarMode");
		
		UChar_VFXComponent_C_OnExitedSuperstarMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.OnEnteredSuperstarMode
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::OnEnteredSuperstarMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.OnEnteredSuperstarMode");
		
		UChar_VFXComponent_C_OnEnteredSuperstarMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.ShieldBreakVicious
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::ShieldBreakVicious()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.ShieldBreakVicious");
		
		UChar_VFXComponent_C_ShieldBreakVicious_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.GroundImpact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGAdditionalParams                         IGAdditionalParams                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UChar_VFXComponent_C::GroundImpact(const struct FIGAdditionalParams& IGAdditionalParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.GroundImpact");
		
		UChar_VFXComponent_C_GroundImpact_Params params {};
		params.IGAdditionalParams = IGAdditionalParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.StopCameraShake
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::StopCameraShake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.StopCameraShake");
		
		UChar_VFXComponent_C_StopCameraShake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.StartCameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGAdditionalParams                         IGAdditionalParams                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UChar_VFXComponent_C::StartCameraShake(const struct FIGAdditionalParams& IGAdditionalParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.StartCameraShake");
		
		UChar_VFXComponent_C_StartCameraShake_Params params {};
		params.IGAdditionalParams = IGAdditionalParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.RoundEnded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AIGPlayerState*>                      WinningPlayers                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               isLocalPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isSpectator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChar_VFXComponent_C::RoundEnded(TArray<class AIGPlayerState*> WinningPlayers, bool isLocalPlayer, bool isSpectator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.RoundEnded");
		
		UChar_VFXComponent_C_RoundEnded_Params params {};
		params.WinningPlayers = WinningPlayers;
		params.isLocalPlayer = isLocalPlayer;
		params.isSpectator = isSpectator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.OnNoLongerWinded
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::OnNoLongerWinded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.OnNoLongerWinded");
		
		UChar_VFXComponent_C_OnNoLongerWinded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.OnWinded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StaminaPercentage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_VFXComponent_C::OnWinded(float StaminaPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.OnWinded");
		
		UChar_VFXComponent_C_OnWinded_Params params {};
		params.StaminaPercentage = StaminaPercentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.OffsetCannonVFX
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::OffsetCannonVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.OffsetCannonVFX");
		
		UChar_VFXComponent_C_OffsetCannonVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.SetBlockShieldOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticleSystemComponent*                    PSystem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_VFXComponent_C::SetBlockShieldOffset(class UParticleSystemComponent* PSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.SetBlockShieldOffset");
		
		UChar_VFXComponent_C_SetBlockShieldOffset_Params params {};
		params.PSystem = PSystem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.BlockHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGAdditionalParams                         AdditionalParams                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UChar_VFXComponent_C::BlockHit(const struct FIGAdditionalParams& AdditionalParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.BlockHit");
		
		UChar_VFXComponent_C_BlockHit_Params params {};
		params.AdditionalParams = AdditionalParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.BlockStartExit
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::BlockStartExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.BlockStartExit");
		
		UChar_VFXComponent_C_BlockStartExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.BlockingEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGAdditionalParams                         AdditionalParams                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UChar_VFXComponent_C::BlockingEnd(const struct FIGAdditionalParams& AdditionalParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.BlockingEnd");
		
		UChar_VFXComponent_C_BlockingEnd_Params params {};
		params.AdditionalParams = AdditionalParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.BlockLoop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGAdditionalParams                         AdditionalParams                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UChar_VFXComponent_C::BlockLoop(const struct FIGAdditionalParams& AdditionalParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.BlockLoop");
		
		UChar_VFXComponent_C_BlockLoop_Params params {};
		params.AdditionalParams = AdditionalParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.StartBlockLoop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGAdditionalParams                         AdditionalParams                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UChar_VFXComponent_C::StartBlockLoop(const struct FIGAdditionalParams& AdditionalParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.StartBlockLoop");
		
		UChar_VFXComponent_C_StartBlockLoop_Params params {};
		params.AdditionalParams = AdditionalParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.BlockingStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGAdditionalParams                         AdditionalParams                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UChar_VFXComponent_C::BlockingStart(const struct FIGAdditionalParams& AdditionalParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.BlockingStart");
		
		UChar_VFXComponent_C_BlockingStart_Params params {};
		params.AdditionalParams = AdditionalParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.SpecialAttacksSpawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGVFXCharacterAnimNotifyEventInfo          EventInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UChar_VFXComponent_C::SpecialAttacksSpawn(const struct FIGVFXCharacterAnimNotifyEventInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.SpecialAttacksSpawn");
		
		UChar_VFXComponent_C_SpecialAttacksSpawn_Params params {};
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.IncrementUnblockable
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::IncrementUnblockable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.IncrementUnblockable");
		
		UChar_VFXComponent_C_IncrementUnblockable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.UnblockableFlash
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::UnblockableFlash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.UnblockableFlash");
		
		UChar_VFXComponent_C_UnblockableFlash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.InvincibleFlash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChar_VFXComponent_C::InvincibleFlash(bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.InvincibleFlash");
		
		UChar_VFXComponent_C_InvincibleFlash_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.UnblockableEnd
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::UnblockableEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.UnblockableEnd");
		
		UChar_VFXComponent_C_UnblockableEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.UnblockableHold
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGAdditionalParams                         IGAdditionalParams                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UChar_VFXComponent_C::UnblockableHold(const struct FIGAdditionalParams& IGAdditionalParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.UnblockableHold");
		
		UChar_VFXComponent_C_UnblockableHold_Params params {};
		params.IGAdditionalParams = IGAdditionalParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.SurfaceVFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGVFXCharacterAnimNotifyEventInfo          EventInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UChar_VFXComponent_C::SurfaceVFX(const struct FIGVFXCharacterAnimNotifyEventInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.SurfaceVFX");
		
		UChar_VFXComponent_C_SurfaceVFX_Params params {};
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.WallBounce
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::WallBounce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.WallBounce");
		
		UChar_VFXComponent_C_WallBounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.ClimbDecal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGAdditionalParams                         AdditionalParams                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UChar_VFXComponent_C::ClimbDecal(const struct FIGAdditionalParams& AdditionalParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.ClimbDecal");
		
		UChar_VFXComponent_C_ClimbDecal_Params params {};
		params.AdditionalParams = AdditionalParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.KOUpdate
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::KOUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.KOUpdate");
		
		UChar_VFXComponent_C_KOUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.ShowOrHideDangerZoneVFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DangerZoneStatus                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChar_VFXComponent_C::ShowOrHideDangerZoneVFX(bool DangerZoneStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.ShowOrHideDangerZoneVFX");
		
		UChar_VFXComponent_C_ShowOrHideDangerZoneVFX_Params params {};
		params.DangerZoneStatus = DangerZoneStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.GetPartyMemberIDColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                PartyLinearColor                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_VFXComponent_C::GetPartyMemberIDColor(class APlayerState* PlayerState, struct FLinearColor* PartyLinearColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.GetPartyMemberIDColor");
		
		UChar_VFXComponent_C_GetPartyMemberIDColor_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PartyLinearColor != nullptr)
			*PartyLinearColor = params.PartyLinearColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.MagazineEnd
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::MagazineEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.MagazineEnd");
		
		UChar_VFXComponent_C_MagazineEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.EventWon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ASheikCharacter*>                     Winners                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UChar_VFXComponent_C::EventWon(TArray<class ASheikCharacter*>* Winners)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.EventWon");
		
		UChar_VFXComponent_C_EventWon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Winners != nullptr)
			*Winners = params.Winners;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.GetDefenderImpactPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               FloorHit                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ImpactPoint                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    ImpactRotation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChar_VFXComponent_C::GetDefenderImpactPoint(bool* FloorHit, float* Distance, struct FVector* ImpactPoint, struct FRotator* ImpactRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.GetDefenderImpactPoint");
		
		UChar_VFXComponent_C_GetDefenderImpactPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FloorHit != nullptr)
			*FloorHit = params.FloorHit;
		if (Distance != nullptr)
			*Distance = params.Distance;
		if (ImpactPoint != nullptr)
			*ImpactPoint = params.ImpactPoint;
		if (ImpactRotation != nullptr)
			*ImpactRotation = params.ImpactRotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.PerkRemoved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     PerkAsset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_VFXComponent_C::PerkRemoved(class UObject* PerkAsset, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.PerkRemoved");
		
		UChar_VFXComponent_C_PerkRemoved_Params params {};
		params.PerkAsset = PerkAsset;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.PerkDeactivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     PerkAsset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_VFXComponent_C::PerkDeactivated(class UObject* PerkAsset, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.PerkDeactivated");
		
		UChar_VFXComponent_C_PerkDeactivated_Params params {};
		params.PerkAsset = PerkAsset;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.PerkActivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     PerkAsset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_VFXComponent_C::PerkActivated(class UObject* PerkAsset, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.PerkActivated");
		
		UChar_VFXComponent_C_PerkActivated_Params params {};
		params.PerkAsset = PerkAsset;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.PerkGained
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     PerkAsset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_VFXComponent_C::PerkGained(class UObject* PerkAsset, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.PerkGained");
		
		UChar_VFXComponent_C_PerkGained_Params params {};
		params.PerkAsset = PerkAsset;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.OnAimUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     StartPoint                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     EndPoint                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     StartTangent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     EndTangent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ImpactNormal                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_VFXComponent_C::OnAimUpdated(const struct FVector& StartPoint, const struct FVector& EndPoint, const struct FVector& StartTangent, const struct FVector& EndTangent, const struct FVector& ImpactNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.OnAimUpdated");
		
		UChar_VFXComponent_C_OnAimUpdated_Params params {};
		params.StartPoint = StartPoint;
		params.EndPoint = EndPoint;
		params.StartTangent = StartTangent;
		params.EndTangent = EndTangent;
		params.ImpactNormal = ImpactNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.OnAimExited
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::OnAimExited()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.OnAimExited");
		
		UChar_VFXComponent_C_OnAimExited_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.OnAimStarted
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::OnAimStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.OnAimStarted");
		
		UChar_VFXComponent_C_OnAimStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.MistAttackEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGAdditionalParams                         AdditionalParams                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UChar_VFXComponent_C::MistAttackEnd(const struct FIGAdditionalParams& AdditionalParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.MistAttackEnd");
		
		UChar_VFXComponent_C_MistAttackEnd_Params params {};
		params.AdditionalParams = AdditionalParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.MistAttackStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGAdditionalParams                         AdditionalParams                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UChar_VFXComponent_C::MistAttackStart(const struct FIGAdditionalParams& AdditionalParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.MistAttackStart");
		
		UChar_VFXComponent_C_MistAttackStart_Params params {};
		params.AdditionalParams = AdditionalParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.UpdateConsumableLocation
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::UpdateConsumableLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.UpdateConsumableLocation");
		
		UChar_VFXComponent_C_UpdateConsumableLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.ConsumableEnd
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::ConsumableEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.ConsumableEnd");
		
		UChar_VFXComponent_C_ConsumableEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.ConsumableStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGDynamicParams                            DynamicParams                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UChar_VFXComponent_C::ConsumableStart(const struct FIGDynamicParams& DynamicParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.ConsumableStart");
		
		UChar_VFXComponent_C_ConsumableStart_Params params {};
		params.DynamicParams = DynamicParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.GetAttackerImpactPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               FloorHit                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ImpactPoint                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    ImpactRotation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChar_VFXComponent_C::GetAttackerImpactPoint(bool* FloorHit, float* Distance, struct FVector* ImpactPoint, struct FRotator* ImpactRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.GetAttackerImpactPoint");
		
		UChar_VFXComponent_C_GetAttackerImpactPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FloorHit != nullptr)
			*FloorHit = params.FloorHit;
		if (Distance != nullptr)
			*Distance = params.Distance;
		if (ImpactPoint != nullptr)
			*ImpactPoint = params.ImpactPoint;
		if (ImpactRotation != nullptr)
			*ImpactRotation = params.ImpactRotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.SpawnCannonCloudVFX
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::SpawnCannonCloudVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.SpawnCannonCloudVFX");
		
		UChar_VFXComponent_C_SpawnCannonCloudVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.BRFreefallEnd
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::BRFreefallEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.BRFreefallEnd");
		
		UChar_VFXComponent_C_BRFreefallEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.KillActiveVFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlayerDestroyed                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChar_VFXComponent_C::KillActiveVFX(bool PlayerDestroyed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.KillActiveVFX");
		
		UChar_VFXComponent_C_KillActiveVFX_Params params {};
		params.PlayerDestroyed = PlayerDestroyed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.BRFreeFallStart
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::BRFreeFallStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.BRFreeFallStart");
		
		UChar_VFXComponent_C_BRFreeFallStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.BRFallEnd
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::BRFallEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.BRFallEnd");
		
		UChar_VFXComponent_C_BRFallEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.BRFallStart
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::BRFallStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.BRFallStart");
		
		UChar_VFXComponent_C_BRFallStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.SetupVariables
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::SetupVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.SetupVariables");
		
		UChar_VFXComponent_C_SetupVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.FallSpeedImpact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGVFXFallEndNotifyInfo                     EventInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FName                                        EventName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_VFXComponent_C::FallSpeedImpact(const struct FIGVFXFallEndNotifyInfo& EventInfo, const class FName& EventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.FallSpeedImpact");
		
		UChar_VFXComponent_C_FallSpeedImpact_Params params {};
		params.EventInfo = EventInfo;
		params.EventName = EventName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.FallSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGVFXFallTierNotifyInfo                    IGVFXFallInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChar_VFXComponent_C::FallSpeed(const struct FIGVFXFallTierNotifyInfo& IGVFXFallInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.FallSpeed");
		
		UChar_VFXComponent_C_FallSpeed_Params params {};
		params.IGVFXFallInfo = IGVFXFallInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.StopTimer
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::StopTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.StopTimer");
		
		UChar_VFXComponent_C_StopTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.ChargeUpEnd
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::ChargeUpEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.ChargeUpEnd");
		
		UChar_VFXComponent_C_ChargeUpEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.ChargedUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGAdditionalParams                         AdditionalParams                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UChar_VFXComponent_C::ChargedUp(const struct FIGAdditionalParams& AdditionalParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.ChargedUp");
		
		UChar_VFXComponent_C_ChargedUp_Params params {};
		params.AdditionalParams = AdditionalParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.IncrementCharge
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::IncrementCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.IncrementCharge");
		
		UChar_VFXComponent_C_IncrementCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.ChargeUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGAdditionalParams                         AdditionalParams                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UChar_VFXComponent_C::ChargeUp(const struct FIGAdditionalParams& AdditionalParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.ChargeUp");
		
		UChar_VFXComponent_C_ChargeUp_Params params {};
		params.AdditionalParams = AdditionalParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.HandleAnimNotifyStateEndVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FIGVFXCharacterAnimNotifyEventInfo          EventInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UChar_VFXComponent_C::HandleAnimNotifyStateEndVFXBP(const class FName& EventName, const struct FIGVFXCharacterAnimNotifyEventInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.HandleAnimNotifyStateEndVFXBP");
		
		UChar_VFXComponent_C_HandleAnimNotifyStateEndVFXBP_Params params {};
		params.EventName = EventName;
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.HandleAnimNotifyStateBeginVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FIGVFXCharacterAnimNotifyEventInfo          EventInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UChar_VFXComponent_C::HandleAnimNotifyStateBeginVFXBP(const class FName& EventName, const struct FIGVFXCharacterAnimNotifyEventInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.HandleAnimNotifyStateBeginVFXBP");
		
		UChar_VFXComponent_C_HandleAnimNotifyStateBeginVFXBP_Params params {};
		params.EventName = EventName;
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.HandleAnimNotifyStateTickVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FIGVFXCharacterAnimNotifyEventInfo          EventInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UChar_VFXComponent_C::HandleAnimNotifyStateTickVFXBP(const class FName& EventName, const struct FIGVFXCharacterAnimNotifyEventInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.HandleAnimNotifyStateTickVFXBP");
		
		UChar_VFXComponent_C_HandleAnimNotifyStateTickVFXBP_Params params {};
		params.EventName = EventName;
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.ReceiveBeginPlay");
		
		UChar_VFXComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.AimArcUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     StartPoint                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     EndPoint                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     StartTangent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     EndTangent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ImpactNormal                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_VFXComponent_C::AimArcUpdated(const struct FVector& StartPoint, const struct FVector& EndPoint, const struct FVector& StartTangent, const struct FVector& EndTangent, const struct FVector& ImpactNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.AimArcUpdated");
		
		UChar_VFXComponent_C_AimArcUpdated_Params params {};
		params.StartPoint = StartPoint;
		params.EndPoint = EndPoint;
		params.StartTangent = StartTangent;
		params.EndTangent = EndTangent;
		params.ImpactNormal = ImpactNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.AimStarted
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::AimStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.AimStarted");
		
		UChar_VFXComponent_C_AimStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.AimExited
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::AimExited()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.AimExited");
		
		UChar_VFXComponent_C_AimExited_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.CannonSequenceStarted
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::CannonSequenceStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.CannonSequenceStarted");
		
		UChar_VFXComponent_C_CannonSequenceStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.CannonSequenceEnded
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::CannonSequenceEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.CannonSequenceEnded");
		
		UChar_VFXComponent_C_CannonSequenceEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.DangerZoneStatusChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DangerZoneStatus                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChar_VFXComponent_C::DangerZoneStatusChanged(bool DangerZoneStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.DangerZoneStatusChanged");
		
		UChar_VFXComponent_C_DangerZoneStatusChanged_Params params {};
		params.DangerZoneStatus = DangerZoneStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.KO_VFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               KOHit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChar_VFXComponent_C::KO_VFX(bool KOHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.KO_VFX");
		
		UChar_VFXComponent_C_KO_VFX_Params params {};
		params.KOHit = KOHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.HandleClashVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Attacker                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Victim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_VFXComponent_C::HandleClashVFXBP(class AActor* Attacker, class AActor* Victim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.HandleClashVFXBP");
		
		UChar_VFXComponent_C_HandleClashVFXBP_Params params {};
		params.Attacker = Attacker;
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.HandleDamageNumberNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DamageValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UParticleSystem*                             DamageNumberEffect                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NumberSpawnLocation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NumberSpawnScale                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAttackerWasInSuper                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChar_VFXComponent_C::HandleDamageNumberNotification(float DamageValue, class UParticleSystem* DamageNumberEffect, const struct FVector& NumberSpawnLocation, const struct FVector& NumberSpawnScale, bool bAttackerWasInSuper)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.HandleDamageNumberNotification");
		
		UChar_VFXComponent_C_HandleDamageNumberNotification_Params params {};
		params.DamageValue = DamageValue;
		params.DamageNumberEffect = DamageNumberEffect;
		params.NumberSpawnLocation = NumberSpawnLocation;
		params.NumberSpawnScale = NumberSpawnScale;
		params.bAttackerWasInSuper = bAttackerWasInSuper;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.StopDamageNumbers
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::StopDamageNumbers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.StopDamageNumbers");
		
		UChar_VFXComponent_C_StopDamageNumbers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.HandleAnimNotifyVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FIGVFXCharacterAnimNotifyEventInfo          EventInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UChar_VFXComponent_C::HandleAnimNotifyVFXBP(const class FName& EventName, const struct FIGVFXCharacterAnimNotifyEventInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.HandleAnimNotifyVFXBP");
		
		UChar_VFXComponent_C_HandleAnimNotifyVFXBP_Params params {};
		params.EventName = EventName;
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.OnBrokenByViciousAttack
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::OnBrokenByViciousAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.OnBrokenByViciousAttack");
		
		UChar_VFXComponent_C_OnBrokenByViciousAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.HandleCharacterReset
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::HandleCharacterReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.HandleCharacterReset");
		
		UChar_VFXComponent_C_HandleCharacterReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.OnPlayerDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_VFXComponent_C::OnPlayerDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.OnPlayerDestroyed");
		
		UChar_VFXComponent_C_OnPlayerDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.OnCharacterEnteredDBNO
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGCharacter*                                Victim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_VFXComponent_C::OnCharacterEnteredDBNO(class AIGCharacter* Victim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.OnCharacterEnteredDBNO");
		
		UChar_VFXComponent_C_OnCharacterEnteredDBNO_Params params {};
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.OnCharacterExitedDBNO
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGCharacter*                                Victim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_VFXComponent_C::OnCharacterExitedDBNO(class AIGCharacter* Victim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.OnCharacterExitedDBNO");
		
		UChar_VFXComponent_C_OnCharacterExitedDBNO_Params params {};
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.HandleStashUnstashVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsStashing                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsLargeItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChar_VFXComponent_C::HandleStashUnstashVFXBP(bool IsStashing, bool IsLargeItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.HandleStashUnstashVFXBP");
		
		UChar_VFXComponent_C_HandleStashUnstashVFXBP_Params params {};
		params.IsStashing = IsStashing;
		params.IsLargeItem = IsLargeItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.PreTeleport
	 * 		Flags  -> ()
	 */
	void UChar_VFXComponent_C::PreTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.PreTeleport");
		
		UChar_VFXComponent_C_PreTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.PostTeleport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TeleportDestination                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_VFXComponent_C::PostTeleport(const struct FVector& TeleportDestination)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.PostTeleport");
		
		UChar_VFXComponent_C_PostTeleport_Params params {};
		params.TeleportDestination = TeleportDestination;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.HandleUnpocketVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Attacker                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Victim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DroppedAnItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChar_VFXComponent_C::HandleUnpocketVFXBP(class AActor* Attacker, class AActor* Victim, bool DroppedAnItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.HandleUnpocketVFXBP");
		
		UChar_VFXComponent_C_HandleUnpocketVFXBP_Params params {};
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
	 * 		Name   -> Function Char_VFXComponent.Char_VFXComponent_C.ExecuteUbergraph_Char_VFXComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChar_VFXComponent_C::ExecuteUbergraph_Char_VFXComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_VFXComponent.Char_VFXComponent_C.ExecuteUbergraph_Char_VFXComponent");
		
		UChar_VFXComponent_C_ExecuteUbergraph_Char_VFXComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChar_VFXComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChar_VFXComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Char_VFXComponent.Char_VFXComponent_C");
		return ptr;
	}

}


