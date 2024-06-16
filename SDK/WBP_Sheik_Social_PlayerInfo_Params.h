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
	 * Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.OnFriendPresenceUpdated
	 */
	struct UWBP_Sheik_Social_PlayerInfo_C_OnFriendPresenceUpdated_Params
	{
	public:
		struct FSheikPlayerAccount                                 Account;                                                 // 0x0000(0x02F0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.GetFriendsManager
	 */
	struct UWBP_Sheik_Social_PlayerInfo_C_GetFriendsManager_Params
	{
	public:
		class USheikFriendsManager*                                FriendsManager;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.UpdateHeaderVisiblity
	 */
	struct UWBP_Sheik_Social_PlayerInfo_C_UpdateHeaderVisiblity_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.UpdateHeaderText
	 */
	struct UWBP_Sheik_Social_PlayerInfo_C_UpdateHeaderText_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.UpdateWidgetColor
	 */
	struct UWBP_Sheik_Social_PlayerInfo_C_UpdateWidgetColor_Params
	{
	public:
		struct FSlateColor                                         StatusBorderColor;                                       // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FSlateColor                                         NameColor;                                               // 0x0028(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.UpdateBlockedStatus
	 */
	struct UWBP_Sheik_Social_PlayerInfo_C_UpdateBlockedStatus_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.UpdateLastSeen
	 */
	struct UWBP_Sheik_Social_PlayerInfo_C_UpdateLastSeen_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.UpdatePlatformImage
	 */
	struct UWBP_Sheik_Social_PlayerInfo_C_UpdatePlatformImage_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.UpdateStatus
	 */
	struct UWBP_Sheik_Social_PlayerInfo_C_UpdateStatus_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.UpdateName
	 */
	struct UWBP_Sheik_Social_PlayerInfo_C_UpdateName_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.SetData
	 */
	struct UWBP_Sheik_Social_PlayerInfo_C_SetData_Params
	{
	public:
		struct FSheikPlayerSocialEntry                             PlayerSocialEntry;                                       // 0x0000(0x03C8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.OnSelectedAnimationFinished
	 */
	struct UWBP_Sheik_Social_PlayerInfo_C_OnSelectedAnimationFinished_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.HandleSelect
	 */
	struct UWBP_Sheik_Social_PlayerInfo_C_HandleSelect_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.SetWidgetFocus
	 */
	struct UWBP_Sheik_Social_PlayerInfo_C_SetWidgetFocus_Params
	{
	public:
		bool                                                       SkipAnimations;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsFocused;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.OnSelected
	 */
	struct UWBP_Sheik_Social_PlayerInfo_C_OnSelected_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.OnGainFocus
	 */
	struct UWBP_Sheik_Social_PlayerInfo_C_OnGainFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.OnLoseFocus
	 */
	struct UWBP_Sheik_Social_PlayerInfo_C_OnLoseFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.PreConstruct
	 */
	struct UWBP_Sheik_Social_PlayerInfo_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_Social_PlayerInfo_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.Tick
	 */
	struct UWBP_Sheik_Social_PlayerInfo_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.OnInitialized
	 */
	struct UWBP_Sheik_Social_PlayerInfo_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.ExecuteUbergraph_WBP_Sheik_Social_PlayerInfo
	 */
	struct UWBP_Sheik_Social_PlayerInfo_C_ExecuteUbergraph_WBP_Sheik_Social_PlayerInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
