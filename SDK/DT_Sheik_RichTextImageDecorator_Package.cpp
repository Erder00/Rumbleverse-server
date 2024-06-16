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
	 * 		Name   -> PredefinedFunction UDT_Sheik_RichTextImageDecorator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDT_Sheik_RichTextImageDecorator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DT_Sheik_RichTextImageDecorator.DT_Sheik_RichTextImageDecorator_C");
		return ptr;
	}

}


