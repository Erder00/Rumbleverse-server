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
	 * 		Name   -> Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.GetImageFromLookupName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InDurability                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  OutImage                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_InventorySlot_C::GetImageFromLookupName(const class FName& InName, int32_t InDurability, class UTexture2D** OutImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.GetImageFromLookupName");
		
		UWBP_Sheik_InventorySlot_C_GetImageFromLookupName_Params params {};
		params.InName = InName;
		params.InDurability = InDurability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutImage != nullptr)
			*OutImage = params.OutImage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.CreatePip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPanelWidget*                                PipContainer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_InventorySlot_C::CreatePip(class UPanelWidget* PipContainer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.CreatePip");
		
		UWBP_Sheik_InventorySlot_C_CreatePip_Params params {};
		params.PipContainer = PipContainer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.PlayValidSlotAnim
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_InventorySlot_C::PlayValidSlotAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.PlayValidSlotAnim");
		
		UWBP_Sheik_InventorySlot_C_PlayValidSlotAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.HideButtonPrompt
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_InventorySlot_C::HideButtonPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.HideButtonPrompt");
		
		UWBP_Sheik_InventorySlot_C_HideButtonPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.SetDPadIcon
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_InventorySlot_C::SetDPadIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.SetDPadIcon");
		
		UWBP_Sheik_InventorySlot_C_SetDPadIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.PlayStoredAnimation
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_InventorySlot_C::PlayStoredAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.PlayStoredAnimation");
		
		UWBP_Sheik_InventorySlot_C_PlayStoredAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.PlayPickedUpAnimation
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_InventorySlot_C::PlayPickedUpAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.PlayPickedUpAnimation");
		
		UWBP_Sheik_InventorySlot_C_PlayPickedUpAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.UpdateDurabilityDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RemainingUses                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_InventorySlot_C::UpdateDurabilityDisplay(int32_t RemainingUses)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.UpdateDurabilityDisplay");
		
		UWBP_Sheik_InventorySlot_C_UpdateDurabilityDisplay_Params params {};
		params.RemainingUses = RemainingUses;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.PlayFailAnimation
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_InventorySlot_C::PlayFailAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.PlayFailAnimation");
		
		UWBP_Sheik_InventorySlot_C_PlayFailAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.ApplySlotSpecificStyling
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_InventorySlot_C::ApplySlotSpecificStyling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.ApplySlotSpecificStyling");
		
		UWBP_Sheik_InventorySlot_C_ApplySlotSpecificStyling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.SetDisplayInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGItemDisplayInfo                          DisplayInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_InventorySlot_C::SetDisplayInfo(const struct FIGItemDisplayInfo& DisplayInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.SetDisplayInfo");
		
		UWBP_Sheik_InventorySlot_C_SetDisplayInfo_Params params {};
		params.DisplayInfo = DisplayInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_InventorySlot_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.PreConstruct");
		
		UWBP_Sheik_InventorySlot_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_InventorySlot_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.ConstructOnlyOnce");
		
		UWBP_Sheik_InventorySlot_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.ExecuteUbergraph_WBP_Sheik_InventorySlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_InventorySlot_C::ExecuteUbergraph_WBP_Sheik_InventorySlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C.ExecuteUbergraph_WBP_Sheik_InventorySlot");
		
		UWBP_Sheik_InventorySlot_C_ExecuteUbergraph_WBP_Sheik_InventorySlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_InventorySlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_InventorySlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_InventorySlot.WBP_Sheik_InventorySlot_C");
		return ptr;
	}

}


