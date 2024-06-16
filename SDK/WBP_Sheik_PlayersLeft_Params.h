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
	 * Function WBP_Sheik_PlayersLeft.WBP_Sheik_PlayersLeft_C.SetTeamsIcon
	 */
	struct UWBP_Sheik_PlayersLeft_C_SetTeamsIcon_Params
	{	};

	/**
	 * Function WBP_Sheik_PlayersLeft.WBP_Sheik_PlayersLeft_C.OnGameFlowStateChanged_cb
	 */
	struct UWBP_Sheik_PlayersLeft_C_OnGameFlowStateChanged_cb_Params
	{
	public:
		EGameFlowState                                             GameFlowState;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_PlayersLeft.WBP_Sheik_PlayersLeft_C.UpdatePlayersLeft
	 */
	struct UWBP_Sheik_PlayersLeft_C_UpdatePlayersLeft_Params
	{	};

	/**
	 * Function WBP_Sheik_PlayersLeft.WBP_Sheik_PlayersLeft_C.OnTotalPlayersChanged_cb
	 */
	struct UWBP_Sheik_PlayersLeft_C_OnTotalPlayersChanged_cb_Params
	{
	public:
		int32_t                                                    TotalPlayers;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Joined;                                                  // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_PlayersLeft.WBP_Sheik_PlayersLeft_C.SetTotalPlayers
	 */
	struct UWBP_Sheik_PlayersLeft_C_SetTotalPlayers_Params
	{	};

	/**
	 * Function WBP_Sheik_PlayersLeft.WBP_Sheik_PlayersLeft_C.OnNumPlayersAliveChanged_cb
	 */
	struct UWBP_Sheik_PlayersLeft_C_OnNumPlayersAliveChanged_cb_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_PlayersLeft.WBP_Sheik_PlayersLeft_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_PlayersLeft_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_PlayersLeft.WBP_Sheik_PlayersLeft_C.ExecuteUbergraph_WBP_Sheik_PlayersLeft
	 */
	struct UWBP_Sheik_PlayersLeft_C_ExecuteUbergraph_WBP_Sheik_PlayersLeft_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
