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
	 * 		Name   -> Function IGItemEquip_Snowball_BP_Parent.IGItemEquip_Snowball_BP_Parent_C.HandleInteractableReset_BP
	 * 		Flags  -> ()
	 */
	void AIGItemEquip_Snowball_BP_Parent_C::HandleInteractableReset_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGItemEquip_Snowball_BP_Parent.IGItemEquip_Snowball_BP_Parent_C.HandleInteractableReset_BP");
		
		AIGItemEquip_Snowball_BP_Parent_C_HandleInteractableReset_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGItemEquip_Snowball_BP_Parent.IGItemEquip_Snowball_BP_Parent_C.OnEnterInteractable
	 * 		Flags  -> ()
	 */
	void AIGItemEquip_Snowball_BP_Parent_C::OnEnterInteractable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGItemEquip_Snowball_BP_Parent.IGItemEquip_Snowball_BP_Parent_C.OnEnterInteractable");
		
		AIGItemEquip_Snowball_BP_Parent_C_OnEnterInteractable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGItemEquip_Snowball_BP_Parent.IGItemEquip_Snowball_BP_Parent_C.OnInteractionEnded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGStaticInteractableActorState                    PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIGItemEquip_Snowball_BP_Parent_C::OnInteractionEnded(EIGStaticInteractableActorState PreviousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGItemEquip_Snowball_BP_Parent.IGItemEquip_Snowball_BP_Parent_C.OnInteractionEnded");
		
		AIGItemEquip_Snowball_BP_Parent_C_OnInteractionEnded_Params params {};
		params.PreviousState = PreviousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGItemEquip_Snowball_BP_Parent.IGItemEquip_Snowball_BP_Parent_C.HandleInteractableStateChanged_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGStaticInteractableActorState                    PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EIGStaticInteractableActorState                    NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIGItemEquip_Snowball_BP_Parent_C::HandleInteractableStateChanged_BP(EIGStaticInteractableActorState PreviousState, EIGStaticInteractableActorState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGItemEquip_Snowball_BP_Parent.IGItemEquip_Snowball_BP_Parent_C.HandleInteractableStateChanged_BP");
		
		AIGItemEquip_Snowball_BP_Parent_C_HandleInteractableStateChanged_BP_Params params {};
		params.PreviousState = PreviousState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGItemEquip_Snowball_BP_Parent.IGItemEquip_Snowball_BP_Parent_C.ExecuteUbergraph_IGItemEquip_Snowball_BP_Parent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIGItemEquip_Snowball_BP_Parent_C::ExecuteUbergraph_IGItemEquip_Snowball_BP_Parent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGItemEquip_Snowball_BP_Parent.IGItemEquip_Snowball_BP_Parent_C.ExecuteUbergraph_IGItemEquip_Snowball_BP_Parent");
		
		AIGItemEquip_Snowball_BP_Parent_C_ExecuteUbergraph_IGItemEquip_Snowball_BP_Parent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGItemEquip_Snowball_BP_Parent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGItemEquip_Snowball_BP_Parent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IGItemEquip_Snowball_BP_Parent.IGItemEquip_Snowball_BP_Parent_C");
		return ptr;
	}

}


