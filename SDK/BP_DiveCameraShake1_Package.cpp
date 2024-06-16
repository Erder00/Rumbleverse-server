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
	 * 		Name   -> PredefinedFunction UBP_DiveCameraShake1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DiveCameraShake1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DiveCameraShake1.BP_DiveCameraShake1_C");
		return ptr;
	}

}


