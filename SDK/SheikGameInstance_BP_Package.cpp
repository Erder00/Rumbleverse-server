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
	 * 		Name   -> Function SheikGameInstance_BP.SheikGameInstance_BP_C.GetErrorText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikError                                 Error                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class FText                                        HeaderText                                                 (Parm, OutParm)
	 * 		class FText                                        BodyText                                                   (Parm, OutParm)
	 * 		class FText                                        ErrorCodeText                                              (Parm, OutParm)
	 */
	void USheikGameInstance_BP_C::GetErrorText(const struct FSheikError& Error, class FText* HeaderText, class FText* BodyText, class FText* ErrorCodeText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGameInstance_BP.SheikGameInstance_BP_C.GetErrorText");
		
		USheikGameInstance_BP_C_GetErrorText_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HeaderText != nullptr)
			*HeaderText = params.HeaderText;
		if (BodyText != nullptr)
			*BodyText = params.BodyText;
		if (ErrorCodeText != nullptr)
			*ErrorCodeText = params.ErrorCodeText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGameInstance_BP.SheikGameInstance_BP_C.InitGraphicsSettings
	 * 		Flags  -> ()
	 */
	void USheikGameInstance_BP_C::InitGraphicsSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGameInstance_BP.SheikGameInstance_BP_C.InitGraphicsSettings");
		
		USheikGameInstance_BP_C_InitGraphicsSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGameInstance_BP.SheikGameInstance_BP_C.InitAccessibilitySettings
	 * 		Flags  -> ()
	 */
	void USheikGameInstance_BP_C::InitAccessibilitySettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGameInstance_BP.SheikGameInstance_BP_C.InitAccessibilitySettings");
		
		USheikGameInstance_BP_C_InitAccessibilitySettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGameInstance_BP.SheikGameInstance_BP_C.InitAllSettings
	 * 		Flags  -> ()
	 */
	void USheikGameInstance_BP_C::InitAllSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGameInstance_BP.SheikGameInstance_BP_C.InitAllSettings");
		
		USheikGameInstance_BP_C_InitAllSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGameInstance_BP.SheikGameInstance_BP_C.InitCultureSettings
	 * 		Flags  -> ()
	 */
	void USheikGameInstance_BP_C::InitCultureSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGameInstance_BP.SheikGameInstance_BP_C.InitCultureSettings");
		
		USheikGameInstance_BP_C_InitCultureSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGameInstance_BP.SheikGameInstance_BP_C.InitAudioSettings
	 * 		Flags  -> ()
	 */
	void USheikGameInstance_BP_C::InitAudioSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGameInstance_BP.SheikGameInstance_BP_C.InitAudioSettings");
		
		USheikGameInstance_BP_C_InitAudioSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGameInstance_BP.SheikGameInstance_BP_C.FadeOutFrontendLogoSFX
	 * 		Flags  -> ()
	 */
	void USheikGameInstance_BP_C::FadeOutFrontendLogoSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGameInstance_BP.SheikGameInstance_BP_C.FadeOutFrontendLogoSFX");
		
		USheikGameInstance_BP_C_FadeOutFrontendLogoSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGameInstance_BP.SheikGameInstance_BP_C.PlayFrontendLogoSFX
	 * 		Flags  -> ()
	 */
	void USheikGameInstance_BP_C::PlayFrontendLogoSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGameInstance_BP.SheikGameInstance_BP_C.PlayFrontendLogoSFX");
		
		USheikGameInstance_BP_C_PlayFrontendLogoSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGameInstance_BP.SheikGameInstance_BP_C.RemoveAllFrontendComponents
	 * 		Flags  -> ()
	 */
	void USheikGameInstance_BP_C::RemoveAllFrontendComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGameInstance_BP.SheikGameInstance_BP_C.RemoveAllFrontendComponents");
		
		USheikGameInstance_BP_C_RemoveAllFrontendComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGameInstance_BP.SheikGameInstance_BP_C.FadeOutFrontendMusic
	 * 		Flags  -> ()
	 */
	void USheikGameInstance_BP_C::FadeOutFrontendMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGameInstance_BP.SheikGameInstance_BP_C.FadeOutFrontendMusic");
		
		USheikGameInstance_BP_C_FadeOutFrontendMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGameInstance_BP.SheikGameInstance_BP_C.PlayFrontendMusic
	 * 		Flags  -> ()
	 */
	void USheikGameInstance_BP_C::PlayFrontendMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGameInstance_BP.SheikGameInstance_BP_C.PlayFrontendMusic");
		
		USheikGameInstance_BP_C_PlayFrontendMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGameInstance_BP.SheikGameInstance_BP_C.InitializeAudioSettings
	 * 		Flags  -> ()
	 */
	void USheikGameInstance_BP_C::InitializeAudioSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGameInstance_BP.SheikGameInstance_BP_C.InitializeAudioSettings");
		
		USheikGameInstance_BP_C_InitializeAudioSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGameInstance_BP.SheikGameInstance_BP_C.ReceiveInit
	 * 		Flags  -> ()
	 */
	void USheikGameInstance_BP_C::ReceiveInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGameInstance_BP.SheikGameInstance_BP_C.ReceiveInit");
		
		USheikGameInstance_BP_C_ReceiveInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGameInstance_BP.SheikGameInstance_BP_C.ExecuteUbergraph_SheikGameInstance_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USheikGameInstance_BP_C::ExecuteUbergraph_SheikGameInstance_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGameInstance_BP.SheikGameInstance_BP_C.ExecuteUbergraph_SheikGameInstance_BP");
		
		USheikGameInstance_BP_C_ExecuteUbergraph_SheikGameInstance_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USheikGameInstance_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USheikGameInstance_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SheikGameInstance_BP.SheikGameInstance_BP_C");
		return ptr;
	}

}


