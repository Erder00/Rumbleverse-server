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
	 * Function WBP_CombatNotification_SuperstarPointsGained.WBP_CombatNotification_SuperstarPointsGained_C.ClearAccumulatedFame
	 */
	struct UWBP_CombatNotification_SuperstarPointsGained_C_ClearAccumulatedFame_Params
	{	};

	/**
	 * Function WBP_CombatNotification_SuperstarPointsGained.WBP_CombatNotification_SuperstarPointsGained_C.OnStarPowerEvent_cb
	 */
	struct UWBP_CombatNotification_SuperstarPointsGained_C_OnStarPowerEvent_cb_Params
	{
	public:
		float                                                      FameAmount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FameMax;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FamePercentage;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EFameSource                                                FameSource;                                              // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0FKZ[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_CombatNotification_SuperstarPointsGained.WBP_CombatNotification_SuperstarPointsGained_C.SetForPlayer
	 */
	struct UWBP_CombatNotification_SuperstarPointsGained_C_SetForPlayer_Params
	{
	public:
		class ASheikPlayerStateCommon*                             PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CombatNotification_SuperstarPointsGained.WBP_CombatNotification_SuperstarPointsGained_C.ShowSuperstarGainedPointsAnimation
	 */
	struct UWBP_CombatNotification_SuperstarPointsGained_C_ShowSuperstarGainedPointsAnimation_Params
	{	};

	/**
	 * Function WBP_CombatNotification_SuperstarPointsGained.WBP_CombatNotification_SuperstarPointsGained_C.ShiftUp
	 */
	struct UWBP_CombatNotification_SuperstarPointsGained_C_ShiftUp_Params
	{	};

	/**
	 * Function WBP_CombatNotification_SuperstarPointsGained.WBP_CombatNotification_SuperstarPointsGained_C.SetStarPointsIncreaseNumber
	 */
	struct UWBP_CombatNotification_SuperstarPointsGained_C_SetStarPointsIncreaseNumber_Params
	{
	public:
		float                                                      StarPoints;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N0E1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_CombatNotification_SuperstarPointsGained.WBP_CombatNotification_SuperstarPointsGained_C.ConstructOnlyOnce
	 */
	struct UWBP_CombatNotification_SuperstarPointsGained_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_CombatNotification_SuperstarPointsGained.WBP_CombatNotification_SuperstarPointsGained_C.ExecuteUbergraph_WBP_CombatNotification_SuperstarPointsGained
	 */
	struct UWBP_CombatNotification_SuperstarPointsGained_C_ExecuteUbergraph_WBP_CombatNotification_SuperstarPointsGained_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BG58[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
