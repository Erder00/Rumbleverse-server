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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C
	 * Size -> 0x01C9 (FullSize[0x05E1] - InheritedSize[0x0418])
	 */
	class UWBP_Sheik_BattlePassProgression_C : public UIGUI_WidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    MaxBattlePass;                                           // 0x0420(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    HasBattlePass;                                           // 0x0428(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWBP_IGUI_ProgressBar_C*                             BattlePassProgressBar;                                   // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ComingSoonText;                                          // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            InfoOverlay;                                             // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Image_C*                                  ItemReward;                                              // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LevelText;                                               // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            LoadingOverlay;                                          // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Lock;                                                    // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          NumericalProgress;                                       // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Preloader_Image;                                         // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              XPBoostIcon;                                             // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    LevelDisplay;                                            // 0x0480(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P9HU[0x4];                                   // 0x0484(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        FanTrackerTimer;                                         // 0x0488(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FansNeededForNextLevel;                                  // 0x0490(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Time;                                                    // 0x0494(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeElapsed;                                             // 0x0498(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FansToAdd;                                               // 0x049C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InitializeUI_IsComplete;                                 // 0x04A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EQN5[0x7];                                   // 0x04A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBattlePassTier                                     CurrentBattlePassTier;                                   // 0x04A8(0x0048) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    CurrentBattlePassXP;                                     // 0x04F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OXFJ[0x4];                                   // 0x04F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBattlePassReward                                   Reward;                                                  // 0x04F8(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsFreeTier;                                              // 0x0580(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HMS2[0x7];                                   // 0x0581(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBattlePassTier                                     NextBattlePassTier;                                      // 0x0588(0x0048) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTimerHandle                                        LevelUpFanTrackerTimer;                                  // 0x05D0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LevelUpLeftoverFans;                                     // 0x05D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FinalBattlePassTier;                                     // 0x05DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BattlePassOwned;                                         // 0x05E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void IsCurrentPassCompleted(bool* IsCompleted);
		void UpdatePassOwnership();
		void ProgressionSystem(class USheikProgressionSystem** ProgressionSystem);
		void StoreSystem(class USheikStoreSystem** StoreSystem);
		void FinishLevelUpUpdate();
		void IsLevelUpdateInProgress(bool* Out);
		void UpdateFanCount();
		void OnBattlePassLevelUpdateComplete(int32_t LeftoverFans, bool Immediate);
		void FinishCurrentFanUpdate();
		void IsFanUpdateInProgress(bool* Out);
		void UpdateCurrentLevel();
		void SetNextTierReward();
		void UpdateBattlePassCompleteVisuals(const struct FBattlePassTier& LastBattlePassTier);
		void SetLockedRewardIconVisibility();
		void OnXPBoosterDataChangeOccurred_cb();
		void OnPurchaseBattlePassComplete_cb(bool bCozmoPurchaseSuccessful, struct FSheikError* CozmoPurchaseError, bool bTierRewardsRedeemedSuccessful, struct FSheikError* RedeemError, TArray<struct FBattlePassTier> TiersRewarded);
		void UpdateBattlePassProgressBar();
		void SetData(const struct FBattlePassTier& Tier);
		void CheckBattlePassIsActive(bool* bIsActive);
		void InitializeUI();
		void LoadIcon();
		void OnBattlePassFansIncreasedOnlyOccured(const struct FBattlePassTier& CurrentBattlePassTier, int32_t OldFanCount, int32_t NewFansAdded, EReasonFansAwarded ReasonFansAwarded, bool bShouldShowFanAnnouncementDuringMatch);
		void ConstructOnlyOnce();
		void OnLevelUpOccurred(TArray<struct FBattlePassTier> OldBattlePassTiers, const struct FBattlePassTier& CurrentTier, const struct FBattlePassTier& NextTier, int32_t OldFanCount, int32_t TotalNewFans, int32_t LeftoverFansForCurrentTier, EReasonFansAwarded ReasonFansAwarded, bool bShouldShowFanAnnouncementDuringMatch);
		void OnBattlePassTiersPurchased(bool bCozmoPurchaseSuccessful, const struct FSheikError& CozmoPurchaseError, bool bTierRewardsRedeemedSuccessful, const struct FSheikError& RedeemError, TArray<struct FBattlePassTier> TiersRewarded);
		void OnInitialized();
		void OnEntitlementsOwnedRefreshed();
		void OnImageLoad();
		void ExecuteUbergraph_WBP_Sheik_BattlePassProgression(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
