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
	 * Function WBP_Sheik_CannonLaunchMasterAnnouncement.WBP_Sheik_CannonLaunchMasterAnnouncement_C.SetAnnouncementText
	 */
	struct UWBP_Sheik_CannonLaunchMasterAnnouncement_C_SetAnnouncementText_Params
	{
	public:
		bool                                                       IsLaunchMaster;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XNNE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              LaunchMasterName;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_CannonLaunchMasterAnnouncement.WBP_Sheik_CannonLaunchMasterAnnouncement_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_CannonLaunchMasterAnnouncement_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_CannonLaunchMasterAnnouncement.WBP_Sheik_CannonLaunchMasterAnnouncement_C.HandleOnAnimationFinished
	 */
	struct UWBP_Sheik_CannonLaunchMasterAnnouncement_C_HandleOnAnimationFinished_Params
	{	};

	/**
	 * Function WBP_Sheik_CannonLaunchMasterAnnouncement.WBP_Sheik_CannonLaunchMasterAnnouncement_C.StartAnnouncement_BP
	 */
	struct UWBP_Sheik_CannonLaunchMasterAnnouncement_C_StartAnnouncement_BP_Params
	{
	public:
		struct FSheikAnnouncement                                  SheikAnnouncementData;                                   // 0x0000(0x0200)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_CannonLaunchMasterAnnouncement.WBP_Sheik_CannonLaunchMasterAnnouncement_C.CloseAnnouncement_BP
	 */
	struct UWBP_Sheik_CannonLaunchMasterAnnouncement_C_CloseAnnouncement_BP_Params
	{	};

	/**
	 * Function WBP_Sheik_CannonLaunchMasterAnnouncement.WBP_Sheik_CannonLaunchMasterAnnouncement_C.SetSpeedFactor_BP
	 */
	struct UWBP_Sheik_CannonLaunchMasterAnnouncement_C_SetSpeedFactor_BP_Params
	{
	public:
		float                                                      NewSpeedFactor;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_CannonLaunchMasterAnnouncement.WBP_Sheik_CannonLaunchMasterAnnouncement_C.PreConstruct
	 */
	struct UWBP_Sheik_CannonLaunchMasterAnnouncement_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_CannonLaunchMasterAnnouncement.WBP_Sheik_CannonLaunchMasterAnnouncement_C.ExecuteUbergraph_WBP_Sheik_CannonLaunchMasterAnnouncement
	 */
	struct UWBP_Sheik_CannonLaunchMasterAnnouncement_C_ExecuteUbergraph_WBP_Sheik_CannonLaunchMasterAnnouncement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
