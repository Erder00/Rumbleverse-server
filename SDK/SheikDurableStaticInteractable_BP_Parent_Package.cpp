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
	 * 		Name   -> Function SheikDurableStaticInteractable_BP_Parent.SheikDurableStaticInteractable_BP_Parent_C.HandleInteractableReset_BP
	 * 		Flags  -> ()
	 */
	void ASheikDurableStaticInteractable_BP_Parent_C::HandleInteractableReset_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikDurableStaticInteractable_BP_Parent.SheikDurableStaticInteractable_BP_Parent_C.HandleInteractableReset_BP");
		
		ASheikDurableStaticInteractable_BP_Parent_C_HandleInteractableReset_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikDurableStaticInteractable_BP_Parent.SheikDurableStaticInteractable_BP_Parent_C.TriggerEffects
	 * 		Flags  -> ()
	 */
	void ASheikDurableStaticInteractable_BP_Parent_C::TriggerEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikDurableStaticInteractable_BP_Parent.SheikDurableStaticInteractable_BP_Parent_C.TriggerEffects");
		
		ASheikDurableStaticInteractable_BP_Parent_C_TriggerEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikDurableStaticInteractable_BP_Parent.SheikDurableStaticInteractable_BP_Parent_C.OnInteractionEnded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGStaticInteractableActorState                    PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikDurableStaticInteractable_BP_Parent_C::OnInteractionEnded(EIGStaticInteractableActorState PreviousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikDurableStaticInteractable_BP_Parent.SheikDurableStaticInteractable_BP_Parent_C.OnInteractionEnded");
		
		ASheikDurableStaticInteractable_BP_Parent_C_OnInteractionEnded_Params params {};
		params.PreviousState = PreviousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikDurableStaticInteractable_BP_Parent.SheikDurableStaticInteractable_BP_Parent_C.HandleInteractableStateChanged_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGStaticInteractableActorState                    PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EIGStaticInteractableActorState                    NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikDurableStaticInteractable_BP_Parent_C::HandleInteractableStateChanged_BP(EIGStaticInteractableActorState PreviousState, EIGStaticInteractableActorState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikDurableStaticInteractable_BP_Parent.SheikDurableStaticInteractable_BP_Parent_C.HandleInteractableStateChanged_BP");
		
		ASheikDurableStaticInteractable_BP_Parent_C_HandleInteractableStateChanged_BP_Params params {};
		params.PreviousState = PreviousState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikDurableStaticInteractable_BP_Parent.SheikDurableStaticInteractable_BP_Parent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASheikDurableStaticInteractable_BP_Parent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikDurableStaticInteractable_BP_Parent.SheikDurableStaticInteractable_BP_Parent_C.ReceiveBeginPlay");
		
		ASheikDurableStaticInteractable_BP_Parent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikDurableStaticInteractable_BP_Parent.SheikDurableStaticInteractable_BP_Parent_C.BP_OnDurabilityChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewDurability                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikDurableStaticInteractable_BP_Parent_C::BP_OnDurabilityChanged(int32_t NewDurability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikDurableStaticInteractable_BP_Parent.SheikDurableStaticInteractable_BP_Parent_C.BP_OnDurabilityChanged");
		
		ASheikDurableStaticInteractable_BP_Parent_C_BP_OnDurabilityChanged_Params params {};
		params.NewDurability = NewDurability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikDurableStaticInteractable_BP_Parent.SheikDurableStaticInteractable_BP_Parent_C.InteractableHasBeenHit_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessfulHit                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheikDurableStaticInteractable_BP_Parent_C::InteractableHasBeenHit_BP(bool bWasSuccessfulHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikDurableStaticInteractable_BP_Parent.SheikDurableStaticInteractable_BP_Parent_C.InteractableHasBeenHit_BP");
		
		ASheikDurableStaticInteractable_BP_Parent_C_InteractableHasBeenHit_BP_Params params {};
		params.bWasSuccessfulHit = bWasSuccessfulHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikDurableStaticInteractable_BP_Parent.SheikDurableStaticInteractable_BP_Parent_C.ExecuteUbergraph_SheikDurableStaticInteractable_BP_Parent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikDurableStaticInteractable_BP_Parent_C::ExecuteUbergraph_SheikDurableStaticInteractable_BP_Parent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikDurableStaticInteractable_BP_Parent.SheikDurableStaticInteractable_BP_Parent_C.ExecuteUbergraph_SheikDurableStaticInteractable_BP_Parent");
		
		ASheikDurableStaticInteractable_BP_Parent_C_ExecuteUbergraph_SheikDurableStaticInteractable_BP_Parent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikDurableStaticInteractable_BP_Parent.SheikDurableStaticInteractable_BP_Parent_C.On Durability Changed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ASheikDurableStaticInteractable_BP_Parent_C::OnDurabilityChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikDurableStaticInteractable_BP_Parent.SheikDurableStaticInteractable_BP_Parent_C.On Durability Changed__DelegateSignature");
		
		ASheikDurableStaticInteractable_BP_Parent_C_OnDurabilityChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASheikDurableStaticInteractable_BP_Parent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASheikDurableStaticInteractable_BP_Parent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SheikDurableStaticInteractable_BP_Parent.SheikDurableStaticInteractable_BP_Parent_C");
		return ptr;
	}

}


