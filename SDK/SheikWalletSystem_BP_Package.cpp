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
	 * 		Name   -> PredefinedFunction USheikWalletSystem_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USheikWalletSystem_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SheikWalletSystem_BP.SheikWalletSystem_BP_C");
		return ptr;
	}

}


