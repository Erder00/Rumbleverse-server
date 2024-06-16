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
	 * 		Name   -> Function BP_SheikCharacter.BP_SheikCharacter_C.GetSpecialMoveDisplayTier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGMoveMontage*                              Move                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMoveTier                                          OverridableTier                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	EMoveTier ABP_SheikCharacter_C::GetSpecialMoveDisplayTier(class UIGMoveMontage* Move, EMoveTier OverridableTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SheikCharacter.BP_SheikCharacter_C.GetSpecialMoveDisplayTier");
		
		ABP_SheikCharacter_C_GetSpecialMoveDisplayTier_Params params {};
		params.Move = Move;
		params.OverridableTier = OverridableTier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SheikCharacter.BP_SheikCharacter_C.OnClientIsAimingCannonChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewIsAimingCannon                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SheikCharacter_C::OnClientIsAimingCannonChanged(bool NewIsAimingCannon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SheikCharacter.BP_SheikCharacter_C.OnClientIsAimingCannonChanged");
		
		ABP_SheikCharacter_C_OnClientIsAimingCannonChanged_Params params {};
		params.NewIsAimingCannon = NewIsAimingCannon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SheikCharacter.BP_SheikCharacter_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_SheikCharacter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SheikCharacter.BP_SheikCharacter_C.ReceiveBeginPlay");
		
		ABP_SheikCharacter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SheikCharacter.BP_SheikCharacter_C.OnClientFiredCannon
	 * 		Flags  -> ()
	 */
	void ABP_SheikCharacter_C::OnClientFiredCannon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SheikCharacter.BP_SheikCharacter_C.OnClientFiredCannon");
		
		ABP_SheikCharacter_C_OnClientFiredCannon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SheikCharacter.BP_SheikCharacter_C.SetSpectatorInfoVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsVisible                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SheikCharacter_C::SetSpectatorInfoVisibility(bool bIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SheikCharacter.BP_SheikCharacter_C.SetSpectatorInfoVisibility");
		
		ABP_SheikCharacter_C_SetSpectatorInfoVisibility_Params params {};
		params.bIsVisible = bIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SheikCharacter.BP_SheikCharacter_C.OnProjectileAimEnter
	 * 		Flags  -> ()
	 */
	void ABP_SheikCharacter_C::OnProjectileAimEnter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SheikCharacter.BP_SheikCharacter_C.OnProjectileAimEnter");
		
		ABP_SheikCharacter_C_OnProjectileAimEnter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SheikCharacter.BP_SheikCharacter_C.OnProjectileAimExit
	 * 		Flags  -> ()
	 */
	void ABP_SheikCharacter_C::OnProjectileAimExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SheikCharacter.BP_SheikCharacter_C.OnProjectileAimExit");
		
		ABP_SheikCharacter_C_OnProjectileAimExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SheikCharacter.BP_SheikCharacter_C.SupplyPlayerStateToSpectatorInfo
	 * 		Flags  -> ()
	 */
	void ABP_SheikCharacter_C::SupplyPlayerStateToSpectatorInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SheikCharacter.BP_SheikCharacter_C.SupplyPlayerStateToSpectatorInfo");
		
		ABP_SheikCharacter_C_SupplyPlayerStateToSpectatorInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SheikCharacter.BP_SheikCharacter_C.ExecuteUbergraph_BP_SheikCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SheikCharacter_C::ExecuteUbergraph_BP_SheikCharacter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SheikCharacter.BP_SheikCharacter_C.ExecuteUbergraph_BP_SheikCharacter");
		
		ABP_SheikCharacter_C_ExecuteUbergraph_BP_SheikCharacter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SheikCharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SheikCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SheikCharacter.BP_SheikCharacter_C");
		return ptr;
	}

}


