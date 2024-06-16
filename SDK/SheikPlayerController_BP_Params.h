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
	 * Function SheikPlayerController_BP.SheikPlayerController_BP_C.PinFailFX
	 */
	struct ASheikPlayerController_BP_C_PinFailFX_Params
	{	};

	/**
	 * Function SheikPlayerController_BP.SheikPlayerController_BP_C.PinSuccessfulFX
	 */
	struct ASheikPlayerController_BP_C_PinSuccessfulFX_Params
	{	};

	/**
	 * Function SheikPlayerController_BP.SheikPlayerController_BP_C.PinIncreasePulseFX
	 */
	struct ASheikPlayerController_BP_C_PinIncreasePulseFX_Params
	{
	public:
		float                                                      PulseSpeed;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ShakeScale;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikPlayerController_BP.SheikPlayerController_BP_C.PinPostProcessRemove_Win
	 */
	struct ASheikPlayerController_BP_C_PinPostProcessRemove_Win_Params
	{	};

	/**
	 * Function SheikPlayerController_BP.SheikPlayerController_BP_C.PinPostProcessRemove_Lost
	 */
	struct ASheikPlayerController_BP_C_PinPostProcessRemove_Lost_Params
	{	};

	/**
	 * Function SheikPlayerController_BP.SheikPlayerController_BP_C.PinPostProcessUpdate
	 */
	struct ASheikPlayerController_BP_C_PinPostProcessUpdate_Params
	{	};

	/**
	 * Function SheikPlayerController_BP.SheikPlayerController_BP_C.PinStartShake
	 */
	struct ASheikPlayerController_BP_C_PinStartShake_Params
	{	};

	/**
	 * Function SheikPlayerController_BP.SheikPlayerController_BP_C.PinStartFX
	 */
	struct ASheikPlayerController_BP_C_PinStartFX_Params
	{	};

	/**
	 * Function SheikPlayerController_BP.SheikPlayerController_BP_C.PinUpdate
	 */
	struct ASheikPlayerController_BP_C_PinUpdate_Params
	{
	public:
		ESheikPinEventType                                         EventType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z0EG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASheikCharacter*                                     Attacker;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASheikCharacter*                                     Victim;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikPlayerController_BP.SheikPlayerController_BP_C.GetVFXHandler
	 */
	struct ASheikPlayerController_BP_C_GetVFXHandler_Params
	{
	public:
		class ASheikGenericVFXHandler_BP_C*                        GameVFXHandler;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikPlayerController_BP.SheikPlayerController_BP_C.SetCameraRingOutState
	 */
	struct ASheikPlayerController_BP_C_SetCameraRingOutState_Params
	{
	public:
		bool                                                       IsCurrentlyRingedOut;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KENJ[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SheikPlayerController_BP.SheikPlayerController_BP_C.GatherCameraRingOutState
	 */
	struct ASheikPlayerController_BP_C_GatherCameraRingOutState_Params
	{
	public:
		bool                                                       IsFollowingPlayer;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SheikPlayerController_BP.SheikPlayerController_BP_C.ReceiveTick
	 */
	struct ASheikPlayerController_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikPlayerController_BP.SheikPlayerController_BP_C.ForceUserToMainMenu_BP
	 */
	struct ASheikPlayerController_BP_C_ForceUserToMainMenu_BP_Params
	{	};

	/**
	 * Function SheikPlayerController_BP.SheikPlayerController_BP_C.ReceiveBeginPlay
	 */
	struct ASheikPlayerController_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SheikPlayerController_BP.SheikPlayerController_BP_C.UpdateCamRingOut
	 */
	struct ASheikPlayerController_BP_C_UpdateCamRingOut_Params
	{
	public:
		bool                                                       IsOutside;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SheikPlayerController_BP.SheikPlayerController_BP_C.OnPlayerFollowingChanged
	 */
	struct ASheikPlayerController_BP_C_OnPlayerFollowingChanged_Params
	{
	public:
		bool                                                       IsFollowingPlayer;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SheikPlayerController_BP.SheikPlayerController_BP_C.OnRoundFinished
	 */
	struct ASheikPlayerController_BP_C_OnRoundFinished_Params
	{
	public:
		TArray<class AIGPlayerState*>                              WinningPlayers;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       isLocalPlayer;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isSpectator;                                             // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SheikPlayerController_BP.SheikPlayerController_BP_C.HandleTeammateLeftServer
	 */
	struct ASheikPlayerController_BP_C_HandleTeammateLeftServer_Params
	{
	public:
		class AIGPlayerState*                                      ExitingTeammate;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikPlayerController_BP.SheikPlayerController_BP_C.ExecuteUbergraph_SheikPlayerController_BP
	 */
	struct ASheikPlayerController_BP_C_ExecuteUbergraph_SheikPlayerController_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
