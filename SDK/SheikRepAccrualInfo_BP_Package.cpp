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
	 * 		Name   -> PredefinedFunction USheikRepAccrualInfo_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USheikRepAccrualInfo_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SheikRepAccrualInfo_BP.SheikRepAccrualInfo_BP_C");
		return ptr;
	}

}


