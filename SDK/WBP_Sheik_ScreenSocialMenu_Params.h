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
	 * Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.DebugPrintPlatformBlockedPlayers
	 */
	struct UWBP_Sheik_ScreenSocialMenu_C_DebugPrintPlatformBlockedPlayers_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.DebugPrintBlockedPlayers
	 */
	struct UWBP_Sheik_ScreenSocialMenu_C_DebugPrintBlockedPlayers_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.SetInGame
	 */
	struct UWBP_Sheik_ScreenSocialMenu_C_SetInGame_Params
	{
	public:
		bool                                                       IsInGame;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.GetFriendsManager
	 */
	struct UWBP_Sheik_ScreenSocialMenu_C_GetFriendsManager_Params
	{
	public:
		class USheikFriendsManager*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.BackPressed_cb
	 */
	struct UWBP_Sheik_ScreenSocialMenu_C_BackPressed_cb_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.TabSelected_CB
	 */
	struct UWBP_Sheik_ScreenSocialMenu_C_TabSelected_CB_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TabIndex;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.OnLoseFocus
	 */
	struct UWBP_Sheik_ScreenSocialMenu_C_OnLoseFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.HandleStartRestrictedMatchConfirmed
	 */
	struct UWBP_Sheik_ScreenSocialMenu_C_HandleStartRestrictedMatchConfirmed_Params
	{
	public:
		class FString                                              InviteCode;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    JoinTimer;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShouldServerBackfill;                                    // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7HFR[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              MatchConfig;                                             // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.HandleJoinRestrictedMatchConfirmed
	 */
	struct UWBP_Sheik_ScreenSocialMenu_C_HandleJoinRestrictedMatchConfirmed_Params
	{
	public:
		class FString                                              InviteCode;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              MatchConfig;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.OnGainFocus
	 */
	struct UWBP_Sheik_ScreenSocialMenu_C_OnGainFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_ScreenSocialMenu_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.OnBlockedPlayersUpdated
	 */
	struct UWBP_Sheik_ScreenSocialMenu_C_OnBlockedPlayersUpdated_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.OnInitialized
	 */
	struct UWBP_Sheik_ScreenSocialMenu_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.ReportFormOpened
	 */
	struct UWBP_Sheik_ScreenSocialMenu_C_ReportFormOpened_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.ReportFormClosed
	 */
	struct UWBP_Sheik_ScreenSocialMenu_C_ReportFormClosed_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.ExecuteUbergraph_WBP_Sheik_ScreenSocialMenu
	 */
	struct UWBP_Sheik_ScreenSocialMenu_C_ExecuteUbergraph_WBP_Sheik_ScreenSocialMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.JoinRestrictedMatchConfirmed__DelegateSignature
	 */
	struct UWBP_Sheik_ScreenSocialMenu_C_JoinRestrictedMatchConfirmed__DelegateSignature_Params
	{
	public:
		class FString                                              InviteCode;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              MatchConfig;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.StartRestrictedMatchConfirmed__DelegateSignature
	 */
	struct UWBP_Sheik_ScreenSocialMenu_C_StartRestrictedMatchConfirmed__DelegateSignature_Params
	{
	public:
		class FString                                              InviteCode;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    JoinTimer;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShouldServerBackfill;                                    // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7H5O[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              MatchConfig;                                             // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.OnExit__DelegateSignature
	 */
	struct UWBP_Sheik_ScreenSocialMenu_C_OnExit__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
