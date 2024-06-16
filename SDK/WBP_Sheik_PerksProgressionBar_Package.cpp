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
	 * 		Name   -> Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.OnSpectatedPlayerPerkLevelChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PerkLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_PerksProgressionBar_C::OnSpectatedPlayerPerkLevelChanged(int32_t PerkLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.OnSpectatedPlayerPerkLevelChanged");
		
		UWBP_Sheik_PerksProgressionBar_C_OnSpectatedPlayerPerkLevelChanged_Params params {};
		params.PerkLevel = PerkLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.OnSpectatedPlayerPerkXPChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PerkXP                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_PerksProgressionBar_C::OnSpectatedPlayerPerkXPChanged(float PerkXP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.OnSpectatedPlayerPerkXPChanged");
		
		UWBP_Sheik_PerksProgressionBar_C_OnSpectatedPlayerPerkXPChanged_Params params {};
		params.PerkXP = PerkXP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.SetForPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikPlayerStateCommon*                     SheikPlayerState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_PerksProgressionBar_C::SetForPlayer(class ASheikPlayerStateCommon* SheikPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.SetForPlayer");
		
		UWBP_Sheik_PerksProgressionBar_C_SetForPlayer_Params params {};
		params.SheikPlayerState = SheikPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.Clear Progress Bar
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_PerksProgressionBar_C::ClearProgressBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.Clear Progress Bar");
		
		UWBP_Sheik_PerksProgressionBar_C_ClearProgressBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.UpdateCurrentPerkLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGPerkHUDInfo                              PerkInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_PerksProgressionBar_C::UpdateCurrentPerkLevel(const struct FIGPerkHUDInfo& PerkInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.UpdateCurrentPerkLevel");
		
		UWBP_Sheik_PerksProgressionBar_C_UpdateCurrentPerkLevel_Params params {};
		params.PerkInfo = PerkInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.UpdatePerkXP_TextValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikCharacter*                             SheikCharacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_PerksProgressionBar_C::UpdatePerkXP_TextValue(class ASheikCharacter* SheikCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.UpdatePerkXP_TextValue");
		
		UWBP_Sheik_PerksProgressionBar_C_UpdatePerkXP_TextValue_Params params {};
		params.SheikCharacter = SheikCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.UpdatePerkXP_Meter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PerkXPPercentage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PerkXPTotal                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PerkXPPercentageDelta                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_PerksProgressionBar_C::UpdatePerkXP_Meter(float PerkXPPercentage, float PerkXPTotal, float PerkXPPercentageDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.UpdatePerkXP_Meter");
		
		UWBP_Sheik_PerksProgressionBar_C_UpdatePerkXP_Meter_Params params {};
		params.PerkXPPercentage = PerkXPPercentage;
		params.PerkXPTotal = PerkXPTotal;
		params.PerkXPPercentageDelta = PerkXPPercentageDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_PerksProgressionBar_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.PreConstruct");
		
		UWBP_Sheik_PerksProgressionBar_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_PerksProgressionBar_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.ConstructOnlyOnce");
		
		UWBP_Sheik_PerksProgressionBar_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.On Hud Region Visibility Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikHudRegion                                    HudRegion                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_PerksProgressionBar_C::OnHudRegionVisibilityChanged(ESheikHudRegion HudRegion, bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.On Hud Region Visibility Changed");
		
		UWBP_Sheik_PerksProgressionBar_C_OnHudRegionVisibilityChanged_Params params {};
		params.HudRegion = HudRegion;
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.ExecuteUbergraph_WBP_Sheik_PerksProgressionBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_PerksProgressionBar_C::ExecuteUbergraph_WBP_Sheik_PerksProgressionBar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C.ExecuteUbergraph_WBP_Sheik_PerksProgressionBar");
		
		UWBP_Sheik_PerksProgressionBar_C_ExecuteUbergraph_WBP_Sheik_PerksProgressionBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_PerksProgressionBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_PerksProgressionBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_PerksProgressionBar.WBP_Sheik_PerksProgressionBar_C");
		return ptr;
	}

}


