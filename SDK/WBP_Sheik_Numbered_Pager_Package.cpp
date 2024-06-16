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
	 * 		Name   -> Function WBP_Sheik_Numbered_Pager.WBP_Sheik_Numbered_Pager_C.GetNavigableWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UIGUI_WidgetBase*>                    NavigableWidgets                                           (Parm, OutParm, ContainsInstancedReference)
	 */
	void UWBP_Sheik_Numbered_Pager_C::GetNavigableWidgets(TArray<class UIGUI_WidgetBase*>* NavigableWidgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Numbered_Pager.WBP_Sheik_Numbered_Pager_C.GetNavigableWidgets");
		
		UWBP_Sheik_Numbered_Pager_C_GetNavigableWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NavigableWidgets != nullptr)
			*NavigableWidgets = params.NavigableWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Numbered_Pager.WBP_Sheik_Numbered_Pager_C.UpdateTabs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurrentPageIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Numbered_Pager_C::UpdateTabs(int32_t CurrentPageIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Numbered_Pager.WBP_Sheik_Numbered_Pager_C.UpdateTabs");
		
		UWBP_Sheik_Numbered_Pager_C_UpdateTabs_Params params {};
		params.CurrentPageIndex = CurrentPageIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Numbered_Pager.WBP_Sheik_Numbered_Pager_C.PopulatePageTabs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InNumberOfPages                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Numbered_Pager_C::PopulatePageTabs(int32_t InNumberOfPages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Numbered_Pager.WBP_Sheik_Numbered_Pager_C.PopulatePageTabs");
		
		UWBP_Sheik_Numbered_Pager_C_PopulatePageTabs_Params params {};
		params.InNumberOfPages = InNumberOfPages;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Numbered_Pager.WBP_Sheik_Numbered_Pager_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Numbered_Pager_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Numbered_Pager.WBP_Sheik_Numbered_Pager_C.PreConstruct");
		
		UWBP_Sheik_Numbered_Pager_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Numbered_Pager.WBP_Sheik_Numbered_Pager_C.BndEvt__TabLeft_K2Node_ComponentBoundEvent_0_OnStateChangeEventWithUserIndex__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Numbered_Pager_C::BndEvt__TabLeft_K2Node_ComponentBoundEvent_0_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Numbered_Pager.WBP_Sheik_Numbered_Pager_C.BndEvt__TabLeft_K2Node_ComponentBoundEvent_0_OnStateChangeEventWithUserIndex__DelegateSignature");
		
		UWBP_Sheik_Numbered_Pager_C_BndEvt__TabLeft_K2Node_ComponentBoundEvent_0_OnStateChangeEventWithUserIndex__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Numbered_Pager.WBP_Sheik_Numbered_Pager_C.BndEvt__TabRight_K2Node_ComponentBoundEvent_1_OnStateChangeEventWithUserIndex__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Numbered_Pager_C::BndEvt__TabRight_K2Node_ComponentBoundEvent_1_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Numbered_Pager.WBP_Sheik_Numbered_Pager_C.BndEvt__TabRight_K2Node_ComponentBoundEvent_1_OnStateChangeEventWithUserIndex__DelegateSignature");
		
		UWBP_Sheik_Numbered_Pager_C_BndEvt__TabRight_K2Node_ComponentBoundEvent_1_OnStateChangeEventWithUserIndex__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Numbered_Pager.WBP_Sheik_Numbered_Pager_C.OnPageSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PageIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Numbered_Pager_C::OnPageSelected(int32_t PageIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Numbered_Pager.WBP_Sheik_Numbered_Pager_C.OnPageSelected");
		
		UWBP_Sheik_Numbered_Pager_C_OnPageSelected_Params params {};
		params.PageIndex = PageIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Numbered_Pager.WBP_Sheik_Numbered_Pager_C.ExecuteUbergraph_WBP_Sheik_Numbered_Pager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Numbered_Pager_C::ExecuteUbergraph_WBP_Sheik_Numbered_Pager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Numbered_Pager.WBP_Sheik_Numbered_Pager_C.ExecuteUbergraph_WBP_Sheik_Numbered_Pager");
		
		UWBP_Sheik_Numbered_Pager_C_ExecuteUbergraph_WBP_Sheik_Numbered_Pager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Numbered_Pager.WBP_Sheik_Numbered_Pager_C.SwitchPage__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PageNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Numbered_Pager_C::SwitchPage__DelegateSignature(int32_t PageNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Numbered_Pager.WBP_Sheik_Numbered_Pager_C.SwitchPage__DelegateSignature");
		
		UWBP_Sheik_Numbered_Pager_C_SwitchPage__DelegateSignature_Params params {};
		params.PageNumber = PageNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Numbered_Pager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Numbered_Pager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Numbered_Pager.WBP_Sheik_Numbered_Pager_C");
		return ptr;
	}

}


