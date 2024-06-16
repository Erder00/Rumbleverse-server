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
	 * 		Name   -> Function BTT_DetermineShouldAttemptMiss.BTT_DetermineShouldAttemptMiss_C.ReceiveExecuteAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_DetermineShouldAttemptMiss_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_DetermineShouldAttemptMiss.BTT_DetermineShouldAttemptMiss_C.ReceiveExecuteAI");
		
		UBTT_DetermineShouldAttemptMiss_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_DetermineShouldAttemptMiss.BTT_DetermineShouldAttemptMiss_C.ExecuteUbergraph_BTT_DetermineShouldAttemptMiss
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_DetermineShouldAttemptMiss_C::ExecuteUbergraph_BTT_DetermineShouldAttemptMiss(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_DetermineShouldAttemptMiss.BTT_DetermineShouldAttemptMiss_C.ExecuteUbergraph_BTT_DetermineShouldAttemptMiss");
		
		UBTT_DetermineShouldAttemptMiss_C_ExecuteUbergraph_BTT_DetermineShouldAttemptMiss_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_DetermineShouldAttemptMiss_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_DetermineShouldAttemptMiss_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTT_DetermineShouldAttemptMiss.BTT_DetermineShouldAttemptMiss_C");
		return ptr;
	}

}


