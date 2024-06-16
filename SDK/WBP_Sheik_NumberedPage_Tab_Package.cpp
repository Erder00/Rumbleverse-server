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
	 * 		Name   -> Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.HandleFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFocused                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_NumberedPage_Tab_C::HandleFocus(bool IsFocused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.HandleFocus");
		
		UWBP_Sheik_NumberedPage_Tab_C_HandleFocus_Params params {};
		params.IsFocused = IsFocused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.SetPageNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InPageNumber                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_NumberedPage_Tab_C::SetPageNumber(int32_t InPageNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.SetPageNumber");
		
		UWBP_Sheik_NumberedPage_Tab_C_SetPageNumber_Params params {};
		params.InPageNumber = InPageNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.SetNumberVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_NumberedPage_Tab_C::SetNumberVisibility(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.SetNumberVisibility");
		
		UWBP_Sheik_NumberedPage_Tab_C_SetNumberVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.Set Active Tab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_NumberedPage_Tab_C::SetActiveTab(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.Set Active Tab");
		
		UWBP_Sheik_NumberedPage_Tab_C_SetActiveTab_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_NumberedPage_Tab_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.ConstructOnlyOnce");
		
		UWBP_Sheik_NumberedPage_Tab_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.OnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_NumberedPage_Tab_C::OnSelected(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.OnSelected");
		
		UWBP_Sheik_NumberedPage_Tab_C_OnSelected_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.OnGainFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_NumberedPage_Tab_C::OnGainFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.OnGainFocus");
		
		UWBP_Sheik_NumberedPage_Tab_C_OnGainFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.OnLoseFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_NumberedPage_Tab_C::OnLoseFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.OnLoseFocus");
		
		UWBP_Sheik_NumberedPage_Tab_C_OnLoseFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.ExecuteUbergraph_WBP_Sheik_NumberedPage_Tab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_NumberedPage_Tab_C::ExecuteUbergraph_WBP_Sheik_NumberedPage_Tab(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.ExecuteUbergraph_WBP_Sheik_NumberedPage_Tab");
		
		UWBP_Sheik_NumberedPage_Tab_C_ExecuteUbergraph_WBP_Sheik_NumberedPage_Tab_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.PageTabSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PageNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_NumberedPage_Tab_C::PageTabSelected__DelegateSignature(int32_t PageNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.PageTabSelected__DelegateSignature");
		
		UWBP_Sheik_NumberedPage_Tab_C_PageTabSelected__DelegateSignature_Params params {};
		params.PageNumber = PageNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_NumberedPage_Tab_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_NumberedPage_Tab_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C");
		return ptr;
	}

}


