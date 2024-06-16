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
	 * Function BTT_WaitWhileTargetWallSplatted.BTT_WaitWhileTargetWallSplatted_C.ReceiveExecuteAI
	 */
	struct UBTT_WaitWhileTargetWallSplatted_C_ReceiveExecuteAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_WaitWhileTargetWallSplatted.BTT_WaitWhileTargetWallSplatted_C.TimerFinished
	 */
	struct UBTT_WaitWhileTargetWallSplatted_C_TimerFinished_Params
	{	};

	/**
	 * Function BTT_WaitWhileTargetWallSplatted.BTT_WaitWhileTargetWallSplatted_C.ReceiveAbortAI
	 */
	struct UBTT_WaitWhileTargetWallSplatted_C_ReceiveAbortAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_WaitWhileTargetWallSplatted.BTT_WaitWhileTargetWallSplatted_C.ExecuteUbergraph_BTT_WaitWhileTargetWallSplatted
	 */
	struct UBTT_WaitWhileTargetWallSplatted_C_ExecuteUbergraph_BTT_WaitWhileTargetWallSplatted_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
