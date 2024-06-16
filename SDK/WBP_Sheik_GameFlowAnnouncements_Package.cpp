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
	 * 		Name   -> Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.OnTeamCannonLaunch_cb
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_GameFlowAnnouncements_C::OnTeamCannonLaunch_cb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.OnTeamCannonLaunch_cb");
		
		UWBP_Sheik_GameFlowAnnouncements_C_OnTeamCannonLaunch_cb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.ConvertEReasonFansAwarded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EReasonFansAwarded                                 Reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      DisplayMessage                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_GameFlowAnnouncements_C::ConvertEReasonFansAwarded(EReasonFansAwarded Reason, class FString* DisplayMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.ConvertEReasonFansAwarded");
		
		UWBP_Sheik_GameFlowAnnouncements_C_ConvertEReasonFansAwarded_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.OnTeamLaunchAimStarted_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikCharacter*                             LaunchMaster                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsLaunchMaster                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_GameFlowAnnouncements_C::OnTeamLaunchAimStarted_cb(class ASheikCharacter* LaunchMaster, bool IsLaunchMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.OnTeamLaunchAimStarted_cb");
		
		UWBP_Sheik_GameFlowAnnouncements_C_OnTeamLaunchAimStarted_cb_Params params {};
		params.LaunchMaster = LaunchMaster;
		params.IsLaunchMaster = IsLaunchMaster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.HandleOnShowAnnouncement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikAnnouncement                          SheikAnnouncement                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_GameFlowAnnouncements_C::HandleOnShowAnnouncement(const struct FSheikAnnouncement& SheikAnnouncement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.HandleOnShowAnnouncement");
		
		UWBP_Sheik_GameFlowAnnouncements_C_HandleOnShowAnnouncement_Params params {};
		params.SheikAnnouncement = SheikAnnouncement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.FindAnnouncementWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AnnouncementId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USheikAnnouncementWidget*                    AnnouncementWidget                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_GameFlowAnnouncements_C::FindAnnouncementWidget(int32_t AnnouncementId, class USheikAnnouncementWidget** AnnouncementWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.FindAnnouncementWidget");
		
		UWBP_Sheik_GameFlowAnnouncements_C_FindAnnouncementWidget_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.PopulateAnnouncementsMapAndArray
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_GameFlowAnnouncements_C::PopulateAnnouncementsMapAndArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.PopulateAnnouncementsMapAndArray");
		
		UWBP_Sheik_GameFlowAnnouncements_C_PopulateAnnouncementsMapAndArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.OnPinEvent_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikPinEventType                                 EventType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASheikCharacter*                             Attacker                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASheikCharacter*                             Victim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_GameFlowAnnouncements_C::OnPinEvent_cb(ESheikPinEventType EventType, class ASheikCharacter* Attacker, class ASheikCharacter* Victim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.OnPinEvent_cb");
		
		UWBP_Sheik_GameFlowAnnouncements_C_OnPinEvent_cb_Params params {};
		params.EventType = EventType;
		params.Attacker = Attacker;
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.OnRingStartsWaiting_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WaitTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_GameFlowAnnouncements_C::OnRingStartsWaiting_cb(int32_t WaitTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.OnRingStartsWaiting_cb");
		
		UWBP_Sheik_GameFlowAnnouncements_C_OnRingStartsWaiting_cb_Params params {};
		params.WaitTime = WaitTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.On Ring Starts Shrinking Cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ShrinkTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_GameFlowAnnouncements_C::OnRingStartsShrinkingCb(float ShrinkTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.On Ring Starts Shrinking Cb");
		
		UWBP_Sheik_GameFlowAnnouncements_C_OnRingStartsShrinkingCb_Params params {};
		params.ShrinkTime = ShrinkTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.OnTimeTillLaunchChanged_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewTimeTillLaunch                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_GameFlowAnnouncements_C::OnTimeTillLaunchChanged_cb(int32_t NewTimeTillLaunch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.OnTimeTillLaunchChanged_cb");
		
		UWBP_Sheik_GameFlowAnnouncements_C_OnTimeTillLaunchChanged_cb_Params params {};
		params.NewTimeTillLaunch = NewTimeTillLaunch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.OnGameFlowStateChanged_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGameFlowState                                     GameFlowState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_GameFlowAnnouncements_C::OnGameFlowStateChanged_cb(EGameFlowState GameFlowState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.OnGameFlowStateChanged_cb");
		
		UWBP_Sheik_GameFlowAnnouncements_C_OnGameFlowStateChanged_cb_Params params {};
		params.GameFlowState = GameFlowState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.OnRingOutTimeChanged_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RingOutTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_GameFlowAnnouncements_C::OnRingOutTimeChanged_cb(int32_t RingOutTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.OnRingOutTimeChanged_cb");
		
		UWBP_Sheik_GameFlowAnnouncements_C_OnRingOutTimeChanged_cb_Params params {};
		params.RingOutTime = RingOutTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_GameFlowAnnouncements_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.ConstructOnlyOnce");
		
		UWBP_Sheik_GameFlowAnnouncements_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.SetSpeedFactor_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AnnouncementId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSpeedFactor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_GameFlowAnnouncements_C::SetSpeedFactor_BP(int32_t AnnouncementId, float NewSpeedFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.SetSpeedFactor_BP");
		
		UWBP_Sheik_GameFlowAnnouncements_C_SetSpeedFactor_BP_Params params {};
		params.AnnouncementId = AnnouncementId;
		params.NewSpeedFactor = NewSpeedFactor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.ShowAnnouncement_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikAnnouncement                          AnnouncementData                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_GameFlowAnnouncements_C::ShowAnnouncement_BP(const struct FSheikAnnouncement& AnnouncementData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.ShowAnnouncement_BP");
		
		UWBP_Sheik_GameFlowAnnouncements_C_ShowAnnouncement_BP_Params params {};
		params.AnnouncementData = AnnouncementData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.CloseAnnouncement_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AnnouncementId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_GameFlowAnnouncements_C::CloseAnnouncement_BP(int32_t AnnouncementId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.CloseAnnouncement_BP");
		
		UWBP_Sheik_GameFlowAnnouncements_C_CloseAnnouncement_BP_Params params {};
		params.AnnouncementId = AnnouncementId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.DeactivateAllAnnouncementWidgets
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_GameFlowAnnouncements_C::DeactivateAllAnnouncementWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.DeactivateAllAnnouncementWidgets");
		
		UWBP_Sheik_GameFlowAnnouncements_C_DeactivateAllAnnouncementWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.ExecuteUbergraph_WBP_Sheik_GameFlowAnnouncements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_GameFlowAnnouncements_C::ExecuteUbergraph_WBP_Sheik_GameFlowAnnouncements(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C.ExecuteUbergraph_WBP_Sheik_GameFlowAnnouncements");
		
		UWBP_Sheik_GameFlowAnnouncements_C_ExecuteUbergraph_WBP_Sheik_GameFlowAnnouncements_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_GameFlowAnnouncements_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_GameFlowAnnouncements_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C");
		return ptr;
	}

}


