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
	 * 		Name   -> Function WBP_Sheik_EOM_FanMail.WBP_Sheik_EOM_FanMail_C.SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_FanMail_1
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_EOM_FanMail_C::SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_FanMail_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_FanMail.WBP_Sheik_EOM_FanMail_C.SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_FanMail_1");
		
		UWBP_Sheik_EOM_FanMail_C_SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_FanMail_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_FanMail.WBP_Sheik_EOM_FanMail_C.ResetAnimSequence
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_EOM_FanMail_C::ResetAnimSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_FanMail.WBP_Sheik_EOM_FanMail_C.ResetAnimSequence");
		
		UWBP_Sheik_EOM_FanMail_C_ResetAnimSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_FanMail.WBP_Sheik_EOM_FanMail_C.Display Fan Mail 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NewFanMailValue                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               EOMSkip                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_EOM_FanMail_C::DisplayFanMail(const class FText& NewFanMailValue, bool EOMSkip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_FanMail.WBP_Sheik_EOM_FanMail_C.Display Fan Mail ");
		
		UWBP_Sheik_EOM_FanMail_C_DisplayFanMail_Params params {};
		params.NewFanMailValue = NewFanMailValue;
		params.EOMSkip = EOMSkip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_FanMail.WBP_Sheik_EOM_FanMail_C.PlayUISound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPlaySound                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EUISounds                                          SoundType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_EOM_FanMail_C::PlayUISound(bool bPlaySound, EUISounds SoundType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_FanMail.WBP_Sheik_EOM_FanMail_C.PlayUISound");
		
		UWBP_Sheik_EOM_FanMail_C_PlayUISound_Params params {};
		params.bPlaySound = bPlaySound;
		params.SoundType = SoundType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_FanMail.WBP_Sheik_EOM_FanMail_C.DisplayFanMailAnim_Finished
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_EOM_FanMail_C::DisplayFanMailAnim_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_FanMail.WBP_Sheik_EOM_FanMail_C.DisplayFanMailAnim_Finished");
		
		UWBP_Sheik_EOM_FanMail_C_DisplayFanMailAnim_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_FanMail.WBP_Sheik_EOM_FanMail_C.ExecuteUbergraph_WBP_Sheik_EOM_FanMail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_EOM_FanMail_C::ExecuteUbergraph_WBP_Sheik_EOM_FanMail(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_FanMail.WBP_Sheik_EOM_FanMail_C.ExecuteUbergraph_WBP_Sheik_EOM_FanMail");
		
		UWBP_Sheik_EOM_FanMail_C_ExecuteUbergraph_WBP_Sheik_EOM_FanMail_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_FanMail.WBP_Sheik_EOM_FanMail_C.FanMailAnimComplete__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_EOM_FanMail_C::FanMailAnimComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_FanMail.WBP_Sheik_EOM_FanMail_C.FanMailAnimComplete__DelegateSignature");
		
		UWBP_Sheik_EOM_FanMail_C_FanMailAnimComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_EOM_FanMail_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_EOM_FanMail_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_EOM_FanMail.WBP_Sheik_EOM_FanMail_C");
		return ptr;
	}

}


