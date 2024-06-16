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
	 * Function WBP_Sheik_EOM_ChampionNotification.WBP_Sheik_EOM_ChampionNotification_C.UpdateNotificationSnowball
	 */
	struct UWBP_Sheik_EOM_ChampionNotification_C_UpdateNotificationSnowball_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_ChampionNotification.WBP_Sheik_EOM_ChampionNotification_C.IsSnowballFight
	 */
	struct UWBP_Sheik_EOM_ChampionNotification_C_IsSnowballFight_Params
	{
	public:
		bool                                                       IsSnowballFight;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HVHT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_EOM_ChampionNotification.WBP_Sheik_EOM_ChampionNotification_C.HideChampionNotification
	 */
	struct UWBP_Sheik_EOM_ChampionNotification_C_HideChampionNotification_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_ChampionNotification.WBP_Sheik_EOM_ChampionNotification_C.ShowChampionNotification
	 */
	struct UWBP_Sheik_EOM_ChampionNotification_C_ShowChampionNotification_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_ChampionNotification.WBP_Sheik_EOM_ChampionNotification_C.SetBRWinnerText
	 */
	struct UWBP_Sheik_EOM_ChampionNotification_C_SetBRWinnerText_Params
	{
	public:
		bool                                                       IsSolo;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_EOM_ChampionNotification.WBP_Sheik_EOM_ChampionNotification_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_EOM_ChampionNotification_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_ChampionNotification.WBP_Sheik_EOM_ChampionNotification_C.ExecuteUbergraph_WBP_Sheik_EOM_ChampionNotification
	 */
	struct UWBP_Sheik_EOM_ChampionNotification_C_ExecuteUbergraph_WBP_Sheik_EOM_ChampionNotification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JJL0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
