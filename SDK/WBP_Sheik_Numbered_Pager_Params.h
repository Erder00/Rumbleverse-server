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
	 * Function WBP_Sheik_Numbered_Pager.WBP_Sheik_Numbered_Pager_C.GetNavigableWidgets
	 */
	struct UWBP_Sheik_Numbered_Pager_C_GetNavigableWidgets_Params
	{
	public:
		TArray<class UIGUI_WidgetBase*>                            NavigableWidgets;                                        // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_Sheik_Numbered_Pager.WBP_Sheik_Numbered_Pager_C.UpdateTabs
	 */
	struct UWBP_Sheik_Numbered_Pager_C_UpdateTabs_Params
	{
	public:
		int32_t                                                    CurrentPageIndex;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Numbered_Pager.WBP_Sheik_Numbered_Pager_C.PopulatePageTabs
	 */
	struct UWBP_Sheik_Numbered_Pager_C_PopulatePageTabs_Params
	{
	public:
		int32_t                                                    InNumberOfPages;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Numbered_Pager.WBP_Sheik_Numbered_Pager_C.PreConstruct
	 */
	struct UWBP_Sheik_Numbered_Pager_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Numbered_Pager.WBP_Sheik_Numbered_Pager_C.BndEvt__TabLeft_K2Node_ComponentBoundEvent_0_OnStateChangeEventWithUserIndex__DelegateSignature
	 */
	struct UWBP_Sheik_Numbered_Pager_C_BndEvt__TabLeft_K2Node_ComponentBoundEvent_0_OnStateChangeEventWithUserIndex__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Numbered_Pager.WBP_Sheik_Numbered_Pager_C.BndEvt__TabRight_K2Node_ComponentBoundEvent_1_OnStateChangeEventWithUserIndex__DelegateSignature
	 */
	struct UWBP_Sheik_Numbered_Pager_C_BndEvt__TabRight_K2Node_ComponentBoundEvent_1_OnStateChangeEventWithUserIndex__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Numbered_Pager.WBP_Sheik_Numbered_Pager_C.OnPageSelected
	 */
	struct UWBP_Sheik_Numbered_Pager_C_OnPageSelected_Params
	{
	public:
		int32_t                                                    PageIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Numbered_Pager.WBP_Sheik_Numbered_Pager_C.ExecuteUbergraph_WBP_Sheik_Numbered_Pager
	 */
	struct UWBP_Sheik_Numbered_Pager_C_ExecuteUbergraph_WBP_Sheik_Numbered_Pager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Numbered_Pager.WBP_Sheik_Numbered_Pager_C.SwitchPage__DelegateSignature
	 */
	struct UWBP_Sheik_Numbered_Pager_C_SwitchPage__DelegateSignature_Params
	{
	public:
		int32_t                                                    PageNumber;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
