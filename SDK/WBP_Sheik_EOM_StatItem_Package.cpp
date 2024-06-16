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
	 * 		Name   -> Function WBP_Sheik_EOM_StatItem.WBP_Sheik_EOM_StatItem_C.SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_StatItem_1
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_EOM_StatItem_C::SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_StatItem_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_StatItem.WBP_Sheik_EOM_StatItem_C.SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_StatItem_1");
		
		UWBP_Sheik_EOM_StatItem_C_SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_StatItem_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_StatItem.WBP_Sheik_EOM_StatItem_C.PlayShowSound
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_EOM_StatItem_C::PlayShowSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_StatItem.WBP_Sheik_EOM_StatItem_C.PlayShowSound");
		
		UWBP_Sheik_EOM_StatItem_C_PlayShowSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_StatItem.WBP_Sheik_EOM_StatItem_C.PlayUISound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUISounds                                          SoundType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_EOM_StatItem_C::PlayUISound(EUISounds SoundType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_StatItem.WBP_Sheik_EOM_StatItem_C.PlayUISound");
		
		UWBP_Sheik_EOM_StatItem_C_PlayUISound_Params params {};
		params.SoundType = SoundType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_StatItem.WBP_Sheik_EOM_StatItem_C.SetDisplayValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsNewRecord                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsCoolNumber                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_EOM_StatItem_C::SetDisplayValues(const class FText& Name, int32_t Amount, bool IsNewRecord, bool IsCoolNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_StatItem.WBP_Sheik_EOM_StatItem_C.SetDisplayValues");
		
		UWBP_Sheik_EOM_StatItem_C_SetDisplayValues_Params params {};
		params.Name = Name;
		params.Amount = Amount;
		params.IsNewRecord = IsNewRecord;
		params.IsCoolNumber = IsCoolNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_StatItem.WBP_Sheik_EOM_StatItem_C.Show
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_EOM_StatItem_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_StatItem.WBP_Sheik_EOM_StatItem_C.Show");
		
		UWBP_Sheik_EOM_StatItem_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_EOM_StatItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_EOM_StatItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_EOM_StatItem.WBP_Sheik_EOM_StatItem_C");
		return ptr;
	}

}


