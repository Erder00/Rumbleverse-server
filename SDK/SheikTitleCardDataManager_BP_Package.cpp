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
	 * 		Name   -> PredefinedFunction USheikTitleCardDataManager_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USheikTitleCardDataManager_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SheikTitleCardDataManager_BP.SheikTitleCardDataManager_BP_C");
		return ptr;
	}

}


