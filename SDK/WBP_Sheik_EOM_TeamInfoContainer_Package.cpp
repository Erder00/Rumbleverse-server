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
	 * 		Name   -> Function WBP_Sheik_EOM_TeamInfoContainer.WBP_Sheik_EOM_TeamInfoContainer_C.ClearNonTeammateInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ASheikPlayerStateCommon*>             ExistingTeammateStates                                     (Parm, OutParm)
	 */
	void UWBP_Sheik_EOM_TeamInfoContainer_C::ClearNonTeammateInfo(TArray<class ASheikPlayerStateCommon*>* ExistingTeammateStates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_TeamInfoContainer.WBP_Sheik_EOM_TeamInfoContainer_C.ClearNonTeammateInfo");
		
		UWBP_Sheik_EOM_TeamInfoContainer_C_ClearNonTeammateInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExistingTeammateStates != nullptr)
			*ExistingTeammateStates = params.ExistingTeammateStates;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_TeamInfoContainer.WBP_Sheik_EOM_TeamInfoContainer_C.HandleOnTeammateLeftSever_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGPlayerState*                              ExitingTeammate                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_EOM_TeamInfoContainer_C::HandleOnTeammateLeftSever_cb(class AIGPlayerState* ExitingTeammate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_TeamInfoContainer.WBP_Sheik_EOM_TeamInfoContainer_C.HandleOnTeammateLeftSever_cb");
		
		UWBP_Sheik_EOM_TeamInfoContainer_C_HandleOnTeammateLeftSever_cb_Params params {};
		params.ExitingTeammate = ExitingTeammate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_TeamInfoContainer.WBP_Sheik_EOM_TeamInfoContainer_C.HandleOnTeamInfoUpdated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_EOM_TeamInfoContainer_C::HandleOnTeamInfoUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_TeamInfoContainer.WBP_Sheik_EOM_TeamInfoContainer_C.HandleOnTeamInfoUpdated");
		
		UWBP_Sheik_EOM_TeamInfoContainer_C_HandleOnTeamInfoUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_TeamInfoContainer.WBP_Sheik_EOM_TeamInfoContainer_C.ClearList
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_EOM_TeamInfoContainer_C::ClearList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_TeamInfoContainer.WBP_Sheik_EOM_TeamInfoContainer_C.ClearList");
		
		UWBP_Sheik_EOM_TeamInfoContainer_C_ClearList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_TeamInfoContainer.WBP_Sheik_EOM_TeamInfoContainer_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_EOM_TeamInfoContainer_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_TeamInfoContainer.WBP_Sheik_EOM_TeamInfoContainer_C.ConstructOnlyOnce");
		
		UWBP_Sheik_EOM_TeamInfoContainer_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_TeamInfoContainer.WBP_Sheik_EOM_TeamInfoContainer_C.ExecuteUbergraph_WBP_Sheik_EOM_TeamInfoContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_EOM_TeamInfoContainer_C::ExecuteUbergraph_WBP_Sheik_EOM_TeamInfoContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_TeamInfoContainer.WBP_Sheik_EOM_TeamInfoContainer_C.ExecuteUbergraph_WBP_Sheik_EOM_TeamInfoContainer");
		
		UWBP_Sheik_EOM_TeamInfoContainer_C_ExecuteUbergraph_WBP_Sheik_EOM_TeamInfoContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_EOM_TeamInfoContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_EOM_TeamInfoContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_EOM_TeamInfoContainer.WBP_Sheik_EOM_TeamInfoContainer_C");
		return ptr;
	}

}


