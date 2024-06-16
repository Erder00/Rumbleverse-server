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
	 * Function WBP_DamageScreenFlash.WBP_DamageScreenFlash_C.ConstructOnlyOnce
	 */
	struct UWBP_DamageScreenFlash_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_DamageScreenFlash.WBP_DamageScreenFlash_C.OnCharacterDamaged
	 */
	struct UWBP_DamageScreenFlash_C_OnCharacterDamaged_Params
	{
	public:
		struct FIGInstanceHitData                                  HitData;                                                 // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_DamageScreenFlash.WBP_DamageScreenFlash_C.ExecuteUbergraph_WBP_DamageScreenFlash
	 */
	struct UWBP_DamageScreenFlash_C_ExecuteUbergraph_WBP_DamageScreenFlash_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AHFC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
