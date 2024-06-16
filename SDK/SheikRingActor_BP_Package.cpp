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
	 * 		Name   -> Function SheikRingActor_BP.SheikRingActor_BP_C.FinalRingColorChange
	 * 		Flags  -> ()
	 */
	void ASheikRingActor_BP_C::FinalRingColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikRingActor_BP.SheikRingActor_BP_C.FinalRingColorChange");
		
		ASheikRingActor_BP_C_FinalRingColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikRingActor_BP.SheikRingActor_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASheikRingActor_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikRingActor_BP.SheikRingActor_BP_C.UserConstructionScript");
		
		ASheikRingActor_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikRingActor_BP.SheikRingActor_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASheikRingActor_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikRingActor_BP.SheikRingActor_BP_C.ReceiveBeginPlay");
		
		ASheikRingActor_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikRingActor_BP.SheikRingActor_BP_C.ExecuteUbergraph_SheikRingActor_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikRingActor_BP_C::ExecuteUbergraph_SheikRingActor_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikRingActor_BP.SheikRingActor_BP_C.ExecuteUbergraph_SheikRingActor_BP");
		
		ASheikRingActor_BP_C_ExecuteUbergraph_SheikRingActor_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASheikRingActor_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASheikRingActor_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SheikRingActor_BP.SheikRingActor_BP_C");
		return ptr;
	}

}


