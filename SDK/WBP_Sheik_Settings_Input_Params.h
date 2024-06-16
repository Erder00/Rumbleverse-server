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
	 * Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.SetPlatformSpecificStrings
	 */
	struct UWBP_Sheik_Settings_Input_C_SetPlatformSpecificStrings_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.RefreshVibrationOption
	 */
	struct UWBP_Sheik_Settings_Input_C_RefreshVibrationOption_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.ResetKeyboardSettingsToDefault
	 */
	struct UWBP_Sheik_Settings_Input_C_ResetKeyboardSettingsToDefault_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.ResetGamepadSettingsToDefault
	 */
	struct UWBP_Sheik_Settings_Input_C_ResetGamepadSettingsToDefault_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.RefreshPlatformLabeling
	 */
	struct UWBP_Sheik_Settings_Input_C_RefreshPlatformLabeling_Params
	{
	public:
		EInputSource                                               index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.InitControlValues
	 */
	struct UWBP_Sheik_Settings_Input_C_InitControlValues_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.SetShouldModifyGamepadSettings
	 */
	struct UWBP_Sheik_Settings_Input_C_SetShouldModifyGamepadSettings_Params
	{
	public:
		bool                                                       InModifyGamepad;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.GetNavigableWidgets
	 */
	struct UWBP_Sheik_Settings_Input_C_GetNavigableWidgets_Params
	{
	public:
		TArray<class UIGUI_WidgetBase*>                            NavigableWidgets;                                        // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.OnDeactivated
	 */
	struct UWBP_Sheik_Settings_Input_C_OnDeactivated_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__EditBindingsButtonNew_K2Node_ComponentBoundEvent_0_OnStateChangeEventWithUserIndex__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Input_C_BndEvt__EditBindingsButtonNew_K2Node_ComponentBoundEvent_0_OnStateChangeEventWithUserIndex__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.OnActivated
	 */
	struct UWBP_Sheik_Settings_Input_C_OnActivated_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__XCameraInvertToggle_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Input_C_BndEvt__XCameraInvertToggle_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__XAimInvertToggle_K2Node_ComponentBoundEvent_4_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Input_C_BndEvt__XAimInvertToggle_K2Node_ComponentBoundEvent_4_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__XCannonAimInvertToggle_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Input_C_BndEvt__XCannonAimInvertToggle_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__YCameraInvertToggle_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Input_C_BndEvt__YCameraInvertToggle_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__YAimInvertToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Input_C_BndEvt__YAimInvertToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__YCannonAimInvertToggle_K2Node_ComponentBoundEvent_8_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Input_C_BndEvt__YCannonAimInvertToggle_K2Node_ComponentBoundEvent_8_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_Settings_Input_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__AimSensitivity_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Input_C_BndEvt__AimSensitivity_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RawValue;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PercentValue;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__CameraSensitivity_K2Node_ComponentBoundEvent_10_OnValueChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Input_C_BndEvt__CameraSensitivity_K2Node_ComponentBoundEvent_10_OnValueChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RawValue;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PercentValue;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__ResetDefaultsButton_K2Node_ComponentBoundEvent_1_OnStateChangeEventWithUserIndex__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Input_C_BndEvt__ResetDefaultsButton_K2Node_ComponentBoundEvent_1_OnStateChangeEventWithUserIndex__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__WBP_Sheik_Settings_Input_VibrationToggle_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Input_C_BndEvt__WBP_Sheik_Settings_Input_VibrationToggle_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.ExecuteUbergraph_WBP_Sheik_Settings_Input
	 */
	struct UWBP_Sheik_Settings_Input_C_ExecuteUbergraph_WBP_Sheik_Settings_Input_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.OnRefreshNavigableWidgets__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Input_C_OnRefreshNavigableWidgets__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
