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
	 * 		Name   -> Function IGLootSpawner_Snowball_BP.IGLootSpawner_Snowball_BP_C.GetRelevantSnowballPreviewMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        SM_BlastSphere                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIGLootSpawner_Snowball_BP_C::GetRelevantSnowballPreviewMesh(class UStaticMeshComponent** SM_BlastSphere)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGLootSpawner_Snowball_BP.IGLootSpawner_Snowball_BP_C.GetRelevantSnowballPreviewMesh");
		
		AIGLootSpawner_Snowball_BP_C_GetRelevantSnowballPreviewMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SM_BlastSphere != nullptr)
			*SM_BlastSphere = params.SM_BlastSphere;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGLootSpawner_Snowball_BP.IGLootSpawner_Snowball_BP_C.HandleInteractableReset_BP
	 * 		Flags  -> ()
	 */
	void AIGLootSpawner_Snowball_BP_C::HandleInteractableReset_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGLootSpawner_Snowball_BP.IGLootSpawner_Snowball_BP_C.HandleInteractableReset_BP");
		
		AIGLootSpawner_Snowball_BP_C_HandleInteractableReset_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGLootSpawner_Snowball_BP.IGLootSpawner_Snowball_BP_C.OnEnterInteractable
	 * 		Flags  -> ()
	 */
	void AIGLootSpawner_Snowball_BP_C::OnEnterInteractable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGLootSpawner_Snowball_BP.IGLootSpawner_Snowball_BP_C.OnEnterInteractable");
		
		AIGLootSpawner_Snowball_BP_C_OnEnterInteractable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGLootSpawner_Snowball_BP.IGLootSpawner_Snowball_BP_C.OnInteractionEnded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGStaticInteractableActorState                    PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIGLootSpawner_Snowball_BP_C::OnInteractionEnded(EIGStaticInteractableActorState PreviousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGLootSpawner_Snowball_BP.IGLootSpawner_Snowball_BP_C.OnInteractionEnded");
		
		AIGLootSpawner_Snowball_BP_C_OnInteractionEnded_Params params {};
		params.PreviousState = PreviousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGLootSpawner_Snowball_BP.IGLootSpawner_Snowball_BP_C.HandleInteractableStateChanged_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGStaticInteractableActorState                    PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EIGStaticInteractableActorState                    NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIGLootSpawner_Snowball_BP_C::HandleInteractableStateChanged_BP(EIGStaticInteractableActorState PreviousState, EIGStaticInteractableActorState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGLootSpawner_Snowball_BP.IGLootSpawner_Snowball_BP_C.HandleInteractableStateChanged_BP");
		
		AIGLootSpawner_Snowball_BP_C_HandleInteractableStateChanged_BP_Params params {};
		params.PreviousState = PreviousState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGLootSpawner_Snowball_BP.IGLootSpawner_Snowball_BP_C.ExecuteUbergraph_IGLootSpawner_Snowball_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIGLootSpawner_Snowball_BP_C::ExecuteUbergraph_IGLootSpawner_Snowball_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGLootSpawner_Snowball_BP.IGLootSpawner_Snowball_BP_C.ExecuteUbergraph_IGLootSpawner_Snowball_BP");
		
		AIGLootSpawner_Snowball_BP_C_ExecuteUbergraph_IGLootSpawner_Snowball_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGLootSpawner_Snowball_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGLootSpawner_Snowball_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IGLootSpawner_Snowball_BP.IGLootSpawner_Snowball_BP_C");
		return ptr;
	}

}


