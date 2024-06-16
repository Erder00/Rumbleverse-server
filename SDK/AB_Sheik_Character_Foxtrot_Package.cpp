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
	 * 		Name   -> PredefinedFunction UAB_Sheik_Character_Foxtrot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_Sheik_Character_Foxtrot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Sheik_Character_Foxtrot.AB_Sheik_Character_Foxtrot_C");
		return ptr;
	}

}


