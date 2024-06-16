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
	 * 		Name   -> Function WBP_SheikPingMode.WBP_SheikPingMode_C.ClosePingContext
	 * 		Flags  -> ()
	 */
	void UWBP_SheikPingMode_C::ClosePingContext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikPingMode.WBP_SheikPingMode_C.ClosePingContext");
		
		UWBP_SheikPingMode_C_ClosePingContext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SheikPingMode.WBP_SheikPingMode_C.ExitPingMode
	 * 		Flags  -> ()
	 */
	void UWBP_SheikPingMode_C::ExitPingMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikPingMode.WBP_SheikPingMode_C.ExitPingMode");
		
		UWBP_SheikPingMode_C_ExitPingMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SheikPingMode.WBP_SheikPingMode_C.EnterPingMode
	 * 		Flags  -> ()
	 */
	void UWBP_SheikPingMode_C::EnterPingMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikPingMode.WBP_SheikPingMode_C.EnterPingMode");
		
		UWBP_SheikPingMode_C_EnterPingMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SheikPingMode.WBP_SheikPingMode_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_SheikPingMode_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikPingMode.WBP_SheikPingMode_C.ConstructOnlyOnce");
		
		UWBP_SheikPingMode_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SheikPingMode.WBP_SheikPingMode_C.OnPerformSpecialMoveEquipChoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGMoveMontage*                              MoveMontage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMoveTier                                          ExecutionTier                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SheikPingMode_C::OnPerformSpecialMoveEquipChoice(class UIGMoveMontage* MoveMontage, EMoveTier ExecutionTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikPingMode.WBP_SheikPingMode_C.OnPerformSpecialMoveEquipChoice");
		
		UWBP_SheikPingMode_C_OnPerformSpecialMoveEquipChoice_Params params {};
		params.MoveMontage = MoveMontage;
		params.ExecutionTier = ExecutionTier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SheikPingMode.WBP_SheikPingMode_C.EmoteUIOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SheikPingMode_C::EmoteUIOpen(bool IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikPingMode.WBP_SheikPingMode_C.EmoteUIOpen");
		
		UWBP_SheikPingMode_C_EmoteUIOpen_Params params {};
		params.IsOpen = IsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SheikPingMode.WBP_SheikPingMode_C.OnCharacterDied
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECauseOfDeath                                      Cause                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SheikPingMode_C::OnCharacterDied(ECauseOfDeath Cause)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikPingMode.WBP_SheikPingMode_C.OnCharacterDied");
		
		UWBP_SheikPingMode_C_OnCharacterDied_Params params {};
		params.Cause = Cause;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SheikPingMode.WBP_SheikPingMode_C.OnCharacterDamaged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGInstanceHitData                          HitData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_SheikPingMode_C::OnCharacterDamaged(const struct FIGInstanceHitData& HitData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikPingMode.WBP_SheikPingMode_C.OnCharacterDamaged");
		
		UWBP_SheikPingMode_C_OnCharacterDamaged_Params params {};
		params.HitData = HitData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SheikPingMode.WBP_SheikPingMode_C.ExecuteUbergraph_WBP_SheikPingMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SheikPingMode_C::ExecuteUbergraph_WBP_SheikPingMode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikPingMode.WBP_SheikPingMode_C.ExecuteUbergraph_WBP_SheikPingMode");
		
		UWBP_SheikPingMode_C_ExecuteUbergraph_WBP_SheikPingMode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_SheikPingMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_SheikPingMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SheikPingMode.WBP_SheikPingMode_C");
		return ptr;
	}

}


