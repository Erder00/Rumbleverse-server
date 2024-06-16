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
	 * Function WBP_Sheik_RingNextShrink.WBP_Sheik_RingNextShrink_C.PlayNotification
	 */
	struct UWBP_Sheik_RingNextShrink_C_PlayNotification_Params
	{
	public:
		int32_t                                                    Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9PEB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_RingNextShrink.WBP_Sheik_RingNextShrink_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_RingNextShrink_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_RingNextShrink.WBP_Sheik_RingNextShrink_C.HandleOnAnimationFinished
	 */
	struct UWBP_Sheik_RingNextShrink_C_HandleOnAnimationFinished_Params
	{	};

	/**
	 * Function WBP_Sheik_RingNextShrink.WBP_Sheik_RingNextShrink_C.SetSpeedFactor_BP
	 */
	struct UWBP_Sheik_RingNextShrink_C_SetSpeedFactor_BP_Params
	{
	public:
		float                                                      NewSpeedFactor;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_RingNextShrink.WBP_Sheik_RingNextShrink_C.StartAnnouncement_BP
	 */
	struct UWBP_Sheik_RingNextShrink_C_StartAnnouncement_BP_Params
	{
	public:
		struct FSheikAnnouncement                                  SheikAnnouncementData;                                   // 0x0000(0x0200)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_RingNextShrink.WBP_Sheik_RingNextShrink_C.CloseAnnouncement_BP
	 */
	struct UWBP_Sheik_RingNextShrink_C_CloseAnnouncement_BP_Params
	{	};

	/**
	 * Function WBP_Sheik_RingNextShrink.WBP_Sheik_RingNextShrink_C.ExecuteUbergraph_WBP_Sheik_RingNextShrink
	 */
	struct UWBP_Sheik_RingNextShrink_C_ExecuteUbergraph_WBP_Sheik_RingNextShrink_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
