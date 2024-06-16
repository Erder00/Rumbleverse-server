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
	 * Function BTT_FindCharacterNearHelpTarget.BTT_FindCharacterNearHelpTarget_C.EvaluateFoundCharacter
	 */
	struct UBTT_FindCharacterNearHelpTarget_C_EvaluateFoundCharacter_Params
	{
	public:
		class ASheikCharacter*                                     SheikCharacter;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       BestUntargeted;                                          // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       BestAlreadyTargeted;                                     // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BTT_FindCharacterNearHelpTarget.BTT_FindCharacterNearHelpTarget_C.FindCharacter
	 */
	struct UBTT_FindCharacterNearHelpTarget_C_FindCharacter_Params
	{
	public:
		TArray<class AActor*>                                      InActors;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class ASheikCharacter*                                     BestBoy;                                                 // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_FindCharacterNearHelpTarget.BTT_FindCharacterNearHelpTarget_C.QueryFinished
	 */
	struct UBTT_FindCharacterNearHelpTarget_C_QueryFinished_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   QueryInstance;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEnvQueryStatus                                            QueryStatus;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y4QP[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BTT_FindCharacterNearHelpTarget.BTT_FindCharacterNearHelpTarget_C.ReceiveExecuteAI
	 */
	struct UBTT_FindCharacterNearHelpTarget_C_ReceiveExecuteAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_FindCharacterNearHelpTarget.BTT_FindCharacterNearHelpTarget_C.ReceiveAbortAI
	 */
	struct UBTT_FindCharacterNearHelpTarget_C_ReceiveAbortAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_FindCharacterNearHelpTarget.BTT_FindCharacterNearHelpTarget_C.ExecuteUbergraph_BTT_FindCharacterNearHelpTarget
	 */
	struct UBTT_FindCharacterNearHelpTarget_C_ExecuteUbergraph_BTT_FindCharacterNearHelpTarget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
