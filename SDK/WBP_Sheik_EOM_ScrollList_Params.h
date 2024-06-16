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
	 * Function WBP_Sheik_EOM_ScrollList.WBP_Sheik_EOM_ScrollList_C.RefreshWidgetsWithNavigationOverride
	 */
	struct UWBP_Sheik_EOM_ScrollList_C_RefreshWidgetsWithNavigationOverride_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_ScrollList.WBP_Sheik_EOM_ScrollList_C.SetNamedSlotVerticalBoxSpacing
	 */
	struct UWBP_Sheik_EOM_ScrollList_C_SetNamedSlotVerticalBoxSpacing_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_ScrollList.WBP_Sheik_EOM_ScrollList_C.PutNamedSlotVerticalBoxContentIntoScrollList
	 */
	struct UWBP_Sheik_EOM_ScrollList_C_PutNamedSlotVerticalBoxContentIntoScrollList_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_ScrollList.WBP_Sheik_EOM_ScrollList_C.EnableInputHandling
	 */
	struct UWBP_Sheik_EOM_ScrollList_C_EnableInputHandling_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_EOM_ScrollList.WBP_Sheik_EOM_ScrollList_C.ListItemFocused
	 */
	struct UWBP_Sheik_EOM_ScrollList_C_ListItemFocused_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_ScrollList.WBP_Sheik_EOM_ScrollList_C.SetScrollboxOffset
	 */
	struct UWBP_Sheik_EOM_ScrollList_C_SetScrollboxOffset_Params
	{
	public:
		float                                                      NewScrollOffset;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_ScrollList.WBP_Sheik_EOM_ScrollList_C.ScrollUp
	 */
	struct UWBP_Sheik_EOM_ScrollList_C_ScrollUp_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_EOM_ScrollList.WBP_Sheik_EOM_ScrollList_C.PageUp
	 */
	struct UWBP_Sheik_EOM_ScrollList_C_PageUp_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_EOM_ScrollList.WBP_Sheik_EOM_ScrollList_C.ScrollPageByPercent
	 */
	struct UWBP_Sheik_EOM_ScrollList_C_ScrollPageByPercent_Params
	{
	public:
		float                                                      ScrollPercent;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_ScrollList.WBP_Sheik_EOM_ScrollList_C.ScrollDown
	 */
	struct UWBP_Sheik_EOM_ScrollList_C_ScrollDown_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_EOM_ScrollList.WBP_Sheik_EOM_ScrollList_C.PageDown
	 */
	struct UWBP_Sheik_EOM_ScrollList_C_PageDown_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_EOM_ScrollList.WBP_Sheik_EOM_ScrollList_C.GetMaxOffset
	 */
	struct UWBP_Sheik_EOM_ScrollList_C_GetMaxOffset_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_ScrollList.WBP_Sheik_EOM_ScrollList_C.GetScrollbox
	 */
	struct UWBP_Sheik_EOM_ScrollList_C_GetScrollbox_Params
	{
	public:
		class UScrollBox*                                          ScrollBox;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_ScrollList.WBP_Sheik_EOM_ScrollList_C.GetScrollPosition
	 */
	struct UWBP_Sheik_EOM_ScrollList_C_GetScrollPosition_Params
	{
	public:
		float                                                      Offset;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_ScrollList.WBP_Sheik_EOM_ScrollList_C.GetContentSize
	 */
	struct UWBP_Sheik_EOM_ScrollList_C_GetContentSize_Params
	{
	public:
		struct FVector2D                                           ContentSize;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_ScrollList.WBP_Sheik_EOM_ScrollList_C.GetListCount
	 */
	struct UWBP_Sheik_EOM_ScrollList_C_GetListCount_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_ScrollList.WBP_Sheik_EOM_ScrollList_C.SetScrollPosition
	 */
	struct UWBP_Sheik_EOM_ScrollList_C_SetScrollPosition_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_ScrollList.WBP_Sheik_EOM_ScrollList_C.RemoveAllItems
	 */
	struct UWBP_Sheik_EOM_ScrollList_C_RemoveAllItems_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_ScrollList.WBP_Sheik_EOM_ScrollList_C.RemoveItem
	 */
	struct UWBP_Sheik_EOM_ScrollList_C_RemoveItem_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_ScrollList.WBP_Sheik_EOM_ScrollList_C.AddListItems
	 */
	struct UWBP_Sheik_EOM_ScrollList_C_AddListItems_Params
	{
	public:
		TArray<class UIGUI_WidgetBase*>                            Item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_Sheik_EOM_ScrollList.WBP_Sheik_EOM_ScrollList_C.AddListItem
	 */
	struct UWBP_Sheik_EOM_ScrollList_C_AddListItem_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_ScrollList.WBP_Sheik_EOM_ScrollList_C.ListScrolled
	 */
	struct UWBP_Sheik_EOM_ScrollList_C_ListScrolled_Params
	{
	public:
		float                                                      CurrentOffset;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_ScrollList.WBP_Sheik_EOM_ScrollList_C.PreConstruct
	 */
	struct UWBP_Sheik_EOM_ScrollList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_EOM_ScrollList.WBP_Sheik_EOM_ScrollList_C.OnActivated
	 */
	struct UWBP_Sheik_EOM_ScrollList_C_OnActivated_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_ScrollList.WBP_Sheik_EOM_ScrollList_C.OnDeactivated
	 */
	struct UWBP_Sheik_EOM_ScrollList_C_OnDeactivated_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_ScrollList.WBP_Sheik_EOM_ScrollList_C.ExecuteUbergraph_WBP_Sheik_EOM_ScrollList
	 */
	struct UWBP_Sheik_EOM_ScrollList_C_ExecuteUbergraph_WBP_Sheik_EOM_ScrollList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_ScrollList.WBP_Sheik_EOM_ScrollList_C.OnListScrolled__DelegateSignature
	 */
	struct UWBP_Sheik_EOM_ScrollList_C_OnListScrolled__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ScrollPosition;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
