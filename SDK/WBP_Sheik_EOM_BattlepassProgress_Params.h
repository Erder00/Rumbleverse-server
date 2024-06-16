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
	 * Function WBP_Sheik_EOM_BattlepassProgress.WBP_Sheik_EOM_BattlepassProgress_C.SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_BattlepassProgress_4
	 */
	struct UWBP_Sheik_EOM_BattlepassProgress_C_SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_BattlepassProgress_4_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_BattlepassProgress.WBP_Sheik_EOM_BattlepassProgress_C.SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_BattlepassProgress_3
	 */
	struct UWBP_Sheik_EOM_BattlepassProgress_C_SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_BattlepassProgress_3_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_BattlepassProgress.WBP_Sheik_EOM_BattlepassProgress_C.SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_BattlepassProgress_2
	 */
	struct UWBP_Sheik_EOM_BattlepassProgress_C_SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_BattlepassProgress_2_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_BattlepassProgress.WBP_Sheik_EOM_BattlepassProgress_C.SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_BattlepassProgress_1
	 */
	struct UWBP_Sheik_EOM_BattlepassProgress_C_SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_BattlepassProgress_1_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_BattlepassProgress.WBP_Sheik_EOM_BattlepassProgress_C.IsCurrentPassCompleted
	 */
	struct UWBP_Sheik_EOM_BattlepassProgress_C_IsCurrentPassCompleted_Params
	{
	public:
		bool                                                       IsCompleted;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_EOM_BattlepassProgress.WBP_Sheik_EOM_BattlepassProgress_C.TierCelebrationFinished
	 */
	struct UWBP_Sheik_EOM_BattlepassProgress_C_TierCelebrationFinished_Params
	{
	public:
		int32_t                                                    NextTierID;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_BattlepassProgress.WBP_Sheik_EOM_BattlepassProgress_C.PlayUISound
	 */
	struct UWBP_Sheik_EOM_BattlepassProgress_C_PlayUISound_Params
	{
	public:
		bool                                                       PlaySound;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EUISounds                                                  SoundType;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_BattlepassProgress.WBP_Sheik_EOM_BattlepassProgress_C.ResetAnimSequence
	 */
	struct UWBP_Sheik_EOM_BattlepassProgress_C_ResetAnimSequence_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_BattlepassProgress.WBP_Sheik_EOM_BattlepassProgress_C.UpdateTierProgressBar
	 */
	struct UWBP_Sheik_EOM_BattlepassProgress_C_UpdateTierProgressBar_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_BattlepassProgress.WBP_Sheik_EOM_BattlepassProgress_C.UpdateTotalFansRemaining
	 */
	struct UWBP_Sheik_EOM_BattlepassProgress_C_UpdateTotalFansRemaining_Params
	{
	public:
		struct FBattlePassTier                                     InTier;                                                  // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_EOM_BattlepassProgress.WBP_Sheik_EOM_BattlepassProgress_C.DebugPrintTierData
	 */
	struct UWBP_Sheik_EOM_BattlepassProgress_C_DebugPrintTierData_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_BattlepassProgress.WBP_Sheik_EOM_BattlepassProgress_C.StartNextTierCelebration
	 */
	struct UWBP_Sheik_EOM_BattlepassProgress_C_StartNextTierCelebration_Params
	{
	public:
		int32_t                                                    NextTierID;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_405C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_EOM_BattlepassProgress.WBP_Sheik_EOM_BattlepassProgress_C.BeginBattlePassSequenceAnims
	 */
	struct UWBP_Sheik_EOM_BattlepassProgress_C_BeginBattlePassSequenceAnims_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_BattlepassProgress.WBP_Sheik_EOM_BattlepassProgress_C.CreateTierWidgetAndPopulate
	 */
	struct UWBP_Sheik_EOM_BattlepassProgress_C_CreateTierWidgetAndPopulate_Params
	{
	public:
		struct FBattlePassTier                                     InTier;                                                  // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0048(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HK1F[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_EOM_BattlepassProgress.WBP_Sheik_EOM_BattlepassProgress_C.GetMatchAccumulationData
	 */
	struct UWBP_Sheik_EOM_BattlepassProgress_C_GetMatchAccumulationData_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_BattlepassProgress.WBP_Sheik_EOM_BattlepassProgress_C.SetDisplayInfoAndBeginSequence
	 */
	struct UWBP_Sheik_EOM_BattlepassProgress_C_SetDisplayInfoAndBeginSequence_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_BattlepassProgress.WBP_Sheik_EOM_BattlepassProgress_C.ShowBattlePassAnim_Finished
	 */
	struct UWBP_Sheik_EOM_BattlepassProgress_C_ShowBattlePassAnim_Finished_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_BattlepassProgress.WBP_Sheik_EOM_BattlepassProgress_C.FadeOutAnim_Finished
	 */
	struct UWBP_Sheik_EOM_BattlepassProgress_C_FadeOutAnim_Finished_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_BattlepassProgress.WBP_Sheik_EOM_BattlepassProgress_C.PreConstruct
	 */
	struct UWBP_Sheik_EOM_BattlepassProgress_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_EOM_BattlepassProgress.WBP_Sheik_EOM_BattlepassProgress_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_EOM_BattlepassProgress_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_BattlepassProgress.WBP_Sheik_EOM_BattlepassProgress_C.BattlePassAnimComplete
	 */
	struct UWBP_Sheik_EOM_BattlepassProgress_C_BattlePassAnimComplete_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_BattlepassProgress.WBP_Sheik_EOM_BattlepassProgress_C.ExecuteUbergraph_WBP_Sheik_EOM_BattlepassProgress
	 */
	struct UWBP_Sheik_EOM_BattlepassProgress_C_ExecuteUbergraph_WBP_Sheik_EOM_BattlepassProgress_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_BattlepassProgress.WBP_Sheik_EOM_BattlepassProgress_C.BattlePassSequenceComplete__DelegateSignature
	 */
	struct UWBP_Sheik_EOM_BattlepassProgress_C_BattlePassSequenceComplete__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_BattlepassProgress.WBP_Sheik_EOM_BattlepassProgress_C.BattlePassProgressAnimsFinished__DelegateSignature
	 */
	struct UWBP_Sheik_EOM_BattlepassProgress_C_BattlePassProgressAnimsFinished__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
