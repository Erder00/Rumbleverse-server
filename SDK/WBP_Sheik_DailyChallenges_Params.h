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
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.GetLocalPlayerRepSystem
	 */
	struct UWBP_Sheik_DailyChallenges_C_GetLocalPlayerRepSystem_Params
	{
	public:
		class USheikRepSystem*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.FilterWeeklyReps
	 */
	struct UWBP_Sheik_DailyChallenges_C_FilterWeeklyReps_Params
	{
	public:
		TArray<struct FRepUIData>                                  AllReps;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FRepUIData>                                  Out;                                                     // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.RefreshRepsLoaded
	 */
	struct UWBP_Sheik_DailyChallenges_C_RefreshRepsLoaded_Params
	{
	public:
		bool                                                       Successful;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.StartLoading
	 */
	struct UWBP_Sheik_DailyChallenges_C_StartLoading_Params
	{	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.GetFirstDailyChallenge
	 */
	struct UWBP_Sheik_DailyChallenges_C_GetFirstDailyChallenge_Params
	{
	public:
		class UIGUI_WidgetBase*                                    FirstChallenge;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.FillOutRepListWithEmptyEntries
	 */
	struct UWBP_Sheik_DailyChallenges_C_FillOutRepListWithEmptyEntries_Params
	{
	public:
		int32_t                                                    EmptyEntryCount;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StartingIndex;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.PopulateEmptryRepList
	 */
	struct UWBP_Sheik_DailyChallenges_C_PopulateEmptryRepList_Params
	{	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.RemoveEmptyReps
	 */
	struct UWBP_Sheik_DailyChallenges_C_RemoveEmptyReps_Params
	{	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.PrintCurrentReps
	 */
	struct UWBP_Sheik_DailyChallenges_C_PrintCurrentReps_Params
	{	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.IsRepAlreadyInList
	 */
	struct UWBP_Sheik_DailyChallenges_C_IsRepAlreadyInList_Params
	{
	public:
		class FName                                                RepName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWBP_Sheik_RepMenuEntry_C*                           Out;                                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.HideRerollForFirstTimerReps
	 */
	struct UWBP_Sheik_DailyChallenges_C_HideRerollForFirstTimerReps_Params
	{	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.HasRepEntries
	 */
	struct UWBP_Sheik_DailyChallenges_C_HasRepEntries_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.GetCurrentReps
	 */
	struct UWBP_Sheik_DailyChallenges_C_GetCurrentReps_Params
	{
	public:
		TArray<struct FRepUIData>                                  OutReps;                                                 // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.ToggleClaimRerollOptions
	 */
	struct UWBP_Sheik_DailyChallenges_C_ToggleClaimRerollOptions_Params
	{
	public:
		bool                                                       IsHidden;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.SetAccrualTextInfo
	 */
	struct UWBP_Sheik_DailyChallenges_C_SetAccrualTextInfo_Params
	{	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.DisplayEmptyRepEntry
	 */
	struct UWBP_Sheik_DailyChallenges_C_DisplayEmptyRepEntry_Params
	{	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.RefreshButtonTextAndVisibility
	 */
	struct UWBP_Sheik_DailyChallenges_C_RefreshButtonTextAndVisibility_Params
	{	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.CheckForAccrualAllowanceUpdates
	 */
	struct UWBP_Sheik_DailyChallenges_C_CheckForAccrualAllowanceUpdates_Params
	{	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.HandleOnRefreshAllButtonsOnRerollClick
	 */
	struct UWBP_Sheik_DailyChallenges_C_HandleOnRefreshAllButtonsOnRerollClick_Params
	{	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.SetQueuedRepsText
	 */
	struct UWBP_Sheik_DailyChallenges_C_SetQueuedRepsText_Params
	{	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.SetTimeTillNextRerollText
	 */
	struct UWBP_Sheik_DailyChallenges_C_SetTimeTillNextRerollText_Params
	{	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.SetRerollText
	 */
	struct UWBP_Sheik_DailyChallenges_C_SetRerollText_Params
	{	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.HandleOnNewRepAcquired_cb
	 */
	struct UWBP_Sheik_DailyChallenges_C_HandleOnNewRepAcquired_cb_Params
	{
	public:
		struct FRepUIData                                          OutNewRep;                                               // 0x0000(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.OnRemoveThisRepFromUI_cb
	 */
	struct UWBP_Sheik_DailyChallenges_C_OnRemoveThisRepFromUI_cb_Params
	{
	public:
		class UWBP_Sheik_RepMenuEntry_C*                           This;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.SetReps
	 */
	struct UWBP_Sheik_DailyChallenges_C_SetReps_Params
	{	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_DailyChallenges_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.ToggleDebugShowRerollTimerRealTime
	 */
	struct UWBP_Sheik_DailyChallenges_C_ToggleDebugShowRerollTimerRealTime_Params
	{
	public:
		class FString                                              Argument1;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Argument2;                                               // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Argument3;                                               // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Argument4;                                               // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.BeginUpdateChecks
	 */
	struct UWBP_Sheik_DailyChallenges_C_BeginUpdateChecks_Params
	{	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.StopUpdateChecks
	 */
	struct UWBP_Sheik_DailyChallenges_C_StopUpdateChecks_Params
	{	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.ExecuteUbergraph_WBP_Sheik_DailyChallenges
	 */
	struct UWBP_Sheik_DailyChallenges_C_ExecuteUbergraph_WBP_Sheik_DailyChallenges_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C.NewChallengeAdded__DelegateSignature
	 */
	struct UWBP_Sheik_DailyChallenges_C_NewChallengeAdded__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
