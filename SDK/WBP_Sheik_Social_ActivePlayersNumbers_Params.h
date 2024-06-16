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
	 * Function WBP_Sheik_Social_ActivePlayersNumbers.WBP_Sheik_Social_ActivePlayersNumbers_C.SetData
	 */
	struct UWBP_Sheik_Social_ActivePlayersNumbers_C_SetData_Params
	{
	public:
		TArray<struct FSheikPlayerAccount>                         PlayerAccounts;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_Social_ActivePlayersNumbers.WBP_Sheik_Social_ActivePlayersNumbers_C.SetText
	 */
	struct UWBP_Sheik_Social_ActivePlayersNumbers_C_SetText_Params
	{
	public:
		int32_t                                                    FriendsPlaying;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FriendsOnline;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TotalFriends;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VRJP[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Social_ActivePlayersNumbers.WBP_Sheik_Social_ActivePlayersNumbers_C.GetFriendsManager
	 */
	struct UWBP_Sheik_Social_ActivePlayersNumbers_C_GetFriendsManager_Params
	{
	public:
		class USheikFriendsManager*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_ActivePlayersNumbers.WBP_Sheik_Social_ActivePlayersNumbers_C.OnFriendsListUpdated
	 */
	struct UWBP_Sheik_Social_ActivePlayersNumbers_C_OnFriendsListUpdated_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Social_ActivePlayersNumbers.WBP_Sheik_Social_ActivePlayersNumbers_C.Construct
	 */
	struct UWBP_Sheik_Social_ActivePlayersNumbers_C_Construct_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_ActivePlayersNumbers.WBP_Sheik_Social_ActivePlayersNumbers_C.OnInitialized
	 */
	struct UWBP_Sheik_Social_ActivePlayersNumbers_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_ActivePlayersNumbers.WBP_Sheik_Social_ActivePlayersNumbers_C.OnFriendPresenceUpdated
	 */
	struct UWBP_Sheik_Social_ActivePlayersNumbers_C_OnFriendPresenceUpdated_Params
	{
	public:
		struct FSheikPlayerAccount                                 Account;                                                 // 0x0000(0x02F0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_Social_ActivePlayersNumbers.WBP_Sheik_Social_ActivePlayersNumbers_C.ExecuteUbergraph_WBP_Sheik_Social_ActivePlayersNumbers
	 */
	struct UWBP_Sheik_Social_ActivePlayersNumbers_C_ExecuteUbergraph_WBP_Sheik_Social_ActivePlayersNumbers_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z3RN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
