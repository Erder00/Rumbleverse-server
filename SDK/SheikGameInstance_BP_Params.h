#pragma once

/**
 * Name: Rumbleverse
 * Version: Latest
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function SheikGameInstance_BP.SheikGameInstance_BP_C.GetErrorText
	 */
	struct USheikGameInstance_BP_C_GetErrorText_Params
	{
	public:
		struct FSheikError                                         Error;                                                   // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		unsigned char                                              UnknownData_72UF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                HeaderText;                                              // 0x0010(0x0018)  (Parm, OutParm)
		class FText                                                BodyText;                                                // 0x0028(0x0018)  (Parm, OutParm)
		class FText                                                ErrorCodeText;                                           // 0x0040(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function SheikGameInstance_BP.SheikGameInstance_BP_C.InitGraphicsSettings
	 */
	struct USheikGameInstance_BP_C_InitGraphicsSettings_Params
	{	};

	/**
	 * Function SheikGameInstance_BP.SheikGameInstance_BP_C.InitAccessibilitySettings
	 */
	struct USheikGameInstance_BP_C_InitAccessibilitySettings_Params
	{	};

	/**
	 * Function SheikGameInstance_BP.SheikGameInstance_BP_C.InitAllSettings
	 */
	struct USheikGameInstance_BP_C_InitAllSettings_Params
	{	};

	/**
	 * Function SheikGameInstance_BP.SheikGameInstance_BP_C.InitCultureSettings
	 */
	struct USheikGameInstance_BP_C_InitCultureSettings_Params
	{	};

	/**
	 * Function SheikGameInstance_BP.SheikGameInstance_BP_C.InitAudioSettings
	 */
	struct USheikGameInstance_BP_C_InitAudioSettings_Params
	{	};

	/**
	 * Function SheikGameInstance_BP.SheikGameInstance_BP_C.FadeOutFrontendLogoSFX
	 */
	struct USheikGameInstance_BP_C_FadeOutFrontendLogoSFX_Params
	{	};

	/**
	 * Function SheikGameInstance_BP.SheikGameInstance_BP_C.PlayFrontendLogoSFX
	 */
	struct USheikGameInstance_BP_C_PlayFrontendLogoSFX_Params
	{	};

	/**
	 * Function SheikGameInstance_BP.SheikGameInstance_BP_C.RemoveAllFrontendComponents
	 */
	struct USheikGameInstance_BP_C_RemoveAllFrontendComponents_Params
	{	};

	/**
	 * Function SheikGameInstance_BP.SheikGameInstance_BP_C.FadeOutFrontendMusic
	 */
	struct USheikGameInstance_BP_C_FadeOutFrontendMusic_Params
	{	};

	/**
	 * Function SheikGameInstance_BP.SheikGameInstance_BP_C.PlayFrontendMusic
	 */
	struct USheikGameInstance_BP_C_PlayFrontendMusic_Params
	{	};

	/**
	 * Function SheikGameInstance_BP.SheikGameInstance_BP_C.InitializeAudioSettings
	 */
	struct USheikGameInstance_BP_C_InitializeAudioSettings_Params
	{	};

	/**
	 * Function SheikGameInstance_BP.SheikGameInstance_BP_C.ReceiveInit
	 */
	struct USheikGameInstance_BP_C_ReceiveInit_Params
	{	};

	/**
	 * Function SheikGameInstance_BP.SheikGameInstance_BP_C.ExecuteUbergraph_SheikGameInstance_BP
	 */
	struct USheikGameInstance_BP_C_ExecuteUbergraph_SheikGameInstance_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
