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
	 * Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.OnPinEvent
	 */
	struct UWBP_Sheik_DownedCountdown_C_OnPinEvent_Params
	{
	public:
		ESheikPinEventType                                         EventType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JUSO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASheikCharacter*                                     Attacker;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASheikCharacter*                                     Victim;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.HandleOnDownedTimeChanged
	 */
	struct UWBP_Sheik_DownedCountdown_C_HandleOnDownedTimeChanged_Params
	{
	public:
		float                                                      RecoverTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.KoInsuranceActivated
	 */
	struct UWBP_Sheik_DownedCountdown_C_KoInsuranceActivated_Params
	{	};

	/**
	 * Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.UpdateDownedCountdown
	 */
	struct UWBP_Sheik_DownedCountdown_C_UpdateDownedCountdown_Params
	{
	public:
		float                                                      DownedTimeLeft;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_584X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.HandleOnSpectatorInfoChanged
	 */
	struct UWBP_Sheik_DownedCountdown_C_HandleOnSpectatorInfoChanged_Params
	{
	public:
		struct FSheikSpectatorInfo                                 NewSpectatorInfo;                                        // 0x0000(0x00E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.SetForPlayer
	 */
	struct UWBP_Sheik_DownedCountdown_C_SetForPlayer_Params
	{
	public:
		class ASheikPlayerStateCommon*                             SheikPlayerState;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.OnKnockoutOccured
	 */
	struct UWBP_Sheik_DownedCountdown_C_OnKnockoutOccured_Params
	{
	public:
		struct FIGKnockOutData                                     KnockOutData;                                            // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.ShowCountdown
	 */
	struct UWBP_Sheik_DownedCountdown_C_ShowCountdown_Params
	{
	public:
		bool                                                       ShowCountdown;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.UpdatePromptPosition
	 */
	struct UWBP_Sheik_DownedCountdown_C_UpdatePromptPosition_Params
	{	};

	/**
	 * Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_DownedCountdown_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.Tick
	 */
	struct UWBP_Sheik_DownedCountdown_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.ExecuteUbergraph_WBP_Sheik_DownedCountdown
	 */
	struct UWBP_Sheik_DownedCountdown_C_ExecuteUbergraph_WBP_Sheik_DownedCountdown_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
