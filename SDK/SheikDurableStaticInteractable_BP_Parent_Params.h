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
	 * Function SheikDurableStaticInteractable_BP_Parent.SheikDurableStaticInteractable_BP_Parent_C.HandleInteractableReset_BP
	 */
	struct ASheikDurableStaticInteractable_BP_Parent_C_HandleInteractableReset_BP_Params
	{	};

	/**
	 * Function SheikDurableStaticInteractable_BP_Parent.SheikDurableStaticInteractable_BP_Parent_C.TriggerEffects
	 */
	struct ASheikDurableStaticInteractable_BP_Parent_C_TriggerEffects_Params
	{	};

	/**
	 * Function SheikDurableStaticInteractable_BP_Parent.SheikDurableStaticInteractable_BP_Parent_C.OnInteractionEnded
	 */
	struct ASheikDurableStaticInteractable_BP_Parent_C_OnInteractionEnded_Params
	{
	public:
		EIGStaticInteractableActorState                            PreviousState;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikDurableStaticInteractable_BP_Parent.SheikDurableStaticInteractable_BP_Parent_C.HandleInteractableStateChanged_BP
	 */
	struct ASheikDurableStaticInteractable_BP_Parent_C_HandleInteractableStateChanged_BP_Params
	{
	public:
		EIGStaticInteractableActorState                            PreviousState;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EIGStaticInteractableActorState                            NewState;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikDurableStaticInteractable_BP_Parent.SheikDurableStaticInteractable_BP_Parent_C.ReceiveBeginPlay
	 */
	struct ASheikDurableStaticInteractable_BP_Parent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SheikDurableStaticInteractable_BP_Parent.SheikDurableStaticInteractable_BP_Parent_C.BP_OnDurabilityChanged
	 */
	struct ASheikDurableStaticInteractable_BP_Parent_C_BP_OnDurabilityChanged_Params
	{
	public:
		int32_t                                                    NewDurability;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikDurableStaticInteractable_BP_Parent.SheikDurableStaticInteractable_BP_Parent_C.InteractableHasBeenHit_BP
	 */
	struct ASheikDurableStaticInteractable_BP_Parent_C_InteractableHasBeenHit_BP_Params
	{
	public:
		bool                                                       bWasSuccessfulHit;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SheikDurableStaticInteractable_BP_Parent.SheikDurableStaticInteractable_BP_Parent_C.ExecuteUbergraph_SheikDurableStaticInteractable_BP_Parent
	 */
	struct ASheikDurableStaticInteractable_BP_Parent_C_ExecuteUbergraph_SheikDurableStaticInteractable_BP_Parent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikDurableStaticInteractable_BP_Parent.SheikDurableStaticInteractable_BP_Parent_C.On Durability Changed__DelegateSignature
	 */
	struct ASheikDurableStaticInteractable_BP_Parent_C_OnDurabilityChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
