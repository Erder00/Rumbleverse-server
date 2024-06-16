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
	 * Function WBP_Sheik_HUDCombatModeIndicator.WBP_Sheik_HUDCombatModeIndicator_C.RefreshCombatModeText
	 */
	struct UWBP_Sheik_HUDCombatModeIndicator_C_RefreshCombatModeText_Params
	{
	public:
		bool                                                       IsInCombatMode;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_HUDCombatModeIndicator.WBP_Sheik_HUDCombatModeIndicator_C.SetVisibilityByMapLoadTag
	 */
	struct UWBP_Sheik_HUDCombatModeIndicator_C_SetVisibilityByMapLoadTag_Params
	{	};

	/**
	 * Function WBP_Sheik_HUDCombatModeIndicator.WBP_Sheik_HUDCombatModeIndicator_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_HUDCombatModeIndicator_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_HUDCombatModeIndicator.WBP_Sheik_HUDCombatModeIndicator_C.ExecuteUbergraph_WBP_Sheik_HUDCombatModeIndicator
	 */
	struct UWBP_Sheik_HUDCombatModeIndicator_C_ExecuteUbergraph_WBP_Sheik_HUDCombatModeIndicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SU8Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
