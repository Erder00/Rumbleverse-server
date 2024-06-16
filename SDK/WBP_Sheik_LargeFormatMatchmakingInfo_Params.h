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
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.ShowMatchmakingCanceledWidget
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_ShowMatchmakingCanceledWidget_Params
	{	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.ShowMatchmakingErrorWidget
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_ShowMatchmakingErrorWidget_Params
	{
	public:
		class FText                                                ErrorText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.SetTimeToWaitForMatchmakingAutoHide
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_SetTimeToWaitForMatchmakingAutoHide_Params
	{
	public:
		float                                                      InTime;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.ShowMatchFoundWidget
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_ShowMatchFoundWidget_Params
	{	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.BindToMatchmakingCallbackBroadcasts
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_BindToMatchmakingCallbackBroadcasts_Params
	{	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.BindToPartyManagerBroadcasts
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_BindToPartyManagerBroadcasts_Params
	{	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.HideMatchmakingWidget
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_HideMatchmakingWidget_Params
	{	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.ClearTimers
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_ClearTimers_Params
	{	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.UpdateMatchmakingWidget
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_UpdateMatchmakingWidget_Params
	{	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.GetCurrentTimeElapsed
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_GetCurrentTimeElapsed_Params
	{
	public:
		struct FTimespan                                           NewParam;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.ShowMatchmakingWidget
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_ShowMatchmakingWidget_Params
	{
	public:
		class FString                                              InMatchConfig;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.SetMatchConfig
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_SetMatchConfig_Params
	{
	public:
		class FString                                              MatchConfig;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.SetAsCanceled
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_SetAsCanceled_Params
	{	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.SetAsMatchFound
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_SetAsMatchFound_Params
	{	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.SetElapsedTime
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_SetElapsedTime_Params
	{
	public:
		struct FTimespan                                           Timespan;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.SetAsNormalMatchmaking
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_SetAsNormalMatchmaking_Params
	{	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.SetPromptVisibility
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_SetPromptVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.EventHandleOnMatchmakingStarted
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_EventHandleOnMatchmakingStarted_Params
	{
	public:
		class FString                                              MatchConfig;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.EventHandleOnPartyMatchmakingStarted
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_EventHandleOnPartyMatchmakingStarted_Params
	{
	public:
		class FString                                              ConfigurationName;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bIsLeader;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.EventHandleOnPartyMatchmakingStopped
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_EventHandleOnPartyMatchmakingStopped_Params
	{
	public:
		bool                                                       bIsLeader;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.EventHandleOnPartyMatchmakingFound
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_EventHandleOnPartyMatchmakingFound_Params
	{
	public:
		bool                                                       bIsLeader;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.EventHandleOnPartyMatchmakingError
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_EventHandleOnPartyMatchmakingError_Params
	{
	public:
		class FText                                                ErrorText;                                               // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bIsPartyLeader;                                          // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.HandleHoldActionCancelled
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_HandleHoldActionCancelled_Params
	{	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.HandleCancelActionConfirmed
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_HandleCancelActionConfirmed_Params
	{	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.OnMatchmakingComplete
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_OnMatchmakingComplete_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LEJ7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.OnMatchmakingCancelled
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_OnMatchmakingCancelled_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FVRQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.ExecuteUbergraph_WBP_Sheik_LargeFormatMatchmakingInfo
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_ExecuteUbergraph_WBP_Sheik_LargeFormatMatchmakingInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.HandleMatchmakingCanceled__DelegateSignature
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_HandleMatchmakingCanceled__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.HandleMatchmakingStarted__DelegateSignature
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_HandleMatchmakingStarted__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.HandleMatchError__DelegateSignature
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_HandleMatchError__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.HandleMatchFound__DelegateSignature
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_HandleMatchFound__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.CancelButtonHeld__DelegateSignature
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_CancelButtonHeld__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_LargeFormatMatchmakingInfo.WBP_Sheik_LargeFormatMatchmakingInfo_C.CancelButtonReleased__DelegateSignature
	 */
	struct UWBP_Sheik_LargeFormatMatchmakingInfo_C_CancelButtonReleased__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
