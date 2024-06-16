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
	 * Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.GetImageFromLookupName
	 */
	struct UWBP_Sheik_InventorySlot_C_GetImageFromLookupName_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InDurability;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EQHV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          OutImage;                                                // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.CreatePip
	 */
	struct UWBP_Sheik_InventorySlot_C_CreatePip_Params
	{
	public:
		class UPanelWidget*                                        PipContainer;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.PlayValidSlotAnim
	 */
	struct UWBP_Sheik_InventorySlot_C_PlayValidSlotAnim_Params
	{	};

	/**
	 * Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.HideButtonPrompt
	 */
	struct UWBP_Sheik_InventorySlot_C_HideButtonPrompt_Params
	{	};

	/**
	 * Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.SetDPadIcon
	 */
	struct UWBP_Sheik_InventorySlot_C_SetDPadIcon_Params
	{	};

	/**
	 * Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.PlayStoredAnimation
	 */
	struct UWBP_Sheik_InventorySlot_C_PlayStoredAnimation_Params
	{	};

	/**
	 * Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.PlayPickedUpAnimation
	 */
	struct UWBP_Sheik_InventorySlot_C_PlayPickedUpAnimation_Params
	{	};

	/**
	 * Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.UpdateDurabilityDisplay
	 */
	struct UWBP_Sheik_InventorySlot_C_UpdateDurabilityDisplay_Params
	{
	public:
		int32_t                                                    RemainingUses;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.PlayFailAnimation
	 */
	struct UWBP_Sheik_InventorySlot_C_PlayFailAnimation_Params
	{	};

	/**
	 * Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.ApplySlotSpecificStyling
	 */
	struct UWBP_Sheik_InventorySlot_C_ApplySlotSpecificStyling_Params
	{	};

	/**
	 * Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.SetDisplayInfo
	 */
	struct UWBP_Sheik_InventorySlot_C_SetDisplayInfo_Params
	{
	public:
		struct FIGItemDisplayInfo                                  DisplayInfo;                                             // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.PreConstruct
	 */
	struct UWBP_Sheik_InventorySlot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_InventorySlot_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.ExecuteUbergraph_WBP_Sheik_InventorySlot
	 */
	struct UWBP_Sheik_InventorySlot_C_ExecuteUbergraph_WBP_Sheik_InventorySlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
