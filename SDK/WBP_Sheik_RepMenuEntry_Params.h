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
	 * Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.SetUnlockTimer
	 */
	struct UWBP_Sheik_RepMenuEntry_C_SetUnlockTimer_Params
	{	};

	/**
	 * Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.ShouldHideRerollClaim
	 */
	struct UWBP_Sheik_RepMenuEntry_C_ShouldHideRerollClaim_Params
	{
	public:
		bool                                                       HideClaimReroll;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.ShouldAllowClaimOrReroll
	 */
	struct UWBP_Sheik_RepMenuEntry_C_ShouldAllowClaimOrReroll_Params
	{
	public:
		bool                                                       bIsClaimOrRerollAllowed;                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.Set Claim or Reroll Disabled
	 */
	struct UWBP_Sheik_RepMenuEntry_C_SetClaimorRerollDisabled_Params
	{
	public:
		bool                                                       IsDisabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.SetProgressBar
	 */
	struct UWBP_Sheik_RepMenuEntry_C_SetProgressBar_Params
	{
	public:
		int32_t                                                    Progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Target;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.SetLockedRep
	 */
	struct UWBP_Sheik_RepMenuEntry_C_SetLockedRep_Params
	{	};

	/**
	 * Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.SetWidgetFocus
	 */
	struct UWBP_Sheik_RepMenuEntry_C_SetWidgetFocus_Params
	{
	public:
		bool                                                       IsFocused;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SkipAnimation;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.SetButton
	 */
	struct UWBP_Sheik_RepMenuEntry_C_SetButton_Params
	{	};

	/**
	 * Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.GetButton
	 */
	struct UWBP_Sheik_RepMenuEntry_C_GetButton_Params
	{
	public:
		class UWBP_Sheik_ClaimReRoll_Button_C*                     ClaimOrRerollButton;                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.SetRepText
	 */
	struct UWBP_Sheik_RepMenuEntry_C_SetRepText_Params
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Description;                                             // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.SetProgressText
	 */
	struct UWBP_Sheik_RepMenuEntry_C_SetProgressText_Params
	{
	public:
		int32_t                                                    Progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Target;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.SetButtonText
	 */
	struct UWBP_Sheik_RepMenuEntry_C_SetButtonText_Params
	{
	public:
		bool                                                       LockedRep;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SPQB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.SetRewardText
	 */
	struct UWBP_Sheik_RepMenuEntry_C_SetRewardText_Params
	{
	public:
		TArray<struct FRepReward>                                  RewardStructArray;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.CreateRepLine
	 */
	struct UWBP_Sheik_RepMenuEntry_C_CreateRepLine_Params
	{
	public:
		struct FRepUIData                                          RepUIItem;                                               // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_RepMenuEntry_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.OnGainFocus
	 */
	struct UWBP_Sheik_RepMenuEntry_C_OnGainFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.OnLoseFocus
	 */
	struct UWBP_Sheik_RepMenuEntry_C_OnLoseFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.On Action Confirmed
	 */
	struct UWBP_Sheik_RepMenuEntry_C_OnActionConfirmed_Params
	{	};

	/**
	 * Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.Confirm Reroll
	 */
	struct UWBP_Sheik_RepMenuEntry_C_ConfirmReroll_Params
	{	};

	/**
	 * Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.Cancel Reroll
	 */
	struct UWBP_Sheik_RepMenuEntry_C_CancelReroll_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.On Confirmed
	 */
	struct UWBP_Sheik_RepMenuEntry_C_OnConfirmed_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.ExecuteUbergraph_WBP_Sheik_RepMenuEntry
	 */
	struct UWBP_Sheik_RepMenuEntry_C_ExecuteUbergraph_WBP_Sheik_RepMenuEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.RefreshAllButtonsOnRerollClick__DelegateSignature
	 */
	struct UWBP_Sheik_RepMenuEntry_C_RefreshAllButtonsOnRerollClick__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_RepMenuEntry.WBP_Sheik_RepMenuEntry_C.RemoveThisRepFromUI__DelegateSignature
	 */
	struct UWBP_Sheik_RepMenuEntry_C_RemoveThisRepFromUI__DelegateSignature_Params
	{
	public:
		class UWBP_Sheik_RepMenuEntry_C*                           This;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
