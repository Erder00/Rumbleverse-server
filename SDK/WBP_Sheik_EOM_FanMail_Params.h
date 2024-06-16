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
	 * Function WBP_Sheik_EOM_FanMail.WBP_Sheik_EOM_FanMail_C.SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_FanMail_1
	 */
	struct UWBP_Sheik_EOM_FanMail_C_SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_FanMail_1_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_FanMail.WBP_Sheik_EOM_FanMail_C.ResetAnimSequence
	 */
	struct UWBP_Sheik_EOM_FanMail_C_ResetAnimSequence_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_FanMail.WBP_Sheik_EOM_FanMail_C.Display Fan Mail 
	 */
	struct UWBP_Sheik_EOM_FanMail_C_DisplayFanMail_Params
	{
	public:
		class FText                                                NewFanMailValue;                                         // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       EOMSkip;                                                 // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XVXM[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_EOM_FanMail.WBP_Sheik_EOM_FanMail_C.PlayUISound
	 */
	struct UWBP_Sheik_EOM_FanMail_C_PlayUISound_Params
	{
	public:
		bool                                                       bPlaySound;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EUISounds                                                  SoundType;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_FanMail.WBP_Sheik_EOM_FanMail_C.DisplayFanMailAnim_Finished
	 */
	struct UWBP_Sheik_EOM_FanMail_C_DisplayFanMailAnim_Finished_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_FanMail.WBP_Sheik_EOM_FanMail_C.ExecuteUbergraph_WBP_Sheik_EOM_FanMail
	 */
	struct UWBP_Sheik_EOM_FanMail_C_ExecuteUbergraph_WBP_Sheik_EOM_FanMail_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_FanMail.WBP_Sheik_EOM_FanMail_C.FanMailAnimComplete__DelegateSignature
	 */
	struct UWBP_Sheik_EOM_FanMail_C_FanMailAnimComplete__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
