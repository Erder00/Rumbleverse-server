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
	 * 		Name   -> Function SnowBall_Large.SnowBall_Large_C.OnMaxDurabilityReached
	 * 		Flags  -> ()
	 */
	void ASnowBall_Large_C::OnMaxDurabilityReached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SnowBall_Large.SnowBall_Large_C.OnMaxDurabilityReached");
		
		ASnowBall_Large_C_OnMaxDurabilityReached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SnowBall_Large.SnowBall_Large_C.ExecuteUbergraph_SnowBall_Large
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASnowBall_Large_C::ExecuteUbergraph_SnowBall_Large(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SnowBall_Large.SnowBall_Large_C.ExecuteUbergraph_SnowBall_Large");
		
		ASnowBall_Large_C_ExecuteUbergraph_SnowBall_Large_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASnowBall_Large_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASnowBall_Large_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SnowBall_Large.SnowBall_Large_C");
		return ptr;
	}

}


