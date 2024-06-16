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
	 * 		Name   -> Function WBP_DamageScreenFlash.WBP_DamageScreenFlash_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_DamageScreenFlash_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DamageScreenFlash.WBP_DamageScreenFlash_C.ConstructOnlyOnce");
		
		UWBP_DamageScreenFlash_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DamageScreenFlash.WBP_DamageScreenFlash_C.OnCharacterDamaged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGInstanceHitData                          HitData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_DamageScreenFlash_C::OnCharacterDamaged(const struct FIGInstanceHitData& HitData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DamageScreenFlash.WBP_DamageScreenFlash_C.OnCharacterDamaged");
		
		UWBP_DamageScreenFlash_C_OnCharacterDamaged_Params params {};
		params.HitData = HitData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DamageScreenFlash.WBP_DamageScreenFlash_C.ExecuteUbergraph_WBP_DamageScreenFlash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DamageScreenFlash_C::ExecuteUbergraph_WBP_DamageScreenFlash(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DamageScreenFlash.WBP_DamageScreenFlash_C.ExecuteUbergraph_WBP_DamageScreenFlash");
		
		UWBP_DamageScreenFlash_C_ExecuteUbergraph_WBP_DamageScreenFlash_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_DamageScreenFlash_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_DamageScreenFlash_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DamageScreenFlash.WBP_DamageScreenFlash_C");
		return ptr;
	}

}


