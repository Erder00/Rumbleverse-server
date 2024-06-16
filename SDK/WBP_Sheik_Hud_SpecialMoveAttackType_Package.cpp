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
	 * 		Name   -> Function WBP_Sheik_Hud_SpecialMoveAttackType.WBP_Sheik_Hud_SpecialMoveAttackType_C.SetIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_Sheik_SpecialMoveEffect                          AttackType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Hud_SpecialMoveAttackType_C::SetIcon(E_Sheik_SpecialMoveEffect AttackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Hud_SpecialMoveAttackType.WBP_Sheik_Hud_SpecialMoveAttackType_C.SetIcon");
		
		UWBP_Sheik_Hud_SpecialMoveAttackType_C_SetIcon_Params params {};
		params.AttackType = AttackType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Hud_SpecialMoveAttackType.WBP_Sheik_Hud_SpecialMoveAttackType_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Hud_SpecialMoveAttackType_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Hud_SpecialMoveAttackType.WBP_Sheik_Hud_SpecialMoveAttackType_C.PreConstruct");
		
		UWBP_Sheik_Hud_SpecialMoveAttackType_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Hud_SpecialMoveAttackType.WBP_Sheik_Hud_SpecialMoveAttackType_C.ExecuteUbergraph_WBP_Sheik_Hud_SpecialMoveAttackType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Hud_SpecialMoveAttackType_C::ExecuteUbergraph_WBP_Sheik_Hud_SpecialMoveAttackType(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Hud_SpecialMoveAttackType.WBP_Sheik_Hud_SpecialMoveAttackType_C.ExecuteUbergraph_WBP_Sheik_Hud_SpecialMoveAttackType");
		
		UWBP_Sheik_Hud_SpecialMoveAttackType_C_ExecuteUbergraph_WBP_Sheik_Hud_SpecialMoveAttackType_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Hud_SpecialMoveAttackType_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Hud_SpecialMoveAttackType_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Hud_SpecialMoveAttackType.WBP_Sheik_Hud_SpecialMoveAttackType_C");
		return ptr;
	}

}


