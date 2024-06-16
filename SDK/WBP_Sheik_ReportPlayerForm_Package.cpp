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
	 * 		Name   -> Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.On Report Thru EOSComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSheikError                                 Error                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWBP_Sheik_ReportPlayerForm_C::OnReportThruEOSComplete(bool bWasSuccessful, const struct FSheikError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.On Report Thru EOSComplete");
		
		UWBP_Sheik_ReportPlayerForm_C_OnReportThruEOSComplete_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.CloseReportConfirmationPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ReportPlayerForm_C::CloseReportConfirmationPrompt(int32_t PopupId, const class FName& BindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.CloseReportConfirmationPrompt");
		
		UWBP_Sheik_ReportPlayerForm_C_CloseReportConfirmationPrompt_Params params {};
		params.PopupId = PopupId;
		params.BindingName = BindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.ShowReportConfirmationPrompt
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ReportPlayerForm_C::ShowReportConfirmationPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.ShowReportConfirmationPrompt");
		
		UWBP_Sheik_ReportPlayerForm_C_ShowReportConfirmationPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.ClearFocusForReportReasons
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ReportPlayerForm_C::ClearFocusForReportReasons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.ClearFocusForReportReasons");
		
		UWBP_Sheik_ReportPlayerForm_C_ClearFocusForReportReasons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.InvalidReport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikError                                 Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_Sheik_ReportPlayerForm_C::InvalidReport(const struct FSheikError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.InvalidReport");
		
		UWBP_Sheik_ReportPlayerForm_C_InvalidReport_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.ReportSelected
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ReportPlayerForm_C::ReportSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.ReportSelected");
		
		UWBP_Sheik_ReportPlayerForm_C_ReportSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.ResetReport
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ReportPlayerForm_C::ResetReport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.ResetReport");
		
		UWBP_Sheik_ReportPlayerForm_C_ResetReport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.BackPressed_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ReportPlayerForm_C::BackPressed_cb(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.BackPressed_cb");
		
		UWBP_Sheik_ReportPlayerForm_C_BackPressed_cb_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.ReportPressed_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ReportPlayerForm_C::ReportPressed_cb(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.ReportPressed_cb");
		
		UWBP_Sheik_ReportPlayerForm_C_ReportPressed_cb_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.SetPlayerID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ReportPlayerForm_C::SetPlayerID(const class FString& PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.SetPlayerID");
		
		UWBP_Sheik_ReportPlayerForm_C_SetPlayerID_Params params {};
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.SetPlayerNameToReport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ReportedPlayerName                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ReportPlayerForm_C::SetPlayerNameToReport(const class FString& ReportedPlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.SetPlayerNameToReport");
		
		UWBP_Sheik_ReportPlayerForm_C_SetPlayerNameToReport_Params params {};
		params.ReportedPlayerName = ReportedPlayerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.SetPlayerIdToReport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikPlayerAccount                         ReportedPlayerId                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ReportPlayerForm_C::SetPlayerIdToReport(const struct FSheikPlayerAccount& ReportedPlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.SetPlayerIdToReport");
		
		UWBP_Sheik_ReportPlayerForm_C_SetPlayerIdToReport_Params params {};
		params.ReportedPlayerId = ReportedPlayerId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.InitReportForm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FSheikPlayerAccount                         ReportedPlayerAccount                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      ReportedPlayerName                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ReportPlayerForm_C::InitReportForm(const class FString& PlayerId, const struct FSheikPlayerAccount& ReportedPlayerAccount, const class FString& ReportedPlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.InitReportForm");
		
		UWBP_Sheik_ReportPlayerForm_C_InitReportForm_Params params {};
		params.PlayerId = PlayerId;
		params.ReportedPlayerAccount = ReportedPlayerAccount;
		params.ReportedPlayerName = ReportedPlayerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.GetNavigableWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UIGUI_WidgetBase*>                    NavigableWidgets                                           (Parm, OutParm, ContainsInstancedReference)
	 */
	void UWBP_Sheik_ReportPlayerForm_C::GetNavigableWidgets(TArray<class UIGUI_WidgetBase*>* NavigableWidgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.GetNavigableWidgets");
		
		UWBP_Sheik_ReportPlayerForm_C_GetNavigableWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NavigableWidgets != nullptr)
			*NavigableWidgets = params.NavigableWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.Test_PrintTelemetryEventData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TelemetryData                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ReportPlayerForm_C::Test_PrintTelemetryEventData(class FString* TelemetryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.Test_PrintTelemetryEventData");
		
		UWBP_Sheik_ReportPlayerForm_C_Test_PrintTelemetryEventData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TelemetryData != nullptr)
			*TelemetryData = params.TelemetryData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.OnActivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ReportPlayerForm_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.OnActivated");
		
		UWBP_Sheik_ReportPlayerForm_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.OnDeactivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ReportPlayerForm_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.OnDeactivated");
		
		UWBP_Sheik_ReportPlayerForm_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.BndEvt__Cheating_Report_K2Node_ComponentBoundEvent_8_UpdateReportReason__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ReportPlayerForm_C::BndEvt__Cheating_Report_K2Node_ComponentBoundEvent_8_UpdateReportReason__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.BndEvt__Cheating_Report_K2Node_ComponentBoundEvent_8_UpdateReportReason__DelegateSignature");
		
		UWBP_Sheik_ReportPlayerForm_C_BndEvt__Cheating_Report_K2Node_ComponentBoundEvent_8_UpdateReportReason__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.BndEvt__Griefing_Report_K2Node_ComponentBoundEvent_9_UpdateReportReason__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ReportPlayerForm_C::BndEvt__Griefing_Report_K2Node_ComponentBoundEvent_9_UpdateReportReason__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.BndEvt__Griefing_Report_K2Node_ComponentBoundEvent_9_UpdateReportReason__DelegateSignature");
		
		UWBP_Sheik_ReportPlayerForm_C_BndEvt__Griefing_Report_K2Node_ComponentBoundEvent_9_UpdateReportReason__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.BndEvt__Harassment_Report_K2Node_ComponentBoundEvent_10_UpdateReportReason__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ReportPlayerForm_C::BndEvt__Harassment_Report_K2Node_ComponentBoundEvent_10_UpdateReportReason__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.BndEvt__Harassment_Report_K2Node_ComponentBoundEvent_10_UpdateReportReason__DelegateSignature");
		
		UWBP_Sheik_ReportPlayerForm_C_BndEvt__Harassment_Report_K2Node_ComponentBoundEvent_10_UpdateReportReason__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.BndEvt__HateSpeech_Report_K2Node_ComponentBoundEvent_11_UpdateReportReason__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ReportPlayerForm_C::BndEvt__HateSpeech_Report_K2Node_ComponentBoundEvent_11_UpdateReportReason__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.BndEvt__HateSpeech_Report_K2Node_ComponentBoundEvent_11_UpdateReportReason__DelegateSignature");
		
		UWBP_Sheik_ReportPlayerForm_C_BndEvt__HateSpeech_Report_K2Node_ComponentBoundEvent_11_UpdateReportReason__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.BndEvt__OffensiveContent_Report_K2Node_ComponentBoundEvent_12_UpdateReportReason__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ReportPlayerForm_C::BndEvt__OffensiveContent_Report_K2Node_ComponentBoundEvent_12_UpdateReportReason__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.BndEvt__OffensiveContent_Report_K2Node_ComponentBoundEvent_12_UpdateReportReason__DelegateSignature");
		
		UWBP_Sheik_ReportPlayerForm_C_BndEvt__OffensiveContent_Report_K2Node_ComponentBoundEvent_12_UpdateReportReason__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.BndEvt__Privacyviolation_Report_K2Node_ComponentBoundEvent_13_UpdateReportReason__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ReportPlayerForm_C::BndEvt__Privacyviolation_Report_K2Node_ComponentBoundEvent_13_UpdateReportReason__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.BndEvt__Privacyviolation_Report_K2Node_ComponentBoundEvent_13_UpdateReportReason__DelegateSignature");
		
		UWBP_Sheik_ReportPlayerForm_C_BndEvt__Privacyviolation_Report_K2Node_ComponentBoundEvent_13_UpdateReportReason__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.ExecuteUbergraph_WBP_Sheik_ReportPlayerForm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ReportPlayerForm_C::ExecuteUbergraph_WBP_Sheik_ReportPlayerForm(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.ExecuteUbergraph_WBP_Sheik_ReportPlayerForm");
		
		UWBP_Sheik_ReportPlayerForm_C_ExecuteUbergraph_WBP_Sheik_ReportPlayerForm_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.ReportPlayerClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ReportPlayerForm_C::ReportPlayerClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.ReportPlayerClosed__DelegateSignature");
		
		UWBP_Sheik_ReportPlayerForm_C_ReportPlayerClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.ReportPlayerOpened__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ReportPlayerForm_C::ReportPlayerOpened__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.ReportPlayerOpened__DelegateSignature");
		
		UWBP_Sheik_ReportPlayerForm_C_ReportPlayerOpened__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.BackPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ReportPlayerForm_C::BackPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.BackPressed__DelegateSignature");
		
		UWBP_Sheik_ReportPlayerForm_C_BackPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_ReportPlayerForm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_ReportPlayerForm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C");
		return ptr;
	}

}


