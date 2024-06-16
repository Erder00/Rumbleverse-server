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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C
	 * Size -> 0x0101 (FullSize[0x0591] - InheritedSize[0x0490])
	 */
	class UWBP_Sheik_ScreenMagazineEquip_C : public USheikMagazineEquipScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Anim_Idle;                                               // 0x0498(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_MagBuildOn;                                         // 0x04A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UHorizontalBox*                                      AttackTypes_ToEquip;                                     // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          BigName_Text;                                            // 0x04B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_InputBindingIcon_C*                       DropBTN_2;                                               // 0x04B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_InputBindingIcon_C*                       DropBTN_3;                                               // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        ItemDescriptionVerticalBox;                              // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MoveToEquipIcon;                                         // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              RarityBannerBG;                                          // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SpecialOnePromptText;                                    // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SpecialTwoPromptTextBlock;                               // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        StatusEffectIconsVerticalBox;                            // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TierCoin_ToEquip;                                        // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ViciousAttackIcon;                                       // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_HudSpecialMoveSlot_C*                     WBP_Sheik_HudSpecialMoveSlot_L;                          // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_HudSpecialMoveSlot_C*                     WBP_Sheik_HudSpecialMoveSlot_R;                          // 0x0510(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateColor                                         DefaultBGColor;                                          // 0x0518(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FMargin                                             EffectIconPadding;                                       // 0x0540(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FText                                                AssignText;                                              // 0x0550(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ReplaceText;                                             // 0x0568(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        DefaultSpecialBGColor;                                   // 0x0580(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsShowingNewMove;                                       // 0x0590(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UpdateSpecialMovePromtText();
		void SpawnEffectsIcons(class UVerticalBox** VerticalBox, TArray<EIGSpecialMoveEffect>* SpecialEffect);
		void OnSpecialTwoInput_cb(const struct FInputEventData& Input);
		void OnSpecialOneInput_cb(const struct FInputEventData& Input);
		void PopulatePropertiesBox(class UVerticalBox** Box, TArray<struct FS_Sheik_SpecialMoveProperty>* PropertyData);
		void ChoosePerk_cb(const struct FInputEventData& InputEvent);
		void UpdateSpecialToEquip();
		void CloseEquipScreen();
		void ConstructOnlyOnce();
		void ShowNewMoveToEquip(class UIGMoveMontage* MoveMontage, EMoveTier MoveTier);
		void OnGainFocus(int32_t UserIndex);
		void OnLoseFocus(int32_t UserIndex);
		void SubscribeToInputEvents();
		void ExecuteUbergraph_WBP_Sheik_ScreenMagazineEquip(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
