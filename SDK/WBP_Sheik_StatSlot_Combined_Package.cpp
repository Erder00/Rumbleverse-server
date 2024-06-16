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
	 * 		Name   -> Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.GetCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikCharacter*                             Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_StatSlot_Combined_C::GetCharacter(class ASheikCharacter** Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.GetCharacter");
		
		UWBP_Sheik_StatSlot_Combined_C_GetCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.Hide Pip Child
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_StatSlot_Combined_C::HidePipChild(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.Hide Pip Child");
		
		UWBP_Sheik_StatSlot_Combined_C_HidePipChild_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.ResetPips
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_StatSlot_Combined_C::ResetPips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.ResetPips");
		
		UWBP_Sheik_StatSlot_Combined_C_ResetPips_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.Setup Pip Child
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikModValueType                                 Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Base                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_StatSlot_Combined_C::SetupPipChild(ESheikModValueType Type, bool Base, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.Setup Pip Child");
		
		UWBP_Sheik_StatSlot_Combined_C_SetupPipChild_Params params {};
		params.Type = Type;
		params.Base = Base;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.ResetIconAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_StatSlot_Combined_C::ResetIconAnim(class UWidgetAnimation* InAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.ResetIconAnim");
		
		UWBP_Sheik_StatSlot_Combined_C_ResetIconAnim_Params params {};
		params.InAnimation = InAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.PlayIconAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_StatSlot_Combined_C::PlayIconAnim(class UWidgetAnimation* InAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.PlayIconAnim");
		
		UWBP_Sheik_StatSlot_Combined_C_PlayIconAnim_Params params {};
		params.InAnimation = InAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.SetPips
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_StatSlot_Combined_C::SetPips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.SetPips");
		
		UWBP_Sheik_StatSlot_Combined_C_SetPips_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.OnShouldDisplayUseItemPrompt_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldDisplay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EIGItemType                                        ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_StatSlot_Combined_C::OnShouldDisplayUseItemPrompt_cb(bool ShouldDisplay, EIGItemType ItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.OnShouldDisplayUseItemPrompt_cb");
		
		UWBP_Sheik_StatSlot_Combined_C_OnShouldDisplayUseItemPrompt_cb_Params params {};
		params.ShouldDisplay = ShouldDisplay;
		params.ItemType = ItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.SetIsSpectator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_StatSlot_Combined_C::SetIsSpectator(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.SetIsSpectator");
		
		UWBP_Sheik_StatSlot_Combined_C_SetIsSpectator_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.SetForPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikPlayerStateCommon*                     SheikPlayerState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_StatSlot_Combined_C::SetForPlayer(class ASheikPlayerStateCommon* SheikPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.SetForPlayer");
		
		UWBP_Sheik_StatSlot_Combined_C_SetForPlayer_Params params {};
		params.SheikPlayerState = SheikPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.HandleOnSpectatorInfoUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikSpectatorInfo                         SpectatorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_StatSlot_Combined_C::HandleOnSpectatorInfoUpdated(struct FSheikSpectatorInfo* SpectatorInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.HandleOnSpectatorInfoUpdated");
		
		UWBP_Sheik_StatSlot_Combined_C_HandleOnSpectatorInfoUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpectatorInfo != nullptr)
			*SpectatorInfo = params.SpectatorInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.CheckIsAtMax
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_StatSlot_Combined_C::CheckIsAtMax()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.CheckIsAtMax");
		
		UWBP_Sheik_StatSlot_Combined_C_CheckIsAtMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.On Sheik Mod Value Changed Cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikModValueType                                 Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_StatSlot_Combined_C::OnSheikModValueChangedCb(ESheikModValueType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.On Sheik Mod Value Changed Cb");
		
		UWBP_Sheik_StatSlot_Combined_C_OnSheikModValueChangedCb_Params params {};
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_StatSlot_Combined_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.PreConstruct");
		
		UWBP_Sheik_StatSlot_Combined_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_StatSlot_Combined_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.ConstructOnlyOnce");
		
		UWBP_Sheik_StatSlot_Combined_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.ExecuteUbergraph_WBP_Sheik_StatSlot_Combined
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_StatSlot_Combined_C::ExecuteUbergraph_WBP_Sheik_StatSlot_Combined(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C.ExecuteUbergraph_WBP_Sheik_StatSlot_Combined");
		
		UWBP_Sheik_StatSlot_Combined_C_ExecuteUbergraph_WBP_Sheik_StatSlot_Combined_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_StatSlot_Combined_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_StatSlot_Combined_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_StatSlot_Combined.WBP_Sheik_StatSlot_Combined_C");
		return ptr;
	}

}


