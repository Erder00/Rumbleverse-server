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
	 * Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.UpdateSnowballFightActionPromptText
	 */
	struct UWBP_Sheik_Inventory_C_UpdateSnowballFightActionPromptText_Params
	{	};

	/**
	 * Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.OnSpectatorInfoUpdated
	 */
	struct UWBP_Sheik_Inventory_C_OnSpectatorInfoUpdated_Params
	{
	public:
		struct FSheikSpectatorInfo                                 SpectatorInfo;                                           // 0x0000(0x00E0)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.SetForPlayer
	 */
	struct UWBP_Sheik_Inventory_C_SetForPlayer_Params
	{
	public:
		class ASheikPlayerStateCommon*                             SheikPlayerState;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.HideInventory
	 */
	struct UWBP_Sheik_Inventory_C_HideInventory_Params
	{	};

	/**
	 * Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.OnHeldItemUpdated
	 */
	struct UWBP_Sheik_Inventory_C_OnHeldItemUpdated_Params
	{
	public:
		struct FIGItemDisplayInfo                                  HeldItem;                                                // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.OnItemDurabilityUpdated_cb
	 */
	struct UWBP_Sheik_Inventory_C_OnItemDurabilityUpdated_cb_Params
	{
	public:
		EIGInventorySlot                                           Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UMX4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RemainingUses;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DurabilityTier;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZOMZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.UpdateCharacterBinding_cb
	 */
	struct UWBP_Sheik_Inventory_C_UpdateCharacterBinding_cb_Params
	{
	public:
		class ASheikCharacter*                                     InCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.OnItemSlotUpdated_cb
	 */
	struct UWBP_Sheik_Inventory_C_OnItemSlotUpdated_cb_Params
	{
	public:
		EIGInventorySlot                                           Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AR3U[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FIGItemDisplayInfo                                  Info;                                                    // 0x0008(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.GetSlotWidgetFromEnum
	 */
	struct UWBP_Sheik_Inventory_C_GetSlotWidgetFromEnum_Params
	{
	public:
		EIGInventorySlot                                           index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JLPH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWBP_Sheik_InventorySlot_C*                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.RefreshAllSlots
	 */
	struct UWBP_Sheik_Inventory_C_RefreshAllSlots_Params
	{	};

	/**
	 * Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_Inventory_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.PreConstruct
	 */
	struct UWBP_Sheik_Inventory_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.ExecuteUbergraph_WBP_Sheik_Inventory
	 */
	struct UWBP_Sheik_Inventory_C_ExecuteUbergraph_WBP_Sheik_Inventory_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F906[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
