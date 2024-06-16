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
	 * 		Name   -> PredefinedFunction UAB_SheikCharacter_Male_Fit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_SheikCharacter_Male_Fit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_SheikCharacter_Male_Fit.AB_SheikCharacter_Male_Fit_C");
		return ptr;
	}

}


