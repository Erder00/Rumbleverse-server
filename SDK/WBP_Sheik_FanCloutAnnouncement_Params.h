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
	 * Function WBP_Sheik_FanCloutAnnouncement.WBP_Sheik_FanCloutAnnouncement_C.SequenceEvent__ENTRYPOINTWBP_Sheik_FanCloutAnnouncement_1
	 */
	struct UWBP_Sheik_FanCloutAnnouncement_C_SequenceEvent__ENTRYPOINTWBP_Sheik_FanCloutAnnouncement_1_Params
	{	};

	/**
	 * Function WBP_Sheik_FanCloutAnnouncement.WBP_Sheik_FanCloutAnnouncement_C.PlayFansAccruedSound
	 */
	struct UWBP_Sheik_FanCloutAnnouncement_C_PlayFansAccruedSound_Params
	{	};

	/**
	 * Function WBP_Sheik_FanCloutAnnouncement.WBP_Sheik_FanCloutAnnouncement_C.PlayFanMailReceivedSound
	 */
	struct UWBP_Sheik_FanCloutAnnouncement_C_PlayFanMailReceivedSound_Params
	{	};

	/**
	 * Function WBP_Sheik_FanCloutAnnouncement.WBP_Sheik_FanCloutAnnouncement_C.PlayLevelUpSound
	 */
	struct UWBP_Sheik_FanCloutAnnouncement_C_PlayLevelUpSound_Params
	{	};

	/**
	 * Function WBP_Sheik_FanCloutAnnouncement.WBP_Sheik_FanCloutAnnouncement_C.HandleLevelUpSound
	 */
	struct UWBP_Sheik_FanCloutAnnouncement_C_HandleLevelUpSound_Params
	{
	public:
		float                                                      MinInterval;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_FanCloutAnnouncement.WBP_Sheik_FanCloutAnnouncement_C.PlayUISound
	 */
	struct UWBP_Sheik_FanCloutAnnouncement_C_PlayUISound_Params
	{
	public:
		bool                                                       bPlaySound;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EUISounds                                                  SoundType;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_FanCloutAnnouncement.WBP_Sheik_FanCloutAnnouncement_C.SetFanTextAndIcon
	 */
	struct UWBP_Sheik_FanCloutAnnouncement_C_SetFanTextAndIcon_Params
	{
	public:
		struct FSheikPayload                                       Payload;                                                 // 0x0000(0x01E0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       ShowFanAnnonucementText;                                 // 0x01E0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShowFanIcon;                                             // 0x01E1(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_FanCloutAnnouncement.WBP_Sheik_FanCloutAnnouncement_C.SetCloutBarTexts
	 */
	struct UWBP_Sheik_FanCloutAnnouncement_C_SetCloutBarTexts_Params
	{
	public:
		int32_t                                                    CurrentLevelId;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NextLevelId;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5JYX[0x28];                                  // 0x0008(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_PQM8[0x50];                                  // 0x0008(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       ShowIcons;                                               // 0x0058(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B1YY[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_FanCloutAnnouncement.WBP_Sheik_FanCloutAnnouncement_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_FanCloutAnnouncement_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_FanCloutAnnouncement.WBP_Sheik_FanCloutAnnouncement_C.StartAnnouncement_BP
	 */
	struct UWBP_Sheik_FanCloutAnnouncement_C_StartAnnouncement_BP_Params
	{
	public:
		struct FSheikAnnouncement                                  SheikAnnouncementData;                                   // 0x0000(0x0200)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_FanCloutAnnouncement.WBP_Sheik_FanCloutAnnouncement_C.CloseAnnouncement_BP
	 */
	struct UWBP_Sheik_FanCloutAnnouncement_C_CloseAnnouncement_BP_Params
	{	};

	/**
	 * Function WBP_Sheik_FanCloutAnnouncement.WBP_Sheik_FanCloutAnnouncement_C.Unload Payload
	 */
	struct UWBP_Sheik_FanCloutAnnouncement_C_UnloadPayload_Params
	{
	public:
		float                                                      PlaySpeed;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L252[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikPayload                                       InPayload;                                               // 0x0008(0x01E0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_FanCloutAnnouncement.WBP_Sheik_FanCloutAnnouncement_C.HandleOnAnimationFinished
	 */
	struct UWBP_Sheik_FanCloutAnnouncement_C_HandleOnAnimationFinished_Params
	{	};

	/**
	 * Function WBP_Sheik_FanCloutAnnouncement.WBP_Sheik_FanCloutAnnouncement_C.SetSpeedFactor_BP
	 */
	struct UWBP_Sheik_FanCloutAnnouncement_C_SetSpeedFactor_BP_Params
	{
	public:
		float                                                      NewSpeedFactor;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_FanCloutAnnouncement.WBP_Sheik_FanCloutAnnouncement_C.ExecuteUbergraph_WBP_Sheik_FanCloutAnnouncement
	 */
	struct UWBP_Sheik_FanCloutAnnouncement_C_ExecuteUbergraph_WBP_Sheik_FanCloutAnnouncement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
