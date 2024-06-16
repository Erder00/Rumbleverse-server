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
	 * Function BP_ConsumableFXComponent.BP_ConsumableFXComponent_C.SpawnConsumableVFX
	 */
	struct UBP_ConsumableFXComponent_C_SpawnConsumableVFX_Params
	{
	public:
		class ABP_SheikCharacter_C*                                CharacterReference;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTagContainer                               GameplayTag;                                             // 0x0008(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class USkeletalMeshComponent*                              ConsumableSK;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
