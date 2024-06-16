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
	 * 		Name   -> PredefinedFunction ABP_BargeNavInvoker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BargeNavInvoker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BargeNavInvoker.BP_BargeNavInvoker_C");
		return ptr;
	}

}


