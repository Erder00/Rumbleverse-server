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
	 * 		Name   -> Function Bat_Key.Bat_Key_C.LockedCrateRadarVFX_Deactivate
	 * 		Flags  -> ()
	 */
	void ABat_Key_C::LockedCrateRadarVFX_Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bat_Key.Bat_Key_C.LockedCrateRadarVFX_Deactivate");
		
		ABat_Key_C_LockedCrateRadarVFX_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Bat_Key.Bat_Key_C.LockedCrateRadarVFX_Spawn
	 * 		Flags  -> ()
	 */
	void ABat_Key_C::LockedCrateRadarVFX_Spawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bat_Key.Bat_Key_C.LockedCrateRadarVFX_Spawn");
		
		ABat_Key_C_LockedCrateRadarVFX_Spawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Bat_Key.Bat_Key_C.SpawnKeyVFX
	 * 		Flags  -> ()
	 */
	void ABat_Key_C::SpawnKeyVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bat_Key.Bat_Key_C.SpawnKeyVFX");
		
		ABat_Key_C_SpawnKeyVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Bat_Key.Bat_Key_C.OnDurabilityChanged
	 * 		Flags  -> ()
	 */
	void ABat_Key_C::OnDurabilityChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bat_Key.Bat_Key_C.OnDurabilityChanged");
		
		ABat_Key_C_OnDurabilityChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Bat_Key.Bat_Key_C.OnPickedUp
	 * 		Flags  -> ()
	 */
	void ABat_Key_C::OnPickedUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bat_Key.Bat_Key_C.OnPickedUp");
		
		ABat_Key_C_OnPickedUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Bat_Key.Bat_Key_C.OnDropped
	 * 		Flags  -> ()
	 */
	void ABat_Key_C::OnDropped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bat_Key.Bat_Key_C.OnDropped");
		
		ABat_Key_C_OnDropped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Bat_Key.Bat_Key_C.OnLockedCrateRadarTierChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EffectTiers                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABat_Key_C::OnLockedCrateRadarTierChanged(int32_t EffectTiers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bat_Key.Bat_Key_C.OnLockedCrateRadarTierChanged");
		
		ABat_Key_C_OnLockedCrateRadarTierChanged_Params params {};
		params.EffectTiers = EffectTiers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Bat_Key.Bat_Key_C.ExecuteUbergraph_Bat_Key
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABat_Key_C::ExecuteUbergraph_Bat_Key(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bat_Key.Bat_Key_C.ExecuteUbergraph_Bat_Key");
		
		ABat_Key_C_ExecuteUbergraph_Bat_Key_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABat_Key_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABat_Key_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Bat_Key.Bat_Key_C");
		return ptr;
	}

}


