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
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.GetOptionIndexForAutoRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ContextName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Game_C::GetOptionIndexForAutoRelease(const class FName& ContextName, bool* Value, int32_t* index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.GetOptionIndexForAutoRelease");
		
		UWBP_Sheik_Settings_Game_C_GetOptionIndexForAutoRelease_Params params {};
		params.ContextName = ContextName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		if (index != nullptr)
			*index = params.index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.GetOptionIndexForCombatBehavior
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        BehaviorName                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EIGCombatContextBehavior                           Behavior                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OptionIndex                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Game_C::GetOptionIndexForCombatBehavior(const class FName& BehaviorName, EIGCombatContextBehavior* Behavior, int32_t* OptionIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.GetOptionIndexForCombatBehavior");
		
		UWBP_Sheik_Settings_Game_C_GetOptionIndexForCombatBehavior_Params params {};
		params.BehaviorName = BehaviorName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Behavior != nullptr)
			*Behavior = params.Behavior;
		if (OptionIndex != nullptr)
			*OptionIndex = params.OptionIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.RefreshCombatSettings
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Game_C::RefreshCombatSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.RefreshCombatSettings");
		
		UWBP_Sheik_Settings_Game_C_RefreshCombatSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.RefreshCameraSettings
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Game_C::RefreshCameraSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.RefreshCameraSettings");
		
		UWBP_Sheik_Settings_Game_C_RefreshCameraSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.RefreshPressAndHoldInput
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Game_C::RefreshPressAndHoldInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.RefreshPressAndHoldInput");
		
		UWBP_Sheik_Settings_Game_C_RefreshPressAndHoldInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.AreCreditsVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Settings_Game_C::AreCreditsVisible(bool* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.AreCreditsVisible");
		
		UWBP_Sheik_Settings_Game_C_AreCreditsVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.GetNavigableWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UIGUI_WidgetBase*>                    NavigableWidgets                                           (Parm, OutParm, ContainsInstancedReference)
	 */
	void UWBP_Sheik_Settings_Game_C::GetNavigableWidgets(TArray<class UIGUI_WidgetBase*>* NavigableWidgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.GetNavigableWidgets");
		
		UWBP_Sheik_Settings_Game_C_GetNavigableWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NavigableWidgets != nullptr)
			*NavigableWidgets = params.NavigableWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.ToggleHudRegion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESheikHudRegion                                    InHudRegion                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Game_C::ToggleHudRegion(int32_t InOption, ESheikHudRegion InHudRegion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.ToggleHudRegion");
		
		UWBP_Sheik_Settings_Game_C_ToggleHudRegion_Params params {};
		params.InOption = InOption;
		params.InHudRegion = InHudRegion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.SetHudRegionControlDefaultValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Sheik_MultiToggle_C*                    InWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESheikHudRegion                                    HudRegion                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Game_C::SetHudRegionControlDefaultValue(class UWBP_Sheik_MultiToggle_C** InWidget, ESheikHudRegion HudRegion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.SetHudRegionControlDefaultValue");
		
		UWBP_Sheik_Settings_Game_C_SetHudRegionControlDefaultValue_Params params {};
		params.HudRegion = HudRegion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InWidget != nullptr)
			*InWidget = params.InWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__KnockOutFeedToggle_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Game_C::BndEvt__KnockOutFeedToggle_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__KnockOutFeedToggle_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Game_C_BndEvt__KnockOutFeedToggle_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__PerkHudToggle_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Game_C::BndEvt__PerkHudToggle_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__PerkHudToggle_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Game_C_BndEvt__PerkHudToggle_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.OnActivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Game_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.OnActivated");
		
		UWBP_Sheik_Settings_Game_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.OnDeactivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Game_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.OnDeactivated");
		
		UWBP_Sheik_Settings_Game_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__AdvanceLockerRoomToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Game_C::BndEvt__AdvanceLockerRoomToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__AdvanceLockerRoomToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Game_C_BndEvt__AdvanceLockerRoomToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__CameraTraversalFollowToggle_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Game_C::BndEvt__CameraTraversalFollowToggle_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__CameraTraversalFollowToggle_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Game_C_BndEvt__CameraTraversalFollowToggle_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__CameraClimbingFollowToggle_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Game_C::BndEvt__CameraClimbingFollowToggle_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__CameraClimbingFollowToggle_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Game_C_BndEvt__CameraClimbingFollowToggle_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__CameraCombatFollowToggle_K2Node_ComponentBoundEvent_11_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Game_C::BndEvt__CameraCombatFollowToggle_K2Node_ComponentBoundEvent_11_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__CameraCombatFollowToggle_K2Node_ComponentBoundEvent_11_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Game_C_BndEvt__CameraCombatFollowToggle_K2Node_ComponentBoundEvent_11_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__InputHudToggle_K2Node_ComponentBoundEvent_1_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Game_C::BndEvt__InputHudToggle_K2Node_ComponentBoundEvent_1_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__InputHudToggle_K2Node_ComponentBoundEvent_1_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Game_C_BndEvt__InputHudToggle_K2Node_ComponentBoundEvent_1_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__WBP_Sheik_Settings_Game_UIHoldsToggle_K2Node_ComponentBoundEvent_4_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Game_C::BndEvt__WBP_Sheik_Settings_Game_UIHoldsToggle_K2Node_ComponentBoundEvent_4_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__WBP_Sheik_Settings_Game_UIHoldsToggle_K2Node_ComponentBoundEvent_4_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Game_C_BndEvt__WBP_Sheik_Settings_Game_UIHoldsToggle_K2Node_ComponentBoundEvent_4_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__DamageNumbersToggle_K2Node_ComponentBoundEvent_0_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Game_C::BndEvt__DamageNumbersToggle_K2Node_ComponentBoundEvent_0_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__DamageNumbersToggle_K2Node_ComponentBoundEvent_0_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Game_C_BndEvt__DamageNumbersToggle_K2Node_ComponentBoundEvent_0_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Game_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.ConstructOnlyOnce");
		
		UWBP_Sheik_Settings_Game_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__ChopCharge_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Game_C::BndEvt__ChopCharge_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__ChopCharge_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Game_C_BndEvt__ChopCharge_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__WeaponAttackCharge_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Game_C::BndEvt__WeaponAttackCharge_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__WeaponAttackCharge_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Game_C_BndEvt__WeaponAttackCharge_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__AutoFinishWeaponCombo_K2Node_ComponentBoundEvent_15_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Game_C::BndEvt__AutoFinishWeaponCombo_K2Node_ComponentBoundEvent_15_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__AutoFinishWeaponCombo_K2Node_ComponentBoundEvent_15_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Game_C_BndEvt__AutoFinishWeaponCombo_K2Node_ComponentBoundEvent_15_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__Block_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Game_C::BndEvt__Block_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__Block_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Game_C_BndEvt__Block_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__RepeatedDash_K2Node_ComponentBoundEvent_8_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Game_C::BndEvt__RepeatedDash_K2Node_ComponentBoundEvent_8_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__RepeatedDash_K2Node_ComponentBoundEvent_8_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Game_C_BndEvt__RepeatedDash_K2Node_ComponentBoundEvent_8_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__WBP_Sheik_Settings_Game_AutoChopAttackCombo_K2Node_ComponentBoundEvent_24_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Game_C::BndEvt__WBP_Sheik_Settings_Game_AutoChopAttackCombo_K2Node_ComponentBoundEvent_24_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__WBP_Sheik_Settings_Game_AutoChopAttackCombo_K2Node_ComponentBoundEvent_24_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Game_C_BndEvt__WBP_Sheik_Settings_Game_AutoChopAttackCombo_K2Node_ComponentBoundEvent_24_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__AutoReleaseChargedChop_K2Node_ComponentBoundEvent_11_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Game_C::BndEvt__AutoReleaseChargedChop_K2Node_ComponentBoundEvent_11_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__AutoReleaseChargedChop_K2Node_ComponentBoundEvent_11_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Game_C_BndEvt__AutoReleaseChargedChop_K2Node_ComponentBoundEvent_11_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__WBP_Sheik_Settings_Accessibility_ViciousAttack_K2Node_ComponentBoundEvent_16_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Game_C::BndEvt__WBP_Sheik_Settings_Accessibility_ViciousAttack_K2Node_ComponentBoundEvent_16_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__WBP_Sheik_Settings_Accessibility_ViciousAttack_K2Node_ComponentBoundEvent_16_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Game_C_BndEvt__WBP_Sheik_Settings_Accessibility_ViciousAttack_K2Node_ComponentBoundEvent_16_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__WBP_Sheik_Settings_Accessibility_AutoReleaseChargedVicious_K2Node_ComponentBoundEvent_14_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Game_C::BndEvt__WBP_Sheik_Settings_Accessibility_AutoReleaseChargedVicious_K2Node_ComponentBoundEvent_14_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__WBP_Sheik_Settings_Accessibility_AutoReleaseChargedVicious_K2Node_ComponentBoundEvent_14_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Game_C_BndEvt__WBP_Sheik_Settings_Accessibility_AutoReleaseChargedVicious_K2Node_ComponentBoundEvent_14_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__SpecialAttackCharge_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Game_C::BndEvt__SpecialAttackCharge_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__SpecialAttackCharge_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Game_C_BndEvt__SpecialAttackCharge_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__AutoRealeaseChargedSpecialMove_K2Node_ComponentBoundEvent_13_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Game_C::BndEvt__AutoRealeaseChargedSpecialMove_K2Node_ComponentBoundEvent_13_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__AutoRealeaseChargedSpecialMove_K2Node_ComponentBoundEvent_13_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Game_C_BndEvt__AutoRealeaseChargedSpecialMove_K2Node_ComponentBoundEvent_13_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__WeaponAiming_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Game_C::BndEvt__WeaponAiming_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__WeaponAiming_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Game_C_BndEvt__WeaponAiming_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__AutoRealeaseChargedWeaponAttack_K2Node_ComponentBoundEvent_12_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Game_C::BndEvt__AutoRealeaseChargedWeaponAttack_K2Node_ComponentBoundEvent_12_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__AutoRealeaseChargedWeaponAttack_K2Node_ComponentBoundEvent_12_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Game_C_BndEvt__AutoRealeaseChargedWeaponAttack_K2Node_ComponentBoundEvent_12_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.ExecuteUbergraph_WBP_Sheik_Settings_Game
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Game_C::ExecuteUbergraph_WBP_Sheik_Settings_Game(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.ExecuteUbergraph_WBP_Sheik_Settings_Game");
		
		UWBP_Sheik_Settings_Game_C_ExecuteUbergraph_WBP_Sheik_Settings_Game_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Settings_Game_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Settings_Game_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C");
		return ptr;
	}

}


