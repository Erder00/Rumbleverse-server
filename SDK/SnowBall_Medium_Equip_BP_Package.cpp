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
	 * 		Name   -> PredefinedFunction ASnowBall_Medium_Equip_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASnowBall_Medium_Equip_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SnowBall_Medium_Equip_BP.SnowBall_Medium_Equip_BP_C");
		return ptr;
	}

}


