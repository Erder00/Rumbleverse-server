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
	 * 		Name   -> Function WBP_Sheik_EventLine.WBP_Sheik_EventLine_C.GetEventText
	 * 		Flags  -> ()
	 */
	class FText UWBP_Sheik_EventLine_C::GetEventText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EventLine.WBP_Sheik_EventLine_C.GetEventText");
		
		UWBP_Sheik_EventLine_C_GetEventText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EventLine.WBP_Sheik_EventLine_C.ShowEventAnimFinished
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_EventLine_C::ShowEventAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EventLine.WBP_Sheik_EventLine_C.ShowEventAnimFinished");
		
		UWBP_Sheik_EventLine_C_ShowEventAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EventLine.WBP_Sheik_EventLine_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_EventLine_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EventLine.WBP_Sheik_EventLine_C.ConstructOnlyOnce");
		
		UWBP_Sheik_EventLine_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EventLine.WBP_Sheik_EventLine_C.ShowEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        EventText                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_EventLine_C::ShowEvent(const class FText& EventText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EventLine.WBP_Sheik_EventLine_C.ShowEvent");
		
		UWBP_Sheik_EventLine_C_ShowEvent_Params params {};
		params.EventText = EventText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EventLine.WBP_Sheik_EventLine_C.ShiftDown
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_EventLine_C::ShiftDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EventLine.WBP_Sheik_EventLine_C.ShiftDown");
		
		UWBP_Sheik_EventLine_C_ShiftDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EventLine.WBP_Sheik_EventLine_C.ExecuteUbergraph_WBP_Sheik_EventLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_EventLine_C::ExecuteUbergraph_WBP_Sheik_EventLine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EventLine.WBP_Sheik_EventLine_C.ExecuteUbergraph_WBP_Sheik_EventLine");
		
		UWBP_Sheik_EventLine_C_ExecuteUbergraph_WBP_Sheik_EventLine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EventLine.WBP_Sheik_EventLine_C.EventFinished__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_EventLine_C::EventFinished__DelegateSignature(class UIGUI_WidgetBase* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EventLine.WBP_Sheik_EventLine_C.EventFinished__DelegateSignature");
		
		UWBP_Sheik_EventLine_C_EventFinished__DelegateSignature_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_EventLine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_EventLine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_EventLine.WBP_Sheik_EventLine_C");
		return ptr;
	}

}


