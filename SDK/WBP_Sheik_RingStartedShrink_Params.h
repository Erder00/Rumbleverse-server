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
	 * Function WBP_Sheik_RingStartedShrink.WBP_Sheik_RingStartedShrink_C.PlayNotification
	 */
	struct UWBP_Sheik_RingStartedShrink_C_PlayNotification_Params
	{	};

	/**
	 * Function WBP_Sheik_RingStartedShrink.WBP_Sheik_RingStartedShrink_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_RingStartedShrink_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_RingStartedShrink.WBP_Sheik_RingStartedShrink_C.HandleOnAnimationFinished
	 */
	struct UWBP_Sheik_RingStartedShrink_C_HandleOnAnimationFinished_Params
	{	};

	/**
	 * Function WBP_Sheik_RingStartedShrink.WBP_Sheik_RingStartedShrink_C.SetSpeedFactor_BP
	 */
	struct UWBP_Sheik_RingStartedShrink_C_SetSpeedFactor_BP_Params
	{
	public:
		float                                                      NewSpeedFactor;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_RingStartedShrink.WBP_Sheik_RingStartedShrink_C.StartAnnouncement_BP
	 */
	struct UWBP_Sheik_RingStartedShrink_C_StartAnnouncement_BP_Params
	{
	public:
		struct FSheikAnnouncement                                  SheikAnnouncementData;                                   // 0x0000(0x0200)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_RingStartedShrink.WBP_Sheik_RingStartedShrink_C.CloseAnnouncement_BP
	 */
	struct UWBP_Sheik_RingStartedShrink_C_CloseAnnouncement_BP_Params
	{	};

	/**
	 * Function WBP_Sheik_RingStartedShrink.WBP_Sheik_RingStartedShrink_C.ExecuteUbergraph_WBP_Sheik_RingStartedShrink
	 */
	struct UWBP_Sheik_RingStartedShrink_C_ExecuteUbergraph_WBP_Sheik_RingStartedShrink_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
