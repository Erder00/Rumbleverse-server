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
	 * 		Name   -> Function BP_ConsumableFXComponent.BP_ConsumableFXComponent_C.SpawnConsumableVFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_SheikCharacter_C*                        CharacterReference                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTagContainer                       GameplayTag                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class USkeletalMeshComponent*                      ConsumableSK                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ConsumableFXComponent_C::SpawnConsumableVFX(class ABP_SheikCharacter_C* CharacterReference, const struct FGameplayTagContainer& GameplayTag, class USkeletalMeshComponent* ConsumableSK)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConsumableFXComponent.BP_ConsumableFXComponent_C.SpawnConsumableVFX");
		
		UBP_ConsumableFXComponent_C_SpawnConsumableVFX_Params params {};
		params.CharacterReference = CharacterReference;
		params.GameplayTag = GameplayTag;
		params.ConsumableSK = ConsumableSK;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ConsumableFXComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ConsumableFXComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ConsumableFXComponent.BP_ConsumableFXComponent_C");
		return ptr;
	}

}


