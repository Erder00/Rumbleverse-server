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
	 * 		Name   -> Function WBP_MiniMap.WBP_MiniMap_C.OnTeamInfoUpdated_cb
	 * 		Flags  -> ()
	 */
	void UWBP_MiniMap_C::OnTeamInfoUpdated_cb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MiniMap.WBP_MiniMap_C.OnTeamInfoUpdated_cb");
		
		UWBP_MiniMap_C_OnTeamInfoUpdated_cb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MiniMap.WBP_MiniMap_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_MiniMap_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MiniMap.WBP_MiniMap_C.ConstructOnlyOnce");
		
		UWBP_MiniMap_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MiniMap.WBP_MiniMap_C.HandleOnUpdateWaypoints_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSheikWaypointInfo>                  Waypoints                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_MiniMap_C::HandleOnUpdateWaypoints_BP(TArray<struct FSheikWaypointInfo> Waypoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MiniMap.WBP_MiniMap_C.HandleOnUpdateWaypoints_BP");
		
		UWBP_MiniMap_C_HandleOnUpdateWaypoints_BP_Params params {};
		params.Waypoints = Waypoints;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MiniMap.WBP_MiniMap_C.ExecuteUbergraph_WBP_MiniMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MiniMap_C::ExecuteUbergraph_WBP_MiniMap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MiniMap.WBP_MiniMap_C.ExecuteUbergraph_WBP_MiniMap");
		
		UWBP_MiniMap_C_ExecuteUbergraph_WBP_MiniMap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MiniMap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MiniMap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MiniMap.WBP_MiniMap_C");
		return ptr;
	}

}


