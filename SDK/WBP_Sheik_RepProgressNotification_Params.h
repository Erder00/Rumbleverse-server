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
	 * Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.UpdateRepProgress
	 */
	struct UWBP_Sheik_RepProgressNotification_C_UpdateRepProgress_Params
	{
	public:
		class FText                                                NewRepProgressText;                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.SetRepProgressSound
	 */
	struct UWBP_Sheik_RepProgressNotification_C_SetRepProgressSound_Params
	{
	public:
		bool                                                       RepIsComplete;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.OnRepProgressThresholdPassed_cb
	 */
	struct UWBP_Sheik_RepProgressNotification_C_OnRepProgressThresholdPassed_cb_Params
	{
	public:
		struct FRepUIData                                          NotificationRep;                                         // 0x0000(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.ShowRepProgress
	 */
	struct UWBP_Sheik_RepProgressNotification_C_ShowRepProgress_Params
	{
	public:
		class FText                                                RepProgressText;                                         // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.ShowRepProgressAnimFinished
	 */
	struct UWBP_Sheik_RepProgressNotification_C_ShowRepProgressAnimFinished_Params
	{	};

	/**
	 * Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_RepProgressNotification_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.CloseAnnouncement_BP
	 */
	struct UWBP_Sheik_RepProgressNotification_C_CloseAnnouncement_BP_Params
	{	};

	/**
	 * Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.SetSpeedFactor_BP
	 */
	struct UWBP_Sheik_RepProgressNotification_C_SetSpeedFactor_BP_Params
	{
	public:
		float                                                      NewSpeedFactor;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.StartAnnouncement_BP
	 */
	struct UWBP_Sheik_RepProgressNotification_C_StartAnnouncement_BP_Params
	{
	public:
		struct FSheikAnnouncement                                  SheikAnnouncementData;                                   // 0x0000(0x0200)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.ExecuteUbergraph_WBP_Sheik_RepProgressNotification
	 */
	struct UWBP_Sheik_RepProgressNotification_C_ExecuteUbergraph_WBP_Sheik_RepProgressNotification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EADN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
