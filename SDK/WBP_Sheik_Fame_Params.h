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
	 * Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.OnKOInsuranceAllowedChanged_cb
	 */
	struct UWBP_Sheik_Fame_C_OnKOInsuranceAllowedChanged_cb_Params
	{
	public:
		bool                                                       bNewKOInsuranceAllowed;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.PlayUISound
	 */
	struct UWBP_Sheik_Fame_C_PlayUISound_Params
	{
	public:
		EUISounds                                                  SoundType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bPlaySound;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.SpectatorStarPowerEvent_cb
	 */
	struct UWBP_Sheik_Fame_C_SpectatorStarPowerEvent_cb_Params
	{
	public:
		float                                                      FameAmount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FameMax;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FamePercentage;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EFameSource                                                FameSource;                                              // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CGUA[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.StopKOProtection
	 */
	struct UWBP_Sheik_Fame_C_StopKOProtection_Params
	{	};

	/**
	 * Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.KOInsuranceActivated_cb
	 */
	struct UWBP_Sheik_Fame_C_KOInsuranceActivated_cb_Params
	{	};

	/**
	 * Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.SuperStarMode_cb
	 */
	struct UWBP_Sheik_Fame_C_SuperStarMode_cb_Params
	{
	public:
		bool                                                       SuperstarModeActive;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.UpdateMeter
	 */
	struct UWBP_Sheik_Fame_C_UpdateMeter_Params
	{	};

	/**
	 * Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.OnStarPowerChanged_cb
	 */
	struct UWBP_Sheik_Fame_C_OnStarPowerChanged_cb_Params
	{
	public:
		float                                                      FamePercentage;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FameTotal;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FamePercentageDelta;                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.SetForPlayer
	 */
	struct UWBP_Sheik_Fame_C_SetForPlayer_Params
	{
	public:
		class ASheikPlayerStateCommon*                             SheikPlayerState;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.UpdateSuperModeInputs
	 */
	struct UWBP_Sheik_Fame_C_UpdateSuperModeInputs_Params
	{
	public:
		EInputSource                                               InputSource;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.EnableKOInsurance
	 */
	struct UWBP_Sheik_Fame_C_EnableKOInsurance_Params
	{	};

	/**
	 * Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.RefreshEmptyMeter
	 */
	struct UWBP_Sheik_Fame_C_RefreshEmptyMeter_Params
	{	};

	/**
	 * Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.EnableSuperMode
	 */
	struct UWBP_Sheik_Fame_C_EnableSuperMode_Params
	{	};

	/**
	 * Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_Fame_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.OnInputSourceChanged
	 */
	struct UWBP_Sheik_Fame_C_OnInputSourceChanged_Params
	{
	public:
		struct FUserControllerData                                 OldInputSource;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FUserControllerData                                 NewInputSource;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.RefreshMeter
	 */
	struct UWBP_Sheik_Fame_C_RefreshMeter_Params
	{	};

	/**
	 * Function WBP_Sheik_Fame.WBP_Sheik_Fame_C.ExecuteUbergraph_WBP_Sheik_Fame
	 */
	struct UWBP_Sheik_Fame_C_ExecuteUbergraph_WBP_Sheik_Fame_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
