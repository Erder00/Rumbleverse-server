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
	 * 		Name   -> PredefinedFunction USheikGameInfo_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USheikGameInfo_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SheikGameInfo_BP.SheikGameInfo_BP_C");
		return ptr;
	}

}


