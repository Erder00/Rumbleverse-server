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
	 * 		Name   -> Function SnowBall_Small.SnowBall_Small_C.OnMaxDurabilityReached
	 * 		Flags  -> ()
	 */
	void ASnowBall_Small_C::OnMaxDurabilityReached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SnowBall_Small.SnowBall_Small_C.OnMaxDurabilityReached");
		
		ASnowBall_Small_C_OnMaxDurabilityReached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SnowBall_Small.SnowBall_Small_C.ExecuteUbergraph_SnowBall_Small
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASnowBall_Small_C::ExecuteUbergraph_SnowBall_Small(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SnowBall_Small.SnowBall_Small_C.ExecuteUbergraph_SnowBall_Small");
		
		ASnowBall_Small_C_ExecuteUbergraph_SnowBall_Small_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASnowBall_Small_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASnowBall_Small_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SnowBall_Small.SnowBall_Small_C");
		return ptr;
	}

}


