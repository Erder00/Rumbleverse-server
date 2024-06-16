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
	 * Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.GetBasicPingingEnabled
	 */
	struct ASheikGenericVFXHandler_BP_C_GetBasicPingingEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GRNJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.SpawnHealthNumberVFX
	 */
	struct ASheikGenericVFXHandler_BP_C_SpawnHealthNumberVFX_Params
	{
	public:
		class UObject*                                             TargetHealed;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HealedAmount;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.OnPingExpired
	 */
	struct ASheikGenericVFXHandler_BP_C_OnPingExpired_Params
	{
	public:
		int32_t                                                    PartyMemberID;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RYY8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.OnPingAtLocation
	 */
	struct ASheikGenericVFXHandler_BP_C_OnPingAtLocation_Params
	{
	public:
		EIGPingType                                                PingType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WIT3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PartyMemberID;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             PingLocation;                                            // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             PingNormal;                                              // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.PostProcessSetup
	 */
	struct ASheikGenericVFXHandler_BP_C_PostProcessSetup_Params
	{	};

	/**
	 * Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.EventWon
	 */
	struct ASheikGenericVFXHandler_BP_C_EventWon_Params
	{
	public:
		TArray<class ASheikCharacter*>                             WinningCharacters;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandlePerkGainedNotifyVFXBP
	 */
	struct ASheikGenericVFXHandler_BP_C_HandlePerkGainedNotifyVFXBP_Params
	{
	public:
		struct FIGVFXPerkNotifyInfo                                EventInfo;                                               // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandlePerkActivateNotifyVFXBP
	 */
	struct ASheikGenericVFXHandler_BP_C_HandlePerkActivateNotifyVFXBP_Params
	{
	public:
		struct FIGVFXPerkNotifyInfo                                EventInfo;                                               // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandlePerkRemovedNotifyVFXBP
	 */
	struct ASheikGenericVFXHandler_BP_C_HandlePerkRemovedNotifyVFXBP_Params
	{
	public:
		struct FIGVFXPerkNotifyInfo                                EventInfo;                                               // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandlePerkDeactivateNotifyVFXBP
	 */
	struct ASheikGenericVFXHandler_BP_C_HandlePerkDeactivateNotifyVFXBP_Params
	{
	public:
		struct FIGVFXPerkNotifyInfo                                EventInfo;                                               // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandleFallEndNotifyVFXBP
	 */
	struct ASheikGenericVFXHandler_BP_C_HandleFallEndNotifyVFXBP_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FIGVFXFallEndNotifyInfo                             EventInfo;                                               // 0x0008(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.ReceiveBeginPlay
	 */
	struct ASheikGenericVFXHandler_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandleFallTierNotifyVFXBP
	 */
	struct ASheikGenericVFXHandler_BP_C_HandleFallTierNotifyVFXBP_Params
	{
	public:
		struct FIGVFXFallTierNotifyInfo                            EventInfo;                                               // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandleRemoteCharacterDisplaySecondsChangeVFXBP
	 */
	struct ASheikGenericVFXHandler_BP_C_HandleRemoteCharacterDisplaySecondsChangeVFXBP_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DKKF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AIGCharacter*                                        Target;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.OnEventVictoryRewarded
	 */
	struct ASheikGenericVFXHandler_BP_C_OnEventVictoryRewarded_Params
	{
	public:
		class FString                                              WinnerName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              RewardText;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bLocalPlayerParticipated;                                // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLocalPlayerWon;                                         // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G90C[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class ASheikCharacter*>                             WinningCharacters;                                       // 0x0028(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandleVictimStatusNotificationBP
	 */
	struct ASheikGenericVFXHandler_BP_C_HandleVictimStatusNotificationBP_Params
	{
	public:
		class AActor*                                              Attacker;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Victim;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EQueuedAttackVictimStatus                                  Status;                                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandleHealingNotifyVFXBP
	 */
	struct ASheikGenericVFXHandler_BP_C_HandleHealingNotifyVFXBP_Params
	{
	public:
		class AActor*                                              TargetHealed;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HealedAmount;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandleResetAllFallVFXBP
	 */
	struct ASheikGenericVFXHandler_BP_C_HandleResetAllFallVFXBP_Params
	{
	public:
		class AActor*                                              Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.ExecuteUbergraph_SheikGenericVFXHandler_BP
	 */
	struct ASheikGenericVFXHandler_BP_C_ExecuteUbergraph_SheikGenericVFXHandler_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GVP9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
