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
	 * Function BTT_TeleportToSpawner.BTT_TeleportToSpawner_C.ChooseLocationOffset
	 */
	struct UBTT_TeleportToSpawner_C_ChooseLocationOffset_Params
	{	};

	/**
	 * Function BTT_TeleportToSpawner.BTT_TeleportToSpawner_C.EvaluateTriggers
	 */
	struct UBTT_TeleportToSpawner_C_EvaluateTriggers_Params
	{	};

	/**
	 * Function BTT_TeleportToSpawner.BTT_TeleportToSpawner_C.ReceiveExecuteAI
	 */
	struct UBTT_TeleportToSpawner_C_ReceiveExecuteAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_TeleportToSpawner.BTT_TeleportToSpawner_C.ReceiveTickAI
	 */
	struct UBTT_TeleportToSpawner_C_ReceiveTickAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DeltaSeconds;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_TeleportToSpawner.BTT_TeleportToSpawner_C.CharacterEnteredSpawnerCircle
	 */
	struct UBTT_TeleportToSpawner_C_CharacterEnteredSpawnerCircle_Params
	{
	public:
		class ASheikCharacter*                                     Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_TeleportToSpawner.BTT_TeleportToSpawner_C.ReceiveAbortAI
	 */
	struct UBTT_TeleportToSpawner_C_ReceiveAbortAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_TeleportToSpawner.BTT_TeleportToSpawner_C.ExecuteUbergraph_BTT_TeleportToSpawner
	 */
	struct UBTT_TeleportToSpawner_C_ExecuteUbergraph_BTT_TeleportToSpawner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K2UV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
