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
	 * 		Name   -> Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.StopButtonHeldSound
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ButtonAction_C::StopButtonHeldSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.StopButtonHeldSound");
		
		UWBP_Sheik_ButtonAction_C_StopButtonHeldSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.PlayButtonHeldSound
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ButtonAction_C::PlayButtonHeldSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.PlayButtonHeldSound");
		
		UWBP_Sheik_ButtonAction_C_PlayButtonHeldSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.UpdateIsHold
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHold                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ButtonAction_C::UpdateIsHold(bool IsHold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.UpdateIsHold");
		
		UWBP_Sheik_ButtonAction_C_UpdateIsHold_Params params {};
		params.IsHold = IsHold;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.AreHoldsAllowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ButtonAction_C::AreHoldsAllowed(bool* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.AreHoldsAllowed");
		
		UWBP_Sheik_ButtonAction_C_AreHoldsAllowed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         InputDataRow                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               IsHold                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ButtonAction_C::SetData(const struct FDataTableRowHandle& InputDataRow, bool IsHold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.SetData");
		
		UWBP_Sheik_ButtonAction_C_SetData_Params params {};
		params.InputDataRow = InputDataRow;
		params.IsHold = IsHold;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.BindInput
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ButtonAction_C::BindInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.BindInput");
		
		UWBP_Sheik_ButtonAction_C_BindInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.SetBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         InInputDataRow                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_Sheik_ButtonAction_C::SetBinding(const struct FDataTableRowHandle& InInputDataRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.SetBinding");
		
		UWBP_Sheik_ButtonAction_C_SetBinding_Params params {};
		params.InInputDataRow = InInputDataRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.OnButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ButtonAction_C::OnButtonDown(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.OnButtonDown");
		
		UWBP_Sheik_ButtonAction_C_OnButtonDown_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.OnButtonUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ButtonAction_C::OnButtonUp(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.OnButtonUp");
		
		UWBP_Sheik_ButtonAction_C_OnButtonUp_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.ButtonDownUpdate
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ButtonAction_C::ButtonDownUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.ButtonDownUpdate");
		
		UWBP_Sheik_ButtonAction_C_ButtonDownUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.OnDeactivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ButtonAction_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.OnDeactivated");
		
		UWBP_Sheik_ButtonAction_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.OnActivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ButtonAction_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.OnActivated");
		
		UWBP_Sheik_ButtonAction_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.OnInputSourceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUserControllerData                         OldInputSource                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FUserControllerData                         NewInputSource                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_Sheik_ButtonAction_C::OnInputSourceChanged(const struct FUserControllerData& OldInputSource, const struct FUserControllerData& NewInputSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.OnInputSourceChanged");
		
		UWBP_Sheik_ButtonAction_C_OnInputSourceChanged_Params params {};
		params.OldInputSource = OldInputSource;
		params.NewInputSource = NewInputSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ButtonAction_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.Construct");
		
		UWBP_Sheik_ButtonAction_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ButtonAction_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.PreConstruct");
		
		UWBP_Sheik_ButtonAction_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.Set Meter Style
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ButtonAction_C::SetMeterStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.Set Meter Style");
		
		UWBP_Sheik_ButtonAction_C_SetMeterStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.ExecuteUbergraph_WBP_Sheik_ButtonAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ButtonAction_C::ExecuteUbergraph_WBP_Sheik_ButtonAction(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.ExecuteUbergraph_WBP_Sheik_ButtonAction");
		
		UWBP_Sheik_ButtonAction_C_ExecuteUbergraph_WBP_Sheik_ButtonAction_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.OnHoldActionConfirmed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ButtonAction_C::OnHoldActionConfirmed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.OnHoldActionConfirmed__DelegateSignature");
		
		UWBP_Sheik_ButtonAction_C_OnHoldActionConfirmed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.OnHoldActionCancelled__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ButtonAction_C::OnHoldActionCancelled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.OnHoldActionCancelled__DelegateSignature");
		
		UWBP_Sheik_ButtonAction_C_OnHoldActionCancelled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.OnActionConfirmed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ButtonAction_C::OnActionConfirmed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.OnActionConfirmed__DelegateSignature");
		
		UWBP_Sheik_ButtonAction_C_OnActionConfirmed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.OnHoldActionStarted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ButtonAction_C::OnHoldActionStarted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.OnHoldActionStarted__DelegateSignature");
		
		UWBP_Sheik_ButtonAction_C_OnHoldActionStarted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_ButtonAction_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_ButtonAction_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C");
		return ptr;
	}

}


