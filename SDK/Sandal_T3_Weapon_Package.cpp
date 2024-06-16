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
	 * 		Name   -> PredefinedFunction ASandal_T3_Weapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASandal_T3_Weapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Sandal_T3_Weapon.Sandal_T3_Weapon_C");
		return ptr;
	}

}


