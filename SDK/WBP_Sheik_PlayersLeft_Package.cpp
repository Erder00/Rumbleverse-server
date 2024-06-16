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
	 * 		Name   -> Function WBP_Sheik_PlayersLeft.WBP_Sheik_PlayersLeft_C.SetTeamsIcon
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_PlayersLeft_C::SetTeamsIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlayersLeft.WBP_Sheik_PlayersLeft_C.SetTeamsIcon");
		
		UWBP_Sheik_PlayersLeft_C_SetTeamsIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlayersLeft.WBP_Sheik_PlayersLeft_C.OnGameFlowStateChanged_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGameFlowState                                     GameFlowState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_PlayersLeft_C::OnGameFlowStateChanged_cb(EGameFlowState GameFlowState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlayersLeft.WBP_Sheik_PlayersLeft_C.OnGameFlowStateChanged_cb");
		
		UWBP_Sheik_PlayersLeft_C_OnGameFlowStateChanged_cb_Params params {};
		params.GameFlowState = GameFlowState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlayersLeft.WBP_Sheik_PlayersLeft_C.UpdatePlayersLeft
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_PlayersLeft_C::UpdatePlayersLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlayersLeft.WBP_Sheik_PlayersLeft_C.UpdatePlayersLeft");
		
		UWBP_Sheik_PlayersLeft_C_UpdatePlayersLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlayersLeft.WBP_Sheik_PlayersLeft_C.OnTotalPlayersChanged_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TotalPlayers                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Joined                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_PlayersLeft_C::OnTotalPlayersChanged_cb(int32_t TotalPlayers, bool Joined)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlayersLeft.WBP_Sheik_PlayersLeft_C.OnTotalPlayersChanged_cb");
		
		UWBP_Sheik_PlayersLeft_C_OnTotalPlayersChanged_cb_Params params {};
		params.TotalPlayers = TotalPlayers;
		params.Joined = Joined;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlayersLeft.WBP_Sheik_PlayersLeft_C.SetTotalPlayers
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_PlayersLeft_C::SetTotalPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlayersLeft.WBP_Sheik_PlayersLeft_C.SetTotalPlayers");
		
		UWBP_Sheik_PlayersLeft_C_SetTotalPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlayersLeft.WBP_Sheik_PlayersLeft_C.OnNumPlayersAliveChanged_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_PlayersLeft_C::OnNumPlayersAliveChanged_cb(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlayersLeft.WBP_Sheik_PlayersLeft_C.OnNumPlayersAliveChanged_cb");
		
		UWBP_Sheik_PlayersLeft_C_OnNumPlayersAliveChanged_cb_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlayersLeft.WBP_Sheik_PlayersLeft_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_PlayersLeft_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlayersLeft.WBP_Sheik_PlayersLeft_C.ConstructOnlyOnce");
		
		UWBP_Sheik_PlayersLeft_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlayersLeft.WBP_Sheik_PlayersLeft_C.ExecuteUbergraph_WBP_Sheik_PlayersLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_PlayersLeft_C::ExecuteUbergraph_WBP_Sheik_PlayersLeft(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlayersLeft.WBP_Sheik_PlayersLeft_C.ExecuteUbergraph_WBP_Sheik_PlayersLeft");
		
		UWBP_Sheik_PlayersLeft_C_ExecuteUbergraph_WBP_Sheik_PlayersLeft_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_PlayersLeft_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_PlayersLeft_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_PlayersLeft.WBP_Sheik_PlayersLeft_C");
		return ptr;
	}

}


