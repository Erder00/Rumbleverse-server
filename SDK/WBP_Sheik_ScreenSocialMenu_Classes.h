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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C
	 * Size -> 0x00A9 (FullSize[0x0529] - InheritedSize[0x0480])
	 */
	class UWBP_Sheik_ScreenSocialMenu_C : public USheikScreenBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0480(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_Sheik_Social_ActivePlayersNumbers_C*            ActivePlayers;                                           // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_LR_GridLegendKey_C*                       BackKey;                                                 // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Social_Friends_C*                         FriendsPanel;                                            // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Social_LocalPlayerInfo_C*                 LocalPlayerInfo;                                         // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Frontend_Notifications_C*                 Notifications;                                           // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Social_RecentPlayers_C*                   RecentPlayers;                                           // 0x04B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_LR_GridLegendKey_C*                       SelectKey;                                               // 0x04B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Social_Settings_C*                        SettingsWBP;                                             // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_NavigationTabs_C*                         SocialTabs;                                              // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SocialWidgetSwitcher;                                    // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_DamageScreenFlash_C*                            WBP_DamageScreenFlash;                                   // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    SelectedTabIndex;                                        // 0x04E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InGame;                                                  // 0x04E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6W8E[0x3];                                   // 0x04E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnExit;                                                  // 0x04E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              FrontendPersistentScreenPath;                            // 0x04F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             StartRestrictedMatchConfirmed;                           // 0x0508(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             JoinRestrictedMatchConfirmed;                            // 0x0518(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       ReportPlayerOpened;                                      // 0x0528(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void DebugPrintPlatformBlockedPlayers();
		void DebugPrintBlockedPlayers();
		void SetInGame(bool IsInGame);
		class USheikFriendsManager* GetFriendsManager();
		void BackPressed_cb(const struct FInputEventData& InputEventData);
		void TabSelected_CB(class UIGUI_WidgetBase* Source, int32_t TabIndex);
		void OnLoseFocus(int32_t UserIndex);
		void HandleStartRestrictedMatchConfirmed(const class FString& InviteCode, int32_t JoinTimer, bool ShouldServerBackfill, const class FString& MatchConfig);
		void HandleJoinRestrictedMatchConfirmed(const class FString& InviteCode, const class FString& MatchConfig);
		void OnGainFocus(int32_t UserIndex);
		void ConstructOnlyOnce();
		void OnBlockedPlayersUpdated();
		void OnInitialized();
		void ReportFormOpened();
		void ReportFormClosed();
		void ExecuteUbergraph_WBP_Sheik_ScreenSocialMenu(int32_t EntryPoint);
		void JoinRestrictedMatchConfirmed__DelegateSignature(const class FString& InviteCode, const class FString& MatchConfig);
		void StartRestrictedMatchConfirmed__DelegateSignature(const class FString& InviteCode, int32_t JoinTimer, bool ShouldServerBackfill, const class FString& MatchConfig);
		void OnExit__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
