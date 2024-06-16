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
	 * Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.OnPerkAcquired
	 */
	struct UWBP_CombatNotificationSlot1_C_OnPerkAcquired_Params
	{
	public:
		struct FIGPerkHUDInfo                                      PerkInfo;                                                // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.GetTextForPriority
	 */
	struct UWBP_CombatNotificationSlot1_C_GetTextForPriority_Params
	{
	public:
		int32_t                                                    RawPriority;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N8CR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                OutputText;                                              // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.OnModValueChanged_cb
	 */
	struct UWBP_CombatNotificationSlot1_C_OnModValueChanged_cb_Params
	{
	public:
		ESheikModValueType                                         Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S0NX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.On KOInsurance Activate
	 */
	struct UWBP_CombatNotificationSlot1_C_OnKOInsuranceActivate_Params
	{	};

	/**
	 * Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.OnWinded
	 */
	struct UWBP_CombatNotificationSlot1_C_OnWinded_Params
	{
	public:
		float                                                      StaminaPercentage;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.OnSuperstarActivated
	 */
	struct UWBP_CombatNotificationSlot1_C_OnSuperstarActivated_Params
	{	};

	/**
	 * Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.OnMyAttackHit_cb
	 */
	struct UWBP_CombatNotificationSlot1_C_OnMyAttackHit_cb_Params
	{
	public:
		bool                                                       bClashed;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bCrushed;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bStaminaBreak;                                           // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bUnblockable;                                            // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BaseDamage;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FinalDamage;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EIGClashPriorityTier                                       AttackerPriority;                                        // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EIGClashPriorityTier                                       VictimPriority;                                          // 0x000D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.OnStarPowerEvent_cb
	 */
	struct UWBP_CombatNotificationSlot1_C_OnStarPowerEvent_cb_Params
	{
	public:
		float                                                      FameAmount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FameMax;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FamePercentage;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EFameSource                                                FameSource;                                              // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.SetForPlayer
	 */
	struct UWBP_CombatNotificationSlot1_C_SetForPlayer_Params
	{
	public:
		class ASheikPlayerStateCommon*                             PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.ConstructOnlyOnce
	 */
	struct UWBP_CombatNotificationSlot1_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.ExecuteUbergraph_WBP_CombatNotificationSlot1
	 */
	struct UWBP_CombatNotificationSlot1_C_ExecuteUbergraph_WBP_CombatNotificationSlot1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P512[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
