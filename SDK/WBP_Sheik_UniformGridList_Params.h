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
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.ScrollStandardActionCallback
	 */
	struct UWBP_Sheik_UniformGridList_C_ScrollStandardActionCallback_Params
	{
	public:
		struct FInputEventData                                     InputEvent;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetWrapRight
	 */
	struct UWBP_Sheik_UniformGridList_C_GetWrapRight_Params
	{
	public:
		bool                                                       WrapRight;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetWrapLeft
	 */
	struct UWBP_Sheik_UniformGridList_C_GetWrapLeft_Params
	{
	public:
		bool                                                       WrapLeft;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetWrapDown
	 */
	struct UWBP_Sheik_UniformGridList_C_GetWrapDown_Params
	{
	public:
		bool                                                       WrapDown;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetWrapUp
	 */
	struct UWBP_Sheik_UniformGridList_C_GetWrapUp_Params
	{
	public:
		bool                                                       WrapUp;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.SetWrapRight
	 */
	struct UWBP_Sheik_UniformGridList_C_SetWrapRight_Params
	{
	public:
		bool                                                       WrapRight;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.SetWrapLeft
	 */
	struct UWBP_Sheik_UniformGridList_C_SetWrapLeft_Params
	{
	public:
		bool                                                       WrapLeft;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.SetWrapDown
	 */
	struct UWBP_Sheik_UniformGridList_C_SetWrapDown_Params
	{
	public:
		bool                                                       WrapDown;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.SetWrapUp
	 */
	struct UWBP_Sheik_UniformGridList_C_SetWrapUp_Params
	{
	public:
		bool                                                       WrapUp;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetIndexByRowAndColumn
	 */
	struct UWBP_Sheik_UniformGridList_C_GetIndexByRowAndColumn_Params
	{
	public:
		int32_t                                                    Row;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Column;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    index;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetItems
	 */
	struct UWBP_Sheik_UniformGridList_C_GetItems_Params
	{
	public:
		TArray<class UIGUI_WidgetBase*>                            Items;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.RefreshItemPositions
	 */
	struct UWBP_Sheik_UniformGridList_C_RefreshItemPositions_Params
	{	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.SetOrientation
	 */
	struct UWBP_Sheik_UniformGridList_C_SetOrientation_Params
	{
	public:
		EOrientation                                               Orientation;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetOrientation
	 */
	struct UWBP_Sheik_UniformGridList_C_GetOrientation_Params
	{
	public:
		EOrientation                                               Orientation;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetIndexRow
	 */
	struct UWBP_Sheik_UniformGridList_C_GetIndexRow_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetIndexColumn
	 */
	struct UWBP_Sheik_UniformGridList_C_GetIndexColumn_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Column;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.RefreshNavigationOverrides
	 */
	struct UWBP_Sheik_UniformGridList_C_RefreshNavigationOverrides_Params
	{
	public:
		int32_t                                                    CountOverride;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.EnableInputHandling
	 */
	struct UWBP_Sheik_UniformGridList_C_EnableInputHandling_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.ListItemFocused
	 */
	struct UWBP_Sheik_UniformGridList_C_ListItemFocused_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.SetScrollboxOffset
	 */
	struct UWBP_Sheik_UniformGridList_C_SetScrollboxOffset_Params
	{
	public:
		float                                                      NewScrollOffset;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.ScrollPageByPercent
	 */
	struct UWBP_Sheik_UniformGridList_C_ScrollPageByPercent_Params
	{
	public:
		float                                                      ScrollPercent;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetMaxOffset
	 */
	struct UWBP_Sheik_UniformGridList_C_GetMaxOffset_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetScrollbox
	 */
	struct UWBP_Sheik_UniformGridList_C_GetScrollbox_Params
	{
	public:
		class UScrollBox*                                          ScrollBox;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetScrollPosition
	 */
	struct UWBP_Sheik_UniformGridList_C_GetScrollPosition_Params
	{
	public:
		float                                                      Offset;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetContentSize
	 */
	struct UWBP_Sheik_UniformGridList_C_GetContentSize_Params
	{
	public:
		struct FVector2D                                           ContentSize;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetListCount
	 */
	struct UWBP_Sheik_UniformGridList_C_GetListCount_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.SetScrollPosition
	 */
	struct UWBP_Sheik_UniformGridList_C_SetScrollPosition_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.RemoveAllItems
	 */
	struct UWBP_Sheik_UniformGridList_C_RemoveAllItems_Params
	{	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.RemoveItem
	 */
	struct UWBP_Sheik_UniformGridList_C_RemoveItem_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.AddListItems
	 */
	struct UWBP_Sheik_UniformGridList_C_AddListItems_Params
	{
	public:
		TArray<class UIGUI_WidgetBase*>                            Item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.AddListItem
	 */
	struct UWBP_Sheik_UniformGridList_C_AddListItem_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       RefreshNavigation;                                       // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EINJ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.ListScrolled
	 */
	struct UWBP_Sheik_UniformGridList_C_ListScrolled_Params
	{
	public:
		float                                                      CurrentOffset;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.PreConstruct
	 */
	struct UWBP_Sheik_UniformGridList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_UniformGridList_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.ExecuteUbergraph_WBP_Sheik_UniformGridList
	 */
	struct UWBP_Sheik_UniformGridList_C_ExecuteUbergraph_WBP_Sheik_UniformGridList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.OnListScrolled__DelegateSignature
	 */
	struct UWBP_Sheik_UniformGridList_C_OnListScrolled__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ScrollPosition;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
