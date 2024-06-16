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
	 * 		Name   -> Function WBP_Sheik_CannonLaunch.WBP_Sheik_CannonLaunch_C.BuildOffAnimFinished
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_CannonLaunch_C::BuildOffAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_CannonLaunch.WBP_Sheik_CannonLaunch_C.BuildOffAnimFinished");
		
		UWBP_Sheik_CannonLaunch_C_BuildOffAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_CannonLaunch.WBP_Sheik_CannonLaunch_C.PlayNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_CannonLaunch_C::PlayNotification(int32_t Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_CannonLaunch.WBP_Sheik_CannonLaunch_C.PlayNotification");
		
		UWBP_Sheik_CannonLaunch_C_PlayNotification_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_CannonLaunch.WBP_Sheik_CannonLaunch_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_CannonLaunch_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_CannonLaunch.WBP_Sheik_CannonLaunch_C.ConstructOnlyOnce");
		
		UWBP_Sheik_CannonLaunch_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_CannonLaunch.WBP_Sheik_CannonLaunch_C.CloseAnnouncement_BP
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_CannonLaunch_C::CloseAnnouncement_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_CannonLaunch.WBP_Sheik_CannonLaunch_C.CloseAnnouncement_BP");
		
		UWBP_Sheik_CannonLaunch_C_CloseAnnouncement_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_CannonLaunch.WBP_Sheik_CannonLaunch_C.SetSpeedFactor_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewSpeedFactor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_CannonLaunch_C::SetSpeedFactor_BP(float NewSpeedFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_CannonLaunch.WBP_Sheik_CannonLaunch_C.SetSpeedFactor_BP");
		
		UWBP_Sheik_CannonLaunch_C_SetSpeedFactor_BP_Params params {};
		params.NewSpeedFactor = NewSpeedFactor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_CannonLaunch.WBP_Sheik_CannonLaunch_C.StartAnnouncement_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikAnnouncement                          SheikAnnouncementData                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_CannonLaunch_C::StartAnnouncement_BP(const struct FSheikAnnouncement& SheikAnnouncementData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_CannonLaunch.WBP_Sheik_CannonLaunch_C.StartAnnouncement_BP");
		
		UWBP_Sheik_CannonLaunch_C_StartAnnouncement_BP_Params params {};
		params.SheikAnnouncementData = SheikAnnouncementData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_CannonLaunch.WBP_Sheik_CannonLaunch_C.ExecuteUbergraph_WBP_Sheik_CannonLaunch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_CannonLaunch_C::ExecuteUbergraph_WBP_Sheik_CannonLaunch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_CannonLaunch.WBP_Sheik_CannonLaunch_C.ExecuteUbergraph_WBP_Sheik_CannonLaunch");
		
		UWBP_Sheik_CannonLaunch_C_ExecuteUbergraph_WBP_Sheik_CannonLaunch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_CannonLaunch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_CannonLaunch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_CannonLaunch.WBP_Sheik_CannonLaunch_C");
		return ptr;
	}

}


