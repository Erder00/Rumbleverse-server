#pragma once

/**
 * Name: Rumbleverse
 * Version: Latest
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_WeaponBase_Parent.BP_WeaponBase_Parent_C.Projectile SFX Oscilator Timeline__FinishedFunc
	 */
	struct ABP_WeaponBase_Parent_C_ProjectileSFXOscilatorTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_WeaponBase_Parent.BP_WeaponBase_Parent_C.Projectile SFX Oscilator Timeline__UpdateFunc
	 */
	struct ABP_WeaponBase_Parent_C_ProjectileSFXOscilatorTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_WeaponBase_Parent.BP_WeaponBase_Parent_C.OnActivateProjectile
	 */
	struct ABP_WeaponBase_Parent_C_OnActivateProjectile_Params
	{	};

	/**
	 * Function BP_WeaponBase_Parent.BP_WeaponBase_Parent_C.OnDeactivateProjectile
	 */
	struct ABP_WeaponBase_Parent_C_OnDeactivateProjectile_Params
	{	};

	/**
	 * Function BP_WeaponBase_Parent.BP_WeaponBase_Parent_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
	 */
	struct ABP_WeaponBase_Parent_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             ImpactVelocity;                                          // 0x0088(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WeaponBase_Parent.BP_WeaponBase_Parent_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature
	 */
	struct ABP_WeaponBase_Parent_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_WeaponBase_Parent.BP_WeaponBase_Parent_C.OnMaxDurabilityReached
	 */
	struct ABP_WeaponBase_Parent_C_OnMaxDurabilityReached_Params
	{	};

	/**
	 * Function BP_WeaponBase_Parent.BP_WeaponBase_Parent_C.ExecuteUbergraph_BP_WeaponBase_Parent
	 */
	struct ABP_WeaponBase_Parent_C_ExecuteUbergraph_BP_WeaponBase_Parent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
