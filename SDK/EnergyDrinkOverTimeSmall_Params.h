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
	 * Function EnergyDrinkOverTimeSmall.EnergyDrinkOverTimeSmall_C.Projectile SFX Oscillator Timeline__FinishedFunc
	 */
	struct AEnergyDrinkOverTimeSmall_C_ProjectileSFXOscillatorTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function EnergyDrinkOverTimeSmall.EnergyDrinkOverTimeSmall_C.Projectile SFX Oscillator Timeline__UpdateFunc
	 */
	struct AEnergyDrinkOverTimeSmall_C_ProjectileSFXOscillatorTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function EnergyDrinkOverTimeSmall.EnergyDrinkOverTimeSmall_C.OnUse
	 */
	struct AEnergyDrinkOverTimeSmall_C_OnUse_Params
	{	};

	/**
	 * Function EnergyDrinkOverTimeSmall.EnergyDrinkOverTimeSmall_C.OnActivateProjectile
	 */
	struct AEnergyDrinkOverTimeSmall_C_OnActivateProjectile_Params
	{	};

	/**
	 * Function EnergyDrinkOverTimeSmall.EnergyDrinkOverTimeSmall_C.OnDeactivateProjectile
	 */
	struct AEnergyDrinkOverTimeSmall_C_OnDeactivateProjectile_Params
	{	};

	/**
	 * Function EnergyDrinkOverTimeSmall.EnergyDrinkOverTimeSmall_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
	 */
	struct AEnergyDrinkOverTimeSmall_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             ImpactVelocity;                                          // 0x0088(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EnergyDrinkOverTimeSmall.EnergyDrinkOverTimeSmall_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature
	 */
	struct AEnergyDrinkOverTimeSmall_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function EnergyDrinkOverTimeSmall.EnergyDrinkOverTimeSmall_C.ExecuteUbergraph_EnergyDrinkOverTimeSmall
	 */
	struct AEnergyDrinkOverTimeSmall_C_ExecuteUbergraph_EnergyDrinkOverTimeSmall_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
