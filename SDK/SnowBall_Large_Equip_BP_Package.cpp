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
	 * 		Name   -> PredefinedFunction ASnowBall_Large_Equip_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASnowBall_Large_Equip_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SnowBall_Large_Equip_BP.SnowBall_Large_Equip_BP_C");
		return ptr;
	}

}


