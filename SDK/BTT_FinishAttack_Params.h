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
	 * Function BTT_FinishAttack.BTT_FinishAttack_C.HandleUnsubscribes
	 */
	struct UBTT_FinishAttack_C_HandleUnsubscribes_Params
	{	};

	/**
	 * Function BTT_FinishAttack.BTT_FinishAttack_C.ReceiveExecuteAI
	 */
	struct UBTT_FinishAttack_C_ReceiveExecuteAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_FinishAttack.BTT_FinishAttack_C.ReceiveAbortAI
	 */
	struct UBTT_FinishAttack_C_ReceiveAbortAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_FinishAttack.BTT_FinishAttack_C.MoveEnded
	 */
	struct UBTT_FinishAttack_C_MoveEnded_Params
	{
	public:
		bool                                                       Interrupted;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BTT_FinishAttack.BTT_FinishAttack_C.TimerExpired
	 */
	struct UBTT_FinishAttack_C_TimerExpired_Params
	{	};

	/**
	 * Function BTT_FinishAttack.BTT_FinishAttack_C.MovementModeChanged
	 */
	struct UBTT_FinishAttack_C_MovementModeChanged_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementMode                                              PrevMovementMode;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              PreviousCustomMode;                                      // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_FinishAttack.BTT_FinishAttack_C.ExecuteUbergraph_BTT_FinishAttack
	 */
	struct UBTT_FinishAttack_C_ExecuteUbergraph_BTT_FinishAttack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
