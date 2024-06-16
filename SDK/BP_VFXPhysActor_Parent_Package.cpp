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
	 * 		Name   -> Function BP_VFXPhysActor_Parent.BP_VFXPhysActor_Parent_C.Return To Pool FX
	 * 		Flags  -> ()
	 */
	void ABP_VFXPhysActor_Parent_C::ReturnToPoolFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VFXPhysActor_Parent.BP_VFXPhysActor_Parent_C.Return To Pool FX");
		
		ABP_VFXPhysActor_Parent_C_ReturnToPoolFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VFXPhysActor_Parent.BP_VFXPhysActor_Parent_C.Play Sound Effect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_VFXPhysActor_Parent_C::PlaySoundEffect(struct FHitResult* HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VFXPhysActor_Parent.BP_VFXPhysActor_Parent_C.Play Sound Effect");
		
		ABP_VFXPhysActor_Parent_C_PlaySoundEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitResult != nullptr)
			*HitResult = params.HitResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VFXPhysActor_Parent.BP_VFXPhysActor_Parent_C.ResetGroundImpactAudio
	 * 		Flags  -> ()
	 */
	void ABP_VFXPhysActor_Parent_C::ResetGroundImpactAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VFXPhysActor_Parent.BP_VFXPhysActor_Parent_C.ResetGroundImpactAudio");
		
		ABP_VFXPhysActor_Parent_C_ResetGroundImpactAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VFXPhysActor_Parent.BP_VFXPhysActor_Parent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_VFXPhysActor_Parent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VFXPhysActor_Parent.BP_VFXPhysActor_Parent_C.ReceiveBeginPlay");
		
		ABP_VFXPhysActor_Parent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VFXPhysActor_Parent.BP_VFXPhysActor_Parent_C.BndEvt__StaticMeshComp_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_VFXPhysActor_Parent_C::BndEvt__StaticMeshComp_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VFXPhysActor_Parent.BP_VFXPhysActor_Parent_C.BndEvt__StaticMeshComp_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
		
		ABP_VFXPhysActor_Parent_C_BndEvt__StaticMeshComp_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VFXPhysActor_Parent.BP_VFXPhysActor_Parent_C.ResetHitAudioDoOnce
	 * 		Flags  -> ()
	 */
	void ABP_VFXPhysActor_Parent_C::ResetHitAudioDoOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VFXPhysActor_Parent.BP_VFXPhysActor_Parent_C.ResetHitAudioDoOnce");
		
		ABP_VFXPhysActor_Parent_C_ResetHitAudioDoOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VFXPhysActor_Parent.BP_VFXPhysActor_Parent_C.ExecuteUbergraph_BP_VFXPhysActor_Parent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VFXPhysActor_Parent_C::ExecuteUbergraph_BP_VFXPhysActor_Parent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VFXPhysActor_Parent.BP_VFXPhysActor_Parent_C.ExecuteUbergraph_BP_VFXPhysActor_Parent");
		
		ABP_VFXPhysActor_Parent_C_ExecuteUbergraph_BP_VFXPhysActor_Parent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_VFXPhysActor_Parent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_VFXPhysActor_Parent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_VFXPhysActor_Parent.BP_VFXPhysActor_Parent_C");
		return ptr;
	}

}


