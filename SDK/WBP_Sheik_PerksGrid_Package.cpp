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
	 * 		Name   -> Function WBP_Sheik_PerksGrid.WBP_Sheik_PerksGrid_C.GetIsSnowballFight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSnowballFight                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_PerksGrid_C::GetIsSnowballFight(bool* IsSnowballFight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PerksGrid.WBP_Sheik_PerksGrid_C.GetIsSnowballFight");
		
		UWBP_Sheik_PerksGrid_C_GetIsSnowballFight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSnowballFight != nullptr)
			*IsSnowballFight = params.IsSnowballFight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PerksGrid.WBP_Sheik_PerksGrid_C.OnSpectatorInfoChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikSpectatorInfo                         SpectatorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_PerksGrid_C::OnSpectatorInfoChanged(struct FSheikSpectatorInfo* SpectatorInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PerksGrid.WBP_Sheik_PerksGrid_C.OnSpectatorInfoChanged");
		
		UWBP_Sheik_PerksGrid_C_OnSpectatorInfoChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpectatorInfo != nullptr)
			*SpectatorInfo = params.SpectatorInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PerksGrid.WBP_Sheik_PerksGrid_C.SetForPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikPlayerStateCommon*                     PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_PerksGrid_C::SetForPlayer(class ASheikPlayerStateCommon* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PerksGrid.WBP_Sheik_PerksGrid_C.SetForPlayer");
		
		UWBP_Sheik_PerksGrid_C_SetForPlayer_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PerksGrid.WBP_Sheik_PerksGrid_C.Clear and Generate Perks
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_PerksGrid_C::ClearandGeneratePerks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PerksGrid.WBP_Sheik_PerksGrid_C.Clear and Generate Perks");
		
		UWBP_Sheik_PerksGrid_C_ClearandGeneratePerks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PerksGrid.WBP_Sheik_PerksGrid_C.GetFreePerkSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Sheik_PerkSlot_C*                       NewParam                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_PerksGrid_C::GetFreePerkSlot(class UWBP_Sheik_PerkSlot_C** NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PerksGrid.WBP_Sheik_PerksGrid_C.GetFreePerkSlot");
		
		UWBP_Sheik_PerksGrid_C_GetFreePerkSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PerksGrid.WBP_Sheik_PerksGrid_C.RemovePerk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGPerkHUDInfo                              ToRemove                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_PerksGrid_C::RemovePerk(const struct FIGPerkHUDInfo& ToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PerksGrid.WBP_Sheik_PerksGrid_C.RemovePerk");
		
		UWBP_Sheik_PerksGrid_C_RemovePerk_Params params {};
		params.ToRemove = ToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PerksGrid.WBP_Sheik_PerksGrid_C.AddNewPerk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGPerkHUDInfo                              PerkInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_PerksGrid_C::AddNewPerk(const struct FIGPerkHUDInfo& PerkInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PerksGrid.WBP_Sheik_PerksGrid_C.AddNewPerk");
		
		UWBP_Sheik_PerksGrid_C_AddNewPerk_Params params {};
		params.PerkInfo = PerkInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PerksGrid.WBP_Sheik_PerksGrid_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_PerksGrid_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PerksGrid.WBP_Sheik_PerksGrid_C.ConstructOnlyOnce");
		
		UWBP_Sheik_PerksGrid_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PerksGrid.WBP_Sheik_PerksGrid_C.ExecuteUbergraph_WBP_Sheik_PerksGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_PerksGrid_C::ExecuteUbergraph_WBP_Sheik_PerksGrid(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PerksGrid.WBP_Sheik_PerksGrid_C.ExecuteUbergraph_WBP_Sheik_PerksGrid");
		
		UWBP_Sheik_PerksGrid_C_ExecuteUbergraph_WBP_Sheik_PerksGrid_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_PerksGrid_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_PerksGrid_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_PerksGrid.WBP_Sheik_PerksGrid_C");
		return ptr;
	}

}


