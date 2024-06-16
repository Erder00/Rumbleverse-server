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
	 * 		Name   -> Function WBP_ScreenHud.WBP_ScreenHud_C.SetSpecialMovesNotWinded
	 * 		Flags  -> ()
	 */
	void UWBP_ScreenHud_C::SetSpecialMovesNotWinded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScreenHud.WBP_ScreenHud_C.SetSpecialMovesNotWinded");
		
		UWBP_ScreenHud_C_SetSpecialMovesNotWinded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScreenHud.WBP_ScreenHud_C.ShowEOMScreen
	 * 		Flags  -> ()
	 */
	void UWBP_ScreenHud_C::ShowEOMScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScreenHud.WBP_ScreenHud_C.ShowEOMScreen");
		
		UWBP_ScreenHud_C_ShowEOMScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScreenHud.WBP_ScreenHud_C.OnTimeTillFreeRoamEnds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TimeTillFreeRoamEnd                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ScreenHud_C::OnTimeTillFreeRoamEnds(int32_t TimeTillFreeRoamEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScreenHud.WBP_ScreenHud_C.OnTimeTillFreeRoamEnds");
		
		UWBP_ScreenHud_C_OnTimeTillFreeRoamEnds_Params params {};
		params.TimeTillFreeRoamEnd = TimeTillFreeRoamEnd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScreenHud.WBP_ScreenHud_C.IsPlaygroundMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ScreenHud_C::IsPlaygroundMode(bool* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScreenHud.WBP_ScreenHud_C.IsPlaygroundMode");
		
		UWBP_ScreenHud_C_IsPlaygroundMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScreenHud.WBP_ScreenHud_C.OpenPlaygroundPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ReadableContent                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_ScreenHud_C::OpenPlaygroundPopup(const struct FDataTableRowHandle& ReadableContent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScreenHud.WBP_ScreenHud_C.OpenPlaygroundPopup");
		
		UWBP_ScreenHud_C_OpenPlaygroundPopup_Params params {};
		params.ReadableContent = ReadableContent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScreenHud.WBP_ScreenHud_C.SetHudRegionVisibility
	 * 		Flags  -> ()
	 */
	void UWBP_ScreenHud_C::SetHudRegionVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScreenHud.WBP_ScreenHud_C.SetHudRegionVisibility");
		
		UWBP_ScreenHud_C_SetHudRegionVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScreenHud.WBP_ScreenHud_C.GetHudRegionVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikHudRegion                                    HudRegion                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   OutVisibility                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ScreenHud_C::GetHudRegionVisibility(ESheikHudRegion HudRegion, ESlateVisibility* OutVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScreenHud.WBP_ScreenHud_C.GetHudRegionVisibility");
		
		UWBP_ScreenHud_C_GetHudRegionVisibility_Params params {};
		params.HudRegion = HudRegion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutVisibility != nullptr)
			*OutVisibility = params.OutVisibility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScreenHud.WBP_ScreenHud_C.ToggleHudRegionVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikHudRegion                                    InRegion                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ScreenHud_C::ToggleHudRegionVisibility(ESheikHudRegion InRegion, bool InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScreenHud.WBP_ScreenHud_C.ToggleHudRegionVisibility");
		
		UWBP_ScreenHud_C_ToggleHudRegionVisibility_Params params {};
		params.InRegion = InRegion;
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScreenHud.WBP_ScreenHud_C.HandleOnGoingToBackground
	 * 		Flags  -> ()
	 */
	void UWBP_ScreenHud_C::HandleOnGoingToBackground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScreenHud.WBP_ScreenHud_C.HandleOnGoingToBackground");
		
		UWBP_ScreenHud_C_HandleOnGoingToBackground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScreenHud.WBP_ScreenHud_C.OpenMagazineEquipScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGMoveMontage*                              MoveMontage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMoveTier                                          MoveTier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ScreenHud_C::OpenMagazineEquipScreen(class UIGMoveMontage* MoveMontage, EMoveTier MoveTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScreenHud.WBP_ScreenHud_C.OpenMagazineEquipScreen");
		
		UWBP_ScreenHud_C_OpenMagazineEquipScreen_Params params {};
		params.MoveMontage = MoveMontage;
		params.MoveTier = MoveTier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScreenHud.WBP_ScreenHud_C.OnRoundFinished_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AIGPlayerState*>                      WinningPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               isLocalPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsSpectating                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ScreenHud_C::OnRoundFinished_cb(TArray<class AIGPlayerState*>* WinningPlayer, bool isLocalPlayer, bool IsSpectating)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScreenHud.WBP_ScreenHud_C.OnRoundFinished_cb");
		
		UWBP_ScreenHud_C_OnRoundFinished_cb_Params params {};
		params.isLocalPlayer = isLocalPlayer;
		params.IsSpectating = IsSpectating;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WinningPlayer != nullptr)
			*WinningPlayer = params.WinningPlayer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScreenHud.WBP_ScreenHud_C.OpenMapScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_ScreenHud_C::OpenMapScreen(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScreenHud.WBP_ScreenHud_C.OpenMapScreen");
		
		UWBP_ScreenHud_C_OpenMapScreen_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScreenHud.WBP_ScreenHud_C.OpenPauseScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_ScreenHud_C::OpenPauseScreen(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScreenHud.WBP_ScreenHud_C.OpenPauseScreen");
		
		UWBP_ScreenHud_C_OpenPauseScreen_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScreenHud.WBP_ScreenHud_C.DebugToggleVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_ScreenHud_C::DebugToggleVisibility(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScreenHud.WBP_ScreenHud_C.DebugToggleVisibility");
		
		UWBP_ScreenHud_C_DebugToggleVisibility_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScreenHud.WBP_ScreenHud_C.OnLoseFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ScreenHud_C::OnLoseFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScreenHud.WBP_ScreenHud_C.OnLoseFocus");
		
		UWBP_ScreenHud_C_OnLoseFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScreenHud.WBP_ScreenHud_C.ShowPlaygroundModeBeginPopup
	 * 		Flags  -> ()
	 */
	void UWBP_ScreenHud_C::ShowPlaygroundModeBeginPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScreenHud.WBP_ScreenHud_C.ShowPlaygroundModeBeginPopup");
		
		UWBP_ScreenHud_C_ShowPlaygroundModeBeginPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScreenHud.WBP_ScreenHud_C.ExecBP_TestWinnerPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Param1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Param2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Param3                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Param4                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_ScreenHud_C::ExecBP_TestWinnerPrompt(const class FString& Param1, const class FString& Param2, const class FString& Param3, const class FString& Param4)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScreenHud.WBP_ScreenHud_C.ExecBP_TestWinnerPrompt");
		
		UWBP_ScreenHud_C_ExecBP_TestWinnerPrompt_Params params {};
		params.Param1 = Param1;
		params.Param2 = Param2;
		params.Param3 = Param3;
		params.Param4 = Param4;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScreenHud.WBP_ScreenHud_C.HideWinnerPrompt
	 * 		Flags  -> ()
	 */
	void UWBP_ScreenHud_C::HideWinnerPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScreenHud.WBP_ScreenHud_C.HideWinnerPrompt");
		
		UWBP_ScreenHud_C_HideWinnerPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScreenHud.WBP_ScreenHud_C.OnGainFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ScreenHud_C::OnGainFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScreenHud.WBP_ScreenHud_C.OnGainFocus");
		
		UWBP_ScreenHud_C_OnGainFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScreenHud.WBP_ScreenHud_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_ScreenHud_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScreenHud.WBP_ScreenHud_C.ConstructOnlyOnce");
		
		UWBP_ScreenHud_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScreenHud.WBP_ScreenHud_C.ExecuteUbergraph_WBP_ScreenHud
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ScreenHud_C::ExecuteUbergraph_WBP_ScreenHud(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScreenHud.WBP_ScreenHud_C.ExecuteUbergraph_WBP_ScreenHud");
		
		UWBP_ScreenHud_C_ExecuteUbergraph_WBP_ScreenHud_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScreenHud.WBP_ScreenHud_C.OnMinigameInput__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikMinigameResults                       MinigameResults                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_ScreenHud_C::OnMinigameInput__DelegateSignature(const struct FSheikMinigameResults& MinigameResults)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScreenHud.WBP_ScreenHud_C.OnMinigameInput__DelegateSignature");
		
		UWBP_ScreenHud_C_OnMinigameInput__DelegateSignature_Params params {};
		params.MinigameResults = MinigameResults;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScreenHud.WBP_ScreenHud_C.OnMinigameStarted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikMinigameInfo                          MinigameInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_ScreenHud_C::OnMinigameStarted__DelegateSignature(const struct FSheikMinigameInfo& MinigameInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScreenHud.WBP_ScreenHud_C.OnMinigameStarted__DelegateSignature");
		
		UWBP_ScreenHud_C_OnMinigameStarted__DelegateSignature_Params params {};
		params.MinigameInfo = MinigameInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ScreenHud_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ScreenHud_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ScreenHud.WBP_ScreenHud_C");
		return ptr;
	}

}


