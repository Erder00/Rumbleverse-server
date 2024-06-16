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
	 * Function PlaygroundMode_BotSpawner.PlaygroundMode_BotSpawner_C.GetOverlappingPlayer
	 */
	struct APlaygroundMode_BotSpawner_C_GetOverlappingPlayer_Params
	{
	public:
		bool                                                       PlayerFound;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZPMH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASheikCharacter*                                     Player;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlaygroundMode_BotSpawner.PlaygroundMode_BotSpawner_C.UserConstructionScript
	 */
	struct APlaygroundMode_BotSpawner_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PlaygroundMode_BotSpawner.PlaygroundMode_BotSpawner_C.ReceiveActorBeginOverlap
	 */
	struct APlaygroundMode_BotSpawner_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlaygroundMode_BotSpawner.PlaygroundMode_BotSpawner_C.ReceiveActorEndOverlap
	 */
	struct APlaygroundMode_BotSpawner_C_ReceiveActorEndOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlaygroundMode_BotSpawner.PlaygroundMode_BotSpawner_C.ReceiveBeginPlay
	 */
	struct APlaygroundMode_BotSpawner_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PlaygroundMode_BotSpawner.PlaygroundMode_BotSpawner_C.ExecuteUbergraph_PlaygroundMode_BotSpawner
	 */
	struct APlaygroundMode_BotSpawner_C_ExecuteUbergraph_PlaygroundMode_BotSpawner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlaygroundMode_BotSpawner.PlaygroundMode_BotSpawner_C.BotExitedCircle__DelegateSignature
	 */
	struct APlaygroundMode_BotSpawner_C_BotExitedCircle__DelegateSignature_Params
	{
	public:
		class ASheikCharacter*                                     Bot;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlaygroundMode_BotSpawner.PlaygroundMode_BotSpawner_C.CharacterEnteredCircle__DelegateSignature
	 */
	struct APlaygroundMode_BotSpawner_C_CharacterEnteredCircle__DelegateSignature_Params
	{
	public:
		class ASheikCharacter*                                     Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
