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
	 * 		Name   -> PredefinedFunction AGM_Sheik_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGM_Sheik_Entry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GM_Sheik_Entry.GM_Sheik_Entry_C");
		return ptr;
	}

}


