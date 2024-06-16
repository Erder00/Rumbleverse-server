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
	 * Function WBP_Sheik_ThrownItemIndicator.WBP_Sheik_ThrownItemIndicator_C.ShowWidget
	 */
	struct UWBP_Sheik_ThrownItemIndicator_C_ShowWidget_Params
	{	};

	/**
	 * Function WBP_Sheik_ThrownItemIndicator.WBP_Sheik_ThrownItemIndicator_C.AutoHideWidget
	 */
	struct UWBP_Sheik_ThrownItemIndicator_C_AutoHideWidget_Params
	{	};

	/**
	 * Function WBP_Sheik_ThrownItemIndicator.WBP_Sheik_ThrownItemIndicator_C.HandleOnThrownItemNoLongerTargetingPlayer_BP
	 */
	struct UWBP_Sheik_ThrownItemIndicator_C_HandleOnThrownItemNoLongerTargetingPlayer_BP_Params
	{
	public:
		class AIGInteractablePickup*                               ThrownItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ThrownItemIndicator.WBP_Sheik_ThrownItemIndicator_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_ThrownItemIndicator_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_ThrownItemIndicator.WBP_Sheik_ThrownItemIndicator_C.HandleOnThrownItemTargetingPlayer_BP
	 */
	struct UWBP_Sheik_ThrownItemIndicator_C_HandleOnThrownItemTargetingPlayer_BP_Params
	{
	public:
		class AIGInteractablePickup*                               ThrownItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ThrownItemIndicator.WBP_Sheik_ThrownItemIndicator_C.ExecuteUbergraph_WBP_Sheik_ThrownItemIndicator
	 */
	struct UWBP_Sheik_ThrownItemIndicator_C_ExecuteUbergraph_WBP_Sheik_ThrownItemIndicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T4DU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
