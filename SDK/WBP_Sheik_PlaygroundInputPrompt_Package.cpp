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
	 * 		Name   -> Function WBP_Sheik_PlaygroundInputPrompt.WBP_Sheik_PlaygroundInputPrompt_C.GetTextureForAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InActionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  OutTexture                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_PlaygroundInputPrompt_C::GetTextureForAction(const class FName& InActionName, class UTexture2D** OutTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundInputPrompt.WBP_Sheik_PlaygroundInputPrompt_C.GetTextureForAction");
		
		UWBP_Sheik_PlaygroundInputPrompt_C_GetTextureForAction_Params params {};
		params.InActionName = InActionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTexture != nullptr)
			*OutTexture = params.OutTexture;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundInputPrompt.WBP_Sheik_PlaygroundInputPrompt_C.SetActionName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InActionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_PlaygroundInputPrompt_C::SetActionName(const class FName& InActionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundInputPrompt.WBP_Sheik_PlaygroundInputPrompt_C.SetActionName");
		
		UWBP_Sheik_PlaygroundInputPrompt_C_SetActionName_Params params {};
		params.InActionName = InActionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundInputPrompt.WBP_Sheik_PlaygroundInputPrompt_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_PlaygroundInputPrompt_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundInputPrompt.WBP_Sheik_PlaygroundInputPrompt_C.ConstructOnlyOnce");
		
		UWBP_Sheik_PlaygroundInputPrompt_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundInputPrompt.WBP_Sheik_PlaygroundInputPrompt_C.OnInputSourceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUserControllerData                         OldInputSource                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FUserControllerData                         NewInputSource                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_Sheik_PlaygroundInputPrompt_C::OnInputSourceChanged(const struct FUserControllerData& OldInputSource, const struct FUserControllerData& NewInputSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundInputPrompt.WBP_Sheik_PlaygroundInputPrompt_C.OnInputSourceChanged");
		
		UWBP_Sheik_PlaygroundInputPrompt_C_OnInputSourceChanged_Params params {};
		params.OldInputSource = OldInputSource;
		params.NewInputSource = NewInputSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundInputPrompt.WBP_Sheik_PlaygroundInputPrompt_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_PlaygroundInputPrompt_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundInputPrompt.WBP_Sheik_PlaygroundInputPrompt_C.PreConstruct");
		
		UWBP_Sheik_PlaygroundInputPrompt_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundInputPrompt.WBP_Sheik_PlaygroundInputPrompt_C.ExecuteUbergraph_WBP_Sheik_PlaygroundInputPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_PlaygroundInputPrompt_C::ExecuteUbergraph_WBP_Sheik_PlaygroundInputPrompt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundInputPrompt.WBP_Sheik_PlaygroundInputPrompt_C.ExecuteUbergraph_WBP_Sheik_PlaygroundInputPrompt");
		
		UWBP_Sheik_PlaygroundInputPrompt_C_ExecuteUbergraph_WBP_Sheik_PlaygroundInputPrompt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_PlaygroundInputPrompt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_PlaygroundInputPrompt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_PlaygroundInputPrompt.WBP_Sheik_PlaygroundInputPrompt_C");
		return ptr;
	}

}


