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
	 * 		Name   -> Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.Bounce SFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundCue*                                   Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEnergyDrinkOverTimeLongBig_C::BounceSFX(const struct FVector& A, class USoundCue* Sound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.Bounce SFX");
		
		AEnergyDrinkOverTimeLongBig_C_BounceSFX_Params params {};
		params.A = A;
		params.Sound = Sound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.Projectile SFX Oscillator Timeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AEnergyDrinkOverTimeLongBig_C::ProjectileSFXOscillatorTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.Projectile SFX Oscillator Timeline__FinishedFunc");
		
		AEnergyDrinkOverTimeLongBig_C_ProjectileSFXOscillatorTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.Projectile SFX Oscillator Timeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AEnergyDrinkOverTimeLongBig_C::ProjectileSFXOscillatorTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.Projectile SFX Oscillator Timeline__UpdateFunc");
		
		AEnergyDrinkOverTimeLongBig_C_ProjectileSFXOscillatorTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEnergyDrinkOverTimeLongBig_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.ReceiveTick");
		
		AEnergyDrinkOverTimeLongBig_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.OnUse
	 * 		Flags  -> ()
	 */
	void AEnergyDrinkOverTimeLongBig_C::OnUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.OnUse");
		
		AEnergyDrinkOverTimeLongBig_C_OnUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.OnActivateProjectile
	 * 		Flags  -> ()
	 */
	void AEnergyDrinkOverTimeLongBig_C::OnActivateProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.OnActivateProjectile");
		
		AEnergyDrinkOverTimeLongBig_C_OnActivateProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.OnDeactivateProjectile
	 * 		Flags  -> ()
	 */
	void AEnergyDrinkOverTimeLongBig_C::OnDeactivateProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.OnDeactivateProjectile");
		
		AEnergyDrinkOverTimeLongBig_C_OnDeactivateProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FVector                                     ImpactVelocity                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEnergyDrinkOverTimeLongBig_C::BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature");
		
		AEnergyDrinkOverTimeLongBig_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Params params {};
		params.ImpactResult = ImpactResult;
		params.ImpactVelocity = ImpactVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AEnergyDrinkOverTimeLongBig_C::BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature");
		
		AEnergyDrinkOverTimeLongBig_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Params params {};
		params.ImpactResult = ImpactResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.ExecuteUbergraph_EnergyDrinkOverTimeLongBig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEnergyDrinkOverTimeLongBig_C::ExecuteUbergraph_EnergyDrinkOverTimeLongBig(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.ExecuteUbergraph_EnergyDrinkOverTimeLongBig");
		
		AEnergyDrinkOverTimeLongBig_C_ExecuteUbergraph_EnergyDrinkOverTimeLongBig_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEnergyDrinkOverTimeLongBig_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEnergyDrinkOverTimeLongBig_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C");
		return ptr;
	}

}


