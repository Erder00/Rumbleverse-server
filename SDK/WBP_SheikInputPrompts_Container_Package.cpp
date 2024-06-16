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
	 * 		Name   -> Function WBP_SheikInputPrompts_Container.WBP_SheikInputPrompts_Container_C.UpdateSnowballFightInputPrompts
	 * 		Flags  -> ()
	 */
	void UWBP_SheikInputPrompts_Container_C::UpdateSnowballFightInputPrompts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikInputPrompts_Container.WBP_SheikInputPrompts_Container_C.UpdateSnowballFightInputPrompts");
		
		UWBP_SheikInputPrompts_Container_C_UpdateSnowballFightInputPrompts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SheikInputPrompts_Container.WBP_SheikInputPrompts_Container_C.GetIsSnowballFight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSnowballFight                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SheikInputPrompts_Container_C::GetIsSnowballFight(bool* IsSnowballFight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikInputPrompts_Container.WBP_SheikInputPrompts_Container_C.GetIsSnowballFight");
		
		UWBP_SheikInputPrompts_Container_C_GetIsSnowballFight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSnowballFight != nullptr)
			*IsSnowballFight = params.IsSnowballFight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SheikInputPrompts_Container.WBP_SheikInputPrompts_Container_C.UpdateDodgeControls
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInputSource                                       InputSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SheikInputPrompts_Container_C::UpdateDodgeControls(EInputSource InputSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikInputPrompts_Container.WBP_SheikInputPrompts_Container_C.UpdateDodgeControls");
		
		UWBP_SheikInputPrompts_Container_C_UpdateDodgeControls_Params params {};
		params.InputSource = InputSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SheikInputPrompts_Container.WBP_SheikInputPrompts_Container_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_SheikInputPrompts_Container_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikInputPrompts_Container.WBP_SheikInputPrompts_Container_C.ConstructOnlyOnce");
		
		UWBP_SheikInputPrompts_Container_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SheikInputPrompts_Container.WBP_SheikInputPrompts_Container_C.OnInputSourceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUserControllerData                         OldInputSource                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FUserControllerData                         NewInputSource                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_SheikInputPrompts_Container_C::OnInputSourceChanged(const struct FUserControllerData& OldInputSource, const struct FUserControllerData& NewInputSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikInputPrompts_Container.WBP_SheikInputPrompts_Container_C.OnInputSourceChanged");
		
		UWBP_SheikInputPrompts_Container_C_OnInputSourceChanged_Params params {};
		params.OldInputSource = OldInputSource;
		params.NewInputSource = NewInputSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SheikInputPrompts_Container.WBP_SheikInputPrompts_Container_C.ExecuteUbergraph_WBP_SheikInputPrompts_Container
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SheikInputPrompts_Container_C::ExecuteUbergraph_WBP_SheikInputPrompts_Container(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikInputPrompts_Container.WBP_SheikInputPrompts_Container_C.ExecuteUbergraph_WBP_SheikInputPrompts_Container");
		
		UWBP_SheikInputPrompts_Container_C_ExecuteUbergraph_WBP_SheikInputPrompts_Container_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_SheikInputPrompts_Container_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_SheikInputPrompts_Container_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SheikInputPrompts_Container.WBP_SheikInputPrompts_Container_C");
		return ptr;
	}

}


