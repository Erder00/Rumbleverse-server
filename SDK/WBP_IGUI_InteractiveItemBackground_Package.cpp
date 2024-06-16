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
	 * 		Name   -> Function WBP_IGUI_InteractiveItemBackground.WBP_IGUI_InteractiveItemBackground_C.SetFocusVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFocused                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SkipAnimation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_IGUI_InteractiveItemBackground_C::SetFocusVisuals(bool IsFocused, bool SkipAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_InteractiveItemBackground.WBP_IGUI_InteractiveItemBackground_C.SetFocusVisuals");
		
		UWBP_IGUI_InteractiveItemBackground_C_SetFocusVisuals_Params params {};
		params.IsFocused = IsFocused;
		params.SkipAnimation = SkipAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_InteractiveItemBackground.WBP_IGUI_InteractiveItemBackground_C.HandleSelected
	 * 		Flags  -> ()
	 */
	void UWBP_IGUI_InteractiveItemBackground_C::HandleSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_InteractiveItemBackground.WBP_IGUI_InteractiveItemBackground_C.HandleSelected");
		
		UWBP_IGUI_InteractiveItemBackground_C_HandleSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_InteractiveItemBackground.WBP_IGUI_InteractiveItemBackground_C.SetDisabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDisabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_IGUI_InteractiveItemBackground_C::SetDisabled(bool IsDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_InteractiveItemBackground.WBP_IGUI_InteractiveItemBackground_C.SetDisabled");
		
		UWBP_IGUI_InteractiveItemBackground_C_SetDisabled_Params params {};
		params.IsDisabled = IsDisabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_InteractiveItemBackground.WBP_IGUI_InteractiveItemBackground_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_IGUI_InteractiveItemBackground_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_InteractiveItemBackground.WBP_IGUI_InteractiveItemBackground_C.PreConstruct");
		
		UWBP_IGUI_InteractiveItemBackground_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_InteractiveItemBackground.WBP_IGUI_InteractiveItemBackground_C.SelectedAnimationFinished
	 * 		Flags  -> ()
	 */
	void UWBP_IGUI_InteractiveItemBackground_C::SelectedAnimationFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_InteractiveItemBackground.WBP_IGUI_InteractiveItemBackground_C.SelectedAnimationFinished");
		
		UWBP_IGUI_InteractiveItemBackground_C_SelectedAnimationFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_InteractiveItemBackground.WBP_IGUI_InteractiveItemBackground_C.ExecuteUbergraph_WBP_IGUI_InteractiveItemBackground
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_IGUI_InteractiveItemBackground_C::ExecuteUbergraph_WBP_IGUI_InteractiveItemBackground(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_InteractiveItemBackground.WBP_IGUI_InteractiveItemBackground_C.ExecuteUbergraph_WBP_IGUI_InteractiveItemBackground");
		
		UWBP_IGUI_InteractiveItemBackground_C_ExecuteUbergraph_WBP_IGUI_InteractiveItemBackground_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_InteractiveItemBackground.WBP_IGUI_InteractiveItemBackground_C.OnSelectedAnimationFinished__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_IGUI_InteractiveItemBackground_C::OnSelectedAnimationFinished__DelegateSignature(class UIGUI_WidgetBase* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_InteractiveItemBackground.WBP_IGUI_InteractiveItemBackground_C.OnSelectedAnimationFinished__DelegateSignature");
		
		UWBP_IGUI_InteractiveItemBackground_C_OnSelectedAnimationFinished__DelegateSignature_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_IGUI_InteractiveItemBackground_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_IGUI_InteractiveItemBackground_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_IGUI_InteractiveItemBackground.WBP_IGUI_InteractiveItemBackground_C");
		return ptr;
	}

}


