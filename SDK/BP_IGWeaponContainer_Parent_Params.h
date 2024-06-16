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
	 * Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.SpawnGoldenSparkles
	 */
	struct ABP_IGWeaponContainer_Parent_C_SpawnGoldenSparkles_Params
	{	};

	/**
	 * Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.SpawnHitFX
	 */
	struct ABP_IGWeaponContainer_Parent_C_SpawnHitFX_Params
	{	};

	/**
	 * Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.Projectile SFX Oscillator Timeline__FinishedFunc
	 */
	struct ABP_IGWeaponContainer_Parent_C_ProjectileSFXOscillatorTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.Projectile SFX Oscillator Timeline__UpdateFunc
	 */
	struct ABP_IGWeaponContainer_Parent_C_ProjectileSFXOscillatorTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.OnDeactivateProjectile
	 */
	struct ABP_IGWeaponContainer_Parent_C_OnDeactivateProjectile_Params
	{	};

	/**
	 * Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.OnActivateProjectile
	 */
	struct ABP_IGWeaponContainer_Parent_C_OnActivateProjectile_Params
	{	};

	/**
	 * Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
	 */
	struct ABP_IGWeaponContainer_Parent_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             ImpactVelocity;                                          // 0x0088(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature
	 */
	struct ABP_IGWeaponContainer_Parent_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.OnDurabilityChanged
	 */
	struct ABP_IGWeaponContainer_Parent_C_OnDurabilityChanged_Params
	{	};

	/**
	 * Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.OnMaxDurabilityReached
	 */
	struct ABP_IGWeaponContainer_Parent_C_OnMaxDurabilityReached_Params
	{	};

	/**
	 * Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.ReceiveBeginPlay
	 */
	struct ABP_IGWeaponContainer_Parent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.ExecuteUbergraph_BP_IGWeaponContainer_Parent
	 */
	struct ABP_IGWeaponContainer_Parent_C_ExecuteUbergraph_BP_IGWeaponContainer_Parent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_IGWeaponContainer_Parent.BP_IGWeaponContainer_Parent_C.On Durability Changed__DelegateSignature
	 */
	struct ABP_IGWeaponContainer_Parent_C_OnDurabilityChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
