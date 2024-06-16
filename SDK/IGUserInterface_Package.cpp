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
	 * 		Name   -> Function IGUserInterface.IGUI_BlueprintFunctionLibrary.SubscribeToInputEventDropdown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDataTable*                                  Table                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        UIInputBindingName                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EInputEventType                                    InputEventType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSendEventOnlyWhenWidgetIsFocused                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              InputEventCallback                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIGUI_BlueprintFunctionLibrary::SubscribeToInputEventDropdown(class UIGUI_WidgetBase* Widget, class UDataTable* Table, const class FName& UIInputBindingName, EInputEventType InputEventType, bool bSendEventOnlyWhenWidgetIsFocused, const class FScriptDelegate& InputEventCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_BlueprintFunctionLibrary.SubscribeToInputEventDropdown");
		
		UIGUI_BlueprintFunctionLibrary_SubscribeToInputEventDropdown_Params params {};
		params.Widget = Widget;
		params.Table = Table;
		params.UIInputBindingName = UIInputBindingName;
		params.InputEventType = InputEventType;
		params.bSendEventOnlyWhenWidgetIsFocused = bSendEventOnlyWhenWidgetIsFocused;
		params.InputEventCallback = InputEventCallback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_BlueprintFunctionLibrary.SubscribeToInputCombo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InputBinding1                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InputBinding2                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InputBinding3                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InputBinding4                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InputBinding5                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSendEventOnlyWhenWidgetIsFocused                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              InputEventCallback                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIGUI_BlueprintFunctionLibrary::SubscribeToInputCombo(class UIGUI_WidgetBase* Widget, const class FName& InputBinding1, const class FName& InputBinding2, const class FName& InputBinding3, const class FName& InputBinding4, const class FName& InputBinding5, bool bSendEventOnlyWhenWidgetIsFocused, const class FScriptDelegate& InputEventCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_BlueprintFunctionLibrary.SubscribeToInputCombo");
		
		UIGUI_BlueprintFunctionLibrary_SubscribeToInputCombo_Params params {};
		params.Widget = Widget;
		params.InputBinding1 = InputBinding1;
		params.InputBinding2 = InputBinding2;
		params.InputBinding3 = InputBinding3;
		params.InputBinding4 = InputBinding4;
		params.InputBinding5 = InputBinding5;
		params.bSendEventOnlyWhenWidgetIsFocused = bSendEventOnlyWhenWidgetIsFocused;
		params.InputEventCallback = InputEventCallback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_BlueprintFunctionLibrary.MakeInputBindingKeyEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDataTable*                                  Table                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InputBindingName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        InputLabelOverride                                         (Parm, NativeAccessSpecifierPublic)
	 */
	struct FInputBindingKeyEntry UIGUI_BlueprintFunctionLibrary::MakeInputBindingKeyEntry(class UDataTable* Table, const class FName& InputBindingName, const class FText& InputLabelOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_BlueprintFunctionLibrary.MakeInputBindingKeyEntry");
		
		UIGUI_BlueprintFunctionLibrary_MakeInputBindingKeyEntry_Params params {};
		params.Table = Table;
		params.InputBindingName = InputBindingName;
		params.InputLabelOverride = InputLabelOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGUI_BlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGUI_BlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGUserInterface.IGUI_BlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_DataStyledImage.SetStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGUI_RichImageRow                          RichImageRow                                               (Parm, NativeAccessSpecifierPublic)
	 */
	void UIGUI_DataStyledImage::SetStyle(const struct FIGUI_RichImageRow& RichImageRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_DataStyledImage.SetStyle");
		
		UIGUI_DataStyledImage_SetStyle_Params params {};
		params.RichImageRow = RichImageRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_DataStyledImage.ResetStyle
	 * 		Flags  -> ()
	 */
	void UIGUI_DataStyledImage::ResetStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_DataStyledImage.ResetStyle");
		
		UIGUI_DataStyledImage_ResetStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGUI_DataStyledImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGUI_DataStyledImage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGUserInterface.IGUI_DataStyledImage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_DataStyledTextBlock.SetStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGUI_RichTextStyleRow                      RichTextStyleRow                                           (Parm, NativeAccessSpecifierPublic)
	 */
	void UIGUI_DataStyledTextBlock::SetStyle(const struct FIGUI_RichTextStyleRow& RichTextStyleRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_DataStyledTextBlock.SetStyle");
		
		UIGUI_DataStyledTextBlock_SetStyle_Params params {};
		params.RichTextStyleRow = RichTextStyleRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_DataStyledTextBlock.ResetStyle
	 * 		Flags  -> ()
	 */
	void UIGUI_DataStyledTextBlock::ResetStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_DataStyledTextBlock.ResetStyle");
		
		UIGUI_DataStyledTextBlock_ResetStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGUI_DataStyledTextBlock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGUI_DataStyledTextBlock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGUserInterface.IGUI_DataStyledTextBlock");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.TransitionOutScreen
	 * 		Flags  -> ()
	 */
	void AIGUI_HUDBase::TransitionOutScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.TransitionOutScreen");
		
		AIGUI_HUDBase_TransitionOutScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.TransitionInScreen
	 * 		Flags  -> ()
	 */
	void AIGUI_HUDBase::TransitionInScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.TransitionInScreen");
		
		AIGUI_HUDBase_TransitionInScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.TransitionFromScreenToScreen
	 * 		Flags  -> ()
	 */
	void AIGUI_HUDBase::TransitionFromScreenToScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.TransitionFromScreenToScreen");
		
		AIGUI_HUDBase_TransitionFromScreenToScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.TransitionFinishedForScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_ScreenBase*                            TransitioningScreen                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGUI_HUDBase::TransitionFinishedForScreen(class UIGUI_ScreenBase* TransitioningScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.TransitionFinishedForScreen");
		
		AIGUI_HUDBase_TransitionFinishedForScreen_Params params {};
		params.TransitioningScreen = TransitioningScreen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.StopInputSourceDetection
	 * 		Flags  -> ()
	 */
	void AIGUI_HUDBase::StopInputSourceDetection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.StopInputSourceDetection");
		
		AIGUI_HUDBase_StopInputSourceDetection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.ShowPersistentScreen
	 * 		Flags  -> ()
	 */
	void AIGUI_HUDBase::ShowPersistentScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.ShowPersistentScreen");
		
		AIGUI_HUDBase_ShowPersistentScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.SetTreatFirstControllerAndKeyboardMouseAsSamePlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldTreatThemAsSame                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGUI_HUDBase::SetTreatFirstControllerAndKeyboardMouseAsSamePlayer(bool ShouldTreatThemAsSame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.SetTreatFirstControllerAndKeyboardMouseAsSamePlayer");
		
		AIGUI_HUDBase_SetTreatFirstControllerAndKeyboardMouseAsSamePlayer_Params params {};
		params.ShouldTreatThemAsSame = ShouldTreatThemAsSame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.NavigateToScreen
	 * 		Flags  -> ()
	 */
	void AIGUI_HUDBase::NavigateToScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.NavigateToScreen");
		
		AIGUI_HUDBase_NavigateToScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.NavigateBackToScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NavigateToEarliestCase                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGUI_HUDBase::NavigateBackToScreen(bool NavigateToEarliestCase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.NavigateBackToScreen");
		
		AIGUI_HUDBase_NavigateBackToScreen_Params params {};
		params.NavigateToEarliestCase = NavigateToEarliestCase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.NavigateBackToFirstScreen
	 * 		Flags  -> ()
	 */
	void AIGUI_HUDBase::NavigateBackToFirstScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.NavigateBackToFirstScreen");
		
		AIGUI_HUDBase_NavigateBackToFirstScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.NavigateBack
	 * 		Flags  -> ()
	 */
	void AIGUI_HUDBase::NavigateBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.NavigateBack");
		
		AIGUI_HUDBase_NavigateBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.MoveScreenToSortingLayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        LayerName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGUI_HUDBase::MoveScreenToSortingLayer(const class FName& LayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.MoveScreenToSortingLayer");
		
		AIGUI_HUDBase_MoveScreenToSortingLayer_Params params {};
		params.LayerName = LayerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.MoveScreenToSortingDepth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Depth                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGUI_HUDBase::MoveScreenToSortingDepth(int32_t Depth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.MoveScreenToSortingDepth");
		
		AIGUI_HUDBase_MoveScreenToSortingDepth_Params params {};
		params.Depth = Depth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.IsFirstControllerTreatedAsSamePlayerAsKeyboardMouse
	 * 		Flags  -> ()
	 */
	bool AIGUI_HUDBase::IsFirstControllerTreatedAsSamePlayerAsKeyboardMouse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.IsFirstControllerTreatedAsSamePlayerAsKeyboardMouse");
		
		AIGUI_HUDBase_IsFirstControllerTreatedAsSamePlayerAsKeyboardMouse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.IsDebugFocusLoggingEnabled
	 * 		Flags  -> ()
	 */
	bool AIGUI_HUDBase::IsDebugFocusLoggingEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.IsDebugFocusLoggingEnabled");
		
		AIGUI_HUDBase_IsDebugFocusLoggingEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.IGUI_ShowScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ScreenAssetName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGUI_HUDBase::IGUI_ShowScreen(const class FString& ScreenAssetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.IGUI_ShowScreen");
		
		AIGUI_HUDBase_IGUI_ShowScreen_Params params {};
		params.ScreenAssetName = ScreenAssetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.IGUI_PrintWidgetsInInputGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InputGroupName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGUI_HUDBase::IGUI_PrintWidgetsInInputGroup(const class FString& InputGroupName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.IGUI_PrintWidgetsInInputGroup");
		
		AIGUI_HUDBase_IGUI_PrintWidgetsInInputGroup_Params params {};
		params.InputGroupName = InputGroupName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.IGUI_PrintLayerGroups
	 * 		Flags  -> ()
	 */
	void AIGUI_HUDBase::IGUI_PrintLayerGroups()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.IGUI_PrintLayerGroups");
		
		AIGUI_HUDBase_IGUI_PrintLayerGroups_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.IGUI_PrintInputGroups
	 * 		Flags  -> ()
	 */
	void AIGUI_HUDBase::IGUI_PrintInputGroups()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.IGUI_PrintInputGroups");
		
		AIGUI_HUDBase_IGUI_PrintInputGroups_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.IGUI_NavigateToScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ScreenAssetName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGUI_HUDBase::IGUI_NavigateToScreen(const class FString& ScreenAssetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.IGUI_NavigateToScreen");
		
		AIGUI_HUDBase_IGUI_NavigateToScreen_Params params {};
		params.ScreenAssetName = ScreenAssetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.IGUI_NavigateBackToScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ScreenAssetName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNavigateToEarliestCase                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGUI_HUDBase::IGUI_NavigateBackToScreen(const class FString& ScreenAssetName, bool bNavigateToEarliestCase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.IGUI_NavigateBackToScreen");
		
		AIGUI_HUDBase_IGUI_NavigateBackToScreen_Params params {};
		params.ScreenAssetName = ScreenAssetName;
		params.bNavigateToEarliestCase = bNavigateToEarliestCase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.IGUI_NavigateBackToFirstScreen
	 * 		Flags  -> ()
	 */
	void AIGUI_HUDBase::IGUI_NavigateBackToFirstScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.IGUI_NavigateBackToFirstScreen");
		
		AIGUI_HUDBase_IGUI_NavigateBackToFirstScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.IGUI_NavigateBack
	 * 		Flags  -> ()
	 */
	void AIGUI_HUDBase::IGUI_NavigateBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.IGUI_NavigateBack");
		
		AIGUI_HUDBase_IGUI_NavigateBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.IGUI_HideScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ScreenAssetName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGUI_HUDBase::IGUI_HideScreen(const class FString& ScreenAssetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.IGUI_HideScreen");
		
		AIGUI_HUDBase_IGUI_HideScreen_Params params {};
		params.ScreenAssetName = ScreenAssetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.IGUI_EnableDebugFocusLogging
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGUI_HUDBase::IGUI_EnableDebugFocusLogging(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.IGUI_EnableDebugFocusLogging");
		
		AIGUI_HUDBase_IGUI_EnableDebugFocusLogging_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.HidePersistentScreen
	 * 		Flags  -> ()
	 */
	void AIGUI_HUDBase::HidePersistentScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.HidePersistentScreen");
		
		AIGUI_HUDBase_HidePersistentScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.GetScreenSortingDepth
	 * 		Flags  -> ()
	 */
	int32_t AIGUI_HUDBase::GetScreenSortingDepth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.GetScreenSortingDepth");
		
		AIGUI_HUDBase_GetScreenSortingDepth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.GetScreenInstance
	 * 		Flags  -> ()
	 */
	class UIGUI_ScreenBase* AIGUI_HUDBase::GetScreenInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.GetScreenInstance");
		
		AIGUI_HUDBase_GetScreenInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.GetPrecastScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_ScreenBase*                            OutScreen                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGUI_HUDBase::GetPrecastScreen(class UIGUI_ScreenBase** OutScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.GetPrecastScreen");
		
		AIGUI_HUDBase_GetPrecastScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutScreen != nullptr)
			*OutScreen = params.OutScreen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.GetOrCreateScreenInstance
	 * 		Flags  -> ()
	 */
	class UIGUI_ScreenBase* AIGUI_HUDBase::GetOrCreateScreenInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.GetOrCreateScreenInstance");
		
		AIGUI_HUDBase_GetOrCreateScreenInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.GetInputHandlingSystem
	 * 		Flags  -> ()
	 */
	class UIGUI_InputHandlingSystem* AIGUI_HUDBase::GetInputHandlingSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.GetInputHandlingSystem");
		
		AIGUI_HUDBase_GetInputHandlingSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.GetCurrentScreen
	 * 		Flags  -> ()
	 */
	void AIGUI_HUDBase::GetCurrentScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.GetCurrentScreen");
		
		AIGUI_HUDBase_GetCurrentScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.ForceInputSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInputSource                                       InputSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopInputSourceDetection                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGUI_HUDBase::ForceInputSource(EInputSource InputSource, bool bStopInputSourceDetection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.ForceInputSource");
		
		AIGUI_HUDBase_ForceInputSource_Params params {};
		params.InputSource = InputSource;
		params.bStopInputSourceDetection = bStopInputSourceDetection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.FindPrecastScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_ScreenBase*                            OutScreen                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AIGUI_HUDBase::FindPrecastScreen(class UIGUI_ScreenBase** OutScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.FindPrecastScreen");
		
		AIGUI_HUDBase_FindPrecastScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutScreen != nullptr)
			*OutScreen = params.OutScreen;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.EnsureScreenIsAlreadyLoaded
	 * 		Flags  -> ()
	 */
	void AIGUI_HUDBase::EnsureScreenIsAlreadyLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.EnsureScreenIsAlreadyLoaded");
		
		AIGUI_HUDBase_EnsureScreenIsAlreadyLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.EnableDebugFocusLogging
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGUI_HUDBase::EnableDebugFocusLogging(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.EnableDebugFocusLogging");
		
		AIGUI_HUDBase_EnableDebugFocusLogging_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.DebugLogMessageToScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      MessageColor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MessageId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGUI_HUDBase::DebugLogMessageToScreen(const class FString& Message, const struct FColor& MessageColor, int32_t MessageId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.DebugLogMessageToScreen");
		
		AIGUI_HUDBase_DebugLogMessageToScreen_Params params {};
		params.Message = Message;
		params.MessageColor = MessageColor;
		params.MessageId = MessageId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_HUDBase.AllowInputSourceDetection
	 * 		Flags  -> ()
	 */
	void AIGUI_HUDBase::AllowInputSourceDetection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_HUDBase.AllowInputSourceDetection");
		
		AIGUI_HUDBase_AllowInputSourceDetection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGUI_HUDBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGUI_HUDBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGUserInterface.IGUI_HUDBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_IGUserInterfaceSettings.GetStyleDataObjectFromProjectSettings
	 * 		Flags  -> ()
	 */
	class UObject* UIGUI_IGUserInterfaceSettings::GetStyleDataObjectFromProjectSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_IGUserInterfaceSettings.GetStyleDataObjectFromProjectSettings");
		
		UIGUI_IGUserInterfaceSettings_GetStyleDataObjectFromProjectSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGUI_IGUserInterfaceSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGUI_IGUserInterfaceSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGUserInterface.IGUI_IGUserInterfaceSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_InputBindingIcon.UpdateTextureToCurrentInputSource
	 * 		Flags  -> ()
	 */
	void UIGUI_InputBindingIcon::UpdateTextureToCurrentInputSource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_InputBindingIcon.UpdateTextureToCurrentInputSource");
		
		UIGUI_InputBindingIcon_UpdateTextureToCurrentInputSource_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_InputBindingIcon.SetUIInputBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NewBinding                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_InputBindingIcon::SetUIInputBinding(const class FName& NewBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_InputBindingIcon.SetUIInputBinding");
		
		UIGUI_InputBindingIcon_SetUIInputBinding_Params params {};
		params.NewBinding = NewBinding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_InputBindingIcon.SetPlayerUserIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewUserIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_InputBindingIcon::SetPlayerUserIndex(int32_t NewUserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_InputBindingIcon.SetPlayerUserIndex");
		
		UIGUI_InputBindingIcon_SetPlayerUserIndex_Params params {};
		params.NewUserIndex = NewUserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_InputBindingIcon.OnInputSourceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUserControllerData                         OldInputSource                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUserControllerData                         NewInputSource                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIGUI_InputBindingIcon::OnInputSourceChanged(const struct FUserControllerData& OldInputSource, const struct FUserControllerData& NewInputSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_InputBindingIcon.OnInputSourceChanged");
		
		UIGUI_InputBindingIcon_OnInputSourceChanged_Params params {};
		params.OldInputSource = OldInputSource;
		params.NewInputSource = NewInputSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_InputBindingIcon.GetUIInputBinding
	 * 		Flags  -> ()
	 */
	class FName UIGUI_InputBindingIcon::GetUIInputBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_InputBindingIcon.GetUIInputBinding");
		
		UIGUI_InputBindingIcon_GetUIInputBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_InputBindingIcon.GetPlayerUserIndex
	 * 		Flags  -> ()
	 */
	int32_t UIGUI_InputBindingIcon::GetPlayerUserIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_InputBindingIcon.GetPlayerUserIndex");
		
		UIGUI_InputBindingIcon_GetPlayerUserIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGUI_InputBindingIcon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGUI_InputBindingIcon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGUserInterface.IGUI_InputBindingIcon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_InputHandlingSystem.SimulateKeyPressAndRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        InKey                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_InputHandlingSystem::SimulateKeyPressAndRelease(const struct FKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_InputHandlingSystem.SimulateKeyPressAndRelease");
		
		UIGUI_InputHandlingSystem_SimulateKeyPressAndRelease_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_InputHandlingSystem.SetWidgetsAsPersistentWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UIGUI_WidgetBase*>                    NewPersistentWidgets                                       (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UIGUI_InputHandlingSystem::SetWidgetsAsPersistentWidgets(TArray<class UIGUI_WidgetBase*>* NewPersistentWidgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_InputHandlingSystem.SetWidgetsAsPersistentWidgets");
		
		UIGUI_InputHandlingSystem_SetWidgetsAsPersistentWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewPersistentWidgets != nullptr)
			*NewPersistentWidgets = params.NewPersistentWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_InputHandlingSystem.SetTreatFirstControllerAndKeyboardMouseAsSamePlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldTreatThemAsSame                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_InputHandlingSystem::SetTreatFirstControllerAndKeyboardMouseAsSamePlayer(bool ShouldTreatThemAsSame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_InputHandlingSystem.SetTreatFirstControllerAndKeyboardMouseAsSamePlayer");
		
		UIGUI_InputHandlingSystem_SetTreatFirstControllerAndKeyboardMouseAsSamePlayer_Params params {};
		params.ShouldTreatThemAsSame = ShouldTreatThemAsSame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_InputHandlingSystem.SetPrimaryControllerByUserIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_InputHandlingSystem::SetPrimaryControllerByUserIndex(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_InputHandlingSystem.SetPrimaryControllerByUserIndex");
		
		UIGUI_InputHandlingSystem_SetPrimaryControllerByUserIndex_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_InputHandlingSystem.SetNonControllingUserIndicesWillControlFirstUserIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_InputHandlingSystem::SetNonControllingUserIndicesWillControlFirstUserIndex(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_InputHandlingSystem.SetNonControllingUserIndicesWillControlFirstUserIndex");
		
		UIGUI_InputHandlingSystem_SetNonControllingUserIndicesWillControlFirstUserIndex_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_InputHandlingSystem.SetMaxNumberOfUserControllersAllowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumberOfUserControllersAllowed                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_InputHandlingSystem::SetMaxNumberOfUserControllersAllowed(int32_t NumberOfUserControllersAllowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_InputHandlingSystem.SetMaxNumberOfUserControllersAllowed");
		
		UIGUI_InputHandlingSystem_SetMaxNumberOfUserControllersAllowed_Params params {};
		params.NumberOfUserControllersAllowed = NumberOfUserControllersAllowed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_InputHandlingSystem.RemoveWidgetsFromPersistentWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UIGUI_WidgetBase*>                    ToBeRemovedPersistentWidgets                               (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UIGUI_InputHandlingSystem::RemoveWidgetsFromPersistentWidgets(TArray<class UIGUI_WidgetBase*>* ToBeRemovedPersistentWidgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_InputHandlingSystem.RemoveWidgetsFromPersistentWidgets");
		
		UIGUI_InputHandlingSystem_RemoveWidgetsFromPersistentWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ToBeRemovedPersistentWidgets != nullptr)
			*ToBeRemovedPersistentWidgets = params.ToBeRemovedPersistentWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_InputHandlingSystem.RemoveControllingUserIndices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    UserIndicesToRemove                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UIGUI_InputHandlingSystem::RemoveControllingUserIndices(TArray<int32_t> UserIndicesToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_InputHandlingSystem.RemoveControllingUserIndices");
		
		UIGUI_InputHandlingSystem_RemoveControllingUserIndices_Params params {};
		params.UserIndicesToRemove = UserIndicesToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_InputHandlingSystem.RemoveAllExtraDetectedUserControllers
	 * 		Flags  -> ()
	 */
	void UIGUI_InputHandlingSystem::RemoveAllExtraDetectedUserControllers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_InputHandlingSystem.RemoveAllExtraDetectedUserControllers");
		
		UIGUI_InputHandlingSystem_RemoveAllExtraDetectedUserControllers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_InputHandlingSystem.RemoveAllControllingUserIndices
	 * 		Flags  -> ()
	 */
	void UIGUI_InputHandlingSystem::RemoveAllControllingUserIndices()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_InputHandlingSystem.RemoveAllControllingUserIndices");
		
		UIGUI_InputHandlingSystem_RemoveAllControllingUserIndices_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_InputHandlingSystem.IsUserIndexAControllingUserIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGUI_InputHandlingSystem::IsUserIndexAControllingUserIndex(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_InputHandlingSystem.IsUserIndexAControllingUserIndex");
		
		UIGUI_InputHandlingSystem_IsUserIndexAControllingUserIndex_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_InputHandlingSystem.IsFirstControllerTreatedAsSamePlayerAsKeyboardMouse
	 * 		Flags  -> ()
	 */
	bool UIGUI_InputHandlingSystem::IsFirstControllerTreatedAsSamePlayerAsKeyboardMouse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_InputHandlingSystem.IsFirstControllerTreatedAsSamePlayerAsKeyboardMouse");
		
		UIGUI_InputHandlingSystem_IsFirstControllerTreatedAsSamePlayerAsKeyboardMouse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_InputHandlingSystem.GetNumberOfDetectedUserControllers
	 * 		Flags  -> ()
	 */
	int32_t UIGUI_InputHandlingSystem::GetNumberOfDetectedUserControllers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_InputHandlingSystem.GetNumberOfDetectedUserControllers");
		
		UIGUI_InputHandlingSystem_GetNumberOfDetectedUserControllers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_InputHandlingSystem.GetNumberOfControllingUserIndices
	 * 		Flags  -> ()
	 */
	int32_t UIGUI_InputHandlingSystem::GetNumberOfControllingUserIndices()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_InputHandlingSystem.GetNumberOfControllingUserIndices");
		
		UIGUI_InputHandlingSystem_GetNumberOfControllingUserIndices_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_InputHandlingSystem.GetMaxNumberOfUserControllersAllowed
	 * 		Flags  -> ()
	 */
	int32_t UIGUI_InputHandlingSystem::GetMaxNumberOfUserControllersAllowed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_InputHandlingSystem.GetMaxNumberOfUserControllersAllowed");
		
		UIGUI_InputHandlingSystem_GetMaxNumberOfUserControllersAllowed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_InputHandlingSystem.GetDetectedUserControllers
	 * 		Flags  -> ()
	 */
	TArray<struct FUserControllerData> UIGUI_InputHandlingSystem::GetDetectedUserControllers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_InputHandlingSystem.GetDetectedUserControllers");
		
		UIGUI_InputHandlingSystem_GetDetectedUserControllers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_InputHandlingSystem.GetCurrentInputSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EInputSource UIGUI_InputHandlingSystem::GetCurrentInputSource(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_InputHandlingSystem.GetCurrentInputSource");
		
		UIGUI_InputHandlingSystem_GetCurrentInputSource_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_InputHandlingSystem.GetAllControllingUserIndices
	 * 		Flags  -> ()
	 */
	TArray<int32_t> UIGUI_InputHandlingSystem::GetAllControllingUserIndices()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_InputHandlingSystem.GetAllControllingUserIndices");
		
		UIGUI_InputHandlingSystem_GetAllControllingUserIndices_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_InputHandlingSystem.ClearPrimaryControllerAssignment
	 * 		Flags  -> ()
	 */
	void UIGUI_InputHandlingSystem::ClearPrimaryControllerAssignment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_InputHandlingSystem.ClearPrimaryControllerAssignment");
		
		UIGUI_InputHandlingSystem_ClearPrimaryControllerAssignment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_InputHandlingSystem.AreNonControllingUserIndicesControllingFirstUserIndexNavigation
	 * 		Flags  -> ()
	 */
	bool UIGUI_InputHandlingSystem::AreNonControllingUserIndicesControllingFirstUserIndexNavigation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_InputHandlingSystem.AreNonControllingUserIndicesControllingFirstUserIndexNavigation");
		
		UIGUI_InputHandlingSystem_AreNonControllingUserIndicesControllingFirstUserIndexNavigation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_InputHandlingSystem.AddNewControllingUserIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewUserIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_InputHandlingSystem::AddNewControllingUserIndex(int32_t NewUserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_InputHandlingSystem.AddNewControllingUserIndex");
		
		UIGUI_InputHandlingSystem_AddNewControllingUserIndex_Params params {};
		params.NewUserIndex = NewUserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGUI_InputHandlingSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGUI_InputHandlingSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGUserInterface.IGUI_InputHandlingSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.UnsubscribeFromNewUserControllerDetectedEvents
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::UnsubscribeFromNewUserControllerDetectedEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.UnsubscribeFromNewUserControllerDetectedEvents");
		
		UIGUI_WidgetBase_UnsubscribeFromNewUserControllerDetectedEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.UnsubscribeFromInputSourceChanges
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::UnsubscribeFromInputSourceChanges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.UnsubscribeFromInputSourceChanges");
		
		UIGUI_WidgetBase_UnsubscribeFromInputSourceChanges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.UnsubscribeFromInputEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        UIInputBindingName                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::UnsubscribeFromInputEvent(const class FName& UIInputBindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.UnsubscribeFromInputEvent");
		
		UIGUI_WidgetBase_UnsubscribeFromInputEvent_Params params {};
		params.UIInputBindingName = UIInputBindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.UnsubscribeFromInputCombos
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::UnsubscribeFromInputCombos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.UnsubscribeFromInputCombos");
		
		UIGUI_WidgetBase_UnsubscribeFromInputCombos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.UnsubscribeFromAllInputEvents
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::UnsubscribeFromAllInputEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.UnsubscribeFromAllInputEvents");
		
		UIGUI_WidgetBase_UnsubscribeFromAllInputEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.UnblockInputEvents
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::UnblockInputEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.UnblockInputEvents");
		
		UIGUI_WidgetBase_UnblockInputEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.SubscribeToStandardAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EStandardActions                                   StandardAction                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EInputEventType                                    InputEventType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSendEventOnlyWhenWidgetIsFocused                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              InputEventCallback                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::SubscribeToStandardAction(EStandardActions StandardAction, EInputEventType InputEventType, bool bSendEventOnlyWhenWidgetIsFocused, const class FScriptDelegate& InputEventCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.SubscribeToStandardAction");
		
		UIGUI_WidgetBase_SubscribeToStandardAction_Params params {};
		params.StandardAction = StandardAction;
		params.InputEventType = InputEventType;
		params.bSendEventOnlyWhenWidgetIsFocused = bSendEventOnlyWhenWidgetIsFocused;
		params.InputEventCallback = InputEventCallback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.SubscribeToNewUserControllerDetectedEvents
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::SubscribeToNewUserControllerDetectedEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.SubscribeToNewUserControllerDetectedEvents");
		
		UIGUI_WidgetBase_SubscribeToNewUserControllerDetectedEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.SubscribeToInputSourceChanges
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::SubscribeToInputSourceChanges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.SubscribeToInputSourceChanges");
		
		UIGUI_WidgetBase_SubscribeToInputSourceChanges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.SubscribeToInputEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        UIInputBindingName                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EInputEventType                                    InputEventType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSendEventOnlyWhenWidgetIsFocused                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              InputEventCallback                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::SubscribeToInputEvent(const class FName& UIInputBindingName, EInputEventType InputEventType, bool bSendEventOnlyWhenWidgetIsFocused, const class FScriptDelegate& InputEventCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.SubscribeToInputEvent");
		
		UIGUI_WidgetBase_SubscribeToInputEvent_Params params {};
		params.UIInputBindingName = UIInputBindingName;
		params.InputEventType = InputEventType;
		params.bSendEventOnlyWhenWidgetIsFocused = bSendEventOnlyWhenWidgetIsFocused;
		params.InputEventCallback = InputEventCallback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.SubscribeToInputCombo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                ComboBindings                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bSendEventOnlyWhenWidgetIsFocused                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              InputEventCallback                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::SubscribeToInputCombo(TArray<class FName> ComboBindings, bool bSendEventOnlyWhenWidgetIsFocused, const class FScriptDelegate& InputEventCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.SubscribeToInputCombo");
		
		UIGUI_WidgetBase_SubscribeToInputCombo_Params params {};
		params.ComboBindings = ComboBindings;
		params.bSendEventOnlyWhenWidgetIsFocused = bSendEventOnlyWhenWidgetIsFocused;
		params.InputEventCallback = InputEventCallback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.SubscribeToAnyKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInputEventType                                    InputEventType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSendEventOnlyWhenWidgetIsFocused                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              InputEventCallback                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::SubscribeToAnyKey(EInputEventType InputEventType, bool bSendEventOnlyWhenWidgetIsFocused, const class FScriptDelegate& InputEventCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.SubscribeToAnyKey");
		
		UIGUI_WidgetBase_SubscribeToAnyKey_Params params {};
		params.InputEventType = InputEventType;
		params.bSendEventOnlyWhenWidgetIsFocused = bSendEventOnlyWhenWidgetIsFocused;
		params.InputEventCallback = InputEventCallback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.StopPropagationOfCurrentInputEvent
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::StopPropagationOfCurrentInputEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.StopPropagationOfCurrentInputEvent");
		
		UIGUI_WidgetBase_StopPropagationOfCurrentInputEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.StopInputSourceDetection
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::StopInputSourceDetection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.StopInputSourceDetection");
		
		UIGUI_WidgetBase_StopInputSourceDetection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.StopCustomTick
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::StopCustomTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.StopCustomTick");
		
		UIGUI_WidgetBase_StopCustomTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.StopConsumptionOfAllInputEvents
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::StopConsumptionOfAllInputEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.StopConsumptionOfAllInputEvents");
		
		UIGUI_WidgetBase_StopConsumptionOfAllInputEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.StartCustomTick
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::StartCustomTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.StartCustomTick");
		
		UIGUI_WidgetBase_StartCustomTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.ShowPersistentScreenByPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ScreenBlueprintPath                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::ShowPersistentScreenByPath(const class FString& ScreenBlueprintPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.ShowPersistentScreenByPath");
		
		UIGUI_WidgetBase_ShowPersistentScreenByPath_Params params {};
		params.ScreenBlueprintPath = ScreenBlueprintPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.ShowPersistentScreen
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::ShowPersistentScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.ShowPersistentScreen");
		
		UIGUI_WidgetBase_ShowPersistentScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.ShouldChildrenBeAddedInInputGroup
	 * 		Flags  -> ()
	 */
	bool UIGUI_WidgetBase::ShouldChildrenBeAddedInInputGroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.ShouldChildrenBeAddedInInputGroup");
		
		UIGUI_WidgetBase_ShouldChildrenBeAddedInInputGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.SetTreatFirstControllerAndKeyboardMouseAsSamePlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldTreatThemAsSame                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::SetTreatFirstControllerAndKeyboardMouseAsSamePlayer(bool ShouldTreatThemAsSame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.SetTreatFirstControllerAndKeyboardMouseAsSamePlayer");
		
		UIGUI_WidgetBase_SetTreatFirstControllerAndKeyboardMouseAsSamePlayer_Params params {};
		params.ShouldTreatThemAsSame = ShouldTreatThemAsSame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.SetNonControllingUserIndicesWillControlFirstUserIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::SetNonControllingUserIndicesWillControlFirstUserIndex(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.SetNonControllingUserIndicesWillControlFirstUserIndex");
		
		UIGUI_WidgetBase_SetNonControllingUserIndicesWillControlFirstUserIndex_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.SetNavigationOverrideWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENavigationDirection                               Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UIGUI_WidgetBase*                            OverrideWidget                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::SetNavigationOverrideWidget(ENavigationDirection Direction, class UIGUI_WidgetBase* OverrideWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.SetNavigationOverrideWidget");
		
		UIGUI_WidgetBase_SetNavigationOverrideWidget_Params params {};
		params.Direction = Direction;
		params.OverrideWidget = OverrideWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.SetNavigationalAnchorPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   NewAnchor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::SetNavigationalAnchorPosition(const struct FVector2D& NewAnchor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.SetNavigationalAnchorPosition");
		
		UIGUI_WidgetBase_SetNavigationalAnchorPosition_Params params {};
		params.NewAnchor = NewAnchor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.SetMaxNumberOfUserControllersAllowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumberOfUserControllersAllowed                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::SetMaxNumberOfUserControllersAllowed(int32_t NumberOfUserControllersAllowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.SetMaxNumberOfUserControllersAllowed");
		
		UIGUI_WidgetBase_SetMaxNumberOfUserControllersAllowed_Params params {};
		params.NumberOfUserControllersAllowed = NumberOfUserControllersAllowed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.SetIsDisabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsDisabled                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::SetIsDisabled(bool bIsDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.SetIsDisabled");
		
		UIGUI_WidgetBase_SetIsDisabled_Params params {};
		params.bIsDisabled = bIsDisabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.SetCustomTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnableTick                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIgnoreInputIfInvisible                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopAnimationIfInvisible                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CustomTickInterval                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::SetCustomTick(bool bEnableTick, bool bIgnoreInputIfInvisible, bool bStopAnimationIfInvisible, float CustomTickInterval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.SetCustomTick");
		
		UIGUI_WidgetBase_SetCustomTick_Params params {};
		params.bEnableTick = bEnableTick;
		params.bIgnoreInputIfInvisible = bIgnoreInputIfInvisible;
		params.bStopAnimationIfInvisible = bStopAnimationIfInvisible;
		params.CustomTickInterval = CustomTickInterval;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.SetCanReceiveInputEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bReceivesInput                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::SetCanReceiveInputEvents(bool bReceivesInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.SetCanReceiveInputEvents");
		
		UIGUI_WidgetBase_SetCanReceiveInputEvents_Params params {};
		params.bReceivesInput = bReceivesInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.SetCanBeNavigatedTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCanBeNavigatedTo                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::SetCanBeNavigatedTo(bool bCanBeNavigatedTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.SetCanBeNavigatedTo");
		
		UIGUI_WidgetBase_SetCanBeNavigatedTo_Params params {};
		params.bCanBeNavigatedTo = bCanBeNavigatedTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.SetCanBeNavigatedFrom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCanBeNavigatedFrom                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::SetCanBeNavigatedFrom(bool bCanBeNavigatedFrom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.SetCanBeNavigatedFrom");
		
		UIGUI_WidgetBase_SetCanBeNavigatedFrom_Params params {};
		params.bCanBeNavigatedFrom = bCanBeNavigatedFrom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.RemoveControllingUserIndices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    UserIndicesToRemove                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::RemoveControllingUserIndices(TArray<int32_t> UserIndicesToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.RemoveControllingUserIndices");
		
		UIGUI_WidgetBase_RemoveControllingUserIndices_Params params {};
		params.UserIndicesToRemove = UserIndicesToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.RemoveAllExtraDetectedUserControllers
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::RemoveAllExtraDetectedUserControllers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.RemoveAllExtraDetectedUserControllers");
		
		UIGUI_WidgetBase_RemoveAllExtraDetectedUserControllers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.RemoveAllControllingUserIndices
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::RemoveAllControllingUserIndices()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.RemoveAllControllingUserIndices");
		
		UIGUI_WidgetBase_RemoveAllControllingUserIndices_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.PlayAnimationAndThen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              StartAtTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumOfLoopsToPlay                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlaybackSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::PlayAnimationAndThen(class UWidgetAnimation* InAnimation, const struct FLatentActionInfo& LatentInfo, float StartAtTime, int32_t NumOfLoopsToPlay, float PlaybackSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.PlayAnimationAndThen");
		
		UIGUI_WidgetBase_PlayAnimationAndThen_Params params {};
		params.InAnimation = InAnimation;
		params.LatentInfo = LatentInfo;
		params.StartAtTime = StartAtTime;
		params.NumOfLoopsToPlay = NumOfLoopsToPlay;
		params.PlaybackSpeed = PlaybackSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.PerformSelfActivityCheck
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::PerformSelfActivityCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.PerformSelfActivityCheck");
		
		UIGUI_WidgetBase_PerformSelfActivityCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.OnWidgetOnScreen
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::OnWidgetOnScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.OnWidgetOnScreen");
		
		UIGUI_WidgetBase_OnWidgetOnScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.OnWidgetOffScreen
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::OnWidgetOffScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.OnWidgetOffScreen");
		
		UIGUI_WidgetBase_OnWidgetOffScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGUserInterface.IGUI_WidgetBase.OnStateChangeEventWithUserIndex__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UserIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGUserInterface.IGUI_WidgetBase.OnStateChangeEventWithUserIndex__DelegateSignature");
		
		UIGUI_WidgetBase_OnStateChangeEventWithUserIndex__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGUserInterface.IGUI_WidgetBase.OnStateChangeEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::OnStateChangeEvent__DelegateSignature(class UIGUI_WidgetBase* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGUserInterface.IGUI_WidgetBase.OnStateChangeEvent__DelegateSignature");
		
		UIGUI_WidgetBase_OnStateChangeEvent__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.OnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::OnSelected(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.OnSelected");
		
		UIGUI_WidgetBase_OnSelected_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.OnNewUserControllerDetected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUserControllerData                         NewUserController                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::OnNewUserControllerDetected(const struct FUserControllerData& NewUserController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.OnNewUserControllerDetected");
		
		UIGUI_WidgetBase_OnNewUserControllerDetected_Params params {};
		params.NewUserController = NewUserController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGUserInterface.IGUI_WidgetBase.OnNavigationOverrideChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENavigationDirection                               Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UIGUI_WidgetBase*                            NewOverride                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::OnNavigationOverrideChanged__DelegateSignature(ENavigationDirection Direction, class UIGUI_WidgetBase* NewOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGUserInterface.IGUI_WidgetBase.OnNavigationOverrideChanged__DelegateSignature");
		
		UIGUI_WidgetBase_OnNavigationOverrideChanged__DelegateSignature_Params params {};
		params.Direction = Direction;
		params.NewOverride = NewOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.OnNavigationOverrideChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENavigationDirection                               Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UIGUI_WidgetBase*                            NewOverride                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::OnNavigationOverrideChanged(ENavigationDirection Direction, class UIGUI_WidgetBase* NewOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.OnNavigationOverrideChanged");
		
		UIGUI_WidgetBase_OnNavigationOverrideChanged_Params params {};
		params.Direction = Direction;
		params.NewOverride = NewOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.OnLoseFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::OnLoseFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.OnLoseFocus");
		
		UIGUI_WidgetBase_OnLoseFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.OnInputSourceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUserControllerData                         OldInputSource                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUserControllerData                         NewInputSource                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::OnInputSourceChanged(const struct FUserControllerData& OldInputSource, const struct FUserControllerData& NewInputSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.OnInputSourceChanged");
		
		UIGUI_WidgetBase_OnInputSourceChanged_Params params {};
		params.OldInputSource = OldInputSource;
		params.NewInputSource = NewInputSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.OnGainFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::OnGainFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.OnGainFocus");
		
		UIGUI_WidgetBase_OnGainFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.OnEnabled
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::OnEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.OnEnabled");
		
		UIGUI_WidgetBase_OnEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.OnDisabled
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::OnDisabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.OnDisabled");
		
		UIGUI_WidgetBase_OnDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.OnCustomTick
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::OnCustomTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.OnCustomTick");
		
		UIGUI_WidgetBase_OnCustomTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.NavigateToScreen
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::NavigateToScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.NavigateToScreen");
		
		UIGUI_WidgetBase_NavigateToScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.NavigateBackToScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NavigateToEarliestCase                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::NavigateBackToScreen(bool NavigateToEarliestCase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.NavigateBackToScreen");
		
		UIGUI_WidgetBase_NavigateBackToScreen_Params params {};
		params.NavigateToEarliestCase = NavigateToEarliestCase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.NavigateBackToFirstScreen
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::NavigateBackToFirstScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.NavigateBackToFirstScreen");
		
		UIGUI_WidgetBase_NavigateBackToFirstScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.NavigateBack
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::NavigateBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.NavigateBack");
		
		UIGUI_WidgetBase_NavigateBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.IsUserIndexAControllingUserIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGUI_WidgetBase::IsUserIndexAControllingUserIndex(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.IsUserIndexAControllingUserIndex");
		
		UIGUI_WidgetBase_IsUserIndexAControllingUserIndex_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.IsFocusable
	 * 		Flags  -> ()
	 */
	bool UIGUI_WidgetBase::IsFocusable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.IsFocusable");
		
		UIGUI_WidgetBase_IsFocusable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.IsFirstControllerTreatedAsSamePlayerAsKeyboardMouse
	 * 		Flags  -> ()
	 */
	bool UIGUI_WidgetBase::IsFirstControllerTreatedAsSamePlayerAsKeyboardMouse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.IsFirstControllerTreatedAsSamePlayerAsKeyboardMouse");
		
		UIGUI_WidgetBase_IsFirstControllerTreatedAsSamePlayerAsKeyboardMouse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.IsCustomTickFeatureUsed
	 * 		Flags  -> ()
	 */
	bool UIGUI_WidgetBase::IsCustomTickFeatureUsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.IsCustomTickFeatureUsed");
		
		UIGUI_WidgetBase_IsCustomTickFeatureUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.IsBindingValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        UIInputBindingName                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGUI_WidgetBase::IsBindingValid(const class FName& UIInputBindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.IsBindingValid");
		
		UIGUI_WidgetBase_IsBindingValid_Params params {};
		params.UIInputBindingName = UIInputBindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.HidePersistentScreenByPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ScreenBlueprintPath                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::HidePersistentScreenByPath(const class FString& ScreenBlueprintPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.HidePersistentScreenByPath");
		
		UIGUI_WidgetBase_HidePersistentScreenByPath_Params params {};
		params.ScreenBlueprintPath = ScreenBlueprintPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.HidePersistentScreen
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::HidePersistentScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.HidePersistentScreen");
		
		UIGUI_WidgetBase_HidePersistentScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.HandleOnSelectEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEvent                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::HandleOnSelectEvent(const struct FInputEventData& InputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.HandleOnSelectEvent");
		
		UIGUI_WidgetBase_HandleOnSelectEvent_Params params {};
		params.InputEvent = InputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.GetTextureForUIInputBindingBasedOnCurrentInputSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        UIInputBindingName                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UserIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UIGUI_WidgetBase::GetTextureForUIInputBindingBasedOnCurrentInputSource(const class FName& UIInputBindingName, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.GetTextureForUIInputBindingBasedOnCurrentInputSource");
		
		UIGUI_WidgetBase_GetTextureForUIInputBindingBasedOnCurrentInputSource_Params params {};
		params.UIInputBindingName = UIInputBindingName;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.GetShouldSwapAB
	 * 		Flags  -> ()
	 */
	bool UIGUI_WidgetBase::GetShouldSwapAB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.GetShouldSwapAB");
		
		UIGUI_WidgetBase_GetShouldSwapAB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.GetPrecastScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_ScreenBase*                            OutScreen                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::GetPrecastScreen(class UIGUI_ScreenBase** OutScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.GetPrecastScreen");
		
		UIGUI_WidgetBase_GetPrecastScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutScreen != nullptr)
			*OutScreen = params.OutScreen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.GetNumberOfDetectedUserControllers
	 * 		Flags  -> ()
	 */
	int32_t UIGUI_WidgetBase::GetNumberOfDetectedUserControllers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.GetNumberOfDetectedUserControllers");
		
		UIGUI_WidgetBase_GetNumberOfDetectedUserControllers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.GetNumberOfControllingUserIndices
	 * 		Flags  -> ()
	 */
	int32_t UIGUI_WidgetBase::GetNumberOfControllingUserIndices()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.GetNumberOfControllingUserIndices");
		
		UIGUI_WidgetBase_GetNumberOfControllingUserIndices_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.GetNavigationOverrideWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENavigationDirection                               Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::GetNavigationOverrideWidget(ENavigationDirection Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.GetNavigationOverrideWidget");
		
		UIGUI_WidgetBase_GetNavigationOverrideWidget_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.GetNavigationalAnchorPosition
	 * 		Flags  -> ()
	 */
	struct FVector2D UIGUI_WidgetBase::GetNavigationalAnchorPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.GetNavigationalAnchorPosition");
		
		UIGUI_WidgetBase_GetNavigationalAnchorPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.GetMaxNumberOfUserControllersAllowed
	 * 		Flags  -> ()
	 */
	int32_t UIGUI_WidgetBase::GetMaxNumberOfUserControllersAllowed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.GetMaxNumberOfUserControllersAllowed");
		
		UIGUI_WidgetBase_GetMaxNumberOfUserControllersAllowed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.GetListOfChildren
	 * 		Flags  -> ()
	 */
	TArray<class UIGUI_WidgetBase*> UIGUI_WidgetBase::GetListOfChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.GetListOfChildren");
		
		UIGUI_WidgetBase_GetListOfChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.GetIsDisabled
	 * 		Flags  -> ()
	 */
	bool UIGUI_WidgetBase::GetIsDisabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.GetIsDisabled");
		
		UIGUI_WidgetBase_GetIsDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.GetInputPriority
	 * 		Flags  -> ()
	 */
	int32_t UIGUI_WidgetBase::GetInputPriority()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.GetInputPriority");
		
		UIGUI_WidgetBase_GetInputPriority_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.GetInputHandlingSystem
	 * 		Flags  -> ()
	 */
	class UIGUI_InputHandlingSystem* UIGUI_WidgetBase::GetInputHandlingSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.GetInputHandlingSystem");
		
		UIGUI_WidgetBase_GetInputHandlingSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.GetDisplayNameForUIInputBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        UIInputBindingName                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UIGUI_WidgetBase::GetDisplayNameForUIInputBinding(const class FName& UIInputBindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.GetDisplayNameForUIInputBinding");
		
		UIGUI_WidgetBase_GetDisplayNameForUIInputBinding_Params params {};
		params.UIInputBindingName = UIInputBindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.GetDetectedUserControllers
	 * 		Flags  -> ()
	 */
	TArray<struct FUserControllerData> UIGUI_WidgetBase::GetDetectedUserControllers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.GetDetectedUserControllers");
		
		UIGUI_WidgetBase_GetDetectedUserControllers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.GetCurrentInputSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EInputSource UIGUI_WidgetBase::GetCurrentInputSource(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.GetCurrentInputSource");
		
		UIGUI_WidgetBase_GetCurrentInputSource_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.GetBindingRepresentingStandardAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EStandardActions                                   StandardAction                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UIGUI_WidgetBase::GetBindingRepresentingStandardAction(EStandardActions StandardAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.GetBindingRepresentingStandardAction");
		
		UIGUI_WidgetBase_GetBindingRepresentingStandardAction_Params params {};
		params.StandardAction = StandardAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.GetAllControllingUserIndices
	 * 		Flags  -> ()
	 */
	TArray<int32_t> UIGUI_WidgetBase::GetAllControllingUserIndices()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.GetAllControllingUserIndices");
		
		UIGUI_WidgetBase_GetAllControllingUserIndices_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.GetAbsolutePosition
	 * 		Flags  -> ()
	 */
	struct FVector2D UIGUI_WidgetBase::GetAbsolutePosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.GetAbsolutePosition");
		
		UIGUI_WidgetBase_GetAbsolutePosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.ForceInputSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInputSource                                       InputSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopInputSourceDetection                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::ForceInputSource(EInputSource InputSource, bool bStopInputSourceDetection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.ForceInputSource");
		
		UIGUI_WidgetBase_ForceInputSource_Params params {};
		params.InputSource = InputSource;
		params.bStopInputSourceDetection = bStopInputSourceDetection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.FindPrecastScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_ScreenBase*                            OutScreen                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGUI_WidgetBase::FindPrecastScreen(class UIGUI_ScreenBase** OutScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.FindPrecastScreen");
		
		UIGUI_WidgetBase_FindPrecastScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutScreen != nullptr)
			*OutScreen = params.OutScreen;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.CustomTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDeltaTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::CustomTick(float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.CustomTick");
		
		UIGUI_WidgetBase_CustomTick_Params params {};
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.ConsumeAllInputEvents
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::ConsumeAllInputEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.ConsumeAllInputEvents");
		
		UIGUI_WidgetBase_ConsumeAllInputEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.ConstructOnlyOnce");
		
		UIGUI_WidgetBase_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.CanReceiveInputEvents
	 * 		Flags  -> ()
	 */
	bool UIGUI_WidgetBase::CanReceiveInputEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.CanReceiveInputEvents");
		
		UIGUI_WidgetBase_CanReceiveInputEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.CanBeNavigatedTo
	 * 		Flags  -> ()
	 */
	bool UIGUI_WidgetBase::CanBeNavigatedTo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.CanBeNavigatedTo");
		
		UIGUI_WidgetBase_CanBeNavigatedTo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.CanBeNavigatedFrom
	 * 		Flags  -> ()
	 */
	bool UIGUI_WidgetBase::CanBeNavigatedFrom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.CanBeNavigatedFrom");
		
		UIGUI_WidgetBase_CanBeNavigatedFrom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.BroadcastOnWidgetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::BroadcastOnWidgetSelected(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.BroadcastOnWidgetSelected");
		
		UIGUI_WidgetBase_BroadcastOnWidgetSelected_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.BlockAllInputEvents
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::BlockAllInputEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.BlockAllInputEvents");
		
		UIGUI_WidgetBase_BlockAllInputEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.BindHandleOnSelectEventToSelectStandardAction
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::BindHandleOnSelectEventToSelectStandardAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.BindHandleOnSelectEventToSelectStandardAction");
		
		UIGUI_WidgetBase_BindHandleOnSelectEventToSelectStandardAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.AsyncLoadAssetList
	 * 		Flags  -> ()
	 */
	bool UIGUI_WidgetBase::AsyncLoadAssetList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.AsyncLoadAssetList");
		
		UIGUI_WidgetBase_AsyncLoadAssetList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.AsyncLoadAsset
	 * 		Flags  -> ()
	 */
	bool UIGUI_WidgetBase::AsyncLoadAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.AsyncLoadAsset");
		
		UIGUI_WidgetBase_AsyncLoadAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.AreNonControllingUserIndicesControllingFirstUserIndexNavigation
	 * 		Flags  -> ()
	 */
	bool UIGUI_WidgetBase::AreNonControllingUserIndicesControllingFirstUserIndexNavigation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.AreNonControllingUserIndicesControllingFirstUserIndexNavigation");
		
		UIGUI_WidgetBase_AreNonControllingUserIndicesControllingFirstUserIndexNavigation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.AllowInputSourceDetection
	 * 		Flags  -> ()
	 */
	void UIGUI_WidgetBase::AllowInputSourceDetection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.AllowInputSourceDetection");
		
		UIGUI_WidgetBase_AllowInputSourceDetection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_WidgetBase.AddNewControllingUserIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewUserIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_WidgetBase::AddNewControllingUserIndex(int32_t NewUserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_WidgetBase.AddNewControllingUserIndex");
		
		UIGUI_WidgetBase_AddNewControllingUserIndex_Params params {};
		params.NewUserIndex = NewUserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGUI_WidgetBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGUI_WidgetBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGUserInterface.IGUI_WidgetBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScreenBase.TransitionFinished
	 * 		Flags  -> ()
	 */
	void UIGUI_ScreenBase::TransitionFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScreenBase.TransitionFinished");
		
		UIGUI_ScreenBase_TransitionFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScreenBase.ShowScreen
	 * 		Flags  -> ()
	 */
	void UIGUI_ScreenBase::ShowScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScreenBase.ShowScreen");
		
		UIGUI_ScreenBase_ShowScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScreenBase.SetWidgetsAsPersistentWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UIGUI_WidgetBase*>                    NewPersistentWidgets                                       (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ScreenBase::SetWidgetsAsPersistentWidgets(TArray<class UIGUI_WidgetBase*> NewPersistentWidgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScreenBase.SetWidgetsAsPersistentWidgets");
		
		UIGUI_ScreenBase_SetWidgetsAsPersistentWidgets_Params params {};
		params.NewPersistentWidgets = NewPersistentWidgets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScreenBase.SetFocusOnScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResetToDefaultInputGroup                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ScreenBase::SetFocusOnScreen(bool bResetToDefaultInputGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScreenBase.SetFocusOnScreen");
		
		UIGUI_ScreenBase_SetFocusOnScreen_Params params {};
		params.bResetToDefaultInputGroup = bResetToDefaultInputGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScreenBase.SetFocusOnInputGroupForAllUsers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InputGroupName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UIGUI_WidgetBase*                            SetFocusTo                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bResetFocusToDefault                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ScreenBase::SetFocusOnInputGroupForAllUsers(const class FString& InputGroupName, class UIGUI_WidgetBase* SetFocusTo, bool bResetFocusToDefault)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScreenBase.SetFocusOnInputGroupForAllUsers");
		
		UIGUI_ScreenBase_SetFocusOnInputGroupForAllUsers_Params params {};
		params.InputGroupName = InputGroupName;
		params.SetFocusTo = SetFocusTo;
		params.bResetFocusToDefault = bResetFocusToDefault;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScreenBase.SetFocusOnInputGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InputGroupName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UIGUI_WidgetBase*                            SetFocusTo                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bResetFocusToDefault                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UserIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ScreenBase::SetFocusOnInputGroup(const class FString& InputGroupName, class UIGUI_WidgetBase* SetFocusTo, bool bResetFocusToDefault, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScreenBase.SetFocusOnInputGroup");
		
		UIGUI_ScreenBase_SetFocusOnInputGroup_Params params {};
		params.InputGroupName = InputGroupName;
		params.SetFocusTo = SetFocusTo;
		params.bResetFocusToDefault = bResetFocusToDefault;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScreenBase.SetDefaultWidgetForInputGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InputGroupName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ScreenBase::SetDefaultWidgetForInputGroup(const class FString& InputGroupName, class UIGUI_WidgetBase* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScreenBase.SetDefaultWidgetForInputGroup");
		
		UIGUI_ScreenBase_SetDefaultWidgetForInputGroup_Params params {};
		params.InputGroupName = InputGroupName;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScreenBase.SetCurrentFocusOnWidgetForUserIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ScreenBase::SetCurrentFocusOnWidgetForUserIndex(int32_t UserIndex, class UIGUI_WidgetBase* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScreenBase.SetCurrentFocusOnWidgetForUserIndex");
		
		UIGUI_ScreenBase_SetCurrentFocusOnWidgetForUserIndex_Params params {};
		params.UserIndex = UserIndex;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScreenBase.SetCurrentFocusOnWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ScreenBase::SetCurrentFocusOnWidget(class UIGUI_WidgetBase* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScreenBase.SetCurrentFocusOnWidget");
		
		UIGUI_ScreenBase_SetCurrentFocusOnWidget_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScreenBase.RemoveWidgetsFromPersistentWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UIGUI_WidgetBase*>                    ToBeRemovedPersistentWidgets                               (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ScreenBase::RemoveWidgetsFromPersistentWidgets(TArray<class UIGUI_WidgetBase*> ToBeRemovedPersistentWidgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScreenBase.RemoveWidgetsFromPersistentWidgets");
		
		UIGUI_ScreenBase_RemoveWidgetsFromPersistentWidgets_Params params {};
		params.ToBeRemovedPersistentWidgets = ToBeRemovedPersistentWidgets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScreenBase.RemoveWidgetFromInputGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            WidgetToRemove                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InputGroupName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ScreenBase::RemoveWidgetFromInputGroup(class UIGUI_WidgetBase* WidgetToRemove, const class FString& InputGroupName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScreenBase.RemoveWidgetFromInputGroup");
		
		UIGUI_ScreenBase_RemoveWidgetFromInputGroup_Params params {};
		params.WidgetToRemove = WidgetToRemove;
		params.InputGroupName = InputGroupName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScreenBase.RemoveInputGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InputGroupName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ScreenBase::RemoveInputGroup(const class FString& InputGroupName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScreenBase.RemoveInputGroup");
		
		UIGUI_ScreenBase_RemoveInputGroup_Params params {};
		params.InputGroupName = InputGroupName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScreenBase.RemoveChildrenOfTypeClassFromWidgetBaseFromInputGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            ContainerWidget                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InputGroupName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ScreenBase::RemoveChildrenOfTypeClassFromWidgetBaseFromInputGroup(class UIGUI_WidgetBase* ContainerWidget, const class FString& InputGroupName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScreenBase.RemoveChildrenOfTypeClassFromWidgetBaseFromInputGroup");
		
		UIGUI_ScreenBase_RemoveChildrenOfTypeClassFromWidgetBaseFromInputGroup_Params params {};
		params.ContainerWidget = ContainerWidget;
		params.InputGroupName = InputGroupName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScreenBase.RemoveChildrenOfTypeClassFromPanelWidgetFromInputGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPanelWidget*                                PanelWidget                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InputGroupName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ScreenBase::RemoveChildrenOfTypeClassFromPanelWidgetFromInputGroup(class UPanelWidget* PanelWidget, const class FString& InputGroupName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScreenBase.RemoveChildrenOfTypeClassFromPanelWidgetFromInputGroup");
		
		UIGUI_ScreenBase_RemoveChildrenOfTypeClassFromPanelWidgetFromInputGroup_Params params {};
		params.PanelWidget = PanelWidget;
		params.InputGroupName = InputGroupName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScreenBase.RemoveAllWidgetsFromInputGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InputGroupName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ScreenBase::RemoveAllWidgetsFromInputGroup(const class FString& InputGroupName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScreenBase.RemoveAllWidgetsFromInputGroup");
		
		UIGUI_ScreenBase_RemoveAllWidgetsFromInputGroup_Params params {};
		params.InputGroupName = InputGroupName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScreenBase.HideScreen
	 * 		Flags  -> ()
	 */
	void UIGUI_ScreenBase::HideScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScreenBase.HideScreen");
		
		UIGUI_ScreenBase_HideScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScreenBase.GetWidgetsInInputGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InputGroupName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UIGUI_WidgetBase*> UIGUI_ScreenBase::GetWidgetsInInputGroup(const class FString& InputGroupName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScreenBase.GetWidgetsInInputGroup");
		
		UIGUI_ScreenBase_GetWidgetsInInputGroup_Params params {};
		params.InputGroupName = InputGroupName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScreenBase.GetInputGroups
	 * 		Flags  -> ()
	 */
	TArray<struct FInputGroup> UIGUI_ScreenBase::GetInputGroups()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScreenBase.GetInputGroups");
		
		UIGUI_ScreenBase_GetInputGroups_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScreenBase.GetInputGroupForUserIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UIGUI_ScreenBase::GetInputGroupForUserIndex(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScreenBase.GetInputGroupForUserIndex");
		
		UIGUI_ScreenBase_GetInputGroupForUserIndex_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScreenBase.GetInputGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InputGroupName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FInputGroup UIGUI_ScreenBase::GetInputGroup(const class FString& InputGroupName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScreenBase.GetInputGroup");
		
		UIGUI_ScreenBase_GetInputGroup_Params params {};
		params.InputGroupName = InputGroupName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScreenBase.GetDefaultInputGroupName
	 * 		Flags  -> ()
	 */
	class FString UIGUI_ScreenBase::GetDefaultInputGroupName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScreenBase.GetDefaultInputGroupName");
		
		UIGUI_ScreenBase_GetDefaultInputGroupName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScreenBase.GetCurrentFocusedWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UIGUI_WidgetBase* UIGUI_ScreenBase::GetCurrentFocusedWidget(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScreenBase.GetCurrentFocusedWidget");
		
		UIGUI_ScreenBase_GetCurrentFocusedWidget_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScreenBase.DoesInputGroupExist
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InputGroupName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGUI_ScreenBase::DoesInputGroupExist(const class FString& InputGroupName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScreenBase.DoesInputGroupExist");
		
		UIGUI_ScreenBase_DoesInputGroupExist_Params params {};
		params.InputGroupName = InputGroupName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScreenBase.CreateInputGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputGroup                                 InputGroup                                                 (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ScreenBase::CreateInputGroup(const struct FInputGroup& InputGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScreenBase.CreateInputGroup");
		
		UIGUI_ScreenBase_CreateInputGroup_Params params {};
		params.InputGroup = InputGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScreenBase.CreateEmptyInputGroups
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              InputGroupNames                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FInputGroupOptions                          InputGroupOptions                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ScreenBase::CreateEmptyInputGroups(TArray<class FString> InputGroupNames, const struct FInputGroupOptions& InputGroupOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScreenBase.CreateEmptyInputGroups");
		
		UIGUI_ScreenBase_CreateEmptyInputGroups_Params params {};
		params.InputGroupNames = InputGroupNames;
		params.InputGroupOptions = InputGroupOptions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScreenBase.AddWidgetToInputGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            WidgetToAdd                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InputGroupName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ScreenBase::AddWidgetToInputGroup(class UIGUI_WidgetBase* WidgetToAdd, const class FString& InputGroupName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScreenBase.AddWidgetToInputGroup");
		
		UIGUI_ScreenBase_AddWidgetToInputGroup_Params params {};
		params.WidgetToAdd = WidgetToAdd;
		params.InputGroupName = InputGroupName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScreenBase.AddChildrenOfTypeClassFromWidgetBaseToInputGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            ContainerWidget                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InputGroupName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ScreenBase::AddChildrenOfTypeClassFromWidgetBaseToInputGroup(class UIGUI_WidgetBase* ContainerWidget, const class FString& InputGroupName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScreenBase.AddChildrenOfTypeClassFromWidgetBaseToInputGroup");
		
		UIGUI_ScreenBase_AddChildrenOfTypeClassFromWidgetBaseToInputGroup_Params params {};
		params.ContainerWidget = ContainerWidget;
		params.InputGroupName = InputGroupName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScreenBase.AddChildrenOfTypeClassFromPanelWidgetToInputGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPanelWidget*                                PanelWidget                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InputGroupName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ScreenBase::AddChildrenOfTypeClassFromPanelWidgetToInputGroup(class UPanelWidget* PanelWidget, const class FString& InputGroupName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScreenBase.AddChildrenOfTypeClassFromPanelWidgetToInputGroup");
		
		UIGUI_ScreenBase_AddChildrenOfTypeClassFromPanelWidgetToInputGroup_Params params {};
		params.PanelWidget = PanelWidget;
		params.InputGroupName = InputGroupName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScreenBase.AddArrayOfWidgetsToInputGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UIGUI_WidgetBase*>                    WidgetsToAdd                                               (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class FString                                      InputGroupName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ScreenBase::AddArrayOfWidgetsToInputGroup(TArray<class UIGUI_WidgetBase*> WidgetsToAdd, const class FString& InputGroupName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScreenBase.AddArrayOfWidgetsToInputGroup");
		
		UIGUI_ScreenBase_AddArrayOfWidgetsToInputGroup_Params params {};
		params.WidgetsToAdd = WidgetsToAdd;
		params.InputGroupName = InputGroupName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGUI_ScreenBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGUI_ScreenBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGUserInterface.IGUI_ScreenBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ProfilerHelper.OpenStatProfilerSavesDirectory
	 * 		Flags  -> ()
	 */
	void UIGUI_ProfilerHelper::OpenStatProfilerSavesDirectory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ProfilerHelper.OpenStatProfilerSavesDirectory");
		
		UIGUI_ProfilerHelper_OpenStatProfilerSavesDirectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGUI_ProfilerHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGUI_ProfilerHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGUserInterface.IGUI_ProfilerHelper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ProgressBar.SetTrailColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                LinearColor                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ProgressBar::SetTrailColor(const struct FLinearColor& LinearColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ProgressBar.SetTrailColor");
		
		UIGUI_ProgressBar_SetTrailColor_Params params {};
		params.LinearColor = LinearColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ProgressBar.SetRawValueRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MinValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ProgressBar::SetRawValueRange(float MinValue, float MaxValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ProgressBar.SetRawValueRange");
		
		UIGUI_ProgressBar_SetRawValueRange_Params params {};
		params.MinValue = MinValue;
		params.MaxValue = MaxValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ProgressBar.SetGradientTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    Gradient                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ProgressBar::SetGradientTexture(class UTexture* Gradient)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ProgressBar.SetGradientTexture");
		
		UIGUI_ProgressBar_SetGradientTexture_Params params {};
		params.Gradient = Gradient;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ProgressBar.SetGoalValueAsPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ProgressBar::SetGoalValueAsPercent(float Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ProgressBar.SetGoalValueAsPercent");
		
		UIGUI_ProgressBar_SetGoalValueAsPercent_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ProgressBar.SetGoalValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              RawValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ProgressBar::SetGoalValue(float RawValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ProgressBar.SetGoalValue");
		
		UIGUI_ProgressBar_SetGoalValue_Params params {};
		params.RawValue = RawValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ProgressBar.SetFillTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    Fill                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ProgressBar::SetFillTexture(class UTexture* Fill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ProgressBar.SetFillTexture");
		
		UIGUI_ProgressBar_SetFillTexture_Params params {};
		params.Fill = Fill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ProgressBar.SetFillColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                LinearColor                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ProgressBar::SetFillColor(const struct FLinearColor& LinearColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ProgressBar.SetFillColor");
		
		UIGUI_ProgressBar_SetFillColor_Params params {};
		params.LinearColor = LinearColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ProgressBar.SetAutomaticAnimations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Parent                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidgetAnimation*                            Increase                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidgetAnimation*                            Decrease                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ProgressBar::SetAutomaticAnimations(class UUserWidget* Parent, class UWidgetAnimation* Increase, class UWidgetAnimation* Decrease)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ProgressBar.SetAutomaticAnimations");
		
		UIGUI_ProgressBar_SetAutomaticAnimations_Params params {};
		params.Parent = Parent;
		params.Increase = Increase;
		params.Decrease = Decrease;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ProgressBar.SetAnimTrailPercentToGoal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ProgressBar::SetAnimTrailPercentToGoal(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ProgressBar.SetAnimTrailPercentToGoal");
		
		UIGUI_ProgressBar_SetAnimTrailPercentToGoal_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ProgressBar.SetAnimFillPercentToGoal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ProgressBar::SetAnimFillPercentToGoal(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ProgressBar.SetAnimFillPercentToGoal");
		
		UIGUI_ProgressBar_SetAnimFillPercentToGoal_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ProgressBar.GetAnimatedTrailPercent
	 * 		Flags  -> ()
	 */
	float UIGUI_ProgressBar::GetAnimatedTrailPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ProgressBar.GetAnimatedTrailPercent");
		
		UIGUI_ProgressBar_GetAnimatedTrailPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ProgressBar.GetAnimatedFillPercent
	 * 		Flags  -> ()
	 */
	float UIGUI_ProgressBar::GetAnimatedFillPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ProgressBar.GetAnimatedFillPercent");
		
		UIGUI_ProgressBar_GetAnimatedFillPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ProgressBar.ConvertFromRawToPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              RawValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UIGUI_ProgressBar::ConvertFromRawToPercent(float RawValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ProgressBar.ConvertFromRawToPercent");
		
		UIGUI_ProgressBar_ConvertFromRawToPercent_Params params {};
		params.RawValue = RawValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ProgressBar.ConvertFromPercentToRaw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UIGUI_ProgressBar::ConvertFromPercentToRaw(float Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ProgressBar.ConvertFromPercentToRaw");
		
		UIGUI_ProgressBar_ConvertFromPercentToRaw_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGUI_ProgressBar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGUI_ProgressBar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGUserInterface.IGUI_ProgressBar");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_RichTextBlock.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UIGUI_RichTextBlock::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_RichTextBlock.SetText");
		
		UIGUI_RichTextBlock_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_RichTextBlock.GetDecoratorByClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      DecoratorClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UIGUI_RichTextBlockDecorator* UIGUI_RichTextBlock::GetDecoratorByClass(class UClass* DecoratorClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_RichTextBlock.GetDecoratorByClass");
		
		UIGUI_RichTextBlock_GetDecoratorByClass_Params params {};
		params.DecoratorClass = DecoratorClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGUI_RichTextBlock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGUI_RichTextBlock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGUserInterface.IGUI_RichTextBlock");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGUI_RichTextBlockDecorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGUI_RichTextBlockDecorator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGUserInterface.IGUI_RichTextBlockDecorator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_RichTextBlockImageDecorator.SetImageSets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UDataTable*>                          ImageSetTables                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UIGUI_RichTextBlockImageDecorator::SetImageSets(TArray<class UDataTable*> ImageSetTables)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_RichTextBlockImageDecorator.SetImageSets");
		
		UIGUI_RichTextBlockImageDecorator_SetImageSets_Params params {};
		params.ImageSetTables = ImageSetTables;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGUI_RichTextBlockImageDecorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGUI_RichTextBlockImageDecorator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGUserInterface.IGUI_RichTextBlockImageDecorator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_SceneRootBase.GetRootOverlay
	 * 		Flags  -> ()
	 */
	void UIGUI_SceneRootBase::GetRootOverlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_SceneRootBase.GetRootOverlay");
		
		UIGUI_SceneRootBase_GetRootOverlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_SceneRootBase.AddWidgetToOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 WidgetInstance                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_SceneRootBase::AddWidgetToOverlay(class UUserWidget* WidgetInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_SceneRootBase.AddWidgetToOverlay");
		
		UIGUI_SceneRootBase_AddWidgetToOverlay_Params params {};
		params.WidgetInstance = WidgetInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGUI_SceneRootBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGUI_SceneRootBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGUserInterface.IGUI_SceneRootBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScrollableList.SetScrollPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ScrollableList::SetScrollPosition(float Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScrollableList.SetScrollPosition");
		
		UIGUI_ScrollableList_SetScrollPosition_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScrollableList.SetScrollboxOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewScrollboxOffset                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ScrollableList::SetScrollboxOffset(float NewScrollboxOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScrollableList.SetScrollboxOffset");
		
		UIGUI_ScrollableList_SetScrollboxOffset_Params params {};
		params.NewScrollboxOffset = NewScrollboxOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScrollableList.ScrollPageByPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OffsetScrollPercent                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ScrollableList::ScrollPageByPercent(float OffsetScrollPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScrollableList.ScrollPageByPercent");
		
		UIGUI_ScrollableList_ScrollPageByPercent_Params params {};
		params.OffsetScrollPercent = OffsetScrollPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScrollableList.RemoveItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UIGUI_WidgetBase*>                    Widgets                                                    (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ScrollableList::RemoveItems(TArray<class UIGUI_WidgetBase*> Widgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScrollableList.RemoveItems");
		
		UIGUI_ScrollableList_RemoveItems_Params params {};
		params.Widgets = Widgets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScrollableList.RemoveItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ScrollableList::RemoveItem(class UIGUI_WidgetBase* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScrollableList.RemoveItem");
		
		UIGUI_ScrollableList_RemoveItem_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScrollableList.RemoveAllItems
	 * 		Flags  -> ()
	 */
	void UIGUI_ScrollableList::RemoveAllItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScrollableList.RemoveAllItems");
		
		UIGUI_ScrollableList_RemoveAllItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScrollableList.RefreshWidgetWithNavigationOverride
	 * 		Flags  -> ()
	 */
	void UIGUI_ScrollableList::RefreshWidgetWithNavigationOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScrollableList.RefreshWidgetWithNavigationOverride");
		
		UIGUI_ScrollableList_RefreshWidgetWithNavigationOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScrollableList.ListItemFocused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UserIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ScrollableList::ListItemFocused(class UIGUI_WidgetBase* Source, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScrollableList.ListItemFocused");
		
		UIGUI_ScrollableList_ListItemFocused_Params params {};
		params.Source = Source;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScrollableList.GetScrollPercent
	 * 		Flags  -> ()
	 */
	float UIGUI_ScrollableList::GetScrollPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScrollableList.GetScrollPercent");
		
		UIGUI_ScrollableList_GetScrollPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScrollableList.GetMaxOffset
	 * 		Flags  -> ()
	 */
	float UIGUI_ScrollableList::GetMaxOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScrollableList.GetMaxOffset");
		
		UIGUI_ScrollableList_GetMaxOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScrollableList.GetContentSize
	 * 		Flags  -> ()
	 */
	struct FVector2D UIGUI_ScrollableList::GetContentSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScrollableList.GetContentSize");
		
		UIGUI_ScrollableList_GetContentSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScrollableList.AddListItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UIGUI_WidgetBase*>                    Widgets                                                    (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ScrollableList::AddListItems(TArray<class UIGUI_WidgetBase*> Widgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScrollableList.AddListItems");
		
		UIGUI_ScrollableList_AddListItems_Params params {};
		params.Widgets = Widgets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ScrollableList.AddListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ScrollableList::AddListItem(class UIGUI_WidgetBase* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ScrollableList.AddListItem");
		
		UIGUI_ScrollableList_AddListItem_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGUI_ScrollableList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGUI_ScrollableList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGUserInterface.IGUI_ScrollableList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_StateComponent.TransitionStartedForScreen
	 * 		Flags  -> ()
	 */
	void UIGUI_StateComponent::TransitionStartedForScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_StateComponent.TransitionStartedForScreen");
		
		UIGUI_StateComponent_TransitionStartedForScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_StateComponent.TransitionFinishedForScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_ScreenBase*                            Screen                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_StateComponent::TransitionFinishedForScreen(class UIGUI_ScreenBase* Screen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_StateComponent.TransitionFinishedForScreen");
		
		UIGUI_StateComponent_TransitionFinishedForScreen_Params params {};
		params.Screen = Screen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_StateComponent.RemoveStatesAfterLastInstanceOf
	 * 		Flags  -> ()
	 */
	void UIGUI_StateComponent::RemoveStatesAfterLastInstanceOf()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_StateComponent.RemoveStatesAfterLastInstanceOf");
		
		UIGUI_StateComponent_RemoveStatesAfterLastInstanceOf_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_StateComponent.RemoveStatesAfterFirstInstanceOf
	 * 		Flags  -> ()
	 */
	void UIGUI_StateComponent::RemoveStatesAfterFirstInstanceOf()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_StateComponent.RemoveStatesAfterFirstInstanceOf");
		
		UIGUI_StateComponent_RemoveStatesAfterFirstInstanceOf_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_StateComponent.RemoveCurrentState
	 * 		Flags  -> ()
	 */
	void UIGUI_StateComponent::RemoveCurrentState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_StateComponent.RemoveCurrentState");
		
		UIGUI_StateComponent_RemoveCurrentState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_StateComponent.RemoveAllButFirstState
	 * 		Flags  -> ()
	 */
	void UIGUI_StateComponent::RemoveAllButFirstState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_StateComponent.RemoveAllButFirstState");
		
		UIGUI_StateComponent_RemoveAllButFirstState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_StateComponent.IsScreenTransitionActive
	 * 		Flags  -> ()
	 */
	bool UIGUI_StateComponent::IsScreenTransitionActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_StateComponent.IsScreenTransitionActive");
		
		UIGUI_StateComponent_IsScreenTransitionActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_StateComponent.HasState
	 * 		Flags  -> ()
	 */
	bool UIGUI_StateComponent::HasState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_StateComponent.HasState");
		
		UIGUI_StateComponent_HasState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_StateComponent.HasPreviousState
	 * 		Flags  -> ()
	 */
	bool UIGUI_StateComponent::HasPreviousState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_StateComponent.HasPreviousState");
		
		UIGUI_StateComponent_HasPreviousState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_StateComponent.GetPreviousState
	 * 		Flags  -> ()
	 */
	void UIGUI_StateComponent::GetPreviousState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_StateComponent.GetPreviousState");
		
		UIGUI_StateComponent_GetPreviousState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_StateComponent.GetCurrentState
	 * 		Flags  -> ()
	 */
	void UIGUI_StateComponent::GetCurrentState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_StateComponent.GetCurrentState");
		
		UIGUI_StateComponent_GetCurrentState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_StateComponent.AddState
	 * 		Flags  -> ()
	 */
	void UIGUI_StateComponent::AddState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_StateComponent.AddState");
		
		UIGUI_StateComponent_AddState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGUI_StateComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGUI_StateComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGUserInterface.IGUI_StateComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ToggleText.SetShouldNavigationLoop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldLoop                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ToggleText::SetShouldNavigationLoop(bool ShouldLoop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ToggleText.SetShouldNavigationLoop");
		
		UIGUI_ToggleText_SetShouldNavigationLoop_Params params {};
		params.ShouldLoop = ShouldLoop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ToggleText.SetOptionList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FText>                                OptionList                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ToggleText::SetOptionList(TArray<class FText> OptionList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ToggleText.SetOptionList");
		
		UIGUI_ToggleText_SetOptionList_Params params {};
		params.OptionList = OptionList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ToggleText.SetCurrentOptionIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ToggleText::SetCurrentOptionIndex(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ToggleText.SetCurrentOptionIndex");
		
		UIGUI_ToggleText_SetCurrentOptionIndex_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ToggleText.RemoveOptionFromList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        OptionText                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ToggleText::RemoveOptionFromList(const class FText& OptionText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ToggleText.RemoveOptionFromList");
		
		UIGUI_ToggleText_RemoveOptionFromList_Params params {};
		params.OptionText = OptionText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ToggleText.NavigatePrevious
	 * 		Flags  -> ()
	 */
	void UIGUI_ToggleText::NavigatePrevious()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ToggleText.NavigatePrevious");
		
		UIGUI_ToggleText_NavigatePrevious_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ToggleText.NavigateNext
	 * 		Flags  -> ()
	 */
	void UIGUI_ToggleText::NavigateNext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ToggleText.NavigateNext");
		
		UIGUI_ToggleText_NavigateNext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ToggleText.GetOptionTextForIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UIGUI_ToggleText::GetOptionTextForIndex(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ToggleText.GetOptionTextForIndex");
		
		UIGUI_ToggleText_GetOptionTextForIndex_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ToggleText.GetOptionList
	 * 		Flags  -> ()
	 */
	TArray<class FText> UIGUI_ToggleText::GetOptionList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ToggleText.GetOptionList");
		
		UIGUI_ToggleText_GetOptionList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ToggleText.GetOptionIndexForText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        OptionText                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UIGUI_ToggleText::GetOptionIndexForText(const class FText& OptionText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ToggleText.GetOptionIndexForText");
		
		UIGUI_ToggleText_GetOptionIndexForText_Params params {};
		params.OptionText = OptionText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ToggleText.GetCurrentOptionText
	 * 		Flags  -> ()
	 */
	class FText UIGUI_ToggleText::GetCurrentOptionText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ToggleText.GetCurrentOptionText");
		
		UIGUI_ToggleText_GetCurrentOptionText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ToggleText.CanNavigatePrevious
	 * 		Flags  -> ()
	 */
	bool UIGUI_ToggleText::CanNavigatePrevious()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ToggleText.CanNavigatePrevious");
		
		UIGUI_ToggleText_CanNavigatePrevious_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ToggleText.CanNavigateNext
	 * 		Flags  -> ()
	 */
	bool UIGUI_ToggleText::CanNavigateNext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ToggleText.CanNavigateNext");
		
		UIGUI_ToggleText_CanNavigateNext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_ToggleText.AddOptionToList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        OptionText                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	void UIGUI_ToggleText::AddOptionToList(const class FText& OptionText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_ToggleText.AddOptionToList");
		
		UIGUI_ToggleText_AddOptionToList_Params params {};
		params.OptionText = OptionText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGUI_ToggleText.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGUI_ToggleText::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGUserInterface.IGUI_ToggleText");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_UniformGridList.SetWrapUpEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsWrappingEnabled                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_UniformGridList::SetWrapUpEnabled(bool IsWrappingEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_UniformGridList.SetWrapUpEnabled");
		
		UIGUI_UniformGridList_SetWrapUpEnabled_Params params {};
		params.IsWrappingEnabled = IsWrappingEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_UniformGridList.SetWrapRightEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsWrappingEnabled                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_UniformGridList::SetWrapRightEnabled(bool IsWrappingEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_UniformGridList.SetWrapRightEnabled");
		
		UIGUI_UniformGridList_SetWrapRightEnabled_Params params {};
		params.IsWrappingEnabled = IsWrappingEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_UniformGridList.SetWrapLeftEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsWrappingEnabled                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_UniformGridList::SetWrapLeftEnabled(bool IsWrappingEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_UniformGridList.SetWrapLeftEnabled");
		
		UIGUI_UniformGridList_SetWrapLeftEnabled_Params params {};
		params.IsWrappingEnabled = IsWrappingEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_UniformGridList.SetWrapDownEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsWrappingEnabled                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_UniformGridList::SetWrapDownEnabled(bool IsWrappingEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_UniformGridList.SetWrapDownEnabled");
		
		UIGUI_UniformGridList_SetWrapDownEnabled_Params params {};
		params.IsWrappingEnabled = IsWrappingEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_UniformGridList.SetSlotPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InSlotPadding                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIGUI_UniformGridList::SetSlotPadding(const struct FMargin& InSlotPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_UniformGridList.SetSlotPadding");
		
		UIGUI_UniformGridList_SetSlotPadding_Params params {};
		params.InSlotPadding = InSlotPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_UniformGridList.SetScrollPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_UniformGridList::SetScrollPosition(float Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_UniformGridList.SetScrollPosition");
		
		UIGUI_UniformGridList_SetScrollPosition_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_UniformGridList.SetScrollboxOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewScrollboxOffset                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_UniformGridList::SetScrollboxOffset(float NewScrollboxOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_UniformGridList.SetScrollboxOffset");
		
		UIGUI_UniformGridList_SetScrollboxOffset_Params params {};
		params.NewScrollboxOffset = NewScrollboxOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_UniformGridList.SetMinDesiredSlotWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMinDesiredSlotWidth                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_UniformGridList::SetMinDesiredSlotWidth(float InMinDesiredSlotWidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_UniformGridList.SetMinDesiredSlotWidth");
		
		UIGUI_UniformGridList_SetMinDesiredSlotWidth_Params params {};
		params.InMinDesiredSlotWidth = InMinDesiredSlotWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_UniformGridList.SetMinDesiredSlotHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMinDesiredSlotHeight                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_UniformGridList::SetMinDesiredSlotHeight(float InMinDesiredSlotHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_UniformGridList.SetMinDesiredSlotHeight");
		
		UIGUI_UniformGridList_SetMinDesiredSlotHeight_Params params {};
		params.InMinDesiredSlotHeight = InMinDesiredSlotHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_UniformGridList.ScrollPageByPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OffsetScrollPercent                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_UniformGridList::ScrollPageByPercent(float OffsetScrollPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_UniformGridList.ScrollPageByPercent");
		
		UIGUI_UniformGridList_ScrollPageByPercent_Params params {};
		params.OffsetScrollPercent = OffsetScrollPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_UniformGridList.RemoveItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_UniformGridList::RemoveItem(class UIGUI_WidgetBase* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_UniformGridList.RemoveItem");
		
		UIGUI_UniformGridList_RemoveItem_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_UniformGridList.RemoveAllItems
	 * 		Flags  -> ()
	 */
	void UIGUI_UniformGridList::RemoveAllItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_UniformGridList.RemoveAllItems");
		
		UIGUI_UniformGridList_RemoveAllItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_UniformGridList.ListItemFocused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UserIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_UniformGridList::ListItemFocused(class UIGUI_WidgetBase* Source, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_UniformGridList.ListItemFocused");
		
		UIGUI_UniformGridList_ListItemFocused_Params params {};
		params.Source = Source;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_UniformGridList.GetScrollPercent
	 * 		Flags  -> ()
	 */
	float UIGUI_UniformGridList::GetScrollPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_UniformGridList.GetScrollPercent");
		
		UIGUI_UniformGridList_GetScrollPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_UniformGridList.GetMaxOffset
	 * 		Flags  -> ()
	 */
	float UIGUI_UniformGridList::GetMaxOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_UniformGridList.GetMaxOffset");
		
		UIGUI_UniformGridList_GetMaxOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_UniformGridList.GetContentSize
	 * 		Flags  -> ()
	 */
	struct FVector2D UIGUI_UniformGridList::GetContentSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_UniformGridList.GetContentSize");
		
		UIGUI_UniformGridList_GetContentSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_UniformGridList.AddListItemWithGridPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   GridPosition                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_UniformGridList::AddListItemWithGridPosition(class UIGUI_WidgetBase* Widget, const struct FVector2D& GridPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_UniformGridList.AddListItemWithGridPosition");
		
		UIGUI_UniformGridList_AddListItemWithGridPosition_Params params {};
		params.Widget = Widget;
		params.GridPosition = GridPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_UniformGridList.AddListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGUI_UniformGridList::AddListItem(class UIGUI_WidgetBase* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_UniformGridList.AddListItem");
		
		UIGUI_UniformGridList_AddListItem_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGUserInterface.IGUI_UniformGridList.AddChildToUniformGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUniformGridSlot* UIGUI_UniformGridList::AddChildToUniformGrid(class UWidget* Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGUserInterface.IGUI_UniformGridList.AddChildToUniformGrid");
		
		UIGUI_UniformGridList_AddChildToUniformGrid_Params params {};
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGUI_UniformGridList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGUI_UniformGridList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGUserInterface.IGUI_UniformGridList");
		return ptr;
	}

}


