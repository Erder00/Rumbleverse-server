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
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.SetStatSeasonalTag
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_TitleCard_StatSlot_C::SetStatSeasonalTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.SetStatSeasonalTag");
		
		UWBP_Sheik_Career_TitleCard_StatSlot_C_SetStatSeasonalTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.GetNonComplexStatValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikPlayerDataStat                        Stat                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		EIGTitleCardStatType                               StatType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      RawStatName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		EIGSeasonIdentifier                                StatSeason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSheikSeasonalStatFieldsData                SeasonData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               HasSeasonalData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              StatValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_TitleCard_StatSlot_C::GetNonComplexStatValue(struct FSheikPlayerDataStat* Stat, EIGTitleCardStatType StatType, const class FString& RawStatName, EIGSeasonIdentifier StatSeason, struct FSheikSeasonalStatFieldsData* SeasonData, bool HasSeasonalData, float* StatValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.GetNonComplexStatValue");
		
		UWBP_Sheik_Career_TitleCard_StatSlot_C_GetNonComplexStatValue_Params params {};
		params.StatType = StatType;
		params.RawStatName = RawStatName;
		params.StatSeason = StatSeason;
		params.HasSeasonalData = HasSeasonalData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Stat != nullptr)
			*Stat = params.Stat;
		if (SeasonData != nullptr)
			*SeasonData = params.SeasonData;
		if (StatValue != nullptr)
			*StatValue = params.StatValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Sheik_Career_TitleCard_C*               InTitleCard                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_TitleCard_StatSlot_C::Init(class UWBP_Sheik_Career_TitleCard_C* InTitleCard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.Init");
		
		UWBP_Sheik_Career_TitleCard_StatSlot_C_Init_Params params {};
		params.InTitleCard = InTitleCard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.FormatStatValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGTitleCardStat                            TitleCardStat                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        FormattedValue                                             (Parm, OutParm)
	 */
	void UWBP_Sheik_Career_TitleCard_StatSlot_C::FormatStatValue(const struct FIGTitleCardStat& TitleCardStat, class FText* FormattedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.FormatStatValue");
		
		UWBP_Sheik_Career_TitleCard_StatSlot_C_FormatStatValue_Params params {};
		params.TitleCardStat = TitleCardStat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FormattedValue != nullptr)
			*FormattedValue = params.FormattedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.SetStatNameAndValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGTitleCardStat                            Stat                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Career_TitleCard_StatSlot_C::SetStatNameAndValue(const struct FIGTitleCardStat& Stat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.SetStatNameAndValue");
		
		UWBP_Sheik_Career_TitleCard_StatSlot_C_SetStatNameAndValue_Params params {};
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.SetStatSlotBackground
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_TitleCard_StatSlot_C::SetStatSlotBackground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.SetStatSlotBackground");
		
		UWBP_Sheik_Career_TitleCard_StatSlot_C_SetStatSlotBackground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.HandleFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Focus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Career_TitleCard_StatSlot_C::HandleFocus(bool Focus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.HandleFocus");
		
		UWBP_Sheik_Career_TitleCard_StatSlot_C_HandleFocus_Params params {};
		params.Focus = Focus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.OnSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Career_TitleCard_StatSlot_C::OnSelect(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.OnSelect");
		
		UWBP_Sheik_Career_TitleCard_StatSlot_C_OnSelect_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.UpdateStatSlotInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGTitleCardStat                            StatRewardInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Career_TitleCard_StatSlot_C::UpdateStatSlotInfo(const struct FIGTitleCardStat& StatRewardInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.UpdateStatSlotInfo");
		
		UWBP_Sheik_Career_TitleCard_StatSlot_C_UpdateStatSlotInfo_Params params {};
		params.StatRewardInfo = StatRewardInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.SetVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEmpty                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Career_TitleCard_StatSlot_C::SetVisuals(bool IsEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.SetVisuals");
		
		UWBP_Sheik_Career_TitleCard_StatSlot_C_SetVisuals_Params params {};
		params.IsEmpty = IsEmpty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_TitleCard_StatSlot_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.ConstructOnlyOnce");
		
		UWBP_Sheik_Career_TitleCard_StatSlot_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Career_TitleCard_StatSlot_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.PreConstruct");
		
		UWBP_Sheik_Career_TitleCard_StatSlot_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.OnGainFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_TitleCard_StatSlot_C::OnGainFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.OnGainFocus");
		
		UWBP_Sheik_Career_TitleCard_StatSlot_C_OnGainFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.OnLoseFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_TitleCard_StatSlot_C::OnLoseFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.OnLoseFocus");
		
		UWBP_Sheik_Career_TitleCard_StatSlot_C_OnLoseFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.ExecuteUbergraph_WBP_Sheik_Career_TitleCard_StatSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_TitleCard_StatSlot_C::ExecuteUbergraph_WBP_Sheik_Career_TitleCard_StatSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.ExecuteUbergraph_WBP_Sheik_Career_TitleCard_StatSlot");
		
		UWBP_Sheik_Career_TitleCard_StatSlot_C_ExecuteUbergraph_WBP_Sheik_Career_TitleCard_StatSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.RewardSlotSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_TitleCard_StatSlot_C::RewardSlotSelected__DelegateSignature(ETitleCardStackOrder InRewardSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.RewardSlotSelected__DelegateSignature");
		
		UWBP_Sheik_Career_TitleCard_StatSlot_C_RewardSlotSelected__DelegateSignature_Params params {};
		params.InRewardSlot = InRewardSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.CurrentWidgetUpdated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_TitleCard_StatSlot_C::CurrentWidgetUpdated__DelegateSignature(ETitleCardStackOrder InRewardSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C.CurrentWidgetUpdated__DelegateSignature");
		
		UWBP_Sheik_Career_TitleCard_StatSlot_C_CurrentWidgetUpdated__DelegateSignature_Params params {};
		params.InRewardSlot = InRewardSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Career_TitleCard_StatSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Career_TitleCard_StatSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C");
		return ptr;
	}

}


