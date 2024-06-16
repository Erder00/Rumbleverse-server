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
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.DisableVoiceChatOptions
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Audio_C::DisableVoiceChatOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.DisableVoiceChatOptions");
		
		UWBP_Sheik_Settings_Audio_C_DisableVoiceChatOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.RefreshVoiceChatOptions
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Audio_C::RefreshVoiceChatOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.RefreshVoiceChatOptions");
		
		UWBP_Sheik_Settings_Audio_C_RefreshVoiceChatOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.RefreshSubtitlesToggle
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Audio_C::RefreshSubtitlesToggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.RefreshSubtitlesToggle");
		
		UWBP_Sheik_Settings_Audio_C_RefreshSubtitlesToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.VerifyVoiceChatPermissions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasPermissions                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Settings_Audio_C::VerifyVoiceChatPermissions(bool* HasPermissions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.VerifyVoiceChatPermissions");
		
		UWBP_Sheik_Settings_Audio_C_VerifyVoiceChatPermissions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasPermissions != nullptr)
			*HasPermissions = params.HasPermissions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.HideInputOutputDeviceSettings
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Audio_C::HideInputOutputDeviceSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.HideInputOutputDeviceSettings");
		
		UWBP_Sheik_Settings_Audio_C_HideInputOutputDeviceSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.UpdateVoiceChatOutput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutputDeviceIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Audio_C::UpdateVoiceChatOutput(int32_t OutputDeviceIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.UpdateVoiceChatOutput");
		
		UWBP_Sheik_Settings_Audio_C_UpdateVoiceChatOutput_Params params {};
		params.OutputDeviceIndex = OutputDeviceIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.InitializeVoiceChatOutputOptions
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Audio_C::InitializeVoiceChatOutputOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.InitializeVoiceChatOutputOptions");
		
		UWBP_Sheik_Settings_Audio_C_InitializeVoiceChatOutputOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.UpdateVoiceChatInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InputDeviceIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Audio_C::UpdateVoiceChatInput(int32_t InputDeviceIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.UpdateVoiceChatInput");
		
		UWBP_Sheik_Settings_Audio_C_UpdateVoiceChatInput_Params params {};
		params.InputDeviceIndex = InputDeviceIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.InitializeVoiceChatInputOptions
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Audio_C::InitializeVoiceChatInputOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.InitializeVoiceChatInputOptions");
		
		UWBP_Sheik_Settings_Audio_C_InitializeVoiceChatInputOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.SetVoiceChatVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Volume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Audio_C::SetVoiceChatVolume(float Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.SetVoiceChatVolume");
		
		UWBP_Sheik_Settings_Audio_C_SetVoiceChatVolume_Params params {};
		params.Volume = Volume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.UpdateVoiceChatPushToTalkText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Settings_Audio_C::UpdateVoiceChatPushToTalkText(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.UpdateVoiceChatPushToTalkText");
		
		UWBP_Sheik_Settings_Audio_C_UpdateVoiceChatPushToTalkText_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.UpdateVoiceChatEnabledText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Settings_Audio_C::UpdateVoiceChatEnabledText(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.UpdateVoiceChatEnabledText");
		
		UWBP_Sheik_Settings_Audio_C_UpdateVoiceChatEnabledText_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.GetPartyManager
	 * 		Flags  -> ()
	 */
	class USheikPartyManager* UWBP_Sheik_Settings_Audio_C::GetPartyManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.GetPartyManager");
		
		UWBP_Sheik_Settings_Audio_C_GetPartyManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.GetNavigableWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UIGUI_WidgetBase*>                    NavigableWidgets                                           (Parm, OutParm, ContainsInstancedReference)
	 */
	void UWBP_Sheik_Settings_Audio_C::GetNavigableWidgets(TArray<class UIGUI_WidgetBase*>* NavigableWidgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.GetNavigableWidgets");
		
		UWBP_Sheik_Settings_Audio_C_GetNavigableWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NavigableWidgets != nullptr)
			*NavigableWidgets = params.NavigableWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__DialogVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RawValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PercentValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Audio_C::BndEvt__DialogVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(class UIGUI_WidgetBase* Source, float RawValue, float PercentValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__DialogVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Audio_C_BndEvt__DialogVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Audio_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.ConstructOnlyOnce");
		
		UWBP_Sheik_Settings_Audio_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__UIVolumeSlider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RawValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PercentValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Audio_C::BndEvt__UIVolumeSlider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(class UIGUI_WidgetBase* Source, float RawValue, float PercentValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__UIVolumeSlider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Audio_C_BndEvt__UIVolumeSlider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.OnActivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Audio_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.OnActivated");
		
		UWBP_Sheik_Settings_Audio_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.OnDeactivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Audio_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.OnDeactivated");
		
		UWBP_Sheik_Settings_Audio_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__EnemyFootstepVolumeSlider_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RawValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PercentValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Audio_C::BndEvt__EnemyFootstepVolumeSlider_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature(class UIGUI_WidgetBase* Source, float RawValue, float PercentValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__EnemyFootstepVolumeSlider_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Audio_C_BndEvt__EnemyFootstepVolumeSlider_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__WBP_Sheik_Settings_Audio_SubtitlesToggle_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Audio_C::BndEvt__WBP_Sheik_Settings_Audio_SubtitlesToggle_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__WBP_Sheik_Settings_Audio_SubtitlesToggle_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Audio_C_BndEvt__WBP_Sheik_Settings_Audio_SubtitlesToggle_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__SFXVolumeSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RawValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PercentValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Audio_C::BndEvt__SFXVolumeSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(class UIGUI_WidgetBase* Source, float RawValue, float PercentValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__SFXVolumeSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Audio_C_BndEvt__SFXVolumeSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RawValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PercentValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Audio_C::BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(class UIGUI_WidgetBase* Source, float RawValue, float PercentValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Audio_C_BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__WBP_Sheik_Settings_Audio_VoiceChatOptionsToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Audio_C::BndEvt__WBP_Sheik_Settings_Audio_VoiceChatOptionsToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__WBP_Sheik_Settings_Audio_VoiceChatOptionsToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Audio_C_BndEvt__WBP_Sheik_Settings_Audio_VoiceChatOptionsToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.OnVoiceChatOptionsUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsMuted                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsDeafened                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPushToTalk                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Settings_Audio_C::OnVoiceChatOptionsUpdated(bool bIsEnabled, bool bIsMuted, bool bIsDeafened, bool bIsPushToTalk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.OnVoiceChatOptionsUpdated");
		
		UWBP_Sheik_Settings_Audio_C_OnVoiceChatOptionsUpdated_Params params {};
		params.bIsEnabled = bIsEnabled;
		params.bIsMuted = bIsMuted;
		params.bIsDeafened = bIsDeafened;
		params.bIsPushToTalk = bIsPushToTalk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.OnVoiceChatAvailableAudioDevicesChanged
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Audio_C::OnVoiceChatAvailableAudioDevicesChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.OnVoiceChatAvailableAudioDevicesChanged");
		
		UWBP_Sheik_Settings_Audio_C_OnVoiceChatAvailableAudioDevicesChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__WBP_Sheik_Settings_Audio_VoiceChatMethodToggle_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Audio_C::BndEvt__WBP_Sheik_Settings_Audio_VoiceChatMethodToggle_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__WBP_Sheik_Settings_Audio_VoiceChatMethodToggle_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Audio_C_BndEvt__WBP_Sheik_Settings_Audio_VoiceChatMethodToggle_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__WBP_Sheik_Settings_Audio_VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RawValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PercentValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Audio_C::BndEvt__WBP_Sheik_Settings_Audio_VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature(class UIGUI_WidgetBase* Source, float RawValue, float PercentValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__WBP_Sheik_Settings_Audio_VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Audio_C_BndEvt__WBP_Sheik_Settings_Audio_VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__WBP_Sheik_Settings_Audio_VoiceChatInputDevice_K2Node_ComponentBoundEvent_11_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Audio_C::BndEvt__WBP_Sheik_Settings_Audio_VoiceChatInputDevice_K2Node_ComponentBoundEvent_11_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__WBP_Sheik_Settings_Audio_VoiceChatInputDevice_K2Node_ComponentBoundEvent_11_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Audio_C_BndEvt__WBP_Sheik_Settings_Audio_VoiceChatInputDevice_K2Node_ComponentBoundEvent_11_OnOptionChanged__DelegateSignature_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__WBP_Sheik_Settings_Audio_VoiceChatOutputDevice_K2Node_ComponentBoundEvent_12_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Audio_C::BndEvt__WBP_Sheik_Settings_Audio_VoiceChatOutputDevice_K2Node_ComponentBoundEvent_12_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__WBP_Sheik_Settings_Audio_VoiceChatOutputDevice_K2Node_ComponentBoundEvent_12_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Audio_C_BndEvt__WBP_Sheik_Settings_Audio_VoiceChatOutputDevice_K2Node_ComponentBoundEvent_12_OnOptionChanged__DelegateSignature_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RawValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PercentValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Audio_C::BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(class UIGUI_WidgetBase* Source, float RawValue, float PercentValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Audio_C_BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.ExecuteUbergraph_WBP_Sheik_Settings_Audio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Audio_C::ExecuteUbergraph_WBP_Sheik_Settings_Audio(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.ExecuteUbergraph_WBP_Sheik_Settings_Audio");
		
		UWBP_Sheik_Settings_Audio_C_ExecuteUbergraph_WBP_Sheik_Settings_Audio_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Settings_Audio_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Settings_Audio_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C");
		return ptr;
	}

}


