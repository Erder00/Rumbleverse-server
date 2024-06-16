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
	 * 		Name   -> Function FootballWeapon.FootballWeapon_C.OnMaxDurabilityReached
	 * 		Flags  -> ()
	 */
	void AFootballWeapon_C::OnMaxDurabilityReached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FootballWeapon.FootballWeapon_C.OnMaxDurabilityReached");
		
		AFootballWeapon_C_OnMaxDurabilityReached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FootballWeapon.FootballWeapon_C.OnActivateProjectile
	 * 		Flags  -> ()
	 */
	void AFootballWeapon_C::OnActivateProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FootballWeapon.FootballWeapon_C.OnActivateProjectile");
		
		AFootballWeapon_C_OnActivateProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FootballWeapon.FootballWeapon_C.OnDeactivateProjectile
	 * 		Flags  -> ()
	 */
	void AFootballWeapon_C::OnDeactivateProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FootballWeapon.FootballWeapon_C.OnDeactivateProjectile");
		
		AFootballWeapon_C_OnDeactivateProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FootballWeapon.FootballWeapon_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AFootballWeapon_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FootballWeapon.FootballWeapon_C.ReceiveBeginPlay");
		
		AFootballWeapon_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FootballWeapon.FootballWeapon_C.Set Aiming To True
	 * 		Flags  -> ()
	 */
	void AFootballWeapon_C::SetAimingToTrue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FootballWeapon.FootballWeapon_C.Set Aiming To True");
		
		AFootballWeapon_C_SetAimingToTrue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FootballWeapon.FootballWeapon_C.Set Aiming to False
	 * 		Flags  -> ()
	 */
	void AFootballWeapon_C::SetAimingtoFalse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FootballWeapon.FootballWeapon_C.Set Aiming to False");
		
		AFootballWeapon_C_SetAimingtoFalse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FootballWeapon.FootballWeapon_C.ExecuteUbergraph_FootballWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFootballWeapon_C::ExecuteUbergraph_FootballWeapon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FootballWeapon.FootballWeapon_C.ExecuteUbergraph_FootballWeapon");
		
		AFootballWeapon_C_ExecuteUbergraph_FootballWeapon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFootballWeapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFootballWeapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FootballWeapon.FootballWeapon_C");
		return ptr;
	}

}


