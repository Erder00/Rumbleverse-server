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
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.RefreshResolutionOption
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Graphics_C::RefreshResolutionOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.RefreshResolutionOption");
		
		UWBP_Sheik_Settings_Graphics_C_RefreshResolutionOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.OnViewportSizeChange
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Graphics_C::OnViewportSizeChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.OnViewportSizeChange");
		
		UWBP_Sheik_Settings_Graphics_C_OnViewportSizeChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.RefreshColorVisionSettings
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Graphics_C::RefreshColorVisionSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.RefreshColorVisionSettings");
		
		UWBP_Sheik_Settings_Graphics_C_RefreshColorVisionSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.GetNavigableWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UIGUI_WidgetBase*>                    NavigableWidgets                                           (Parm, OutParm, ContainsInstancedReference)
	 */
	void UWBP_Sheik_Settings_Graphics_C::GetNavigableWidgets(TArray<class UIGUI_WidgetBase*>* NavigableWidgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.GetNavigableWidgets");
		
		UWBP_Sheik_Settings_Graphics_C_GetNavigableWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NavigableWidgets != nullptr)
			*NavigableWidgets = params.NavigableWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.ReportAutoSettingTelemetry
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Graphics_C::ReportAutoSettingTelemetry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.ReportAutoSettingTelemetry");
		
		UWBP_Sheik_Settings_Graphics_C_ReportAutoSettingTelemetry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.FinalizeQualitySetting
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Graphics_C::FinalizeQualitySetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.FinalizeQualitySetting");
		
		UWBP_Sheik_Settings_Graphics_C_FinalizeQualitySetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.IsFullscreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Settings_Graphics_C::IsFullscreen(bool* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.IsFullscreen");
		
		UWBP_Sheik_Settings_Graphics_C_IsFullscreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.GetScreenResolutionIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InFullscreen                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OutIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Graphics_C::GetScreenResolutionIndex(bool InFullscreen, int32_t* OutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.GetScreenResolutionIndex");
		
		UWBP_Sheik_Settings_Graphics_C_GetScreenResolutionIndex_Params params {};
		params.InFullscreen = InFullscreen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIndex != nullptr)
			*OutIndex = params.OutIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.InitializeScreenResolution
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InFullscreenValid                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Settings_Graphics_C::InitializeScreenResolution(bool InFullscreenValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.InitializeScreenResolution");
		
		UWBP_Sheik_Settings_Graphics_C_InitializeScreenResolution_Params params {};
		params.InFullscreenValid = InFullscreenValid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.GetCustomQualityIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutCustomIndex                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Graphics_C::GetCustomQualityIndex(int32_t* OutCustomIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.GetCustomQualityIndex");
		
		UWBP_Sheik_Settings_Graphics_C_GetCustomQualityIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCustomIndex != nullptr)
			*OutCustomIndex = params.OutCustomIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.CheckForCustomQualityLevel
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Graphics_C::CheckForCustomQualityLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.CheckForCustomQualityLevel");
		
		UWBP_Sheik_Settings_Graphics_C_CheckForCustomQualityLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.SetScalabilityQualityLevels
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Graphics_C::SetScalabilityQualityLevels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.SetScalabilityQualityLevels");
		
		UWBP_Sheik_Settings_Graphics_C_SetScalabilityQualityLevels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.SetAllQualityTogglesFromCustom
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Graphics_C::SetAllQualityTogglesFromCustom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.SetAllQualityTogglesFromCustom");
		
		UWBP_Sheik_Settings_Graphics_C_SetAllQualityTogglesFromCustom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.SetAllQualityTogglesFromPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InPresetQuality                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InCallSelectionChanged                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Settings_Graphics_C::SetAllQualityTogglesFromPreset(int32_t InPresetQuality, bool InCallSelectionChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.SetAllQualityTogglesFromPreset");
		
		UWBP_Sheik_Settings_Graphics_C_SetAllQualityTogglesFromPreset_Params params {};
		params.InPresetQuality = InPresetQuality;
		params.InCallSelectionChanged = InCallSelectionChanged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__AutoSetQualityButton_K2Node_ComponentBoundEvent_0_OnStateChangeEventWithUserIndex__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Graphics_C::BndEvt__AutoSetQualityButton_K2Node_ComponentBoundEvent_0_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__AutoSetQualityButton_K2Node_ComponentBoundEvent_0_OnStateChangeEventWithUserIndex__DelegateSignature");
		
		UWBP_Sheik_Settings_Graphics_C_BndEvt__AutoSetQualityButton_K2Node_ComponentBoundEvent_0_OnStateChangeEventWithUserIndex__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__QualityPresetsToggle_K2Node_ComponentBoundEvent_1_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Graphics_C::BndEvt__QualityPresetsToggle_K2Node_ComponentBoundEvent_1_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__QualityPresetsToggle_K2Node_ComponentBoundEvent_1_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Graphics_C_BndEvt__QualityPresetsToggle_K2Node_ComponentBoundEvent_1_OnOptionChanged__DelegateSignature_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__3dResolutionSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RawValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PercentValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Graphics_C::BndEvt__3dResolutionSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(class UIGUI_WidgetBase* Source, float RawValue, float PercentValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__3dResolutionSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Graphics_C_BndEvt__3dResolutionSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__ViewDistanceQualityToggle_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Graphics_C::BndEvt__ViewDistanceQualityToggle_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__ViewDistanceQualityToggle_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Graphics_C_BndEvt__ViewDistanceQualityToggle_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__ShadowQualityToggle_K2Node_ComponentBoundEvent_4_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Graphics_C::BndEvt__ShadowQualityToggle_K2Node_ComponentBoundEvent_4_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__ShadowQualityToggle_K2Node_ComponentBoundEvent_4_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Graphics_C_BndEvt__ShadowQualityToggle_K2Node_ComponentBoundEvent_4_OnOptionChanged__DelegateSignature_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__AntialiasingQualityToggle_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Graphics_C::BndEvt__AntialiasingQualityToggle_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__AntialiasingQualityToggle_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Graphics_C_BndEvt__AntialiasingQualityToggle_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__TextureQualityToggle_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Graphics_C::BndEvt__TextureQualityToggle_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__TextureQualityToggle_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Graphics_C_BndEvt__TextureQualityToggle_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__EffectsQualityToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Graphics_C::BndEvt__EffectsQualityToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__EffectsQualityToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Graphics_C_BndEvt__EffectsQualityToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__PostProcessingQualityToggle_K2Node_ComponentBoundEvent_8_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Graphics_C::BndEvt__PostProcessingQualityToggle_K2Node_ComponentBoundEvent_8_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__PostProcessingQualityToggle_K2Node_ComponentBoundEvent_8_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Graphics_C_BndEvt__PostProcessingQualityToggle_K2Node_ComponentBoundEvent_8_OnOptionChanged__DelegateSignature_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__ResolutionToggle_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Graphics_C::BndEvt__ResolutionToggle_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__ResolutionToggle_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Graphics_C_BndEvt__ResolutionToggle_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__WindowModeToggle_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Graphics_C::BndEvt__WindowModeToggle_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__WindowModeToggle_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Graphics_C_BndEvt__WindowModeToggle_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__BrightnessSlider_K2Node_ComponentBoundEvent_11_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RawValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PercentValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Graphics_C::BndEvt__BrightnessSlider_K2Node_ComponentBoundEvent_11_OnValueChanged__DelegateSignature(class UIGUI_WidgetBase* Source, float RawValue, float PercentValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__BrightnessSlider_K2Node_ComponentBoundEvent_11_OnValueChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Graphics_C_BndEvt__BrightnessSlider_K2Node_ComponentBoundEvent_11_OnValueChanged__DelegateSignature_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__VSyncToggle_K2Node_ComponentBoundEvent_12_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Graphics_C::BndEvt__VSyncToggle_K2Node_ComponentBoundEvent_12_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__VSyncToggle_K2Node_ComponentBoundEvent_12_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Graphics_C_BndEvt__VSyncToggle_K2Node_ComponentBoundEvent_12_OnOptionChanged__DelegateSignature_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.OnActivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Graphics_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.OnActivated");
		
		UWBP_Sheik_Settings_Graphics_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.OnDeactivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Graphics_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.OnDeactivated");
		
		UWBP_Sheik_Settings_Graphics_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__AutoSetQualityButton_1_K2Node_ComponentBoundEvent_14_OnStateChangeEventWithUserIndex__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Graphics_C::BndEvt__AutoSetQualityButton_1_K2Node_ComponentBoundEvent_14_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__AutoSetQualityButton_1_K2Node_ComponentBoundEvent_14_OnStateChangeEventWithUserIndex__DelegateSignature");
		
		UWBP_Sheik_Settings_Graphics_C_BndEvt__AutoSetQualityButton_1_K2Node_ComponentBoundEvent_14_OnStateChangeEventWithUserIndex__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__WBP_Sheik_Settings_Graphics_ColorblindModeToggle_K2Node_ComponentBoundEvent_15_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Graphics_C::BndEvt__WBP_Sheik_Settings_Graphics_ColorblindModeToggle_K2Node_ComponentBoundEvent_15_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__WBP_Sheik_Settings_Graphics_ColorblindModeToggle_K2Node_ComponentBoundEvent_15_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Graphics_C_BndEvt__WBP_Sheik_Settings_Graphics_ColorblindModeToggle_K2Node_ComponentBoundEvent_15_OnOptionChanged__DelegateSignature_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__WBP_Sheik_Settings_Graphics_ColorBlindSeveritySlider_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RawValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PercentValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Graphics_C::BndEvt__WBP_Sheik_Settings_Graphics_ColorBlindSeveritySlider_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature(class UIGUI_WidgetBase* Source, float RawValue, float PercentValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__WBP_Sheik_Settings_Graphics_ColorBlindSeveritySlider_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Graphics_C_BndEvt__WBP_Sheik_Settings_Graphics_ColorBlindSeveritySlider_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__ApplyDisplaySettingsButton_K2Node_ComponentBoundEvent_13_OnStateChangeEventWithUserIndex__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Graphics_C::BndEvt__ApplyDisplaySettingsButton_K2Node_ComponentBoundEvent_13_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__ApplyDisplaySettingsButton_K2Node_ComponentBoundEvent_13_OnStateChangeEventWithUserIndex__DelegateSignature");
		
		UWBP_Sheik_Settings_Graphics_C_BndEvt__ApplyDisplaySettingsButton_K2Node_ComponentBoundEvent_13_OnStateChangeEventWithUserIndex__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Graphics_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.ConstructOnlyOnce");
		
		UWBP_Sheik_Settings_Graphics_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__WBP_Sheik_Settings_Graphics_ResetGraphicsQualitySettingsButton_K2Node_ComponentBoundEvent_16_OnStateChangeEventWithUserIndex__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Graphics_C::BndEvt__WBP_Sheik_Settings_Graphics_ResetGraphicsQualitySettingsButton_K2Node_ComponentBoundEvent_16_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.BndEvt__WBP_Sheik_Settings_Graphics_ResetGraphicsQualitySettingsButton_K2Node_ComponentBoundEvent_16_OnStateChangeEventWithUserIndex__DelegateSignature");
		
		UWBP_Sheik_Settings_Graphics_C_BndEvt__WBP_Sheik_Settings_Graphics_ResetGraphicsQualitySettingsButton_K2Node_ComponentBoundEvent_16_OnStateChangeEventWithUserIndex__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.ExecuteUbergraph_WBP_Sheik_Settings_Graphics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Graphics_C::ExecuteUbergraph_WBP_Sheik_Settings_Graphics(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C.ExecuteUbergraph_WBP_Sheik_Settings_Graphics");
		
		UWBP_Sheik_Settings_Graphics_C_ExecuteUbergraph_WBP_Sheik_Settings_Graphics_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Settings_Graphics_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Settings_Graphics_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Settings_Graphics.WBP_Sheik_Settings_Graphics_C");
		return ptr;
	}

}


