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
	 * 		Name   -> PredefinedFunction UBP_IGUI_StyleData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_IGUI_StyleData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_IGUI_StyleData.BP_IGUI_StyleData_C");
		return ptr;
	}

}


