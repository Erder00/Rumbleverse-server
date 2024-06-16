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
	 * 		Name   -> Function WBP_Sheik_MultiToggleIndicatorContainer.WBP_Sheik_MultiToggleIndicatorContainer_C.HideIndicatorAtIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            IndexToHide                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MultiToggleIndicatorContainer_C::HideIndicatorAtIndex(int32_t IndexToHide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggleIndicatorContainer.WBP_Sheik_MultiToggleIndicatorContainer_C.HideIndicatorAtIndex");
		
		UWBP_Sheik_MultiToggleIndicatorContainer_C_HideIndicatorAtIndex_Params params {};
		params.IndexToHide = IndexToHide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggleIndicatorContainer.WBP_Sheik_MultiToggleIndicatorContainer_C.RemoveOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OptionIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MultiToggleIndicatorContainer_C::RemoveOption(int32_t OptionIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggleIndicatorContainer.WBP_Sheik_MultiToggleIndicatorContainer_C.RemoveOption");
		
		UWBP_Sheik_MultiToggleIndicatorContainer_C_RemoveOption_Params params {};
		params.OptionIndex = OptionIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggleIndicatorContainer.WBP_Sheik_MultiToggleIndicatorContainer_C.SelectedOptionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OldOptionIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewOptionIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MultiToggleIndicatorContainer_C::SelectedOptionChanged(int32_t OldOptionIndex, int32_t NewOptionIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggleIndicatorContainer.WBP_Sheik_MultiToggleIndicatorContainer_C.SelectedOptionChanged");
		
		UWBP_Sheik_MultiToggleIndicatorContainer_C_SelectedOptionChanged_Params params {};
		params.OldOptionIndex = OldOptionIndex;
		params.NewOptionIndex = NewOptionIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggleIndicatorContainer.WBP_Sheik_MultiToggleIndicatorContainer_C.Construct Indicators
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumOptions                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldHideIndicator                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MultiToggleIndicatorContainer_C::ConstructIndicators(int32_t NumOptions, bool* ShouldHideIndicator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggleIndicatorContainer.WBP_Sheik_MultiToggleIndicatorContainer_C.Construct Indicators");
		
		UWBP_Sheik_MultiToggleIndicatorContainer_C_ConstructIndicators_Params params {};
		params.NumOptions = NumOptions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldHideIndicator != nullptr)
			*ShouldHideIndicator = params.ShouldHideIndicator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_MultiToggleIndicatorContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_MultiToggleIndicatorContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_MultiToggleIndicatorContainer.WBP_Sheik_MultiToggleIndicatorContainer_C");
		return ptr;
	}

}


