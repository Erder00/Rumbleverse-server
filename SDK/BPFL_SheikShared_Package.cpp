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
	 * 		Name   -> Function BPFL_SheikShared.BPFL_SheikShared_C.CreateSaveCustomizationsPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              SaveAndLeavePage_Delegate                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	 * 		class FScriptDelegate                              DiscardChangesAndLeavePage_Delegate                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	 * 		class FScriptDelegate                              Cancel_Delegate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_SheikShared_C::CreateSaveCustomizationsPopup(const class FScriptDelegate& SaveAndLeavePage_Delegate, const class FScriptDelegate& DiscardChangesAndLeavePage_Delegate, const class FScriptDelegate& Cancel_Delegate, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_SheikShared.BPFL_SheikShared_C.CreateSaveCustomizationsPopup");
		
		UBPFL_SheikShared_C_CreateSaveCustomizationsPopup_Params params {};
		params.SaveAndLeavePage_Delegate = SaveAndLeavePage_Delegate;
		params.DiscardChangesAndLeavePage_Delegate = DiscardChangesAndLeavePage_Delegate;
		params.Cancel_Delegate = Cancel_Delegate;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_SheikShared.BPFL_SheikShared_C.GetTestLoremIpsumDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LengthMin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            LengthMax                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      String                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBPFL_SheikShared_C::GetTestLoremIpsumDescription(int32_t LengthMin, int32_t LengthMax, class UObject* __WorldContext, class FString* String, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_SheikShared.BPFL_SheikShared_C.GetTestLoremIpsumDescription");
		
		UBPFL_SheikShared_C_GetTestLoremIpsumDescription_Params params {};
		params.LengthMin = LengthMin;
		params.LengthMax = LengthMax;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (String != nullptr)
			*String = params.String;
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPFL_SheikShared_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPFL_SheikShared_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_SheikShared.BPFL_SheikShared_C");
		return ptr;
	}

}


