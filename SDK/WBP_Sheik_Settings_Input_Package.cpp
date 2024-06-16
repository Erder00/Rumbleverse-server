/**
 * Name: Rumbleverse
 * Version: Latest
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.SetPlatformSpecificStrings
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Input_C::SetPlatformSpecificStrings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.SetPlatformSpecificStrings");
		
		UWBP_Sheik_Settings_Input_C_SetPlatformSpecificStrings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.RefreshVibrationOption
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Input_C::RefreshVibrationOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.RefreshVibrationOption");
		
		UWBP_Sheik_Settings_Input_C_RefreshVibrationOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.ResetKeyboardSettingsToDefault
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Input_C::ResetKeyboardSettingsToDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.ResetKeyboardSettingsToDefault");
		
		UWBP_Sheik_Settings_Input_C_ResetKeyboardSettingsToDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.ResetGamepadSettingsToDefault
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Input_C::ResetGamepadSettingsToDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.ResetGamepadSettingsToDefault");
		
		UWBP_Sheik_Settings_Input_C_ResetGamepadSettingsToDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.RefreshPlatformLabeling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInputSource                                       index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Input_C::RefreshPlatformLabeling(EInputSource index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.RefreshPlatformLabeling");
		
		UWBP_Sheik_Settings_Input_C_RefreshPlatformLabeling_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.InitControlValues
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Input_C::InitControlValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.InitControlValues");
		
		UWBP_Sheik_Settings_Input_C_InitControlValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.SetShouldModifyGamepadSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InModifyGamepad                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Settings_Input_C::SetShouldModifyGamepadSettings(bool InModifyGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.SetShouldModifyGamepadSettings");
		
		UWBP_Sheik_Settings_Input_C_SetShouldModifyGamepadSettings_Params params {};
		params.InModifyGamepad = InModifyGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.GetNavigableWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UIGUI_WidgetBase*>                    NavigableWidgets                                           (Parm, OutParm, ContainsInstancedReference)
	 */
	void UWBP_Sheik_Settings_Input_C::GetNavigableWidgets(TArray<class UIGUI_WidgetBase*>* NavigableWidgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.GetNavigableWidgets");
		
		UWBP_Sheik_Settings_Input_C_GetNavigableWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NavigableWidgets != nullptr)
			*NavigableWidgets = params.NavigableWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.OnDeactivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Input_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.OnDeactivated");
		
		UWBP_Sheik_Settings_Input_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__EditBindingsButtonNew_K2Node_ComponentBoundEvent_0_OnStateChangeEventWithUserIndex__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Input_C::BndEvt__EditBindingsButtonNew_K2Node_ComponentBoundEvent_0_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__EditBindingsButtonNew_K2Node_ComponentBoundEvent_0_OnStateChangeEventWithUserIndex__DelegateSignature");
		
		UWBP_Sheik_Settings_Input_C_BndEvt__EditBindingsButtonNew_K2Node_ComponentBoundEvent_0_OnStateChangeEventWithUserIndex__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.OnActivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Input_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.OnActivated");
		
		UWBP_Sheik_Settings_Input_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__XCameraInvertToggle_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Input_C::BndEvt__XCameraInvertToggle_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__XCameraInvertToggle_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Input_C_BndEvt__XCameraInvertToggle_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__XAimInvertToggle_K2Node_ComponentBoundEvent_4_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Input_C::BndEvt__XAimInvertToggle_K2Node_ComponentBoundEvent_4_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__XAimInvertToggle_K2Node_ComponentBoundEvent_4_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Input_C_BndEvt__XAimInvertToggle_K2Node_ComponentBoundEvent_4_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__XCannonAimInvertToggle_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Input_C::BndEvt__XCannonAimInvertToggle_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__XCannonAimInvertToggle_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Input_C_BndEvt__XCannonAimInvertToggle_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__YCameraInvertToggle_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Input_C::BndEvt__YCameraInvertToggle_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__YCameraInvertToggle_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Input_C_BndEvt__YCameraInvertToggle_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__YAimInvertToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Input_C::BndEvt__YAimInvertToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__YAimInvertToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Input_C_BndEvt__YAimInvertToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__YCannonAimInvertToggle_K2Node_ComponentBoundEvent_8_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Input_C::BndEvt__YCannonAimInvertToggle_K2Node_ComponentBoundEvent_8_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__YCannonAimInvertToggle_K2Node_ComponentBoundEvent_8_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Input_C_BndEvt__YCannonAimInvertToggle_K2Node_ComponentBoundEvent_8_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Input_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.ConstructOnlyOnce");
		
		UWBP_Sheik_Settings_Input_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__AimSensitivity_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RawValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PercentValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Input_C::BndEvt__AimSensitivity_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature(class UIGUI_WidgetBase* Source, float RawValue, float PercentValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__AimSensitivity_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Input_C_BndEvt__AimSensitivity_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.RawValue = RawValue;
		params.PercentValue = PercentValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__CameraSensitivity_K2Node_ComponentBoundEvent_10_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RawValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PercentValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Input_C::BndEvt__CameraSensitivity_K2Node_ComponentBoundEvent_10_OnValueChanged__DelegateSignature(class UIGUI_WidgetBase* Source, float RawValue, float PercentValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__CameraSensitivity_K2Node_ComponentBoundEvent_10_OnValueChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Input_C_BndEvt__CameraSensitivity_K2Node_ComponentBoundEvent_10_OnValueChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.RawValue = RawValue;
		params.PercentValue = PercentValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__ResetDefaultsButton_K2Node_ComponentBoundEvent_1_OnStateChangeEventWithUserIndex__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Input_C::BndEvt__ResetDefaultsButton_K2Node_ComponentBoundEvent_1_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__ResetDefaultsButton_K2Node_ComponentBoundEvent_1_OnStateChangeEventWithUserIndex__DelegateSignature");
		
		UWBP_Sheik_Settings_Input_C_BndEvt__ResetDefaultsButton_K2Node_ComponentBoundEvent_1_OnStateChangeEventWithUserIndex__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__WBP_Sheik_Settings_Input_VibrationToggle_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Input_C::BndEvt__WBP_Sheik_Settings_Input_VibrationToggle_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.BndEvt__WBP_Sheik_Settings_Input_VibrationToggle_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Input_C_BndEvt__WBP_Sheik_Settings_Input_VibrationToggle_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.ExecuteUbergraph_WBP_Sheik_Settings_Input
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Input_C::ExecuteUbergraph_WBP_Sheik_Settings_Input(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.ExecuteUbergraph_WBP_Sheik_Settings_Input");
		
		UWBP_Sheik_Settings_Input_C_ExecuteUbergraph_WBP_Sheik_Settings_Input_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.OnRefreshNavigableWidgets__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Input_C::OnRefreshNavigableWidgets__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C.OnRefreshNavigableWidgets__DelegateSignature");
		
		UWBP_Sheik_Settings_Input_C_OnRefreshNavigableWidgets__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Settings_Input_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Settings_Input_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Settings_Input.WBP_Sheik_Settings_Input_C");
		return ptr;
	}

}


