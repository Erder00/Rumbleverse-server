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
	 * 		Name   -> Function BTT_WaitWhileTargetWallSplatted.BTT_WaitWhileTargetWallSplatted_C.ReceiveExecuteAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_WaitWhileTargetWallSplatted_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_WaitWhileTargetWallSplatted.BTT_WaitWhileTargetWallSplatted_C.ReceiveExecuteAI");
		
		UBTT_WaitWhileTargetWallSplatted_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_WaitWhileTargetWallSplatted.BTT_WaitWhileTargetWallSplatted_C.TimerFinished
	 * 		Flags  -> ()
	 */
	void UBTT_WaitWhileTargetWallSplatted_C::TimerFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_WaitWhileTargetWallSplatted.BTT_WaitWhileTargetWallSplatted_C.TimerFinished");
		
		UBTT_WaitWhileTargetWallSplatted_C_TimerFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_WaitWhileTargetWallSplatted.BTT_WaitWhileTargetWallSplatted_C.ReceiveAbortAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_WaitWhileTargetWallSplatted_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_WaitWhileTargetWallSplatted.BTT_WaitWhileTargetWallSplatted_C.ReceiveAbortAI");
		
		UBTT_WaitWhileTargetWallSplatted_C_ReceiveAbortAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_WaitWhileTargetWallSplatted.BTT_WaitWhileTargetWallSplatted_C.ExecuteUbergraph_BTT_WaitWhileTargetWallSplatted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_WaitWhileTargetWallSplatted_C::ExecuteUbergraph_BTT_WaitWhileTargetWallSplatted(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_WaitWhileTargetWallSplatted.BTT_WaitWhileTargetWallSplatted_C.ExecuteUbergraph_BTT_WaitWhileTargetWallSplatted");
		
		UBTT_WaitWhileTargetWallSplatted_C_ExecuteUbergraph_BTT_WaitWhileTargetWallSplatted_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_WaitWhileTargetWallSplatted_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_WaitWhileTargetWallSplatted_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTT_WaitWhileTargetWallSplatted.BTT_WaitWhileTargetWallSplatted_C");
		return ptr;
	}

}


