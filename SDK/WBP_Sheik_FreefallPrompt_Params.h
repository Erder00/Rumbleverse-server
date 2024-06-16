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
	 * Function WBP_Sheik_FreefallPrompt.WBP_Sheik_FreefallPrompt_C.ShowInteractionAnimFinished_cb
	 */
	struct UWBP_Sheik_FreefallPrompt_C_ShowInteractionAnimFinished_cb_Params
	{	};

	/**
	 * Function WBP_Sheik_FreefallPrompt.WBP_Sheik_FreefallPrompt_C.HideInteractionAnimFinished_cb
	 */
	struct UWBP_Sheik_FreefallPrompt_C_HideInteractionAnimFinished_cb_Params
	{	};

	/**
	 * Function WBP_Sheik_FreefallPrompt.WBP_Sheik_FreefallPrompt_C.OnCannonLaunchPhase2Start_cb
	 */
	struct UWBP_Sheik_FreefallPrompt_C_OnCannonLaunchPhase2Start_cb_Params
	{	};

	/**
	 * Function WBP_Sheik_FreefallPrompt.WBP_Sheik_FreefallPrompt_C.OnFreefallStart_cb
	 */
	struct UWBP_Sheik_FreefallPrompt_C_OnFreefallStart_cb_Params
	{	};

	/**
	 * Function WBP_Sheik_FreefallPrompt.WBP_Sheik_FreefallPrompt_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_FreefallPrompt_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_FreefallPrompt.WBP_Sheik_FreefallPrompt_C.Tick
	 */
	struct UWBP_Sheik_FreefallPrompt_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_FreefallPrompt.WBP_Sheik_FreefallPrompt_C.ExecuteUbergraph_WBP_Sheik_FreefallPrompt
	 */
	struct UWBP_Sheik_FreefallPrompt_C_ExecuteUbergraph_WBP_Sheik_FreefallPrompt_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
