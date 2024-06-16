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
	 * 		Name   -> Function WBP_Sheik_Status_Effects.WBP_Sheik_Status_Effects_C.SetForPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikPlayerStateCommon*                     PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Status_Effects_C::SetForPlayer(class ASheikPlayerStateCommon* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Status_Effects.WBP_Sheik_Status_Effects_C.SetForPlayer");
		
		UWBP_Sheik_Status_Effects_C_SetForPlayer_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Status_Effects.WBP_Sheik_Status_Effects_C.On Spectator Info Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikSpectatorInfo                         SpectatorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_Status_Effects_C::OnSpectatorInfoChanged(struct FSheikSpectatorInfo* SpectatorInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Status_Effects.WBP_Sheik_Status_Effects_C.On Spectator Info Changed");
		
		UWBP_Sheik_Status_Effects_C_OnSpectatorInfoChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpectatorInfo != nullptr)
			*SpectatorInfo = params.SpectatorInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Status_Effects.WBP_Sheik_Status_Effects_C.SetColumns
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Status_Effects_C::SetColumns()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Status_Effects.WBP_Sheik_Status_Effects_C.SetColumns");
		
		UWBP_Sheik_Status_Effects_C_SetColumns_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Status_Effects.WBP_Sheik_Status_Effects_C.UpdateStatusTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGPerkHUDInfo                              HUDInfo                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Status_Effects_C::UpdateStatusTimer(const struct FIGPerkHUDInfo& HUDInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Status_Effects.WBP_Sheik_Status_Effects_C.UpdateStatusTimer");
		
		UWBP_Sheik_Status_Effects_C_UpdateStatusTimer_Params params {};
		params.HUDInfo = HUDInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Status_Effects.WBP_Sheik_Status_Effects_C.GetFreeStatusSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Sheik_StatusSlot_C*                     OutStatusSlot                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Status_Effects_C::GetFreeStatusSlot(class UWBP_Sheik_StatusSlot_C** OutStatusSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Status_Effects.WBP_Sheik_Status_Effects_C.GetFreeStatusSlot");
		
		UWBP_Sheik_Status_Effects_C_GetFreeStatusSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutStatusSlot != nullptr)
			*OutStatusSlot = params.OutStatusSlot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Status_Effects.WBP_Sheik_Status_Effects_C.RemoveStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGPerkHUDInfo                              HUDInfo                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Status_Effects_C::RemoveStatus(const struct FIGPerkHUDInfo& HUDInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Status_Effects.WBP_Sheik_Status_Effects_C.RemoveStatus");
		
		UWBP_Sheik_Status_Effects_C_RemoveStatus_Params params {};
		params.HUDInfo = HUDInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Status_Effects.WBP_Sheik_Status_Effects_C.AddStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGPerkHUDInfo                              HUDInfo                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Status_Effects_C::AddStatus(const struct FIGPerkHUDInfo& HUDInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Status_Effects.WBP_Sheik_Status_Effects_C.AddStatus");
		
		UWBP_Sheik_Status_Effects_C_AddStatus_Params params {};
		params.HUDInfo = HUDInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Status_Effects.WBP_Sheik_Status_Effects_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Status_Effects_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Status_Effects.WBP_Sheik_Status_Effects_C.ConstructOnlyOnce");
		
		UWBP_Sheik_Status_Effects_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Status_Effects.WBP_Sheik_Status_Effects_C.ExecuteUbergraph_WBP_Sheik_Status_Effects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Status_Effects_C::ExecuteUbergraph_WBP_Sheik_Status_Effects(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Status_Effects.WBP_Sheik_Status_Effects_C.ExecuteUbergraph_WBP_Sheik_Status_Effects");
		
		UWBP_Sheik_Status_Effects_C_ExecuteUbergraph_WBP_Sheik_Status_Effects_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Status_Effects_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Status_Effects_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Status_Effects.WBP_Sheik_Status_Effects_C");
		return ptr;
	}

}


