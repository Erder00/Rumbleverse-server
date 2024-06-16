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
	 * Function WBP_SheikPingMode.WBP_SheikPingMode_C.ClosePingContext
	 */
	struct UWBP_SheikPingMode_C_ClosePingContext_Params
	{	};

	/**
	 * Function WBP_SheikPingMode.WBP_SheikPingMode_C.ExitPingMode
	 */
	struct UWBP_SheikPingMode_C_ExitPingMode_Params
	{	};

	/**
	 * Function WBP_SheikPingMode.WBP_SheikPingMode_C.EnterPingMode
	 */
	struct UWBP_SheikPingMode_C_EnterPingMode_Params
	{	};

	/**
	 * Function WBP_SheikPingMode.WBP_SheikPingMode_C.ConstructOnlyOnce
	 */
	struct UWBP_SheikPingMode_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_SheikPingMode.WBP_SheikPingMode_C.OnPerformSpecialMoveEquipChoice
	 */
	struct UWBP_SheikPingMode_C_OnPerformSpecialMoveEquipChoice_Params
	{
	public:
		class UIGMoveMontage*                                      MoveMontage;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMoveTier                                                  ExecutionTier;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SheikPingMode.WBP_SheikPingMode_C.EmoteUIOpen
	 */
	struct UWBP_SheikPingMode_C_EmoteUIOpen_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SheikPingMode.WBP_SheikPingMode_C.OnCharacterDied
	 */
	struct UWBP_SheikPingMode_C_OnCharacterDied_Params
	{
	public:
		ECauseOfDeath                                              Cause;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SheikPingMode.WBP_SheikPingMode_C.OnCharacterDamaged
	 */
	struct UWBP_SheikPingMode_C_OnCharacterDamaged_Params
	{
	public:
		struct FIGInstanceHitData                                  HitData;                                                 // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_SheikPingMode.WBP_SheikPingMode_C.ExecuteUbergraph_WBP_SheikPingMode
	 */
	struct UWBP_SheikPingMode_C_ExecuteUbergraph_WBP_SheikPingMode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
