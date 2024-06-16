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
	 * 		Name   -> Function BTT_FindCharacterNearHelpTarget.BTT_FindCharacterNearHelpTarget_C.EvaluateFoundCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikCharacter*                             SheikCharacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               BestUntargeted                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               BestAlreadyTargeted                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_FindCharacterNearHelpTarget_C::EvaluateFoundCharacter(class ASheikCharacter* SheikCharacter, bool* BestUntargeted, bool* BestAlreadyTargeted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindCharacterNearHelpTarget.BTT_FindCharacterNearHelpTarget_C.EvaluateFoundCharacter");
		
		UBTT_FindCharacterNearHelpTarget_C_EvaluateFoundCharacter_Params params {};
		params.SheikCharacter = SheikCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BestUntargeted != nullptr)
			*BestUntargeted = params.BestUntargeted;
		if (BestAlreadyTargeted != nullptr)
			*BestAlreadyTargeted = params.BestAlreadyTargeted;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_FindCharacterNearHelpTarget.BTT_FindCharacterNearHelpTarget_C.FindCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              InActors                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class ASheikCharacter*                             BestBoy                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_FindCharacterNearHelpTarget_C::FindCharacter(TArray<class AActor*>* InActors, class ASheikCharacter** BestBoy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindCharacterNearHelpTarget.BTT_FindCharacterNearHelpTarget_C.FindCharacter");
		
		UBTT_FindCharacterNearHelpTarget_C_FindCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InActors != nullptr)
			*InActors = params.InActors;
		if (BestBoy != nullptr)
			*BestBoy = params.BestBoy;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_FindCharacterNearHelpTarget.BTT_FindCharacterNearHelpTarget_C.QueryFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEnvQueryInstanceBlueprintWrapper*           QueryInstance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EEnvQueryStatus                                    QueryStatus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_FindCharacterNearHelpTarget_C::QueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindCharacterNearHelpTarget.BTT_FindCharacterNearHelpTarget_C.QueryFinished");
		
		UBTT_FindCharacterNearHelpTarget_C_QueryFinished_Params params {};
		params.QueryInstance = QueryInstance;
		params.QueryStatus = QueryStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_FindCharacterNearHelpTarget.BTT_FindCharacterNearHelpTarget_C.ReceiveExecuteAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_FindCharacterNearHelpTarget_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindCharacterNearHelpTarget.BTT_FindCharacterNearHelpTarget_C.ReceiveExecuteAI");
		
		UBTT_FindCharacterNearHelpTarget_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_FindCharacterNearHelpTarget.BTT_FindCharacterNearHelpTarget_C.ReceiveAbortAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_FindCharacterNearHelpTarget_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindCharacterNearHelpTarget.BTT_FindCharacterNearHelpTarget_C.ReceiveAbortAI");
		
		UBTT_FindCharacterNearHelpTarget_C_ReceiveAbortAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_FindCharacterNearHelpTarget.BTT_FindCharacterNearHelpTarget_C.ExecuteUbergraph_BTT_FindCharacterNearHelpTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_FindCharacterNearHelpTarget_C::ExecuteUbergraph_BTT_FindCharacterNearHelpTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindCharacterNearHelpTarget.BTT_FindCharacterNearHelpTarget_C.ExecuteUbergraph_BTT_FindCharacterNearHelpTarget");
		
		UBTT_FindCharacterNearHelpTarget_C_ExecuteUbergraph_BTT_FindCharacterNearHelpTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_FindCharacterNearHelpTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_FindCharacterNearHelpTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTT_FindCharacterNearHelpTarget.BTT_FindCharacterNearHelpTarget_C");
		return ptr;
	}

}


