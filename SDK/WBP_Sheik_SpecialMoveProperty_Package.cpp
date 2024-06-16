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
	 * 		Name   -> Function WBP_Sheik_SpecialMoveProperty.WBP_Sheik_SpecialMoveProperty_C.UpdatePropertyInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FS_Sheik_SpecialMoveProperty                PropertyInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_SpecialMoveProperty_C::UpdatePropertyInfo(const struct FS_Sheik_SpecialMoveProperty& PropertyInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SpecialMoveProperty.WBP_Sheik_SpecialMoveProperty_C.UpdatePropertyInfo");
		
		UWBP_Sheik_SpecialMoveProperty_C_UpdatePropertyInfo_Params params {};
		params.PropertyInfo = PropertyInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SpecialMoveProperty.WBP_Sheik_SpecialMoveProperty_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_SpecialMoveProperty_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SpecialMoveProperty.WBP_Sheik_SpecialMoveProperty_C.ConstructOnlyOnce");
		
		UWBP_Sheik_SpecialMoveProperty_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SpecialMoveProperty.WBP_Sheik_SpecialMoveProperty_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_SpecialMoveProperty_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SpecialMoveProperty.WBP_Sheik_SpecialMoveProperty_C.PreConstruct");
		
		UWBP_Sheik_SpecialMoveProperty_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SpecialMoveProperty.WBP_Sheik_SpecialMoveProperty_C.ExecuteUbergraph_WBP_Sheik_SpecialMoveProperty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_SpecialMoveProperty_C::ExecuteUbergraph_WBP_Sheik_SpecialMoveProperty(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SpecialMoveProperty.WBP_Sheik_SpecialMoveProperty_C.ExecuteUbergraph_WBP_Sheik_SpecialMoveProperty");
		
		UWBP_Sheik_SpecialMoveProperty_C_ExecuteUbergraph_WBP_Sheik_SpecialMoveProperty_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_SpecialMoveProperty_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_SpecialMoveProperty_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_SpecialMoveProperty.WBP_Sheik_SpecialMoveProperty_C");
		return ptr;
	}

}


