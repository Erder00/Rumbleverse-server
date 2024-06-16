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
	 * 		Name   -> Function WBP_Sheik_EOM_ChampionNotification.WBP_Sheik_EOM_ChampionNotification_C.UpdateNotificationSnowball
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_EOM_ChampionNotification_C::UpdateNotificationSnowball()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_ChampionNotification.WBP_Sheik_EOM_ChampionNotification_C.UpdateNotificationSnowball");
		
		UWBP_Sheik_EOM_ChampionNotification_C_UpdateNotificationSnowball_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_ChampionNotification.WBP_Sheik_EOM_ChampionNotification_C.IsSnowballFight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSnowballFight                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_EOM_ChampionNotification_C::IsSnowballFight(bool* IsSnowballFight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_ChampionNotification.WBP_Sheik_EOM_ChampionNotification_C.IsSnowballFight");
		
		UWBP_Sheik_EOM_ChampionNotification_C_IsSnowballFight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSnowballFight != nullptr)
			*IsSnowballFight = params.IsSnowballFight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_ChampionNotification.WBP_Sheik_EOM_ChampionNotification_C.HideChampionNotification
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_EOM_ChampionNotification_C::HideChampionNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_ChampionNotification.WBP_Sheik_EOM_ChampionNotification_C.HideChampionNotification");
		
		UWBP_Sheik_EOM_ChampionNotification_C_HideChampionNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_ChampionNotification.WBP_Sheik_EOM_ChampionNotification_C.ShowChampionNotification
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_EOM_ChampionNotification_C::ShowChampionNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_ChampionNotification.WBP_Sheik_EOM_ChampionNotification_C.ShowChampionNotification");
		
		UWBP_Sheik_EOM_ChampionNotification_C_ShowChampionNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_ChampionNotification.WBP_Sheik_EOM_ChampionNotification_C.SetBRWinnerText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSolo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_EOM_ChampionNotification_C::SetBRWinnerText(bool IsSolo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_ChampionNotification.WBP_Sheik_EOM_ChampionNotification_C.SetBRWinnerText");
		
		UWBP_Sheik_EOM_ChampionNotification_C_SetBRWinnerText_Params params {};
		params.IsSolo = IsSolo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_ChampionNotification.WBP_Sheik_EOM_ChampionNotification_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_EOM_ChampionNotification_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_ChampionNotification.WBP_Sheik_EOM_ChampionNotification_C.ConstructOnlyOnce");
		
		UWBP_Sheik_EOM_ChampionNotification_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_ChampionNotification.WBP_Sheik_EOM_ChampionNotification_C.ExecuteUbergraph_WBP_Sheik_EOM_ChampionNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_EOM_ChampionNotification_C::ExecuteUbergraph_WBP_Sheik_EOM_ChampionNotification(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_ChampionNotification.WBP_Sheik_EOM_ChampionNotification_C.ExecuteUbergraph_WBP_Sheik_EOM_ChampionNotification");
		
		UWBP_Sheik_EOM_ChampionNotification_C_ExecuteUbergraph_WBP_Sheik_EOM_ChampionNotification_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_EOM_ChampionNotification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_EOM_ChampionNotification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_EOM_ChampionNotification.WBP_Sheik_EOM_ChampionNotification_C");
		return ptr;
	}

}


