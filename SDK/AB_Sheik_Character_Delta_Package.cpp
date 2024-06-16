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
	 * 		Name   -> PredefinedFunction UAB_Sheik_Character_Delta_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_Sheik_Character_Delta_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Sheik_Character_Delta.AB_Sheik_Character_Delta_C");
		return ptr;
	}

}


