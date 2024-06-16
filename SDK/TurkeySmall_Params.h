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
	 * Function TurkeySmall.TurkeySmall_C.SpawnPoofVFX
	 */
	struct ATurkeySmall_C_SpawnPoofVFX_Params
	{	};

	/**
	 * Function TurkeySmall.TurkeySmall_C.Projectile SFX Oscillator Timeline__FinishedFunc
	 */
	struct ATurkeySmall_C_ProjectileSFXOscillatorTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function TurkeySmall.TurkeySmall_C.Projectile SFX Oscillator Timeline__UpdateFunc
	 */
	struct ATurkeySmall_C_ProjectileSFXOscillatorTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function TurkeySmall.TurkeySmall_C.OnUse
	 */
	struct ATurkeySmall_C_OnUse_Params
	{	};

	/**
	 * Function TurkeySmall.TurkeySmall_C.OnActivateProjectile
	 */
	struct ATurkeySmall_C_OnActivateProjectile_Params
	{	};

	/**
	 * Function TurkeySmall.TurkeySmall_C.OnDeactivateProjectile
	 */
	struct ATurkeySmall_C_OnDeactivateProjectile_Params
	{	};

	/**
	 * Function TurkeySmall.TurkeySmall_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
	 */
	struct ATurkeySmall_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             ImpactVelocity;                                          // 0x0088(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TurkeySmall.TurkeySmall_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature
	 */
	struct ATurkeySmall_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function TurkeySmall.TurkeySmall_C.ExecuteUbergraph_TurkeySmall
	 */
	struct ATurkeySmall_C_ExecuteUbergraph_TurkeySmall_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
