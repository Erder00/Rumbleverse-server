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
	 * Function WBP_Sheik_Health.WBP_Sheik_Health_C.UpdateKOdAndHealthTextVisibility
	 */
	struct UWBP_Sheik_Health_C_UpdateKOdAndHealthTextVisibility_Params
	{
	public:
		bool                                                       ShouldShowKOdText;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Health.WBP_Sheik_Health_C.HandleOnSpectatorInfoChanged
	 */
	struct UWBP_Sheik_Health_C_HandleOnSpectatorInfoChanged_Params
	{
	public:
		struct FSheikSpectatorInfo                                 SpectatorInfo;                                           // 0x0000(0x00E0)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_Health.WBP_Sheik_Health_C.SetForPlayer
	 */
	struct UWBP_Sheik_Health_C_SetForPlayer_Params
	{
	public:
		class ASheikPlayerStateCommon*                             SheikPlayerState;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Health.WBP_Sheik_Health_C.OnHealthChanged_cb
	 */
	struct UWBP_Sheik_Health_C_OnHealthChanged_cb_Params
	{
	public:
		float                                                      LifePecentage;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LifeMax;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsInDangerZone;                                         // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SJ9F[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DangerZoneThreshold;                                     // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Health.WBP_Sheik_Health_C.OnKnockout
	 */
	struct UWBP_Sheik_Health_C_OnKnockout_Params
	{
	public:
		struct FIGKnockOutData                                     KnockOutData;                                            // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Health.WBP_Sheik_Health_C.KOProtection
	 */
	struct UWBP_Sheik_Health_C_KOProtection_Params
	{	};

	/**
	 * Function WBP_Sheik_Health.WBP_Sheik_Health_C.DuosDowned
	 */
	struct UWBP_Sheik_Health_C_DuosDowned_Params
	{
	public:
		ESheikPinEventType                                         EventType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HO9V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASheikCharacter*                                     Attacker;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASheikCharacter*                                     Victim;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Health.WBP_Sheik_Health_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_Health_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_Health.WBP_Sheik_Health_C.ExecuteUbergraph_WBP_Sheik_Health
	 */
	struct UWBP_Sheik_Health_C_ExecuteUbergraph_WBP_Sheik_Health_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TOZ8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Health.WBP_Sheik_Health_C.DisableSuperStarMeter__DelegateSignature
	 */
	struct UWBP_Sheik_Health_C_DisableSuperStarMeter__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
