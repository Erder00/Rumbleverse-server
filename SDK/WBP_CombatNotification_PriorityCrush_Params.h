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
	 * Function WBP_CombatNotification_PriorityCrush.WBP_CombatNotification_PriorityCrush_C.Set Crush Text and Font
	 */
	struct UWBP_CombatNotification_PriorityCrush_C_SetCrushTextandFont_Params
	{
	public:
		EIGClashPriorityTier                                       AttackPriority;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EIGClashPriorityTier                                       VictimPriority;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CombatNotification_PriorityCrush.WBP_CombatNotification_PriorityCrush_C.ShiftUp
	 */
	struct UWBP_CombatNotification_PriorityCrush_C_ShiftUp_Params
	{
	public:
		class FText                                                CombatCrushText;                                         // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_CombatNotification_PriorityCrush.WBP_CombatNotification_PriorityCrush_C.ShowPriorityCrushNotif
	 */
	struct UWBP_CombatNotification_PriorityCrush_C_ShowPriorityCrushNotif_Params
	{	};

	/**
	 * Function WBP_CombatNotification_PriorityCrush.WBP_CombatNotification_PriorityCrush_C.ConstructOnlyOnce
	 */
	struct UWBP_CombatNotification_PriorityCrush_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_CombatNotification_PriorityCrush.WBP_CombatNotification_PriorityCrush_C.ExecuteUbergraph_WBP_CombatNotification_PriorityCrush
	 */
	struct UWBP_CombatNotification_PriorityCrush_C_ExecuteUbergraph_WBP_CombatNotification_PriorityCrush_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
