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
	 * Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.GetStartingWindedValue
	 */
	struct UWBP_Sheik_Stamina_C_GetStartingWindedValue_Params
	{
	public:
		float                                                      StartingWindedValue;                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CQJN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.OnWindedUpdated
	 */
	struct UWBP_Sheik_Stamina_C_OnWindedUpdated_Params
	{
	public:
		bool                                                       IsWinded;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_13X0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      StaminaPercentage;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.OnInsufficientStamina_cb
	 */
	struct UWBP_Sheik_Stamina_C_OnInsufficientStamina_cb_Params
	{
	public:
		float                                                      Stam;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KDHV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.SetForPlayer
	 */
	struct UWBP_Sheik_Stamina_C_SetForPlayer_Params
	{
	public:
		class ASheikPlayerStateCommon*                             SheikPlayerState;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.OnStaminaChanged_cb
	 */
	struct UWBP_Sheik_Stamina_C_OnStaminaChanged_cb_Params
	{
	public:
		float                                                      StaminaPecentage;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      StaminaMax;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.Tick
	 */
	struct UWBP_Sheik_Stamina_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.HandleOnWinded
	 */
	struct UWBP_Sheik_Stamina_C_HandleOnWinded_Params
	{
	public:
		float                                                      StaminaPercentage;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.HandleOnNoLongerWinded
	 */
	struct UWBP_Sheik_Stamina_C_HandleOnNoLongerWinded_Params
	{	};

	/**
	 * Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_Stamina_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.ExecuteUbergraph_WBP_Sheik_Stamina
	 */
	struct UWBP_Sheik_Stamina_C_ExecuteUbergraph_WBP_Sheik_Stamina_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
