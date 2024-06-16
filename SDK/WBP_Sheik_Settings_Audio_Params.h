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
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.DisableVoiceChatOptions
	 */
	struct UWBP_Sheik_Settings_Audio_C_DisableVoiceChatOptions_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.RefreshVoiceChatOptions
	 */
	struct UWBP_Sheik_Settings_Audio_C_RefreshVoiceChatOptions_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.RefreshSubtitlesToggle
	 */
	struct UWBP_Sheik_Settings_Audio_C_RefreshSubtitlesToggle_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.VerifyVoiceChatPermissions
	 */
	struct UWBP_Sheik_Settings_Audio_C_VerifyVoiceChatPermissions_Params
	{
	public:
		bool                                                       HasPermissions;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5JM7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.HideInputOutputDeviceSettings
	 */
	struct UWBP_Sheik_Settings_Audio_C_HideInputOutputDeviceSettings_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.UpdateVoiceChatOutput
	 */
	struct UWBP_Sheik_Settings_Audio_C_UpdateVoiceChatOutput_Params
	{
	public:
		int32_t                                                    OutputDeviceIndex;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.InitializeVoiceChatOutputOptions
	 */
	struct UWBP_Sheik_Settings_Audio_C_InitializeVoiceChatOutputOptions_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.UpdateVoiceChatInput
	 */
	struct UWBP_Sheik_Settings_Audio_C_UpdateVoiceChatInput_Params
	{
	public:
		int32_t                                                    InputDeviceIndex;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.InitializeVoiceChatInputOptions
	 */
	struct UWBP_Sheik_Settings_Audio_C_InitializeVoiceChatInputOptions_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.SetVoiceChatVolume
	 */
	struct UWBP_Sheik_Settings_Audio_C_SetVoiceChatVolume_Params
	{
	public:
		float                                                      Volume;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JNG1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.UpdateVoiceChatPushToTalkText
	 */
	struct UWBP_Sheik_Settings_Audio_C_UpdateVoiceChatPushToTalkText_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.UpdateVoiceChatEnabledText
	 */
	struct UWBP_Sheik_Settings_Audio_C_UpdateVoiceChatEnabledText_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.GetPartyManager
	 */
	struct UWBP_Sheik_Settings_Audio_C_GetPartyManager_Params
	{
	public:
		class USheikPartyManager*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.GetNavigableWidgets
	 */
	struct UWBP_Sheik_Settings_Audio_C_GetNavigableWidgets_Params
	{
	public:
		TArray<class UIGUI_WidgetBase*>                            NavigableWidgets;                                        // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__DialogVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Audio_C_BndEvt__DialogVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RawValue;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PercentValue;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_Settings_Audio_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__UIVolumeSlider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Audio_C_BndEvt__UIVolumeSlider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RawValue;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PercentValue;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.OnActivated
	 */
	struct UWBP_Sheik_Settings_Audio_C_OnActivated_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.OnDeactivated
	 */
	struct UWBP_Sheik_Settings_Audio_C_OnDeactivated_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__EnemyFootstepVolumeSlider_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Audio_C_BndEvt__EnemyFootstepVolumeSlider_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RawValue;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PercentValue;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__WBP_Sheik_Settings_Audio_SubtitlesToggle_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Audio_C_BndEvt__WBP_Sheik_Settings_Audio_SubtitlesToggle_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__SFXVolumeSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Audio_C_BndEvt__SFXVolumeSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RawValue;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PercentValue;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Audio_C_BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RawValue;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PercentValue;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__WBP_Sheik_Settings_Audio_VoiceChatOptionsToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Audio_C_BndEvt__WBP_Sheik_Settings_Audio_VoiceChatOptionsToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.OnVoiceChatOptionsUpdated
	 */
	struct UWBP_Sheik_Settings_Audio_C_OnVoiceChatOptionsUpdated_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsMuted;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsDeafened;                                             // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPushToTalk;                                           // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.OnVoiceChatAvailableAudioDevicesChanged
	 */
	struct UWBP_Sheik_Settings_Audio_C_OnVoiceChatAvailableAudioDevicesChanged_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__WBP_Sheik_Settings_Audio_VoiceChatMethodToggle_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Audio_C_BndEvt__WBP_Sheik_Settings_Audio_VoiceChatMethodToggle_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__WBP_Sheik_Settings_Audio_VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Audio_C_BndEvt__WBP_Sheik_Settings_Audio_VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RawValue;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PercentValue;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__WBP_Sheik_Settings_Audio_VoiceChatInputDevice_K2Node_ComponentBoundEvent_11_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Audio_C_BndEvt__WBP_Sheik_Settings_Audio_VoiceChatInputDevice_K2Node_ComponentBoundEvent_11_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__WBP_Sheik_Settings_Audio_VoiceChatOutputDevice_K2Node_ComponentBoundEvent_12_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Audio_C_BndEvt__WBP_Sheik_Settings_Audio_VoiceChatOutputDevice_K2Node_ComponentBoundEvent_12_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Audio_C_BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RawValue;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PercentValue;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C.ExecuteUbergraph_WBP_Sheik_Settings_Audio
	 */
	struct UWBP_Sheik_Settings_Audio_C_ExecuteUbergraph_WBP_Sheik_Settings_Audio_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
