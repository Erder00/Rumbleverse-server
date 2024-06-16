#pragma once

/**
 * Name: Rumbleverse
 * Version: Latest
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.On Report Thru EOSComplete
	 */
	struct UWBP_Sheik_ReportPlayerForm_C_OnReportThruEOSComplete_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9P95[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.CloseReportConfirmationPrompt
	 */
	struct UWBP_Sheik_ReportPlayerForm_C_CloseReportConfirmationPrompt_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PCZA[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.ShowReportConfirmationPrompt
	 */
	struct UWBP_Sheik_ReportPlayerForm_C_ShowReportConfirmationPrompt_Params
	{	};

	/**
	 * Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.ClearFocusForReportReasons
	 */
	struct UWBP_Sheik_ReportPlayerForm_C_ClearFocusForReportReasons_Params
	{	};

	/**
	 * Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.InvalidReport
	 */
	struct UWBP_Sheik_ReportPlayerForm_C_InvalidReport_Params
	{
	public:
		struct FSheikError                                         Error;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		unsigned char                                              UnknownData_07OO[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.ReportSelected
	 */
	struct UWBP_Sheik_ReportPlayerForm_C_ReportSelected_Params
	{	};

	/**
	 * Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.ResetReport
	 */
	struct UWBP_Sheik_ReportPlayerForm_C_ResetReport_Params
	{	};

	/**
	 * Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.BackPressed_cb
	 */
	struct UWBP_Sheik_ReportPlayerForm_C_BackPressed_cb_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.ReportPressed_cb
	 */
	struct UWBP_Sheik_ReportPlayerForm_C_ReportPressed_cb_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.SetPlayerID
	 */
	struct UWBP_Sheik_ReportPlayerForm_C_SetPlayerID_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.SetPlayerNameToReport
	 */
	struct UWBP_Sheik_ReportPlayerForm_C_SetPlayerNameToReport_Params
	{
	public:
		class FString                                              ReportedPlayerName;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.SetPlayerIdToReport
	 */
	struct UWBP_Sheik_ReportPlayerForm_C_SetPlayerIdToReport_Params
	{
	public:
		struct FSheikPlayerAccount                                 ReportedPlayerId;                                        // 0x0000(0x02F0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.InitReportForm
	 */
	struct UWBP_Sheik_ReportPlayerForm_C_InitReportForm_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FSheikPlayerAccount                                 ReportedPlayerAccount;                                   // 0x0010(0x02F0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              ReportedPlayerName;                                      // 0x0300(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.GetNavigableWidgets
	 */
	struct UWBP_Sheik_ReportPlayerForm_C_GetNavigableWidgets_Params
	{
	public:
		TArray<class UIGUI_WidgetBase*>                            NavigableWidgets;                                        // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.Test_PrintTelemetryEventData
	 */
	struct UWBP_Sheik_ReportPlayerForm_C_Test_PrintTelemetryEventData_Params
	{
	public:
		class FString                                              TelemetryData;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.OnActivated
	 */
	struct UWBP_Sheik_ReportPlayerForm_C_OnActivated_Params
	{	};

	/**
	 * Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.OnDeactivated
	 */
	struct UWBP_Sheik_ReportPlayerForm_C_OnDeactivated_Params
	{	};

	/**
	 * Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.BndEvt__Cheating_Report_K2Node_ComponentBoundEvent_8_UpdateReportReason__DelegateSignature
	 */
	struct UWBP_Sheik_ReportPlayerForm_C_BndEvt__Cheating_Report_K2Node_ComponentBoundEvent_8_UpdateReportReason__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.BndEvt__Griefing_Report_K2Node_ComponentBoundEvent_9_UpdateReportReason__DelegateSignature
	 */
	struct UWBP_Sheik_ReportPlayerForm_C_BndEvt__Griefing_Report_K2Node_ComponentBoundEvent_9_UpdateReportReason__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.BndEvt__Harassment_Report_K2Node_ComponentBoundEvent_10_UpdateReportReason__DelegateSignature
	 */
	struct UWBP_Sheik_ReportPlayerForm_C_BndEvt__Harassment_Report_K2Node_ComponentBoundEvent_10_UpdateReportReason__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.BndEvt__HateSpeech_Report_K2Node_ComponentBoundEvent_11_UpdateReportReason__DelegateSignature
	 */
	struct UWBP_Sheik_ReportPlayerForm_C_BndEvt__HateSpeech_Report_K2Node_ComponentBoundEvent_11_UpdateReportReason__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.BndEvt__OffensiveContent_Report_K2Node_ComponentBoundEvent_12_UpdateReportReason__DelegateSignature
	 */
	struct UWBP_Sheik_ReportPlayerForm_C_BndEvt__OffensiveContent_Report_K2Node_ComponentBoundEvent_12_UpdateReportReason__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.BndEvt__Privacyviolation_Report_K2Node_ComponentBoundEvent_13_UpdateReportReason__DelegateSignature
	 */
	struct UWBP_Sheik_ReportPlayerForm_C_BndEvt__Privacyviolation_Report_K2Node_ComponentBoundEvent_13_UpdateReportReason__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.ExecuteUbergraph_WBP_Sheik_ReportPlayerForm
	 */
	struct UWBP_Sheik_ReportPlayerForm_C_ExecuteUbergraph_WBP_Sheik_ReportPlayerForm_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.ReportPlayerClosed__DelegateSignature
	 */
	struct UWBP_Sheik_ReportPlayerForm_C_ReportPlayerClosed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.ReportPlayerOpened__DelegateSignature
	 */
	struct UWBP_Sheik_ReportPlayerForm_C_ReportPlayerOpened__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C.BackPressed__DelegateSignature
	 */
	struct UWBP_Sheik_ReportPlayerForm_C_BackPressed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
