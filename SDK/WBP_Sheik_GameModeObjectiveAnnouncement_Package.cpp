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
	 * 		Name   -> Function WBP_Sheik_GameModeObjectiveAnnouncement.WBP_Sheik_GameModeObjectiveAnnouncement_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_GameModeObjectiveAnnouncement_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_GameModeObjectiveAnnouncement.WBP_Sheik_GameModeObjectiveAnnouncement_C.ConstructOnlyOnce");
		
		UWBP_Sheik_GameModeObjectiveAnnouncement_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_GameModeObjectiveAnnouncement.WBP_Sheik_GameModeObjectiveAnnouncement_C.StartAnnouncement_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikAnnouncement                          SheikAnnouncementData                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_GameModeObjectiveAnnouncement_C::StartAnnouncement_BP(const struct FSheikAnnouncement& SheikAnnouncementData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_GameModeObjectiveAnnouncement.WBP_Sheik_GameModeObjectiveAnnouncement_C.StartAnnouncement_BP");
		
		UWBP_Sheik_GameModeObjectiveAnnouncement_C_StartAnnouncement_BP_Params params {};
		params.SheikAnnouncementData = SheikAnnouncementData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_GameModeObjectiveAnnouncement.WBP_Sheik_GameModeObjectiveAnnouncement_C.CloseAnnouncement_BP
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_GameModeObjectiveAnnouncement_C::CloseAnnouncement_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_GameModeObjectiveAnnouncement.WBP_Sheik_GameModeObjectiveAnnouncement_C.CloseAnnouncement_BP");
		
		UWBP_Sheik_GameModeObjectiveAnnouncement_C_CloseAnnouncement_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_GameModeObjectiveAnnouncement.WBP_Sheik_GameModeObjectiveAnnouncement_C.SetSpeedFactor_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewSpeedFactor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_GameModeObjectiveAnnouncement_C::SetSpeedFactor_BP(float NewSpeedFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_GameModeObjectiveAnnouncement.WBP_Sheik_GameModeObjectiveAnnouncement_C.SetSpeedFactor_BP");
		
		UWBP_Sheik_GameModeObjectiveAnnouncement_C_SetSpeedFactor_BP_Params params {};
		params.NewSpeedFactor = NewSpeedFactor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_GameModeObjectiveAnnouncement.WBP_Sheik_GameModeObjectiveAnnouncement_C.HandleAnimationFinished
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_GameModeObjectiveAnnouncement_C::HandleAnimationFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_GameModeObjectiveAnnouncement.WBP_Sheik_GameModeObjectiveAnnouncement_C.HandleAnimationFinished");
		
		UWBP_Sheik_GameModeObjectiveAnnouncement_C_HandleAnimationFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_GameModeObjectiveAnnouncement.WBP_Sheik_GameModeObjectiveAnnouncement_C.ExecuteUbergraph_WBP_Sheik_GameModeObjectiveAnnouncement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_GameModeObjectiveAnnouncement_C::ExecuteUbergraph_WBP_Sheik_GameModeObjectiveAnnouncement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_GameModeObjectiveAnnouncement.WBP_Sheik_GameModeObjectiveAnnouncement_C.ExecuteUbergraph_WBP_Sheik_GameModeObjectiveAnnouncement");
		
		UWBP_Sheik_GameModeObjectiveAnnouncement_C_ExecuteUbergraph_WBP_Sheik_GameModeObjectiveAnnouncement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_GameModeObjectiveAnnouncement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_GameModeObjectiveAnnouncement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_GameModeObjectiveAnnouncement.WBP_Sheik_GameModeObjectiveAnnouncement_C");
		return ptr;
	}

}


