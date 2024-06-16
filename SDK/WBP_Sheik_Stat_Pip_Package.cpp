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
	 * 		Name   -> Function WBP_Sheik_Stat_Pip.WBP_Sheik_Stat_Pip_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikModValueType                                 StatType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Base                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Stat_Pip_C::SetData(ESheikModValueType StatType, bool Base)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Stat_Pip.WBP_Sheik_Stat_Pip_C.SetData");
		
		UWBP_Sheik_Stat_Pip_C_SetData_Params params {};
		params.StatType = StatType;
		params.Base = Base;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Stat_Pip.WBP_Sheik_Stat_Pip_C.Set Pip Color
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikModValueType                                 StatType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Base                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Stat_Pip_C::SetPipColor(ESheikModValueType StatType, bool Base)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Stat_Pip.WBP_Sheik_Stat_Pip_C.Set Pip Color");
		
		UWBP_Sheik_Stat_Pip_C_SetPipColor_Params params {};
		params.StatType = StatType;
		params.Base = Base;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Stat_Pip.WBP_Sheik_Stat_Pip_C.SetImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Empty                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Stat_Pip_C::SetImage(bool Empty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Stat_Pip.WBP_Sheik_Stat_Pip_C.SetImage");
		
		UWBP_Sheik_Stat_Pip_C_SetImage_Params params {};
		params.Empty = Empty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Stat_Pip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Stat_Pip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Stat_Pip.WBP_Sheik_Stat_Pip_C");
		return ptr;
	}

}


