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
	 * 		Name   -> Function WBP_Sheik_EventHistory.WBP_Sheik_EventHistory_C.GetPlayerPlatformIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        PlatformIcon                                               (Parm, OutParm)
	 */
	void UWBP_Sheik_EventHistory_C::GetPlayerPlatformIcon(class APlayerState* Player, class FText* PlatformIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EventHistory.WBP_Sheik_EventHistory_C.GetPlayerPlatformIcon");
		
		UWBP_Sheik_EventHistory_C_GetPlayerPlatformIcon_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlatformIcon != nullptr)
			*PlatformIcon = params.PlatformIcon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EventHistory.WBP_Sheik_EventHistory_C.SetupLines
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_EventHistory_C::SetupLines()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EventHistory.WBP_Sheik_EventHistory_C.SetupLines");
		
		UWBP_Sheik_EventHistory_C_SetupLines_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EventHistory.WBP_Sheik_EventHistory_C.IsTeammate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsTeammate                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_EventHistory_C::IsTeammate(class APlayerState* Player, bool* IsTeammate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EventHistory.WBP_Sheik_EventHistory_C.IsTeammate");
		
		UWBP_Sheik_EventHistory_C_IsTeammate_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsTeammate != nullptr)
			*IsTeammate = params.IsTeammate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EventHistory.WBP_Sheik_EventHistory_C.OnEventFinished_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_EventHistory_C::OnEventFinished_cb(class UIGUI_WidgetBase* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EventHistory.WBP_Sheik_EventHistory_C.OnEventFinished_cb");
		
		UWBP_Sheik_EventHistory_C_OnEventFinished_cb_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EventHistory.WBP_Sheik_EventHistory_C.OnKnockoutOccurred_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGKnockOutData                             KnockOutData                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_Sheik_EventHistory_C::OnKnockoutOccurred_cb(const struct FIGKnockOutData& KnockOutData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EventHistory.WBP_Sheik_EventHistory_C.OnKnockoutOccurred_cb");
		
		UWBP_Sheik_EventHistory_C_OnKnockoutOccurred_cb_Params params {};
		params.KnockOutData = KnockOutData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EventHistory.WBP_Sheik_EventHistory_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_EventHistory_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EventHistory.WBP_Sheik_EventHistory_C.ConstructOnlyOnce");
		
		UWBP_Sheik_EventHistory_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EventHistory.WBP_Sheik_EventHistory_C.ExecuteUbergraph_WBP_Sheik_EventHistory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_EventHistory_C::ExecuteUbergraph_WBP_Sheik_EventHistory(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EventHistory.WBP_Sheik_EventHistory_C.ExecuteUbergraph_WBP_Sheik_EventHistory");
		
		UWBP_Sheik_EventHistory_C_ExecuteUbergraph_WBP_Sheik_EventHistory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_EventHistory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_EventHistory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_EventHistory.WBP_Sheik_EventHistory_C");
		return ptr;
	}

}


