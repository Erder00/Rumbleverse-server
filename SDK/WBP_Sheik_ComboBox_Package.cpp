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
	 * 		Name   -> Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UWBP_Sheik_ComboBox_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.OnFocusReceived");
		
		UWBP_Sheik_ComboBox_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.GetSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Selection                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ComboBox_C::GetSelection(class FString* Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.GetSelection");
		
		UWBP_Sheik_ComboBox_C_GetSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Selection != nullptr)
			*Selection = params.Selection;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.GetComboBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UComboBoxString*                             ComboBox                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ComboBox_C::GetComboBox(class UComboBoxString** ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.GetComboBox");
		
		UWBP_Sheik_ComboBox_C_GetComboBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ComboBox != nullptr)
			*ComboBox = params.ComboBox;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.HasSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasSelection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ComboBox_C::HasSelection(bool* HasSelection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.HasSelection");
		
		UWBP_Sheik_ComboBox_C_HasSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasSelection != nullptr)
			*HasSelection = params.HasSelection;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.Clear
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ComboBox_C::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.Clear");
		
		UWBP_Sheik_ComboBox_C_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.BndEvt__WBP_Sheik_ComboBox_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ComboBox_C::BndEvt__WBP_Sheik_ComboBox_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.BndEvt__WBP_Sheik_ComboBox_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
		
		UWBP_Sheik_ComboBox_C_BndEvt__WBP_Sheik_ComboBox_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.BndEvt__WBP_Sheik_ComboBox_ComboBox_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ComboBox_C::BndEvt__WBP_Sheik_ComboBox_ComboBox_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.BndEvt__WBP_Sheik_ComboBox_ComboBox_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature");
		
		UWBP_Sheik_ComboBox_C_BndEvt__WBP_Sheik_ComboBox_ComboBox_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ComboBox_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.Construct");
		
		UWBP_Sheik_ComboBox_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ComboBox_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.PreConstruct");
		
		UWBP_Sheik_ComboBox_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.OnAddedToFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_Sheik_ComboBox_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.OnAddedToFocusPath");
		
		UWBP_Sheik_ComboBox_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.OnRemovedFromFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_Sheik_ComboBox_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.OnRemovedFromFocusPath");
		
		UWBP_Sheik_ComboBox_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.BndEvt__WBP_Sheik_ComboBox_ComboBox_K2Node_ComponentBoundEvent_2_OnClosingEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ComboBox_C::BndEvt__WBP_Sheik_ComboBox_ComboBox_K2Node_ComponentBoundEvent_2_OnClosingEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.BndEvt__WBP_Sheik_ComboBox_ComboBox_K2Node_ComponentBoundEvent_2_OnClosingEvent__DelegateSignature");
		
		UWBP_Sheik_ComboBox_C_BndEvt__WBP_Sheik_ComboBox_ComboBox_K2Node_ComponentBoundEvent_2_OnClosingEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.ExecuteUbergraph_WBP_Sheik_ComboBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ComboBox_C::ExecuteUbergraph_WBP_Sheik_ComboBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.ExecuteUbergraph_WBP_Sheik_ComboBox");
		
		UWBP_Sheik_ComboBox_C_ExecuteUbergraph_WBP_Sheik_ComboBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.OnComboClosing__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UComboBoxString*                             ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ComboBox_C::OnComboClosing__DelegateSignature(class UComboBoxString* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.OnComboClosing__DelegateSignature");
		
		UWBP_Sheik_ComboBox_C_OnComboClosing__DelegateSignature_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.OnComboOpening__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UComboBoxString*                             ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ComboBox_C::OnComboOpening__DelegateSignature(class UComboBoxString* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.OnComboOpening__DelegateSignature");
		
		UWBP_Sheik_ComboBox_C_OnComboOpening__DelegateSignature_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.OnComboSelectionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ComboBox_C::OnComboSelectionChanged__DelegateSignature(const class FString& Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.OnComboSelectionChanged__DelegateSignature");
		
		UWBP_Sheik_ComboBox_C_OnComboSelectionChanged__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_ComboBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_ComboBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C");
		return ptr;
	}

}


