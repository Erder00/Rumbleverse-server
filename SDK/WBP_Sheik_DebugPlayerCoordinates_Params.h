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
	 * Function WBP_Sheik_DebugPlayerCoordinates.WBP_Sheik_DebugPlayerCoordinates_C.SetForPlayer
	 */
	struct UWBP_Sheik_DebugPlayerCoordinates_C_SetForPlayer_Params
	{
	public:
		class ASheikPlayerStateCommon*                             SpectatorPlayerState;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_DebugPlayerCoordinates.WBP_Sheik_DebugPlayerCoordinates_C.Tick
	 */
	struct UWBP_Sheik_DebugPlayerCoordinates_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_DebugPlayerCoordinates.WBP_Sheik_DebugPlayerCoordinates_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_DebugPlayerCoordinates_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_DebugPlayerCoordinates.WBP_Sheik_DebugPlayerCoordinates_C.ExecuteUbergraph_WBP_Sheik_DebugPlayerCoordinates
	 */
	struct UWBP_Sheik_DebugPlayerCoordinates_C_ExecuteUbergraph_WBP_Sheik_DebugPlayerCoordinates_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
