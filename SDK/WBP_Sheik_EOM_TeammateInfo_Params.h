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
	 * Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.OnNameChanged_cb
	 */
	struct UWBP_Sheik_EOM_TeammateInfo_C_OnNameChanged_cb_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.GetPartyManager
	 */
	struct UWBP_Sheik_EOM_TeammateInfo_C_GetPartyManager_Params
	{
	public:
		class USheikPartyManager*                                  PartyManager;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.HandleInfoUpdated
	 */
	struct UWBP_Sheik_EOM_TeammateInfo_C_HandleInfoUpdated_Params
	{
	public:
		struct FSheikSpectatorInfo                                 SpectatorInfo;                                           // 0x0000(0x00E0)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.SetForPlayer
	 */
	struct UWBP_Sheik_EOM_TeammateInfo_C_SetForPlayer_Params
	{
	public:
		class ASheikPlayerStateCommon*                             SheikPlayerState;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.UpdatePartyIcon
	 */
	struct UWBP_Sheik_EOM_TeammateInfo_C_UpdatePartyIcon_Params
	{
	public:
		bool                                                       IsInParty;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.UpdatePlayerMuted
	 */
	struct UWBP_Sheik_EOM_TeammateInfo_C_UpdatePlayerMuted_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.UpdateVoiceChatSpeakingIcon
	 */
	struct UWBP_Sheik_EOM_TeammateInfo_C_UpdateVoiceChatSpeakingIcon_Params
	{
	public:
		bool                                                       IsTalking;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.OnVoiceChatMuteListChanged
	 */
	struct UWBP_Sheik_EOM_TeammateInfo_C_OnVoiceChatMuteListChanged_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.OnVoiceChatOptionsUpdated
	 */
	struct UWBP_Sheik_EOM_TeammateInfo_C_OnVoiceChatOptionsUpdated_Params
	{
	public:
		bool                                                       bIsLocalVOIPEnabled;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsLocalVOIPMuted;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsLocalVOIPDeafened;                                    // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsLocalVOIPPushToTalk;                                  // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OSS0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.OnVoiceChatPlayerTalkingUpdated
	 */
	struct UWBP_Sheik_EOM_TeammateInfo_C_OnVoiceChatPlayerTalkingUpdated_Params
	{
	public:
		class FString                                              ChannelName;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ProductUserId;                                           // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bIsTalking;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsLocalPlayer;                                          // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_EOM_TeammateInfo_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.ExecuteUbergraph_WBP_Sheik_EOM_TeammateInfo
	 */
	struct UWBP_Sheik_EOM_TeammateInfo_C_ExecuteUbergraph_WBP_Sheik_EOM_TeammateInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0DF9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
