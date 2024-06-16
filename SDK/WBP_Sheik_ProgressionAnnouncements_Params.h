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
	 * Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.GenerateDebugNextCloutLevel
	 */
	struct UWBP_Sheik_ProgressionAnnouncements_C_GenerateDebugNextCloutLevel_Params
	{
	public:
		struct FProgressionLevel                                   CurrentLevel;                                            // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FProgressionLevel                                   NextLevel;                                               // 0x0068(0x0068)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.ConvertEReasonFansAwarded
	 */
	struct UWBP_Sheik_ProgressionAnnouncements_C_ConvertEReasonFansAwarded_Params
	{
	public:
		EReasonFansAwarded                                         Reason;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DETE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                DisplayMessage;                                          // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.OnCloutLevelUpOccurred_cb
	 */
	struct UWBP_Sheik_ProgressionAnnouncements_C_OnCloutLevelUpOccurred_cb_Params
	{
	public:
		TArray<struct FProgressionLevel>                           OldLevels;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FProgressionLevel                                   NewLevel;                                                // 0x0010(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    OldFanCount;                                             // 0x0078(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TotalNewFans;                                            // 0x007C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    LeftoverFansForCurrentLevel;                             // 0x0080(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewFanMail;                                              // 0x0084(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EReasonFansAwarded                                         ReasonForAwardingFans;                                   // 0x0088(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShouldShowAnnouncement;                                  // 0x0089(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NK62[0x6];                                   // 0x008A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.OnCloutFansIncreasedOnlyOccurred_cb
	 */
	struct UWBP_Sheik_ProgressionAnnouncements_C_OnCloutFansIncreasedOnlyOccurred_cb_Params
	{
	public:
		struct FProgressionLevel                                   CurrentLevel;                                            // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    OldFanCount;                                             // 0x0068(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewFansAdded;                                            // 0x006C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EReasonFansAwarded                                         ReasonFansAwarded;                                       // 0x0070(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShouldShowAnnouncement;                                  // 0x0071(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4FDM[0x6];                                   // 0x0072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.OnRepProgressThresholdPassed_cb
	 */
	struct UWBP_Sheik_ProgressionAnnouncements_C_OnRepProgressThresholdPassed_cb_Params
	{
	public:
		struct FRepUIData                                          NotificationRep;                                         // 0x0000(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.HandleOnShowAnnouncement
	 */
	struct UWBP_Sheik_ProgressionAnnouncements_C_HandleOnShowAnnouncement_Params
	{
	public:
		struct FSheikAnnouncement                                  SheikAnnouncement;                                       // 0x0000(0x0200)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.FindAnnouncementWidget
	 */
	struct UWBP_Sheik_ProgressionAnnouncements_C_FindAnnouncementWidget_Params
	{
	public:
		int32_t                                                    AnnouncementId;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8MJL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USheikAnnouncementWidget*                            AnnouncementWidget;                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.PopulateAnnouncementsMapAndArray
	 */
	struct UWBP_Sheik_ProgressionAnnouncements_C_PopulateAnnouncementsMapAndArray_Params
	{	};

	/**
	 * Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_ProgressionAnnouncements_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.SetSpeedFactor_BP
	 */
	struct UWBP_Sheik_ProgressionAnnouncements_C_SetSpeedFactor_BP_Params
	{
	public:
		int32_t                                                    AnnouncementId;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NewSpeedFactor;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.ShowAnnouncement_BP
	 */
	struct UWBP_Sheik_ProgressionAnnouncements_C_ShowAnnouncement_BP_Params
	{
	public:
		struct FSheikAnnouncement                                  AnnouncementData;                                        // 0x0000(0x0200)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.CloseAnnouncement_BP
	 */
	struct UWBP_Sheik_ProgressionAnnouncements_C_CloseAnnouncement_BP_Params
	{
	public:
		int32_t                                                    AnnouncementId;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.DeactivateAllAnnouncementWidgets
	 */
	struct UWBP_Sheik_ProgressionAnnouncements_C_DeactivateAllAnnouncementWidgets_Params
	{	};

	/**
	 * Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.ExecuteUbergraph_WBP_Sheik_ProgressionAnnouncements
	 */
	struct UWBP_Sheik_ProgressionAnnouncements_C_ExecuteUbergraph_WBP_Sheik_ProgressionAnnouncements_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
