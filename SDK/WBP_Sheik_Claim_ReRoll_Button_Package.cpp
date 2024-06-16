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
	 * 		Name   -> Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.SetPressAndHoldOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InPressAndHold                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ClaimReRoll_Button_C::SetPressAndHoldOverride(bool InPressAndHold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.SetPressAndHoldOverride");
		
		UWBP_Sheik_ClaimReRoll_Button_C_SetPressAndHoldOverride_Params params {};
		params.InPressAndHold = InPressAndHold;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.OnPreviewMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_Sheik_ClaimReRoll_Button_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.OnPreviewMouseButtonDown");
		
		UWBP_Sheik_ClaimReRoll_Button_C_OnPreviewMouseButtonDown_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.PlayClaimOrRerollSound
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ClaimReRoll_Button_C::PlayClaimOrRerollSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.PlayClaimOrRerollSound");
		
		UWBP_Sheik_ClaimReRoll_Button_C_PlayClaimOrRerollSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.PlayUISound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPlaySound                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EUISounds                                          SoundType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ClaimReRoll_Button_C::PlayUISound(bool bPlaySound, EUISounds SoundType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.PlayUISound");
		
		UWBP_Sheik_ClaimReRoll_Button_C_PlayUISound_Params params {};
		params.bPlaySound = bPlaySound;
		params.SoundType = SoundType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.PlayRerollAnim
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ClaimReRoll_Button_C::PlayRerollAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.PlayRerollAnim");
		
		UWBP_Sheik_ClaimReRoll_Button_C_PlayRerollAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.SetLabel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ClaimReRoll_Button_C::SetLabel(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.SetLabel");
		
		UWBP_Sheik_ClaimReRoll_Button_C_SetLabel_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.OnSelectedAnimationFinished
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ClaimReRoll_Button_C::OnSelectedAnimationFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.OnSelectedAnimationFinished");
		
		UWBP_Sheik_ClaimReRoll_Button_C_OnSelectedAnimationFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.GetButtonIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ClaimReRoll_Button_C::GetButtonIndex(int32_t* index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.GetButtonIndex");
		
		UWBP_Sheik_ClaimReRoll_Button_C_GetButtonIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (index != nullptr)
			*index = params.index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.SetDisabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDisabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ClaimReRoll_Button_C::SetDisabled(bool IsDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.SetDisabled");
		
		UWBP_Sheik_ClaimReRoll_Button_C_SetDisabled_Params params {};
		params.IsDisabled = IsDisabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.HandleSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ClaimReRoll_Button_C::HandleSelect(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.HandleSelect");
		
		UWBP_Sheik_ClaimReRoll_Button_C_HandleSelect_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.ApplyContentOnPreConstruct
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ClaimReRoll_Button_C::ApplyContentOnPreConstruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.ApplyContentOnPreConstruct");
		
		UWBP_Sheik_ClaimReRoll_Button_C_ApplyContentOnPreConstruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ClaimReRoll_Button_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.PreConstruct");
		
		UWBP_Sheik_ClaimReRoll_Button_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ClaimReRoll_Button_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.ConstructOnlyOnce");
		
		UWBP_Sheik_ClaimReRoll_Button_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.OnDisabled
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ClaimReRoll_Button_C::OnDisabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.OnDisabled");
		
		UWBP_Sheik_ClaimReRoll_Button_C_OnDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.OnEnabled
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ClaimReRoll_Button_C::OnEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.OnEnabled");
		
		UWBP_Sheik_ClaimReRoll_Button_C_OnEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.OnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ClaimReRoll_Button_C::OnSelected(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.OnSelected");
		
		UWBP_Sheik_ClaimReRoll_Button_C_OnSelected_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.ExecuteUbergraph_WBP_Sheik_Claim-ReRoll_Button
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ClaimReRoll_Button_C::ExecuteUbergraph_WBP_Sheik_ClaimReRoll_Button(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.ExecuteUbergraph_WBP_Sheik_Claim-ReRoll_Button");
		
		UWBP_Sheik_ClaimReRoll_Button_C_ExecuteUbergraph_WBP_Sheik_ClaimReRoll_Button_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_ClaimReRoll_Button_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_ClaimReRoll_Button_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Claim_ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C");
		return ptr;
	}

}


