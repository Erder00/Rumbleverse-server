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
	 * 		Name   -> Function PottedPlantWeapon.PottedPlantWeapon_C.OnMaxDurabilityReached
	 * 		Flags  -> ()
	 */
	void APottedPlantWeapon_C::OnMaxDurabilityReached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PottedPlantWeapon.PottedPlantWeapon_C.OnMaxDurabilityReached");
		
		APottedPlantWeapon_C_OnMaxDurabilityReached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PottedPlantWeapon.PottedPlantWeapon_C.ExecuteUbergraph_PottedPlantWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APottedPlantWeapon_C::ExecuteUbergraph_PottedPlantWeapon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PottedPlantWeapon.PottedPlantWeapon_C.ExecuteUbergraph_PottedPlantWeapon");
		
		APottedPlantWeapon_C_ExecuteUbergraph_PottedPlantWeapon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APottedPlantWeapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APottedPlantWeapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PottedPlantWeapon.PottedPlantWeapon_C");
		return ptr;
	}

}


