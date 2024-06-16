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
	 * 		Name   -> PredefinedFunction UITDSpatializationSourceSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITDSpatializationSourceSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Spatialization.ITDSpatializationSourceSettings");
		return ptr;
	}

}


