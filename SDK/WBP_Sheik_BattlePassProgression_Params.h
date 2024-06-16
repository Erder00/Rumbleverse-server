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
	 * Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.IsCurrentPassCompleted
	 */
	struct UWBP_Sheik_BattlePassProgression_C_IsCurrentPassCompleted_Params
	{
	public:
		bool                                                       IsCompleted;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.UpdatePassOwnership
	 */
	struct UWBP_Sheik_BattlePassProgression_C_UpdatePassOwnership_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.ProgressionSystem
	 */
	struct UWBP_Sheik_BattlePassProgression_C_ProgressionSystem_Params
	{
	public:
		class USheikProgressionSystem*                             ProgressionSystem;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.StoreSystem
	 */
	struct UWBP_Sheik_BattlePassProgression_C_StoreSystem_Params
	{
	public:
		class USheikStoreSystem*                                   StoreSystem;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.FinishLevelUpUpdate
	 */
	struct UWBP_Sheik_BattlePassProgression_C_FinishLevelUpUpdate_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.IsLevelUpdateInProgress
	 */
	struct UWBP_Sheik_BattlePassProgression_C_IsLevelUpdateInProgress_Params
	{
	public:
		bool                                                       Out;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.UpdateFanCount
	 */
	struct UWBP_Sheik_BattlePassProgression_C_UpdateFanCount_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.OnBattlePassLevelUpdateComplete
	 */
	struct UWBP_Sheik_BattlePassProgression_C_OnBattlePassLevelUpdateComplete_Params
	{
	public:
		int32_t                                                    LeftoverFans;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Immediate;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QG67[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.FinishCurrentFanUpdate
	 */
	struct UWBP_Sheik_BattlePassProgression_C_FinishCurrentFanUpdate_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.IsFanUpdateInProgress
	 */
	struct UWBP_Sheik_BattlePassProgression_C_IsFanUpdateInProgress_Params
	{
	public:
		bool                                                       Out;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.UpdateCurrentLevel
	 */
	struct UWBP_Sheik_BattlePassProgression_C_UpdateCurrentLevel_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.SetNextTierReward
	 */
	struct UWBP_Sheik_BattlePassProgression_C_SetNextTierReward_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.UpdateBattlePassCompleteVisuals
	 */
	struct UWBP_Sheik_BattlePassProgression_C_UpdateBattlePassCompleteVisuals_Params
	{
	public:
		struct FBattlePassTier                                     LastBattlePassTier;                                      // 0x0000(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.SetLockedRewardIconVisibility
	 */
	struct UWBP_Sheik_BattlePassProgression_C_SetLockedRewardIconVisibility_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.OnXPBoosterDataChangeOccurred_cb
	 */
	struct UWBP_Sheik_BattlePassProgression_C_OnXPBoosterDataChangeOccurred_cb_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.OnPurchaseBattlePassComplete_cb
	 */
	struct UWBP_Sheik_BattlePassProgression_C_OnPurchaseBattlePassComplete_cb_Params
	{
	public:
		bool                                                       bCozmoPurchaseSuccessful;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H2YB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         CozmoPurchaseError;                                      // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       bTierRewardsRedeemedSuccessful;                          // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P7Y5[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         RedeemError;                                             // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		TArray<struct FBattlePassTier>                             TiersRewarded;                                           // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.UpdateBattlePassProgressBar
	 */
	struct UWBP_Sheik_BattlePassProgression_C_UpdateBattlePassProgressBar_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.SetData
	 */
	struct UWBP_Sheik_BattlePassProgression_C_SetData_Params
	{
	public:
		struct FBattlePassTier                                     Tier;                                                    // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.CheckBattlePassIsActive
	 */
	struct UWBP_Sheik_BattlePassProgression_C_CheckBattlePassIsActive_Params
	{
	public:
		bool                                                       bIsActive;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5TWG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.Initialize UI
	 */
	struct UWBP_Sheik_BattlePassProgression_C_InitializeUI_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.LoadIcon
	 */
	struct UWBP_Sheik_BattlePassProgression_C_LoadIcon_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.OnBattlePassFansIncreasedOnlyOccured
	 */
	struct UWBP_Sheik_BattlePassProgression_C_OnBattlePassFansIncreasedOnlyOccured_Params
	{
	public:
		struct FBattlePassTier                                     CurrentBattlePassTier;                                   // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    OldFanCount;                                             // 0x0048(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewFansAdded;                                            // 0x004C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EReasonFansAwarded                                         ReasonFansAwarded;                                       // 0x0050(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bShouldShowFanAnnouncementDuringMatch;                   // 0x0051(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_BattlePassProgression_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.OnLevelUpOccurred
	 */
	struct UWBP_Sheik_BattlePassProgression_C_OnLevelUpOccurred_Params
	{
	public:
		TArray<struct FBattlePassTier>                             OldBattlePassTiers;                                      // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FBattlePassTier                                     CurrentTier;                                             // 0x0010(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FBattlePassTier                                     NextTier;                                                // 0x0058(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    OldFanCount;                                             // 0x00A0(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TotalNewFans;                                            // 0x00A4(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    LeftoverFansForCurrentTier;                              // 0x00A8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EReasonFansAwarded                                         ReasonFansAwarded;                                       // 0x00AC(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bShouldShowFanAnnouncementDuringMatch;                   // 0x00AD(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.OnBattlePassTiersPurchased
	 */
	struct UWBP_Sheik_BattlePassProgression_C_OnBattlePassTiersPurchased_Params
	{
	public:
		bool                                                       bCozmoPurchaseSuccessful;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WVZP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         CozmoPurchaseError;                                      // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       bTierRewardsRedeemedSuccessful;                          // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UGCG[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         RedeemError;                                             // 0x0014(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		TArray<struct FBattlePassTier>                             TiersRewarded;                                           // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.OnInitialized
	 */
	struct UWBP_Sheik_BattlePassProgression_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.OnEntitlementsOwnedRefreshed
	 */
	struct UWBP_Sheik_BattlePassProgression_C_OnEntitlementsOwnedRefreshed_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.OnImageLoad
	 */
	struct UWBP_Sheik_BattlePassProgression_C_OnImageLoad_Params
	{	};

	/**
	 * Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.ExecuteUbergraph_WBP_Sheik_BattlePassProgression
	 */
	struct UWBP_Sheik_BattlePassProgression_C_ExecuteUbergraph_WBP_Sheik_BattlePassProgression_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
