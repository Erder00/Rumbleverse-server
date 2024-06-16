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
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.RefreshResolutionOption
	 */
	struct UWBP_Sheik_Settings_Graphics_C_RefreshResolutionOption_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.OnViewportSizeChange
	 */
	struct UWBP_Sheik_Settings_Graphics_C_OnViewportSizeChange_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.RefreshColorVisionSettings
	 */
	struct UWBP_Sheik_Settings_Graphics_C_RefreshColorVisionSettings_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.GetNavigableWidgets
	 */
	struct UWBP_Sheik_Settings_Graphics_C_GetNavigableWidgets_Params
	{
	public:
		TArray<class UIGUI_WidgetBase*>                            NavigableWidgets;                                        // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.ReportAutoSettingTelemetry
	 */
	struct UWBP_Sheik_Settings_Graphics_C_ReportAutoSettingTelemetry_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.FinalizeQualitySetting
	 */
	struct UWBP_Sheik_Settings_Graphics_C_FinalizeQualitySetting_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.IsFullscreen
	 */
	struct UWBP_Sheik_Settings_Graphics_C_IsFullscreen_Params
	{
	public:
		bool                                                       Out;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.GetScreenResolutionIndex
	 */
	struct UWBP_Sheik_Settings_Graphics_C_GetScreenResolutionIndex_Params
	{
	public:
		bool                                                       InFullscreen;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FA5E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OutIndex;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.InitializeScreenResolution
	 */
	struct UWBP_Sheik_Settings_Graphics_C_InitializeScreenResolution_Params
	{
	public:
		bool                                                       InFullscreenValid;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.GetCustomQualityIndex
	 */
	struct UWBP_Sheik_Settings_Graphics_C_GetCustomQualityIndex_Params
	{
	public:
		int32_t                                                    OutCustomIndex;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.CheckForCustomQualityLevel
	 */
	struct UWBP_Sheik_Settings_Graphics_C_CheckForCustomQualityLevel_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.SetScalabilityQualityLevels
	 */
	struct UWBP_Sheik_Settings_Graphics_C_SetScalabilityQualityLevels_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.SetAllQualityTogglesFromCustom
	 */
	struct UWBP_Sheik_Settings_Graphics_C_SetAllQualityTogglesFromCustom_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.SetAllQualityTogglesFromPreset
	 */
	struct UWBP_Sheik_Settings_Graphics_C_SetAllQualityTogglesFromPreset_Params
	{
	public:
		int32_t                                                    InPresetQuality;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InCallSelectionChanged;                                  // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5D21[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__AutoSetQualityButton_K2Node_ComponentBoundEvent_0_OnStateChangeEventWithUserIndex__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Graphics_C_BndEvt__AutoSetQualityButton_K2Node_ComponentBoundEvent_0_OnStateChangeEventWithUserIndex__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__QualityPresetsToggle_K2Node_ComponentBoundEvent_1_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Graphics_C_BndEvt__QualityPresetsToggle_K2Node_ComponentBoundEvent_1_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__3dResolutionSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Graphics_C_BndEvt__3dResolutionSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RawValue;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PercentValue;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__ViewDistanceQualityToggle_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Graphics_C_BndEvt__ViewDistanceQualityToggle_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__ShadowQualityToggle_K2Node_ComponentBoundEvent_4_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Graphics_C_BndEvt__ShadowQualityToggle_K2Node_ComponentBoundEvent_4_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__AntialiasingQualityToggle_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Graphics_C_BndEvt__AntialiasingQualityToggle_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__TextureQualityToggle_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Graphics_C_BndEvt__TextureQualityToggle_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__EffectsQualityToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Graphics_C_BndEvt__EffectsQualityToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__PostProcessingQualityToggle_K2Node_ComponentBoundEvent_8_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Graphics_C_BndEvt__PostProcessingQualityToggle_K2Node_ComponentBoundEvent_8_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__ResolutionToggle_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Graphics_C_BndEvt__ResolutionToggle_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__WindowModeToggle_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Graphics_C_BndEvt__WindowModeToggle_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__BrightnessSlider_K2Node_ComponentBoundEvent_11_OnValueChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Graphics_C_BndEvt__BrightnessSlider_K2Node_ComponentBoundEvent_11_OnValueChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RawValue;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PercentValue;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__VSyncToggle_K2Node_ComponentBoundEvent_12_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Graphics_C_BndEvt__VSyncToggle_K2Node_ComponentBoundEvent_12_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.OnActivated
	 */
	struct UWBP_Sheik_Settings_Graphics_C_OnActivated_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.OnDeactivated
	 */
	struct UWBP_Sheik_Settings_Graphics_C_OnDeactivated_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__AutoSetQualityButton_1_K2Node_ComponentBoundEvent_14_OnStateChangeEventWithUserIndex__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Graphics_C_BndEvt__AutoSetQualityButton_1_K2Node_ComponentBoundEvent_14_OnStateChangeEventWithUserIndex__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__WBP_Sheik_Settings_Graphics_ColorblindModeToggle_K2Node_ComponentBoundEvent_15_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Graphics_C_BndEvt__WBP_Sheik_Settings_Graphics_ColorblindModeToggle_K2Node_ComponentBoundEvent_15_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__WBP_Sheik_Settings_Graphics_ColorBlindSeveritySlider_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Graphics_C_BndEvt__WBP_Sheik_Settings_Graphics_ColorBlindSeveritySlider_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RawValue;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PercentValue;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__ApplyDisplaySettingsButton_K2Node_ComponentBoundEvent_13_OnStateChangeEventWithUserIndex__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Graphics_C_BndEvt__ApplyDisplaySettingsButton_K2Node_ComponentBoundEvent_13_OnStateChangeEventWithUserIndex__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_Settings_Graphics_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__WBP_Sheik_Settings_Graphics_ResetGraphicsQualitySettingsButton_K2Node_ComponentBoundEvent_16_OnStateChangeEventWithUserIndex__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Graphics_C_BndEvt__WBP_Sheik_Settings_Graphics_ResetGraphicsQualitySettingsButton_K2Node_ComponentBoundEvent_16_OnStateChangeEventWithUserIndex__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.ExecuteUbergraph_WBP_Sheik_Settings_Graphics
	 */
	struct UWBP_Sheik_Settings_Graphics_C_ExecuteUbergraph_WBP_Sheik_Settings_Graphics_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6SY8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
