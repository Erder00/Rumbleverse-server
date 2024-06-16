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
	 * 		Name   -> Function WBP_PlaygroundServerNotification.WBP_PlaygroundServerNotification_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_PlaygroundServerNotification_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PlaygroundServerNotification.WBP_PlaygroundServerNotification_C.Construct");
		
		UWBP_PlaygroundServerNotification_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PlaygroundServerNotification.WBP_PlaygroundServerNotification_C.ShowWarning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_PlaygroundServerNotification_C::ShowWarning(int32_t Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PlaygroundServerNotification.WBP_PlaygroundServerNotification_C.ShowWarning");
		
		UWBP_PlaygroundServerNotification_C_ShowWarning_Params params {};
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PlaygroundServerNotification.WBP_PlaygroundServerNotification_C.ExecuteUbergraph_WBP_PlaygroundServerNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_PlaygroundServerNotification_C::ExecuteUbergraph_WBP_PlaygroundServerNotification(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PlaygroundServerNotification.WBP_PlaygroundServerNotification_C.ExecuteUbergraph_WBP_PlaygroundServerNotification");
		
		UWBP_PlaygroundServerNotification_C_ExecuteUbergraph_WBP_PlaygroundServerNotification_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_PlaygroundServerNotification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_PlaygroundServerNotification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlaygroundServerNotification.WBP_PlaygroundServerNotification_C");
		return ptr;
	}

}


