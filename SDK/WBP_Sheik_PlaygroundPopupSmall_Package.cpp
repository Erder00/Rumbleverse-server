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
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.HideControlLinePrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HidePrompt                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_PlaygroundPopupSmall_C::HideControlLinePrompt(bool HidePrompt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.HideControlLinePrompt");
		
		UWBP_Sheik_PlaygroundPopupSmall_C_HideControlLinePrompt_Params params {};
		params.HidePrompt = HidePrompt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.IsControlLineValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikPlaygroundPopupControlLine            InControlLine                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               OutValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_PlaygroundPopupSmall_C::IsControlLineValid(const struct FSheikPlaygroundPopupControlLine& InControlLine, bool* OutValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.IsControlLineValid");
		
		UWBP_Sheik_PlaygroundPopupSmall_C_IsControlLineValid_Params params {};
		params.InControlLine = InControlLine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutValid != nullptr)
			*OutValid = params.OutValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.SetControlLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikPlaygroundPopupControlLine            InControlLine                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_PlaygroundPopupSmall_C::SetControlLine(const struct FSheikPlaygroundPopupControlLine& InControlLine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.SetControlLine");
		
		UWBP_Sheik_PlaygroundPopupSmall_C_SetControlLine_Params params {};
		params.InControlLine = InControlLine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikPlaygroundPopupDefinitionRow          InPopupDefinition                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_PlaygroundPopupSmall_C::SetData(const struct FSheikPlaygroundPopupDefinitionRow& InPopupDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.SetData");
		
		UWBP_Sheik_PlaygroundPopupSmall_C_SetData_Params params {};
		params.InPopupDefinition = InPopupDefinition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.OnBackPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_PlaygroundPopupSmall_C::OnBackPressed(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.OnBackPressed");
		
		UWBP_Sheik_PlaygroundPopupSmall_C_OnBackPressed_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_PlaygroundPopupSmall_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.ConstructOnlyOnce");
		
		UWBP_Sheik_PlaygroundPopupSmall_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.ShowNewPlaygroundPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         InPopupRowHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_Sheik_PlaygroundPopupSmall_C::ShowNewPlaygroundPopup(const struct FDataTableRowHandle& InPopupRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.ShowNewPlaygroundPopup");
		
		UWBP_Sheik_PlaygroundPopupSmall_C_ShowNewPlaygroundPopup_Params params {};
		params.InPopupRowHandle = InPopupRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.TutorialPopupClosed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ReadableContent                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_Sheik_PlaygroundPopupSmall_C::TutorialPopupClosed(const struct FDataTableRowHandle& ReadableContent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.TutorialPopupClosed");
		
		UWBP_Sheik_PlaygroundPopupSmall_C_TutorialPopupClosed_Params params {};
		params.ReadableContent = ReadableContent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.HideSmallPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         PopupRowHandle                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_Sheik_PlaygroundPopupSmall_C::HideSmallPopup(const struct FDataTableRowHandle& PopupRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.HideSmallPopup");
		
		UWBP_Sheik_PlaygroundPopupSmall_C_HideSmallPopup_Params params {};
		params.PopupRowHandle = PopupRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.ExecuteUbergraph_WBP_Sheik_PlaygroundPopupSmall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_PlaygroundPopupSmall_C::ExecuteUbergraph_WBP_Sheik_PlaygroundPopupSmall(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.ExecuteUbergraph_WBP_Sheik_PlaygroundPopupSmall");
		
		UWBP_Sheik_PlaygroundPopupSmall_C_ExecuteUbergraph_WBP_Sheik_PlaygroundPopupSmall_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.OnClosePopup__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_PlaygroundPopupSmall_C::OnClosePopup__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.OnClosePopup__DelegateSignature");
		
		UWBP_Sheik_PlaygroundPopupSmall_C_OnClosePopup__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_PlaygroundPopupSmall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_PlaygroundPopupSmall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C");
		return ptr;
	}

}


