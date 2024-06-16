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
	 * 		Name   -> Function DJ_Booth.DJ_Booth_C.OnInteracting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGStaticInteractableActorState                    NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADJ_Booth_C::OnInteracting(EIGStaticInteractableActorState NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DJ_Booth.DJ_Booth_C.OnInteracting");
		
		ADJ_Booth_C_OnInteracting_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DJ_Booth.DJ_Booth_C.HandleInteractableStateChanged_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGStaticInteractableActorState                    PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EIGStaticInteractableActorState                    NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADJ_Booth_C::HandleInteractableStateChanged_BP(EIGStaticInteractableActorState PreviousState, EIGStaticInteractableActorState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DJ_Booth.DJ_Booth_C.HandleInteractableStateChanged_BP");
		
		ADJ_Booth_C_HandleInteractableStateChanged_BP_Params params {};
		params.PreviousState = PreviousState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DJ_Booth.DJ_Booth_C.ExecuteUbergraph_DJ_Booth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADJ_Booth_C::ExecuteUbergraph_DJ_Booth(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DJ_Booth.DJ_Booth_C.ExecuteUbergraph_DJ_Booth");
		
		ADJ_Booth_C_ExecuteUbergraph_DJ_Booth_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADJ_Booth_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADJ_Booth_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DJ_Booth.DJ_Booth_C");
		return ptr;
	}

}


