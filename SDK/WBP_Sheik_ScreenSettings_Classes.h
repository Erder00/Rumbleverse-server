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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C
	 * Size -> 0x0100 (FullSize[0x0580] - InheritedSize[0x0480])
	 */
	class UWBP_Sheik_ScreenSettings_C : public UIGUI_ScreenBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0480(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Anim_QuickSwitch;                                        // 0x0488(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWBP_Sheik_Settings_Accessibility_C*                 AccessibilitySettings;                                   // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Settings_Account_C*                       AccountSettings;                                         // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Settings_Audio_C*                         AudioSettings;                                           // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Legend_C*                                 Backbutton;                                              // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Settings_Input_C*                         GamepadSettings;                                         // 0x04B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Settings_Game_C*                          GameSettings;                                            // 0x04B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Settings_Graphics_C*                      GraphicsSettings;                                        // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Settings_Input_C*                         KeyboardSettings;                                        // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_LegendKey_C*                              LeftFaceButton;                                          // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_NavigationTabs_C*                         SettingsTabs;                                            // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SettingsWidgetSwitcher;                                  // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Social_Settings_C*                        SocialSettings;                                          // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_DamageScreenFlash_C*                            WBP_DamageScreenFlash;                                   // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       InGame;                                                  // 0x04F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VDP9[0x7];                                   // 0x04F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USheikWidgetBase*>                            TabWidgets;                                              // 0x0500(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class FString>                                      InputGroupNames;                                         // 0x0510(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    LastSelectedTabIndex;                                    // 0x0520(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IHQI[0x4];                                   // 0x0524(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLegendData>                                 LegendPrompts;                                           // 0x0528(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             OnExit;                                                  // 0x0538(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              FrontendPersistentScreenPath;                            // 0x0548(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             StartRestrictedMatchConfirmed;                           // 0x0558(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             JoinRestrictedMatchConfirmed;                            // 0x0568(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FName                                                TitleScreenLevel;                                        // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DeconstructInputGroups();
		void ConstructInputGroups();
		void SetNavClickAudioSingleTab();
		void SetNavClickAudioAllTabs();
		void ReturnToTitleScreen();
		void OpenConfirmationPopup(const class FScriptDelegate& ConfirmedPressedCallback, const class FScriptDelegate& CanceledPressedCallback, const class FText& ConfirmButtonText, const class FText& CancelButtonText, const class FText& HeaderText, const class FText& BodyText);
		void GetPopupSystem(class UWBP_SheikPopupSystem_C** PopupSystemWidget);
		void SetTabWidgets();
		void SetInGame(bool IsInGame);
		void TabSelectionChanged_Cb(class UIGUI_WidgetBase* Source, int32_t TabIndex);
		void IsInMatch(bool* IsInMatch);
		void BackPressed_cb(const struct FInputEventData& InputEvent);
		void LeftFaceButtonPressed(const struct FInputEventData& InputEventData);
		void ConfirmQuit(int32_t PopupId, const class FName& BindingName);
		void CancelQuit(int32_t PopupId, const class FName& BindingName);
		void OnLoseFocus(int32_t UserIndex);
		void Settings_OnApplicationDeactivate();
		void Settings_OnApplicationWillTerminate();
		void PreConstruct(bool IsDesignTime);
		void Settings_OnApplicationToBackround();
		void ConfirmReturnToTitleScreen(int32_t PopupId, const class FName& BindingName);
		void OnGainFocus(int32_t UserIndex);
		void HandleStartRestrictedMatchConfirmed(const class FString& InviteCode, int32_t JoinTimer, bool ShouldServerBackfill, const class FString& MatchConfig);
		void HandleJoinRestrictedMatchConfirmed(const class FString& InviteCode, const class FString& MatchConfig);
		void ConstructOnlyOnce();
		void OnEulaPopupShown();
		void OnEulaPopupHidden();
		void ExecuteUbergraph_WBP_Sheik_ScreenSettings(int32_t EntryPoint);
		void JoinRestrictedMatchConfirmed__DelegateSignature(const class FString& InviteCode, const class FString& MatchConfig);
		void StartRestrictedMatchConfirmed__DelegateSignature(const class FString& InviteCode, int32_t JoinTimer, bool ShouldServerBackfill, const class FString& MatchConfig);
		void OnExit__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
