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
	 * Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.GetCharacter
	 */
	struct UWBP_Sheik_StatSlot_Combined_C_GetCharacter_Params
	{
	public:
		class ASheikCharacter*                                     Out;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.Hide Pip Child
	 */
	struct UWBP_Sheik_StatSlot_Combined_C_HidePipChild_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TO8Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.ResetPips
	 */
	struct UWBP_Sheik_StatSlot_Combined_C_ResetPips_Params
	{	};

	/**
	 * Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.Setup Pip Child
	 */
	struct UWBP_Sheik_StatSlot_Combined_C_SetupPipChild_Params
	{
	public:
		ESheikModValueType                                         Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Base;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XF5E[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    index;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.ResetIconAnim
	 */
	struct UWBP_Sheik_StatSlot_Combined_C_ResetIconAnim_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.PlayIconAnim
	 */
	struct UWBP_Sheik_StatSlot_Combined_C_PlayIconAnim_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.SetPips
	 */
	struct UWBP_Sheik_StatSlot_Combined_C_SetPips_Params
	{	};

	/**
	 * Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.OnShouldDisplayUseItemPrompt_cb
	 */
	struct UWBP_Sheik_StatSlot_Combined_C_OnShouldDisplayUseItemPrompt_cb_Params
	{
	public:
		bool                                                       ShouldDisplay;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EIGItemType                                                ItemType;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.SetIsSpectator
	 */
	struct UWBP_Sheik_StatSlot_Combined_C_SetIsSpectator_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.SetForPlayer
	 */
	struct UWBP_Sheik_StatSlot_Combined_C_SetForPlayer_Params
	{
	public:
		class ASheikPlayerStateCommon*                             SheikPlayerState;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.HandleOnSpectatorInfoUpdated
	 */
	struct UWBP_Sheik_StatSlot_Combined_C_HandleOnSpectatorInfoUpdated_Params
	{
	public:
		struct FSheikSpectatorInfo                                 SpectatorInfo;                                           // 0x0000(0x00E0)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.CheckIsAtMax
	 */
	struct UWBP_Sheik_StatSlot_Combined_C_CheckIsAtMax_Params
	{	};

	/**
	 * Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.On Sheik Mod Value Changed Cb
	 */
	struct UWBP_Sheik_StatSlot_Combined_C_OnSheikModValueChangedCb_Params
	{
	public:
		ESheikModValueType                                         Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8O0P[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.PreConstruct
	 */
	struct UWBP_Sheik_StatSlot_Combined_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_StatSlot_Combined_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.ExecuteUbergraph_WBP_Sheik_StatSlot_Combined
	 */
	struct UWBP_Sheik_StatSlot_Combined_C_ExecuteUbergraph_WBP_Sheik_StatSlot_Combined_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YR8F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
