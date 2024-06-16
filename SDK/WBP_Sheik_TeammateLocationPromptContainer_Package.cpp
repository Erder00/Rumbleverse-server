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
	 * 		Name   -> Function WBP_Sheik_TeammateLocationPromptContainer.WBP_Sheik_TeammateLocationPromptContainer_C.OnTeammateLeftServer_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGPlayerState*                              ExitingTeammate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_TeammateLocationPromptContainer_C::OnTeammateLeftServer_cb(class AIGPlayerState* ExitingTeammate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateLocationPromptContainer.WBP_Sheik_TeammateLocationPromptContainer_C.OnTeammateLeftServer_cb");
		
		UWBP_Sheik_TeammateLocationPromptContainer_C_OnTeammateLeftServer_cb_Params params {};
		params.ExitingTeammate = ExitingTeammate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateLocationPromptContainer.WBP_Sheik_TeammateLocationPromptContainer_C.OnTeammateDied_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGPlayerState*                              TeammatePlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_TeammateLocationPromptContainer_C::OnTeammateDied_cb(class AIGPlayerState* TeammatePlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateLocationPromptContainer.WBP_Sheik_TeammateLocationPromptContainer_C.OnTeammateDied_cb");
		
		UWBP_Sheik_TeammateLocationPromptContainer_C_OnTeammateDied_cb_Params params {};
		params.TeammatePlayerState = TeammatePlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateLocationPromptContainer.WBP_Sheik_TeammateLocationPromptContainer_C.OnTeamInfoUpdated_cb
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_TeammateLocationPromptContainer_C::OnTeamInfoUpdated_cb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateLocationPromptContainer.WBP_Sheik_TeammateLocationPromptContainer_C.OnTeamInfoUpdated_cb");
		
		UWBP_Sheik_TeammateLocationPromptContainer_C_OnTeamInfoUpdated_cb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateLocationPromptContainer.WBP_Sheik_TeammateLocationPromptContainer_C.OnGameFlowStateChanged_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGameFlowState                                     NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_TeammateLocationPromptContainer_C::OnGameFlowStateChanged_cb(EGameFlowState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateLocationPromptContainer.WBP_Sheik_TeammateLocationPromptContainer_C.OnGameFlowStateChanged_cb");
		
		UWBP_Sheik_TeammateLocationPromptContainer_C_OnGameFlowStateChanged_cb_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateLocationPromptContainer.WBP_Sheik_TeammateLocationPromptContainer_C.AddNewTeammates
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_TeammateLocationPromptContainer_C::AddNewTeammates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateLocationPromptContainer.WBP_Sheik_TeammateLocationPromptContainer_C.AddNewTeammates");
		
		UWBP_Sheik_TeammateLocationPromptContainer_C_AddNewTeammates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateLocationPromptContainer.WBP_Sheik_TeammateLocationPromptContainer_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_TeammateLocationPromptContainer_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateLocationPromptContainer.WBP_Sheik_TeammateLocationPromptContainer_C.ConstructOnlyOnce");
		
		UWBP_Sheik_TeammateLocationPromptContainer_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateLocationPromptContainer.WBP_Sheik_TeammateLocationPromptContainer_C.ExecuteUbergraph_WBP_Sheik_TeammateLocationPromptContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_TeammateLocationPromptContainer_C::ExecuteUbergraph_WBP_Sheik_TeammateLocationPromptContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateLocationPromptContainer.WBP_Sheik_TeammateLocationPromptContainer_C.ExecuteUbergraph_WBP_Sheik_TeammateLocationPromptContainer");
		
		UWBP_Sheik_TeammateLocationPromptContainer_C_ExecuteUbergraph_WBP_Sheik_TeammateLocationPromptContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_TeammateLocationPromptContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_TeammateLocationPromptContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_TeammateLocationPromptContainer.WBP_Sheik_TeammateLocationPromptContainer_C");
		return ptr;
	}

}


