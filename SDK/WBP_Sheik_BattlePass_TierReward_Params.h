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
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.SequenceEvent__ENTRYPOINTWBP_Sheik_BattlePass_TierReward_1
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_SequenceEvent__ENTRYPOINTWBP_Sheik_BattlePass_TierReward_1_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.SetRarityIconTint
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_SetRarityIconTint_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.SetRewardImageTint
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_SetRewardImageTint_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.SetRewardState
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_SetRewardState_Params
	{
	public:
		bool                                                       BattlePassOwned;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FreeTier;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TierCompleted;                                           // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InProgressTier;                                          // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.CelebrationAnimationStarted
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_CelebrationAnimationStarted_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.SetBGTextures
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_SetBGTextures_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.SetFreeTag
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_SetFreeTag_Params
	{
	public:
		bool                                                       IsFree;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.Set Widget Focus
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_SetWidgetFocus_Params
	{
	public:
		bool                                                       SkipAnimations;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsFocused;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PNZV[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.LoadIcon
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_LoadIcon_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.GetRewardWalletAssetsInThisSet
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_GetRewardWalletAssetsInThisSet_Params
	{
	public:
		TArray<struct FIGWalletAssetInfo>                          RewardWalletAssetsInThisSet;                             // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.AddRewardWalletAssetToThisSet
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_AddRewardWalletAssetToThisSet_Params
	{
	public:
		struct FIGWalletAssetInfo                                  Reward;                                                  // 0x0000(0x00F0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       ReturnValue;                                             // 0x00F0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O3AM[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.SetDataFromWalletAsset
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_SetDataFromWalletAsset_Params
	{
	public:
		struct FIGWalletAssetInfo                                  WalletAssetInfo;                                         // 0x0000(0x00F0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Tier;                                                    // 0x00F0(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsFree;                                                  // 0x00F4(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsSetInsteadOfSingleReward;                              // 0x00F5(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.GetRewardsInThisSet
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_GetRewardsInThisSet_Params
	{
	public:
		TArray<struct FBattlePassReward>                           RewardsInThisSet;                                        // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.AddRewardToThisSet
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_AddRewardToThisSet_Params
	{
	public:
		struct FBattlePassReward                                   Reward;                                                  // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       ReturnValue;                                             // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RFFV[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.SkipCelebration
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_SkipCelebration_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.Celebration Animation Finished
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_CelebrationAnimationFinished_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.UnbindFromCelebration
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_UnbindFromCelebration_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.CelebrateRewardUnlocked
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_CelebrateRewardUnlocked_Params
	{
	public:
		bool                                                       BattlePassPurchased;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FreeTier;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.SetRarity
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_SetRarity_Params
	{
	public:
		EAccessoryItemRarity                                       InRarity;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XRIM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.ShowPreviewOnly
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_ShowPreviewOnly_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.SetIsInvisibleRewardForSpacing
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_SetIsInvisibleRewardForSpacing_Params
	{
	public:
		bool                                                       Invisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.Set Reward Data
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_SetRewardData_Params
	{
	public:
		struct FBattlePassReward                                   BattlePassReward;                                        // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Tier;                                                    // 0x0088(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsFree;                                                  // 0x008C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsSetInsteadOfSingleReward;                              // 0x008D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.CelebrationStarted
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_CelebrationStarted_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.PreConstruct
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.LoadIconFromAsset
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_LoadIconFromAsset_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.OnGainFocus
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_OnGainFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.OnLoseFocus
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_OnLoseFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.ExecuteUbergraph_WBP_Sheik_BattlePass_TierReward
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_ExecuteUbergraph_WBP_Sheik_BattlePass_TierReward_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.RewardCelebrationStarted__DelegateSignature
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_RewardCelebrationStarted__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.RewardCelebrationFinished__DelegateSignature
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_RewardCelebrationFinished__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C.OnRewardFocused__DelegateSignature
	 */
	struct UWBP_Sheik_BattlePass_TierReward_C_OnRewardFocused__DelegateSignature_Params
	{
	public:
		class UWBP_Sheik_BattlePass_TierReward_C*                  FocusedWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
