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
	 * 		Name   -> Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.SetSeasonalTag
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_RewardSlot_C::SetSeasonalTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.SetSeasonalTag");
		
		UWBP_Sheik_Career_RewardSlot_C_SetSeasonalTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.SetRarity
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_RewardSlot_C::SetRarity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.SetRarity");
		
		UWBP_Sheik_Career_RewardSlot_C_SetRarity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.SetStatusVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsNew                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsEquipped                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsLocked                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Career_RewardSlot_C::SetStatusVisuals(bool IsNew, bool IsEquipped, bool IsLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.SetStatusVisuals");
		
		UWBP_Sheik_Career_RewardSlot_C_SetStatusVisuals_Params params {};
		params.IsNew = IsNew;
		params.IsEquipped = IsEquipped;
		params.IsLocked = IsLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.SetTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGSeasonDefinition                         IGSeasonDefinition                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_Career_RewardSlot_C::SetTimer(const struct FIGSeasonDefinition& IGSeasonDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.SetTimer");
		
		UWBP_Sheik_Career_RewardSlot_C_SetTimer_Params params {};
		params.IGSeasonDefinition = IGSeasonDefinition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.GetRewardType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikTitleCardDataType                            RewardType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_RewardSlot_C::GetRewardType(ESheikTitleCardDataType* RewardType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.GetRewardType");
		
		UWBP_Sheik_Career_RewardSlot_C_GetRewardType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RewardType != nullptr)
			*RewardType = params.RewardType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.GetRewardImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikTitleCardDataType                            RewardType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FIGTitleCardMedal                           MedalData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FIGTitleCardBackground                      BackgroundData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FIGTitleCardBorder                          BorderData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Career_RewardSlot_C::GetRewardImage(ESheikTitleCardDataType RewardType, const struct FIGTitleCardMedal& MedalData, const struct FIGTitleCardBackground& BackgroundData, const struct FIGTitleCardBorder& BorderData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.GetRewardImage");
		
		UWBP_Sheik_Career_RewardSlot_C_GetRewardImage_Params params {};
		params.RewardType = RewardType;
		params.MedalData = MedalData;
		params.BackgroundData = BackgroundData;
		params.BorderData = BorderData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.GetMedalReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGTitleCardBase                            Reward                                                     (Parm, OutParm)
	 */
	void UWBP_Sheik_Career_RewardSlot_C::GetMedalReward(struct FIGTitleCardBase* Reward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.GetMedalReward");
		
		UWBP_Sheik_Career_RewardSlot_C_GetMedalReward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reward != nullptr)
			*Reward = params.Reward;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.SetNewContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsNew                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Career_RewardSlot_C::SetNewContent(bool IsNew)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.SetNewContent");
		
		UWBP_Sheik_Career_RewardSlot_C_SetNewContent_Params params {};
		params.IsNew = IsNew;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.GetRewardName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        OutNameText                                                (Parm, OutParm)
	 */
	void UWBP_Sheik_Career_RewardSlot_C::GetRewardName(class FText* OutNameText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.GetRewardName");
		
		UWBP_Sheik_Career_RewardSlot_C_GetRewardName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNameText != nullptr)
			*OutNameText = params.OutNameText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.GetRewardId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WalletId                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_RewardSlot_C::GetRewardId(class FName* WalletId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.GetRewardId");
		
		UWBP_Sheik_Career_RewardSlot_C_GetRewardId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WalletId != nullptr)
			*WalletId = params.WalletId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.SetEquippedStyling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Equipped                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Career_RewardSlot_C::SetEquippedStyling(bool Equipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.SetEquippedStyling");
		
		UWBP_Sheik_Career_RewardSlot_C_SetEquippedStyling_Params params {};
		params.Equipped = Equipped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.GetReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGTitleCardBase                            RewardInfo                                                 (Parm, OutParm)
	 */
	void UWBP_Sheik_Career_RewardSlot_C::GetReward(struct FIGTitleCardBase* RewardInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.GetReward");
		
		UWBP_Sheik_Career_RewardSlot_C_GetReward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RewardInfo != nullptr)
			*RewardInfo = params.RewardInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.SetRewardData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGTitleCardBase                            GenericReward                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FIGTitleCardMedal                           MedalReward                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FIGTitleCardBackground                      BackgroundReward                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FIGTitleCardBorder                          BorderReward                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsUnlocked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FIGSeasonDefinition                         CurrentSeason                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Career_RewardSlot_C::SetRewardData(const struct FIGTitleCardBase& GenericReward, const struct FIGTitleCardMedal& MedalReward, const struct FIGTitleCardBackground& BackgroundReward, const struct FIGTitleCardBorder& BorderReward, bool IsUnlocked, const struct FIGSeasonDefinition& CurrentSeason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.SetRewardData");
		
		UWBP_Sheik_Career_RewardSlot_C_SetRewardData_Params params {};
		params.GenericReward = GenericReward;
		params.MedalReward = MedalReward;
		params.BackgroundReward = BackgroundReward;
		params.BorderReward = BorderReward;
		params.IsUnlocked = IsUnlocked;
		params.CurrentSeason = CurrentSeason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.SetRewardImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InBrush                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_RewardSlot_C::SetRewardImage(class UObject* InBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.SetRewardImage");
		
		UWBP_Sheik_Career_RewardSlot_C_SetRewardImage_Params params {};
		params.InBrush = InBrush;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.GetButtonIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_RewardSlot_C::GetButtonIndex(int32_t* index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.GetButtonIndex");
		
		UWBP_Sheik_Career_RewardSlot_C_GetButtonIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (index != nullptr)
			*index = params.index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.SetDisabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDisabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Career_RewardSlot_C::SetDisabled(bool IsDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.SetDisabled");
		
		UWBP_Sheik_Career_RewardSlot_C_SetDisabled_Params params {};
		params.IsDisabled = IsDisabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.HandleSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_RewardSlot_C::HandleSelect(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.HandleSelect");
		
		UWBP_Sheik_Career_RewardSlot_C_HandleSelect_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.Set Widget Focus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SkipAnimations                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsFocused                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Career_RewardSlot_C::SetWidgetFocus(bool SkipAnimations, bool IsFocused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.Set Widget Focus");
		
		UWBP_Sheik_Career_RewardSlot_C_SetWidgetFocus_Params params {};
		params.SkipAnimations = SkipAnimations;
		params.IsFocused = IsFocused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.ApplyContentOnPreConstruct
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_RewardSlot_C::ApplyContentOnPreConstruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.ApplyContentOnPreConstruct");
		
		UWBP_Sheik_Career_RewardSlot_C_ApplyContentOnPreConstruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Career_RewardSlot_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.PreConstruct");
		
		UWBP_Sheik_Career_RewardSlot_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_RewardSlot_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.ConstructOnlyOnce");
		
		UWBP_Sheik_Career_RewardSlot_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.OnDisabled
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_RewardSlot_C::OnDisabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.OnDisabled");
		
		UWBP_Sheik_Career_RewardSlot_C_OnDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.OnEnabled
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_RewardSlot_C::OnEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.OnEnabled");
		
		UWBP_Sheik_Career_RewardSlot_C_OnEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.OnGainFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_RewardSlot_C::OnGainFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.OnGainFocus");
		
		UWBP_Sheik_Career_RewardSlot_C_OnGainFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.OnLoseFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_RewardSlot_C::OnLoseFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.OnLoseFocus");
		
		UWBP_Sheik_Career_RewardSlot_C_OnLoseFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.OnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_RewardSlot_C::OnSelected(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.OnSelected");
		
		UWBP_Sheik_Career_RewardSlot_C_OnSelected_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.ExecuteUbergraph_WBP_Sheik_Career_RewardSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_RewardSlot_C::ExecuteUbergraph_WBP_Sheik_Career_RewardSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C.ExecuteUbergraph_WBP_Sheik_Career_RewardSlot");
		
		UWBP_Sheik_Career_RewardSlot_C_ExecuteUbergraph_WBP_Sheik_Career_RewardSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Career_RewardSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Career_RewardSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Career_RewardSlot.WBP_Sheik_Career_RewardSlot_C");
		return ptr;
	}

}


