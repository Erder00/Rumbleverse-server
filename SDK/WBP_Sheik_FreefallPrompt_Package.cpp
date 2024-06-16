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
	 * 		Name   -> Function WBP_Sheik_FreefallPrompt.WBP_Sheik_FreefallPrompt_C.ShowInteractionAnimFinished_cb
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_FreefallPrompt_C::ShowInteractionAnimFinished_cb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_FreefallPrompt.WBP_Sheik_FreefallPrompt_C.ShowInteractionAnimFinished_cb");
		
		UWBP_Sheik_FreefallPrompt_C_ShowInteractionAnimFinished_cb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_FreefallPrompt.WBP_Sheik_FreefallPrompt_C.HideInteractionAnimFinished_cb
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_FreefallPrompt_C::HideInteractionAnimFinished_cb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_FreefallPrompt.WBP_Sheik_FreefallPrompt_C.HideInteractionAnimFinished_cb");
		
		UWBP_Sheik_FreefallPrompt_C_HideInteractionAnimFinished_cb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_FreefallPrompt.WBP_Sheik_FreefallPrompt_C.OnCannonLaunchPhase2Start_cb
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_FreefallPrompt_C::OnCannonLaunchPhase2Start_cb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_FreefallPrompt.WBP_Sheik_FreefallPrompt_C.OnCannonLaunchPhase2Start_cb");
		
		UWBP_Sheik_FreefallPrompt_C_OnCannonLaunchPhase2Start_cb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_FreefallPrompt.WBP_Sheik_FreefallPrompt_C.OnFreefallStart_cb
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_FreefallPrompt_C::OnFreefallStart_cb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_FreefallPrompt.WBP_Sheik_FreefallPrompt_C.OnFreefallStart_cb");
		
		UWBP_Sheik_FreefallPrompt_C_OnFreefallStart_cb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_FreefallPrompt.WBP_Sheik_FreefallPrompt_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_FreefallPrompt_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_FreefallPrompt.WBP_Sheik_FreefallPrompt_C.ConstructOnlyOnce");
		
		UWBP_Sheik_FreefallPrompt_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_FreefallPrompt.WBP_Sheik_FreefallPrompt_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_FreefallPrompt_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_FreefallPrompt.WBP_Sheik_FreefallPrompt_C.Tick");
		
		UWBP_Sheik_FreefallPrompt_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_FreefallPrompt.WBP_Sheik_FreefallPrompt_C.ExecuteUbergraph_WBP_Sheik_FreefallPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_FreefallPrompt_C::ExecuteUbergraph_WBP_Sheik_FreefallPrompt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_FreefallPrompt.WBP_Sheik_FreefallPrompt_C.ExecuteUbergraph_WBP_Sheik_FreefallPrompt");
		
		UWBP_Sheik_FreefallPrompt_C_ExecuteUbergraph_WBP_Sheik_FreefallPrompt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_FreefallPrompt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_FreefallPrompt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_FreefallPrompt.WBP_Sheik_FreefallPrompt_C");
		return ptr;
	}

}


