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
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetTitleCardLoadingVisuals
	 */
	struct UWBP_Sheik_Career_TitleCard_C_SetTitleCardLoadingVisuals_Params
	{
	public:
		bool                                                       IsLoading;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetStatsLoadingVisuals
	 */
	struct UWBP_Sheik_Career_TitleCard_C_SetStatsLoadingVisuals_Params
	{
	public:
		bool                                                       IsLoading;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SlotContainerInit
	 */
	struct UWBP_Sheik_Career_TitleCard_C_SlotContainerInit_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetEOM_PlayerPlatformIcon
	 */
	struct UWBP_Sheik_Career_TitleCard_C_SetEOM_PlayerPlatformIcon_Params
	{
	public:
		class ASheikPlayerStateCommon*                             PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.UnfocusContainers
	 */
	struct UWBP_Sheik_Career_TitleCard_C_UnfocusContainers_Params
	{
	public:
		bool                                                       Focus;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MAYM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.GetSelectedMedalInfo
	 */
	struct UWBP_Sheik_Career_TitleCard_C_GetSelectedMedalInfo_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.FrontendLoadTitleCard
	 */
	struct UWBP_Sheik_Career_TitleCard_C_FrontendLoadTitleCard_Params
	{
	public:
		class FString                                              UserName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FTitleCardLoadout                                   TitleCardLoadout;                                        // 0x0010(0x04B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetIsDead
	 */
	struct UWBP_Sheik_Career_TitleCard_C_SetIsDead_Params
	{
	public:
		bool                                                       IsDead;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetBackgroundFromRenderTarget
	 */
	struct UWBP_Sheik_Career_TitleCard_C_SetBackgroundFromRenderTarget_Params
	{
	public:
		class UTextureRenderTarget2D*                              InRenderTarget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.LoadCurrentTitleCard
	 */
	struct UWBP_Sheik_Career_TitleCard_C_LoadCurrentTitleCard_Params
	{
	public:
		struct FTitleCardLoadout                                   TitleCardLoadout;                                        // 0x0000(0x04B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.FindCaptureActor
	 */
	struct UWBP_Sheik_Career_TitleCard_C_FindCaptureActor_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.MakeSlateBrushFromVariableImageData
	 */
	struct UWBP_Sheik_Career_TitleCard_C_MakeSlateBrushFromVariableImageData_Params
	{
	public:
		struct FIGVariableImageData                                InImageData;                                             // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FSlateBrush                                         OutBrush;                                                // 0x0058(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.CaptureCharacter
	 */
	struct UWBP_Sheik_Career_TitleCard_C_CaptureCharacter_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.ResetCurrentRewardSlot
	 */
	struct UWBP_Sheik_Career_TitleCard_C_ResetCurrentRewardSlot_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.BindNewRewardToStatSlot
	 */
	struct UWBP_Sheik_Career_TitleCard_C_BindNewRewardToStatSlot_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OH4K[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FIGTitleCardStat                                    InStatInfo;                                              // 0x0008(0x0138)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.BindNewRewardToMedalSlot
	 */
	struct UWBP_Sheik_Career_TitleCard_C_BindNewRewardToMedalSlot_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V9V6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FIGTitleCardMedal                                   InMedalSlot;                                             // 0x0008(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.Get Selected Stat Info
	 */
	struct UWBP_Sheik_Career_TitleCard_C_GetSelectedStatInfo_Params
	{
	public:
		struct FIGTitleCardStat                                    StatInfo;                                                // 0x0000(0x0138)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.DeactivateCurrentRewardContainer
	 */
	struct UWBP_Sheik_Career_TitleCard_C_DeactivateCurrentRewardContainer_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.ActivateCurrentRewardContainer
	 */
	struct UWBP_Sheik_Career_TitleCard_C_ActivateCurrentRewardContainer_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetBorder
	 */
	struct UWBP_Sheik_Career_TitleCard_C_SetBorder_Params
	{
	public:
		struct FIGTitleCardBorder                                  BorderReward;                                            // 0x0000(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetPlayerTitle
	 */
	struct UWBP_Sheik_Career_TitleCard_C_SetPlayerTitle_Params
	{
	public:
		struct FIGTitleCardPlayerTitle                             TitleInfo;                                               // 0x0000(0x0100)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetUsername
	 */
	struct UWBP_Sheik_Career_TitleCard_C_SetUsername_Params
	{
	public:
		class FString                                              InText;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.LoadMedals
	 */
	struct UWBP_Sheik_Career_TitleCard_C_LoadMedals_Params
	{
	public:
		TArray<struct FIGTitleCardMedal>                           InMedals;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.LoadStats
	 */
	struct UWBP_Sheik_Career_TitleCard_C_LoadStats_Params
	{
	public:
		TArray<struct FIGTitleCardStat>                            InStats;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.GetNavigableWidgets
	 */
	struct UWBP_Sheik_Career_TitleCard_C_GetNavigableWidgets_Params
	{
	public:
		TArray<class UIGUI_WidgetBase*>                            NavigableWidgets;                                        // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.BndEvt__MedalSlotContainer_K2Node_ComponentBoundEvent_6_BindRewardToMedalSlot__DelegateSignature
	 */
	struct UWBP_Sheik_Career_TitleCard_C_BndEvt__MedalSlotContainer_K2Node_ComponentBoundEvent_6_BindRewardToMedalSlot__DelegateSignature_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetBackgroundVisible
	 */
	struct UWBP_Sheik_Career_TitleCard_C_SetBackgroundVisible_Params
	{
	public:
		bool                                                       BackgroundVisible;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetCurrentTitleCard
	 */
	struct UWBP_Sheik_Career_TitleCard_C_SetCurrentTitleCard_Params
	{
	public:
		struct FTitleCardLoadout                                   TitleCardLoadout;                                        // 0x0000(0x04B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              UserName;                                                // 0x04B0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		TArray<float>                                              StatArray;                                               // 0x04C0(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bPlayerIsDead;                                           // 0x04D0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_Career_TitleCard_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.HandleOnLoadoutSoftPointersLoadSuccessful
	 */
	struct UWBP_Sheik_Career_TitleCard_C_HandleOnLoadoutSoftPointersLoadSuccessful_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.OnDeactivated
	 */
	struct UWBP_Sheik_Career_TitleCard_C_OnDeactivated_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.BndEvt__StatSlotContainer_K2Node_ComponentBoundEvent_2_UpdateCurrentStatSlot__DelegateSignature
	 */
	struct UWBP_Sheik_Career_TitleCard_C_BndEvt__StatSlotContainer_K2Node_ComponentBoundEvent_2_UpdateCurrentStatSlot__DelegateSignature_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.BndEvt__StatSlotContainer_K2Node_ComponentBoundEvent_3_BindRewardToStatSlot__DelegateSignature
	 */
	struct UWBP_Sheik_Career_TitleCard_C_BndEvt__StatSlotContainer_K2Node_ComponentBoundEvent_3_BindRewardToStatSlot__DelegateSignature_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.OnActivated
	 */
	struct UWBP_Sheik_Career_TitleCard_C_OnActivated_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.BndEvt__MedalSlotContainer_K2Node_ComponentBoundEvent_1_UpdateCurrentMedalSlot__DelegateSignature
	 */
	struct UWBP_Sheik_Career_TitleCard_C_BndEvt__MedalSlotContainer_K2Node_ComponentBoundEvent_1_UpdateCurrentMedalSlot__DelegateSignature_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.ExecuteUbergraph_WBP_Sheik_Career_TitleCard
	 */
	struct UWBP_Sheik_Career_TitleCard_C_ExecuteUbergraph_WBP_Sheik_Career_TitleCard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_709Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetNewStatToSlot__DelegateSignature
	 */
	struct UWBP_Sheik_Career_TitleCard_C_SetNewStatToSlot__DelegateSignature_Params
	{
	public:
		ETitleCardStackOrder                                       RewardSlot;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4Z49[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FIGTitleCardStat                                    NewStat;                                                 // 0x0008(0x0138)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetNewMedalToSlot__DelegateSignature
	 */
	struct UWBP_Sheik_Career_TitleCard_C_SetNewMedalToSlot__DelegateSignature_Params
	{
	public:
		ETitleCardStackOrder                                       RewardSlot;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SCRV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FIGTitleCardMedal                                   NewMedal;                                                // 0x0008(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.TitleCardDataReady__DelegateSignature
	 */
	struct UWBP_Sheik_Career_TitleCard_C_TitleCardDataReady__DelegateSignature_Params
	{
	public:
		struct FTitleCardLoadout                                   Loadout;                                                 // 0x0000(0x04B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UWBP_Sheik_Career_TitleCard_C*                       TitleCardRef;                                            // 0x04B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SwitchBackToRewardGrid__DelegateSignature
	 */
	struct UWBP_Sheik_Career_TitleCard_C_SwitchBackToRewardGrid__DelegateSignature_Params
	{
	public:
		ESheikTitleCardDataType                                    RewardType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
