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
	 * Function Grenade_Healing_T1.Grenade_Healing_T1_C.StopGrenadeSound
	 */
	struct AGrenade_Healing_T1_C_StopGrenadeSound_Params
	{	};

	/**
	 * Function Grenade_Healing_T1.Grenade_Healing_T1_C.PlayGrenadeSound
	 */
	struct AGrenade_Healing_T1_C_PlayGrenadeSound_Params
	{	};

	/**
	 * Function Grenade_Healing_T1.Grenade_Healing_T1_C.Projectile SFX Oscilator Timeline__FinishedFunc
	 */
	struct AGrenade_Healing_T1_C_ProjectileSFXOscilatorTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function Grenade_Healing_T1.Grenade_Healing_T1_C.Projectile SFX Oscilator Timeline__UpdateFunc
	 */
	struct AGrenade_Healing_T1_C_ProjectileSFXOscilatorTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function Grenade_Healing_T1.Grenade_Healing_T1_C.OnActivateProjectile
	 */
	struct AGrenade_Healing_T1_C_OnActivateProjectile_Params
	{	};

	/**
	 * Function Grenade_Healing_T1.Grenade_Healing_T1_C.OnDeactivateProjectile
	 */
	struct AGrenade_Healing_T1_C_OnDeactivateProjectile_Params
	{	};

	/**
	 * Function Grenade_Healing_T1.Grenade_Healing_T1_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
	 */
	struct AGrenade_Healing_T1_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             ImpactVelocity;                                          // 0x0088(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Grenade_Healing_T1.Grenade_Healing_T1_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature
	 */
	struct AGrenade_Healing_T1_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Grenade_Healing_T1.Grenade_Healing_T1_C.OnDetonate
	 */
	struct AGrenade_Healing_T1_C_OnDetonate_Params
	{	};

	/**
	 * Function Grenade_Healing_T1.Grenade_Healing_T1_C.OnLingerFinished
	 */
	struct AGrenade_Healing_T1_C_OnLingerFinished_Params
	{	};

	/**
	 * Function Grenade_Healing_T1.Grenade_Healing_T1_C.ExecuteUbergraph_Grenade_Healing_T1
	 */
	struct AGrenade_Healing_T1_C_ExecuteUbergraph_Grenade_Healing_T1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
