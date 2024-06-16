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
	 * Function Bat_Key.Bat_Key_C.LockedCrateRadarVFX_Deactivate
	 */
	struct ABat_Key_C_LockedCrateRadarVFX_Deactivate_Params
	{	};

	/**
	 * Function Bat_Key.Bat_Key_C.LockedCrateRadarVFX_Spawn
	 */
	struct ABat_Key_C_LockedCrateRadarVFX_Spawn_Params
	{	};

	/**
	 * Function Bat_Key.Bat_Key_C.SpawnKeyVFX
	 */
	struct ABat_Key_C_SpawnKeyVFX_Params
	{	};

	/**
	 * Function Bat_Key.Bat_Key_C.OnDurabilityChanged
	 */
	struct ABat_Key_C_OnDurabilityChanged_Params
	{	};

	/**
	 * Function Bat_Key.Bat_Key_C.OnPickedUp
	 */
	struct ABat_Key_C_OnPickedUp_Params
	{	};

	/**
	 * Function Bat_Key.Bat_Key_C.OnDropped
	 */
	struct ABat_Key_C_OnDropped_Params
	{	};

	/**
	 * Function Bat_Key.Bat_Key_C.OnLockedCrateRadarTierChanged
	 */
	struct ABat_Key_C_OnLockedCrateRadarTierChanged_Params
	{
	public:
		int32_t                                                    EffectTiers;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Bat_Key.Bat_Key_C.ExecuteUbergraph_Bat_Key
	 */
	struct ABat_Key_C_ExecuteUbergraph_Bat_Key_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
