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
	 * 		Name   -> Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.UpdateSnowballFightActionPromptText
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Inventory_C::UpdateSnowballFightActionPromptText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.UpdateSnowballFightActionPromptText");
		
		UWBP_Sheik_Inventory_C_UpdateSnowballFightActionPromptText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.OnSpectatorInfoUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikSpectatorInfo                         SpectatorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_Inventory_C::OnSpectatorInfoUpdated(struct FSheikSpectatorInfo* SpectatorInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.OnSpectatorInfoUpdated");
		
		UWBP_Sheik_Inventory_C_OnSpectatorInfoUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpectatorInfo != nullptr)
			*SpectatorInfo = params.SpectatorInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.SetForPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikPlayerStateCommon*                     SheikPlayerState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Inventory_C::SetForPlayer(class ASheikPlayerStateCommon* SheikPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.SetForPlayer");
		
		UWBP_Sheik_Inventory_C_SetForPlayer_Params params {};
		params.SheikPlayerState = SheikPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.HideInventory
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Inventory_C::HideInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.HideInventory");
		
		UWBP_Sheik_Inventory_C_HideInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.OnHeldItemUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGItemDisplayInfo                          HeldItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Inventory_C::OnHeldItemUpdated(const struct FIGItemDisplayInfo& HeldItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.OnHeldItemUpdated");
		
		UWBP_Sheik_Inventory_C_OnHeldItemUpdated_Params params {};
		params.HeldItem = HeldItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.OnItemDurabilityUpdated_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGInventorySlot                                   Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RemainingUses                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DurabilityTier                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Inventory_C::OnItemDurabilityUpdated_cb(EIGInventorySlot Slot, int32_t RemainingUses, int32_t DurabilityTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.OnItemDurabilityUpdated_cb");
		
		UWBP_Sheik_Inventory_C_OnItemDurabilityUpdated_cb_Params params {};
		params.Slot = Slot;
		params.RemainingUses = RemainingUses;
		params.DurabilityTier = DurabilityTier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.UpdateCharacterBinding_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikCharacter*                             InCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Inventory_C::UpdateCharacterBinding_cb(class ASheikCharacter* InCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.UpdateCharacterBinding_cb");
		
		UWBP_Sheik_Inventory_C_UpdateCharacterBinding_cb_Params params {};
		params.InCharacter = InCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.OnItemSlotUpdated_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGInventorySlot                                   Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FIGItemDisplayInfo                          Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Inventory_C::OnItemSlotUpdated_cb(EIGInventorySlot Slot, bool Success, const struct FIGItemDisplayInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.OnItemSlotUpdated_cb");
		
		UWBP_Sheik_Inventory_C_OnItemSlotUpdated_cb_Params params {};
		params.Slot = Slot;
		params.Success = Success;
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.GetSlotWidgetFromEnum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGInventorySlot                                   index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWBP_Sheik_InventorySlot_C* UWBP_Sheik_Inventory_C::GetSlotWidgetFromEnum(EIGInventorySlot index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.GetSlotWidgetFromEnum");
		
		UWBP_Sheik_Inventory_C_GetSlotWidgetFromEnum_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.RefreshAllSlots
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Inventory_C::RefreshAllSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.RefreshAllSlots");
		
		UWBP_Sheik_Inventory_C_RefreshAllSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Inventory_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.ConstructOnlyOnce");
		
		UWBP_Sheik_Inventory_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Inventory_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.PreConstruct");
		
		UWBP_Sheik_Inventory_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.ExecuteUbergraph_WBP_Sheik_Inventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Inventory_C::ExecuteUbergraph_WBP_Sheik_Inventory(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Inventory.WBP_Sheik_Inventory_C.ExecuteUbergraph_WBP_Sheik_Inventory");
		
		UWBP_Sheik_Inventory_C_ExecuteUbergraph_WBP_Sheik_Inventory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Inventory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Inventory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Inventory.WBP_Sheik_Inventory_C");
		return ptr;
	}

}


