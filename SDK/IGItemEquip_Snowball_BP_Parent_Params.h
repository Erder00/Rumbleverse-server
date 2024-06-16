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
	 * Function IGItemEquip_Snowball_BP_Parent.IGItemEquip_Snowball_BP_Parent_C.HandleInteractableReset_BP
	 */
	struct AIGItemEquip_Snowball_BP_Parent_C_HandleInteractableReset_BP_Params
	{	};

	/**
	 * Function IGItemEquip_Snowball_BP_Parent.IGItemEquip_Snowball_BP_Parent_C.OnEnterInteractable
	 */
	struct AIGItemEquip_Snowball_BP_Parent_C_OnEnterInteractable_Params
	{	};

	/**
	 * Function IGItemEquip_Snowball_BP_Parent.IGItemEquip_Snowball_BP_Parent_C.OnInteractionEnded
	 */
	struct AIGItemEquip_Snowball_BP_Parent_C_OnInteractionEnded_Params
	{
	public:
		EIGStaticInteractableActorState                            PreviousState;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IGItemEquip_Snowball_BP_Parent.IGItemEquip_Snowball_BP_Parent_C.HandleInteractableStateChanged_BP
	 */
	struct AIGItemEquip_Snowball_BP_Parent_C_HandleInteractableStateChanged_BP_Params
	{
	public:
		EIGStaticInteractableActorState                            PreviousState;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EIGStaticInteractableActorState                            NewState;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IGItemEquip_Snowball_BP_Parent.IGItemEquip_Snowball_BP_Parent_C.ExecuteUbergraph_IGItemEquip_Snowball_BP_Parent
	 */
	struct AIGItemEquip_Snowball_BP_Parent_C_ExecuteUbergraph_IGItemEquip_Snowball_BP_Parent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
