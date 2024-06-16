/**
 * Name: Rumbleverse
 * Version: Latest
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.RefreshWidgetsWithNavigationOverride
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScrollableVerticalList_C::RefreshWidgetsWithNavigationOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.RefreshWidgetsWithNavigationOverride");
		
		UWBP_Sheik_ScrollableVerticalList_C_RefreshWidgetsWithNavigationOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.SetNamedSlotHorizontalBoxSpacing
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScrollableVerticalList_C::SetNamedSlotHorizontalBoxSpacing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.SetNamedSlotHorizontalBoxSpacing");
		
		UWBP_Sheik_ScrollableVerticalList_C_SetNamedSlotHorizontalBoxSpacing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.PutNamedSlotHorizontalBoxContentIntoScrollList
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScrollableVerticalList_C::PutNamedSlotHorizontalBoxContentIntoScrollList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.PutNamedSlotHorizontalBoxContentIntoScrollList");
		
		UWBP_Sheik_ScrollableVerticalList_C_PutNamedSlotHorizontalBoxContentIntoScrollList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.EnableInputHandling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ScrollableVerticalList_C::EnableInputHandling(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.EnableInputHandling");
		
		UWBP_Sheik_ScrollableVerticalList_C_EnableInputHandling_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.ListItemFocused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScrollableVerticalList_C::ListItemFocused(class UIGUI_WidgetBase* Source, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.ListItemFocused");
		
		UWBP_Sheik_ScrollableVerticalList_C_ListItemFocused_Params params {};
		params.Source = Source;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.SetScrollboxOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewScrollOffset                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScrollableVerticalList_C::SetScrollboxOffset(float NewScrollOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.SetScrollboxOffset");
		
		UWBP_Sheik_ScrollableVerticalList_C_SetScrollboxOffset_Params params {};
		params.NewScrollOffset = NewScrollOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.ScrollUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ScrollableVerticalList_C::ScrollUp(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.ScrollUp");
		
		UWBP_Sheik_ScrollableVerticalList_C_ScrollUp_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.PageUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ScrollableVerticalList_C::PageUp(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.PageUp");
		
		UWBP_Sheik_ScrollableVerticalList_C_PageUp_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.ScrollPageByPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ScrollPercent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScrollableVerticalList_C::ScrollPageByPercent(float ScrollPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.ScrollPageByPercent");
		
		UWBP_Sheik_ScrollableVerticalList_C_ScrollPageByPercent_Params params {};
		params.ScrollPercent = ScrollPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.ScrollDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ScrollableVerticalList_C::ScrollDown(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.ScrollDown");
		
		UWBP_Sheik_ScrollableVerticalList_C_ScrollDown_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.PageDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ScrollableVerticalList_C::PageDown(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.PageDown");
		
		UWBP_Sheik_ScrollableVerticalList_C_PageDown_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.GetMaxOffset
	 * 		Flags  -> ()
	 */
	float UWBP_Sheik_ScrollableVerticalList_C::GetMaxOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.GetMaxOffset");
		
		UWBP_Sheik_ScrollableVerticalList_C_GetMaxOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.GetScrollbox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UScrollBox*                                  ScrollBox                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScrollableVerticalList_C::GetScrollbox(class UScrollBox** ScrollBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.GetScrollbox");
		
		UWBP_Sheik_ScrollableVerticalList_C_GetScrollbox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScrollBox != nullptr)
			*ScrollBox = params.ScrollBox;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.GetScrollPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Offset                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScrollableVerticalList_C::GetScrollPosition(float* Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.GetScrollPosition");
		
		UWBP_Sheik_ScrollableVerticalList_C_GetScrollPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Offset != nullptr)
			*Offset = params.Offset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.GetContentSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   ContentSize                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScrollableVerticalList_C::GetContentSize(struct FVector2D* ContentSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.GetContentSize");
		
		UWBP_Sheik_ScrollableVerticalList_C_GetContentSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ContentSize != nullptr)
			*ContentSize = params.ContentSize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.GetListCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScrollableVerticalList_C::GetListCount(int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.GetListCount");
		
		UWBP_Sheik_ScrollableVerticalList_C_GetListCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.SetScrollPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScrollableVerticalList_C::SetScrollPosition(float Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.SetScrollPosition");
		
		UWBP_Sheik_ScrollableVerticalList_C_SetScrollPosition_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.RemoveAllItems
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScrollableVerticalList_C::RemoveAllItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.RemoveAllItems");
		
		UWBP_Sheik_ScrollableVerticalList_C_RemoveAllItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.RemoveItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScrollableVerticalList_C::RemoveItem(class UIGUI_WidgetBase* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.RemoveItem");
		
		UWBP_Sheik_ScrollableVerticalList_C_RemoveItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.AddListItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UIGUI_WidgetBase*>                    Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void UWBP_Sheik_ScrollableVerticalList_C::AddListItems(TArray<class UIGUI_WidgetBase*>* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.AddListItems");
		
		UWBP_Sheik_ScrollableVerticalList_C_AddListItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Item != nullptr)
			*Item = params.Item;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.AddListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScrollableVerticalList_C::AddListItem(class UIGUI_WidgetBase* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.AddListItem");
		
		UWBP_Sheik_ScrollableVerticalList_C_AddListItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.ListScrolled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScrollableVerticalList_C::ListScrolled(float CurrentOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.ListScrolled");
		
		UWBP_Sheik_ScrollableVerticalList_C_ListScrolled_Params params {};
		params.CurrentOffset = CurrentOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ScrollableVerticalList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.PreConstruct");
		
		UWBP_Sheik_ScrollableVerticalList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScrollableVerticalList_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.ConstructOnlyOnce");
		
		UWBP_Sheik_ScrollableVerticalList_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.ExecuteUbergraph_WBP_Sheik_ScrollableVerticalList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScrollableVerticalList_C::ExecuteUbergraph_WBP_Sheik_ScrollableVerticalList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.ExecuteUbergraph_WBP_Sheik_ScrollableVerticalList");
		
		UWBP_Sheik_ScrollableVerticalList_C_ExecuteUbergraph_WBP_Sheik_ScrollableVerticalList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.OnListScrolled__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ScrollPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScrollableVerticalList_C::OnListScrolled__DelegateSignature(class UIGUI_WidgetBase* Source, float ScrollPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C.OnListScrolled__DelegateSignature");
		
		UWBP_Sheik_ScrollableVerticalList_C_OnListScrolled__DelegateSignature_Params params {};
		params.Source = Source;
		params.ScrollPosition = ScrollPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_ScrollableVerticalList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_ScrollableVerticalList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_ScrollableVerticalList.WBP_Sheik_ScrollableVerticalList_C");
		return ptr;
	}

}


