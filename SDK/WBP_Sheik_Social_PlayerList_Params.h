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
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.OnFriendPresenceUpdated
	 */
	struct UWBP_Sheik_Social_PlayerList_C_OnFriendPresenceUpdated_Params
	{
	public:
		struct FSheikPlayerAccount                                 Account;                                                 // 0x0000(0x02F0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.GetFriendsManager
	 */
	struct UWBP_Sheik_Social_PlayerList_C_GetFriendsManager_Params
	{
	public:
		class USheikFriendsManager*                                FriendsManager;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.ResetHeaders
	 */
	struct UWBP_Sheik_Social_PlayerList_C_ResetHeaders_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.SetHeaderTextVisibility
	 */
	struct UWBP_Sheik_Social_PlayerList_C_SetHeaderTextVisibility_Params
	{
	public:
		struct FSheikPlayerSocialEntry                             PlayerSocialEntry;                                       // 0x0000(0x03C8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UWBP_Sheik_Social_PlayerInfo_C*                      SocialPlayerEntry;                                       // 0x03C8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.TabPageRight
	 */
	struct UWBP_Sheik_Social_PlayerList_C_TabPageRight_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.TabPageLeft
	 */
	struct UWBP_Sheik_Social_PlayerList_C_TabPageLeft_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.HandlePageIndexInputSubscribe
	 */
	struct UWBP_Sheik_Social_PlayerList_C_HandlePageIndexInputSubscribe_Params
	{
	public:
		bool                                                       Activated;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6495[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.CreatePagerTabs
	 */
	struct UWBP_Sheik_Social_PlayerList_C_CreatePagerTabs_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.SetSocialEntryData
	 */
	struct UWBP_Sheik_Social_PlayerList_C_SetSocialEntryData_Params
	{
	public:
		TArray<struct FSheikPlayerSocialEntry>                     SocialEntries;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.OnSocialEntryWidgetUnfocused
	 */
	struct UWBP_Sheik_Social_PlayerList_C_OnSocialEntryWidgetUnfocused_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.OnSocialEntryWidgetFocused
	 */
	struct UWBP_Sheik_Social_PlayerList_C_OnSocialEntryWidgetFocused_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LE7H[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.OnSocialEntryWidgetSelected
	 */
	struct UWBP_Sheik_Social_PlayerList_C_OnSocialEntryWidgetSelected_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YTBC[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.ClearSeparators
	 */
	struct UWBP_Sheik_Social_PlayerList_C_ClearSeparators_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.AddSeparator
	 */
	struct UWBP_Sheik_Social_PlayerList_C_AddSeparator_Params
	{
	public:
		class UIGUI_WidgetBase*                                    WidgetEntry;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EWBP_Sheik_Social_ListSeparatorType                        SeparatorType;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_28CC[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.FocusSocialEntry
	 */
	struct UWBP_Sheik_Social_PlayerList_C_FocusSocialEntry_Params
	{
	public:
		struct FSheikPlayerSocialEntry                             SocialEntry;                                             // 0x0000(0x03C8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.GetNavigableWidgets
	 */
	struct UWBP_Sheik_Social_PlayerList_C_GetNavigableWidgets_Params
	{
	public:
		TArray<class UIGUI_WidgetBase*>                            NavigableWidgets;                                        // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.Populate
	 */
	struct UWBP_Sheik_Social_PlayerList_C_Populate_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.PreviousPage
	 */
	struct UWBP_Sheik_Social_PlayerList_C_PreviousPage_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.NextPage
	 */
	struct UWBP_Sheik_Social_PlayerList_C_NextPage_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.FindWidgetForSocialEntry
	 */
	struct UWBP_Sheik_Social_PlayerList_C_FindWidgetForSocialEntry_Params
	{
	public:
		struct FSheikPlayerSocialEntry                             SocialEntry;                                             // 0x0000(0x03C8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class USheikWidgetBase*                                    Widget;                                                  // 0x03C8(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.RefocusSelection
	 */
	struct UWBP_Sheik_Social_PlayerList_C_RefocusSelection_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.FindDataIndexForSelection
	 */
	struct UWBP_Sheik_Social_PlayerList_C_FindDataIndexForSelection_Params
	{
	public:
		int32_t                                                    ArrayIndex;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.AdjustPaging
	 */
	struct UWBP_Sheik_Social_PlayerList_C_AdjustPaging_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.GetRelativeIndexForSelection
	 */
	struct UWBP_Sheik_Social_PlayerList_C_GetRelativeIndexForSelection_Params
	{
	public:
		int32_t                                                    ArrayIndex;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.ClearSelection
	 */
	struct UWBP_Sheik_Social_PlayerList_C_ClearSelection_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.Update
	 */
	struct UWBP_Sheik_Social_PlayerList_C_Update_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.BndEvt__WBP_Sheik_Social_PlayerList_PagerTabs_K2Node_ComponentBoundEvent_0_SwitchPage__DelegateSignature
	 */
	struct UWBP_Sheik_Social_PlayerList_C_BndEvt__WBP_Sheik_Social_PlayerList_PagerTabs_K2Node_ComponentBoundEvent_0_SwitchPage__DelegateSignature_Params
	{
	public:
		int32_t                                                    PageNumber;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.OnInitialized
	 */
	struct UWBP_Sheik_Social_PlayerList_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.ExecuteUbergraph_WBP_Sheik_Social_PlayerList
	 */
	struct UWBP_Sheik_Social_PlayerList_C_ExecuteUbergraph_WBP_Sheik_Social_PlayerList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.OnEntrySelected__DelegateSignature
	 */
	struct UWBP_Sheik_Social_PlayerList_C_OnEntrySelected__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HN0J[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikPlayerSocialEntry                             PlayerSocialEntry;                                       // 0x0010(0x03C8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
