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
	 * 		Name   -> Function SheikGameModeBR_BP.SheikGameModeBR_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASheikGameModeBR_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGameModeBR_BP.SheikGameModeBR_BP_C.ReceiveBeginPlay");
		
		ASheikGameModeBR_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGameModeBR_BP.SheikGameModeBR_BP_C.ExecuteUbergraph_SheikGameModeBR_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikGameModeBR_BP_C::ExecuteUbergraph_SheikGameModeBR_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGameModeBR_BP.SheikGameModeBR_BP_C.ExecuteUbergraph_SheikGameModeBR_BP");
		
		ASheikGameModeBR_BP_C_ExecuteUbergraph_SheikGameModeBR_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASheikGameModeBR_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASheikGameModeBR_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SheikGameModeBR_BP.SheikGameModeBR_BP_C");
		return ptr;
	}

}


