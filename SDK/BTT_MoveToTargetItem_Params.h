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
	 * Function BTT_MoveToTargetItem.BTT_MoveToTargetItem_C.CheckIfTrapped
	 */
	struct UBTT_MoveToTargetItem_C_CheckIfTrapped_Params
	{
	public:
		bool                                                       Trapped;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BTT_MoveToTargetItem.BTT_MoveToTargetItem_C.WithinAcceptanceRadiusOfItem
	 */
	struct UBTT_MoveToTargetItem_C_WithinAcceptanceRadiusOfItem_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5IHE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BTT_MoveToTargetItem.BTT_MoveToTargetItem_C.UnbindDelegatesFromTargetItem
	 */
	struct UBTT_MoveToTargetItem_C_UnbindDelegatesFromTargetItem_Params
	{	};

	/**
	 * Function BTT_MoveToTargetItem.BTT_MoveToTargetItem_C.ReceiveExecuteAI
	 */
	struct UBTT_MoveToTargetItem_C_ReceiveExecuteAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_MoveToTargetItem.BTT_MoveToTargetItem_C.ReceiveTickAI
	 */
	struct UBTT_MoveToTargetItem_C_ReceiveTickAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DeltaSeconds;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_MoveToTargetItem.BTT_MoveToTargetItem_C.OnTargetInteractableStartInteract
	 */
	struct UBTT_MoveToTargetItem_C_OnTargetInteractableStartInteract_Params
	{	};

	/**
	 * Function BTT_MoveToTargetItem.BTT_MoveToTargetItem_C.ReceiveAbortAI
	 */
	struct UBTT_MoveToTargetItem_C_ReceiveAbortAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_MoveToTargetItem.BTT_MoveToTargetItem_C.ExecuteUbergraph_BTT_MoveToTargetItem
	 */
	struct UBTT_MoveToTargetItem_C_ExecuteUbergraph_BTT_MoveToTargetItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
