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
	 * Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.SetSeasonalTag
	 */
	struct UWBP_Sheik_Career_RewardSlot_C_SetSeasonalTag_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.SetRarity
	 */
	struct UWBP_Sheik_Career_RewardSlot_C_SetRarity_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.SetStatusVisuals
	 */
	struct UWBP_Sheik_Career_RewardSlot_C_SetStatusVisuals_Params
	{
	public:
		bool                                                       IsNew;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsEquipped;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsLocked;                                                // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.SetTimer
	 */
	struct UWBP_Sheik_Career_RewardSlot_C_SetTimer_Params
	{
	public:
		struct FIGSeasonDefinition                                 IGSeasonDefinition;                                      // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.GetRewardType
	 */
	struct UWBP_Sheik_Career_RewardSlot_C_GetRewardType_Params
	{
	public:
		ESheikTitleCardDataType                                    RewardType;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.GetRewardImage
	 */
	struct UWBP_Sheik_Career_RewardSlot_C_GetRewardImage_Params
	{
	public:
		ESheikTitleCardDataType                                    RewardType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y8LP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FIGTitleCardMedal                                   MedalData;                                               // 0x0008(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FIGTitleCardBackground                              BackgroundData;                                          // 0x0128(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FIGTitleCardBorder                                  BorderData;                                              // 0x0248(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.GetMedalReward
	 */
	struct UWBP_Sheik_Career_RewardSlot_C_GetMedalReward_Params
	{
	public:
		struct FIGTitleCardBase                                    Reward;                                                  // 0x0000(0x00C0)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.SetNewContent
	 */
	struct UWBP_Sheik_Career_RewardSlot_C_SetNewContent_Params
	{
	public:
		bool                                                       IsNew;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.GetRewardName
	 */
	struct UWBP_Sheik_Career_RewardSlot_C_GetRewardName_Params
	{
	public:
		class FText                                                OutNameText;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.GetRewardId
	 */
	struct UWBP_Sheik_Career_RewardSlot_C_GetRewardId_Params
	{
	public:
		class FName                                                WalletId;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.SetEquippedStyling
	 */
	struct UWBP_Sheik_Career_RewardSlot_C_SetEquippedStyling_Params
	{
	public:
		bool                                                       Equipped;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.GetReward
	 */
	struct UWBP_Sheik_Career_RewardSlot_C_GetReward_Params
	{
	public:
		struct FIGTitleCardBase                                    RewardInfo;                                              // 0x0000(0x00C0)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.SetRewardData
	 */
	struct UWBP_Sheik_Career_RewardSlot_C_SetRewardData_Params
	{
	public:
		struct FIGTitleCardBase                                    GenericReward;                                           // 0x0000(0x00C0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FIGTitleCardMedal                                   MedalReward;                                             // 0x00C0(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FIGTitleCardBackground                              BackgroundReward;                                        // 0x01E0(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FIGTitleCardBorder                                  BorderReward;                                            // 0x0300(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsUnlocked;                                              // 0x0420(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U5CQ[0x7];                                   // 0x0421(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FIGSeasonDefinition                                 CurrentSeason;                                           // 0x0428(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.SetRewardImage
	 */
	struct UWBP_Sheik_Career_RewardSlot_C_SetRewardImage_Params
	{
	public:
		class UObject*                                             InBrush;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.GetButtonIndex
	 */
	struct UWBP_Sheik_Career_RewardSlot_C_GetButtonIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.SetDisabled
	 */
	struct UWBP_Sheik_Career_RewardSlot_C_SetDisabled_Params
	{
	public:
		bool                                                       IsDisabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.HandleSelect
	 */
	struct UWBP_Sheik_Career_RewardSlot_C_HandleSelect_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ILDM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.Set Widget Focus
	 */
	struct UWBP_Sheik_Career_RewardSlot_C_SetWidgetFocus_Params
	{
	public:
		bool                                                       SkipAnimations;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsFocused;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.ApplyContentOnPreConstruct
	 */
	struct UWBP_Sheik_Career_RewardSlot_C_ApplyContentOnPreConstruct_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.PreConstruct
	 */
	struct UWBP_Sheik_Career_RewardSlot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_Career_RewardSlot_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.OnDisabled
	 */
	struct UWBP_Sheik_Career_RewardSlot_C_OnDisabled_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.OnEnabled
	 */
	struct UWBP_Sheik_Career_RewardSlot_C_OnEnabled_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.OnGainFocus
	 */
	struct UWBP_Sheik_Career_RewardSlot_C_OnGainFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.OnLoseFocus
	 */
	struct UWBP_Sheik_Career_RewardSlot_C_OnLoseFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.OnSelected
	 */
	struct UWBP_Sheik_Career_RewardSlot_C_OnSelected_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.ExecuteUbergraph_WBP_Sheik_Career_RewardSlot
	 */
	struct UWBP_Sheik_Career_RewardSlot_C_ExecuteUbergraph_WBP_Sheik_Career_RewardSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
