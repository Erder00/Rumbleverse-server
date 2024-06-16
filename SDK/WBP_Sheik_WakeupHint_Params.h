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
	 * Function WBP_Sheik_WakeupHint.WBP_Sheik_WakeupHint_C.ShowWakeupHint
	 */
	struct UWBP_Sheik_WakeupHint_C_ShowWakeupHint_Params
	{	};

	/**
	 * Function WBP_Sheik_WakeupHint.WBP_Sheik_WakeupHint_C.SetPromptText
	 */
	struct UWBP_Sheik_WakeupHint_C_SetPromptText_Params
	{	};

	/**
	 * Function WBP_Sheik_WakeupHint.WBP_Sheik_WakeupHint_C.UpdateHintPosition
	 */
	struct UWBP_Sheik_WakeupHint_C_UpdateHintPosition_Params
	{	};

	/**
	 * Function WBP_Sheik_WakeupHint.WBP_Sheik_WakeupHint_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_WakeupHint_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_WakeupHint.WBP_Sheik_WakeupHint_C.Tick
	 */
	struct UWBP_Sheik_WakeupHint_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_WakeupHint.WBP_Sheik_WakeupHint_C.OnTransitionWindowChanged
	 */
	struct UWBP_Sheik_WakeupHint_C_OnTransitionWindowChanged_Params
	{
	public:
		class FName                                                TransitionTag;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAdded;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_WakeupHint.WBP_Sheik_WakeupHint_C.ExecuteUbergraph_WBP_Sheik_WakeupHint
	 */
	struct UWBP_Sheik_WakeupHint_C_ExecuteUbergraph_WBP_Sheik_WakeupHint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
