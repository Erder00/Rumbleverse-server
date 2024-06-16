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
	 * 		Name   -> Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.UpdateSpecialMovePromtText
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenMagazineEquip_C::UpdateSpecialMovePromtText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.UpdateSpecialMovePromtText");
		
		UWBP_Sheik_ScreenMagazineEquip_C_UpdateSpecialMovePromtText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.SpawnEffectsIcons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVerticalBox*                                VerticalBox                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<EIGSpecialMoveEffect>                       SpecialEffect                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_ScreenMagazineEquip_C::SpawnEffectsIcons(class UVerticalBox** VerticalBox, TArray<EIGSpecialMoveEffect>* SpecialEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.SpawnEffectsIcons");
		
		UWBP_Sheik_ScreenMagazineEquip_C_SpawnEffectsIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VerticalBox != nullptr)
			*VerticalBox = params.VerticalBox;
		if (SpecialEffect != nullptr)
			*SpecialEffect = params.SpecialEffect;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.OnSpecialTwoInput_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             Input                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ScreenMagazineEquip_C::OnSpecialTwoInput_cb(const struct FInputEventData& Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.OnSpecialTwoInput_cb");
		
		UWBP_Sheik_ScreenMagazineEquip_C_OnSpecialTwoInput_cb_Params params {};
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.OnSpecialOneInput_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             Input                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ScreenMagazineEquip_C::OnSpecialOneInput_cb(const struct FInputEventData& Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.OnSpecialOneInput_cb");
		
		UWBP_Sheik_ScreenMagazineEquip_C_OnSpecialOneInput_cb_Params params {};
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.PopulatePropertiesBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVerticalBox*                                Box                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FS_Sheik_SpecialMoveProperty>        PropertyData                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_ScreenMagazineEquip_C::PopulatePropertiesBox(class UVerticalBox** Box, TArray<struct FS_Sheik_SpecialMoveProperty>* PropertyData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.PopulatePropertiesBox");
		
		UWBP_Sheik_ScreenMagazineEquip_C_PopulatePropertiesBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Box != nullptr)
			*Box = params.Box;
		if (PropertyData != nullptr)
			*PropertyData = params.PropertyData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.ChoosePerk_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ScreenMagazineEquip_C::ChoosePerk_cb(const struct FInputEventData& InputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.ChoosePerk_cb");
		
		UWBP_Sheik_ScreenMagazineEquip_C_ChoosePerk_cb_Params params {};
		params.InputEvent = InputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.UpdateSpecialToEquip
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenMagazineEquip_C::UpdateSpecialToEquip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.UpdateSpecialToEquip");
		
		UWBP_Sheik_ScreenMagazineEquip_C_UpdateSpecialToEquip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.CloseEquipScreen
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenMagazineEquip_C::CloseEquipScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.CloseEquipScreen");
		
		UWBP_Sheik_ScreenMagazineEquip_C_CloseEquipScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenMagazineEquip_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.ConstructOnlyOnce");
		
		UWBP_Sheik_ScreenMagazineEquip_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.ShowNewMoveToEquip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGMoveMontage*                              MoveMontage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMoveTier                                          MoveTier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenMagazineEquip_C::ShowNewMoveToEquip(class UIGMoveMontage* MoveMontage, EMoveTier MoveTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.ShowNewMoveToEquip");
		
		UWBP_Sheik_ScreenMagazineEquip_C_ShowNewMoveToEquip_Params params {};
		params.MoveMontage = MoveMontage;
		params.MoveTier = MoveTier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.OnGainFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenMagazineEquip_C::OnGainFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.OnGainFocus");
		
		UWBP_Sheik_ScreenMagazineEquip_C_OnGainFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.OnLoseFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenMagazineEquip_C::OnLoseFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.OnLoseFocus");
		
		UWBP_Sheik_ScreenMagazineEquip_C_OnLoseFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.SubscribeToInputEvents
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenMagazineEquip_C::SubscribeToInputEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.SubscribeToInputEvents");
		
		UWBP_Sheik_ScreenMagazineEquip_C_SubscribeToInputEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.ExecuteUbergraph_WBP_Sheik_ScreenMagazineEquip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenMagazineEquip_C::ExecuteUbergraph_WBP_Sheik_ScreenMagazineEquip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.ExecuteUbergraph_WBP_Sheik_ScreenMagazineEquip");
		
		UWBP_Sheik_ScreenMagazineEquip_C_ExecuteUbergraph_WBP_Sheik_ScreenMagazineEquip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_ScreenMagazineEquip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_ScreenMagazineEquip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C");
		return ptr;
	}

}


