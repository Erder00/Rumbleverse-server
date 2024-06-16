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
	 * Function WBP_Sheik_EOM_FanCloutAward.WBP_Sheik_EOM_FanCloutAward_C.SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_FanCloutAward_3
	 */
	struct UWBP_Sheik_EOM_FanCloutAward_C_SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_FanCloutAward_3_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_FanCloutAward.WBP_Sheik_EOM_FanCloutAward_C.SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_FanCloutAward_2
	 */
	struct UWBP_Sheik_EOM_FanCloutAward_C_SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_FanCloutAward_2_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_FanCloutAward.WBP_Sheik_EOM_FanCloutAward_C.SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_FanCloutAward_1
	 */
	struct UWBP_Sheik_EOM_FanCloutAward_C_SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_FanCloutAward_1_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_FanCloutAward.WBP_Sheik_EOM_FanCloutAward_C.ValidateCloutUpdate
	 */
	struct UWBP_Sheik_EOM_FanCloutAward_C_ValidateCloutUpdate_Params
	{
	public:
		int32_t                                                    PreviousLevelId;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CurrentLevelId;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Rank;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Valid;                                                   // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RWDB[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_EOM_FanCloutAward.WBP_Sheik_EOM_FanCloutAward_C.PlayLevelUpSound
	 */
	struct UWBP_Sheik_EOM_FanCloutAward_C_PlayLevelUpSound_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_FanCloutAward.WBP_Sheik_EOM_FanCloutAward_C.HandleCloutBarFillSounds
	 */
	struct UWBP_Sheik_EOM_FanCloutAward_C_HandleCloutBarFillSounds_Params
	{
	public:
		float                                                      MinPercentChange;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       WillLevelUp;                                             // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_EOM_FanCloutAward.WBP_Sheik_EOM_FanCloutAward_C.PlayFansAccruedSound
	 */
	struct UWBP_Sheik_EOM_FanCloutAward_C_PlayFansAccruedSound_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_FanCloutAward.WBP_Sheik_EOM_FanCloutAward_C.FinishPlacementSequence
	 */
	struct UWBP_Sheik_EOM_FanCloutAward_C_FinishPlacementSequence_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_FanCloutAward.WBP_Sheik_EOM_FanCloutAward_C.ResetAnimSequence
	 */
	struct UWBP_Sheik_EOM_FanCloutAward_C_ResetAnimSequence_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_FanCloutAward.WBP_Sheik_EOM_FanCloutAward_C.ResetProgressBar
	 */
	struct UWBP_Sheik_EOM_FanCloutAward_C_ResetProgressBar_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_FanCloutAward.WBP_Sheik_EOM_FanCloutAward_C.LevelUpProgressBar
	 */
	struct UWBP_Sheik_EOM_FanCloutAward_C_LevelUpProgressBar_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_FanCloutAward.WBP_Sheik_EOM_FanCloutAward_C.CalculateLevelUpTime
	 */
	struct UWBP_Sheik_EOM_FanCloutAward_C_CalculateLevelUpTime_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_FanCloutAward.WBP_Sheik_EOM_FanCloutAward_C.PlayUISound
	 */
	struct UWBP_Sheik_EOM_FanCloutAward_C_PlayUISound_Params
	{
	public:
		bool                                                       PlaySound;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EUISounds                                                  SoundType;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_FanCloutAward.WBP_Sheik_EOM_FanCloutAward_C.HandleLevelUpSound
	 */
	struct UWBP_Sheik_EOM_FanCloutAward_C_HandleLevelUpSound_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_FanCloutAward.WBP_Sheik_EOM_FanCloutAward_C.Try Play Next Award
	 */
	struct UWBP_Sheik_EOM_FanCloutAward_C_TryPlayNextAward_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_FanCloutAward.WBP_Sheik_EOM_FanCloutAward_C.PlayAllFanCloutAwards
	 */
	struct UWBP_Sheik_EOM_FanCloutAward_C_PlayAllFanCloutAwards_Params
	{
	public:
		TArray<struct FSheikPayload>                               InFanCloutAwards;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_EOM_FanCloutAward.WBP_Sheik_EOM_FanCloutAward_C.SetFanText
	 */
	struct UWBP_Sheik_EOM_FanCloutAward_C_SetFanText_Params
	{
	public:
		struct FSheikPayload                                       Payload;                                                 // 0x0000(0x01E0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_EOM_FanCloutAward.WBP_Sheik_EOM_FanCloutAward_C.SetCloutBarTexts
	 */
	struct UWBP_Sheik_EOM_FanCloutAward_C_SetCloutBarTexts_Params
	{
	public:
		int32_t                                                    PreviousLevelId;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CurrentLevelId;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NextLevelId;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D1MZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Rank;                                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_FanCloutAward.WBP_Sheik_EOM_FanCloutAward_C.Unload Payload
	 */
	struct UWBP_Sheik_EOM_FanCloutAward_C_UnloadPayload_Params
	{
	public:
		struct FSheikPayload                                       InPayload;                                               // 0x0000(0x01E0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_EOM_FanCloutAward.WBP_Sheik_EOM_FanCloutAward_C.FadeOutAnim_Finished
	 */
	struct UWBP_Sheik_EOM_FanCloutAward_C_FadeOutAnim_Finished_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_FanCloutAward.WBP_Sheik_EOM_FanCloutAward_C.ExecuteUbergraph_WBP_Sheik_EOM_FanCloutAward
	 */
	struct UWBP_Sheik_EOM_FanCloutAward_C_ExecuteUbergraph_WBP_Sheik_EOM_FanCloutAward_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_FanCloutAward.WBP_Sheik_EOM_FanCloutAward_C.OnCloutLevelSequenceComplete__DelegateSignature
	 */
	struct UWBP_Sheik_EOM_FanCloutAward_C_OnCloutLevelSequenceComplete__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
