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
	 * Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.UpdateSelectedSocialEntry
	 */
	struct UWBP_Sheik_Social_RecentPlayers_C_UpdateSelectedSocialEntry_Params
	{
	public:
		TArray<struct FSheikPlayerSocialEntry>                     SocialEntries;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.GetFriendsManager
	 */
	struct UWBP_Sheik_Social_RecentPlayers_C_GetFriendsManager_Params
	{
	public:
		class USheikFriendsManager*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.PlayerAccountsManager
	 */
	struct UWBP_Sheik_Social_RecentPlayers_C_PlayerAccountsManager_Params
	{
	public:
		class USheikPlayerAccountsManager*                         AccountsManager;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.CloseOptions
	 */
	struct UWBP_Sheik_Social_RecentPlayers_C_CloseOptions_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.GetPlayerData
	 */
	struct UWBP_Sheik_Social_RecentPlayers_C_GetPlayerData_Params
	{
	public:
		class USheikPlayerData*                                    PlayerData;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.SetData
	 */
	struct UWBP_Sheik_Social_RecentPlayers_C_SetData_Params
	{
	public:
		TArray<struct FSheikPlayerSocialEntry>                     SocialEntries;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.ShouldBlockScreenInput
	 */
	struct UWBP_Sheik_Social_RecentPlayers_C_ShouldBlockScreenInput_Params
	{
	public:
		bool                                                       ShouldBlock;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.UpdateRecentPlayersVisibility
	 */
	struct UWBP_Sheik_Social_RecentPlayers_C_UpdateRecentPlayersVisibility_Params
	{
	public:
		bool                                                       HasRecentPlayers;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.UpdateRecentPlayers
	 */
	struct UWBP_Sheik_Social_RecentPlayers_C_UpdateRecentPlayers_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.BndEvt__ReportPlayerForm_K2Node_ComponentBoundEvent_2_BackPressed__DelegateSignature
	 */
	struct UWBP_Sheik_Social_RecentPlayers_C_BndEvt__ReportPlayerForm_K2Node_ComponentBoundEvent_2_BackPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.BndEvt__OptionsPanel_K2Node_ComponentBoundEvent_3_OnOpenReportForm__DelegateSignature
	 */
	struct UWBP_Sheik_Social_RecentPlayers_C_BndEvt__OptionsPanel_K2Node_ComponentBoundEvent_3_OnOpenReportForm__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.OnDeactivated
	 */
	struct UWBP_Sheik_Social_RecentPlayers_C_OnDeactivated_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.BndEvt__OptionsPanel_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature
	 */
	struct UWBP_Sheik_Social_RecentPlayers_C_BndEvt__OptionsPanel_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.BndEvt__RecentPlayersList_K2Node_ComponentBoundEvent_6_OnEntrySelected__DelegateSignature
	 */
	struct UWBP_Sheik_Social_RecentPlayers_C_BndEvt__RecentPlayersList_K2Node_ComponentBoundEvent_6_OnEntrySelected__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FM8I[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikPlayerSocialEntry                             PlayerSocialEntry;                                       // 0x0010(0x03C8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.OnGetRecentPlayers
	 */
	struct UWBP_Sheik_Social_RecentPlayers_C_OnGetRecentPlayers_Params
	{
	public:
		TArray<struct FSheikPlayerSocialEntry>                     SocialEntries;                                           // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.OnInitialized
	 */
	struct UWBP_Sheik_Social_RecentPlayers_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.OnBlockedPlayersUpdated
	 */
	struct UWBP_Sheik_Social_RecentPlayers_C_OnBlockedPlayersUpdated_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.OnActivated
	 */
	struct UWBP_Sheik_Social_RecentPlayers_C_OnActivated_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.ExecuteUbergraph_WBP_Sheik_Social_RecentPlayers
	 */
	struct UWBP_Sheik_Social_RecentPlayers_C_ExecuteUbergraph_WBP_Sheik_Social_RecentPlayers_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T6GK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
