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
	 * Function IGLootSpawner_Snowball_BP.IGLootSpawner_Snowball_BP_C.GetRelevantSnowballPreviewMesh
	 */
	struct AIGLootSpawner_Snowball_BP_C_GetRelevantSnowballPreviewMesh_Params
	{
	public:
		class UStaticMeshComponent*                                SM_BlastSphere;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IGLootSpawner_Snowball_BP.IGLootSpawner_Snowball_BP_C.HandleInteractableReset_BP
	 */
	struct AIGLootSpawner_Snowball_BP_C_HandleInteractableReset_BP_Params
	{	};

	/**
	 * Function IGLootSpawner_Snowball_BP.IGLootSpawner_Snowball_BP_C.OnEnterInteractable
	 */
	struct AIGLootSpawner_Snowball_BP_C_OnEnterInteractable_Params
	{	};

	/**
	 * Function IGLootSpawner_Snowball_BP.IGLootSpawner_Snowball_BP_C.OnInteractionEnded
	 */
	struct AIGLootSpawner_Snowball_BP_C_OnInteractionEnded_Params
	{
	public:
		EIGStaticInteractableActorState                            PreviousState;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IGLootSpawner_Snowball_BP.IGLootSpawner_Snowball_BP_C.HandleInteractableStateChanged_BP
	 */
	struct AIGLootSpawner_Snowball_BP_C_HandleInteractableStateChanged_BP_Params
	{
	public:
		EIGStaticInteractableActorState                            PreviousState;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EIGStaticInteractableActorState                            NewState;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IGLootSpawner_Snowball_BP.IGLootSpawner_Snowball_BP_C.ExecuteUbergraph_IGLootSpawner_Snowball_BP
	 */
	struct AIGLootSpawner_Snowball_BP_C_ExecuteUbergraph_IGLootSpawner_Snowball_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
