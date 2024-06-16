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
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsFocusedDisabledInteractiveItemText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_DataStyledTextBlock*                   Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleAsFocusedDisabledInteractiveItemText(class UIGUI_DataStyledTextBlock* Text, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsFocusedDisabledInteractiveItemText");
		
		UBFL_IGUI_StyleLibrary_C_StyleAsFocusedDisabledInteractiveItemText_Params params {};
		params.Text = Text;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsFocusedDisabledInteractiveItemBackground
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      Background                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      BorderImage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleAsFocusedDisabledInteractiveItemBackground(class UImage* Background, class UImage* BorderImage, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsFocusedDisabledInteractiveItemBackground");
		
		UBFL_IGUI_StyleLibrary_C_StyleAsFocusedDisabledInteractiveItemBackground_Params params {};
		params.Background = Background;
		params.BorderImage = BorderImage;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsSliderDisabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USlider*                                     Slider                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      BarLeft                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      BarRight                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleAsSliderDisabled(class USlider* Slider, class UImage* BarLeft, class UImage* BarRight, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsSliderDisabled");
		
		UBFL_IGUI_StyleLibrary_C_StyleAsSliderDisabled_Params params {};
		params.Slider = Slider;
		params.BarLeft = BarLeft;
		params.BarRight = BarRight;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsSliderSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USlider*                                     Slider                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      BarLeft                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      BarRight                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleAsSliderSelected(class USlider* Slider, class UImage* BarLeft, class UImage* BarRight, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsSliderSelected");
		
		UBFL_IGUI_StyleLibrary_C_StyleAsSliderSelected_Params params {};
		params.Slider = Slider;
		params.BarLeft = BarLeft;
		params.BarRight = BarRight;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsSliderFocused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USlider*                                     Slider                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      BarLeft                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      BarRight                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleAsSliderFocused(class USlider* Slider, class UImage* BarLeft, class UImage* BarRight, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsSliderFocused");
		
		UBFL_IGUI_StyleLibrary_C_StyleAsSliderFocused_Params params {};
		params.Slider = Slider;
		params.BarLeft = BarLeft;
		params.BarRight = BarRight;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.SetSliderStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USlider*                                     Slider                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      BarLeft                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      BarRight                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSIGUI_SliderStyle                          Style                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::SetSliderStyle(class USlider* Slider, class UImage* BarLeft, class UImage* BarRight, const struct FSIGUI_SliderStyle& Style, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.SetSliderStyle");
		
		UBFL_IGUI_StyleLibrary_C_SetSliderStyle_Params params {};
		params.Slider = Slider;
		params.BarLeft = BarLeft;
		params.BarRight = BarRight;
		params.Style = Style;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsSliderIdle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USlider*                                     Slider                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      BarLeft                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      BarRight                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleAsSliderIdle(class USlider* Slider, class UImage* BarLeft, class UImage* BarRight, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsSliderIdle");
		
		UBFL_IGUI_StyleLibrary_C_StyleAsSliderIdle_Params params {};
		params.Slider = Slider;
		params.BarLeft = BarLeft;
		params.BarRight = BarRight;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.SetInteractiveItemBackground
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSIGUI_InteractiveItemBackgroundStyle       InteractiveItemBackgroundStyle                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class UImage*                                      BackgroundImage                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      BorderImage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::SetInteractiveItemBackground(const struct FSIGUI_InteractiveItemBackgroundStyle& InteractiveItemBackgroundStyle, class UImage* BackgroundImage, class UImage* BorderImage, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.SetInteractiveItemBackground");
		
		UBFL_IGUI_StyleLibrary_C_SetInteractiveItemBackground_Params params {};
		params.InteractiveItemBackgroundStyle = InteractiveItemBackgroundStyle;
		params.BackgroundImage = BackgroundImage;
		params.BorderImage = BorderImage;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsInteractiveItemContentPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UOverlay*                                    ContentOverlay                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleAsInteractiveItemContentPadding(class UOverlay* ContentOverlay, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsInteractiveItemContentPadding");
		
		UBFL_IGUI_StyleLibrary_C_StyleAsInteractiveItemContentPadding_Params params {};
		params.ContentOverlay = ContentOverlay;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsDisabledInteractiveItemText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_DataStyledTextBlock*                   Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleAsDisabledInteractiveItemText(class UIGUI_DataStyledTextBlock* Text, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsDisabledInteractiveItemText");
		
		UBFL_IGUI_StyleLibrary_C_StyleAsDisabledInteractiveItemText_Params params {};
		params.Text = Text;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsSelectedInteractiveItemText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_DataStyledTextBlock*                   Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleAsSelectedInteractiveItemText(class UIGUI_DataStyledTextBlock* Text, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsSelectedInteractiveItemText");
		
		UBFL_IGUI_StyleLibrary_C_StyleAsSelectedInteractiveItemText_Params params {};
		params.Text = Text;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsFocusedInteractiveItemText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_DataStyledTextBlock*                   Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleAsFocusedInteractiveItemText(class UIGUI_DataStyledTextBlock* Text, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsFocusedInteractiveItemText");
		
		UBFL_IGUI_StyleLibrary_C_StyleAsFocusedInteractiveItemText_Params params {};
		params.Text = Text;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsIdleInteractiveItemText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_DataStyledTextBlock*                   Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleAsIdleInteractiveItemText(class UIGUI_DataStyledTextBlock* Text, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsIdleInteractiveItemText");
		
		UBFL_IGUI_StyleLibrary_C_StyleAsIdleInteractiveItemText_Params params {};
		params.Text = Text;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsDisabledInteractiveItemBackground
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      Background                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      BorderImage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleAsDisabledInteractiveItemBackground(class UImage* Background, class UImage* BorderImage, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsDisabledInteractiveItemBackground");
		
		UBFL_IGUI_StyleLibrary_C_StyleAsDisabledInteractiveItemBackground_Params params {};
		params.Background = Background;
		params.BorderImage = BorderImage;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsSelectedInteractiveItemBackground
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      Background                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      BorderImage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleAsSelectedInteractiveItemBackground(class UImage* Background, class UImage* BorderImage, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsSelectedInteractiveItemBackground");
		
		UBFL_IGUI_StyleLibrary_C_StyleAsSelectedInteractiveItemBackground_Params params {};
		params.Background = Background;
		params.BorderImage = BorderImage;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsFocusedInteractiveItemBackground
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      Background                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      BorderImage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleAsFocusedInteractiveItemBackground(class UImage* Background, class UImage* BorderImage, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsFocusedInteractiveItemBackground");
		
		UBFL_IGUI_StyleLibrary_C_StyleAsFocusedInteractiveItemBackground_Params params {};
		params.Background = Background;
		params.BorderImage = BorderImage;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsIdleInteractiveItemBackground
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      Background                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      BorderImage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleAsIdleInteractiveItemBackground(class UImage* Background, class UImage* BorderImage, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsIdleInteractiveItemBackground");
		
		UBFL_IGUI_StyleLibrary_C_StyleAsIdleInteractiveItemBackground_Params params {};
		params.Background = Background;
		params.BorderImage = BorderImage;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleRightArrowDisabledMultiToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      ImageReference                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleRightArrowDisabledMultiToggle(class UImage* ImageReference, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleRightArrowDisabledMultiToggle");
		
		UBFL_IGUI_StyleLibrary_C_StyleRightArrowDisabledMultiToggle_Params params {};
		params.ImageReference = ImageReference;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleRightArrowSelectedMultiToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      ImageReference                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleRightArrowSelectedMultiToggle(class UImage* ImageReference, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleRightArrowSelectedMultiToggle");
		
		UBFL_IGUI_StyleLibrary_C_StyleRightArrowSelectedMultiToggle_Params params {};
		params.ImageReference = ImageReference;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleRightArrowFocusedMultiToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      ImageReference                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleRightArrowFocusedMultiToggle(class UImage* ImageReference, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleRightArrowFocusedMultiToggle");
		
		UBFL_IGUI_StyleLibrary_C_StyleRightArrowFocusedMultiToggle_Params params {};
		params.ImageReference = ImageReference;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleRightArrowIdleMultiToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      ImageReference                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleRightArrowIdleMultiToggle(class UImage* ImageReference, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleRightArrowIdleMultiToggle");
		
		UBFL_IGUI_StyleLibrary_C_StyleRightArrowIdleMultiToggle_Params params {};
		params.ImageReference = ImageReference;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleLeftArrowDisabledMultiToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      ImageReference                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleLeftArrowDisabledMultiToggle(class UImage* ImageReference, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleLeftArrowDisabledMultiToggle");
		
		UBFL_IGUI_StyleLibrary_C_StyleLeftArrowDisabledMultiToggle_Params params {};
		params.ImageReference = ImageReference;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleLeftArrowSelectedMultiToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      ImageReference                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleLeftArrowSelectedMultiToggle(class UImage* ImageReference, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleLeftArrowSelectedMultiToggle");
		
		UBFL_IGUI_StyleLibrary_C_StyleLeftArrowSelectedMultiToggle_Params params {};
		params.ImageReference = ImageReference;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleLeftArrowFocusedMultiToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      ImageReference                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleLeftArrowFocusedMultiToggle(class UImage* ImageReference, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleLeftArrowFocusedMultiToggle");
		
		UBFL_IGUI_StyleLibrary_C_StyleLeftArrowFocusedMultiToggle_Params params {};
		params.ImageReference = ImageReference;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleLeftArrowIdleMultiToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      ImageReference                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleLeftArrowIdleMultiToggle(class UImage* ImageReference, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleLeftArrowIdleMultiToggle");
		
		UBFL_IGUI_StyleLibrary_C_StyleLeftArrowIdleMultiToggle_Params params {};
		params.ImageReference = ImageReference;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.SetTabContentPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UOverlay*                                    Overlay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::SetTabContentPadding(class UOverlay* Overlay, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.SetTabContentPadding");
		
		UBFL_IGUI_StyleLibrary_C_SetTabContentPadding_Params params {};
		params.Overlay = Overlay;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleSelectedTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      TabImage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBorder*                                     BorderImage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      BarImage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleSelectedTab(class UImage* TabImage, class UBorder* BorderImage, class UImage* BarImage, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleSelectedTab");
		
		UBFL_IGUI_StyleLibrary_C_StyleSelectedTab_Params params {};
		params.TabImage = TabImage;
		params.BorderImage = BorderImage;
		params.BarImage = BarImage;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleFocusedTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      TabImage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBorder*                                     BorderImage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      BarImage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleFocusedTab(class UImage* TabImage, class UBorder* BorderImage, class UImage* BarImage, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleFocusedTab");
		
		UBFL_IGUI_StyleLibrary_C_StyleFocusedTab_Params params {};
		params.TabImage = TabImage;
		params.BorderImage = BorderImage;
		params.BarImage = BarImage;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleIdleTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      TabImage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBorder*                                     BorderImage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      BarImage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleIdleTab(class UImage* TabImage, class UBorder* BorderImage, class UImage* BarImage, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleIdleTab");
		
		UBFL_IGUI_StyleLibrary_C_StyleIdleTab_Params params {};
		params.TabImage = TabImage;
		params.BorderImage = BorderImage;
		params.BarImage = BarImage;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleScrollboxAsDefault
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UScrollBox*                                  ScrollBoxReference                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleScrollboxAsDefault(class UScrollBox* ScrollBoxReference, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleScrollboxAsDefault");
		
		UBFL_IGUI_StyleLibrary_C_StyleScrollboxAsDefault_Params params {};
		params.ScrollBoxReference = ScrollBoxReference;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.GetStyleAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_IGUI_StyleData_C*                        StyleAsset                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::GetStyleAsset(class UObject* __WorldContext, class UBP_IGUI_StyleData_C** StyleAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.GetStyleAsset");
		
		UBFL_IGUI_StyleLibrary_C_GetStyleAsset_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StyleAsset != nullptr)
			*StyleAsset = params.StyleAsset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleImageAsSelectedButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      ImageReference                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleImageAsSelectedButton(class UImage* ImageReference, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleImageAsSelectedButton");
		
		UBFL_IGUI_StyleLibrary_C_StyleImageAsSelectedButton_Params params {};
		params.ImageReference = ImageReference;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleImageAsDisabledButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      ImageReference                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleImageAsDisabledButton(class UImage* ImageReference, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleImageAsDisabledButton");
		
		UBFL_IGUI_StyleLibrary_C_StyleImageAsDisabledButton_Params params {};
		params.ImageReference = ImageReference;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleImageAsFocusedButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      ImageReference                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleImageAsFocusedButton(class UImage* ImageReference, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleImageAsFocusedButton");
		
		UBFL_IGUI_StyleLibrary_C_StyleImageAsFocusedButton_Params params {};
		params.ImageReference = ImageReference;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.DOCUMENTATION
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::DOCUMENTATION(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.DOCUMENTATION");
		
		UBFL_IGUI_StyleLibrary_C_DOCUMENTATION_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleImageAsIdleButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      ImageReference                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_IGUI_StyleLibrary_C::StyleImageAsIdleButton(class UImage* ImageReference, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleImageAsIdleButton");
		
		UBFL_IGUI_StyleLibrary_C_StyleImageAsIdleButton_Params params {};
		params.ImageReference = ImageReference;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBFL_IGUI_StyleLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBFL_IGUI_StyleLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C");
		return ptr;
	}

}


