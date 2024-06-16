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
	 * 		Name   -> Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.SetUnlockTimer
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RepMenuEntry_C::SetUnlockTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.SetUnlockTimer");
		
		UWBP_Sheik_RepMenuEntry_C_SetUnlockTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.ShouldHideRerollClaim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HideClaimReroll                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_RepMenuEntry_C::ShouldHideRerollClaim(bool* HideClaimReroll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.ShouldHideRerollClaim");
		
		UWBP_Sheik_RepMenuEntry_C_ShouldHideRerollClaim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HideClaimReroll != nullptr)
			*HideClaimReroll = params.HideClaimReroll;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.ShouldAllowClaimOrReroll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsClaimOrRerollAllowed                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_RepMenuEntry_C::ShouldAllowClaimOrReroll(bool* bIsClaimOrRerollAllowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.ShouldAllowClaimOrReroll");
		
		UWBP_Sheik_RepMenuEntry_C_ShouldAllowClaimOrReroll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsClaimOrRerollAllowed != nullptr)
			*bIsClaimOrRerollAllowed = params.bIsClaimOrRerollAllowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.Set Claim or Reroll Disabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDisabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_RepMenuEntry_C::SetClaimorRerollDisabled(bool IsDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.Set Claim or Reroll Disabled");
		
		UWBP_Sheik_RepMenuEntry_C_SetClaimorRerollDisabled_Params params {};
		params.IsDisabled = IsDisabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.SetProgressBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_RepMenuEntry_C::SetProgressBar(int32_t Progress, int32_t Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.SetProgressBar");
		
		UWBP_Sheik_RepMenuEntry_C_SetProgressBar_Params params {};
		params.Progress = Progress;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.SetLockedRep
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RepMenuEntry_C::SetLockedRep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.SetLockedRep");
		
		UWBP_Sheik_RepMenuEntry_C_SetLockedRep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.SetWidgetFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFocused                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SkipAnimation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_RepMenuEntry_C::SetWidgetFocus(bool IsFocused, bool SkipAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.SetWidgetFocus");
		
		UWBP_Sheik_RepMenuEntry_C_SetWidgetFocus_Params params {};
		params.IsFocused = IsFocused;
		params.SkipAnimation = SkipAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.SetButton
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RepMenuEntry_C::SetButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.SetButton");
		
		UWBP_Sheik_RepMenuEntry_C_SetButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.GetButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Sheik_ClaimReRoll_Button_C*             ClaimOrRerollButton                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_RepMenuEntry_C::GetButton(class UWBP_Sheik_ClaimReRoll_Button_C** ClaimOrRerollButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.GetButton");
		
		UWBP_Sheik_RepMenuEntry_C_GetButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClaimOrRerollButton != nullptr)
			*ClaimOrRerollButton = params.ClaimOrRerollButton;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.SetRepText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        DisplayName                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_RepMenuEntry_C::SetRepText(const class FText& DisplayName, const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.SetRepText");
		
		UWBP_Sheik_RepMenuEntry_C_SetRepText_Params params {};
		params.DisplayName = DisplayName;
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.SetProgressText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_RepMenuEntry_C::SetProgressText(int32_t Progress, int32_t Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.SetProgressText");
		
		UWBP_Sheik_RepMenuEntry_C_SetProgressText_Params params {};
		params.Progress = Progress;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.SetButtonText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LockedRep                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_RepMenuEntry_C::SetButtonText(bool LockedRep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.SetButtonText");
		
		UWBP_Sheik_RepMenuEntry_C_SetButtonText_Params params {};
		params.LockedRep = LockedRep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.SetRewardText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FRepReward>                          RewardStructArray                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_RepMenuEntry_C::SetRewardText(TArray<struct FRepReward>* RewardStructArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.SetRewardText");
		
		UWBP_Sheik_RepMenuEntry_C_SetRewardText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RewardStructArray != nullptr)
			*RewardStructArray = params.RewardStructArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.CreateRepLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRepUIData                                  RepUIItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_RepMenuEntry_C::CreateRepLine(const struct FRepUIData& RepUIItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.CreateRepLine");
		
		UWBP_Sheik_RepMenuEntry_C_CreateRepLine_Params params {};
		params.RepUIItem = RepUIItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RepMenuEntry_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.ConstructOnlyOnce");
		
		UWBP_Sheik_RepMenuEntry_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.OnGainFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_RepMenuEntry_C::OnGainFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.OnGainFocus");
		
		UWBP_Sheik_RepMenuEntry_C_OnGainFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.OnLoseFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_RepMenuEntry_C::OnLoseFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.OnLoseFocus");
		
		UWBP_Sheik_RepMenuEntry_C_OnLoseFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.On Action Confirmed
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RepMenuEntry_C::OnActionConfirmed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.On Action Confirmed");
		
		UWBP_Sheik_RepMenuEntry_C_OnActionConfirmed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.Confirm Reroll
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RepMenuEntry_C::ConfirmReroll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.Confirm Reroll");
		
		UWBP_Sheik_RepMenuEntry_C_ConfirmReroll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.Cancel Reroll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_RepMenuEntry_C::CancelReroll(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.Cancel Reroll");
		
		UWBP_Sheik_RepMenuEntry_C_CancelReroll_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.On Confirmed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_RepMenuEntry_C::OnConfirmed(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.On Confirmed");
		
		UWBP_Sheik_RepMenuEntry_C_OnConfirmed_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.ExecuteUbergraph_WBP_Sheik_RepMenuEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_RepMenuEntry_C::ExecuteUbergraph_WBP_Sheik_RepMenuEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.ExecuteUbergraph_WBP_Sheik_RepMenuEntry");
		
		UWBP_Sheik_RepMenuEntry_C_ExecuteUbergraph_WBP_Sheik_RepMenuEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.RefreshAllButtonsOnRerollClick__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RepMenuEntry_C::RefreshAllButtonsOnRerollClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.RefreshAllButtonsOnRerollClick__DelegateSignature");
		
		UWBP_Sheik_RepMenuEntry_C_RefreshAllButtonsOnRerollClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.RemoveThisRepFromUI__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Sheik_RepMenuEntry_C*                   This                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_RepMenuEntry_C::RemoveThisRepFromUI__DelegateSignature(class UWBP_Sheik_RepMenuEntry_C* This)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.RemoveThisRepFromUI__DelegateSignature");
		
		UWBP_Sheik_RepMenuEntry_C_RemoveThisRepFromUI__DelegateSignature_Params params {};
		params.This = This;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_RepMenuEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_RepMenuEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C");
		return ptr;
	}

}


