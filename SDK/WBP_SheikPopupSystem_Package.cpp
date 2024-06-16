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
	 * 		Name   -> Function WBP_SheikPopupSystem.WBP_SheikPopupSystem_C.AddNewCustomPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPopupQueueData                             PopupQueueData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void UWBP_SheikPopupSystem_C::AddNewCustomPopup(const struct FPopupQueueData& PopupQueueData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikPopupSystem.WBP_SheikPopupSystem_C.AddNewCustomPopup");
		
		UWBP_SheikPopupSystem_C_AddNewCustomPopup_Params params {};
		params.PopupQueueData = PopupQueueData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SheikPopupSystem.WBP_SheikPopupSystem_C.DestroyPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SheikPopupSystem_C::DestroyPopup(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikPopupSystem.WBP_SheikPopupSystem_C.DestroyPopup");
		
		UWBP_SheikPopupSystem_C_DestroyPopup_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SheikPopupSystem.WBP_SheikPopupSystem_C.CreateNewPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPopupQueueData                             PopupQueueData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void UWBP_SheikPopupSystem_C::CreateNewPopup(const struct FPopupQueueData& PopupQueueData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikPopupSystem.WBP_SheikPopupSystem_C.CreateNewPopup");
		
		UWBP_SheikPopupSystem_C_CreateNewPopup_Params params {};
		params.PopupQueueData = PopupQueueData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SheikPopupSystem.WBP_SheikPopupSystem_C.HandleOnPopupInfoUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SheikPopupSystem_C::HandleOnPopupInfoUpdated(int32_t PopupId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikPopupSystem.WBP_SheikPopupSystem_C.HandleOnPopupInfoUpdated");
		
		UWBP_SheikPopupSystem_C_HandleOnPopupInfoUpdated_Params params {};
		params.PopupId = PopupId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SheikPopupSystem.WBP_SheikPopupSystem_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_SheikPopupSystem_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikPopupSystem.WBP_SheikPopupSystem_C.ConstructOnlyOnce");
		
		UWBP_SheikPopupSystem_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SheikPopupSystem.WBP_SheikPopupSystem_C.ShowPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPopupQueueData                             PopupData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void UWBP_SheikPopupSystem_C::ShowPopup(const struct FPopupQueueData& PopupData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikPopupSystem.WBP_SheikPopupSystem_C.ShowPopup");
		
		UWBP_SheikPopupSystem_C_ShowPopup_Params params {};
		params.PopupData = PopupData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SheikPopupSystem.WBP_SheikPopupSystem_C.ClosePopup_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SheikPopupSystem_C::ClosePopup_BP(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikPopupSystem.WBP_SheikPopupSystem_C.ClosePopup_BP");
		
		UWBP_SheikPopupSystem_C_ClosePopup_BP_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SheikPopupSystem.WBP_SheikPopupSystem_C.ExecuteUbergraph_WBP_SheikPopupSystem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SheikPopupSystem_C::ExecuteUbergraph_WBP_SheikPopupSystem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikPopupSystem.WBP_SheikPopupSystem_C.ExecuteUbergraph_WBP_SheikPopupSystem");
		
		UWBP_SheikPopupSystem_C_ExecuteUbergraph_WBP_SheikPopupSystem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_SheikPopupSystem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_SheikPopupSystem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SheikPopupSystem.WBP_SheikPopupSystem_C");
		return ptr;
	}

}


