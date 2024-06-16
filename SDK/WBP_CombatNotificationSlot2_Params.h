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
	 * Function WBP_CombatNotificationSlot2.WBP_CombatNotificationSlot2_C.OnKnockedOut_cb
	 */
	struct UWBP_CombatNotificationSlot2_C_OnKnockedOut_cb_Params
	{
	public:
		struct FIGKnockOutData                                     KnockOutData;                                            // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_CombatNotificationSlot2.WBP_CombatNotificationSlot2_C.SetCurrentCharacter
	 */
	struct UWBP_CombatNotificationSlot2_C_SetCurrentCharacter_Params
	{
	public:
		class ASheikPlayerStateCommon*                             PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CombatNotificationSlot2.WBP_CombatNotificationSlot2_C.AddTextToNotifLine
	 */
	struct UWBP_CombatNotificationSlot2_C_AddTextToNotifLine_Params
	{
	public:
		class FText                                                PlayerName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                PlayerStatus;                                            // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		EKnockoutType                                              KnockoutType;                                            // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3WPV[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_CombatNotificationSlot2.WBP_CombatNotificationSlot2_C.SetupEnemyNotifLines
	 */
	struct UWBP_CombatNotificationSlot2_C_SetupEnemyNotifLines_Params
	{	};

	/**
	 * Function WBP_CombatNotificationSlot2.WBP_CombatNotificationSlot2_C.ConstructOnlyOnce
	 */
	struct UWBP_CombatNotificationSlot2_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_CombatNotificationSlot2.WBP_CombatNotificationSlot2_C.ExecuteUbergraph_WBP_CombatNotificationSlot2
	 */
	struct UWBP_CombatNotificationSlot2_C_ExecuteUbergraph_WBP_CombatNotificationSlot2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
