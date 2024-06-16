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
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.Set Tint Visibility
	 */
	struct UWBP_Sheik_Social_Friends_C_SetTintVisibility_Params
	{
	public:
		bool                                                       TintVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.UpdateSelectedSocialEntry
	 */
	struct UWBP_Sheik_Social_Friends_C_UpdateSelectedSocialEntry_Params
	{
	public:
		TArray<struct FSheikPlayerSocialEntry>                     SocialEntries;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.GetPlayerAccountsManager
	 */
	struct UWBP_Sheik_Social_Friends_C_GetPlayerAccountsManager_Params
	{
	public:
		class USheikPlayerAccountsManager*                         PlayerAccountsManager;                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.TrySelectPartyMember
	 */
	struct UWBP_Sheik_Social_Friends_C_TrySelectPartyMember_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.CloseOptions
	 */
	struct UWBP_Sheik_Social_Friends_C_CloseOptions_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.TestGeneratePartyInvitations
	 */
	struct UWBP_Sheik_Social_Friends_C_TestGeneratePartyInvitations_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.GetPartyManager
	 */
	struct UWBP_Sheik_Social_Friends_C_GetPartyManager_Params
	{
	public:
		class USheikPartyManager*                                  PartyManager;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.ShouldBlockScreenInput
	 */
	struct UWBP_Sheik_Social_Friends_C_ShouldBlockScreenInput_Params
	{
	public:
		bool                                                       ShouldBlock;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.UpdateFriendsListVisibility
	 */
	struct UWBP_Sheik_Social_Friends_C_UpdateFriendsListVisibility_Params
	{
	public:
		bool                                                       HasFriends;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.TestGenerateFriends
	 */
	struct UWBP_Sheik_Social_Friends_C_TestGenerateFriends_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.GetFriendsManager
	 */
	struct UWBP_Sheik_Social_Friends_C_GetFriendsManager_Params
	{
	public:
		class USheikFriendsManager*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.FriendsContinuousPopulateRandom
	 */
	struct UWBP_Sheik_Social_Friends_C_FriendsContinuousPopulateRandom_Params
	{
	public:
		class FString                                              Argument1;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Argument2;                                               // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Argument3;                                               // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Argument4;                                               // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.RegisterTestCalls
	 */
	struct UWBP_Sheik_Social_Friends_C_RegisterTestCalls_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.FriendsPopulateRandom
	 */
	struct UWBP_Sheik_Social_Friends_C_FriendsPopulateRandom_Params
	{
	public:
		class FString                                              Argument1;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Argument2;                                               // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Argument3;                                               // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Argument4;                                               // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.FriendsClearFriendsList
	 */
	struct UWBP_Sheik_Social_Friends_C_FriendsClearFriendsList_Params
	{
	public:
		class FString                                              Argument1;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Argument2;                                               // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Argument3;                                               // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Argument4;                                               // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.FriendsCancelTestingFriendsList
	 */
	struct UWBP_Sheik_Social_Friends_C_FriendsCancelTestingFriendsList_Params
	{
	public:
		class FString                                              Argument1;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Argument2;                                               // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Argument3;                                               // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Argument4;                                               // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.FriendsPopulateRandomInvites
	 */
	struct UWBP_Sheik_Social_Friends_C_FriendsPopulateRandomInvites_Params
	{
	public:
		class FString                                              Argument1;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Argument2;                                               // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Argument3;                                               // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Argument4;                                               // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.OnInitialized
	 */
	struct UWBP_Sheik_Social_Friends_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.OnFriendsListUpdated
	 */
	struct UWBP_Sheik_Social_Friends_C_OnFriendsListUpdated_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.FriendsContinuousPopulateRandomTimer
	 */
	struct UWBP_Sheik_Social_Friends_C_FriendsContinuousPopulateRandomTimer_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.UpdateFriends
	 */
	struct UWBP_Sheik_Social_Friends_C_UpdateFriends_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.OnActivated
	 */
	struct UWBP_Sheik_Social_Friends_C_OnActivated_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.OnDeactivated
	 */
	struct UWBP_Sheik_Social_Friends_C_OnDeactivated_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.BindPartyManagerDelegates
	 */
	struct UWBP_Sheik_Social_Friends_C_BindPartyManagerDelegates_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.UpdateParty
	 */
	struct UWBP_Sheik_Social_Friends_C_UpdateParty_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.BndEvt__ReportPlayerForm_K2Node_ComponentBoundEvent_2_BackPressed__DelegateSignature
	 */
	struct UWBP_Sheik_Social_Friends_C_BndEvt__ReportPlayerForm_K2Node_ComponentBoundEvent_2_BackPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.BndEvt__OptionsPanel_K2Node_ComponentBoundEvent_3_OnOpenReportForm__DelegateSignature
	 */
	struct UWBP_Sheik_Social_Friends_C_BndEvt__OptionsPanel_K2Node_ComponentBoundEvent_3_OnOpenReportForm__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.HandleTeamInfoUpdate
	 */
	struct UWBP_Sheik_Social_Friends_C_HandleTeamInfoUpdate_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.OnPartyUpdated
	 */
	struct UWBP_Sheik_Social_Friends_C_OnPartyUpdated_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_4_OnEntrySelected__DelegateSignature
	 */
	struct UWBP_Sheik_Social_Friends_C_BndEvt__PlayerList_K2Node_ComponentBoundEvent_4_OnEntrySelected__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YV0K[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikPlayerSocialEntry                             PlayerSocialEntry;                                       // 0x0010(0x03C8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.BndEvt__OptionsPanel_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature
	 */
	struct UWBP_Sheik_Social_Friends_C_BndEvt__OptionsPanel_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.OnGetSocialData
	 */
	struct UWBP_Sheik_Social_Friends_C_OnGetSocialData_Params
	{
	public:
		TArray<struct FSheikPlayerSocialEntry>                     SocialEntries;                                           // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.ExecuteUbergraph_WBP_Sheik_Social_Friends
	 */
	struct UWBP_Sheik_Social_Friends_C_ExecuteUbergraph_WBP_Sheik_Social_Friends_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5JPR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
