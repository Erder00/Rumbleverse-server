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
	 * 		Name   -> Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.SequenceEvent__ENTRYPOINTWBP_Sheik_LegendKey_1
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_LegendKey_C::SequenceEvent__ENTRYPOINTWBP_Sheik_LegendKey_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.SequenceEvent__ENTRYPOINTWBP_Sheik_LegendKey_1");
		
		UWBP_Sheik_LegendKey_C_SequenceEvent__ENTRYPOINTWBP_Sheik_LegendKey_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.PlayFocusedSound
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_LegendKey_C::PlayFocusedSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.PlayFocusedSound");
		
		UWBP_Sheik_LegendKey_C_PlayFocusedSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.PlaySelectSound
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_LegendKey_C::PlaySelectSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.PlaySelectSound");
		
		UWBP_Sheik_LegendKey_C_PlaySelectSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.PlayUISound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPlaySound                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EUISounds                                          SoundType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_LegendKey_C::PlayUISound(bool bPlaySound, EUISounds SoundType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.PlayUISound");
		
		UWBP_Sheik_LegendKey_C_PlayUISound_Params params {};
		params.bPlaySound = bPlaySound;
		params.SoundType = SoundType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.OnPreviewMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_Sheik_LegendKey_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.OnPreviewMouseButtonDown");
		
		UWBP_Sheik_LegendKey_C_OnPreviewMouseButtonDown_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.SetLabelOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Label                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_LegendKey_C::SetLabelOverride(const class FText& Label)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.SetLabelOverride");
		
		UWBP_Sheik_LegendKey_C_SetLabelOverride_Params params {};
		params.Label = Label;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.GetKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FS_Sheik_InputBindingKeyEntry               Key                                                        (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_LegendKey_C::GetKey(struct FS_Sheik_InputBindingKeyEntry* Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.GetKey");
		
		UWBP_Sheik_LegendKey_C_GetKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.SetKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FS_Sheik_InputBindingKeyEntry               InputBindingKeyEntry                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_LegendKey_C::SetKey(const struct FS_Sheik_InputBindingKeyEntry& InputBindingKeyEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.SetKey");
		
		UWBP_Sheik_LegendKey_C_SetKey_Params params {};
		params.InputBindingKeyEntry = InputBindingKeyEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_LegendKey_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.PreConstruct");
		
		UWBP_Sheik_LegendKey_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_LegendKey_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.ConstructOnlyOnce");
		
		UWBP_Sheik_LegendKey_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.OnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_LegendKey_C::OnSelected(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.OnSelected");
		
		UWBP_Sheik_LegendKey_C_OnSelected_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.SelectedEvent
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_LegendKey_C::SelectedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.SelectedEvent");
		
		UWBP_Sheik_LegendKey_C_SelectedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.OnGainFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_LegendKey_C::OnGainFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.OnGainFocus");
		
		UWBP_Sheik_LegendKey_C_OnGainFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.OnLoseFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_LegendKey_C::OnLoseFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.OnLoseFocus");
		
		UWBP_Sheik_LegendKey_C_OnLoseFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.ExecuteUbergraph_WBP_Sheik_LegendKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_LegendKey_C::ExecuteUbergraph_WBP_Sheik_LegendKey(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.ExecuteUbergraph_WBP_Sheik_LegendKey");
		
		UWBP_Sheik_LegendKey_C_ExecuteUbergraph_WBP_Sheik_LegendKey_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_LegendKey_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_LegendKey_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C");
		return ptr;
	}

}


