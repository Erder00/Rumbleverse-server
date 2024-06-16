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
	 * Function WBP_CombatNotification_PerkEarned.WBP_CombatNotification_PerkEarned_C.GetPerkTextureFromDataTable
	 */
	struct UWBP_CombatNotification_PerkEarned_C_GetPerkTextureFromDataTable_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          OutTexture;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CombatNotification_PerkEarned.WBP_CombatNotification_PerkEarned_C.SetPerkIconAndName
	 */
	struct UWBP_CombatNotification_PerkEarned_C_SetPerkIconAndName_Params
	{
	public:
		struct FIGPerkHUDInfo                                      PerkInfo;                                                // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_CombatNotification_PerkEarned.WBP_CombatNotification_PerkEarned_C.ShiftUp
	 */
	struct UWBP_CombatNotification_PerkEarned_C_ShiftUp_Params
	{	};

	/**
	 * Function WBP_CombatNotification_PerkEarned.WBP_CombatNotification_PerkEarned_C.ShowPerkEarnedNotif
	 */
	struct UWBP_CombatNotification_PerkEarned_C_ShowPerkEarnedNotif_Params
	{	};

	/**
	 * Function WBP_CombatNotification_PerkEarned.WBP_CombatNotification_PerkEarned_C.ConstructOnlyOnce
	 */
	struct UWBP_CombatNotification_PerkEarned_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_CombatNotification_PerkEarned.WBP_CombatNotification_PerkEarned_C.ExecuteUbergraph_WBP_CombatNotification_PerkEarned
	 */
	struct UWBP_CombatNotification_PerkEarned_C_ExecuteUbergraph_WBP_CombatNotification_PerkEarned_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
