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
	 * 		Name   -> Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.GenerateDebugNextCloutLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FProgressionLevel                           CurrentLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FProgressionLevel                           NextLevel                                                  (Parm, OutParm)
	 */
	void UWBP_Sheik_ProgressionAnnouncements_C::GenerateDebugNextCloutLevel(const struct FProgressionLevel& CurrentLevel, struct FProgressionLevel* NextLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.GenerateDebugNextCloutLevel");
		
		UWBP_Sheik_ProgressionAnnouncements_C_GenerateDebugNextCloutLevel_Params params {};
		params.CurrentLevel = CurrentLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NextLevel != nullptr)
			*NextLevel = params.NextLevel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.ConvertEReasonFansAwarded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EReasonFansAwarded                                 Reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        DisplayMessage                                             (Parm, OutParm)
	 */
	void UWBP_Sheik_ProgressionAnnouncements_C::ConvertEReasonFansAwarded(EReasonFansAwarded Reason, class FText* DisplayMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.ConvertEReasonFansAwarded");
		
		UWBP_Sheik_ProgressionAnnouncements_C_ConvertEReasonFansAwarded_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DisplayMessage != nullptr)
			*DisplayMessage = params.DisplayMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.OnCloutLevelUpOccurred_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FProgressionLevel>                   OldLevels                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FProgressionLevel                           NewLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            OldFanCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TotalNewFans                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            LeftoverFansForCurrentLevel                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewFanMail                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EReasonFansAwarded                                 ReasonForAwardingFans                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldShowAnnouncement                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ProgressionAnnouncements_C::OnCloutLevelUpOccurred_cb(TArray<struct FProgressionLevel> OldLevels, const struct FProgressionLevel& NewLevel, int32_t OldFanCount, int32_t TotalNewFans, int32_t LeftoverFansForCurrentLevel, int32_t NewFanMail, EReasonFansAwarded ReasonForAwardingFans, bool ShouldShowAnnouncement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.OnCloutLevelUpOccurred_cb");
		
		UWBP_Sheik_ProgressionAnnouncements_C_OnCloutLevelUpOccurred_cb_Params params {};
		params.OldLevels = OldLevels;
		params.NewLevel = NewLevel;
		params.OldFanCount = OldFanCount;
		params.TotalNewFans = TotalNewFans;
		params.LeftoverFansForCurrentLevel = LeftoverFansForCurrentLevel;
		params.NewFanMail = NewFanMail;
		params.ReasonForAwardingFans = ReasonForAwardingFans;
		params.ShouldShowAnnouncement = ShouldShowAnnouncement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.OnCloutFansIncreasedOnlyOccurred_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FProgressionLevel                           CurrentLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            OldFanCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewFansAdded                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EReasonFansAwarded                                 ReasonFansAwarded                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldShowAnnouncement                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ProgressionAnnouncements_C::OnCloutFansIncreasedOnlyOccurred_cb(const struct FProgressionLevel& CurrentLevel, int32_t OldFanCount, int32_t NewFansAdded, EReasonFansAwarded ReasonFansAwarded, bool ShouldShowAnnouncement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.OnCloutFansIncreasedOnlyOccurred_cb");
		
		UWBP_Sheik_ProgressionAnnouncements_C_OnCloutFansIncreasedOnlyOccurred_cb_Params params {};
		params.CurrentLevel = CurrentLevel;
		params.OldFanCount = OldFanCount;
		params.NewFansAdded = NewFansAdded;
		params.ReasonFansAwarded = ReasonFansAwarded;
		params.ShouldShowAnnouncement = ShouldShowAnnouncement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.OnRepProgressThresholdPassed_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRepUIData                                  NotificationRep                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_ProgressionAnnouncements_C::OnRepProgressThresholdPassed_cb(const struct FRepUIData& NotificationRep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.OnRepProgressThresholdPassed_cb");
		
		UWBP_Sheik_ProgressionAnnouncements_C_OnRepProgressThresholdPassed_cb_Params params {};
		params.NotificationRep = NotificationRep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.HandleOnShowAnnouncement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikAnnouncement                          SheikAnnouncement                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_ProgressionAnnouncements_C::HandleOnShowAnnouncement(const struct FSheikAnnouncement& SheikAnnouncement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.HandleOnShowAnnouncement");
		
		UWBP_Sheik_ProgressionAnnouncements_C_HandleOnShowAnnouncement_Params params {};
		params.SheikAnnouncement = SheikAnnouncement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.FindAnnouncementWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AnnouncementId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USheikAnnouncementWidget*                    AnnouncementWidget                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ProgressionAnnouncements_C::FindAnnouncementWidget(int32_t AnnouncementId, class USheikAnnouncementWidget** AnnouncementWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.FindAnnouncementWidget");
		
		UWBP_Sheik_ProgressionAnnouncements_C_FindAnnouncementWidget_Params params {};
		params.AnnouncementId = AnnouncementId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnnouncementWidget != nullptr)
			*AnnouncementWidget = params.AnnouncementWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.PopulateAnnouncementsMapAndArray
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ProgressionAnnouncements_C::PopulateAnnouncementsMapAndArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.PopulateAnnouncementsMapAndArray");
		
		UWBP_Sheik_ProgressionAnnouncements_C_PopulateAnnouncementsMapAndArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ProgressionAnnouncements_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.ConstructOnlyOnce");
		
		UWBP_Sheik_ProgressionAnnouncements_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.SetSpeedFactor_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AnnouncementId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSpeedFactor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ProgressionAnnouncements_C::SetSpeedFactor_BP(int32_t AnnouncementId, float NewSpeedFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.SetSpeedFactor_BP");
		
		UWBP_Sheik_ProgressionAnnouncements_C_SetSpeedFactor_BP_Params params {};
		params.AnnouncementId = AnnouncementId;
		params.NewSpeedFactor = NewSpeedFactor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.ShowAnnouncement_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikAnnouncement                          AnnouncementData                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ProgressionAnnouncements_C::ShowAnnouncement_BP(const struct FSheikAnnouncement& AnnouncementData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.ShowAnnouncement_BP");
		
		UWBP_Sheik_ProgressionAnnouncements_C_ShowAnnouncement_BP_Params params {};
		params.AnnouncementData = AnnouncementData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.CloseAnnouncement_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AnnouncementId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ProgressionAnnouncements_C::CloseAnnouncement_BP(int32_t AnnouncementId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.CloseAnnouncement_BP");
		
		UWBP_Sheik_ProgressionAnnouncements_C_CloseAnnouncement_BP_Params params {};
		params.AnnouncementId = AnnouncementId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.DeactivateAllAnnouncementWidgets
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ProgressionAnnouncements_C::DeactivateAllAnnouncementWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.DeactivateAllAnnouncementWidgets");
		
		UWBP_Sheik_ProgressionAnnouncements_C_DeactivateAllAnnouncementWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.ExecuteUbergraph_WBP_Sheik_ProgressionAnnouncements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ProgressionAnnouncements_C::ExecuteUbergraph_WBP_Sheik_ProgressionAnnouncements(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C.ExecuteUbergraph_WBP_Sheik_ProgressionAnnouncements");
		
		UWBP_Sheik_ProgressionAnnouncements_C_ExecuteUbergraph_WBP_Sheik_ProgressionAnnouncements_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_ProgressionAnnouncements_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_ProgressionAnnouncements_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C");
		return ptr;
	}

}


