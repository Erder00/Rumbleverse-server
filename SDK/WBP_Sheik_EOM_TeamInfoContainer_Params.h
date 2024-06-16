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
	 * Function WBP_Sheik_EOM_TeamInfoContainer.WBP_Sheik_EOM_TeamInfoContainer_C.ClearNonTeammateInfo
	 */
	struct UWBP_Sheik_EOM_TeamInfoContainer_C_ClearNonTeammateInfo_Params
	{
	public:
		TArray<class ASheikPlayerStateCommon*>                     ExistingTeammateStates;                                  // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Sheik_EOM_TeamInfoContainer.WBP_Sheik_EOM_TeamInfoContainer_C.HandleOnTeammateLeftSever_cb
	 */
	struct UWBP_Sheik_EOM_TeamInfoContainer_C_HandleOnTeammateLeftSever_cb_Params
	{
	public:
		class AIGPlayerState*                                      ExitingTeammate;                                         // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_TeamInfoContainer.WBP_Sheik_EOM_TeamInfoContainer_C.HandleOnTeamInfoUpdated
	 */
	struct UWBP_Sheik_EOM_TeamInfoContainer_C_HandleOnTeamInfoUpdated_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_TeamInfoContainer.WBP_Sheik_EOM_TeamInfoContainer_C.ClearList
	 */
	struct UWBP_Sheik_EOM_TeamInfoContainer_C_ClearList_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_TeamInfoContainer.WBP_Sheik_EOM_TeamInfoContainer_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_EOM_TeamInfoContainer_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_TeamInfoContainer.WBP_Sheik_EOM_TeamInfoContainer_C.ExecuteUbergraph_WBP_Sheik_EOM_TeamInfoContainer
	 */
	struct UWBP_Sheik_EOM_TeamInfoContainer_C_ExecuteUbergraph_WBP_Sheik_EOM_TeamInfoContainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
