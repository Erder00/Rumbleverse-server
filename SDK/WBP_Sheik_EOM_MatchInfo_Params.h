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
	 * Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.SetStatItemSoundPlayback
	 */
	struct UWBP_Sheik_EOM_MatchInfo_C_SetStatItemSoundPlayback_Params
	{
	public:
		bool                                                       bShouldPlaySound;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7L2Y[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.IsTeamMatch
	 */
	struct UWBP_Sheik_EOM_MatchInfo_C_IsTeamMatch_Params
	{
	public:
		bool                                                       IsTeamMatch;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OFDX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.OnVoiceChatOptionsUpdated
	 */
	struct UWBP_Sheik_EOM_MatchInfo_C_OnVoiceChatOptionsUpdated_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsMuted;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsDeafened;                                             // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPushToTalk;                                           // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.OnVoiceChatPlayerTalkingUpdated
	 */
	struct UWBP_Sheik_EOM_MatchInfo_C_OnVoiceChatPlayerTalkingUpdated_Params
	{
	public:
		class FString                                              ChannelName;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ProductUserId;                                           // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bIsTalking;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsLocalPlayer;                                          // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.UpdatePlatformIcon
	 */
	struct UWBP_Sheik_EOM_MatchInfo_C_UpdatePlatformIcon_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.PopulateStatItems
	 */
	struct UWBP_Sheik_EOM_MatchInfo_C_PopulateStatItems_Params
	{
	public:
		TArray<struct FSheikPlayerStat>                            Stats;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.ResetInitialStates
	 */
	struct UWBP_Sheik_EOM_MatchInfo_C_ResetInitialStates_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.CascadeStatItems
	 */
	struct UWBP_Sheik_EOM_MatchInfo_C_CascadeStatItems_Params
	{
	public:
		bool                                                       SpeedUp;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3D24[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.ShowStats
	 */
	struct UWBP_Sheik_EOM_MatchInfo_C_ShowStats_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.InitializeDisplayInfo
	 */
	struct UWBP_Sheik_EOM_MatchInfo_C_InitializeDisplayInfo_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.Tick
	 */
	struct UWBP_Sheik_EOM_MatchInfo_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_EOM_MatchInfo_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.ExecuteUbergraph_WBP_Sheik_EOM_MatchInfo
	 */
	struct UWBP_Sheik_EOM_MatchInfo_C_ExecuteUbergraph_WBP_Sheik_EOM_MatchInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1RE9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.CascadeFinished__DelegateSignature
	 */
	struct UWBP_Sheik_EOM_MatchInfo_C_CascadeFinished__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
