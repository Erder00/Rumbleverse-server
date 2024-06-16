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
	 * Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.SetWidgetFocus
	 */
	struct UWBP_Sheik_RepMenu_EmptyEntry_C_SetWidgetFocus_Params
	{
	public:
		bool                                                       IsFocused;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.HideTime
	 */
	struct UWBP_Sheik_RepMenu_EmptyEntry_C_HideTime_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.HideMotivation
	 */
	struct UWBP_Sheik_RepMenu_EmptyEntry_C_HideMotivation_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.HideHint
	 */
	struct UWBP_Sheik_RepMenu_EmptyEntry_C_HideHint_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.SetHintText
	 */
	struct UWBP_Sheik_RepMenu_EmptyEntry_C_SetHintText_Params
	{	};

	/**
	 * Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.SetTimeTillNewRep
	 */
	struct UWBP_Sheik_RepMenu_EmptyEntry_C_SetTimeTillNewRep_Params
	{	};

	/**
	 * Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.DisplayMotivationalText
	 */
	struct UWBP_Sheik_RepMenu_EmptyEntry_C_DisplayMotivationalText_Params
	{	};

	/**
	 * Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.SpawnDisplay
	 */
	struct UWBP_Sheik_RepMenu_EmptyEntry_C_SpawnDisplay_Params
	{
	public:
		int32_t                                                    DisplayIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.DisplayHint
	 */
	struct UWBP_Sheik_RepMenu_EmptyEntry_C_DisplayHint_Params
	{	};

	/**
	 * Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_RepMenu_EmptyEntry_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.OnGainFocus
	 */
	struct UWBP_Sheik_RepMenu_EmptyEntry_C_OnGainFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.OnLoseFocus
	 */
	struct UWBP_Sheik_RepMenu_EmptyEntry_C_OnLoseFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.DisplayTimeTillNewRep
	 */
	struct UWBP_Sheik_RepMenu_EmptyEntry_C_DisplayTimeTillNewRep_Params
	{	};

	/**
	 * Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.ExecuteUbergraph_WBP_Sheik_RepMenu_EmptyEntry
	 */
	struct UWBP_Sheik_RepMenu_EmptyEntry_C_ExecuteUbergraph_WBP_Sheik_RepMenu_EmptyEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.RefreshAllButtonsOnRerollClick__DelegateSignature
	 */
	struct UWBP_Sheik_RepMenu_EmptyEntry_C_RefreshAllButtonsOnRerollClick__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.RemoveThisRepFromUI__DelegateSignature
	 */
	struct UWBP_Sheik_RepMenu_EmptyEntry_C_RemoveThisRepFromUI__DelegateSignature_Params
	{
	public:
		class UWBP_Sheik_RepMenuEntry_C*                           This;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
