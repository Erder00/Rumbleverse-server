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
	 * 		Name   -> Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.HandleOnPartyMemberLeftServer_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_TeammateInfoContainer_C::HandleOnPartyMemberLeftServer_cb(const class FString& PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.HandleOnPartyMemberLeftServer_cb");
		
		UWBP_Sheik_TeammateInfoContainer_C_HandleOnPartyMemberLeftServer_cb_Params params {};
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.SetupPlaygroundPartyUI
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_TeammateInfoContainer_C::SetupPlaygroundPartyUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.SetupPlaygroundPartyUI");
		
		UWBP_Sheik_TeammateInfoContainer_C_SetupPlaygroundPartyUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.GetPartyManager
	 * 		Flags  -> ()
	 */
	class USheikPartyManager* UWBP_Sheik_TeammateInfoContainer_C::GetPartyManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.GetPartyManager");
		
		UWBP_Sheik_TeammateInfoContainer_C_GetPartyManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.ClearNonTeammateInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ASheikPlayerStateCommon*>             ExistingTeammateStates                                     (Parm, OutParm)
	 */
	void UWBP_Sheik_TeammateInfoContainer_C::ClearNonTeammateInfo(TArray<class ASheikPlayerStateCommon*>* ExistingTeammateStates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.ClearNonTeammateInfo");
		
		UWBP_Sheik_TeammateInfoContainer_C_ClearNonTeammateInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExistingTeammateStates != nullptr)
			*ExistingTeammateStates = params.ExistingTeammateStates;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.HandleOnTeammateLeftServer_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGPlayerState*                              ExitingTeammate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_TeammateInfoContainer_C::HandleOnTeammateLeftServer_cb(class AIGPlayerState* ExitingTeammate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.HandleOnTeammateLeftServer_cb");
		
		UWBP_Sheik_TeammateInfoContainer_C_HandleOnTeammateLeftServer_cb_Params params {};
		params.ExitingTeammate = ExitingTeammate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.HandleOnSpectatorInfoUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikSpectatorInfo                         NewSpectatorInfo                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_TeammateInfoContainer_C::HandleOnSpectatorInfoUpdated(const struct FSheikSpectatorInfo& NewSpectatorInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.HandleOnSpectatorInfoUpdated");
		
		UWBP_Sheik_TeammateInfoContainer_C_HandleOnSpectatorInfoUpdated_Params params {};
		params.NewSpectatorInfo = NewSpectatorInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.ClearList
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_TeammateInfoContainer_C::ClearList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.ClearList");
		
		UWBP_Sheik_TeammateInfoContainer_C_ClearList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.Handle on Team Info Updated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_TeammateInfoContainer_C::HandleonTeamInfoUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.Handle on Team Info Updated");
		
		UWBP_Sheik_TeammateInfoContainer_C_HandleonTeamInfoUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_TeammateInfoContainer_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.ConstructOnlyOnce");
		
		UWBP_Sheik_TeammateInfoContainer_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.UpdateTeammateHUDInfo
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_TeammateInfoContainer_C::UpdateTeammateHUDInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.UpdateTeammateHUDInfo");
		
		UWBP_Sheik_TeammateInfoContainer_C_UpdateTeammateHUDInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.ExecuteUbergraph_WBP_Sheik_TeammateInfoContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_TeammateInfoContainer_C::ExecuteUbergraph_WBP_Sheik_TeammateInfoContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C.ExecuteUbergraph_WBP_Sheik_TeammateInfoContainer");
		
		UWBP_Sheik_TeammateInfoContainer_C_ExecuteUbergraph_WBP_Sheik_TeammateInfoContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_TeammateInfoContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_TeammateInfoContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_TeammateInfoContainer.WBP_Sheik_TeammateInfoContainer_C");
		return ptr;
	}

}


