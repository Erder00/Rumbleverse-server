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
	 * 		Name   -> Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.DisplayInputPrompts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DisplayPrompts                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Reps_LP_C::DisplayInputPrompts(bool DisplayPrompts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.DisplayInputPrompts");
		
		UWBP_Sheik_Reps_LP_C_DisplayInputPrompts_Params params {};
		params.DisplayPrompts = DisplayPrompts;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.PlayUISound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPlaySound                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EUISounds                                          SoundType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Reps_LP_C::PlayUISound(bool bPlaySound, EUISounds SoundType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.PlayUISound");
		
		UWBP_Sheik_Reps_LP_C_PlayUISound_Params params {};
		params.bPlaySound = bPlaySound;
		params.SoundType = SoundType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.SetWeeklyChallenges
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Reps_LP_C::SetWeeklyChallenges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.SetWeeklyChallenges");
		
		UWBP_Sheik_Reps_LP_C_SetWeeklyChallenges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.OnPreviewMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_Sheik_Reps_LP_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.OnPreviewMouseButtonDown");
		
		UWBP_Sheik_Reps_LP_C_OnPreviewMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.HandleOnNewRepAcquired_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRepUIData                                  OutNewRep                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_Reps_LP_C::HandleOnNewRepAcquired_cb(const struct FRepUIData& OutNewRep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.HandleOnNewRepAcquired_cb");
		
		UWBP_Sheik_Reps_LP_C_HandleOnNewRepAcquired_cb_Params params {};
		params.OutNewRep = OutNewRep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.OnRemoveThisRepFromUI_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Sheik_RepMenuEntry_C*                   This                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Reps_LP_C::OnRemoveThisRepFromUI_cb(class UWBP_Sheik_RepMenuEntry_C* This)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.OnRemoveThisRepFromUI_cb");
		
		UWBP_Sheik_Reps_LP_C_OnRemoveThisRepFromUI_cb_Params params {};
		params.This = This;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.SetDailyChallenges
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Reps_LP_C::SetDailyChallenges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.SetDailyChallenges");
		
		UWBP_Sheik_Reps_LP_C_SetDailyChallenges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.BackPressed_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Reps_LP_C::BackPressed_cb(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.BackPressed_cb");
		
		UWBP_Sheik_Reps_LP_C_BackPressed_cb_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.AddRepsToWidget
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Reps_LP_C::AddRepsToWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.AddRepsToWidget");
		
		UWBP_Sheik_Reps_LP_C_AddRepsToWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.RefreshReps
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Reps_LP_C::RefreshReps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.RefreshReps");
		
		UWBP_Sheik_Reps_LP_C_RefreshReps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Reps_LP_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.ConstructOnlyOnce");
		
		UWBP_Sheik_Reps_LP_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Reps_LP_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.PreConstruct");
		
		UWBP_Sheik_Reps_LP_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.ExecuteUbergraph_WBP_Sheik_Reps_LP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Reps_LP_C::ExecuteUbergraph_WBP_Sheik_Reps_LP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.ExecuteUbergraph_WBP_Sheik_Reps_LP");
		
		UWBP_Sheik_Reps_LP_C_ExecuteUbergraph_WBP_Sheik_Reps_LP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.OnRepsWidgetClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Reps_LP_C::OnRepsWidgetClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C.OnRepsWidgetClicked__DelegateSignature");
		
		UWBP_Sheik_Reps_LP_C_OnRepsWidgetClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Reps_LP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Reps_LP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Reps_LP.WBP_Sheik_Reps_LP_C");
		return ptr;
	}

}


