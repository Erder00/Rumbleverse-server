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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_BattlePass_TierReward.WBP_Sheik_BattlePass_TierReward_C
	 * Size -> 0x0279 (FullSize[0x0731] - InheritedSize[0x04B8])
	 */
	class UWBP_Sheik_BattlePass_TierReward_C : public USheikWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    IncompleteAnim;                                          // 0x04C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    CelebrateEarnedAnim;                                     // 0x04C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    InProgressAnim;                                          // 0x04D0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    PreviewAnim;                                             // 0x04D8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    CompletedAnim;                                           // 0x04E0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FocusedAnim;                                             // 0x04E8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              CheckboxOutline;                                         // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              EarnedBG;                                                // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              EarnedCheckmark;                                         // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              FocusedFrame;                                            // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              InProgressBG;                                            // 0x0510(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          InProgressNotice;                                        // 0x0518(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Image_C*                                  ItemImage;                                               // 0x0520(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LockedIcon;                                              // 0x0528(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_PromoTag_C*                               PromoTag;                                                // 0x0530(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              RarityBg;                                                // 0x0538(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              RarityIcon;                                              // 0x0540(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              UnearnedBG;                                              // 0x0548(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnRewardFocused;                                         // 0x0550(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    BelongsToTier;                                           // 0x0560(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X1TV[0x4];                                   // 0x0564(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             RewardCelebrationFinished;                               // 0x0568(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       DisplaySetInsteadOfItem;                                 // 0x0578(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L4BT[0x7];                                   // 0x0579(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBattlePassReward>                           RewardsInThisSet;                                        // 0x0580(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FIGWalletAssetInfo>                          RewardWalletAssetsInThisSet;                             // 0x0590(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsUsingWalletAssets;                                     // 0x05A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsFocused;                                               // 0x05A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TierCompleted;                                           // 0x05A2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EAccessoryItemRarity                                       RewardRarity;                                            // 0x05A3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SG2H[0x4];                                   // 0x05A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             RewardCelebrationStarted;                                // 0x05A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FBattlePassReward                                   Reward;                                                  // 0x05B8(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         _TRUE__;                                                 // 0x0640(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       BattlePassOwned;                                         // 0x0668(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       FreeTier;                                                // 0x0669(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       InProgressTier;                                          // 0x066A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NL7W[0x5];                                   // 0x066B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         CompleteTint;                                            // 0x0670(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         IncompleteRarityTint;                                    // 0x0698(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        DefaultCheckboxColor;                                    // 0x06C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        LockedCheckboxColor;                                     // 0x06D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSlateColor                                         IncompleteImageTint;                                     // 0x06E0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         InProgressImageTint;                                     // 0x0708(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsUnlocked;                                              // 0x0730(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SequenceEvent__ENTRYPOINTWBP_Sheik_BattlePass_TierReward_1();
		void SetRarityIconTint();
		void SetRewardImageTint();
		void SetRewardState(bool BattlePassOwned, bool FreeTier, bool TierCompleted, bool InProgressTier);
		void CelebrationAnimationStarted();
		void SetBGTextures();
		void SetFreeTag(bool IsFree);
		void SetWidgetFocus(bool SkipAnimations, bool IsFocused);
		void LoadIcon();
		void GetRewardWalletAssetsInThisSet(TArray<struct FIGWalletAssetInfo>* RewardWalletAssetsInThisSet);
		bool AddRewardWalletAssetToThisSet(const struct FIGWalletAssetInfo& Reward);
		void SetDataFromWalletAsset(const struct FIGWalletAssetInfo& WalletAssetInfo, int32_t Tier, bool IsFree, bool IsSetInsteadOfSingleReward);
		void GetRewardsInThisSet(TArray<struct FBattlePassReward>* RewardsInThisSet);
		bool AddRewardToThisSet(const struct FBattlePassReward& Reward);
		void SkipCelebration();
		void CelebrationAnimationFinished();
		void UnbindFromCelebration();
		void CelebrateRewardUnlocked(bool BattlePassPurchased, bool FreeTier);
		void SetRarity(EAccessoryItemRarity InRarity);
		void ShowPreviewOnly();
		void SetIsInvisibleRewardForSpacing(bool Invisible);
		void SetRewardData(const struct FBattlePassReward& BattlePassReward, int32_t Tier, bool IsFree, bool IsSetInsteadOfSingleReward);
		void CelebrationStarted();
		void PreConstruct(bool IsDesignTime);
		void LoadIconFromAsset();
		void OnGainFocus(int32_t UserIndex);
		void OnLoseFocus(int32_t UserIndex);
		void ConstructOnlyOnce();
		void ExecuteUbergraph_WBP_Sheik_BattlePass_TierReward(int32_t EntryPoint);
		void RewardCelebrationStarted__DelegateSignature();
		void RewardCelebrationFinished__DelegateSignature();
		void OnRewardFocused__DelegateSignature(class UWBP_Sheik_BattlePass_TierReward_C* FocusedWidget);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
