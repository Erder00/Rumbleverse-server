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
	 * 		Name   -> Function SnowBall_Medium.SnowBall_Medium_C.OnMaxDurabilityReached
	 * 		Flags  -> ()
	 */
	void ASnowBall_Medium_C::OnMaxDurabilityReached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SnowBall_Medium.SnowBall_Medium_C.OnMaxDurabilityReached");
		
		ASnowBall_Medium_C_OnMaxDurabilityReached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SnowBall_Medium.SnowBall_Medium_C.ExecuteUbergraph_SnowBall_Medium
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASnowBall_Medium_C::ExecuteUbergraph_SnowBall_Medium(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SnowBall_Medium.SnowBall_Medium_C.ExecuteUbergraph_SnowBall_Medium");
		
		ASnowBall_Medium_C_ExecuteUbergraph_SnowBall_Medium_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASnowBall_Medium_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASnowBall_Medium_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SnowBall_Medium.SnowBall_Medium_C");
		return ptr;
	}

}


