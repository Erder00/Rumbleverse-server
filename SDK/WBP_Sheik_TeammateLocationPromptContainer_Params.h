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
	 * Function WBP_Sheik_TeammateLocationPromptContainer.WBP_Sheik_TeammateLocationPromptContainer_C.OnTeammateLeftServer_cb
	 */
	struct UWBP_Sheik_TeammateLocationPromptContainer_C_OnTeammateLeftServer_cb_Params
	{
	public:
		class AIGPlayerState*                                      ExitingTeammate;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_TeammateLocationPromptContainer.WBP_Sheik_TeammateLocationPromptContainer_C.OnTeammateDied_cb
	 */
	struct UWBP_Sheik_TeammateLocationPromptContainer_C_OnTeammateDied_cb_Params
	{
	public:
		class AIGPlayerState*                                      TeammatePlayerState;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_TeammateLocationPromptContainer.WBP_Sheik_TeammateLocationPromptContainer_C.OnTeamInfoUpdated_cb
	 */
	struct UWBP_Sheik_TeammateLocationPromptContainer_C_OnTeamInfoUpdated_cb_Params
	{	};

	/**
	 * Function WBP_Sheik_TeammateLocationPromptContainer.WBP_Sheik_TeammateLocationPromptContainer_C.OnGameFlowStateChanged_cb
	 */
	struct UWBP_Sheik_TeammateLocationPromptContainer_C_OnGameFlowStateChanged_cb_Params
	{
	public:
		EGameFlowState                                             NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_TeammateLocationPromptContainer.WBP_Sheik_TeammateLocationPromptContainer_C.AddNewTeammates
	 */
	struct UWBP_Sheik_TeammateLocationPromptContainer_C_AddNewTeammates_Params
	{	};

	/**
	 * Function WBP_Sheik_TeammateLocationPromptContainer.WBP_Sheik_TeammateLocationPromptContainer_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_TeammateLocationPromptContainer_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_TeammateLocationPromptContainer.WBP_Sheik_TeammateLocationPromptContainer_C.ExecuteUbergraph_WBP_Sheik_TeammateLocationPromptContainer
	 */
	struct UWBP_Sheik_TeammateLocationPromptContainer_C_ExecuteUbergraph_WBP_Sheik_TeammateLocationPromptContainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
