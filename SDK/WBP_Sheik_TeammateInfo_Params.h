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
	 * Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.UpdateLocalPlayerInfoVisibility
	 */
	struct UWBP_Sheik_TeammateInfo_C_UpdateLocalPlayerInfoVisibility_Params
	{	};

	/**
	 * Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.OnVoiceChatMuteListChanged
	 */
	struct UWBP_Sheik_TeammateInfo_C_OnVoiceChatMuteListChanged_Params
	{	};

	/**
	 * Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.UpdatePlayerMuted
	 */
	struct UWBP_Sheik_TeammateInfo_C_UpdatePlayerMuted_Params
	{	};

	/**
	 * Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.GetPartyManager
	 */
	struct UWBP_Sheik_TeammateInfo_C_GetPartyManager_Params
	{
	public:
		class USheikPartyManager*                                  PartyManager;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.UpdatePartyIcon
	 */
	struct UWBP_Sheik_TeammateInfo_C_UpdatePartyIcon_Params
	{
	public:
		bool                                                       IsInParty;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.OnNameChanged_cb
	 */
	struct UWBP_Sheik_TeammateInfo_C_OnNameChanged_cb_Params
	{	};

	/**
	 * Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.OnVoiceChatOptionsUpdated
	 */
	struct UWBP_Sheik_TeammateInfo_C_OnVoiceChatOptionsUpdated_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsMuted;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsDeafened;                                             // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPushToTalk;                                           // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.OnVoiceChatPlayerTalkingUpdated
	 */
	struct UWBP_Sheik_TeammateInfo_C_OnVoiceChatPlayerTalkingUpdated_Params
	{
	public:
		class FString                                              ChannelName;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              PlayerName;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bIsTalking;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsLocalPlayer;                                          // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.UpdateVoiceChatSpeakingIcon
	 */
	struct UWBP_Sheik_TeammateInfo_C_UpdateVoiceChatSpeakingIcon_Params
	{
	public:
		bool                                                       IsTalking;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.UpdateDownedTimer
	 */
	struct UWBP_Sheik_TeammateInfo_C_UpdateDownedTimer_Params
	{
	public:
		float                                                      DownedTimer;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.OnTeamLeaderUpdated_cb
	 */
	struct UWBP_Sheik_TeammateInfo_C_OnTeamLeaderUpdated_cb_Params
	{
	public:
		bool                                                       bIsTeamLeader;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.UpdateHealth
	 */
	struct UWBP_Sheik_TeammateInfo_C_UpdateHealth_Params
	{
	public:
		float                                                      HealthPercentage;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HealthMax;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.HandleInfoUpdated
	 */
	struct UWBP_Sheik_TeammateInfo_C_HandleInfoUpdated_Params
	{
	public:
		struct FSheikSpectatorInfo                                 SpectatorInfo;                                           // 0x0000(0x00E0)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.SetForPlayer
	 */
	struct UWBP_Sheik_TeammateInfo_C_SetForPlayer_Params
	{
	public:
		class ASheikPlayerStateCommon*                             SheikPlayerState;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.DuosDowned
	 */
	struct UWBP_Sheik_TeammateInfo_C_DuosDowned_Params
	{
	public:
		ESheikPinEventType                                         EventType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D6PC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASheikCharacter*                                     Attacker;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASheikCharacter*                                     Victim;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.OnKnockdown
	 */
	struct UWBP_Sheik_TeammateInfo_C_OnKnockdown_Params
	{
	public:
		struct FIGKnockOutData                                     KnockOutData;                                            // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.TeammateDied
	 */
	struct UWBP_Sheik_TeammateInfo_C_TeammateDied_Params
	{
	public:
		class AIGPlayerState*                                      TeammateState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_TeammateInfo_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.ExecuteUbergraph_WBP_Sheik_TeammateInfo
	 */
	struct UWBP_Sheik_TeammateInfo_C_ExecuteUbergraph_WBP_Sheik_TeammateInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
