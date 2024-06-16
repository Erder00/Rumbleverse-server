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
	 * Function WBP_CombatNotification_TeammateDown.WBP_CombatNotification_TeammateDown_C.SetTeammateInfo
	 */
	struct UWBP_CombatNotification_TeammateDown_C_SetTeammateInfo_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		EKnockoutType                                              KnockoutType;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D5YK[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_CombatNotification_TeammateDown.WBP_CombatNotification_TeammateDown_C.ShiftDown
	 */
	struct UWBP_CombatNotification_TeammateDown_C_ShiftDown_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		EKnockoutType                                              KnockoutType;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0VO3[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_CombatNotification_TeammateDown.WBP_CombatNotification_TeammateDown_C.ShowTeammateNotif
	 */
	struct UWBP_CombatNotification_TeammateDown_C_ShowTeammateNotif_Params
	{
	public:
		class FText                                                TeammateName;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		EKnockoutType                                              KnockoutType;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JLLV[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_CombatNotification_TeammateDown.WBP_CombatNotification_TeammateDown_C.ConstructOnlyOnce
	 */
	struct UWBP_CombatNotification_TeammateDown_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_CombatNotification_TeammateDown.WBP_CombatNotification_TeammateDown_C.ExecuteUbergraph_WBP_CombatNotification_TeammateDown
	 */
	struct UWBP_CombatNotification_TeammateDown_C_ExecuteUbergraph_WBP_CombatNotification_TeammateDown_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
