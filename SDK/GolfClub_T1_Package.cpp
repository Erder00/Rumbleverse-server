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
	 * 		Name   -> PredefinedFunction AGolfClub_T1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGolfClub_T1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GolfClub_T1.GolfClub_T1_C");
		return ptr;
	}

}


