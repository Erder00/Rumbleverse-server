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
	 * Function WBP_Sheik_MatchTextInfo.WBP_Sheik_MatchTextInfo_C.GetIsSnowballFight
	 */
	struct UWBP_Sheik_MatchTextInfo_C_GetIsSnowballFight_Params
	{
	public:
		bool                                                       IsSnowballFight;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_54EH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_MatchTextInfo.WBP_Sheik_MatchTextInfo_C.GetGameModeText
	 */
	struct UWBP_Sheik_MatchTextInfo_C_GetGameModeText_Params
	{
	public:
		class FText                                                GameModeType;                                            // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Sheik_MatchTextInfo.WBP_Sheik_MatchTextInfo_C.UpdateMatchText
	 */
	struct UWBP_Sheik_MatchTextInfo_C_UpdateMatchText_Params
	{	};

	/**
	 * Function WBP_Sheik_MatchTextInfo.WBP_Sheik_MatchTextInfo_C.GetMatchText
	 */
	struct UWBP_Sheik_MatchTextInfo_C_GetMatchText_Params
	{
	public:
		class FText                                                MatchFlowState;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                MatchText;                                               // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Sheik_MatchTextInfo.WBP_Sheik_MatchTextInfo_C.SetIintialMatchInfo
	 */
	struct UWBP_Sheik_MatchTextInfo_C_SetIintialMatchInfo_Params
	{	};

	/**
	 * Function WBP_Sheik_MatchTextInfo.WBP_Sheik_MatchTextInfo_C.OnGameFlowStateChanged_cb
	 */
	struct UWBP_Sheik_MatchTextInfo_C_OnGameFlowStateChanged_cb_Params
	{
	public:
		EGameFlowState                                             GameFlowState;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MatchTextInfo.WBP_Sheik_MatchTextInfo_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_MatchTextInfo_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_MatchTextInfo.WBP_Sheik_MatchTextInfo_C.OnRestrictedMatchHideMatchCodeChanged
	 */
	struct UWBP_Sheik_MatchTextInfo_C_OnRestrictedMatchHideMatchCodeChanged_Params
	{
	public:
		bool                                                       bHideInviteCode;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_MatchTextInfo.WBP_Sheik_MatchTextInfo_C.ExecuteUbergraph_WBP_Sheik_MatchTextInfo
	 */
	struct UWBP_Sheik_MatchTextInfo_C_ExecuteUbergraph_WBP_Sheik_MatchTextInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
