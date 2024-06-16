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
	 * 		Name   -> Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.IsCurrentPassCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCompleted                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_BattlePassProgression_C::IsCurrentPassCompleted(bool* IsCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.IsCurrentPassCompleted");
		
		UWBP_Sheik_BattlePassProgression_C_IsCurrentPassCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsCompleted != nullptr)
			*IsCompleted = params.IsCompleted;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.UpdatePassOwnership
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_BattlePassProgression_C::UpdatePassOwnership()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.UpdatePassOwnership");
		
		UWBP_Sheik_BattlePassProgression_C_UpdatePassOwnership_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.ProgressionSystem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikProgressionSystem*                     ProgressionSystem                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_BattlePassProgression_C::ProgressionSystem(class USheikProgressionSystem** ProgressionSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.ProgressionSystem");
		
		UWBP_Sheik_BattlePassProgression_C_ProgressionSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ProgressionSystem != nullptr)
			*ProgressionSystem = params.ProgressionSystem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.StoreSystem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikStoreSystem*                           StoreSystem                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_BattlePassProgression_C::StoreSystem(class USheikStoreSystem** StoreSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.StoreSystem");
		
		UWBP_Sheik_BattlePassProgression_C_StoreSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StoreSystem != nullptr)
			*StoreSystem = params.StoreSystem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.FinishLevelUpUpdate
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_BattlePassProgression_C::FinishLevelUpUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.FinishLevelUpUpdate");
		
		UWBP_Sheik_BattlePassProgression_C_FinishLevelUpUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.IsLevelUpdateInProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_BattlePassProgression_C::IsLevelUpdateInProgress(bool* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.IsLevelUpdateInProgress");
		
		UWBP_Sheik_BattlePassProgression_C_IsLevelUpdateInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.UpdateFanCount
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_BattlePassProgression_C::UpdateFanCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.UpdateFanCount");
		
		UWBP_Sheik_BattlePassProgression_C_UpdateFanCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.OnBattlePassLevelUpdateComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LeftoverFans                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Immediate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_BattlePassProgression_C::OnBattlePassLevelUpdateComplete(int32_t LeftoverFans, bool Immediate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.OnBattlePassLevelUpdateComplete");
		
		UWBP_Sheik_BattlePassProgression_C_OnBattlePassLevelUpdateComplete_Params params {};
		params.LeftoverFans = LeftoverFans;
		params.Immediate = Immediate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.FinishCurrentFanUpdate
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_BattlePassProgression_C::FinishCurrentFanUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.FinishCurrentFanUpdate");
		
		UWBP_Sheik_BattlePassProgression_C_FinishCurrentFanUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.IsFanUpdateInProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_BattlePassProgression_C::IsFanUpdateInProgress(bool* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.IsFanUpdateInProgress");
		
		UWBP_Sheik_BattlePassProgression_C_IsFanUpdateInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.UpdateCurrentLevel
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_BattlePassProgression_C::UpdateCurrentLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.UpdateCurrentLevel");
		
		UWBP_Sheik_BattlePassProgression_C_UpdateCurrentLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.SetNextTierReward
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_BattlePassProgression_C::SetNextTierReward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.SetNextTierReward");
		
		UWBP_Sheik_BattlePassProgression_C_SetNextTierReward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.UpdateBattlePassCompleteVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBattlePassTier                             LastBattlePassTier                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_BattlePassProgression_C::UpdateBattlePassCompleteVisuals(const struct FBattlePassTier& LastBattlePassTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.UpdateBattlePassCompleteVisuals");
		
		UWBP_Sheik_BattlePassProgression_C_UpdateBattlePassCompleteVisuals_Params params {};
		params.LastBattlePassTier = LastBattlePassTier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.SetLockedRewardIconVisibility
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_BattlePassProgression_C::SetLockedRewardIconVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.SetLockedRewardIconVisibility");
		
		UWBP_Sheik_BattlePassProgression_C_SetLockedRewardIconVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.OnXPBoosterDataChangeOccurred_cb
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_BattlePassProgression_C::OnXPBoosterDataChangeOccurred_cb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.OnXPBoosterDataChangeOccurred_cb");
		
		UWBP_Sheik_BattlePassProgression_C_OnXPBoosterDataChangeOccurred_cb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.OnPurchaseBattlePassComplete_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCozmoPurchaseSuccessful                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSheikError                                 CozmoPurchaseError                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               bTierRewardsRedeemedSuccessful                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSheikError                                 RedeemError                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		TArray<struct FBattlePassTier>                     TiersRewarded                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_BattlePassProgression_C::OnPurchaseBattlePassComplete_cb(bool bCozmoPurchaseSuccessful, struct FSheikError* CozmoPurchaseError, bool bTierRewardsRedeemedSuccessful, struct FSheikError* RedeemError, TArray<struct FBattlePassTier> TiersRewarded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.OnPurchaseBattlePassComplete_cb");
		
		UWBP_Sheik_BattlePassProgression_C_OnPurchaseBattlePassComplete_cb_Params params {};
		params.bCozmoPurchaseSuccessful = bCozmoPurchaseSuccessful;
		params.bTierRewardsRedeemedSuccessful = bTierRewardsRedeemedSuccessful;
		params.TiersRewarded = TiersRewarded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CozmoPurchaseError != nullptr)
			*CozmoPurchaseError = params.CozmoPurchaseError;
		if (RedeemError != nullptr)
			*RedeemError = params.RedeemError;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.UpdateBattlePassProgressBar
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_BattlePassProgression_C::UpdateBattlePassProgressBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.UpdateBattlePassProgressBar");
		
		UWBP_Sheik_BattlePassProgression_C_UpdateBattlePassProgressBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBattlePassTier                             Tier                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_BattlePassProgression_C::SetData(const struct FBattlePassTier& Tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.SetData");
		
		UWBP_Sheik_BattlePassProgression_C_SetData_Params params {};
		params.Tier = Tier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.CheckBattlePassIsActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsActive                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_BattlePassProgression_C::CheckBattlePassIsActive(bool* bIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.CheckBattlePassIsActive");
		
		UWBP_Sheik_BattlePassProgression_C_CheckBattlePassIsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsActive != nullptr)
			*bIsActive = params.bIsActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.Initialize UI
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_BattlePassProgression_C::InitializeUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.Initialize UI");
		
		UWBP_Sheik_BattlePassProgression_C_InitializeUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.LoadIcon
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_BattlePassProgression_C::LoadIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.LoadIcon");
		
		UWBP_Sheik_BattlePassProgression_C_LoadIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.OnBattlePassFansIncreasedOnlyOccured
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBattlePassTier                             CurrentBattlePassTier                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            OldFanCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewFansAdded                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EReasonFansAwarded                                 ReasonFansAwarded                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bShouldShowFanAnnouncementDuringMatch                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_BattlePassProgression_C::OnBattlePassFansIncreasedOnlyOccured(const struct FBattlePassTier& CurrentBattlePassTier, int32_t OldFanCount, int32_t NewFansAdded, EReasonFansAwarded ReasonFansAwarded, bool bShouldShowFanAnnouncementDuringMatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.OnBattlePassFansIncreasedOnlyOccured");
		
		UWBP_Sheik_BattlePassProgression_C_OnBattlePassFansIncreasedOnlyOccured_Params params {};
		params.CurrentBattlePassTier = CurrentBattlePassTier;
		params.OldFanCount = OldFanCount;
		params.NewFansAdded = NewFansAdded;
		params.ReasonFansAwarded = ReasonFansAwarded;
		params.bShouldShowFanAnnouncementDuringMatch = bShouldShowFanAnnouncementDuringMatch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_BattlePassProgression_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.ConstructOnlyOnce");
		
		UWBP_Sheik_BattlePassProgression_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.OnLevelUpOccurred
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FBattlePassTier>                     OldBattlePassTiers                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FBattlePassTier                             CurrentTier                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FBattlePassTier                             NextTier                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            OldFanCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TotalNewFans                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            LeftoverFansForCurrentTier                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EReasonFansAwarded                                 ReasonFansAwarded                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bShouldShowFanAnnouncementDuringMatch                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_BattlePassProgression_C::OnLevelUpOccurred(TArray<struct FBattlePassTier> OldBattlePassTiers, const struct FBattlePassTier& CurrentTier, const struct FBattlePassTier& NextTier, int32_t OldFanCount, int32_t TotalNewFans, int32_t LeftoverFansForCurrentTier, EReasonFansAwarded ReasonFansAwarded, bool bShouldShowFanAnnouncementDuringMatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.OnLevelUpOccurred");
		
		UWBP_Sheik_BattlePassProgression_C_OnLevelUpOccurred_Params params {};
		params.OldBattlePassTiers = OldBattlePassTiers;
		params.CurrentTier = CurrentTier;
		params.NextTier = NextTier;
		params.OldFanCount = OldFanCount;
		params.TotalNewFans = TotalNewFans;
		params.LeftoverFansForCurrentTier = LeftoverFansForCurrentTier;
		params.ReasonFansAwarded = ReasonFansAwarded;
		params.bShouldShowFanAnnouncementDuringMatch = bShouldShowFanAnnouncementDuringMatch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.OnBattlePassTiersPurchased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCozmoPurchaseSuccessful                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSheikError                                 CozmoPurchaseError                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               bTierRewardsRedeemedSuccessful                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSheikError                                 RedeemError                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		TArray<struct FBattlePassTier>                     TiersRewarded                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_BattlePassProgression_C::OnBattlePassTiersPurchased(bool bCozmoPurchaseSuccessful, const struct FSheikError& CozmoPurchaseError, bool bTierRewardsRedeemedSuccessful, const struct FSheikError& RedeemError, TArray<struct FBattlePassTier> TiersRewarded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.OnBattlePassTiersPurchased");
		
		UWBP_Sheik_BattlePassProgression_C_OnBattlePassTiersPurchased_Params params {};
		params.bCozmoPurchaseSuccessful = bCozmoPurchaseSuccessful;
		params.CozmoPurchaseError = CozmoPurchaseError;
		params.bTierRewardsRedeemedSuccessful = bTierRewardsRedeemedSuccessful;
		params.RedeemError = RedeemError;
		params.TiersRewarded = TiersRewarded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_BattlePassProgression_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.OnInitialized");
		
		UWBP_Sheik_BattlePassProgression_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.OnEntitlementsOwnedRefreshed
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_BattlePassProgression_C::OnEntitlementsOwnedRefreshed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.OnEntitlementsOwnedRefreshed");
		
		UWBP_Sheik_BattlePassProgression_C_OnEntitlementsOwnedRefreshed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.OnImageLoad
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_BattlePassProgression_C::OnImageLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.OnImageLoad");
		
		UWBP_Sheik_BattlePassProgression_C_OnImageLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.ExecuteUbergraph_WBP_Sheik_BattlePassProgression
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_BattlePassProgression_C::ExecuteUbergraph_WBP_Sheik_BattlePassProgression(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C.ExecuteUbergraph_WBP_Sheik_BattlePassProgression");
		
		UWBP_Sheik_BattlePassProgression_C_ExecuteUbergraph_WBP_Sheik_BattlePassProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_BattlePassProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_BattlePassProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_BattlePassProgression.WBP_Sheik_BattlePassProgression_C");
		return ptr;
	}

}


