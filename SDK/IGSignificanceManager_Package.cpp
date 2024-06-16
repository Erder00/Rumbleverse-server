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
	 * 		Name   -> PredefinedFunction UIGSignificanceManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGSignificanceManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGSignificanceManager.IGSignificanceManager");
		return ptr;
	}

}


