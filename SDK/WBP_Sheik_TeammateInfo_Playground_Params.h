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
	 * Function WBP_Sheik_TeammateInfo_Playground.WBP_Sheik_TeammateInfo_Playground_C.SetupWidgetInfo
	 */
	struct UWBP_Sheik_TeammateInfo_Playground_C_SetupWidgetInfo_Params
	{
	public:
		class FString                                              PlayerProductID;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              PlayerName;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              PlayerCozmoId;                                           // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESheikPlatformService                                      PlatformService;                                         // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VSL5[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_TeammateInfo_Playground.WBP_Sheik_TeammateInfo_Playground_C.GetPartyManager
	 */
	struct UWBP_Sheik_TeammateInfo_Playground_C_GetPartyManager_Params
	{
	public:
		class USheikPartyManager*                                  PartyManager;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_TeammateInfo_Playground.WBP_Sheik_TeammateInfo_Playground_C.OnVoiceChatOptionsUpdated
	 */
	struct UWBP_Sheik_TeammateInfo_Playground_C_OnVoiceChatOptionsUpdated_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsMuted;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsDeafened;                                             // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPushToTalk;                                           // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RU5E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_TeammateInfo_Playground.WBP_Sheik_TeammateInfo_Playground_C.OnVoiceChatMuteListChanged
	 */
	struct UWBP_Sheik_TeammateInfo_Playground_C_OnVoiceChatMuteListChanged_Params
	{	};

	/**
	 * Function WBP_Sheik_TeammateInfo_Playground.WBP_Sheik_TeammateInfo_Playground_C.OnVoiceChatPlayerTalkingUpdated
	 */
	struct UWBP_Sheik_TeammateInfo_Playground_C_OnVoiceChatPlayerTalkingUpdated_Params
	{
	public:
		class FString                                              ChannelName;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              PlayerName;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bIsTalking;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsLocalPlayer;                                          // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_TeammateInfo_Playground.WBP_Sheik_TeammateInfo_Playground_C.UpdatePlayerMuted
	 */
	struct UWBP_Sheik_TeammateInfo_Playground_C_UpdatePlayerMuted_Params
	{	};

	/**
	 * Function WBP_Sheik_TeammateInfo_Playground.WBP_Sheik_TeammateInfo_Playground_C.UpdateVoiceChatSpeakingIcon
	 */
	struct UWBP_Sheik_TeammateInfo_Playground_C_UpdateVoiceChatSpeakingIcon_Params
	{
	public:
		bool                                                       IsTalking;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_TeammateInfo_Playground.WBP_Sheik_TeammateInfo_Playground_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_TeammateInfo_Playground_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_TeammateInfo_Playground.WBP_Sheik_TeammateInfo_Playground_C.ExecuteUbergraph_WBP_Sheik_TeammateInfo_Playground
	 */
	struct UWBP_Sheik_TeammateInfo_Playground_C_ExecuteUbergraph_WBP_Sheik_TeammateInfo_Playground_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
