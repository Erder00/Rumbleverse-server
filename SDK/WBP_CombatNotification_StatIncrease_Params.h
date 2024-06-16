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
	 * Function WBP_CombatNotification_StatIncrease.WBP_CombatNotification_StatIncrease_C.SetStaminaFontAndIcon
	 */
	struct UWBP_CombatNotification_StatIncrease_C_SetStaminaFontAndIcon_Params
	{	};

	/**
	 * Function WBP_CombatNotification_StatIncrease.WBP_CombatNotification_StatIncrease_C.SetAttackFontAndIcon
	 */
	struct UWBP_CombatNotification_StatIncrease_C_SetAttackFontAndIcon_Params
	{	};

	/**
	 * Function WBP_CombatNotification_StatIncrease.WBP_CombatNotification_StatIncrease_C.SetHealthFontAndIcon
	 */
	struct UWBP_CombatNotification_StatIncrease_C_SetHealthFontAndIcon_Params
	{	};

	/**
	 * Function WBP_CombatNotification_StatIncrease.WBP_CombatNotification_StatIncrease_C.SetStatIncreaseInformationText
	 */
	struct UWBP_CombatNotification_StatIncrease_C_SetStatIncreaseInformationText_Params
	{
	public:
		class FText                                                StatType;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      StatPercentage;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S3ZC[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_CombatNotification_StatIncrease.WBP_CombatNotification_StatIncrease_C.ShiftUp
	 */
	struct UWBP_CombatNotification_StatIncrease_C_ShiftUp_Params
	{
	public:
		class FText                                                StatType;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      StatIncrease;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FPCS[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_CombatNotification_StatIncrease.WBP_CombatNotification_StatIncrease_C.ShowStatIncreaseNotif
	 */
	struct UWBP_CombatNotification_StatIncrease_C_ShowStatIncreaseNotif_Params
	{
	public:
		class FText                                                StatType;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      StatPercentageIncrease;                                  // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RBMC[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_CombatNotification_StatIncrease.WBP_CombatNotification_StatIncrease_C.ConstructOnlyOnce
	 */
	struct UWBP_CombatNotification_StatIncrease_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_CombatNotification_StatIncrease.WBP_CombatNotification_StatIncrease_C.ExecuteUbergraph_WBP_CombatNotification_StatIncrease
	 */
	struct UWBP_CombatNotification_StatIncrease_C_ExecuteUbergraph_WBP_CombatNotification_StatIncrease_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
