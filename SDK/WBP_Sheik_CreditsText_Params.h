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
	 * Function WBP_Sheik_CreditsText.WBP_Sheik_CreditsText_C.SetTextPadding
	 */
	struct UWBP_Sheik_CreditsText_C_SetTextPadding_Params
	{
	public:
		float                                                      InTop;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InBottom;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_CreditsText.WBP_Sheik_CreditsText_C.SetHorizontalAlignment
	 */
	struct UWBP_Sheik_CreditsText_C_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InAlign;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MSJY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_CreditsText.WBP_Sheik_CreditsText_C.ApplyDisplayStyle
	 */
	struct UWBP_Sheik_CreditsText_C_ApplyDisplayStyle_Params
	{
	public:
		struct FSlateFontInfo                                      InStyle;                                                 // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		struct FLinearColor                                        InColor;                                                 // 0x0058(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_CreditsText.WBP_Sheik_CreditsText_C.SetDisplayString
	 */
	struct UWBP_Sheik_CreditsText_C_SetDisplayString_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_CreditsText.WBP_Sheik_CreditsText_C.SetDisplayText
	 */
	struct UWBP_Sheik_CreditsText_C_SetDisplayText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
