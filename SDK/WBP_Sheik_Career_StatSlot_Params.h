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
	 * Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetSeasonalTag
	 */
	struct UWBP_Sheik_Career_StatSlot_C_SetSeasonalTag_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetRarity
	 */
	struct UWBP_Sheik_Career_StatSlot_C_SetRarity_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetStatusVisuals
	 */
	struct UWBP_Sheik_Career_StatSlot_C_SetStatusVisuals_Params
	{
	public:
		bool                                                       IsNew;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsEquipped;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsLocked;                                                // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetTimer
	 */
	struct UWBP_Sheik_Career_StatSlot_C_SetTimer_Params
	{
	public:
		struct FIGSeasonDefinition                                 IGSeasonDefinition;                                      // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetStatNameAndValue
	 */
	struct UWBP_Sheik_Career_StatSlot_C_SetStatNameAndValue_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FSheikPlayerDataStat                                SheikPlayerDataStat;                                     // 0x0018(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		EIGTitleCardStatType                                       StatType;                                                // 0x00F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EIGSeasonIdentifier                                        StatSeason;                                              // 0x00F1(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VV9B[0x2];                                   // 0x00F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetBackground
	 */
	struct UWBP_Sheik_Career_StatSlot_C_SetBackground_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetNewContent
	 */
	struct UWBP_Sheik_Career_StatSlot_C_SetNewContent_Params
	{
	public:
		bool                                                       IsNew;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.GetStatName
	 */
	struct UWBP_Sheik_Career_StatSlot_C_GetStatName_Params
	{
	public:
		class FText                                                OutNameText;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.GetStatID
	 */
	struct UWBP_Sheik_Career_StatSlot_C_GetStatID_Params
	{
	public:
		class FName                                                WalletId;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetEquippedStyling
	 */
	struct UWBP_Sheik_Career_StatSlot_C_SetEquippedStyling_Params
	{
	public:
		bool                                                       Equipped;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.GetStatInfo
	 */
	struct UWBP_Sheik_Career_StatSlot_C_GetStatInfo_Params
	{
	public:
		struct FIGTitleCardStat                                    StatRewardInfo;                                          // 0x0000(0x0138)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetStatRewardData
	 */
	struct UWBP_Sheik_Career_StatSlot_C_SetStatRewardData_Params
	{
	public:
		struct FIGTitleCardStat                                    StatReward;                                              // 0x0000(0x0138)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FSheikPlayerDataStat                                SheikPlayerDataStat;                                     // 0x0138(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsUnlocked;                                              // 0x0210(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OY4U[0x7];                                   // 0x0211(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FIGSeasonDefinition                                 CurrentSeason;                                           // 0x0218(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.GetButtonIndex
	 */
	struct UWBP_Sheik_Career_StatSlot_C_GetButtonIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetDisabled
	 */
	struct UWBP_Sheik_Career_StatSlot_C_SetDisabled_Params
	{
	public:
		bool                                                       IsDisabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.HandleSelect
	 */
	struct UWBP_Sheik_Career_StatSlot_C_HandleSelect_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CSMC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.Set Widget Focus
	 */
	struct UWBP_Sheik_Career_StatSlot_C_SetWidgetFocus_Params
	{
	public:
		bool                                                       SkipAnimations;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsFocused;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.ApplyContentOnPreConstruct
	 */
	struct UWBP_Sheik_Career_StatSlot_C_ApplyContentOnPreConstruct_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.PreConstruct
	 */
	struct UWBP_Sheik_Career_StatSlot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_Career_StatSlot_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.OnDisabled
	 */
	struct UWBP_Sheik_Career_StatSlot_C_OnDisabled_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.OnEnabled
	 */
	struct UWBP_Sheik_Career_StatSlot_C_OnEnabled_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.OnGainFocus
	 */
	struct UWBP_Sheik_Career_StatSlot_C_OnGainFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.OnLoseFocus
	 */
	struct UWBP_Sheik_Career_StatSlot_C_OnLoseFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.OnSelected
	 */
	struct UWBP_Sheik_Career_StatSlot_C_OnSelected_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.ExecuteUbergraph_WBP_Sheik_Career_StatSlot
	 */
	struct UWBP_Sheik_Career_StatSlot_C_ExecuteUbergraph_WBP_Sheik_Career_StatSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
