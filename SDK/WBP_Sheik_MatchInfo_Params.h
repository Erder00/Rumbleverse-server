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
	 * Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.SetTimerText
	 */
	struct UWBP_Sheik_MatchInfo_C_SetTimerText_Params
	{
	public:
		int32_t                                                    Min;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    sec;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.SetForPlayer
	 */
	struct UWBP_Sheik_MatchInfo_C_SetForPlayer_Params
	{
	public:
		class ASheikPlayerStateCommon*                             SheikPlayerState;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.OnTimeTillFreeRoamEnd_cb
	 */
	struct UWBP_Sheik_MatchInfo_C_OnTimeTillFreeRoamEnd_cb_Params
	{
	public:
		int32_t                                                    TimeTillFreeRoamEnd;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.OnEventEnd_cb
	 */
	struct UWBP_Sheik_MatchInfo_C_OnEventEnd_cb_Params
	{
	public:
		bool                                                       bIsParticipating;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.OnEventCountdownDisplayTimeChanged
	 */
	struct UWBP_Sheik_MatchInfo_C_OnEventCountdownDisplayTimeChanged_Params
	{
	public:
		int32_t                                                    NewDisplayTime;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsInEventRing;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsNearbyEventRing;                                       // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.OnEventEndDisplayTimeChanged_cb
	 */
	struct UWBP_Sheik_MatchInfo_C_OnEventEndDisplayTimeChanged_cb_Params
	{
	public:
		int32_t                                                    NewDisplayTime;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsParicipating;                                          // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QMSA[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.OnEventParticipate_cb
	 */
	struct UWBP_Sheik_MatchInfo_C_OnEventParticipate_cb_Params
	{
	public:
		bool                                                       IsParticipating;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.OnEventCountdownToStart_cb
	 */
	struct UWBP_Sheik_MatchInfo_C_OnEventCountdownToStart_cb_Params
	{
	public:
		int32_t                                                    SecondsToEventStart;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.SetIintialMatchInfo
	 */
	struct UWBP_Sheik_MatchInfo_C_SetIintialMatchInfo_Params
	{	};

	/**
	 * Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.UpdateTimer
	 */
	struct UWBP_Sheik_MatchInfo_C_UpdateTimer_Params
	{	};

	/**
	 * Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.OnRingStartsWaiting_cb
	 */
	struct UWBP_Sheik_MatchInfo_C_OnRingStartsWaiting_cb_Params
	{
	public:
		int32_t                                                    WaitTime;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.OnRingStartsSkrinking_cb
	 */
	struct UWBP_Sheik_MatchInfo_C_OnRingStartsSkrinking_cb_Params
	{
	public:
		float                                                      ShrinkTime;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.OnTimeTillLaunchChanged_cb
	 */
	struct UWBP_Sheik_MatchInfo_C_OnTimeTillLaunchChanged_cb_Params
	{
	public:
		int32_t                                                    NewTimeTillLaunch;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.Tick
	 */
	struct UWBP_Sheik_MatchInfo_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_MatchInfo_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.ExecuteUbergraph_WBP_Sheik_MatchInfo
	 */
	struct UWBP_Sheik_MatchInfo_C_ExecuteUbergraph_WBP_Sheik_MatchInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
