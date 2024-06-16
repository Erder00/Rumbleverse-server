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
	 * 		Name   -> Function WBP_Sheik_RingOutTimer.WBP_Sheik_RingOutTimer_C.OnRingOutTimeUpdated_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_RingOutTimer_C::OnRingOutTimeUpdated_cb(int32_t Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RingOutTimer.WBP_Sheik_RingOutTimer_C.OnRingOutTimeUpdated_cb");
		
		UWBP_Sheik_RingOutTimer_C_OnRingOutTimeUpdated_cb_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RingOutTimer.WBP_Sheik_RingOutTimer_C.OnFlowStateChanged_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGameFlowState                                     State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_RingOutTimer_C::OnFlowStateChanged_cb(EGameFlowState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RingOutTimer.WBP_Sheik_RingOutTimer_C.OnFlowStateChanged_cb");
		
		UWBP_Sheik_RingOutTimer_C_OnFlowStateChanged_cb_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RingOutTimer.WBP_Sheik_RingOutTimer_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RingOutTimer_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RingOutTimer.WBP_Sheik_RingOutTimer_C.ConstructOnlyOnce");
		
		UWBP_Sheik_RingOutTimer_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RingOutTimer.WBP_Sheik_RingOutTimer_C.ExecuteUbergraph_WBP_Sheik_RingOutTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_RingOutTimer_C::ExecuteUbergraph_WBP_Sheik_RingOutTimer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RingOutTimer.WBP_Sheik_RingOutTimer_C.ExecuteUbergraph_WBP_Sheik_RingOutTimer");
		
		UWBP_Sheik_RingOutTimer_C_ExecuteUbergraph_WBP_Sheik_RingOutTimer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_RingOutTimer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_RingOutTimer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_RingOutTimer.WBP_Sheik_RingOutTimer_C");
		return ptr;
	}

}


