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
	 * 		Name   -> Function BTT_MoveToTargetActorDebug.BTT_MoveToTargetActorDebug_C.WithinAcceptanceRadius
	 * 		Flags  -> ()
	 */
	bool UBTT_MoveToTargetActorDebug_C::WithinAcceptanceRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_MoveToTargetActorDebug.BTT_MoveToTargetActorDebug_C.WithinAcceptanceRadius");
		
		UBTT_MoveToTargetActorDebug_C_WithinAcceptanceRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_MoveToTargetActorDebug.BTT_MoveToTargetActorDebug_C.UpdateDestination
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Updated                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_MoveToTargetActorDebug_C::UpdateDestination(bool* Updated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_MoveToTargetActorDebug.BTT_MoveToTargetActorDebug_C.UpdateDestination");
		
		UBTT_MoveToTargetActorDebug_C_UpdateDestination_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Updated != nullptr)
			*Updated = params.Updated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_MoveToTargetActorDebug.BTT_MoveToTargetActorDebug_C.StartMove
	 * 		Flags  -> ()
	 */
	void UBTT_MoveToTargetActorDebug_C::StartMove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_MoveToTargetActorDebug.BTT_MoveToTargetActorDebug_C.StartMove");
		
		UBTT_MoveToTargetActorDebug_C_StartMove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_MoveToTargetActorDebug.BTT_MoveToTargetActorDebug_C.ReceiveExecuteAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_MoveToTargetActorDebug_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_MoveToTargetActorDebug.BTT_MoveToTargetActorDebug_C.ReceiveExecuteAI");
		
		UBTT_MoveToTargetActorDebug_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_MoveToTargetActorDebug.BTT_MoveToTargetActorDebug_C.ReceiveTickAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_MoveToTargetActorDebug_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_MoveToTargetActorDebug.BTT_MoveToTargetActorDebug_C.ReceiveTickAI");
		
		UBTT_MoveToTargetActorDebug_C_ReceiveTickAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_MoveToTargetActorDebug.BTT_MoveToTargetActorDebug_C.ExecuteUbergraph_BTT_MoveToTargetActorDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_MoveToTargetActorDebug_C::ExecuteUbergraph_BTT_MoveToTargetActorDebug(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_MoveToTargetActorDebug.BTT_MoveToTargetActorDebug_C.ExecuteUbergraph_BTT_MoveToTargetActorDebug");
		
		UBTT_MoveToTargetActorDebug_C_ExecuteUbergraph_BTT_MoveToTargetActorDebug_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_MoveToTargetActorDebug_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_MoveToTargetActorDebug_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTT_MoveToTargetActorDebug.BTT_MoveToTargetActorDebug_C");
		return ptr;
	}

}


