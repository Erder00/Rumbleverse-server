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
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.ActivateCancelButton
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MatchmakingInfo_C::ActivateCancelButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.ActivateCancelButton");
		
		UWBP_Sheik_MatchmakingInfo_C_ActivateCancelButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.DeactivateCancelButton
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MatchmakingInfo_C::DeactivateCancelButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.DeactivateCancelButton");
		
		UWBP_Sheik_MatchmakingInfo_C_DeactivateCancelButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.ShowMatchmakingCanceledWidget
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MatchmakingInfo_C::ShowMatchmakingCanceledWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.ShowMatchmakingCanceledWidget");
		
		UWBP_Sheik_MatchmakingInfo_C_ShowMatchmakingCanceledWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.ShowMatchmakingErrorWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ErrorText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_MatchmakingInfo_C::ShowMatchmakingErrorWidget(const class FText& ErrorText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.ShowMatchmakingErrorWidget");
		
		UWBP_Sheik_MatchmakingInfo_C_ShowMatchmakingErrorWidget_Params params {};
		params.ErrorText = ErrorText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.SetTimeToWaitForMatchmakingAutoHide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MatchmakingInfo_C::SetTimeToWaitForMatchmakingAutoHide(float InTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.SetTimeToWaitForMatchmakingAutoHide");
		
		UWBP_Sheik_MatchmakingInfo_C_SetTimeToWaitForMatchmakingAutoHide_Params params {};
		params.InTime = InTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.ShowMatchFoundWidget
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MatchmakingInfo_C::ShowMatchFoundWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.ShowMatchFoundWidget");
		
		UWBP_Sheik_MatchmakingInfo_C_ShowMatchFoundWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.BindToMatchmakingCallbackBroadcasts
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MatchmakingInfo_C::BindToMatchmakingCallbackBroadcasts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.BindToMatchmakingCallbackBroadcasts");
		
		UWBP_Sheik_MatchmakingInfo_C_BindToMatchmakingCallbackBroadcasts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.BindToPartyManagerBroadcasts
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MatchmakingInfo_C::BindToPartyManagerBroadcasts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.BindToPartyManagerBroadcasts");
		
		UWBP_Sheik_MatchmakingInfo_C_BindToPartyManagerBroadcasts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.HideMatchmakingWidget
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MatchmakingInfo_C::HideMatchmakingWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.HideMatchmakingWidget");
		
		UWBP_Sheik_MatchmakingInfo_C_HideMatchmakingWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.ClearTimers
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MatchmakingInfo_C::ClearTimers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.ClearTimers");
		
		UWBP_Sheik_MatchmakingInfo_C_ClearTimers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.UpdateMatchmakingWidget
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MatchmakingInfo_C::UpdateMatchmakingWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.UpdateMatchmakingWidget");
		
		UWBP_Sheik_MatchmakingInfo_C_UpdateMatchmakingWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.GetCurrentTimeElapsed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTimespan                                   NewParam                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MatchmakingInfo_C::GetCurrentTimeElapsed(struct FTimespan* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.GetCurrentTimeElapsed");
		
		UWBP_Sheik_MatchmakingInfo_C_GetCurrentTimeElapsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.ShowMatchmakingWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InMatchConfig                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MatchmakingInfo_C::ShowMatchmakingWidget(const class FString& InMatchConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.ShowMatchmakingWidget");
		
		UWBP_Sheik_MatchmakingInfo_C_ShowMatchmakingWidget_Params params {};
		params.InMatchConfig = InMatchConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.SetMatchConfig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MatchConfig                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MatchmakingInfo_C::SetMatchConfig(const class FString& MatchConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.SetMatchConfig");
		
		UWBP_Sheik_MatchmakingInfo_C_SetMatchConfig_Params params {};
		params.MatchConfig = MatchConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.SetElapsedTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTimespan                                   Timespan                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MatchmakingInfo_C::SetElapsedTime(const struct FTimespan& Timespan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.SetElapsedTime");
		
		UWBP_Sheik_MatchmakingInfo_C_SetElapsedTime_Params params {};
		params.Timespan = Timespan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.SetAsNormalMatchmaking
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MatchmakingInfo_C::SetAsNormalMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.SetAsNormalMatchmaking");
		
		UWBP_Sheik_MatchmakingInfo_C_SetAsNormalMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.SetPromptVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MatchmakingInfo_C::SetPromptVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.SetPromptVisibility");
		
		UWBP_Sheik_MatchmakingInfo_C_SetPromptVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.EventHandleOnMatchmakingStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MatchConfig                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MatchmakingInfo_C::EventHandleOnMatchmakingStarted(const class FString& MatchConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.EventHandleOnMatchmakingStarted");
		
		UWBP_Sheik_MatchmakingInfo_C_EventHandleOnMatchmakingStarted_Params params {};
		params.MatchConfig = MatchConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.EventHandleOnPartyMatchmakingStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ConfigurationName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bIsLeader                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MatchmakingInfo_C::EventHandleOnPartyMatchmakingStarted(const class FString& ConfigurationName, bool bIsLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.EventHandleOnPartyMatchmakingStarted");
		
		UWBP_Sheik_MatchmakingInfo_C_EventHandleOnPartyMatchmakingStarted_Params params {};
		params.ConfigurationName = ConfigurationName;
		params.bIsLeader = bIsLeader;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.EventHandleOnPartyMatchmakingStopped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsLeader                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MatchmakingInfo_C::EventHandleOnPartyMatchmakingStopped(bool bIsLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.EventHandleOnPartyMatchmakingStopped");
		
		UWBP_Sheik_MatchmakingInfo_C_EventHandleOnPartyMatchmakingStopped_Params params {};
		params.bIsLeader = bIsLeader;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.EventHandleOnPartyMatchmakingFound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsLeader                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MatchmakingInfo_C::EventHandleOnPartyMatchmakingFound(bool bIsLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.EventHandleOnPartyMatchmakingFound");
		
		UWBP_Sheik_MatchmakingInfo_C_EventHandleOnPartyMatchmakingFound_Params params {};
		params.bIsLeader = bIsLeader;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.EventHandleOnPartyMatchmakingError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ErrorText                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bIsPartyLeader                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MatchmakingInfo_C::EventHandleOnPartyMatchmakingError(const class FText& ErrorText, bool bIsPartyLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.EventHandleOnPartyMatchmakingError");
		
		UWBP_Sheik_MatchmakingInfo_C_EventHandleOnPartyMatchmakingError_Params params {};
		params.ErrorText = ErrorText;
		params.bIsPartyLeader = bIsPartyLeader;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MatchmakingInfo_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.ConstructOnlyOnce");
		
		UWBP_Sheik_MatchmakingInfo_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.BndEvt__Cancel_ButtonPrompt_K2Node_ComponentBoundEvent_0_OnActionConfirmed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MatchmakingInfo_C::BndEvt__Cancel_ButtonPrompt_K2Node_ComponentBoundEvent_0_OnActionConfirmed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.BndEvt__Cancel_ButtonPrompt_K2Node_ComponentBoundEvent_0_OnActionConfirmed__DelegateSignature");
		
		UWBP_Sheik_MatchmakingInfo_C_BndEvt__Cancel_ButtonPrompt_K2Node_ComponentBoundEvent_0_OnActionConfirmed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.OnMatchmakingComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSheikError                                 Error                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWBP_Sheik_MatchmakingInfo_C::OnMatchmakingComplete(bool bSuccessful, const struct FSheikError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.OnMatchmakingComplete");
		
		UWBP_Sheik_MatchmakingInfo_C_OnMatchmakingComplete_Params params {};
		params.bSuccessful = bSuccessful;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.OnMatchmakingCancelled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSheikError                                 Error                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWBP_Sheik_MatchmakingInfo_C::OnMatchmakingCancelled(bool bSuccessful, const struct FSheikError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.OnMatchmakingCancelled");
		
		UWBP_Sheik_MatchmakingInfo_C_OnMatchmakingCancelled_Params params {};
		params.bSuccessful = bSuccessful;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.ExecuteUbergraph_WBP_Sheik_MatchmakingInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MatchmakingInfo_C::ExecuteUbergraph_WBP_Sheik_MatchmakingInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.ExecuteUbergraph_WBP_Sheik_MatchmakingInfo");
		
		UWBP_Sheik_MatchmakingInfo_C_ExecuteUbergraph_WBP_Sheik_MatchmakingInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.HandleMatchmakingCanceled__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MatchmakingInfo_C::HandleMatchmakingCanceled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.HandleMatchmakingCanceled__DelegateSignature");
		
		UWBP_Sheik_MatchmakingInfo_C_HandleMatchmakingCanceled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.HandleMatchmakingStarted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MatchmakingInfo_C::HandleMatchmakingStarted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.HandleMatchmakingStarted__DelegateSignature");
		
		UWBP_Sheik_MatchmakingInfo_C_HandleMatchmakingStarted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.HandleMatchError__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MatchmakingInfo_C::HandleMatchError__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.HandleMatchError__DelegateSignature");
		
		UWBP_Sheik_MatchmakingInfo_C_HandleMatchError__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.HandleMatchFound__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MatchmakingInfo_C::HandleMatchFound__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.HandleMatchFound__DelegateSignature");
		
		UWBP_Sheik_MatchmakingInfo_C_HandleMatchFound__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.CancelButtonHeld__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MatchmakingInfo_C::CancelButtonHeld__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.CancelButtonHeld__DelegateSignature");
		
		UWBP_Sheik_MatchmakingInfo_C_CancelButtonHeld__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.CancelButtonReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MatchmakingInfo_C::CancelButtonReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.CancelButtonReleased__DelegateSignature");
		
		UWBP_Sheik_MatchmakingInfo_C_CancelButtonReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_MatchmakingInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_MatchmakingInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C");
		return ptr;
	}

}


