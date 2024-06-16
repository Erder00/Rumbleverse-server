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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_Settings_Audio.WBP_Sheik_Settings_Audio_C
	 * Size -> 0x00E0 (FullSize[0x05A0] - InheritedSize[0x04C0])
	 */
	class UWBP_Sheik_Settings_Audio_C : public UWBP_Sheik_Settings_TabPage_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_Sheik_Settings_DescriptionPanel_C*              Description;                                             // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Slider_C*                                 DialogVolumeSlider;                                      // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Slider_C*                                 EnemyFootstepsVolumeSlider;                              // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Slider_C*                                 MasterVolumeSlider;                                      // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Slider_C*                                 MusicVolumeSlider;                                       // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Slider_C*                                 SFXVolumeSlider;                                         // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            SubtitlesToggle;                                         // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Slider_C*                                 UIVolumeSlider;                                          // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            VoiceChatInputDevice;                                    // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            VoiceChatMethodToggle;                                   // 0x0510(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            VoiceChatOptionsToggle;                                  // 0x0518(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            VoiceChatOutputDevice;                                   // 0x0520(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Slider_C*                                 VoiceChatVolumeSlider;                                   // 0x0528(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_ScrollableVerticalList_C*                 WBP_Sheik_ScrollableVerticalList;                        // 0x0530(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       FinishedConstruct;                                       // 0x0538(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UpdatingVOIPDevices;                                     // 0x0539(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W9IN[0x6];                                   // 0x053A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSVoiceChatDeviceInfo                             CurrentVoiceChatInputDevice;                             // 0x0540(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		struct FEOSVoiceChatDeviceInfo                             CurrentVoiceChatOutputDevice;                            // 0x0560(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      AudioInputDeviceMapping;                                 // 0x0580(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      AudioOutputDeviceMapping;                                // 0x0590(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void DisableVoiceChatOptions();
		void RefreshVoiceChatOptions();
		void RefreshSubtitlesToggle();
		void VerifyVoiceChatPermissions(bool* HasPermissions);
		void HideInputOutputDeviceSettings();
		void UpdateVoiceChatOutput(int32_t OutputDeviceIndex);
		void InitializeVoiceChatOutputOptions();
		void UpdateVoiceChatInput(int32_t InputDeviceIndex);
		void InitializeVoiceChatInputOptions();
		void SetVoiceChatVolume(float Volume);
		void UpdateVoiceChatPushToTalkText(bool Enabled);
		void UpdateVoiceChatEnabledText(bool Enabled);
		class USheikPartyManager* GetPartyManager();
		void GetNavigableWidgets(TArray<class UIGUI_WidgetBase*>* NavigableWidgets);
		void BndEvt__DialogVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(class UIGUI_WidgetBase* Source, float RawValue, float PercentValue);
		void ConstructOnlyOnce();
		void BndEvt__UIVolumeSlider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(class UIGUI_WidgetBase* Source, float RawValue, float PercentValue);
		void OnActivated();
		void OnDeactivated();
		void BndEvt__EnemyFootstepVolumeSlider_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature(class UIGUI_WidgetBase* Source, float RawValue, float PercentValue);
		void BndEvt__WBP_Sheik_Settings_Audio_SubtitlesToggle_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__SFXVolumeSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(class UIGUI_WidgetBase* Source, float RawValue, float PercentValue);
		void BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(class UIGUI_WidgetBase* Source, float RawValue, float PercentValue);
		void BndEvt__WBP_Sheik_Settings_Audio_VoiceChatOptionsToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void OnVoiceChatOptionsUpdated(bool bIsEnabled, bool bIsMuted, bool bIsDeafened, bool bIsPushToTalk);
		void OnVoiceChatAvailableAudioDevicesChanged();
		void BndEvt__WBP_Sheik_Settings_Audio_VoiceChatMethodToggle_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__WBP_Sheik_Settings_Audio_VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature(class UIGUI_WidgetBase* Source, float RawValue, float PercentValue);
		void BndEvt__WBP_Sheik_Settings_Audio_VoiceChatInputDevice_K2Node_ComponentBoundEvent_11_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__WBP_Sheik_Settings_Audio_VoiceChatOutputDevice_K2Node_ComponentBoundEvent_12_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(class UIGUI_WidgetBase* Source, float RawValue, float PercentValue);
		void ExecuteUbergraph_WBP_Sheik_Settings_Audio(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
