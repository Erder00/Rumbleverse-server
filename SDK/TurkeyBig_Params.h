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
	 * Function TurkeyBig.TurkeyBig_C.SpawnPoofVFX
	 */
	struct ATurkeyBig_C_SpawnPoofVFX_Params
	{	};

	/**
	 * Function TurkeyBig.TurkeyBig_C.Projectile SFX Oscillator Timeline__FinishedFunc
	 */
	struct ATurkeyBig_C_ProjectileSFXOscillatorTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function TurkeyBig.TurkeyBig_C.Projectile SFX Oscillator Timeline__UpdateFunc
	 */
	struct ATurkeyBig_C_ProjectileSFXOscillatorTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function TurkeyBig.TurkeyBig_C.OnActivateProjectile
	 */
	struct ATurkeyBig_C_OnActivateProjectile_Params
	{	};

	/**
	 * Function TurkeyBig.TurkeyBig_C.OnDeactivateProjectile
	 */
	struct ATurkeyBig_C_OnDeactivateProjectile_Params
	{	};

	/**
	 * Function TurkeyBig.TurkeyBig_C.OnUse
	 */
	struct ATurkeyBig_C_OnUse_Params
	{	};

	/**
	 * Function TurkeyBig.TurkeyBig_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
	 */
	struct ATurkeyBig_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             ImpactVelocity;                                          // 0x0088(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TurkeyBig.TurkeyBig_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature
	 */
	struct ATurkeyBig_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function TurkeyBig.TurkeyBig_C.ExecuteUbergraph_TurkeyBig
	 */
	struct ATurkeyBig_C_ExecuteUbergraph_TurkeyBig_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G93W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
