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
	 * Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.OnTeamCannonLaunch_cb
	 */
	struct UWBP_Sheik_GameFlowAnnouncements_C_OnTeamCannonLaunch_cb_Params
	{	};

	/**
	 * Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.ConvertEReasonFansAwarded
	 */
	struct UWBP_Sheik_GameFlowAnnouncements_C_ConvertEReasonFansAwarded_Params
	{
	public:
		EReasonFansAwarded                                         Reason;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HVS9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              DisplayMessage;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.OnTeamLaunchAimStarted_cb
	 */
	struct UWBP_Sheik_GameFlowAnnouncements_C_OnTeamLaunchAimStarted_cb_Params
	{
	public:
		class ASheikCharacter*                                     LaunchMaster;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsLaunchMaster;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DPRR[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.HandleOnShowAnnouncement
	 */
	struct UWBP_Sheik_GameFlowAnnouncements_C_HandleOnShowAnnouncement_Params
	{
	public:
		struct FSheikAnnouncement                                  SheikAnnouncement;                                       // 0x0000(0x0200)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.FindAnnouncementWidget
	 */
	struct UWBP_Sheik_GameFlowAnnouncements_C_FindAnnouncementWidget_Params
	{
	public:
		int32_t                                                    AnnouncementId;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q3QX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USheikAnnouncementWidget*                            AnnouncementWidget;                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.PopulateAnnouncementsMapAndArray
	 */
	struct UWBP_Sheik_GameFlowAnnouncements_C_PopulateAnnouncementsMapAndArray_Params
	{	};

	/**
	 * Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.OnPinEvent_cb
	 */
	struct UWBP_Sheik_GameFlowAnnouncements_C_OnPinEvent_cb_Params
	{
	public:
		ESheikPinEventType                                         EventType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TVFE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASheikCharacter*                                     Attacker;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASheikCharacter*                                     Victim;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.OnRingStartsWaiting_cb
	 */
	struct UWBP_Sheik_GameFlowAnnouncements_C_OnRingStartsWaiting_cb_Params
	{
	public:
		int32_t                                                    WaitTime;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T81O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.On Ring Starts Shrinking Cb
	 */
	struct UWBP_Sheik_GameFlowAnnouncements_C_OnRingStartsShrinkingCb_Params
	{
	public:
		float                                                      ShrinkTime;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_858C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.OnTimeTillLaunchChanged_cb
	 */
	struct UWBP_Sheik_GameFlowAnnouncements_C_OnTimeTillLaunchChanged_cb_Params
	{
	public:
		int32_t                                                    NewTimeTillLaunch;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EXJL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.OnGameFlowStateChanged_cb
	 */
	struct UWBP_Sheik_GameFlowAnnouncements_C_OnGameFlowStateChanged_cb_Params
	{
	public:
		EGameFlowState                                             GameFlowState;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SJPE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.OnRingOutTimeChanged_cb
	 */
	struct UWBP_Sheik_GameFlowAnnouncements_C_OnRingOutTimeChanged_cb_Params
	{
	public:
		int32_t                                                    RingOutTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_89DQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_GameFlowAnnouncements_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.SetSpeedFactor_BP
	 */
	struct UWBP_Sheik_GameFlowAnnouncements_C_SetSpeedFactor_BP_Params
	{
	public:
		int32_t                                                    AnnouncementId;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NewSpeedFactor;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.ShowAnnouncement_BP
	 */
	struct UWBP_Sheik_GameFlowAnnouncements_C_ShowAnnouncement_BP_Params
	{
	public:
		struct FSheikAnnouncement                                  AnnouncementData;                                        // 0x0000(0x0200)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.CloseAnnouncement_BP
	 */
	struct UWBP_Sheik_GameFlowAnnouncements_C_CloseAnnouncement_BP_Params
	{
	public:
		int32_t                                                    AnnouncementId;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.DeactivateAllAnnouncementWidgets
	 */
	struct UWBP_Sheik_GameFlowAnnouncements_C_DeactivateAllAnnouncementWidgets_Params
	{	};

	/**
	 * Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.ExecuteUbergraph_WBP_Sheik_GameFlowAnnouncements
	 */
	struct UWBP_Sheik_GameFlowAnnouncements_C_ExecuteUbergraph_WBP_Sheik_GameFlowAnnouncements_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6YAC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
