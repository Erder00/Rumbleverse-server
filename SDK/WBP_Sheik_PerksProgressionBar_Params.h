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
	 * Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.OnSpectatedPlayerPerkLevelChanged
	 */
	struct UWBP_Sheik_PerksProgressionBar_C_OnSpectatedPlayerPerkLevelChanged_Params
	{
	public:
		int32_t                                                    PerkLevel;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.OnSpectatedPlayerPerkXPChanged
	 */
	struct UWBP_Sheik_PerksProgressionBar_C_OnSpectatedPlayerPerkXPChanged_Params
	{
	public:
		float                                                      PerkXP;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.SetForPlayer
	 */
	struct UWBP_Sheik_PerksProgressionBar_C_SetForPlayer_Params
	{
	public:
		class ASheikPlayerStateCommon*                             SheikPlayerState;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.Clear Progress Bar
	 */
	struct UWBP_Sheik_PerksProgressionBar_C_ClearProgressBar_Params
	{	};

	/**
	 * Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.UpdateCurrentPerkLevel
	 */
	struct UWBP_Sheik_PerksProgressionBar_C_UpdateCurrentPerkLevel_Params
	{
	public:
		struct FIGPerkHUDInfo                                      PerkInfo;                                                // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.UpdatePerkXP_TextValue
	 */
	struct UWBP_Sheik_PerksProgressionBar_C_UpdatePerkXP_TextValue_Params
	{
	public:
		class ASheikCharacter*                                     SheikCharacter;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.UpdatePerkXP_Meter
	 */
	struct UWBP_Sheik_PerksProgressionBar_C_UpdatePerkXP_Meter_Params
	{
	public:
		float                                                      PerkXPPercentage;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PerkXPTotal;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PerkXPPercentageDelta;                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WSDX[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.PreConstruct
	 */
	struct UWBP_Sheik_PerksProgressionBar_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_PerksProgressionBar_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.On Hud Region Visibility Changed
	 */
	struct UWBP_Sheik_PerksProgressionBar_C_OnHudRegionVisibilityChanged_Params
	{
	public:
		ESheikHudRegion                                            HudRegion;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bVisible;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.ExecuteUbergraph_WBP_Sheik_PerksProgressionBar
	 */
	struct UWBP_Sheik_PerksProgressionBar_C_ExecuteUbergraph_WBP_Sheik_PerksProgressionBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
