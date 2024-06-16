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
	 * 		Name   -> PredefinedFunction ABP_SheikCharacter_Snowball_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SheikCharacter_Snowball_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SheikCharacter_Snowball.BP_SheikCharacter_Snowball_C");
		return ptr;
	}

}


