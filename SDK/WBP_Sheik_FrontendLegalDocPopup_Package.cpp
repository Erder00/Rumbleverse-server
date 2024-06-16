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
	 * 		Name   -> Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.OnInputScrollDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_FrontendLegalDocPopup_C::OnInputScrollDown(const struct FInputEventData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.OnInputScrollDown");
		
		UWBP_Sheik_FrontendLegalDocPopup_C_OnInputScrollDown_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.OnInputScrollUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_FrontendLegalDocPopup_C::OnInputScrollUp(const struct FInputEventData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.OnInputScrollUp");
		
		UWBP_Sheik_FrontendLegalDocPopup_C_OnInputScrollUp_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        HeaderText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      LocalizedDocText                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_FrontendLegalDocPopup_C::SetData(const class FText& HeaderText, const class FString& LocalizedDocText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.SetData");
		
		UWBP_Sheik_FrontendLegalDocPopup_C_SetData_Params params {};
		params.HeaderText = HeaderText;
		params.LocalizedDocText = LocalizedDocText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.EnableInput
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_FrontendLegalDocPopup_C::EnableInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.EnableInput");
		
		UWBP_Sheik_FrontendLegalDocPopup_C_EnableInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_FrontendLegalDocPopup_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.PreConstruct");
		
		UWBP_Sheik_FrontendLegalDocPopup_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.Show
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_FrontendLegalDocPopup_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.Show");
		
		UWBP_Sheik_FrontendLegalDocPopup_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.Hide
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_FrontendLegalDocPopup_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.Hide");
		
		UWBP_Sheik_FrontendLegalDocPopup_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.OnInputAccept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_FrontendLegalDocPopup_C::OnInputAccept(const struct FInputEventData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.OnInputAccept");
		
		UWBP_Sheik_FrontendLegalDocPopup_C_OnInputAccept_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.OnInputDecline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_FrontendLegalDocPopup_C::OnInputDecline(const struct FInputEventData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.OnInputDecline");
		
		UWBP_Sheik_FrontendLegalDocPopup_C_OnInputDecline_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_FrontendLegalDocPopup_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.ConstructOnlyOnce");
		
		UWBP_Sheik_FrontendLegalDocPopup_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.OnInputPrivacyPolicy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_FrontendLegalDocPopup_C::OnInputPrivacyPolicy(const struct FInputEventData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.OnInputPrivacyPolicy");
		
		UWBP_Sheik_FrontendLegalDocPopup_C_OnInputPrivacyPolicy_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.ExecuteUbergraph_WBP_Sheik_FrontendLegalDocPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_FrontendLegalDocPopup_C::ExecuteUbergraph_WBP_Sheik_FrontendLegalDocPopup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.ExecuteUbergraph_WBP_Sheik_FrontendLegalDocPopup");
		
		UWBP_Sheik_FrontendLegalDocPopup_C_ExecuteUbergraph_WBP_Sheik_FrontendLegalDocPopup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.OnHidden__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_FrontendLegalDocPopup_C::OnHidden__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.OnHidden__DelegateSignature");
		
		UWBP_Sheik_FrontendLegalDocPopup_C_OnHidden__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.OnDecline__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_FrontendLegalDocPopup_C::OnDecline__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.OnDecline__DelegateSignature");
		
		UWBP_Sheik_FrontendLegalDocPopup_C_OnDecline__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.OnAccept__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_FrontendLegalDocPopup_C::OnAccept__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.OnAccept__DelegateSignature");
		
		UWBP_Sheik_FrontendLegalDocPopup_C_OnAccept__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_FrontendLegalDocPopup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_FrontendLegalDocPopup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C");
		return ptr;
	}

}


