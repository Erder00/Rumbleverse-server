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
	 * 		Name   -> PredefinedFunction AGolfClub_T2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGolfClub_T2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GolfClub_T2.GolfClub_T2_C");
		return ptr;
	}

}


