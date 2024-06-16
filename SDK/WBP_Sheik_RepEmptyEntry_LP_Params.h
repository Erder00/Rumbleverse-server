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
	 * Function WBP_Sheik_RepEmptyEntry_LP.WBP_Sheik_RepEmptyEntry_LP_C.SetPrompt
	 */
	struct UWBP_Sheik_RepEmptyEntry_LP_C_SetPrompt_Params
	{
	public:
		bool                                                       Daily;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DLC7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_RepEmptyEntry_LP.WBP_Sheik_RepEmptyEntry_LP_C.SetTimeTilNextChallenge
	 */
	struct UWBP_Sheik_RepEmptyEntry_LP_C_SetTimeTilNextChallenge_Params
	{	};

	/**
	 * Function WBP_Sheik_RepEmptyEntry_LP.WBP_Sheik_RepEmptyEntry_LP_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_RepEmptyEntry_LP_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_RepEmptyEntry_LP.WBP_Sheik_RepEmptyEntry_LP_C.ExecuteUbergraph_WBP_Sheik_RepEmptyEntry_LP
	 */
	struct UWBP_Sheik_RepEmptyEntry_LP_C_ExecuteUbergraph_WBP_Sheik_RepEmptyEntry_LP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_RepEmptyEntry_LP.WBP_Sheik_RepEmptyEntry_LP_C.RefreshAllButtonsOnRerollClick__DelegateSignature
	 */
	struct UWBP_Sheik_RepEmptyEntry_LP_C_RefreshAllButtonsOnRerollClick__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_RepEmptyEntry_LP.WBP_Sheik_RepEmptyEntry_LP_C.RemoveThisRepFromUI__DelegateSignature
	 */
	struct UWBP_Sheik_RepEmptyEntry_LP_C_RemoveThisRepFromUI__DelegateSignature_Params
	{
	public:
		class UWBP_Sheik_RepMenuEntry_C*                           This;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
