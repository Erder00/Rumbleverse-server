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
	 * Function BTT_PerformCombo.BTT_PerformCombo_C.ShouldContinueCombo
	 */
	struct UBTT_PerformCombo_C_ShouldContinueCombo_Params
	{
	public:
		bool                                                       Continue;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_759Z[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BTT_PerformCombo.BTT_PerformCombo_C.ReceiveExecuteAI
	 */
	struct UBTT_PerformCombo_C_ReceiveExecuteAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_PerformCombo.BTT_PerformCombo_C.PressButton
	 */
	struct UBTT_PerformCombo_C_PressButton_Params
	{	};

	/**
	 * Function BTT_PerformCombo.BTT_PerformCombo_C.ButtonPressCompleted
	 */
	struct UBTT_PerformCombo_C_ButtonPressCompleted_Params
	{	};

	/**
	 * Function BTT_PerformCombo.BTT_PerformCombo_C.ReceiveTickAI
	 */
	struct UBTT_PerformCombo_C_ReceiveTickAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DeltaSeconds;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_PerformCombo.BTT_PerformCombo_C.ExecuteUbergraph_BTT_PerformCombo
	 */
	struct UBTT_PerformCombo_C_ExecuteUbergraph_BTT_PerformCombo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
