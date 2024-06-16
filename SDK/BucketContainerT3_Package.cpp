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
	 * 		Name   -> Function BucketContainerT3.BucketContainerT3_C.OnWeaponContainerHit_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessfulHit                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABucketContainerT3_C::OnWeaponContainerHit_BP(bool bWasSuccessfulHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BucketContainerT3.BucketContainerT3_C.OnWeaponContainerHit_BP");
		
		ABucketContainerT3_C_OnWeaponContainerHit_BP_Params params {};
		params.bWasSuccessfulHit = bWasSuccessfulHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BucketContainerT3.BucketContainerT3_C.ExecuteUbergraph_BucketContainerT3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABucketContainerT3_C::ExecuteUbergraph_BucketContainerT3(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BucketContainerT3.BucketContainerT3_C.ExecuteUbergraph_BucketContainerT3");
		
		ABucketContainerT3_C_ExecuteUbergraph_BucketContainerT3_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABucketContainerT3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABucketContainerT3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BucketContainerT3.BucketContainerT3_C");
		return ptr;
	}

}


