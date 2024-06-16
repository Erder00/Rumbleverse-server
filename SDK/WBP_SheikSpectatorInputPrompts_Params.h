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
	 * Function WBP_SheikSpectatorInputPrompts.WBP_SheikSpectatorInputPrompts_C.ToggleMuteAllPrompt
	 */
	struct UWBP_SheikSpectatorInputPrompts_C_ToggleMuteAllPrompt_Params
	{
	public:
		bool                                                       IsAllMuted;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SheikSpectatorInputPrompts.WBP_SheikSpectatorInputPrompts_C.ToggleCameraPrompt
	 */
	struct UWBP_SheikSpectatorInputPrompts_C_ToggleCameraPrompt_Params
	{
	public:
		bool                                                       IsControlCam;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SheikSpectatorInputPrompts.WBP_SheikSpectatorInputPrompts_C.ToggleNextPlayerPrompt
	 */
	struct UWBP_SheikSpectatorInputPrompts_C_ToggleNextPlayerPrompt_Params
	{
	public:
		bool                                                       IsFollowPlayer;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SheikSpectatorInputPrompts.WBP_SheikSpectatorInputPrompts_C.ConstructOnlyOnce
	 */
	struct UWBP_SheikSpectatorInputPrompts_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_SheikSpectatorInputPrompts.WBP_SheikSpectatorInputPrompts_C.ExecuteUbergraph_WBP_SheikSpectatorInputPrompts
	 */
	struct UWBP_SheikSpectatorInputPrompts_C_ExecuteUbergraph_WBP_SheikSpectatorInputPrompts_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
