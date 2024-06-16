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
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.DeconstructInputGroups
	 */
	struct UWBP_Sheik_ScreenSettings_C_DeconstructInputGroups_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.ConstructInputGroups
	 */
	struct UWBP_Sheik_ScreenSettings_C_ConstructInputGroups_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.SetNavClickAudioSingleTab
	 */
	struct UWBP_Sheik_ScreenSettings_C_SetNavClickAudioSingleTab_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.SetNavClickAudioAllTabs
	 */
	struct UWBP_Sheik_ScreenSettings_C_SetNavClickAudioAllTabs_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.ReturnToTitleScreen
	 */
	struct UWBP_Sheik_ScreenSettings_C_ReturnToTitleScreen_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.OpenConfirmationPopup
	 */
	struct UWBP_Sheik_ScreenSettings_C_OpenConfirmationPopup_Params
	{
	public:
		class FScriptDelegate                                      ConfirmedPressedCallback;                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
		class FScriptDelegate                                      CanceledPressedCallback;                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
		class FText                                                ConfirmButtonText;                                       // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                CancelButtonText;                                        // 0x0038(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                HeaderText;                                              // 0x0050(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                BodyText;                                                // 0x0068(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.GetPopupSystem
	 */
	struct UWBP_Sheik_ScreenSettings_C_GetPopupSystem_Params
	{
	public:
		class UWBP_SheikPopupSystem_C*                             PopupSystemWidget;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.SetTabWidgets
	 */
	struct UWBP_Sheik_ScreenSettings_C_SetTabWidgets_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.SetInGame
	 */
	struct UWBP_Sheik_ScreenSettings_C_SetInGame_Params
	{
	public:
		bool                                                       IsInGame;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.TabSelectionChanged_Cb
	 */
	struct UWBP_Sheik_ScreenSettings_C_TabSelectionChanged_Cb_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TabIndex;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UG6Q[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.IsInMatch
	 */
	struct UWBP_Sheik_ScreenSettings_C_IsInMatch_Params
	{
	public:
		bool                                                       IsInMatch;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UWI0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.BackPressed_cb
	 */
	struct UWBP_Sheik_ScreenSettings_C_BackPressed_cb_Params
	{
	public:
		struct FInputEventData                                     InputEvent;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.LeftFaceButtonPressed
	 */
	struct UWBP_Sheik_ScreenSettings_C_LeftFaceButtonPressed_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.ConfirmQuit
	 */
	struct UWBP_Sheik_ScreenSettings_C_ConfirmQuit_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.CancelQuit
	 */
	struct UWBP_Sheik_ScreenSettings_C_CancelQuit_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.OnLoseFocus
	 */
	struct UWBP_Sheik_ScreenSettings_C_OnLoseFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.Settings_OnApplicationDeactivate
	 */
	struct UWBP_Sheik_ScreenSettings_C_Settings_OnApplicationDeactivate_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.Settings_OnApplicationWillTerminate
	 */
	struct UWBP_Sheik_ScreenSettings_C_Settings_OnApplicationWillTerminate_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.PreConstruct
	 */
	struct UWBP_Sheik_ScreenSettings_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.Settings_OnApplicationToBackround
	 */
	struct UWBP_Sheik_ScreenSettings_C_Settings_OnApplicationToBackround_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.ConfirmReturnToTitleScreen
	 */
	struct UWBP_Sheik_ScreenSettings_C_ConfirmReturnToTitleScreen_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.OnGainFocus
	 */
	struct UWBP_Sheik_ScreenSettings_C_OnGainFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.HandleStartRestrictedMatchConfirmed
	 */
	struct UWBP_Sheik_ScreenSettings_C_HandleStartRestrictedMatchConfirmed_Params
	{
	public:
		class FString                                              InviteCode;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    JoinTimer;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShouldServerBackfill;                                    // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_99V2[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              MatchConfig;                                             // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.HandleJoinRestrictedMatchConfirmed
	 */
	struct UWBP_Sheik_ScreenSettings_C_HandleJoinRestrictedMatchConfirmed_Params
	{
	public:
		class FString                                              InviteCode;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              MatchConfig;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_ScreenSettings_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.OnEulaPopupShown
	 */
	struct UWBP_Sheik_ScreenSettings_C_OnEulaPopupShown_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.OnEulaPopupHidden
	 */
	struct UWBP_Sheik_ScreenSettings_C_OnEulaPopupHidden_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.ExecuteUbergraph_WBP_Sheik_ScreenSettings
	 */
	struct UWBP_Sheik_ScreenSettings_C_ExecuteUbergraph_WBP_Sheik_ScreenSettings_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_807O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.JoinRestrictedMatchConfirmed__DelegateSignature
	 */
	struct UWBP_Sheik_ScreenSettings_C_JoinRestrictedMatchConfirmed__DelegateSignature_Params
	{
	public:
		class FString                                              InviteCode;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              MatchConfig;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.StartRestrictedMatchConfirmed__DelegateSignature
	 */
	struct UWBP_Sheik_ScreenSettings_C_StartRestrictedMatchConfirmed__DelegateSignature_Params
	{
	public:
		class FString                                              InviteCode;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    JoinTimer;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShouldServerBackfill;                                    // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZB5Y[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              MatchConfig;                                             // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.OnExit__DelegateSignature
	 */
	struct UWBP_Sheik_ScreenSettings_C_OnExit__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
