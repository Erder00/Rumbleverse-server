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
	 * Function WBP_MinimapIcon.WBP_MinimapIcon_C.HidePingVisuals
	 */
	struct UWBP_MinimapIcon_C_HidePingVisuals_Params
	{	};

	/**
	 * Function WBP_MinimapIcon.WBP_MinimapIcon_C.SetPingColor
	 */
	struct UWBP_MinimapIcon_C_SetPingColor_Params
	{	};

	/**
	 * Function WBP_MinimapIcon.WBP_MinimapIcon_C.SetOpacity
	 */
	struct UWBP_MinimapIcon_C_SetOpacity_Params
	{
	public:
		float                                                      NewOpacity;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MinimapIcon.WBP_MinimapIcon_C.SetMaskDimensions
	 */
	struct UWBP_MinimapIcon_C_SetMaskDimensions_Params
	{
	public:
		float                                                      Left;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Top;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Width;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Height;                                                  // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MinimapIcon.WBP_MinimapIcon_C.SetImage
	 */
	struct UWBP_MinimapIcon_C_SetImage_Params
	{
	public:
		class UTexture2D*                                          NewTexture;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MinimapIcon.WBP_MinimapIcon_C.SetSize
	 */
	struct UWBP_MinimapIcon_C_SetSize_Params
	{
	public:
		struct FVector2D                                           NewSize;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MinimapIcon.WBP_MinimapIcon_C.SetTint
	 */
	struct UWBP_MinimapIcon_C_SetTint_Params
	{
	public:
		struct FLinearColor                                        NewTint;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MinimapIcon.WBP_MinimapIcon_C.UpdateTeammateHPAlert
	 */
	struct UWBP_MinimapIcon_C_UpdateTeammateHPAlert_Params
	{
	public:
		bool                                                       bIsTeammateLowHealth;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_MinimapIcon.WBP_MinimapIcon_C.SetAngle
	 */
	struct UWBP_MinimapIcon_C_SetAngle_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MinimapIcon.WBP_MinimapIcon_C.UpdateTeammateInCombatAlert
	 */
	struct UWBP_MinimapIcon_C_UpdateTeammateInCombatAlert_Params
	{
	public:
		bool                                                       bIsTeammateInCombat;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_MinimapIcon.WBP_MinimapIcon_C.UpdateTeammateRescueAlert
	 */
	struct UWBP_MinimapIcon_C_UpdateTeammateRescueAlert_Params
	{
	public:
		bool                                                       bIsTeammateDowned;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_MinimapIcon.WBP_MinimapIcon_C.UpdateTeammateHeightThreshold
	 */
	struct UWBP_MinimapIcon_C_UpdateTeammateHeightThreshold_Params
	{
	public:
		ESheikWaypointVerticalDirection                            TeammateVerticalDirection;                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MinimapIcon.WBP_MinimapIcon_C.Construct
	 */
	struct UWBP_MinimapIcon_C_Construct_Params
	{	};

	/**
	 * Function WBP_MinimapIcon.WBP_MinimapIcon_C.OnTeammateLanded
	 */
	struct UWBP_MinimapIcon_C_OnTeammateLanded_Params
	{	};

	/**
	 * Function WBP_MinimapIcon.WBP_MinimapIcon_C.PlayPingAnimation
	 */
	struct UWBP_MinimapIcon_C_PlayPingAnimation_Params
	{
	public:
		bool                                                       bIsOutOfBounds;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_MinimapIcon.WBP_MinimapIcon_C.ExecuteUbergraph_WBP_MinimapIcon
	 */
	struct UWBP_MinimapIcon_C_ExecuteUbergraph_WBP_MinimapIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
