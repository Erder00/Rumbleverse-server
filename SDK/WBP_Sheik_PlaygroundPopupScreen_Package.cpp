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
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopupScreen.WBP_Sheik_PlaygroundPopupScreen_C.ShouldShowHudPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         InRowHandle                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_PlaygroundPopupScreen_C::ShouldShowHudPopup(const struct FDataTableRowHandle& InRowHandle, bool* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopupScreen.WBP_Sheik_PlaygroundPopupScreen_C.ShouldShowHudPopup");
		
		UWBP_Sheik_PlaygroundPopupScreen_C_ShouldShowHudPopup_Params params {};
		params.InRowHandle = InRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopupScreen.WBP_Sheik_PlaygroundPopupScreen_C.OnGainFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_PlaygroundPopupScreen_C::OnGainFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopupScreen.WBP_Sheik_PlaygroundPopupScreen_C.OnGainFocus");
		
		UWBP_Sheik_PlaygroundPopupScreen_C_OnGainFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopupScreen.WBP_Sheik_PlaygroundPopupScreen_C.OnLoseFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_PlaygroundPopupScreen_C::OnLoseFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopupScreen.WBP_Sheik_PlaygroundPopupScreen_C.OnLoseFocus");
		
		UWBP_Sheik_PlaygroundPopupScreen_C_OnLoseFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopupScreen.WBP_Sheik_PlaygroundPopupScreen_C.BndEvt__WBP_Sheik_PlaygroundPopupScreen_PopupWidget_K2Node_ComponentBoundEvent_0_OnClosePopup__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_PlaygroundPopupScreen_C::BndEvt__WBP_Sheik_PlaygroundPopupScreen_PopupWidget_K2Node_ComponentBoundEvent_0_OnClosePopup__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopupScreen.WBP_Sheik_PlaygroundPopupScreen_C.BndEvt__WBP_Sheik_PlaygroundPopupScreen_PopupWidget_K2Node_ComponentBoundEvent_0_OnClosePopup__DelegateSignature");
		
		UWBP_Sheik_PlaygroundPopupScreen_C_BndEvt__WBP_Sheik_PlaygroundPopupScreen_PopupWidget_K2Node_ComponentBoundEvent_0_OnClosePopup__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopupScreen.WBP_Sheik_PlaygroundPopupScreen_C.ExecuteUbergraph_WBP_Sheik_PlaygroundPopupScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_PlaygroundPopupScreen_C::ExecuteUbergraph_WBP_Sheik_PlaygroundPopupScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopupScreen.WBP_Sheik_PlaygroundPopupScreen_C.ExecuteUbergraph_WBP_Sheik_PlaygroundPopupScreen");
		
		UWBP_Sheik_PlaygroundPopupScreen_C_ExecuteUbergraph_WBP_Sheik_PlaygroundPopupScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_PlaygroundPopupScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_PlaygroundPopupScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_PlaygroundPopupScreen.WBP_Sheik_PlaygroundPopupScreen_C");
		return ptr;
	}

}


