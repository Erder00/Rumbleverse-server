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
	 * 		Name   -> Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.SetKeyboardBindingsName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_InputBindingIcon_C::SetKeyboardBindingsName(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.SetKeyboardBindingsName");
		
		UWBP_Sheik_InputBindingIcon_C_SetKeyboardBindingsName_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.OnPreviewMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_Sheik_InputBindingIcon_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.OnPreviewMouseButtonDown");
		
		UWBP_Sheik_InputBindingIcon_C_OnPreviewMouseButtonDown_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.DetectCurrentInputSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInputSource                                       OutInputSource                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_InputBindingIcon_C::DetectCurrentInputSource(EInputSource* OutInputSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.DetectCurrentInputSource");
		
		UWBP_Sheik_InputBindingIcon_C_DetectCurrentInputSource_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutInputSource != nullptr)
			*OutInputSource = params.OutInputSource;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.GetShortKeyName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        KeyText                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class FText                                        NewParam                                                   (Parm, OutParm)
	 */
	void UWBP_Sheik_InputBindingIcon_C::GetShortKeyName(const struct FKey& KeyText, class FText* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.GetShortKeyName");
		
		UWBP_Sheik_InputBindingIcon_C_GetShortKeyName_Params params {};
		params.KeyText = KeyText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.SetActionMappingName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InActionMappingName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_InputBindingIcon_C::SetActionMappingName(const class FName& InActionMappingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.SetActionMappingName");
		
		UWBP_Sheik_InputBindingIcon_C_SetActionMappingName_Params params {};
		params.InActionMappingName = InActionMappingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.OnKeybindingsChanged
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_InputBindingIcon_C::OnKeybindingsChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.OnKeybindingsChanged");
		
		UWBP_Sheik_InputBindingIcon_C_OnKeybindingsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.SetBindingFromActionMapping
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_InputBindingIcon_C::SetBindingFromActionMapping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.SetBindingFromActionMapping");
		
		UWBP_Sheik_InputBindingIcon_C_SetBindingFromActionMapping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.GetBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Binding                                                    (Parm, OutParm, NoDestructor)
	 */
	void UWBP_Sheik_InputBindingIcon_C::GetBinding(struct FDataTableRowHandle* Binding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.GetBinding");
		
		UWBP_Sheik_InputBindingIcon_C_GetBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Binding != nullptr)
			*Binding = params.Binding;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.SetBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Binding                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_Sheik_InputBindingIcon_C::SetBinding(const struct FDataTableRowHandle& Binding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.SetBinding");
		
		UWBP_Sheik_InputBindingIcon_C_SetBinding_Params params {};
		params.Binding = Binding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.UpdateBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInputSource                                       InputSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_InputBindingIcon_C::UpdateBinding(EInputSource InputSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.UpdateBinding");
		
		UWBP_Sheik_InputBindingIcon_C_UpdateBinding_Params params {};
		params.InputSource = InputSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_InputBindingIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.Construct");
		
		UWBP_Sheik_InputBindingIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.OnInputSourceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUserControllerData                         OldInputSource                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FUserControllerData                         NewInputSource                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_Sheik_InputBindingIcon_C::OnInputSourceChanged(const struct FUserControllerData& OldInputSource, const struct FUserControllerData& NewInputSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.OnInputSourceChanged");
		
		UWBP_Sheik_InputBindingIcon_C_OnInputSourceChanged_Params params {};
		params.OldInputSource = OldInputSource;
		params.NewInputSource = NewInputSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_InputBindingIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.PreConstruct");
		
		UWBP_Sheik_InputBindingIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_InputBindingIcon_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.ConstructOnlyOnce");
		
		UWBP_Sheik_InputBindingIcon_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.OnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_InputBindingIcon_C::OnSelected(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.OnSelected");
		
		UWBP_Sheik_InputBindingIcon_C_OnSelected_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.ExecuteUbergraph_WBP_Sheik_InputBindingIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_InputBindingIcon_C::ExecuteUbergraph_WBP_Sheik_InputBindingIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.ExecuteUbergraph_WBP_Sheik_InputBindingIcon");
		
		UWBP_Sheik_InputBindingIcon_C_ExecuteUbergraph_WBP_Sheik_InputBindingIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_InputBindingIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_InputBindingIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C");
		return ptr;
	}

}


