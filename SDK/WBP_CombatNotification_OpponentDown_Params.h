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
	 * Function WBP_CombatNotification_OpponentDown.WBP_CombatNotification_OpponentDown_C.ShowNotifComplete
	 */
	struct UWBP_CombatNotification_OpponentDown_C_ShowNotifComplete_Params
	{	};

	/**
	 * Function WBP_CombatNotification_OpponentDown.WBP_CombatNotification_OpponentDown_C.SetPlayerInfo
	 */
	struct UWBP_CombatNotification_OpponentDown_C_SetPlayerInfo_Params
	{
	public:
		class FText                                                PlayerName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                PlayerKnockout;                                          // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		EKnockoutType                                              KnockoutType;                                            // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CombatNotification_OpponentDown.WBP_CombatNotification_OpponentDown_C.ShiftDown
	 */
	struct UWBP_CombatNotification_OpponentDown_C_ShiftDown_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Status;                                                  // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		EKnockoutType                                              KnockoutType;                                            // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_01L1[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_CombatNotification_OpponentDown.WBP_CombatNotification_OpponentDown_C.ShowCombatNotif
	 */
	struct UWBP_CombatNotification_OpponentDown_C_ShowCombatNotif_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                PlayerStatus;                                            // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		EKnockoutType                                              KnockoutType;                                            // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KCQI[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_CombatNotification_OpponentDown.WBP_CombatNotification_OpponentDown_C.ConstructOnlyOnce
	 */
	struct UWBP_CombatNotification_OpponentDown_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_CombatNotification_OpponentDown.WBP_CombatNotification_OpponentDown_C.ExecuteUbergraph_WBP_CombatNotification_OpponentDown
	 */
	struct UWBP_CombatNotification_OpponentDown_C_ExecuteUbergraph_WBP_CombatNotification_OpponentDown_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
