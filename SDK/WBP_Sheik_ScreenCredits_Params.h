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
	 * Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.HandleImageLoadFail
	 */
	struct UWBP_Sheik_ScreenCredits_C_HandleImageLoadFail_Params
	{
	public:
		TArray<class FString>                                      FailedAssetPaths;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.HandleImageListLoadSuccess
	 */
	struct UWBP_Sheik_ScreenCredits_C_HandleImageListLoadSuccess_Params
	{
	public:
		TArray<class UObject*>                                     LoadedCreditsImage;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.HandleImageLoadSuccess
	 */
	struct UWBP_Sheik_ScreenCredits_C_HandleImageLoadSuccess_Params
	{
	public:
		class UObject*                                             LoadedImage;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.CreditsImageLoadComplete
	 */
	struct UWBP_Sheik_ScreenCredits_C_CreditsImageLoadComplete_Params
	{
	public:
		class UObject*                                             InTexture;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.MakeCreditsImageEntry
	 */
	struct UWBP_Sheik_ScreenCredits_C_MakeCreditsImageEntry_Params
	{
	public:
		unsigned char                                              UnknownData_SPGS[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		EHorizontalAlignment                                       InAlign;                                                 // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HZM8[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InTopPadding;                                            // 0x002C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InBottomPadding;                                         // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InScale;                                                 // 0x0034(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.PopulateCrawl
	 */
	struct UWBP_Sheik_ScreenCredits_C_PopulateCrawl_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.MakeCreditsTextEntry
	 */
	struct UWBP_Sheik_ScreenCredits_C_MakeCreditsTextEntry_Params
	{
	public:
		class FString                                              InText;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       InIsHeader;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIsSubHeader;                                           // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIsName;                                                // 0x0012(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EHorizontalAlignment                                       InAlign;                                                 // 0x0013(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InTopPadding;                                            // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InBottomPadding;                                         // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        InColor;                                                 // 0x001C(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4IZB[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.OnGainFocus
	 */
	struct UWBP_Sheik_ScreenCredits_C_OnGainFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.BackEvent
	 */
	struct UWBP_Sheik_ScreenCredits_C_BackEvent_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.Tick
	 */
	struct UWBP_Sheik_ScreenCredits_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_ScreenCredits_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.LoadImages
	 */
	struct UWBP_Sheik_ScreenCredits_C_LoadImages_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.LoadFirstImage
	 */
	struct UWBP_Sheik_ScreenCredits_C_LoadFirstImage_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.ExecuteUbergraph_WBP_Sheik_ScreenCredits
	 */
	struct UWBP_Sheik_ScreenCredits_C_ExecuteUbergraph_WBP_Sheik_ScreenCredits_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.OnCreditsClosed__DelegateSignature
	 */
	struct UWBP_Sheik_ScreenCredits_C_OnCreditsClosed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
