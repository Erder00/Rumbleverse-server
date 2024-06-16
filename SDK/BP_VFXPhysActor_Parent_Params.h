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
	 * Function BP_VFXPhysActor_Parent.BP_VFXPhysActor_Parent_C.Return To Pool FX
	 */
	struct ABP_VFXPhysActor_Parent_C_ReturnToPoolFX_Params
	{	};

	/**
	 * Function BP_VFXPhysActor_Parent.BP_VFXPhysActor_Parent_C.Play Sound Effect
	 */
	struct ABP_VFXPhysActor_Parent_C_PlaySoundEffect_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_VFXPhysActor_Parent.BP_VFXPhysActor_Parent_C.ResetGroundImpactAudio
	 */
	struct ABP_VFXPhysActor_Parent_C_ResetGroundImpactAudio_Params
	{	};

	/**
	 * Function BP_VFXPhysActor_Parent.BP_VFXPhysActor_Parent_C.ReceiveBeginPlay
	 */
	struct ABP_VFXPhysActor_Parent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_VFXPhysActor_Parent.BP_VFXPhysActor_Parent_C.BndEvt__StaticMeshComp_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_VFXPhysActor_Parent_C_BndEvt__StaticMeshComp_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_VFXPhysActor_Parent.BP_VFXPhysActor_Parent_C.ResetHitAudioDoOnce
	 */
	struct ABP_VFXPhysActor_Parent_C_ResetHitAudioDoOnce_Params
	{	};

	/**
	 * Function BP_VFXPhysActor_Parent.BP_VFXPhysActor_Parent_C.ExecuteUbergraph_BP_VFXPhysActor_Parent
	 */
	struct ABP_VFXPhysActor_Parent_C_ExecuteUbergraph_BP_VFXPhysActor_Parent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
