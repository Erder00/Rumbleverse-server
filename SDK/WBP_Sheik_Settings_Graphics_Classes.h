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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C
	 * Size -> 0x00ED (FullSize[0x05AD] - InheritedSize[0x04C0])
	 */
	class UWBP_Sheik_Settings_Graphics_C : public UWBP_Sheik_Settings_TabPage_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_Sheik_Slider_C*                                 _3dResolutionSlider;                                     // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            AntialiasingQualityToggle;                               // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_SettingsButton_C*                         ApplyDisplaySettingsButton;                              // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_SettingsButton_C*                         ApplyQualitySettingsButton;                              // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_SettingsButton_C*                         AutoSetQualityButton;                                    // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Slider_C*                                 BrightnessSlider;                                        // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            ColorblindModeToggle;                                    // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Slider_C*                                 ColorBlindSeveritySlider;                                // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Settings_DescriptionPanel_C*              Description;                                             // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            EffectsQualityToggle;                                    // 0x0510(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            PostProcessingQualityToggle;                             // 0x0518(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            QualityPresetsToggle;                                    // 0x0520(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_SettingsButton_C*                         ResetGraphicsSettingsButton;                             // 0x0528(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            ResolutionToggle;                                        // 0x0530(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_ScrollableVerticalList_C*                 SettingScrollableVerticalList;                           // 0x0538(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            ShadowQualityToggle;                                     // 0x0540(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            TextureQualityToggle;                                    // 0x0548(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            ThreadedRenderingToggle;                                 // 0x0550(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            ViewDistanceQualityToggle;                               // 0x0558(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            VSyncToggle;                                             // 0x0560(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            WindowModeToggle;                                        // 0x0568(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       FinishedConstruct;                                       // 0x0570(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       GameUserSettings;                                        // 0x0571(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FBEI[0x6];                                   // 0x0572(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FIntPoint>                                   FullscreenResolutions;                                   // 0x0578(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FIntPoint>                                   WindowedResolutions;                                     // 0x0588(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       CanChangeResolution;                                     // 0x0598(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MGOP[0x3];                                   // 0x0599(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentBrightness;                                       // 0x059C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LastFullscreenResolutionIndex;                           // 0x05A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FIntPoint                                           SelectedResolution;                                      // 0x05A4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EWindowMode                                                SelectedWindowMode;                                      // 0x05AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RefreshResolutionOption();
		void OnViewportSizeChange();
		void RefreshColorVisionSettings();
		void GetNavigableWidgets(TArray<class UIGUI_WidgetBase*>* NavigableWidgets);
		void ReportAutoSettingTelemetry();
		void FinalizeQualitySetting();
		void IsFullscreen(bool* Out);
		void GetScreenResolutionIndex(bool InFullscreen, int32_t* OutIndex);
		void InitializeScreenResolution(bool InFullscreenValid);
		void GetCustomQualityIndex(int32_t* OutCustomIndex);
		void CheckForCustomQualityLevel();
		void SetScalabilityQualityLevels();
		void SetAllQualityTogglesFromCustom();
		void SetAllQualityTogglesFromPreset(int32_t InPresetQuality, bool InCallSelectionChanged);
		void BndEvt__AutoSetQualityButton_K2Node_ComponentBoundEvent_0_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void BndEvt__QualityPresetsToggle_K2Node_ComponentBoundEvent_1_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__3dResolutionSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(class UIGUI_WidgetBase* Source, float RawValue, float PercentValue);
		void BndEvt__ViewDistanceQualityToggle_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__ShadowQualityToggle_K2Node_ComponentBoundEvent_4_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__AntialiasingQualityToggle_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__TextureQualityToggle_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__EffectsQualityToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__PostProcessingQualityToggle_K2Node_ComponentBoundEvent_8_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__ResolutionToggle_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__WindowModeToggle_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__BrightnessSlider_K2Node_ComponentBoundEvent_11_OnValueChanged__DelegateSignature(class UIGUI_WidgetBase* Source, float RawValue, float PercentValue);
		void BndEvt__VSyncToggle_K2Node_ComponentBoundEvent_12_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void OnActivated();
		void OnDeactivated();
		void BndEvt__AutoSetQualityButton_1_K2Node_ComponentBoundEvent_14_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void BndEvt__WBP_Sheik_Settings_Graphics_ColorblindModeToggle_K2Node_ComponentBoundEvent_15_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__WBP_Sheik_Settings_Graphics_ColorBlindSeveritySlider_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature(class UIGUI_WidgetBase* Source, float RawValue, float PercentValue);
		void BndEvt__ApplyDisplaySettingsButton_K2Node_ComponentBoundEvent_13_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void ConstructOnlyOnce();
		void BndEvt__WBP_Sheik_Settings_Graphics_ResetGraphicsQualitySettingsButton_K2Node_ComponentBoundEvent_16_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void ExecuteUbergraph_WBP_Sheik_Settings_Graphics(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
