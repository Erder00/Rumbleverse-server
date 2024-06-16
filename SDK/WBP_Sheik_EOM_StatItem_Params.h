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
	 * Function WBP_Sheik_EOM_StatItem.WBP_Sheik_EOM_StatItem_C.SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_StatItem_1
	 */
	struct UWBP_Sheik_EOM_StatItem_C_SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_StatItem_1_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_StatItem.WBP_Sheik_EOM_StatItem_C.PlayShowSound
	 */
	struct UWBP_Sheik_EOM_StatItem_C_PlayShowSound_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_StatItem.WBP_Sheik_EOM_StatItem_C.PlayUISound
	 */
	struct UWBP_Sheik_EOM_StatItem_C_PlayUISound_Params
	{
	public:
		EUISounds                                                  SoundType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_StatItem.WBP_Sheik_EOM_StatItem_C.SetDisplayValues
	 */
	struct UWBP_Sheik_EOM_StatItem_C_SetDisplayValues_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Amount;                                                  // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsNewRecord;                                             // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsCoolNumber;                                            // 0x001D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_EOM_StatItem.WBP_Sheik_EOM_StatItem_C.Show
	 */
	struct UWBP_Sheik_EOM_StatItem_C_Show_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
