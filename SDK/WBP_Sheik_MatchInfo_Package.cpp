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
	 * 		Name   -> Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.SetTimerText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Min                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            sec                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MatchInfo_C::SetTimerText(int32_t Min, int32_t sec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.SetTimerText");
		
		UWBP_Sheik_MatchInfo_C_SetTimerText_Params params {};
		params.Min = Min;
		params.sec = sec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.SetForPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikPlayerStateCommon*                     SheikPlayerState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MatchInfo_C::SetForPlayer(class ASheikPlayerStateCommon* SheikPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.SetForPlayer");
		
		UWBP_Sheik_MatchInfo_C_SetForPlayer_Params params {};
		params.SheikPlayerState = SheikPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.OnTimeTillFreeRoamEnd_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TimeTillFreeRoamEnd                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MatchInfo_C::OnTimeTillFreeRoamEnd_cb(int32_t TimeTillFreeRoamEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.OnTimeTillFreeRoamEnd_cb");
		
		UWBP_Sheik_MatchInfo_C_OnTimeTillFreeRoamEnd_cb_Params params {};
		params.TimeTillFreeRoamEnd = TimeTillFreeRoamEnd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.OnEventEnd_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsParticipating                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MatchInfo_C::OnEventEnd_cb(bool bIsParticipating)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.OnEventEnd_cb");
		
		UWBP_Sheik_MatchInfo_C_OnEventEnd_cb_Params params {};
		params.bIsParticipating = bIsParticipating;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.OnEventCountdownDisplayTimeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewDisplayTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsInEventRing                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsNearbyEventRing                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MatchInfo_C::OnEventCountdownDisplayTimeChanged(int32_t NewDisplayTime, bool IsInEventRing, bool IsNearbyEventRing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.OnEventCountdownDisplayTimeChanged");
		
		UWBP_Sheik_MatchInfo_C_OnEventCountdownDisplayTimeChanged_Params params {};
		params.NewDisplayTime = NewDisplayTime;
		params.IsInEventRing = IsInEventRing;
		params.IsNearbyEventRing = IsNearbyEventRing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.OnEventEndDisplayTimeChanged_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewDisplayTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsParicipating                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MatchInfo_C::OnEventEndDisplayTimeChanged_cb(int32_t NewDisplayTime, bool IsParicipating)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.OnEventEndDisplayTimeChanged_cb");
		
		UWBP_Sheik_MatchInfo_C_OnEventEndDisplayTimeChanged_cb_Params params {};
		params.NewDisplayTime = NewDisplayTime;
		params.IsParicipating = IsParicipating;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.OnEventParticipate_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsParticipating                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MatchInfo_C::OnEventParticipate_cb(bool IsParticipating)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.OnEventParticipate_cb");
		
		UWBP_Sheik_MatchInfo_C_OnEventParticipate_cb_Params params {};
		params.IsParticipating = IsParticipating;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.OnEventCountdownToStart_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SecondsToEventStart                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MatchInfo_C::OnEventCountdownToStart_cb(int32_t SecondsToEventStart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.OnEventCountdownToStart_cb");
		
		UWBP_Sheik_MatchInfo_C_OnEventCountdownToStart_cb_Params params {};
		params.SecondsToEventStart = SecondsToEventStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.SetIintialMatchInfo
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MatchInfo_C::SetIintialMatchInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.SetIintialMatchInfo");
		
		UWBP_Sheik_MatchInfo_C_SetIintialMatchInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.UpdateTimer
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MatchInfo_C::UpdateTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.UpdateTimer");
		
		UWBP_Sheik_MatchInfo_C_UpdateTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.OnRingStartsWaiting_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WaitTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MatchInfo_C::OnRingStartsWaiting_cb(int32_t WaitTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.OnRingStartsWaiting_cb");
		
		UWBP_Sheik_MatchInfo_C_OnRingStartsWaiting_cb_Params params {};
		params.WaitTime = WaitTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.OnRingStartsSkrinking_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ShrinkTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MatchInfo_C::OnRingStartsSkrinking_cb(float ShrinkTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.OnRingStartsSkrinking_cb");
		
		UWBP_Sheik_MatchInfo_C_OnRingStartsSkrinking_cb_Params params {};
		params.ShrinkTime = ShrinkTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.OnTimeTillLaunchChanged_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewTimeTillLaunch                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MatchInfo_C::OnTimeTillLaunchChanged_cb(int32_t NewTimeTillLaunch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.OnTimeTillLaunchChanged_cb");
		
		UWBP_Sheik_MatchInfo_C_OnTimeTillLaunchChanged_cb_Params params {};
		params.NewTimeTillLaunch = NewTimeTillLaunch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MatchInfo_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.Tick");
		
		UWBP_Sheik_MatchInfo_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MatchInfo_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.ConstructOnlyOnce");
		
		UWBP_Sheik_MatchInfo_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.ExecuteUbergraph_WBP_Sheik_MatchInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MatchInfo_C::ExecuteUbergraph_WBP_Sheik_MatchInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C.ExecuteUbergraph_WBP_Sheik_MatchInfo");
		
		UWBP_Sheik_MatchInfo_C_ExecuteUbergraph_WBP_Sheik_MatchInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_MatchInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_MatchInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C");
		return ptr;
	}

}


