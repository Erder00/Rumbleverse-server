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
	 * 		Name   -> Function BPFL_SheikErrors.BPFL_SheikErrors_C.CreateSheikErrorPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikError                                 Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PopupId                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_SheikErrors_C::CreateSheikErrorPopup(const struct FSheikError& Error, class UObject* __WorldContext, int32_t* PopupId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_SheikErrors.BPFL_SheikErrors_C.CreateSheikErrorPopup");
		
		UBPFL_SheikErrors_C_CreateSheikErrorPopup_Params params {};
		params.Error = Error;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PopupId != nullptr)
			*PopupId = params.PopupId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_SheikErrors.BPFL_SheikErrors_C.GetErrorHeaderAndBodyText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikError                                 Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        HeaderText                                                 (Parm, OutParm)
	 * 		class FText                                        BodyText                                                   (Parm, OutParm)
	 */
	void UBPFL_SheikErrors_C::GetErrorHeaderAndBodyText(const struct FSheikError& Error, class UObject* __WorldContext, class FText* HeaderText, class FText* BodyText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_SheikErrors.BPFL_SheikErrors_C.GetErrorHeaderAndBodyText");
		
		UBPFL_SheikErrors_C_GetErrorHeaderAndBodyText_Params params {};
		params.Error = Error;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HeaderText != nullptr)
			*HeaderText = params.HeaderText;
		if (BodyText != nullptr)
			*BodyText = params.BodyText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_SheikErrors.BPFL_SheikErrors_C.GetErrorCodeText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikError                                 Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBPFL_SheikErrors_C::GetErrorCodeText(const struct FSheikError& Error, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_SheikErrors.BPFL_SheikErrors_C.GetErrorCodeText");
		
		UBPFL_SheikErrors_C_GetErrorCodeText_Params params {};
		params.Error = Error;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPFL_SheikErrors_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPFL_SheikErrors_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_SheikErrors.BPFL_SheikErrors_C");
		return ptr;
	}

}


