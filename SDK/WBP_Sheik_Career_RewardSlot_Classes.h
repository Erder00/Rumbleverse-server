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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C
	 * Size -> 0x02CD (FullSize[0x0785] - InheritedSize[0x04B8])
	 */
	class UWBP_Sheik_Career_RewardSlot_C : public USheikWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    DisabledAnim;                                            // 0x04C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    SelectedAnim;                                            // 0x04C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FocusedAnim;                                             // 0x04D0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              CheckboxOutline;                                         // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              DisabledFrame;                                           // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              EquipCheckmark;                                          // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Equipped_NewOverlay;                                     // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              EquippedFrame;                                           // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LockedIcon;                                              // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          NewIcon;                                                 // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              RarityBg;                                                // 0x0510(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              RarityIcon;                                              // 0x0518(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              RewardImage;                                             // 0x0520(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      SeasonalTag;                                             // 0x0528(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCircularThrobber*                                   Spinner;                                                 // 0x0530(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Timer;                                                   // 0x0538(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FIGTitleCardBase                                    Reward;                                                  // 0x0540(0x00C0) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                Label;                                                   // 0x0600(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class UTexture2D*                                          Image;                                                   // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ButtonIndex;                                             // 0x0620(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    ButtonUserIndex;                                         // 0x0624(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsFocused;                                               // 0x0628(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsDisabled;                                              // 0x0629(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsDesignTime;                                            // 0x062A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsNewContent;                                            // 0x062B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EUISounds                                                  SelectSoundType;                                         // 0x062C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsStyleBudgetRestricted;                                 // 0x062D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VTSG[0x2];                                   // 0x062E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGTitleCardMedal                                   MedalReward;                                             // 0x0630(0x0120) Edit, BlueprintVisible, DisableEditOnInstance
		ESheikTitleCardDataType                                    RewardType;                                              // 0x0750(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsEquipped;                                              // 0x0751(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L5QL[0x2];                                   // 0x0752(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        LockedCheckboxColor;                                     // 0x0754(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FocusedCheckboxColor;                                    // 0x0764(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        DefaultCheckboxColor;                                    // 0x0774(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsUnlocked;                                              // 0x0784(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetSeasonalTag();
		void SetRarity();
		void SetStatusVisuals(bool IsNew, bool IsEquipped, bool IsLocked);
		void SetTimer(const struct FIGSeasonDefinition& IGSeasonDefinition);
		void GetRewardType(ESheikTitleCardDataType* RewardType);
		void GetRewardImage(ESheikTitleCardDataType RewardType, const struct FIGTitleCardMedal& MedalData, const struct FIGTitleCardBackground& BackgroundData, const struct FIGTitleCardBorder& BorderData);
		void GetMedalReward(struct FIGTitleCardBase* Reward);
		void SetNewContent(bool IsNew);
		void GetRewardName(class FText* OutNameText);
		void GetRewardId(class FName* WalletId);
		void SetEquippedStyling(bool Equipped);
		void GetReward(struct FIGTitleCardBase* RewardInfo);
		void SetRewardData(const struct FIGTitleCardBase& GenericReward, const struct FIGTitleCardMedal& MedalReward, const struct FIGTitleCardBackground& BackgroundReward, const struct FIGTitleCardBorder& BorderReward, bool IsUnlocked, const struct FIGSeasonDefinition& CurrentSeason);
		void SetRewardImage(class UObject* InBrush);
		void GetButtonIndex(int32_t* index);
		void SetDisabled(bool IsDisabled);
		void HandleSelect(int32_t UserIndex);
		void SetWidgetFocus(bool SkipAnimations, bool IsFocused);
		void ApplyContentOnPreConstruct();
		void PreConstruct(bool IsDesignTime);
		void ConstructOnlyOnce();
		void OnDisabled();
		void OnEnabled();
		void OnGainFocus(int32_t UserIndex);
		void OnLoseFocus(int32_t UserIndex);
		void OnSelected(int32_t UserIndex);
		void ExecuteUbergraph_WBP_Sheik_Career_RewardSlot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
