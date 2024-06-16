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
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.ScrollStandardActionCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_UniformGridList_C::ScrollStandardActionCallback(const struct FInputEventData& InputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.ScrollStandardActionCallback");
		
		UWBP_Sheik_UniformGridList_C_ScrollStandardActionCallback_Params params {};
		params.InputEvent = InputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetWrapRight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WrapRight                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_UniformGridList_C::GetWrapRight(bool* WrapRight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetWrapRight");
		
		UWBP_Sheik_UniformGridList_C_GetWrapRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WrapRight != nullptr)
			*WrapRight = params.WrapRight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetWrapLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WrapLeft                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_UniformGridList_C::GetWrapLeft(bool* WrapLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetWrapLeft");
		
		UWBP_Sheik_UniformGridList_C_GetWrapLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WrapLeft != nullptr)
			*WrapLeft = params.WrapLeft;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetWrapDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WrapDown                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_UniformGridList_C::GetWrapDown(bool* WrapDown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetWrapDown");
		
		UWBP_Sheik_UniformGridList_C_GetWrapDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WrapDown != nullptr)
			*WrapDown = params.WrapDown;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetWrapUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WrapUp                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_UniformGridList_C::GetWrapUp(bool* WrapUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetWrapUp");
		
		UWBP_Sheik_UniformGridList_C_GetWrapUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WrapUp != nullptr)
			*WrapUp = params.WrapUp;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.SetWrapRight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WrapRight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_UniformGridList_C::SetWrapRight(bool WrapRight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.SetWrapRight");
		
		UWBP_Sheik_UniformGridList_C_SetWrapRight_Params params {};
		params.WrapRight = WrapRight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.SetWrapLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WrapLeft                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_UniformGridList_C::SetWrapLeft(bool WrapLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.SetWrapLeft");
		
		UWBP_Sheik_UniformGridList_C_SetWrapLeft_Params params {};
		params.WrapLeft = WrapLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.SetWrapDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WrapDown                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_UniformGridList_C::SetWrapDown(bool WrapDown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.SetWrapDown");
		
		UWBP_Sheik_UniformGridList_C_SetWrapDown_Params params {};
		params.WrapDown = WrapDown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.SetWrapUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WrapUp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_UniformGridList_C::SetWrapUp(bool WrapUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.SetWrapUp");
		
		UWBP_Sheik_UniformGridList_C_SetWrapUp_Params params {};
		params.WrapUp = WrapUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetIndexByRowAndColumn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Row                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Column                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_UniformGridList_C::GetIndexByRowAndColumn(int32_t Row, int32_t Column, int32_t* index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetIndexByRowAndColumn");
		
		UWBP_Sheik_UniformGridList_C_GetIndexByRowAndColumn_Params params {};
		params.Row = Row;
		params.Column = Column;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (index != nullptr)
			*index = params.index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UIGUI_WidgetBase*>                    Items                                                      (Parm, OutParm, ContainsInstancedReference)
	 */
	void UWBP_Sheik_UniformGridList_C::GetItems(TArray<class UIGUI_WidgetBase*>* Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetItems");
		
		UWBP_Sheik_UniformGridList_C_GetItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.RefreshItemPositions
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_UniformGridList_C::RefreshItemPositions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.RefreshItemPositions");
		
		UWBP_Sheik_UniformGridList_C_RefreshItemPositions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.SetOrientation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EOrientation                                       Orientation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_UniformGridList_C::SetOrientation(EOrientation Orientation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.SetOrientation");
		
		UWBP_Sheik_UniformGridList_C_SetOrientation_Params params {};
		params.Orientation = Orientation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetOrientation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EOrientation                                       Orientation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_UniformGridList_C::GetOrientation(EOrientation* Orientation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetOrientation");
		
		UWBP_Sheik_UniformGridList_C_GetOrientation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Orientation != nullptr)
			*Orientation = params.Orientation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetIndexRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UWBP_Sheik_UniformGridList_C::GetIndexRow(int32_t ItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetIndexRow");
		
		UWBP_Sheik_UniformGridList_C_GetIndexRow_Params params {};
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetIndexColumn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Column                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_UniformGridList_C::GetIndexColumn(int32_t ItemIndex, int32_t* Column)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetIndexColumn");
		
		UWBP_Sheik_UniformGridList_C_GetIndexColumn_Params params {};
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Column != nullptr)
			*Column = params.Column;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.RefreshNavigationOverrides
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CountOverride                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_UniformGridList_C::RefreshNavigationOverrides(int32_t CountOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.RefreshNavigationOverrides");
		
		UWBP_Sheik_UniformGridList_C_RefreshNavigationOverrides_Params params {};
		params.CountOverride = CountOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.EnableInputHandling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_UniformGridList_C::EnableInputHandling(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.EnableInputHandling");
		
		UWBP_Sheik_UniformGridList_C_EnableInputHandling_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.ListItemFocused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_UniformGridList_C::ListItemFocused(class UIGUI_WidgetBase* Source, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.ListItemFocused");
		
		UWBP_Sheik_UniformGridList_C_ListItemFocused_Params params {};
		params.Source = Source;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.SetScrollboxOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewScrollOffset                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_UniformGridList_C::SetScrollboxOffset(float NewScrollOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.SetScrollboxOffset");
		
		UWBP_Sheik_UniformGridList_C_SetScrollboxOffset_Params params {};
		params.NewScrollOffset = NewScrollOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.ScrollPageByPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ScrollPercent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_UniformGridList_C::ScrollPageByPercent(float ScrollPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.ScrollPageByPercent");
		
		UWBP_Sheik_UniformGridList_C_ScrollPageByPercent_Params params {};
		params.ScrollPercent = ScrollPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetMaxOffset
	 * 		Flags  -> ()
	 */
	float UWBP_Sheik_UniformGridList_C::GetMaxOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetMaxOffset");
		
		UWBP_Sheik_UniformGridList_C_GetMaxOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetScrollbox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UScrollBox*                                  ScrollBox                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_UniformGridList_C::GetScrollbox(class UScrollBox** ScrollBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetScrollbox");
		
		UWBP_Sheik_UniformGridList_C_GetScrollbox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScrollBox != nullptr)
			*ScrollBox = params.ScrollBox;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetScrollPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Offset                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_UniformGridList_C::GetScrollPosition(float* Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetScrollPosition");
		
		UWBP_Sheik_UniformGridList_C_GetScrollPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Offset != nullptr)
			*Offset = params.Offset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetContentSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   ContentSize                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_UniformGridList_C::GetContentSize(struct FVector2D* ContentSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetContentSize");
		
		UWBP_Sheik_UniformGridList_C_GetContentSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ContentSize != nullptr)
			*ContentSize = params.ContentSize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetListCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_UniformGridList_C::GetListCount(int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.GetListCount");
		
		UWBP_Sheik_UniformGridList_C_GetListCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.SetScrollPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_UniformGridList_C::SetScrollPosition(float Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.SetScrollPosition");
		
		UWBP_Sheik_UniformGridList_C_SetScrollPosition_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.RemoveAllItems
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_UniformGridList_C::RemoveAllItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.RemoveAllItems");
		
		UWBP_Sheik_UniformGridList_C_RemoveAllItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.RemoveItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_UniformGridList_C::RemoveItem(class UIGUI_WidgetBase* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.RemoveItem");
		
		UWBP_Sheik_UniformGridList_C_RemoveItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.AddListItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UIGUI_WidgetBase*>                    Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void UWBP_Sheik_UniformGridList_C::AddListItems(TArray<class UIGUI_WidgetBase*>* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.AddListItems");
		
		UWBP_Sheik_UniformGridList_C_AddListItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Item != nullptr)
			*Item = params.Item;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.AddListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               RefreshNavigation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_UniformGridList_C::AddListItem(class UIGUI_WidgetBase* Item, bool RefreshNavigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.AddListItem");
		
		UWBP_Sheik_UniformGridList_C_AddListItem_Params params {};
		params.Item = Item;
		params.RefreshNavigation = RefreshNavigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.ListScrolled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_UniformGridList_C::ListScrolled(float CurrentOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.ListScrolled");
		
		UWBP_Sheik_UniformGridList_C_ListScrolled_Params params {};
		params.CurrentOffset = CurrentOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_UniformGridList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.PreConstruct");
		
		UWBP_Sheik_UniformGridList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_UniformGridList_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.ConstructOnlyOnce");
		
		UWBP_Sheik_UniformGridList_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.ExecuteUbergraph_WBP_Sheik_UniformGridList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_UniformGridList_C::ExecuteUbergraph_WBP_Sheik_UniformGridList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.ExecuteUbergraph_WBP_Sheik_UniformGridList");
		
		UWBP_Sheik_UniformGridList_C_ExecuteUbergraph_WBP_Sheik_UniformGridList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.OnListScrolled__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ScrollPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_UniformGridList_C::OnListScrolled__DelegateSignature(class UIGUI_WidgetBase* Source, float ScrollPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C.OnListScrolled__DelegateSignature");
		
		UWBP_Sheik_UniformGridList_C_OnListScrolled__DelegateSignature_Params params {};
		params.Source = Source;
		params.ScrollPosition = ScrollPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_UniformGridList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_UniformGridList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C");
		return ptr;
	}

}


