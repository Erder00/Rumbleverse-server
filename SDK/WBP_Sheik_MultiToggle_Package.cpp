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
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.RefreshOptionIndicators
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MultiToggle_C::RefreshOptionIndicators()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.RefreshOptionIndicators");
		
		UWBP_Sheik_MultiToggle_C_RefreshOptionIndicators_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.QueueTelemetryUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OldValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MultiToggle_C::QueueTelemetryUpdate(int32_t OldValue, int32_t NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.QueueTelemetryUpdate");
		
		UWBP_Sheik_MultiToggle_C_QueueTelemetryUpdate_Params params {};
		params.OldValue = OldValue;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.SetDisabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDisabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MultiToggle_C::SetDisabled(bool IsDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.SetDisabled");
		
		UWBP_Sheik_MultiToggle_C_SetDisabled_Params params {};
		params.IsDisabled = IsDisabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.EnableHeldInput
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MultiToggle_C::EnableHeldInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.EnableHeldInput");
		
		UWBP_Sheik_MultiToggle_C_EnableHeldInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.NavHorizontal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsLeft                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MultiToggle_C::NavHorizontal(const struct FInputEventData& InputEventData, bool IsLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.NavHorizontal");
		
		UWBP_Sheik_MultiToggle_C_NavHorizontal_Params params {};
		params.InputEventData = InputEventData;
		params.IsLeft = IsLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.UpdateArrowsDisabled
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MultiToggle_C::UpdateArrowsDisabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.UpdateArrowsDisabled");
		
		UWBP_Sheik_MultiToggle_C_UpdateArrowsDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.UpdateCurrentOptionText
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MultiToggle_C::UpdateCurrentOptionText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.UpdateCurrentOptionText");
		
		UWBP_Sheik_MultiToggle_C_UpdateCurrentOptionText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.GetOptionByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UWBP_Sheik_MultiToggle_C::GetOptionByIndex(int32_t index, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.GetOptionByIndex");
		
		UWBP_Sheik_MultiToggle_C_GetOptionByIndex_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.GetOptionByText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MultiToggle_C::GetOptionByText(const class FText& Text, int32_t* index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.GetOptionByText");
		
		UWBP_Sheik_MultiToggle_C_GetOptionByText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (index != nullptr)
			*index = params.index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.GetOptionsLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Length                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MultiToggle_C::GetOptionsLength(int32_t* Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.GetOptionsLength");
		
		UWBP_Sheik_MultiToggle_C_GetOptionsLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Length != nullptr)
			*Length = params.Length;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.GetCurrentOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MultiToggle_C::GetCurrentOption(class FText* Text, int32_t* index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.GetCurrentOption");
		
		UWBP_Sheik_MultiToggle_C_GetCurrentOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
		if (index != nullptr)
			*index = params.index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.SetCurrentOptionByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OptionIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CallSelectionChangedEvent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MultiToggle_C::SetCurrentOptionByIndex(int32_t OptionIndex, bool CallSelectionChangedEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.SetCurrentOptionByIndex");
		
		UWBP_Sheik_MultiToggle_C_SetCurrentOptionByIndex_Params params {};
		params.OptionIndex = OptionIndex;
		params.CallSelectionChangedEvent = CallSelectionChangedEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.SetCurrentOptionByText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        OptionText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               CallSelectionChangedEvent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MultiToggle_C::SetCurrentOptionByText(const class FText& OptionText, bool CallSelectionChangedEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.SetCurrentOptionByText");
		
		UWBP_Sheik_MultiToggle_C_SetCurrentOptionByText_Params params {};
		params.OptionText = OptionText;
		params.CallSelectionChangedEvent = CallSelectionChangedEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.SetCurrentOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        OptionText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            OptionIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CallSelectionChangedEvent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MultiToggle_C::SetCurrentOption(const class FText& OptionText, int32_t OptionIndex, bool CallSelectionChangedEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.SetCurrentOption");
		
		UWBP_Sheik_MultiToggle_C_SetCurrentOption_Params params {};
		params.OptionText = OptionText;
		params.OptionIndex = OptionIndex;
		params.CallSelectionChangedEvent = CallSelectionChangedEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.ForceCurrentOptionUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CallSelectionChangedEvent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MultiToggle_C::ForceCurrentOptionUpdate(bool CallSelectionChangedEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.ForceCurrentOptionUpdate");
		
		UWBP_Sheik_MultiToggle_C_ForceCurrentOptionUpdate_Params params {};
		params.CallSelectionChangedEvent = CallSelectionChangedEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.RemoveAllOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CallForceCurrentOptionUpdate                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MultiToggle_C::RemoveAllOptions(bool CallForceCurrentOptionUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.RemoveAllOptions");
		
		UWBP_Sheik_MultiToggle_C_RemoveAllOptions_Params params {};
		params.CallForceCurrentOptionUpdate = CallForceCurrentOptionUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.RemoveOptionByText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        OptionText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_MultiToggle_C::RemoveOptionByText(const class FText& OptionText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.RemoveOptionByText");
		
		UWBP_Sheik_MultiToggle_C_RemoveOptionByText_Params params {};
		params.OptionText = OptionText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.RemoveOptionByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OptionIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CallSelectionChangedEvent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MultiToggle_C::RemoveOptionByIndex(int32_t OptionIndex, bool CallSelectionChangedEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.RemoveOptionByIndex");
		
		UWBP_Sheik_MultiToggle_C_RemoveOptionByIndex_Params params {};
		params.OptionIndex = OptionIndex;
		params.CallSelectionChangedEvent = CallSelectionChangedEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.AddOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FText>                                Options                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_MultiToggle_C::AddOptions(TArray<class FText>* Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.AddOptions");
		
		UWBP_Sheik_MultiToggle_C_AddOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Options != nullptr)
			*Options = params.Options;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.AddOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               CallSelectionChangedEvent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MultiToggle_C::AddOption(const class FText& Option, bool CallSelectionChangedEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.AddOption");
		
		UWBP_Sheik_MultiToggle_C_AddOption_Params params {};
		params.Option = Option;
		params.CallSelectionChangedEvent = CallSelectionChangedEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.Set Widget Focus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFocused                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MultiToggle_C::SetWidgetFocus(bool IsFocused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.Set Widget Focus");
		
		UWBP_Sheik_MultiToggle_C_SetWidgetFocus_Params params {};
		params.IsFocused = IsFocused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.NavRight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_MultiToggle_C::NavRight(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.NavRight");
		
		UWBP_Sheik_MultiToggle_C_NavRight_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.NavLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_MultiToggle_C::NavLeft(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.NavLeft");
		
		UWBP_Sheik_MultiToggle_C_NavLeft_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MultiToggle_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.PreConstruct");
		
		UWBP_Sheik_MultiToggle_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MultiToggle_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.ConstructOnlyOnce");
		
		UWBP_Sheik_MultiToggle_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.NavRightChangeText
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MultiToggle_C::NavRightChangeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.NavRightChangeText");
		
		UWBP_Sheik_MultiToggle_C_NavRightChangeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.NavLeftChangeText
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MultiToggle_C::NavLeftChangeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.NavLeftChangeText");
		
		UWBP_Sheik_MultiToggle_C_NavLeftChangeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.OnGainFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MultiToggle_C::OnGainFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.OnGainFocus");
		
		UWBP_Sheik_MultiToggle_C_OnGainFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.OnLoseFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MultiToggle_C::OnLoseFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.OnLoseFocus");
		
		UWBP_Sheik_MultiToggle_C_OnLoseFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.BndEvt__ArrowRightButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MultiToggle_C::BndEvt__ArrowRightButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.BndEvt__ArrowRightButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Sheik_MultiToggle_C_BndEvt__ArrowRightButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.BndEvt__ArrowRightButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MultiToggle_C::BndEvt__ArrowRightButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.BndEvt__ArrowRightButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_Sheik_MultiToggle_C_BndEvt__ArrowRightButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.BndEvt__ArrowRightButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MultiToggle_C::BndEvt__ArrowRightButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.BndEvt__ArrowRightButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_Sheik_MultiToggle_C_BndEvt__ArrowRightButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.BndEvt__ArrowLeftButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MultiToggle_C::BndEvt__ArrowLeftButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.BndEvt__ArrowLeftButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_Sheik_MultiToggle_C_BndEvt__ArrowLeftButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.BndEvt__ArrowLeftButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MultiToggle_C::BndEvt__ArrowLeftButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.BndEvt__ArrowLeftButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_Sheik_MultiToggle_C_BndEvt__ArrowLeftButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.BndEvt__ArrowLeftButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MultiToggle_C::BndEvt__ArrowLeftButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.BndEvt__ArrowLeftButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Sheik_MultiToggle_C_BndEvt__ArrowLeftButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.OnDisabled
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MultiToggle_C::OnDisabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.OnDisabled");
		
		UWBP_Sheik_MultiToggle_C_OnDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.Update Crossplay Enabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCrossplayEnabled                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MultiToggle_C::UpdateCrossplayEnabled(bool IsCrossplayEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.Update Crossplay Enabled");
		
		UWBP_Sheik_MultiToggle_C_UpdateCrossplayEnabled_Params params {};
		params.IsCrossplayEnabled = IsCrossplayEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.ExecuteUbergraph_WBP_Sheik_MultiToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MultiToggle_C::ExecuteUbergraph_WBP_Sheik_MultiToggle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.ExecuteUbergraph_WBP_Sheik_MultiToggle");
		
		UWBP_Sheik_MultiToggle_C_ExecuteUbergraph_WBP_Sheik_MultiToggle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MultiToggle_C::OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_MultiToggle_C_OnOptionChanged__DelegateSignature_Params params {};
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
	 * 		Name   -> PredefinedFunction UWBP_Sheik_MultiToggle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_MultiToggle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C");
		return ptr;
	}

}


