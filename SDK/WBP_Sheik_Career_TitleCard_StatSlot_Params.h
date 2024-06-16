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
	 * Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.SetStatSeasonalTag
	 */
	struct UWBP_Sheik_Career_TitleCard_StatSlot_C_SetStatSeasonalTag_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.GetNonComplexStatValue
	 */
	struct UWBP_Sheik_Career_TitleCard_StatSlot_C_GetNonComplexStatValue_Params
	{
	public:
		struct FSheikPlayerDataStat                                Stat;                                                    // 0x0000(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		EIGTitleCardStatType                                       StatType;                                                // 0x00D8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M0B8[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              RawStatName;                                             // 0x00E0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		EIGSeasonIdentifier                                        StatSeason;                                              // 0x00F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ME0B[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikSeasonalStatFieldsData                        SeasonData;                                              // 0x00F8(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       HasSeasonalData;                                         // 0x0128(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AUXT[0x3];                                   // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      StatValue;                                               // 0x012C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.Init
	 */
	struct UWBP_Sheik_Career_TitleCard_StatSlot_C_Init_Params
	{
	public:
		class UWBP_Sheik_Career_TitleCard_C*                       InTitleCard;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.FormatStatValue
	 */
	struct UWBP_Sheik_Career_TitleCard_StatSlot_C_FormatStatValue_Params
	{
	public:
		struct FIGTitleCardStat                                    TitleCardStat;                                           // 0x0000(0x0138)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                FormattedValue;                                          // 0x0138(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.SetStatNameAndValue
	 */
	struct UWBP_Sheik_Career_TitleCard_StatSlot_C_SetStatNameAndValue_Params
	{
	public:
		struct FIGTitleCardStat                                    Stat;                                                    // 0x0000(0x0138)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.SetStatSlotBackground
	 */
	struct UWBP_Sheik_Career_TitleCard_StatSlot_C_SetStatSlotBackground_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.HandleFocus
	 */
	struct UWBP_Sheik_Career_TitleCard_StatSlot_C_HandleFocus_Params
	{
	public:
		bool                                                       Focus;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B0OX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.OnSelect
	 */
	struct UWBP_Sheik_Career_TitleCard_StatSlot_C_OnSelect_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.UpdateStatSlotInfo
	 */
	struct UWBP_Sheik_Career_TitleCard_StatSlot_C_UpdateStatSlotInfo_Params
	{
	public:
		struct FIGTitleCardStat                                    StatRewardInfo;                                          // 0x0000(0x0138)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.SetVisuals
	 */
	struct UWBP_Sheik_Career_TitleCard_StatSlot_C_SetVisuals_Params
	{
	public:
		bool                                                       IsEmpty;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_Career_TitleCard_StatSlot_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.PreConstruct
	 */
	struct UWBP_Sheik_Career_TitleCard_StatSlot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.OnGainFocus
	 */
	struct UWBP_Sheik_Career_TitleCard_StatSlot_C_OnGainFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.OnLoseFocus
	 */
	struct UWBP_Sheik_Career_TitleCard_StatSlot_C_OnLoseFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.ExecuteUbergraph_WBP_Sheik_Career_TitleCard_StatSlot
	 */
	struct UWBP_Sheik_Career_TitleCard_StatSlot_C_ExecuteUbergraph_WBP_Sheik_Career_TitleCard_StatSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.RewardSlotSelected__DelegateSignature
	 */
	struct UWBP_Sheik_Career_TitleCard_StatSlot_C_RewardSlotSelected__DelegateSignature_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.CurrentWidgetUpdated__DelegateSignature
	 */
	struct UWBP_Sheik_Career_TitleCard_StatSlot_C_CurrentWidgetUpdated__DelegateSignature_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
