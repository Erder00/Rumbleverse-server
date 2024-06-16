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
	 * 		Name   -> Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.IsSpecialMoveAssigned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSpecialMoveAssigned                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_HudSpecialMoveSlot_C::IsSpecialMoveAssigned(bool* IsSpecialMoveAssigned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.IsSpecialMoveAssigned");
		
		UWBP_Sheik_HudSpecialMoveSlot_C_IsSpecialMoveAssigned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSpecialMoveAssigned != nullptr)
			*IsSpecialMoveAssigned = params.IsSpecialMoveAssigned;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.HandleOnSpectatorInfoChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikSpectatorInfo                         SpectatorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_HudSpecialMoveSlot_C::HandleOnSpectatorInfoChanged(struct FSheikSpectatorInfo* SpectatorInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.HandleOnSpectatorInfoChanged");
		
		UWBP_Sheik_HudSpecialMoveSlot_C_HandleOnSpectatorInfoChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpectatorInfo != nullptr)
			*SpectatorInfo = params.SpectatorInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.On No Longer Winded
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_HudSpecialMoveSlot_C::OnNoLongerWinded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.On No Longer Winded");
		
		UWBP_Sheik_HudSpecialMoveSlot_C_OnNoLongerWinded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.On Winded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StaminaPercentage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_HudSpecialMoveSlot_C::OnWinded(float StaminaPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.On Winded");
		
		UWBP_Sheik_HudSpecialMoveSlot_C_OnWinded_Params params {};
		params.StaminaPercentage = StaminaPercentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.RefreshUsableVisuals
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_HudSpecialMoveSlot_C::RefreshUsableVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.RefreshUsableVisuals");
		
		UWBP_Sheik_HudSpecialMoveSlot_C_RefreshUsableVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.OnSpecialStatusChanged_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UIGMoveMontage*                              Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Usable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_HudSpecialMoveSlot_C::OnSpecialStatusChanged_cb(int32_t SlotIndex, class UIGMoveMontage* Montage, bool Usable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.OnSpecialStatusChanged_cb");
		
		UWBP_Sheik_HudSpecialMoveSlot_C_OnSpecialStatusChanged_cb_Params params {};
		params.SlotIndex = SlotIndex;
		params.Montage = Montage;
		params.Usable = Usable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.ShowSpecialMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_HudSpecialMoveSlot_C::ShowSpecialMove(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.ShowSpecialMove");
		
		UWBP_Sheik_HudSpecialMoveSlot_C_ShowSpecialMove_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.SetDisplayValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        MoveLabel                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UTexture2D*                                  MoveIcon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                StatColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  BackgroundTexture                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  TierCoin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_HudSpecialMoveSlot_C::SetDisplayValues(const class FText& MoveLabel, class UTexture2D* MoveIcon, const struct FLinearColor& StatColor, class UTexture2D* BackgroundTexture, class UTexture2D* TierCoin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.SetDisplayValues");
		
		UWBP_Sheik_HudSpecialMoveSlot_C_SetDisplayValues_Params params {};
		params.MoveLabel = MoveLabel;
		params.MoveIcon = MoveIcon;
		params.StatColor = StatColor;
		params.BackgroundTexture = BackgroundTexture;
		params.TierCoin = TierCoin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.On Item Slot Updated Cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGInventorySlot                                   Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FIGItemDisplayInfo                          IGItemDisplayInfo                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_HudSpecialMoveSlot_C::OnItemSlotUpdatedCb(EIGInventorySlot Slot, bool Success, const struct FIGItemDisplayInfo& IGItemDisplayInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.On Item Slot Updated Cb");
		
		UWBP_Sheik_HudSpecialMoveSlot_C_OnItemSlotUpdatedCb_Params params {};
		params.Slot = Slot;
		params.Success = Success;
		params.IGItemDisplayInfo = IGItemDisplayInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.SetShouldStayHidden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldBeHidden                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_HudSpecialMoveSlot_C::SetShouldStayHidden(bool ShouldBeHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.SetShouldStayHidden");
		
		UWBP_Sheik_HudSpecialMoveSlot_C_SetShouldStayHidden_Params params {};
		params.ShouldBeHidden = ShouldBeHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.SetForPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikPlayerStateCommon*                     SheikPlayerState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_HudSpecialMoveSlot_C::SetForPlayer(class ASheikPlayerStateCommon* SheikPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.SetForPlayer");
		
		UWBP_Sheik_HudSpecialMoveSlot_C_SetForPlayer_Params params {};
		params.SheikPlayerState = SheikPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.SetInitialMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikCharacter*                             InCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_HudSpecialMoveSlot_C::SetInitialMove(class ASheikCharacter* InCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.SetInitialMove");
		
		UWBP_Sheik_HudSpecialMoveSlot_C_SetInitialMove_Params params {};
		params.InCharacter = InCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.OnSpecialMoveChanged_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGMoveMontage*                              SpecialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SlotIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMoveTier                                          SpecialMoveTier                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_HudSpecialMoveSlot_C::OnSpecialMoveChanged_cb(class UIGMoveMontage* SpecialMove, int32_t SlotIndex, EMoveTier SpecialMoveTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.OnSpecialMoveChanged_cb");
		
		UWBP_Sheik_HudSpecialMoveSlot_C_OnSpecialMoveChanged_cb_Params params {};
		params.SpecialMove = SpecialMove;
		params.SlotIndex = SlotIndex;
		params.SpecialMoveTier = SpecialMoveTier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.UpdateInputVisuals
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_HudSpecialMoveSlot_C::UpdateInputVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.UpdateInputVisuals");
		
		UWBP_Sheik_HudSpecialMoveSlot_C_UpdateInputVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_HudSpecialMoveSlot_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.ConstructOnlyOnce");
		
		UWBP_Sheik_HudSpecialMoveSlot_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_HudSpecialMoveSlot_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.PreConstruct");
		
		UWBP_Sheik_HudSpecialMoveSlot_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.ExecuteUbergraph_WBP_Sheik_HudSpecialMoveSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_HudSpecialMoveSlot_C::ExecuteUbergraph_WBP_Sheik_HudSpecialMoveSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C.ExecuteUbergraph_WBP_Sheik_HudSpecialMoveSlot");
		
		UWBP_Sheik_HudSpecialMoveSlot_C_ExecuteUbergraph_WBP_Sheik_HudSpecialMoveSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_HudSpecialMoveSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_HudSpecialMoveSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_HudSpecialMoveSlot.WBP_Sheik_HudSpecialMoveSlot_C");
		return ptr;
	}

}


