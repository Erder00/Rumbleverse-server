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
	 * Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.HandleIconLoadSuccess
	 */
	struct UWBP_Sheik_RepEntry_LP_C_HandleIconLoadSuccess_Params
	{
	public:
		class UObject*                                             LoadedObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.SetChallengeBackground
	 */
	struct UWBP_Sheik_RepEntry_LP_C_SetChallengeBackground_Params
	{	};

	/**
	 * Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.SetComplete
	 */
	struct UWBP_Sheik_RepEntry_LP_C_SetComplete_Params
	{	};

	/**
	 * Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.SetRewardDisplay
	 */
	struct UWBP_Sheik_RepEntry_LP_C_SetRewardDisplay_Params
	{
	public:
		TArray<struct FRepReward>                                  RewardStructArray;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.SetProgressBar
	 */
	struct UWBP_Sheik_RepEntry_LP_C_SetProgressBar_Params
	{	};

	/**
	 * Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.SetChallengeText
	 */
	struct UWBP_Sheik_RepEntry_LP_C_SetChallengeText_Params
	{	};

	/**
	 * Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.SetProgressText
	 */
	struct UWBP_Sheik_RepEntry_LP_C_SetProgressText_Params
	{	};

	/**
	 * Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.CreateChallengeLine
	 */
	struct UWBP_Sheik_RepEntry_LP_C_CreateChallengeLine_Params
	{
	public:
		struct FRepUIData                                          RepUIItem;                                               // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.RefreshAllButtonsOnRerollClick__DelegateSignature
	 */
	struct UWBP_Sheik_RepEntry_LP_C_RefreshAllButtonsOnRerollClick__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.RemoveThisRepFromUI__DelegateSignature
	 */
	struct UWBP_Sheik_RepEntry_LP_C_RemoveThisRepFromUI__DelegateSignature_Params
	{
	public:
		class UWBP_Sheik_RepMenuEntry_C*                           This;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
