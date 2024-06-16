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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_BattlePass_Tier.WBP_Sheik_BattlePass_Tier_C
	 * Size -> 0x0254 (FullSize[0x070C] - InheritedSize[0x04B8])
	 */
	class UWBP_Sheik_BattlePass_Tier_C : public USheikWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FillBar_InProgress;                                      // 0x04C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FillBar_Celebrate;                                       // 0x04C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              FilledProgressBar;                                       // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LevelText;                                               // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Overlay_4;                                               // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             Rectangle_TierSlider;                                    // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      RewardsHorizontalBox;                                    // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             Star_TierSlider;                                         // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            StarAnimOverlay;                                         // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        TierProgressBar;                                         // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FBattlePassTier                                     Tier;                                                    // 0x0510(0x0048) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    CurrentRewardIndex;                                      // 0x0558(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BattlePassPurchased;                                     // 0x055C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FCUA[0x3];                                   // 0x055D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             TierCelebrationFinished;                                 // 0x0560(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class UWBP_Sheik_BattlePass_TierReward_C*>          Rewards;                                                 // 0x0570(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		float                                                      PauseTime;                                               // 0x0580(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CurrentTier;                                             // 0x0584(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EUISounds                                                  BattlePassMeterFillSound;                                // 0x0585(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EUISounds                                                  BattlePassRewardSound;                                   // 0x0586(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EUISounds                                                  BattlePassTierUnlockSound;                               // 0x0587(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FString, class UWBP_Sheik_BattlePass_TierReward_C*> AccessorySetsInTier;                                     // 0x0588(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       MuteSounds;                                              // 0x05D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VJYJ[0x7];                                   // 0x05D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRewardFocused;                                         // 0x05E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             BeginNextTierCelebration;                                // 0x05F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class FName>                                        AdditionalWalletAssetIDs;                                // 0x0600(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         InProgressTextColor;                                     // 0x0610(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         DefaultTextColor;                                        // 0x0638(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         LockedTextColor;                                         // 0x0660(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         CompletedTextColor;                                      // 0x0688(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         FocusedTextColor;                                        // 0x06B0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        LockedTextOutlineColor;                                  // 0x06D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsComplete;                                              // 0x06E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       BattlePassOwned;                                         // 0x06E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CJV4[0x2];                                   // 0x06EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        FocusedBarColor;                                         // 0x06EC(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        CompletedBarColor;                                       // 0x06FC(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SequenceEvent__ENTRYPOINTWBP_Sheik_BattlePass_Tier_3();
		void SequenceEvent__ENTRYPOINTWBP_Sheik_BattlePass_Tier_2();
		void SequenceEvent__ENTRYPOINTWBP_Sheik_BattlePass_Tier_1();
		void SetOnlyRewardInProgress(bool BattlePassOwned, bool InProgressTier);
		void RefreshStyling();
		void SetBarFocused();
		void GetNavigationTargetTierReward(bool FromLeft, class UWBP_Sheik_BattlePass_TierReward_C** TierReward);
		void HandleOnRewardFocused(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void SetTierCompletedStyling(bool IsCompleted);
		void SetBarInProgressStyling();
		void PlayMeterFillSound();
		void AddWalletAssetRewardToTier(const struct FIGWalletAssetInfo& WalletAssetReward);
		void AddAdditionalWalletAssetData(TArray<struct FIGWalletAssetInfo>* WalletAssetRewards, TArray<class UWBP_Sheik_BattlePass_TierReward_C*>* Rewards);
		void GetNumRewardsInSet(int32_t* RewardsCount);
		bool ShouldAddReward(bool LookForSets, bool AccessoryInSet, const class FString& SetName);
		void PlayUISound(EUISounds SoundType);
		void ProgressAnimationFinished();
		void AnimateProgressNoRewardCelebration(int32_t PreviousFanCount, int32_t NewFanCount);
		void SkipCelebration();
		void CelebrationAnimationFinished();
		void PlayNextRewardCelebration();
		void CelebrateTierUnlocked(bool IsCurrentTier, int32_t TierXp);
		void NavigateTo(bool FromRight);
		void UpdateTierProgress(int32_t TierXp, bool IsCurrentTier, bool BattlePassOwned, bool TierCompleted);
		void AddRewardToTier(const struct FBattlePassReward& Reward);
		void SetData(const struct FBattlePassTier& Tier, TArray<class UWBP_Sheik_BattlePass_TierReward_C*>* OutRewards);
		void StartRewardCelebration();
		void StartNextTierCelebration();
		void PreConstruct(bool IsDesignTime);
		void CelebrateTierUnlockedWithDelay(float Delay, bool IsCurrentTier, int32_t TierXp);
		void ExecuteUbergraph_WBP_Sheik_BattlePass_Tier(int32_t EntryPoint);
		void BeginNextTierCelebration__DelegateSignature(int32_t NextTierID);
		void OnRewardFocused__DelegateSignature(class UIGUI_WidgetBase* FocusedReward);
		void TierCelebrationFinished__DelegateSignature(int32_t NextTierID);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
