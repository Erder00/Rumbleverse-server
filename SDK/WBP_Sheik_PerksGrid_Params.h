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
	 * Function WBP_Sheik_PerksGrid.WBP_Sheik_PerksGrid_C.GetIsSnowballFight
	 */
	struct UWBP_Sheik_PerksGrid_C_GetIsSnowballFight_Params
	{
	public:
		bool                                                       IsSnowballFight;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_91MM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_PerksGrid.WBP_Sheik_PerksGrid_C.OnSpectatorInfoChanged
	 */
	struct UWBP_Sheik_PerksGrid_C_OnSpectatorInfoChanged_Params
	{
	public:
		struct FSheikSpectatorInfo                                 SpectatorInfo;                                           // 0x0000(0x00E0)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_PerksGrid.WBP_Sheik_PerksGrid_C.SetForPlayer
	 */
	struct UWBP_Sheik_PerksGrid_C_SetForPlayer_Params
	{
	public:
		class ASheikPlayerStateCommon*                             PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_PerksGrid.WBP_Sheik_PerksGrid_C.Clear and Generate Perks
	 */
	struct UWBP_Sheik_PerksGrid_C_ClearandGeneratePerks_Params
	{	};

	/**
	 * Function WBP_Sheik_PerksGrid.WBP_Sheik_PerksGrid_C.GetFreePerkSlot
	 */
	struct UWBP_Sheik_PerksGrid_C_GetFreePerkSlot_Params
	{
	public:
		class UWBP_Sheik_PerkSlot_C*                               NewParam;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_PerksGrid.WBP_Sheik_PerksGrid_C.RemovePerk
	 */
	struct UWBP_Sheik_PerksGrid_C_RemovePerk_Params
	{
	public:
		struct FIGPerkHUDInfo                                      ToRemove;                                                // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_PerksGrid.WBP_Sheik_PerksGrid_C.AddNewPerk
	 */
	struct UWBP_Sheik_PerksGrid_C_AddNewPerk_Params
	{
	public:
		struct FIGPerkHUDInfo                                      PerkInfo;                                                // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_PerksGrid.WBP_Sheik_PerksGrid_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_PerksGrid_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_PerksGrid.WBP_Sheik_PerksGrid_C.ExecuteUbergraph_WBP_Sheik_PerksGrid
	 */
	struct UWBP_Sheik_PerksGrid_C_ExecuteUbergraph_WBP_Sheik_PerksGrid_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MJAT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
