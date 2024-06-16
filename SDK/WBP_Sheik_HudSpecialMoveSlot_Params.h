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
	 * Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.IsSpecialMoveAssigned
	 */
	struct UWBP_Sheik_HudSpecialMoveSlot_C_IsSpecialMoveAssigned_Params
	{
	public:
		bool                                                       IsSpecialMoveAssigned;                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.HandleOnSpectatorInfoChanged
	 */
	struct UWBP_Sheik_HudSpecialMoveSlot_C_HandleOnSpectatorInfoChanged_Params
	{
	public:
		struct FSheikSpectatorInfo                                 SpectatorInfo;                                           // 0x0000(0x00E0)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.On No Longer Winded
	 */
	struct UWBP_Sheik_HudSpecialMoveSlot_C_OnNoLongerWinded_Params
	{	};

	/**
	 * Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.On Winded
	 */
	struct UWBP_Sheik_HudSpecialMoveSlot_C_OnWinded_Params
	{
	public:
		float                                                      StaminaPercentage;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.RefreshUsableVisuals
	 */
	struct UWBP_Sheik_HudSpecialMoveSlot_C_RefreshUsableVisuals_Params
	{	};

	/**
	 * Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.OnSpecialStatusChanged_cb
	 */
	struct UWBP_Sheik_HudSpecialMoveSlot_C_OnSpecialStatusChanged_cb_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FEX8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UIGMoveMontage*                                      Montage;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Usable;                                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.ShowSpecialMove
	 */
	struct UWBP_Sheik_HudSpecialMoveSlot_C_ShowSpecialMove_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.SetDisplayValues
	 */
	struct UWBP_Sheik_HudSpecialMoveSlot_C_SetDisplayValues_Params
	{
	public:
		class FText                                                MoveLabel;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UTexture2D*                                          MoveIcon;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        StatColor;                                               // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          BackgroundTexture;                                       // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          TierCoin;                                                // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.On Item Slot Updated Cb
	 */
	struct UWBP_Sheik_HudSpecialMoveSlot_C_OnItemSlotUpdatedCb_Params
	{
	public:
		EIGInventorySlot                                           Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NWUX[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FIGItemDisplayInfo                                  IGItemDisplayInfo;                                       // 0x0008(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.SetShouldStayHidden
	 */
	struct UWBP_Sheik_HudSpecialMoveSlot_C_SetShouldStayHidden_Params
	{
	public:
		bool                                                       ShouldBeHidden;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.SetForPlayer
	 */
	struct UWBP_Sheik_HudSpecialMoveSlot_C_SetForPlayer_Params
	{
	public:
		class ASheikPlayerStateCommon*                             SheikPlayerState;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.SetInitialMove
	 */
	struct UWBP_Sheik_HudSpecialMoveSlot_C_SetInitialMove_Params
	{
	public:
		class ASheikCharacter*                                     InCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.OnSpecialMoveChanged_cb
	 */
	struct UWBP_Sheik_HudSpecialMoveSlot_C_OnSpecialMoveChanged_cb_Params
	{
	public:
		class UIGMoveMontage*                                      SpecialMove;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SlotIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMoveTier                                                  SpecialMoveTier;                                         // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.UpdateInputVisuals
	 */
	struct UWBP_Sheik_HudSpecialMoveSlot_C_UpdateInputVisuals_Params
	{	};

	/**
	 * Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_HudSpecialMoveSlot_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.PreConstruct
	 */
	struct UWBP_Sheik_HudSpecialMoveSlot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.ExecuteUbergraph_WBP_Sheik_HudSpecialMoveSlot
	 */
	struct UWBP_Sheik_HudSpecialMoveSlot_C_ExecuteUbergraph_WBP_Sheik_HudSpecialMoveSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LINL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
