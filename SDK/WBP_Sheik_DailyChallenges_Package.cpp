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
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.GetLocalPlayerRepSystem
	 * 		Flags  -> ()
	 */
	class USheikRepSystem* UWBP_Sheik_DailyChallenges_C::GetLocalPlayerRepSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.GetLocalPlayerRepSystem");
		
		UWBP_Sheik_DailyChallenges_C_GetLocalPlayerRepSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.FilterWeeklyReps
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FRepUIData>                          AllReps                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FRepUIData>                          Out                                                        (Parm, OutParm)
	 */
	void UWBP_Sheik_DailyChallenges_C::FilterWeeklyReps(TArray<struct FRepUIData>* AllReps, TArray<struct FRepUIData>* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.FilterWeeklyReps");
		
		UWBP_Sheik_DailyChallenges_C_FilterWeeklyReps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllReps != nullptr)
			*AllReps = params.AllReps;
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.RefreshRepsLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Successful                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_DailyChallenges_C::RefreshRepsLoaded(bool Successful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.RefreshRepsLoaded");
		
		UWBP_Sheik_DailyChallenges_C_RefreshRepsLoaded_Params params {};
		params.Successful = Successful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.StartLoading
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_DailyChallenges_C::StartLoading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.StartLoading");
		
		UWBP_Sheik_DailyChallenges_C_StartLoading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.GetFirstDailyChallenge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            FirstChallenge                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_DailyChallenges_C::GetFirstDailyChallenge(class UIGUI_WidgetBase** FirstChallenge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.GetFirstDailyChallenge");
		
		UWBP_Sheik_DailyChallenges_C_GetFirstDailyChallenge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FirstChallenge != nullptr)
			*FirstChallenge = params.FirstChallenge;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.FillOutRepListWithEmptyEntries
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EmptyEntryCount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StartingIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_DailyChallenges_C::FillOutRepListWithEmptyEntries(int32_t EmptyEntryCount, int32_t StartingIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.FillOutRepListWithEmptyEntries");
		
		UWBP_Sheik_DailyChallenges_C_FillOutRepListWithEmptyEntries_Params params {};
		params.EmptyEntryCount = EmptyEntryCount;
		params.StartingIndex = StartingIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.PopulateEmptryRepList
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_DailyChallenges_C::PopulateEmptryRepList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.PopulateEmptryRepList");
		
		UWBP_Sheik_DailyChallenges_C_PopulateEmptryRepList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.RemoveEmptyReps
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_DailyChallenges_C::RemoveEmptyReps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.RemoveEmptyReps");
		
		UWBP_Sheik_DailyChallenges_C_RemoveEmptyReps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.PrintCurrentReps
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_DailyChallenges_C::PrintCurrentReps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.PrintCurrentReps");
		
		UWBP_Sheik_DailyChallenges_C_PrintCurrentReps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.IsRepAlreadyInList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RepName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWBP_Sheik_RepMenuEntry_C*                   Out                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_DailyChallenges_C::IsRepAlreadyInList(const class FName& RepName, class UWBP_Sheik_RepMenuEntry_C** Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.IsRepAlreadyInList");
		
		UWBP_Sheik_DailyChallenges_C_IsRepAlreadyInList_Params params {};
		params.RepName = RepName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.HideRerollForFirstTimerReps
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_DailyChallenges_C::HideRerollForFirstTimerReps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.HideRerollForFirstTimerReps");
		
		UWBP_Sheik_DailyChallenges_C_HideRerollForFirstTimerReps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.HasRepEntries
	 * 		Flags  -> ()
	 */
	bool UWBP_Sheik_DailyChallenges_C::HasRepEntries()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.HasRepEntries");
		
		UWBP_Sheik_DailyChallenges_C_HasRepEntries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.GetCurrentReps
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FRepUIData>                          OutReps                                                    (Parm, OutParm)
	 */
	void UWBP_Sheik_DailyChallenges_C::GetCurrentReps(TArray<struct FRepUIData>* OutReps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.GetCurrentReps");
		
		UWBP_Sheik_DailyChallenges_C_GetCurrentReps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutReps != nullptr)
			*OutReps = params.OutReps;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.ToggleClaimRerollOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHidden                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_DailyChallenges_C::ToggleClaimRerollOptions(bool IsHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.ToggleClaimRerollOptions");
		
		UWBP_Sheik_DailyChallenges_C_ToggleClaimRerollOptions_Params params {};
		params.IsHidden = IsHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.SetAccrualTextInfo
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_DailyChallenges_C::SetAccrualTextInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.SetAccrualTextInfo");
		
		UWBP_Sheik_DailyChallenges_C_SetAccrualTextInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.DisplayEmptyRepEntry
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_DailyChallenges_C::DisplayEmptyRepEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.DisplayEmptyRepEntry");
		
		UWBP_Sheik_DailyChallenges_C_DisplayEmptyRepEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.RefreshButtonTextAndVisibility
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_DailyChallenges_C::RefreshButtonTextAndVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.RefreshButtonTextAndVisibility");
		
		UWBP_Sheik_DailyChallenges_C_RefreshButtonTextAndVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.CheckForAccrualAllowanceUpdates
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_DailyChallenges_C::CheckForAccrualAllowanceUpdates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.CheckForAccrualAllowanceUpdates");
		
		UWBP_Sheik_DailyChallenges_C_CheckForAccrualAllowanceUpdates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.HandleOnRefreshAllButtonsOnRerollClick
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_DailyChallenges_C::HandleOnRefreshAllButtonsOnRerollClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.HandleOnRefreshAllButtonsOnRerollClick");
		
		UWBP_Sheik_DailyChallenges_C_HandleOnRefreshAllButtonsOnRerollClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.SetQueuedRepsText
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_DailyChallenges_C::SetQueuedRepsText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.SetQueuedRepsText");
		
		UWBP_Sheik_DailyChallenges_C_SetQueuedRepsText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.SetTimeTillNextRerollText
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_DailyChallenges_C::SetTimeTillNextRerollText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.SetTimeTillNextRerollText");
		
		UWBP_Sheik_DailyChallenges_C_SetTimeTillNextRerollText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.SetRerollText
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_DailyChallenges_C::SetRerollText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.SetRerollText");
		
		UWBP_Sheik_DailyChallenges_C_SetRerollText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.HandleOnNewRepAcquired_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRepUIData                                  OutNewRep                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_DailyChallenges_C::HandleOnNewRepAcquired_cb(const struct FRepUIData& OutNewRep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.HandleOnNewRepAcquired_cb");
		
		UWBP_Sheik_DailyChallenges_C_HandleOnNewRepAcquired_cb_Params params {};
		params.OutNewRep = OutNewRep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.OnRemoveThisRepFromUI_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Sheik_RepMenuEntry_C*                   This                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_DailyChallenges_C::OnRemoveThisRepFromUI_cb(class UWBP_Sheik_RepMenuEntry_C* This)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.OnRemoveThisRepFromUI_cb");
		
		UWBP_Sheik_DailyChallenges_C_OnRemoveThisRepFromUI_cb_Params params {};
		params.This = This;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.SetReps
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_DailyChallenges_C::SetReps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.SetReps");
		
		UWBP_Sheik_DailyChallenges_C_SetReps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_DailyChallenges_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.ConstructOnlyOnce");
		
		UWBP_Sheik_DailyChallenges_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.ToggleDebugShowRerollTimerRealTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Argument1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Argument2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Argument3                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Argument4                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_DailyChallenges_C::ToggleDebugShowRerollTimerRealTime(const class FString& Argument1, const class FString& Argument2, const class FString& Argument3, const class FString& Argument4)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.ToggleDebugShowRerollTimerRealTime");
		
		UWBP_Sheik_DailyChallenges_C_ToggleDebugShowRerollTimerRealTime_Params params {};
		params.Argument1 = Argument1;
		params.Argument2 = Argument2;
		params.Argument3 = Argument3;
		params.Argument4 = Argument4;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.BeginUpdateChecks
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_DailyChallenges_C::BeginUpdateChecks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.BeginUpdateChecks");
		
		UWBP_Sheik_DailyChallenges_C_BeginUpdateChecks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.StopUpdateChecks
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_DailyChallenges_C::StopUpdateChecks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.StopUpdateChecks");
		
		UWBP_Sheik_DailyChallenges_C_StopUpdateChecks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.ExecuteUbergraph_WBP_Sheik_DailyChallenges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_DailyChallenges_C::ExecuteUbergraph_WBP_Sheik_DailyChallenges(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.ExecuteUbergraph_WBP_Sheik_DailyChallenges");
		
		UWBP_Sheik_DailyChallenges_C_ExecuteUbergraph_WBP_Sheik_DailyChallenges_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.NewChallengeAdded__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_DailyChallenges_C::NewChallengeAdded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.NewChallengeAdded__DelegateSignature");
		
		UWBP_Sheik_DailyChallenges_C_NewChallengeAdded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_DailyChallenges_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_DailyChallenges_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C");
		return ptr;
	}

}


