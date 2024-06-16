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
	 * 		Name   -> Function WBP_Sheik_StatusSlot.WBP_Sheik_StatusSlot_C.GetPerkEffectTextureFromDataTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  OutTexture                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_StatusSlot_C::GetPerkEffectTextureFromDataTable(const class FName& RowName, class UTexture2D** OutTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_StatusSlot.WBP_Sheik_StatusSlot_C.GetPerkEffectTextureFromDataTable");
		
		UWBP_Sheik_StatusSlot_C_GetPerkEffectTextureFromDataTable_Params params {};
		params.RowName = RowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTexture != nullptr)
			*OutTexture = params.OutTexture;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_StatusSlot.WBP_Sheik_StatusSlot_C.UpdateTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSeconds                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_StatusSlot_C::UpdateTimer(int32_t InSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_StatusSlot.WBP_Sheik_StatusSlot_C.UpdateTimer");
		
		UWBP_Sheik_StatusSlot_C_UpdateTimer_Params params {};
		params.InSeconds = InSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_StatusSlot.WBP_Sheik_StatusSlot_C.UpdateIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_StatusSlot_C::UpdateIcon(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_StatusSlot.WBP_Sheik_StatusSlot_C.UpdateIcon");
		
		UWBP_Sheik_StatusSlot_C_UpdateIcon_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_StatusSlot.WBP_Sheik_StatusSlot_C.Deactivate
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_StatusSlot_C::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_StatusSlot.WBP_Sheik_StatusSlot_C.Deactivate");
		
		UWBP_Sheik_StatusSlot_C_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_StatusSlot.WBP_Sheik_StatusSlot_C.Activate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGPerkHUDInfo                              Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_StatusSlot_C::Activate(const struct FIGPerkHUDInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_StatusSlot.WBP_Sheik_StatusSlot_C.Activate");
		
		UWBP_Sheik_StatusSlot_C_Activate_Params params {};
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_StatusSlot.WBP_Sheik_StatusSlot_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_StatusSlot_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_StatusSlot.WBP_Sheik_StatusSlot_C.ConstructOnlyOnce");
		
		UWBP_Sheik_StatusSlot_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_StatusSlot.WBP_Sheik_StatusSlot_C.ExecuteUbergraph_WBP_Sheik_StatusSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_StatusSlot_C::ExecuteUbergraph_WBP_Sheik_StatusSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_StatusSlot.WBP_Sheik_StatusSlot_C.ExecuteUbergraph_WBP_Sheik_StatusSlot");
		
		UWBP_Sheik_StatusSlot_C_ExecuteUbergraph_WBP_Sheik_StatusSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_StatusSlot.WBP_Sheik_StatusSlot_C.EventFinished__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_StatusSlot_C::EventFinished__DelegateSignature(class UIGUI_WidgetBase* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_StatusSlot.WBP_Sheik_StatusSlot_C.EventFinished__DelegateSignature");
		
		UWBP_Sheik_StatusSlot_C_EventFinished__DelegateSignature_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_StatusSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_StatusSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_StatusSlot.WBP_Sheik_StatusSlot_C");
		return ptr;
	}

}


