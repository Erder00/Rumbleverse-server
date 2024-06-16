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
	 * 		Name   -> Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.FadeOutFinished_cb
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RingTimeOut_C::FadeOutFinished_cb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.FadeOutFinished_cb");
		
		UWBP_Sheik_RingTimeOut_C_FadeOutFinished_cb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.StopNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SkipAnim                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_RingTimeOut_C::StopNotification(bool SkipAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.StopNotification");
		
		UWBP_Sheik_RingTimeOut_C_StopNotification_Params params {};
		params.SkipAnim = SkipAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.OnGameFlowStateChanged_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGameFlowState                                     State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_RingTimeOut_C::OnGameFlowStateChanged_cb(EGameFlowState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.OnGameFlowStateChanged_cb");
		
		UWBP_Sheik_RingTimeOut_C_OnGameFlowStateChanged_cb_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.FadeOutAnimFinished
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RingTimeOut_C::FadeOutAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.FadeOutAnimFinished");
		
		UWBP_Sheik_RingTimeOut_C_FadeOutAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.PlayNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_RingTimeOut_C::PlayNotification(int32_t Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.PlayNotification");
		
		UWBP_Sheik_RingTimeOut_C_PlayNotification_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RingTimeOut_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.ConstructOnlyOnce");
		
		UWBP_Sheik_RingTimeOut_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.SetSpeedFactor_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewSpeedFactor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_RingTimeOut_C::SetSpeedFactor_BP(float NewSpeedFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.SetSpeedFactor_BP");
		
		UWBP_Sheik_RingTimeOut_C_SetSpeedFactor_BP_Params params {};
		params.NewSpeedFactor = NewSpeedFactor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.StartAnnouncement_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikAnnouncement                          SheikAnnouncementData                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_RingTimeOut_C::StartAnnouncement_BP(const struct FSheikAnnouncement& SheikAnnouncementData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.StartAnnouncement_BP");
		
		UWBP_Sheik_RingTimeOut_C_StartAnnouncement_BP_Params params {};
		params.SheikAnnouncementData = SheikAnnouncementData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.CloseAnnouncement_BP
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RingTimeOut_C::CloseAnnouncement_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.CloseAnnouncement_BP");
		
		UWBP_Sheik_RingTimeOut_C_CloseAnnouncement_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.ExecuteUbergraph_WBP_Sheik_RingTimeOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_RingTimeOut_C::ExecuteUbergraph_WBP_Sheik_RingTimeOut(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C.ExecuteUbergraph_WBP_Sheik_RingTimeOut");
		
		UWBP_Sheik_RingTimeOut_C_ExecuteUbergraph_WBP_Sheik_RingTimeOut_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_RingTimeOut_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_RingTimeOut_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_RingTimeOut.WBP_Sheik_RingTimeOut_C");
		return ptr;
	}

}


