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
	 * Function NachoBucket.NachoBucket_C.Bounce SFX
	 */
	struct ANachoBucket_C_BounceSFX_Params
	{
	public:
		struct FVector                                             A;                                                       // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W151[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundCue*                                           Sound;                                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NachoBucket.NachoBucket_C.Projectile SFX Oscillator Timeline__FinishedFunc
	 */
	struct ANachoBucket_C_ProjectileSFXOscillatorTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function NachoBucket.NachoBucket_C.Projectile SFX Oscillator Timeline__UpdateFunc
	 */
	struct ANachoBucket_C_ProjectileSFXOscillatorTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function NachoBucket.NachoBucket_C.OnActivateProjectile
	 */
	struct ANachoBucket_C_OnActivateProjectile_Params
	{	};

	/**
	 * Function NachoBucket.NachoBucket_C.OnDeactivateProjectile
	 */
	struct ANachoBucket_C_OnDeactivateProjectile_Params
	{	};

	/**
	 * Function NachoBucket.NachoBucket_C.OnUse
	 */
	struct ANachoBucket_C_OnUse_Params
	{	};

	/**
	 * Function NachoBucket.NachoBucket_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
	 */
	struct ANachoBucket_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             ImpactVelocity;                                          // 0x0088(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NachoBucket.NachoBucket_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature
	 */
	struct ANachoBucket_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function NachoBucket.NachoBucket_C.ExecuteUbergraph_NachoBucket
	 */
	struct ANachoBucket_C_ExecuteUbergraph_NachoBucket_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
