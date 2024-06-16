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
	 * Function WBP_Sheik_Stats.WBP_Sheik_Stats_C.SetForPlayer
	 */
	struct UWBP_Sheik_Stats_C_SetForPlayer_Params
	{
	public:
		class ASheikPlayerStateCommon*                             SheikPlayerState;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Stats.WBP_Sheik_Stats_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_Stats_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_Stats.WBP_Sheik_Stats_C.ExecuteUbergraph_WBP_Sheik_Stats
	 */
	struct UWBP_Sheik_Stats_C_ExecuteUbergraph_WBP_Sheik_Stats_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
