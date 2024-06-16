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
	 * 		Name   -> Function WBP_CombatNotification_PerkEarned.WBP_CombatNotification_PerkEarned_C.GetPerkTextureFromDataTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  OutTexture                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotification_PerkEarned_C::GetPerkTextureFromDataTable(const class FName& RowName, class UTexture2D** OutTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_PerkEarned.WBP_CombatNotification_PerkEarned_C.GetPerkTextureFromDataTable");
		
		UWBP_CombatNotification_PerkEarned_C_GetPerkTextureFromDataTable_Params params {};
		params.RowName = RowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTexture != nullptr)
			*OutTexture = params.OutTexture;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_PerkEarned.WBP_CombatNotification_PerkEarned_C.SetPerkIconAndName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGPerkHUDInfo                              PerkInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_CombatNotification_PerkEarned_C::SetPerkIconAndName(const struct FIGPerkHUDInfo& PerkInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_PerkEarned.WBP_CombatNotification_PerkEarned_C.SetPerkIconAndName");
		
		UWBP_CombatNotification_PerkEarned_C_SetPerkIconAndName_Params params {};
		params.PerkInfo = PerkInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_PerkEarned.WBP_CombatNotification_PerkEarned_C.ShiftUp
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_PerkEarned_C::ShiftUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_PerkEarned.WBP_CombatNotification_PerkEarned_C.ShiftUp");
		
		UWBP_CombatNotification_PerkEarned_C_ShiftUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_PerkEarned.WBP_CombatNotification_PerkEarned_C.ShowPerkEarnedNotif
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_PerkEarned_C::ShowPerkEarnedNotif()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_PerkEarned.WBP_CombatNotification_PerkEarned_C.ShowPerkEarnedNotif");
		
		UWBP_CombatNotification_PerkEarned_C_ShowPerkEarnedNotif_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_PerkEarned.WBP_CombatNotification_PerkEarned_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_PerkEarned_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_PerkEarned.WBP_CombatNotification_PerkEarned_C.ConstructOnlyOnce");
		
		UWBP_CombatNotification_PerkEarned_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_PerkEarned.WBP_CombatNotification_PerkEarned_C.ExecuteUbergraph_WBP_CombatNotification_PerkEarned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotification_PerkEarned_C::ExecuteUbergraph_WBP_CombatNotification_PerkEarned(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_PerkEarned.WBP_CombatNotification_PerkEarned_C.ExecuteUbergraph_WBP_CombatNotification_PerkEarned");
		
		UWBP_CombatNotification_PerkEarned_C_ExecuteUbergraph_WBP_CombatNotification_PerkEarned_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CombatNotification_PerkEarned_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CombatNotification_PerkEarned_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CombatNotification_PerkEarned.WBP_CombatNotification_PerkEarned_C");
		return ptr;
	}

}


