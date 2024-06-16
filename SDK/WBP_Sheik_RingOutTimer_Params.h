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
	 * Function WBP_Sheik_RingOutTimer.WBP_Sheik_RingOutTimer_C.OnRingOutTimeUpdated_cb
	 */
	struct UWBP_Sheik_RingOutTimer_C_OnRingOutTimeUpdated_cb_Params
	{
	public:
		int32_t                                                    Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_RingOutTimer.WBP_Sheik_RingOutTimer_C.OnFlowStateChanged_cb
	 */
	struct UWBP_Sheik_RingOutTimer_C_OnFlowStateChanged_cb_Params
	{
	public:
		EGameFlowState                                             State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_RingOutTimer.WBP_Sheik_RingOutTimer_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_RingOutTimer_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_RingOutTimer.WBP_Sheik_RingOutTimer_C.ExecuteUbergraph_WBP_Sheik_RingOutTimer
	 */
	struct UWBP_Sheik_RingOutTimer_C_ExecuteUbergraph_WBP_Sheik_RingOutTimer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BUV8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
