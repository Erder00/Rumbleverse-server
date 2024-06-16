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
	 * 		Name   -> PredefinedFunction UT1_Pickpocket_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UT1_Pickpocket_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass T1_Pickpocket.T1_Pickpocket_C");
		return ptr;
	}

}


