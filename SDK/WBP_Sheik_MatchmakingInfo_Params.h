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
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.ActivateCancelButton
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_ActivateCancelButton_Params
	{	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.DeactivateCancelButton
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_DeactivateCancelButton_Params
	{	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.ShowMatchmakingCanceledWidget
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_ShowMatchmakingCanceledWidget_Params
	{	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.ShowMatchmakingErrorWidget
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_ShowMatchmakingErrorWidget_Params
	{
	public:
		class FText                                                ErrorText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.SetTimeToWaitForMatchmakingAutoHide
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_SetTimeToWaitForMatchmakingAutoHide_Params
	{
	public:
		float                                                      InTime;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.ShowMatchFoundWidget
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_ShowMatchFoundWidget_Params
	{	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.BindToMatchmakingCallbackBroadcasts
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_BindToMatchmakingCallbackBroadcasts_Params
	{	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.BindToPartyManagerBroadcasts
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_BindToPartyManagerBroadcasts_Params
	{	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.HideMatchmakingWidget
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_HideMatchmakingWidget_Params
	{	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.ClearTimers
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_ClearTimers_Params
	{	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.UpdateMatchmakingWidget
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_UpdateMatchmakingWidget_Params
	{	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.GetCurrentTimeElapsed
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_GetCurrentTimeElapsed_Params
	{
	public:
		struct FTimespan                                           NewParam;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.ShowMatchmakingWidget
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_ShowMatchmakingWidget_Params
	{
	public:
		class FString                                              InMatchConfig;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.SetMatchConfig
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_SetMatchConfig_Params
	{
	public:
		class FString                                              MatchConfig;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.SetElapsedTime
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_SetElapsedTime_Params
	{
	public:
		struct FTimespan                                           Timespan;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.SetAsNormalMatchmaking
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_SetAsNormalMatchmaking_Params
	{	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.SetPromptVisibility
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_SetPromptVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.EventHandleOnMatchmakingStarted
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_EventHandleOnMatchmakingStarted_Params
	{
	public:
		class FString                                              MatchConfig;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.EventHandleOnPartyMatchmakingStarted
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_EventHandleOnPartyMatchmakingStarted_Params
	{
	public:
		class FString                                              ConfigurationName;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bIsLeader;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.EventHandleOnPartyMatchmakingStopped
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_EventHandleOnPartyMatchmakingStopped_Params
	{
	public:
		bool                                                       bIsLeader;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.EventHandleOnPartyMatchmakingFound
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_EventHandleOnPartyMatchmakingFound_Params
	{
	public:
		bool                                                       bIsLeader;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.EventHandleOnPartyMatchmakingError
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_EventHandleOnPartyMatchmakingError_Params
	{
	public:
		class FText                                                ErrorText;                                               // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bIsPartyLeader;                                          // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.BndEvt__Cancel_ButtonPrompt_K2Node_ComponentBoundEvent_0_OnActionConfirmed__DelegateSignature
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_BndEvt__Cancel_ButtonPrompt_K2Node_ComponentBoundEvent_0_OnActionConfirmed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.OnMatchmakingComplete
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_OnMatchmakingComplete_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_41QK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.OnMatchmakingCancelled
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_OnMatchmakingCancelled_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AREW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.ExecuteUbergraph_WBP_Sheik_MatchmakingInfo
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_ExecuteUbergraph_WBP_Sheik_MatchmakingInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CLG0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.HandleMatchmakingCanceled__DelegateSignature
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_HandleMatchmakingCanceled__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.HandleMatchmakingStarted__DelegateSignature
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_HandleMatchmakingStarted__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.HandleMatchError__DelegateSignature
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_HandleMatchError__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.HandleMatchFound__DelegateSignature
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_HandleMatchFound__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.CancelButtonHeld__DelegateSignature
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_CancelButtonHeld__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C.CancelButtonReleased__DelegateSignature
	 */
	struct UWBP_Sheik_MatchmakingInfo_C_CancelButtonReleased__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
