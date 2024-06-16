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
	 * Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.Bounce SFX
	 */
	struct AEnergyDrinkOverTimeLongBig_C_BounceSFX_Params
	{
	public:
		struct FVector                                             A;                                                       // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2F3E[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundCue*                                           Sound;                                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.Projectile SFX Oscillator Timeline__FinishedFunc
	 */
	struct AEnergyDrinkOverTimeLongBig_C_ProjectileSFXOscillatorTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.Projectile SFX Oscillator Timeline__UpdateFunc
	 */
	struct AEnergyDrinkOverTimeLongBig_C_ProjectileSFXOscillatorTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.ReceiveTick
	 */
	struct AEnergyDrinkOverTimeLongBig_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.OnUse
	 */
	struct AEnergyDrinkOverTimeLongBig_C_OnUse_Params
	{	};

	/**
	 * Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.OnActivateProjectile
	 */
	struct AEnergyDrinkOverTimeLongBig_C_OnActivateProjectile_Params
	{	};

	/**
	 * Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.OnDeactivateProjectile
	 */
	struct AEnergyDrinkOverTimeLongBig_C_OnDeactivateProjectile_Params
	{	};

	/**
	 * Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
	 */
	struct AEnergyDrinkOverTimeLongBig_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             ImpactVelocity;                                          // 0x0088(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature
	 */
	struct AEnergyDrinkOverTimeLongBig_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function EnergyDrinkOverTimeLongBig.EnergyDrinkOverTimeLongBig_C.ExecuteUbergraph_EnergyDrinkOverTimeLongBig
	 */
	struct AEnergyDrinkOverTimeLongBig_C_ExecuteUbergraph_EnergyDrinkOverTimeLongBig_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WAZ1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
