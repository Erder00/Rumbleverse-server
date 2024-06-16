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
	 * 		Name   -> Function BucketContainerT2.BucketContainerT2_C.OnWeaponContainerHit_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessfulHit                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABucketContainerT2_C::OnWeaponContainerHit_BP(bool bWasSuccessfulHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BucketContainerT2.BucketContainerT2_C.OnWeaponContainerHit_BP");
		
		ABucketContainerT2_C_OnWeaponContainerHit_BP_Params params {};
		params.bWasSuccessfulHit = bWasSuccessfulHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BucketContainerT2.BucketContainerT2_C.ExecuteUbergraph_BucketContainerT2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABucketContainerT2_C::ExecuteUbergraph_BucketContainerT2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BucketContainerT2.BucketContainerT2_C.ExecuteUbergraph_BucketContainerT2");
		
		ABucketContainerT2_C_ExecuteUbergraph_BucketContainerT2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABucketContainerT2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABucketContainerT2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BucketContainerT2.BucketContainerT2_C");
		return ptr;
	}

}


