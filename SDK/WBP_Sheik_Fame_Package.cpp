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
	 * 		Name   -> Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.OnKOInsuranceAllowedChanged_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewKOInsuranceAllowed                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Fame_C::OnKOInsuranceAllowedChanged_cb(bool bNewKOInsuranceAllowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.OnKOInsuranceAllowedChanged_cb");
		
		UWBP_Sheik_Fame_C_OnKOInsuranceAllowedChanged_cb_Params params {};
		params.bNewKOInsuranceAllowed = bNewKOInsuranceAllowed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.PlayUISound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUISounds                                          SoundType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bPlaySound                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Fame_C::PlayUISound(EUISounds SoundType, bool bPlaySound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.PlayUISound");
		
		UWBP_Sheik_Fame_C_PlayUISound_Params params {};
		params.SoundType = SoundType;
		params.bPlaySound = bPlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.SpectatorStarPowerEvent_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FameAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FameMax                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FamePercentage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFameSource                                        FameSource                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Fame_C::SpectatorStarPowerEvent_cb(float FameAmount, float FameMax, float FamePercentage, EFameSource FameSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.SpectatorStarPowerEvent_cb");
		
		UWBP_Sheik_Fame_C_SpectatorStarPowerEvent_cb_Params params {};
		params.FameAmount = FameAmount;
		params.FameMax = FameMax;
		params.FamePercentage = FamePercentage;
		params.FameSource = FameSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.StopKOProtection
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Fame_C::StopKOProtection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.StopKOProtection");
		
		UWBP_Sheik_Fame_C_StopKOProtection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.KOInsuranceActivated_cb
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Fame_C::KOInsuranceActivated_cb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.KOInsuranceActivated_cb");
		
		UWBP_Sheik_Fame_C_KOInsuranceActivated_cb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.SuperStarMode_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SuperstarModeActive                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Fame_C::SuperStarMode_cb(bool SuperstarModeActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.SuperStarMode_cb");
		
		UWBP_Sheik_Fame_C_SuperStarMode_cb_Params params {};
		params.SuperstarModeActive = SuperstarModeActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.UpdateMeter
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Fame_C::UpdateMeter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.UpdateMeter");
		
		UWBP_Sheik_Fame_C_UpdateMeter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.OnStarPowerChanged_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FamePercentage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FameTotal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FamePercentageDelta                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Fame_C::OnStarPowerChanged_cb(float FamePercentage, float FameTotal, float FamePercentageDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.OnStarPowerChanged_cb");
		
		UWBP_Sheik_Fame_C_OnStarPowerChanged_cb_Params params {};
		params.FamePercentage = FamePercentage;
		params.FameTotal = FameTotal;
		params.FamePercentageDelta = FamePercentageDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.SetForPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikPlayerStateCommon*                     SheikPlayerState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Fame_C::SetForPlayer(class ASheikPlayerStateCommon* SheikPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.SetForPlayer");
		
		UWBP_Sheik_Fame_C_SetForPlayer_Params params {};
		params.SheikPlayerState = SheikPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.UpdateSuperModeInputs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInputSource                                       InputSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Fame_C::UpdateSuperModeInputs(EInputSource InputSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.UpdateSuperModeInputs");
		
		UWBP_Sheik_Fame_C_UpdateSuperModeInputs_Params params {};
		params.InputSource = InputSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.EnableKOInsurance
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Fame_C::EnableKOInsurance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.EnableKOInsurance");
		
		UWBP_Sheik_Fame_C_EnableKOInsurance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.RefreshEmptyMeter
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Fame_C::RefreshEmptyMeter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.RefreshEmptyMeter");
		
		UWBP_Sheik_Fame_C_RefreshEmptyMeter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.EnableSuperMode
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Fame_C::EnableSuperMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.EnableSuperMode");
		
		UWBP_Sheik_Fame_C_EnableSuperMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Fame_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.ConstructOnlyOnce");
		
		UWBP_Sheik_Fame_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.OnInputSourceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUserControllerData                         OldInputSource                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FUserControllerData                         NewInputSource                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_Sheik_Fame_C::OnInputSourceChanged(const struct FUserControllerData& OldInputSource, const struct FUserControllerData& NewInputSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.OnInputSourceChanged");
		
		UWBP_Sheik_Fame_C_OnInputSourceChanged_Params params {};
		params.OldInputSource = OldInputSource;
		params.NewInputSource = NewInputSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.RefreshMeter
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Fame_C::RefreshMeter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.RefreshMeter");
		
		UWBP_Sheik_Fame_C_RefreshMeter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.ExecuteUbergraph_WBP_Sheik_Fame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Fame_C::ExecuteUbergraph_WBP_Sheik_Fame(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.ExecuteUbergraph_WBP_Sheik_Fame");
		
		UWBP_Sheik_Fame_C_ExecuteUbergraph_WBP_Sheik_Fame_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Fame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Fame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Fame.WBP_Sheik_Fame_C");
		return ptr;
	}

}


