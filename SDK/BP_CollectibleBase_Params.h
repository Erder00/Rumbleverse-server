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
	 * Function BP_CollectibleBase.BP_CollectibleBase_C.SuctionAnimation__FinishedFunc
	 */
	struct ABP_CollectibleBase_C_SuctionAnimation__FinishedFunc_Params
	{	};

	/**
	 * Function BP_CollectibleBase.BP_CollectibleBase_C.SuctionAnimation__UpdateFunc
	 */
	struct ABP_CollectibleBase_C_SuctionAnimation__UpdateFunc_Params
	{	};

	/**
	 * Function BP_CollectibleBase.BP_CollectibleBase_C.OnHiddenInGameChanged
	 */
	struct ABP_CollectibleBase_C_OnHiddenInGameChanged_Params
	{
	public:
		bool                                                       bNewHiddenInGame;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CollectibleBase.BP_CollectibleBase_C.OnStartVanishWarning
	 */
	struct ABP_CollectibleBase_C_OnStartVanishWarning_Params
	{	};

	/**
	 * Function BP_CollectibleBase.BP_CollectibleBase_C.OnCollected
	 */
	struct ABP_CollectibleBase_C_OnCollected_Params
	{	};

	/**
	 * Function BP_CollectibleBase.BP_CollectibleBase_C.ExecuteUbergraph_BP_CollectibleBase
	 */
	struct ABP_CollectibleBase_C_ExecuteUbergraph_BP_CollectibleBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
