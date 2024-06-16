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
	 * Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.FadeOutFinished_cb
	 */
	struct UWBP_Sheik_RingTimeOut_C_FadeOutFinished_cb_Params
	{	};

	/**
	 * Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.StopNotification
	 */
	struct UWBP_Sheik_RingTimeOut_C_StopNotification_Params
	{
	public:
		bool                                                       SkipAnim;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.OnGameFlowStateChanged_cb
	 */
	struct UWBP_Sheik_RingTimeOut_C_OnGameFlowStateChanged_cb_Params
	{
	public:
		EGameFlowState                                             State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.FadeOutAnimFinished
	 */
	struct UWBP_Sheik_RingTimeOut_C_FadeOutAnimFinished_Params
	{	};

	/**
	 * Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.PlayNotification
	 */
	struct UWBP_Sheik_RingTimeOut_C_PlayNotification_Params
	{
	public:
		int32_t                                                    Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_RingTimeOut_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.SetSpeedFactor_BP
	 */
	struct UWBP_Sheik_RingTimeOut_C_SetSpeedFactor_BP_Params
	{
	public:
		float                                                      NewSpeedFactor;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.StartAnnouncement_BP
	 */
	struct UWBP_Sheik_RingTimeOut_C_StartAnnouncement_BP_Params
	{
	public:
		struct FSheikAnnouncement                                  SheikAnnouncementData;                                   // 0x0000(0x0200)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.CloseAnnouncement_BP
	 */
	struct UWBP_Sheik_RingTimeOut_C_CloseAnnouncement_BP_Params
	{	};

	/**
	 * Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.ExecuteUbergraph_WBP_Sheik_RingTimeOut
	 */
	struct UWBP_Sheik_RingTimeOut_C_ExecuteUbergraph_WBP_Sheik_RingTimeOut_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
