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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_Settings_Accessibility.WBP_Sheik_Settings_Accessibility_C
	 * Size -> 0x0114 (FullSize[0x05D4] - InheritedSize[0x04C0])
	 */
	class UWBP_Sheik_Settings_Accessibility_C : public UWBP_Sheik_Settings_TabPage_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_Sheik_MultiToggle_C*                            AutoChopAttackCombo;                                     // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            AutoFinishWeaponCombo;                                   // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            AutoReleaseChargedChop;                                  // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            AutoReleaseChargedSpecialAttack;                         // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            AutoReleaseChargedViciousAttack;                         // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            AutoReleaseChargedWeaponAttack;                          // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            Block;                                                   // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            CameraClimbingFollowToggle;                              // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            CameraCombatFollowToggle;                                // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            CameraTraversalFollowToggle;                             // 0x0510(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            ChopAttackCharge;                                        // 0x0518(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            ColorblindModeToggle;                                    // 0x0520(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Slider_C*                                 ColorBlindSeveritySlider;                                // 0x0528(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            Dashing;                                                 // 0x0530(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Settings_DescriptionPanel_C*              Description;                                             // 0x0538(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            HoldsToggle;                                             // 0x0540(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_ScrollableVerticalList_C*                 SettingScrollableVerticalList;                           // 0x0548(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            SpecialAttackCharge;                                     // 0x0550(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            SubtitlesToggle;                                         // 0x0558(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            VibrationToggle;                                         // 0x0560(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            ViciousAttackCharge;                                     // 0x0568(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            WeaponAiming;                                            // 0x0570(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            WeaponAttackCharge;                                      // 0x0578(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       ConstructComplete;                                       // 0x0580(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NTS9[0x3];                                   // 0x0581(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ChopChargeName;                                          // 0x0584(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BlockName;                                               // 0x058C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DashName;                                                // 0x0594(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                WeaponAttackChargeName;                                  // 0x059C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SpecialMoveChargeName;                                   // 0x05A4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ChopComboName;                                           // 0x05AC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                WeaponComboName;                                         // 0x05B4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                AimingName;                                              // 0x05BC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ViciousChargeName;                                       // 0x05C4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                PunchComboName;                                          // 0x05CC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RefreshMenuUISettings();
		void RefreshSubtitlesSettings();
		void RefreshColorBlindSettings();
		void RefreshVibrationSettings();
		void RefreshCombatSettings();
		void RefreshCameraSettings();
		void SetPlatformSpecificStrings();
		void GetOptionIndexForAutoRelease(const class FName& ContextName, bool* Value, int32_t* index);
		void GetOptionIndexForCombatBehavior(const class FName& ContextName, EIGCombatContextBehavior* Behavior, int32_t* OptionIndex);
		void GetNavigableWidgets(TArray<class UIGUI_WidgetBase*>* NavigableWidgets);
		void BndEvt__SubtitlesToggle_K2Node_ComponentBoundEvent_0_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__ColorblindModeToggle_K2Node_ComponentBoundEvent_1_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__VibrationToggle_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__HoldsToggle_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void ConstructOnlyOnce();
		void BndEvt__ColorBlindSeveritySlider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(class UIGUI_WidgetBase* Source, float RawValue, float PercentValue);
		void OnActivated();
		void OnDeactivated();
		void BndEvt__ChopCharge_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__WeaponAttackCharge_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__SpecialAttackCharge_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__RepeatedDash_K2Node_ComponentBoundEvent_8_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__Block_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__WeaponAiming_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__AutoReleaseChargedChop_K2Node_ComponentBoundEvent_11_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__AutoRealeaseChargedWeaponAttack_K2Node_ComponentBoundEvent_12_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__AutoRealeaseChargedSpecialMove_K2Node_ComponentBoundEvent_13_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__AutoFinishWeaponCombo_K2Node_ComponentBoundEvent_15_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__WBP_Sheik_Settings_Accessibility_ViciousAttack_K2Node_ComponentBoundEvent_16_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__WBP_Sheik_Settings_Accessibility_AutoReleaseChargedVicious_K2Node_ComponentBoundEvent_14_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__WBP_Sheik_Settings_Accessibility_CameraCombatFollowToggle_K2Node_ComponentBoundEvent_17_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__WBP_Sheik_Settings_Accessibility_CameraClimbingFollowToggle_K2Node_ComponentBoundEvent_18_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__WBP_Sheik_Settings_Accessibility_CameraTraversalFollowToggle_K2Node_ComponentBoundEvent_19_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__WBP_Sheik_Settings_Accessibility_AutoChopAttackCombo_K2Node_ComponentBoundEvent_20_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void ExecuteUbergraph_WBP_Sheik_Settings_Accessibility(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
