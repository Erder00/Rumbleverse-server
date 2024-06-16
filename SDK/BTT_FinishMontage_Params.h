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
	 * Function BTT_FinishMontage.BTT_FinishMontage_C.HandleUnsubscribes
	 */
	struct UBTT_FinishMontage_C_HandleUnsubscribes_Params
	{	};

	/**
	 * Function BTT_FinishMontage.BTT_FinishMontage_C.ReceiveExecuteAI
	 */
	struct UBTT_FinishMontage_C_ReceiveExecuteAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_FinishMontage.BTT_FinishMontage_C.ReceiveAbortAI
	 */
	struct UBTT_FinishMontage_C_ReceiveAbortAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_FinishMontage.BTT_FinishMontage_C.MoveEnded
	 */
	struct UBTT_FinishMontage_C_MoveEnded_Params
	{
	public:
		bool                                                       Interrupted;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BTT_FinishMontage.BTT_FinishMontage_C.TimerExpired
	 */
	struct UBTT_FinishMontage_C_TimerExpired_Params
	{	};

	/**
	 * Function BTT_FinishMontage.BTT_FinishMontage_C.ExecuteUbergraph_BTT_FinishMontage
	 */
	struct UBTT_FinishMontage_C_ExecuteUbergraph_BTT_FinishMontage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_19MF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
