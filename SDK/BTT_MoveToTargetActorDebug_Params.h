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
	 * Function BTT_MoveToTargetActorDebug.BTT_MoveToTargetActorDebug_C.WithinAcceptanceRadius
	 */
	struct UBTT_MoveToTargetActorDebug_C_WithinAcceptanceRadius_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q2U3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BTT_MoveToTargetActorDebug.BTT_MoveToTargetActorDebug_C.UpdateDestination
	 */
	struct UBTT_MoveToTargetActorDebug_C_UpdateDestination_Params
	{
	public:
		bool                                                       Updated;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8VHI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BTT_MoveToTargetActorDebug.BTT_MoveToTargetActorDebug_C.StartMove
	 */
	struct UBTT_MoveToTargetActorDebug_C_StartMove_Params
	{	};

	/**
	 * Function BTT_MoveToTargetActorDebug.BTT_MoveToTargetActorDebug_C.ReceiveExecuteAI
	 */
	struct UBTT_MoveToTargetActorDebug_C_ReceiveExecuteAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_MoveToTargetActorDebug.BTT_MoveToTargetActorDebug_C.ReceiveTickAI
	 */
	struct UBTT_MoveToTargetActorDebug_C_ReceiveTickAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DeltaSeconds;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_MoveToTargetActorDebug.BTT_MoveToTargetActorDebug_C.ExecuteUbergraph_BTT_MoveToTargetActorDebug
	 */
	struct UBTT_MoveToTargetActorDebug_C_ExecuteUbergraph_BTT_MoveToTargetActorDebug_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
