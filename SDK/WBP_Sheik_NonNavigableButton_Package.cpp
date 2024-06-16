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
	 * 		Name   -> Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_NonNavigableButton_C::SetText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.SetText");
		
		UWBP_Sheik_NonNavigableButton_C_SetText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.IsAnimationBusy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsBusy                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_NonNavigableButton_C::IsAnimationBusy(bool* IsBusy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.IsAnimationBusy");
		
		UWBP_Sheik_NonNavigableButton_C_IsAnimationBusy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsBusy != nullptr)
			*IsBusy = params.IsBusy;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_Sheik_NonNavigableButton_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnMouseButtonDown");
		
		UWBP_Sheik_NonNavigableButton_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnActivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_NonNavigableButton_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnActivated");
		
		UWBP_Sheik_NonNavigableButton_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnDeactivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_NonNavigableButton_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnDeactivated");
		
		UWBP_Sheik_NonNavigableButton_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnMouseEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_NonNavigableButton_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnMouseEnter");
		
		UWBP_Sheik_NonNavigableButton_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnMouseLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_NonNavigableButton_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnMouseLeave");
		
		UWBP_Sheik_NonNavigableButton_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.BndEvt__ButtonAction_K2Node_ComponentBoundEvent_1_OnActionConfirmed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_NonNavigableButton_C::BndEvt__ButtonAction_K2Node_ComponentBoundEvent_1_OnActionConfirmed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.BndEvt__ButtonAction_K2Node_ComponentBoundEvent_1_OnActionConfirmed__DelegateSignature");
		
		UWBP_Sheik_NonNavigableButton_C_BndEvt__ButtonAction_K2Node_ComponentBoundEvent_1_OnActionConfirmed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_NonNavigableButton_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnInitialized");
		
		UWBP_Sheik_NonNavigableButton_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnSelectFinished
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_NonNavigableButton_C::OnSelectFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnSelectFinished");
		
		UWBP_Sheik_NonNavigableButton_C_OnSelectFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.BndEvt__ButtonAction_K2Node_ComponentBoundEvent_3_OnHoldActionStarted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_NonNavigableButton_C::BndEvt__ButtonAction_K2Node_ComponentBoundEvent_3_OnHoldActionStarted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.BndEvt__ButtonAction_K2Node_ComponentBoundEvent_3_OnHoldActionStarted__DelegateSignature");
		
		UWBP_Sheik_NonNavigableButton_C_BndEvt__ButtonAction_K2Node_ComponentBoundEvent_3_OnHoldActionStarted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.BndEvt__ButtonAction_K2Node_ComponentBoundEvent_4_OnHoldActionCancelled__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_NonNavigableButton_C::BndEvt__ButtonAction_K2Node_ComponentBoundEvent_4_OnHoldActionCancelled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.BndEvt__ButtonAction_K2Node_ComponentBoundEvent_4_OnHoldActionCancelled__DelegateSignature");
		
		UWBP_Sheik_NonNavigableButton_C_BndEvt__ButtonAction_K2Node_ComponentBoundEvent_4_OnHoldActionCancelled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_NonNavigableButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.PreConstruct");
		
		UWBP_Sheik_NonNavigableButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_NonNavigableButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.Construct");
		
		UWBP_Sheik_NonNavigableButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnActionConfirmedMouse
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_NonNavigableButton_C::OnActionConfirmedMouse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnActionConfirmedMouse");
		
		UWBP_Sheik_NonNavigableButton_C_OnActionConfirmedMouse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.ExecuteUbergraph_WBP_Sheik_NonNavigableButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_NonNavigableButton_C::ExecuteUbergraph_WBP_Sheik_NonNavigableButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.ExecuteUbergraph_WBP_Sheik_NonNavigableButton");
		
		UWBP_Sheik_NonNavigableButton_C_ExecuteUbergraph_WBP_Sheik_NonNavigableButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnHoldActionCancelled__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_NonNavigableButton_C::OnHoldActionCancelled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnHoldActionCancelled__DelegateSignature");
		
		UWBP_Sheik_NonNavigableButton_C_OnHoldActionCancelled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnActionConfirmed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_NonNavigableButton_C::OnActionConfirmed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnActionConfirmed__DelegateSignature");
		
		UWBP_Sheik_NonNavigableButton_C_OnActionConfirmed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnHoldActionStarted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_NonNavigableButton_C::OnHoldActionStarted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnHoldActionStarted__DelegateSignature");
		
		UWBP_Sheik_NonNavigableButton_C_OnHoldActionStarted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_NonNavigableButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_NonNavigableButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C");
		return ptr;
	}

}


