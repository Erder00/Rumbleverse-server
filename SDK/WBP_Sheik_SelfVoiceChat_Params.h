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
	 * Function WBP_Sheik_SelfVoiceChat.WBP_Sheik_SelfVoiceChat_C.OnTeammateLeftServer
	 */
	struct UWBP_Sheik_SelfVoiceChat_C_OnTeammateLeftServer_Params
	{
	public:
		class AIGPlayerState*                                      ExitingTeammate;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_SelfVoiceChat.WBP_Sheik_SelfVoiceChat_C.OnTeamInfoUpdated
	 */
	struct UWBP_Sheik_SelfVoiceChat_C_OnTeamInfoUpdated_Params
	{	};

	/**
	 * Function WBP_Sheik_SelfVoiceChat.WBP_Sheik_SelfVoiceChat_C.OnVoiceChatPlayerTalkingUpdated
	 */
	struct UWBP_Sheik_SelfVoiceChat_C_OnVoiceChatPlayerTalkingUpdated_Params
	{
	public:
		class FString                                              ChannelName;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ProductUserId;                                           // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bIsTalking;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsLocalPlayer;                                          // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_SelfVoiceChat.WBP_Sheik_SelfVoiceChat_C.OnVoiceChatOptionsUpdated
	 */
	struct UWBP_Sheik_SelfVoiceChat_C_OnVoiceChatOptionsUpdated_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsMuted;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsDeafened;                                             // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPushToTalk;                                           // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NWI9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_SelfVoiceChat.WBP_Sheik_SelfVoiceChat_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_SelfVoiceChat_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_SelfVoiceChat.WBP_Sheik_SelfVoiceChat_C.ExecuteUbergraph_WBP_Sheik_SelfVoiceChat
	 */
	struct UWBP_Sheik_SelfVoiceChat_C_ExecuteUbergraph_WBP_Sheik_SelfVoiceChat_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
