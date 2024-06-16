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
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.SequenceEvent__ENTRYPOINTWBP_Sheik_BattlePass_Tier_3
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_SequenceEvent__ENTRYPOINTWBP_Sheik_BattlePass_Tier_3_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.SequenceEvent__ENTRYPOINTWBP_Sheik_BattlePass_Tier_2
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_SequenceEvent__ENTRYPOINTWBP_Sheik_BattlePass_Tier_2_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.SequenceEvent__ENTRYPOINTWBP_Sheik_BattlePass_Tier_1
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_SequenceEvent__ENTRYPOINTWBP_Sheik_BattlePass_Tier_1_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.SetOnlyRewardInProgress
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_SetOnlyRewardInProgress_Params
	{
	public:
		bool                                                       BattlePassOwned;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InProgressTier;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QANJ[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.RefreshStyling
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_RefreshStyling_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.SetBarFocused
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_SetBarFocused_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.GetNavigationTargetTierReward
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_GetNavigationTargetTierReward_Params
	{
	public:
		bool                                                       FromLeft;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3VBJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWBP_Sheik_BattlePass_TierReward_C*                  TierReward;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.HandleOnRewardFocused
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_HandleOnRewardFocused_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.SetTierCompletedStyling
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_SetTierCompletedStyling_Params
	{
	public:
		bool                                                       IsCompleted;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.SetBarInProgressStyling
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_SetBarInProgressStyling_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.PlayMeterFillSound
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_PlayMeterFillSound_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.AddWalletAssetRewardToTier
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_AddWalletAssetRewardToTier_Params
	{
	public:
		struct FIGWalletAssetInfo                                  WalletAssetReward;                                       // 0x0000(0x00F0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.AddAdditionalWalletAssetData
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_AddAdditionalWalletAssetData_Params
	{
	public:
		TArray<struct FIGWalletAssetInfo>                          WalletAssetRewards;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class UWBP_Sheik_BattlePass_TierReward_C*>          Rewards;                                                 // 0x0010(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.GetNumRewardsInSet
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_GetNumRewardsInSet_Params
	{
	public:
		int32_t                                                    RewardsCount;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.ShouldAddReward
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_ShouldAddReward_Params
	{
	public:
		bool                                                       LookForSets;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AccessoryInSet;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8JMF[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              SetName;                                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.PlayUISound
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_PlayUISound_Params
	{
	public:
		EUISounds                                                  SoundType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.Progress Animation Finished
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_ProgressAnimationFinished_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.Animate Progress No Reward Celebration
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_AnimateProgressNoRewardCelebration_Params
	{
	public:
		int32_t                                                    PreviousFanCount;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewFanCount;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.SkipCelebration
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_SkipCelebration_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.CelebrationAnimationFinished
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_CelebrationAnimationFinished_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.PlayNextRewardCelebration
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_PlayNextRewardCelebration_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.CelebrateTierUnlocked
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_CelebrateTierUnlocked_Params
	{
	public:
		bool                                                       IsCurrentTier;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OEN6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TierXp;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.NavigateTo
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_NavigateTo_Params
	{
	public:
		bool                                                       FromRight;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_15SA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.UpdateTierProgress
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_UpdateTierProgress_Params
	{
	public:
		int32_t                                                    TierXp;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsCurrentTier;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       BattlePassOwned;                                         // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TierCompleted;                                           // 0x0006(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MQ6A[0x1];                                   // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.AddRewardToTier
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_AddRewardToTier_Params
	{
	public:
		struct FBattlePassReward                                   Reward;                                                  // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.SetData
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_SetData_Params
	{
	public:
		struct FBattlePassTier                                     Tier;                                                    // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<class UWBP_Sheik_BattlePass_TierReward_C*>          OutRewards;                                              // 0x0048(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.StartRewardCelebration
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_StartRewardCelebration_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.StartNextTierCelebration
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_StartNextTierCelebration_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.PreConstruct
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.CelebrateTierUnlockedWithDelay
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_CelebrateTierUnlockedWithDelay_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsCurrentTier;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VJGG[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TierXp;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.ExecuteUbergraph_WBP_Sheik_BattlePass_Tier
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_ExecuteUbergraph_WBP_Sheik_BattlePass_Tier_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.BeginNextTierCelebration__DelegateSignature
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_BeginNextTierCelebration__DelegateSignature_Params
	{
	public:
		int32_t                                                    NextTierID;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.OnRewardFocused__DelegateSignature
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_OnRewardFocused__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    FocusedReward;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C.TierCelebrationFinished__DelegateSignature
	 */
	struct UWBP_Sheik_BattlePass_Tier_C_TierCelebrationFinished__DelegateSignature_Params
	{
	public:
		int32_t                                                    NextTierID;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
