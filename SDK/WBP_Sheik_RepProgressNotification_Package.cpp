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
	 * 		Name   -> Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.UpdateRepProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NewRepProgressText                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_RepProgressNotification_C::UpdateRepProgress(const class FText& NewRepProgressText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.UpdateRepProgress");
		
		UWBP_Sheik_RepProgressNotification_C_UpdateRepProgress_Params params {};
		params.NewRepProgressText = NewRepProgressText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.SetRepProgressSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               RepIsComplete                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_RepProgressNotification_C::SetRepProgressSound(bool RepIsComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.SetRepProgressSound");
		
		UWBP_Sheik_RepProgressNotification_C_SetRepProgressSound_Params params {};
		params.RepIsComplete = RepIsComplete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.OnRepProgressThresholdPassed_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRepUIData                                  NotificationRep                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_RepProgressNotification_C::OnRepProgressThresholdPassed_cb(const struct FRepUIData& NotificationRep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.OnRepProgressThresholdPassed_cb");
		
		UWBP_Sheik_RepProgressNotification_C_OnRepProgressThresholdPassed_cb_Params params {};
		params.NotificationRep = NotificationRep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.ShowRepProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        RepProgressText                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_RepProgressNotification_C::ShowRepProgress(const class FText& RepProgressText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.ShowRepProgress");
		
		UWBP_Sheik_RepProgressNotification_C_ShowRepProgress_Params params {};
		params.RepProgressText = RepProgressText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.ShowRepProgressAnimFinished
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RepProgressNotification_C::ShowRepProgressAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.ShowRepProgressAnimFinished");
		
		UWBP_Sheik_RepProgressNotification_C_ShowRepProgressAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RepProgressNotification_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.ConstructOnlyOnce");
		
		UWBP_Sheik_RepProgressNotification_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.CloseAnnouncement_BP
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RepProgressNotification_C::CloseAnnouncement_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.CloseAnnouncement_BP");
		
		UWBP_Sheik_RepProgressNotification_C_CloseAnnouncement_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.SetSpeedFactor_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewSpeedFactor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_RepProgressNotification_C::SetSpeedFactor_BP(float NewSpeedFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.SetSpeedFactor_BP");
		
		UWBP_Sheik_RepProgressNotification_C_SetSpeedFactor_BP_Params params {};
		params.NewSpeedFactor = NewSpeedFactor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.StartAnnouncement_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikAnnouncement                          SheikAnnouncementData                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_RepProgressNotification_C::StartAnnouncement_BP(const struct FSheikAnnouncement& SheikAnnouncementData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.StartAnnouncement_BP");
		
		UWBP_Sheik_RepProgressNotification_C_StartAnnouncement_BP_Params params {};
		params.SheikAnnouncementData = SheikAnnouncementData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.ExecuteUbergraph_WBP_Sheik_RepProgressNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_RepProgressNotification_C::ExecuteUbergraph_WBP_Sheik_RepProgressNotification(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C.ExecuteUbergraph_WBP_Sheik_RepProgressNotification");
		
		UWBP_Sheik_RepProgressNotification_C_ExecuteUbergraph_WBP_Sheik_RepProgressNotification_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_RepProgressNotification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_RepProgressNotification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C");
		return ptr;
	}

}


