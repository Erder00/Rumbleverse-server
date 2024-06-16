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
	 * 		Name   -> Function WBP_Sheik_WakeupHint.WBP_Sheik_WakeupHint_C.ShowWakeupHint
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_WakeupHint_C::ShowWakeupHint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_WakeupHint.WBP_Sheik_WakeupHint_C.ShowWakeupHint");
		
		UWBP_Sheik_WakeupHint_C_ShowWakeupHint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_WakeupHint.WBP_Sheik_WakeupHint_C.SetPromptText
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_WakeupHint_C::SetPromptText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_WakeupHint.WBP_Sheik_WakeupHint_C.SetPromptText");
		
		UWBP_Sheik_WakeupHint_C_SetPromptText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_WakeupHint.WBP_Sheik_WakeupHint_C.UpdateHintPosition
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_WakeupHint_C::UpdateHintPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_WakeupHint.WBP_Sheik_WakeupHint_C.UpdateHintPosition");
		
		UWBP_Sheik_WakeupHint_C_UpdateHintPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_WakeupHint.WBP_Sheik_WakeupHint_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_WakeupHint_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_WakeupHint.WBP_Sheik_WakeupHint_C.ConstructOnlyOnce");
		
		UWBP_Sheik_WakeupHint_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_WakeupHint.WBP_Sheik_WakeupHint_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_WakeupHint_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_WakeupHint.WBP_Sheik_WakeupHint_C.Tick");
		
		UWBP_Sheik_WakeupHint_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_WakeupHint.WBP_Sheik_WakeupHint_C.OnTransitionWindowChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TransitionTag                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAdded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_WakeupHint_C::OnTransitionWindowChanged(const class FName& TransitionTag, bool bAdded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_WakeupHint.WBP_Sheik_WakeupHint_C.OnTransitionWindowChanged");
		
		UWBP_Sheik_WakeupHint_C_OnTransitionWindowChanged_Params params {};
		params.TransitionTag = TransitionTag;
		params.bAdded = bAdded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_WakeupHint.WBP_Sheik_WakeupHint_C.ExecuteUbergraph_WBP_Sheik_WakeupHint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_WakeupHint_C::ExecuteUbergraph_WBP_Sheik_WakeupHint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_WakeupHint.WBP_Sheik_WakeupHint_C.ExecuteUbergraph_WBP_Sheik_WakeupHint");
		
		UWBP_Sheik_WakeupHint_C_ExecuteUbergraph_WBP_Sheik_WakeupHint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_WakeupHint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_WakeupHint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_WakeupHint.WBP_Sheik_WakeupHint_C");
		return ptr;
	}

}


