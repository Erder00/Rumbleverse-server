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
	 * 		Name   -> Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.SpawnGoldenSparkles
	 * 		Flags  -> ()
	 */
	void ABP_IGWeaponContainer_Parent_C::SpawnGoldenSparkles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.SpawnGoldenSparkles");
		
		ABP_IGWeaponContainer_Parent_C_SpawnGoldenSparkles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.SpawnHitFX
	 * 		Flags  -> ()
	 */
	void ABP_IGWeaponContainer_Parent_C::SpawnHitFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.SpawnHitFX");
		
		ABP_IGWeaponContainer_Parent_C_SpawnHitFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.Projectile SFX Oscillator Timeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_IGWeaponContainer_Parent_C::ProjectileSFXOscillatorTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.Projectile SFX Oscillator Timeline__FinishedFunc");
		
		ABP_IGWeaponContainer_Parent_C_ProjectileSFXOscillatorTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.Projectile SFX Oscillator Timeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_IGWeaponContainer_Parent_C::ProjectileSFXOscillatorTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.Projectile SFX Oscillator Timeline__UpdateFunc");
		
		ABP_IGWeaponContainer_Parent_C_ProjectileSFXOscillatorTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.OnDeactivateProjectile
	 * 		Flags  -> ()
	 */
	void ABP_IGWeaponContainer_Parent_C::OnDeactivateProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.OnDeactivateProjectile");
		
		ABP_IGWeaponContainer_Parent_C_OnDeactivateProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.OnActivateProjectile
	 * 		Flags  -> ()
	 */
	void ABP_IGWeaponContainer_Parent_C::OnActivateProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.OnActivateProjectile");
		
		ABP_IGWeaponContainer_Parent_C_OnActivateProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FVector                                     ImpactVelocity                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_IGWeaponContainer_Parent_C::BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature");
		
		ABP_IGWeaponContainer_Parent_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Params params {};
		params.ImpactResult = ImpactResult;
		params.ImpactVelocity = ImpactVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_IGWeaponContainer_Parent_C::BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature");
		
		ABP_IGWeaponContainer_Parent_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Params params {};
		params.ImpactResult = ImpactResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.OnDurabilityChanged
	 * 		Flags  -> ()
	 */
	void ABP_IGWeaponContainer_Parent_C::OnDurabilityChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.OnDurabilityChanged");
		
		ABP_IGWeaponContainer_Parent_C_OnDurabilityChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.OnMaxDurabilityReached
	 * 		Flags  -> ()
	 */
	void ABP_IGWeaponContainer_Parent_C::OnMaxDurabilityReached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.OnMaxDurabilityReached");
		
		ABP_IGWeaponContainer_Parent_C_OnMaxDurabilityReached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_IGWeaponContainer_Parent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.ReceiveBeginPlay");
		
		ABP_IGWeaponContainer_Parent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.ExecuteUbergraph_BP_IGWeaponContainer_Parent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_IGWeaponContainer_Parent_C::ExecuteUbergraph_BP_IGWeaponContainer_Parent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.ExecuteUbergraph_BP_IGWeaponContainer_Parent");
		
		ABP_IGWeaponContainer_Parent_C_ExecuteUbergraph_BP_IGWeaponContainer_Parent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.On Durability Changed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_IGWeaponContainer_Parent_C::OnDurabilityChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.On Durability Changed__DelegateSignature");
		
		ABP_IGWeaponContainer_Parent_C_OnDurabilityChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_IGWeaponContainer_Parent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_IGWeaponContainer_Parent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C");
		return ptr;
	}

}


