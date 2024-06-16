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
	 * Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.HandleOnPartyMemberLeftServer_cb
	 */
	struct UWBP_Sheik_TeammateInfoContainer_C_HandleOnPartyMemberLeftServer_cb_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.SetupPlaygroundPartyUI
	 */
	struct UWBP_Sheik_TeammateInfoContainer_C_SetupPlaygroundPartyUI_Params
	{	};

	/**
	 * Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.GetPartyManager
	 */
	struct UWBP_Sheik_TeammateInfoContainer_C_GetPartyManager_Params
	{
	public:
		class USheikPartyManager*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.ClearNonTeammateInfo
	 */
	struct UWBP_Sheik_TeammateInfoContainer_C_ClearNonTeammateInfo_Params
	{
	public:
		TArray<class ASheikPlayerStateCommon*>                     ExistingTeammateStates;                                  // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.HandleOnTeammateLeftServer_cb
	 */
	struct UWBP_Sheik_TeammateInfoContainer_C_HandleOnTeammateLeftServer_cb_Params
	{
	public:
		class AIGPlayerState*                                      ExitingTeammate;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.HandleOnSpectatorInfoUpdated
	 */
	struct UWBP_Sheik_TeammateInfoContainer_C_HandleOnSpectatorInfoUpdated_Params
	{
	public:
		struct FSheikSpectatorInfo                                 NewSpectatorInfo;                                        // 0x0000(0x00E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.ClearList
	 */
	struct UWBP_Sheik_TeammateInfoContainer_C_ClearList_Params
	{	};

	/**
	 * Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.Handle on Team Info Updated
	 */
	struct UWBP_Sheik_TeammateInfoContainer_C_HandleonTeamInfoUpdated_Params
	{	};

	/**
	 * Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_TeammateInfoContainer_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.UpdateTeammateHUDInfo
	 */
	struct UWBP_Sheik_TeammateInfoContainer_C_UpdateTeammateHUDInfo_Params
	{	};

	/**
	 * Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.ExecuteUbergraph_WBP_Sheik_TeammateInfoContainer
	 */
	struct UWBP_Sheik_TeammateInfoContainer_C_ExecuteUbergraph_WBP_Sheik_TeammateInfoContainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
