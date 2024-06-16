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
	 * Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.DisplayInputPrompts
	 */
	struct UWBP_Sheik_Reps_LP_C_DisplayInputPrompts_Params
	{
	public:
		bool                                                       DisplayPrompts;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.PlayUISound
	 */
	struct UWBP_Sheik_Reps_LP_C_PlayUISound_Params
	{
	public:
		bool                                                       bPlaySound;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EUISounds                                                  SoundType;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.SetWeeklyChallenges
	 */
	struct UWBP_Sheik_Reps_LP_C_SetWeeklyChallenges_Params
	{	};

	/**
	 * Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.OnPreviewMouseButtonDown
	 */
	struct UWBP_Sheik_Reps_LP_C_OnPreviewMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.HandleOnNewRepAcquired_cb
	 */
	struct UWBP_Sheik_Reps_LP_C_HandleOnNewRepAcquired_cb_Params
	{
	public:
		struct FRepUIData                                          OutNewRep;                                               // 0x0000(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.OnRemoveThisRepFromUI_cb
	 */
	struct UWBP_Sheik_Reps_LP_C_OnRemoveThisRepFromUI_cb_Params
	{
	public:
		class UWBP_Sheik_RepMenuEntry_C*                           This;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.SetDailyChallenges
	 */
	struct UWBP_Sheik_Reps_LP_C_SetDailyChallenges_Params
	{	};

	/**
	 * Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.BackPressed_cb
	 */
	struct UWBP_Sheik_Reps_LP_C_BackPressed_cb_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.AddRepsToWidget
	 */
	struct UWBP_Sheik_Reps_LP_C_AddRepsToWidget_Params
	{	};

	/**
	 * Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.RefreshReps
	 */
	struct UWBP_Sheik_Reps_LP_C_RefreshReps_Params
	{	};

	/**
	 * Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_Reps_LP_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.PreConstruct
	 */
	struct UWBP_Sheik_Reps_LP_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.ExecuteUbergraph_WBP_Sheik_Reps_LP
	 */
	struct UWBP_Sheik_Reps_LP_C_ExecuteUbergraph_WBP_Sheik_Reps_LP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PI60[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.OnRepsWidgetClicked__DelegateSignature
	 */
	struct UWBP_Sheik_Reps_LP_C_OnRepsWidgetClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
