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
	 * 		Name   -> Function SheikGameModeSnowballFight_BP.SheikGameModeSnowballFight_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASheikGameModeSnowballFight_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGameModeSnowballFight_BP.SheikGameModeSnowballFight_BP_C.ReceiveBeginPlay");
		
		ASheikGameModeSnowballFight_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGameModeSnowballFight_BP.SheikGameModeSnowballFight_BP_C.ExecuteUbergraph_SheikGameModeSnowballFight_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikGameModeSnowballFight_BP_C::ExecuteUbergraph_SheikGameModeSnowballFight_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGameModeSnowballFight_BP.SheikGameModeSnowballFight_BP_C.ExecuteUbergraph_SheikGameModeSnowballFight_BP");
		
		ASheikGameModeSnowballFight_BP_C_ExecuteUbergraph_SheikGameModeSnowballFight_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASheikGameModeSnowballFight_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASheikGameModeSnowballFight_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SheikGameModeSnowballFight_BP.SheikGameModeSnowballFight_BP_C");
		return ptr;
	}

}


