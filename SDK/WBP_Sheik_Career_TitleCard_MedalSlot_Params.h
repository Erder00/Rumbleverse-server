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
	 * Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.UpdateMedalSlotInfo
	 */
	struct UWBP_Sheik_Career_TitleCard_MedalSlot_C_UpdateMedalSlotInfo_Params
	{
	public:
		struct FIGTitleCardMedal                                   RewardInfo;                                              // 0x0000(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.HandleFocus
	 */
	struct UWBP_Sheik_Career_TitleCard_MedalSlot_C_HandleFocus_Params
	{
	public:
		bool                                                       Focus;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EASW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.OnSelect
	 */
	struct UWBP_Sheik_Career_TitleCard_MedalSlot_C_OnSelect_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.SetVisuals
	 */
	struct UWBP_Sheik_Career_TitleCard_MedalSlot_C_SetVisuals_Params
	{
	public:
		bool                                                       IsEmpty;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_Career_TitleCard_MedalSlot_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.PreConstruct
	 */
	struct UWBP_Sheik_Career_TitleCard_MedalSlot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.OnGainFocus
	 */
	struct UWBP_Sheik_Career_TitleCard_MedalSlot_C_OnGainFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.OnLoseFocus
	 */
	struct UWBP_Sheik_Career_TitleCard_MedalSlot_C_OnLoseFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.ExecuteUbergraph_WBP_Sheik_Career_TitleCard_MedalSlot
	 */
	struct UWBP_Sheik_Career_TitleCard_MedalSlot_C_ExecuteUbergraph_WBP_Sheik_Career_TitleCard_MedalSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.RewardSlotSelected__DelegateSignature
	 */
	struct UWBP_Sheik_Career_TitleCard_MedalSlot_C_RewardSlotSelected__DelegateSignature_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.CurrentWidgetUpdated__DelegateSignature
	 */
	struct UWBP_Sheik_Career_TitleCard_MedalSlot_C_CurrentWidgetUpdated__DelegateSignature_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
