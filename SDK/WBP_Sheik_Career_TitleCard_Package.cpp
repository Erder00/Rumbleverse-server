/**
 * Name: Rumbleverse
 * Version: Latest
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetTitleCardLoadingVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLoading                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Career_TitleCard_C::SetTitleCardLoadingVisuals(bool IsLoading)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetTitleCardLoadingVisuals");
		
		UWBP_Sheik_Career_TitleCard_C_SetTitleCardLoadingVisuals_Params params {};
		params.IsLoading = IsLoading;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetStatsLoadingVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLoading                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Career_TitleCard_C::SetStatsLoadingVisuals(bool IsLoading)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetStatsLoadingVisuals");
		
		UWBP_Sheik_Career_TitleCard_C_SetStatsLoadingVisuals_Params params {};
		params.IsLoading = IsLoading;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SlotContainerInit
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_TitleCard_C::SlotContainerInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SlotContainerInit");
		
		UWBP_Sheik_Career_TitleCard_C_SlotContainerInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetEOM_PlayerPlatformIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikPlayerStateCommon*                     PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_TitleCard_C::SetEOM_PlayerPlatformIcon(class ASheikPlayerStateCommon* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetEOM_PlayerPlatformIcon");
		
		UWBP_Sheik_Career_TitleCard_C_SetEOM_PlayerPlatformIcon_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.UnfocusContainers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Focus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Career_TitleCard_C::UnfocusContainers(bool Focus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.UnfocusContainers");
		
		UWBP_Sheik_Career_TitleCard_C_UnfocusContainers_Params params {};
		params.Focus = Focus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.GetSelectedMedalInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_TitleCard_C::GetSelectedMedalInfo(ETitleCardStackOrder InRewardSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.GetSelectedMedalInfo");
		
		UWBP_Sheik_Career_TitleCard_C_GetSelectedMedalInfo_Params params {};
		params.InRewardSlot = InRewardSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.FrontendLoadTitleCard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UserName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FTitleCardLoadout                           TitleCardLoadout                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Career_TitleCard_C::FrontendLoadTitleCard(const class FString& UserName, const struct FTitleCardLoadout& TitleCardLoadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.FrontendLoadTitleCard");
		
		UWBP_Sheik_Career_TitleCard_C_FrontendLoadTitleCard_Params params {};
		params.UserName = UserName;
		params.TitleCardLoadout = TitleCardLoadout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetIsDead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDead                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Career_TitleCard_C::SetIsDead(bool IsDead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetIsDead");
		
		UWBP_Sheik_Career_TitleCard_C_SetIsDead_Params params {};
		params.IsDead = IsDead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetBackgroundFromRenderTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      InRenderTarget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_TitleCard_C::SetBackgroundFromRenderTarget(class UTextureRenderTarget2D* InRenderTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetBackgroundFromRenderTarget");
		
		UWBP_Sheik_Career_TitleCard_C_SetBackgroundFromRenderTarget_Params params {};
		params.InRenderTarget = InRenderTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.LoadCurrentTitleCard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTitleCardLoadout                           TitleCardLoadout                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Career_TitleCard_C::LoadCurrentTitleCard(const struct FTitleCardLoadout& TitleCardLoadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.LoadCurrentTitleCard");
		
		UWBP_Sheik_Career_TitleCard_C_LoadCurrentTitleCard_Params params {};
		params.TitleCardLoadout = TitleCardLoadout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.FindCaptureActor
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_TitleCard_C::FindCaptureActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.FindCaptureActor");
		
		UWBP_Sheik_Career_TitleCard_C_FindCaptureActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.MakeSlateBrushFromVariableImageData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGVariableImageData                        InImageData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FSlateBrush                                 OutBrush                                                   (Parm, OutParm)
	 */
	void UWBP_Sheik_Career_TitleCard_C::MakeSlateBrushFromVariableImageData(const struct FIGVariableImageData& InImageData, struct FSlateBrush* OutBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.MakeSlateBrushFromVariableImageData");
		
		UWBP_Sheik_Career_TitleCard_C_MakeSlateBrushFromVariableImageData_Params params {};
		params.InImageData = InImageData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBrush != nullptr)
			*OutBrush = params.OutBrush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.CaptureCharacter
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_TitleCard_C::CaptureCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.CaptureCharacter");
		
		UWBP_Sheik_Career_TitleCard_C_CaptureCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.ResetCurrentRewardSlot
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_TitleCard_C::ResetCurrentRewardSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.ResetCurrentRewardSlot");
		
		UWBP_Sheik_Career_TitleCard_C_ResetCurrentRewardSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.BindNewRewardToStatSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FIGTitleCardStat                            InStatInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Career_TitleCard_C::BindNewRewardToStatSlot(ETitleCardStackOrder InRewardSlot, const struct FIGTitleCardStat& InStatInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.BindNewRewardToStatSlot");
		
		UWBP_Sheik_Career_TitleCard_C_BindNewRewardToStatSlot_Params params {};
		params.InRewardSlot = InRewardSlot;
		params.InStatInfo = InStatInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.BindNewRewardToMedalSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FIGTitleCardMedal                           InMedalSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Career_TitleCard_C::BindNewRewardToMedalSlot(ETitleCardStackOrder InRewardSlot, const struct FIGTitleCardMedal& InMedalSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.BindNewRewardToMedalSlot");
		
		UWBP_Sheik_Career_TitleCard_C_BindNewRewardToMedalSlot_Params params {};
		params.InRewardSlot = InRewardSlot;
		params.InMedalSlot = InMedalSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.Get Selected Stat Info
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGTitleCardStat                            StatInfo                                                   (Parm, OutParm)
	 */
	void UWBP_Sheik_Career_TitleCard_C::GetSelectedStatInfo(struct FIGTitleCardStat* StatInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.Get Selected Stat Info");
		
		UWBP_Sheik_Career_TitleCard_C_GetSelectedStatInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatInfo != nullptr)
			*StatInfo = params.StatInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.DeactivateCurrentRewardContainer
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_TitleCard_C::DeactivateCurrentRewardContainer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.DeactivateCurrentRewardContainer");
		
		UWBP_Sheik_Career_TitleCard_C_DeactivateCurrentRewardContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.ActivateCurrentRewardContainer
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_TitleCard_C::ActivateCurrentRewardContainer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.ActivateCurrentRewardContainer");
		
		UWBP_Sheik_Career_TitleCard_C_ActivateCurrentRewardContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetBorder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGTitleCardBorder                          BorderReward                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Career_TitleCard_C::SetBorder(const struct FIGTitleCardBorder& BorderReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetBorder");
		
		UWBP_Sheik_Career_TitleCard_C_SetBorder_Params params {};
		params.BorderReward = BorderReward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetPlayerTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGTitleCardPlayerTitle                     TitleInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Career_TitleCard_C::SetPlayerTitle(const struct FIGTitleCardPlayerTitle& TitleInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetPlayerTitle");
		
		UWBP_Sheik_Career_TitleCard_C_SetPlayerTitle_Params params {};
		params.TitleInfo = TitleInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetUsername
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_TitleCard_C::SetUsername(const class FString& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetUsername");
		
		UWBP_Sheik_Career_TitleCard_C_SetUsername_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.LoadMedals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FIGTitleCardMedal>                   InMedals                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_Career_TitleCard_C::LoadMedals(TArray<struct FIGTitleCardMedal>* InMedals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.LoadMedals");
		
		UWBP_Sheik_Career_TitleCard_C_LoadMedals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InMedals != nullptr)
			*InMedals = params.InMedals;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.LoadStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FIGTitleCardStat>                    InStats                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_Career_TitleCard_C::LoadStats(TArray<struct FIGTitleCardStat>* InStats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.LoadStats");
		
		UWBP_Sheik_Career_TitleCard_C_LoadStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InStats != nullptr)
			*InStats = params.InStats;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.GetNavigableWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UIGUI_WidgetBase*>                    NavigableWidgets                                           (Parm, OutParm, ContainsInstancedReference)
	 */
	void UWBP_Sheik_Career_TitleCard_C::GetNavigableWidgets(TArray<class UIGUI_WidgetBase*>* NavigableWidgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.GetNavigableWidgets");
		
		UWBP_Sheik_Career_TitleCard_C_GetNavigableWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NavigableWidgets != nullptr)
			*NavigableWidgets = params.NavigableWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.BndEvt__MedalSlotContainer_K2Node_ComponentBoundEvent_6_BindRewardToMedalSlot__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_TitleCard_C::BndEvt__MedalSlotContainer_K2Node_ComponentBoundEvent_6_BindRewardToMedalSlot__DelegateSignature(ETitleCardStackOrder InRewardSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.BndEvt__MedalSlotContainer_K2Node_ComponentBoundEvent_6_BindRewardToMedalSlot__DelegateSignature");
		
		UWBP_Sheik_Career_TitleCard_C_BndEvt__MedalSlotContainer_K2Node_ComponentBoundEvent_6_BindRewardToMedalSlot__DelegateSignature_Params params {};
		params.InRewardSlot = InRewardSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetBackgroundVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               BackgroundVisible                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Career_TitleCard_C::SetBackgroundVisible(bool BackgroundVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetBackgroundVisible");
		
		UWBP_Sheik_Career_TitleCard_C_SetBackgroundVisible_Params params {};
		params.BackgroundVisible = BackgroundVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetCurrentTitleCard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTitleCardLoadout                           TitleCardLoadout                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      UserName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		TArray<float>                                      StatArray                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bPlayerIsDead                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Career_TitleCard_C::SetCurrentTitleCard(const struct FTitleCardLoadout& TitleCardLoadout, const class FString& UserName, TArray<float> StatArray, bool bPlayerIsDead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetCurrentTitleCard");
		
		UWBP_Sheik_Career_TitleCard_C_SetCurrentTitleCard_Params params {};
		params.TitleCardLoadout = TitleCardLoadout;
		params.UserName = UserName;
		params.StatArray = StatArray;
		params.bPlayerIsDead = bPlayerIsDead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_TitleCard_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.ConstructOnlyOnce");
		
		UWBP_Sheik_Career_TitleCard_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.HandleOnLoadoutSoftPointersLoadSuccessful
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_TitleCard_C::HandleOnLoadoutSoftPointersLoadSuccessful()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.HandleOnLoadoutSoftPointersLoadSuccessful");
		
		UWBP_Sheik_Career_TitleCard_C_HandleOnLoadoutSoftPointersLoadSuccessful_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.OnDeactivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_TitleCard_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.OnDeactivated");
		
		UWBP_Sheik_Career_TitleCard_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.BndEvt__StatSlotContainer_K2Node_ComponentBoundEvent_2_UpdateCurrentStatSlot__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_TitleCard_C::BndEvt__StatSlotContainer_K2Node_ComponentBoundEvent_2_UpdateCurrentStatSlot__DelegateSignature(ETitleCardStackOrder InRewardSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.BndEvt__StatSlotContainer_K2Node_ComponentBoundEvent_2_UpdateCurrentStatSlot__DelegateSignature");
		
		UWBP_Sheik_Career_TitleCard_C_BndEvt__StatSlotContainer_K2Node_ComponentBoundEvent_2_UpdateCurrentStatSlot__DelegateSignature_Params params {};
		params.InRewardSlot = InRewardSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.BndEvt__StatSlotContainer_K2Node_ComponentBoundEvent_3_BindRewardToStatSlot__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_TitleCard_C::BndEvt__StatSlotContainer_K2Node_ComponentBoundEvent_3_BindRewardToStatSlot__DelegateSignature(ETitleCardStackOrder InRewardSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.BndEvt__StatSlotContainer_K2Node_ComponentBoundEvent_3_BindRewardToStatSlot__DelegateSignature");
		
		UWBP_Sheik_Career_TitleCard_C_BndEvt__StatSlotContainer_K2Node_ComponentBoundEvent_3_BindRewardToStatSlot__DelegateSignature_Params params {};
		params.InRewardSlot = InRewardSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.OnActivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_TitleCard_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.OnActivated");
		
		UWBP_Sheik_Career_TitleCard_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.BndEvt__MedalSlotContainer_K2Node_ComponentBoundEvent_1_UpdateCurrentMedalSlot__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_TitleCard_C::BndEvt__MedalSlotContainer_K2Node_ComponentBoundEvent_1_UpdateCurrentMedalSlot__DelegateSignature(ETitleCardStackOrder InRewardSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.BndEvt__MedalSlotContainer_K2Node_ComponentBoundEvent_1_UpdateCurrentMedalSlot__DelegateSignature");
		
		UWBP_Sheik_Career_TitleCard_C_BndEvt__MedalSlotContainer_K2Node_ComponentBoundEvent_1_UpdateCurrentMedalSlot__DelegateSignature_Params params {};
		params.InRewardSlot = InRewardSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.ExecuteUbergraph_WBP_Sheik_Career_TitleCard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_TitleCard_C::ExecuteUbergraph_WBP_Sheik_Career_TitleCard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.ExecuteUbergraph_WBP_Sheik_Career_TitleCard");
		
		UWBP_Sheik_Career_TitleCard_C_ExecuteUbergraph_WBP_Sheik_Career_TitleCard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetNewStatToSlot__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               RewardSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FIGTitleCardStat                            NewStat                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Career_TitleCard_C::SetNewStatToSlot__DelegateSignature(ETitleCardStackOrder RewardSlot, const struct FIGTitleCardStat& NewStat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetNewStatToSlot__DelegateSignature");
		
		UWBP_Sheik_Career_TitleCard_C_SetNewStatToSlot__DelegateSignature_Params params {};
		params.RewardSlot = RewardSlot;
		params.NewStat = NewStat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetNewMedalToSlot__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               RewardSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FIGTitleCardMedal                           NewMedal                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Career_TitleCard_C::SetNewMedalToSlot__DelegateSignature(ETitleCardStackOrder RewardSlot, const struct FIGTitleCardMedal& NewMedal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SetNewMedalToSlot__DelegateSignature");
		
		UWBP_Sheik_Career_TitleCard_C_SetNewMedalToSlot__DelegateSignature_Params params {};
		params.RewardSlot = RewardSlot;
		params.NewMedal = NewMedal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.TitleCardDataReady__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTitleCardLoadout                           Loadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UWBP_Sheik_Career_TitleCard_C*               TitleCardRef                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_TitleCard_C::TitleCardDataReady__DelegateSignature(const struct FTitleCardLoadout& Loadout, class UWBP_Sheik_Career_TitleCard_C* TitleCardRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.TitleCardDataReady__DelegateSignature");
		
		UWBP_Sheik_Career_TitleCard_C_TitleCardDataReady__DelegateSignature_Params params {};
		params.Loadout = Loadout;
		params.TitleCardRef = TitleCardRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SwitchBackToRewardGrid__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikTitleCardDataType                            RewardType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_TitleCard_C::SwitchBackToRewardGrid__DelegateSignature(ESheikTitleCardDataType RewardType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C.SwitchBackToRewardGrid__DelegateSignature");
		
		UWBP_Sheik_Career_TitleCard_C_SwitchBackToRewardGrid__DelegateSignature_Params params {};
		params.RewardType = RewardType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Career_TitleCard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Career_TitleCard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C");
		return ptr;
	}

}


