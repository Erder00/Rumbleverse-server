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
	 * Function WBP_MiniMap.WBP_MiniMap_C.OnTeamInfoUpdated_cb
	 */
	struct UWBP_MiniMap_C_OnTeamInfoUpdated_cb_Params
	{	};

	/**
	 * Function WBP_MiniMap.WBP_MiniMap_C.ConstructOnlyOnce
	 */
	struct UWBP_MiniMap_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_MiniMap.WBP_MiniMap_C.HandleOnUpdateWaypoints_BP
	 */
	struct UWBP_MiniMap_C_HandleOnUpdateWaypoints_BP_Params
	{
	public:
		TArray<struct FSheikWaypointInfo>                          Waypoints;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_MiniMap.WBP_MiniMap_C.ExecuteUbergraph_WBP_MiniMap
	 */
	struct UWBP_MiniMap_C_ExecuteUbergraph_WBP_MiniMap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AT8I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
