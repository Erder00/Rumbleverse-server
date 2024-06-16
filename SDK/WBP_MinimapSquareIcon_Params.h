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
	 * Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.Construct
	 */
	struct UWBP_MinimapSquareIcon_C_Construct_Params
	{	};

	/**
	 * Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.SetTopLeft
	 */
	struct UWBP_MinimapSquareIcon_C_SetTopLeft_Params
	{
	public:
		struct FVector2D                                           Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.SetCenter
	 */
	struct UWBP_MinimapSquareIcon_C_SetCenter_Params
	{
	public:
		struct FVector2D                                           Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.SetCosineOfNegativeRotation
	 */
	struct UWBP_MinimapSquareIcon_C_SetCosineOfNegativeRotation_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.SetOpacity
	 */
	struct UWBP_MinimapSquareIcon_C_SetOpacity_Params
	{
	public:
		float                                                      NewOpacity;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.SetImage
	 */
	struct UWBP_MinimapSquareIcon_C_SetImage_Params
	{
	public:
		class UTexture2D*                                          NewTexture;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.SetSize
	 */
	struct UWBP_MinimapSquareIcon_C_SetSize_Params
	{
	public:
		struct FVector2D                                           NewSize;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.SetBottomRight
	 */
	struct UWBP_MinimapSquareIcon_C_SetBottomRight_Params
	{
	public:
		struct FVector2D                                           Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.SetSineOfNegativeRotation
	 */
	struct UWBP_MinimapSquareIcon_C_SetSineOfNegativeRotation_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.ExecuteUbergraph_WBP_MinimapSquareIcon
	 */
	struct UWBP_MinimapSquareIcon_C_ExecuteUbergraph_WBP_MinimapSquareIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
