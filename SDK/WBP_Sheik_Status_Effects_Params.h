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
	 * Function WBP_Sheik_Status_Effects.WBP_Sheik_Status_Effects_C.SetForPlayer
	 */
	struct UWBP_Sheik_Status_Effects_C_SetForPlayer_Params
	{
	public:
		class ASheikPlayerStateCommon*                             PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Status_Effects.WBP_Sheik_Status_Effects_C.On Spectator Info Changed
	 */
	struct UWBP_Sheik_Status_Effects_C_OnSpectatorInfoChanged_Params
	{
	public:
		struct FSheikSpectatorInfo                                 SpectatorInfo;                                           // 0x0000(0x00E0)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_Status_Effects.WBP_Sheik_Status_Effects_C.SetColumns
	 */
	struct UWBP_Sheik_Status_Effects_C_SetColumns_Params
	{	};

	/**
	 * Function WBP_Sheik_Status_Effects.WBP_Sheik_Status_Effects_C.UpdateStatusTimer
	 */
	struct UWBP_Sheik_Status_Effects_C_UpdateStatusTimer_Params
	{
	public:
		struct FIGPerkHUDInfo                                      HUDInfo;                                                 // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Status_Effects.WBP_Sheik_Status_Effects_C.GetFreeStatusSlot
	 */
	struct UWBP_Sheik_Status_Effects_C_GetFreeStatusSlot_Params
	{
	public:
		class UWBP_Sheik_StatusSlot_C*                             OutStatusSlot;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Status_Effects.WBP_Sheik_Status_Effects_C.RemoveStatus
	 */
	struct UWBP_Sheik_Status_Effects_C_RemoveStatus_Params
	{
	public:
		struct FIGPerkHUDInfo                                      HUDInfo;                                                 // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Status_Effects.WBP_Sheik_Status_Effects_C.AddStatus
	 */
	struct UWBP_Sheik_Status_Effects_C_AddStatus_Params
	{
	public:
		struct FIGPerkHUDInfo                                      HUDInfo;                                                 // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Status_Effects.WBP_Sheik_Status_Effects_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_Status_Effects_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_Status_Effects.WBP_Sheik_Status_Effects_C.ExecuteUbergraph_WBP_Sheik_Status_Effects
	 */
	struct UWBP_Sheik_Status_Effects_C_ExecuteUbergraph_WBP_Sheik_Status_Effects_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
