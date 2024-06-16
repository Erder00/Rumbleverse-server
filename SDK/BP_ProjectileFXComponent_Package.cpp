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
	 * 		Name   -> Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.SetupOceanHitEvent
	 * 		Flags  -> ()
	 */
	void UBP_ProjectileFXComponent_C::SetupOceanHitEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.SetupOceanHitEvent");
		
		UBP_ProjectileFXComponent_C_SetupOceanHitEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.ProjectileOceanHit
	 * 		Flags  -> ()
	 */
	void UBP_ProjectileFXComponent_C::ProjectileOceanHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.ProjectileOceanHit");
		
		UBP_ProjectileFXComponent_C_ProjectileOceanHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.WeaponBreakVFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkeletalMesh                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProjectileFXComponent_C::WeaponBreakVFX(class USkeletalMeshComponent* SkeletalMesh, const class FName& BoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.WeaponBreakVFX");
		
		UBP_ProjectileFXComponent_C_WeaponBreakVFX_Params params {};
		params.SkeletalMesh = SkeletalMesh;
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.SetBounceSFX_Volume_Pitch_Location
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     BounceLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              VolumeMultiplier                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PitchMultiplier                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPhysicalSurface                                   SurfaceType                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProjectileFXComponent_C::SetBounceSFX_Volume_Pitch_Location(struct FVector* BounceLocation, float* VolumeMultiplier, float* PitchMultiplier, EPhysicalSurface* SurfaceType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.SetBounceSFX_Volume_Pitch_Location");
		
		UBP_ProjectileFXComponent_C_SetBounceSFX_Volume_Pitch_Location_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BounceLocation != nullptr)
			*BounceLocation = params.BounceLocation;
		if (VolumeMultiplier != nullptr)
			*VolumeMultiplier = params.VolumeMultiplier;
		if (PitchMultiplier != nullptr)
			*PitchMultiplier = params.PitchMultiplier;
		if (SurfaceType != nullptr)
			*SurfaceType = params.SurfaceType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.BounceSFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       GameplayTag                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_ProjectileFXComponent_C::BounceSFX(const struct FGameplayTagContainer& GameplayTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.BounceSFX");
		
		UBP_ProjectileFXComponent_C_BounceSFX_Params params {};
		params.GameplayTag = GameplayTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.BounceVFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       GameplayTag                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_ProjectileFXComponent_C::BounceVFX(const struct FGameplayTagContainer& GameplayTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.BounceVFX");
		
		UBP_ProjectileFXComponent_C_BounceVFX_Params params {};
		params.GameplayTag = GameplayTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.Audio Spawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       GameplayTag                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_ProjectileFXComponent_C::AudioSpawn(const struct FGameplayTagContainer& GameplayTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.Audio Spawn");
		
		UBP_ProjectileFXComponent_C_AudioSpawn_Params params {};
		params.GameplayTag = GameplayTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.VFX Spawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       GameplayTag                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_ProjectileFXComponent_C::VFXSpawn(const struct FGameplayTagContainer& GameplayTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.VFX Spawn");
		
		UBP_ProjectileFXComponent_C_VFXSpawn_Params params {};
		params.GameplayTag = GameplayTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.ProjectileActivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       GameplayTags                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UCapsuleComponent*                           CapsuleComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProjectileFXComponent_C::ProjectileActivated(const struct FGameplayTagContainer& GameplayTags, class UCapsuleComponent* CapsuleComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.ProjectileActivated");
		
		UBP_ProjectileFXComponent_C_ProjectileActivated_Params params {};
		params.GameplayTags = GameplayTags;
		params.CapsuleComponent = CapsuleComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.ProjectileDeactivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticleSystemComponent*                    ParticleReference                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAudioComponent*                             SoundReference                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProjectileFXComponent_C::ProjectileDeactivated(class UParticleSystemComponent* ParticleReference, class UAudioComponent* SoundReference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.ProjectileDeactivated");
		
		UBP_ProjectileFXComponent_C_ProjectileDeactivated_Params params {};
		params.ParticleReference = ParticleReference;
		params.SoundReference = SoundReference;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.ProjectileBounced
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FVector                                     Velocity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTagContainer                       GameplayTag                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_ProjectileFXComponent_C::ProjectileBounced(const struct FHitResult& Hit, const struct FVector& Velocity, const struct FGameplayTagContainer& GameplayTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.ProjectileBounced");
		
		UBP_ProjectileFXComponent_C_ProjectileBounced_Params params {};
		params.Hit = Hit;
		params.Velocity = Velocity;
		params.GameplayTag = GameplayTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.ProjectileStopped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FGameplayTagContainer                       GameplayTag                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_ProjectileFXComponent_C::ProjectileStopped(const struct FHitResult& Hit, const struct FGameplayTagContainer& GameplayTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.ProjectileStopped");
		
		UBP_ProjectileFXComponent_C_ProjectileStopped_Params params {};
		params.Hit = Hit;
		params.GameplayTag = GameplayTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBP_ProjectileFXComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.ReceiveBeginPlay");
		
		UBP_ProjectileFXComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.ExecuteUbergraph_BP_ProjectileFXComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProjectileFXComponent_C::ExecuteUbergraph_BP_ProjectileFXComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.ExecuteUbergraph_BP_ProjectileFXComponent");
		
		UBP_ProjectileFXComponent_C_ExecuteUbergraph_BP_ProjectileFXComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ProjectileFXComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ProjectileFXComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileFXComponent.BP_ProjectileFXComponent_C");
		return ptr;
	}

}


