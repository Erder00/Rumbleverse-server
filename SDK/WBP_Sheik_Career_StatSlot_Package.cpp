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
	 * 		Name   -> Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetSeasonalTag
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_StatSlot_C::SetSeasonalTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetSeasonalTag");
		
		UWBP_Sheik_Career_StatSlot_C_SetSeasonalTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetRarity
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_StatSlot_C::SetRarity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetRarity");
		
		UWBP_Sheik_Career_StatSlot_C_SetRarity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetStatusVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsNew                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsEquipped                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsLocked                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Career_StatSlot_C::SetStatusVisuals(bool IsNew, bool IsEquipped, bool IsLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetStatusVisuals");
		
		UWBP_Sheik_Career_StatSlot_C_SetStatusVisuals_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGSeasonDefinition                         IGSeasonDefinition                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_Career_StatSlot_C::SetTimer(const struct FIGSeasonDefinition& IGSeasonDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetTimer");
		
		UWBP_Sheik_Career_StatSlot_C_SetTimer_Params params {};
		params.IGSeasonDefinition = IGSeasonDefinition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetStatNameAndValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FSheikPlayerDataStat                        SheikPlayerDataStat                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EIGTitleCardStatType                               StatType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EIGSeasonIdentifier                                StatSeason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_StatSlot_C::SetStatNameAndValue(const class FText& Name, const struct FSheikPlayerDataStat& SheikPlayerDataStat, EIGTitleCardStatType StatType, EIGSeasonIdentifier StatSeason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetStatNameAndValue");
		
		UWBP_Sheik_Career_StatSlot_C_SetStatNameAndValue_Params params {};
		params.Name = Name;
		params.SheikPlayerDataStat = SheikPlayerDataStat;
		params.StatType = StatType;
		params.StatSeason = StatSeason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetBackground
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_StatSlot_C::SetBackground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetBackground");
		
		UWBP_Sheik_Career_StatSlot_C_SetBackground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetNewContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsNew                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Career_StatSlot_C::SetNewContent(bool IsNew)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetNewContent");
		
		UWBP_Sheik_Career_StatSlot_C_SetNewContent_Params params {};
		params.IsNew = IsNew;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.GetStatName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        OutNameText                                                (Parm, OutParm)
	 */
	void UWBP_Sheik_Career_StatSlot_C::GetStatName(class FText* OutNameText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.GetStatName");
		
		UWBP_Sheik_Career_StatSlot_C_GetStatName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNameText != nullptr)
			*OutNameText = params.OutNameText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.GetStatID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WalletId                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_StatSlot_C::GetStatID(class FName* WalletId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.GetStatID");
		
		UWBP_Sheik_Career_StatSlot_C_GetStatID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WalletId != nullptr)
			*WalletId = params.WalletId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetEquippedStyling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Equipped                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Career_StatSlot_C::SetEquippedStyling(bool Equipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetEquippedStyling");
		
		UWBP_Sheik_Career_StatSlot_C_SetEquippedStyling_Params params {};
		params.Equipped = Equipped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.GetStatInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGTitleCardStat                            StatRewardInfo                                             (Parm, OutParm)
	 */
	void UWBP_Sheik_Career_StatSlot_C::GetStatInfo(struct FIGTitleCardStat* StatRewardInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.GetStatInfo");
		
		UWBP_Sheik_Career_StatSlot_C_GetStatInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatRewardInfo != nullptr)
			*StatRewardInfo = params.StatRewardInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetStatRewardData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGTitleCardStat                            StatReward                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FSheikPlayerDataStat                        SheikPlayerDataStat                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsUnlocked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FIGSeasonDefinition                         CurrentSeason                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Career_StatSlot_C::SetStatRewardData(const struct FIGTitleCardStat& StatReward, const struct FSheikPlayerDataStat& SheikPlayerDataStat, bool IsUnlocked, const struct FIGSeasonDefinition& CurrentSeason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetStatRewardData");
		
		UWBP_Sheik_Career_StatSlot_C_SetStatRewardData_Params params {};
		params.StatReward = StatReward;
		params.SheikPlayerDataStat = SheikPlayerDataStat;
		params.IsUnlocked = IsUnlocked;
		params.CurrentSeason = CurrentSeason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.GetButtonIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_StatSlot_C::GetButtonIndex(int32_t* index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.GetButtonIndex");
		
		UWBP_Sheik_Career_StatSlot_C_GetButtonIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (index != nullptr)
			*index = params.index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetDisabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDisabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Career_StatSlot_C::SetDisabled(bool IsDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.SetDisabled");
		
		UWBP_Sheik_Career_StatSlot_C_SetDisabled_Params params {};
		params.IsDisabled = IsDisabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.HandleSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_StatSlot_C::HandleSelect(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.HandleSelect");
		
		UWBP_Sheik_Career_StatSlot_C_HandleSelect_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.Set Widget Focus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SkipAnimations                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsFocused                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Career_StatSlot_C::SetWidgetFocus(bool SkipAnimations, bool IsFocused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.Set Widget Focus");
		
		UWBP_Sheik_Career_StatSlot_C_SetWidgetFocus_Params params {};
		params.SkipAnimations = SkipAnimations;
		params.IsFocused = IsFocused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.ApplyContentOnPreConstruct
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_StatSlot_C::ApplyContentOnPreConstruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.ApplyContentOnPreConstruct");
		
		UWBP_Sheik_Career_StatSlot_C_ApplyContentOnPreConstruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Career_StatSlot_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.PreConstruct");
		
		UWBP_Sheik_Career_StatSlot_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_StatSlot_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.ConstructOnlyOnce");
		
		UWBP_Sheik_Career_StatSlot_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.OnDisabled
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_StatSlot_C::OnDisabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.OnDisabled");
		
		UWBP_Sheik_Career_StatSlot_C_OnDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.OnEnabled
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_StatSlot_C::OnEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.OnEnabled");
		
		UWBP_Sheik_Career_StatSlot_C_OnEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.OnGainFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_StatSlot_C::OnGainFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.OnGainFocus");
		
		UWBP_Sheik_Career_StatSlot_C_OnGainFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.OnLoseFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_StatSlot_C::OnLoseFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.OnLoseFocus");
		
		UWBP_Sheik_Career_StatSlot_C_OnLoseFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.OnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_StatSlot_C::OnSelected(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.OnSelected");
		
		UWBP_Sheik_Career_StatSlot_C_OnSelected_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.ExecuteUbergraph_WBP_Sheik_Career_StatSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_StatSlot_C::ExecuteUbergraph_WBP_Sheik_Career_StatSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C.ExecuteUbergraph_WBP_Sheik_Career_StatSlot");
		
		UWBP_Sheik_Career_StatSlot_C_ExecuteUbergraph_WBP_Sheik_Career_StatSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Career_StatSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Career_StatSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Career_StatSlot.WBP_Sheik_Career_StatSlot_C");
		return ptr;
	}

}


