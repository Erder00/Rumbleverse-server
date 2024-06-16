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
	 * Function WBP_Sheik_EOM_Placement.WBP_Sheik_EOM_Placement_C.SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_Placement_6
	 */
	struct UWBP_Sheik_EOM_Placement_C_SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_Placement_6_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_Placement.WBP_Sheik_EOM_Placement_C.SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_Placement_5
	 */
	struct UWBP_Sheik_EOM_Placement_C_SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_Placement_5_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_Placement.WBP_Sheik_EOM_Placement_C.SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_Placement_4
	 */
	struct UWBP_Sheik_EOM_Placement_C_SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_Placement_4_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_Placement.WBP_Sheik_EOM_Placement_C.SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_Placement_3
	 */
	struct UWBP_Sheik_EOM_Placement_C_SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_Placement_3_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_Placement.WBP_Sheik_EOM_Placement_C.SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_Placement_2
	 */
	struct UWBP_Sheik_EOM_Placement_C_SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_Placement_2_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_Placement.WBP_Sheik_EOM_Placement_C.SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_Placement_1
	 */
	struct UWBP_Sheik_EOM_Placement_C_SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_Placement_1_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_Placement.WBP_Sheik_EOM_Placement_C.LoadEOMPlayerInfoData
	 */
	struct UWBP_Sheik_EOM_Placement_C_LoadEOMPlayerInfoData_Params
	{
	public:
		class FString                                              UserName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FTitleCardLoadout                                   TitleCardLoadout;                                        // 0x0010(0x04B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_EOM_Placement.WBP_Sheik_EOM_Placement_C.ValidateLoadoutPoseAndBackgroundData
	 */
	struct UWBP_Sheik_EOM_Placement_C_ValidateLoadoutPoseAndBackgroundData_Params
	{
	public:
		struct FTitleCardLoadout                                   InLoadout;                                               // 0x0000(0x04B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       LoadoutIsValid;                                          // 0x04B0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_EOM_Placement.WBP_Sheik_EOM_Placement_C.GetCharacterDescriptionFromLoadout
	 */
	struct UWBP_Sheik_EOM_Placement_C_GetCharacterDescriptionFromLoadout_Params
	{
	public:
		struct FTitleCardLoadout                                   Loadout;                                                 // 0x0000(0x04B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FCharDesc                                           CharacterDescription;                                    // 0x04B0(0x0030)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_EOM_Placement.WBP_Sheik_EOM_Placement_C.PlayUISound
	 */
	struct UWBP_Sheik_EOM_Placement_C_PlayUISound_Params
	{
	public:
		bool                                                       bPlaySound;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EUISounds                                                  SoundType;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_Placement.WBP_Sheik_EOM_Placement_C.3-SequenceCompleted
	 */
	struct UWBP_Sheik_EOM_Placement_C__3SequenceCompleted_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_Placement.WBP_Sheik_EOM_Placement_C.2-PlayShrinkAnim
	 */
	struct UWBP_Sheik_EOM_Placement_C__2PlayShrinkAnim_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_Placement.WBP_Sheik_EOM_Placement_C.1-PlayPlacementAnims
	 */
	struct UWBP_Sheik_EOM_Placement_C__1PlayPlacementAnims_Params
	{
	public:
		bool                                                       ShowTitleCard;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_EOM_Placement.WBP_Sheik_EOM_Placement_C.LoadTitleCardData
	 */
	struct UWBP_Sheik_EOM_Placement_C_LoadTitleCardData_Params
	{
	public:
		struct FTitleCardLoadout                                   TitleCardLoadout;                                        // 0x0000(0x04B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_EOM_Placement.WBP_Sheik_EOM_Placement_C.ResetAnimSequence
	 */
	struct UWBP_Sheik_EOM_Placement_C_ResetAnimSequence_Params
	{
	public:
		bool                                                       ShowTitleCard;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_EOM_Placement.WBP_Sheik_EOM_Placement_C.UpdateRoundPlacement
	 */
	struct UWBP_Sheik_EOM_Placement_C_UpdateRoundPlacement_Params
	{
	public:
		int32_t                                                    Place;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U5LC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_EOM_Placement.WBP_Sheik_EOM_Placement_C.SetDisplayInfoAndBeginSequence
	 */
	struct UWBP_Sheik_EOM_Placement_C_SetDisplayInfoAndBeginSequence_Params
	{
	public:
		bool                                                       LocalPlayerIsWinner;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShowTitleCard;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsTagTeam;                                               // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SkipEOM;                                                 // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AXVC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASheikPlayerStateCommon*                             PlayerStateOfPlayerWhoEliminatedMe;                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_Placement.WBP_Sheik_EOM_Placement_C.DisplayPlacementAnim_ShowPlayerCard
	 */
	struct UWBP_Sheik_EOM_Placement_C_DisplayPlacementAnim_ShowPlayerCard_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_Placement.WBP_Sheik_EOM_Placement_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_EOM_Placement_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_Placement.WBP_Sheik_EOM_Placement_C.ShrinkPlacementAnim_Finished
	 */
	struct UWBP_Sheik_EOM_Placement_C_ShrinkPlacementAnim_Finished_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_Placement.WBP_Sheik_EOM_Placement_C.HandleLoadoutSoftpointersReady
	 */
	struct UWBP_Sheik_EOM_Placement_C_HandleLoadoutSoftpointersReady_Params
	{
	public:
		struct FTitleCardLoadout                                   Loadout;                                                 // 0x0000(0x04B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UWBP_Sheik_Career_TitleCard_C*                       TitleCardRef;                                            // 0x04B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_Placement.WBP_Sheik_EOM_Placement_C.HandleOnCaptureReady
	 */
	struct UWBP_Sheik_EOM_Placement_C_HandleOnCaptureReady_Params
	{
	public:
		int32_t                                                    CaptureIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_Placement.WBP_Sheik_EOM_Placement_C.DisplayPlacementAnim_FInished
	 */
	struct UWBP_Sheik_EOM_Placement_C_DisplayPlacementAnim_FInished_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_Placement.WBP_Sheik_EOM_Placement_C.HandleSoftPointerLoadFailed
	 */
	struct UWBP_Sheik_EOM_Placement_C_HandleSoftPointerLoadFailed_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_Placement.WBP_Sheik_EOM_Placement_C.ExecuteUbergraph_WBP_Sheik_EOM_Placement
	 */
	struct UWBP_Sheik_EOM_Placement_C_ExecuteUbergraph_WBP_Sheik_EOM_Placement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EOM_Placement.WBP_Sheik_EOM_Placement_C.SkipSequenceCompleted__DelegateSignature
	 */
	struct UWBP_Sheik_EOM_Placement_C_SkipSequenceCompleted__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_EOM_Placement.WBP_Sheik_EOM_Placement_C.OnPlacementSequenceCompleted__DelegateSignature
	 */
	struct UWBP_Sheik_EOM_Placement_C_OnPlacementSequenceCompleted__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
