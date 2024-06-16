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
	 * Function WBP_Sheik_TeammateLocationPrompt.WBP_Sheik_TeammateLocationPrompt_C.OnTeammateHPAlert_cb
	 */
	struct UWBP_Sheik_TeammateLocationPrompt_C_OnTeammateHPAlert_cb_Params
	{
	public:
		class AIGPlayerState*                                      InTeammateState;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsTeammateLowHealth;                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RAGQ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_TeammateLocationPrompt.WBP_Sheik_TeammateLocationPrompt_C.OnTeammateLeftServer_cb
	 */
	struct UWBP_Sheik_TeammateLocationPrompt_C_OnTeammateLeftServer_cb_Params
	{
	public:
		class AIGPlayerState*                                      ExitingTeammate;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_TeammateLocationPrompt.WBP_Sheik_TeammateLocationPrompt_C.UpdateDownedTimer
	 */
	struct UWBP_Sheik_TeammateLocationPrompt_C_UpdateDownedTimer_Params
	{
	public:
		ESheikPinEventType                                         EventType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IKD2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASheikCharacter*                                     Attacker;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASheikCharacter*                                     Victim;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_TeammateLocationPrompt.WBP_Sheik_TeammateLocationPrompt_C.ShowDownedTimer
	 */
	struct UWBP_Sheik_TeammateLocationPrompt_C_ShowDownedTimer_Params
	{
	public:
		struct FIGKnockOutData                                     KnockOutData;                                            // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_TeammateLocationPrompt.WBP_Sheik_TeammateLocationPrompt_C.SetUpForNewTeammate
	 */
	struct UWBP_Sheik_TeammateLocationPrompt_C_SetUpForNewTeammate_Params
	{
	public:
		class ASheikPlayerStateCommon*                             NewTeammateState;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_TeammateLocationPrompt.WBP_Sheik_TeammateLocationPrompt_C.OnTeammateDied_cb
	 */
	struct UWBP_Sheik_TeammateLocationPrompt_C_OnTeammateDied_cb_Params
	{
	public:
		class AIGPlayerState*                                      TeammatePlayerState;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_TeammateLocationPrompt.WBP_Sheik_TeammateLocationPrompt_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_TeammateLocationPrompt_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_TeammateLocationPrompt.WBP_Sheik_TeammateLocationPrompt_C.ExecuteUbergraph_WBP_Sheik_TeammateLocationPrompt
	 */
	struct UWBP_Sheik_TeammateLocationPrompt_C_ExecuteUbergraph_WBP_Sheik_TeammateLocationPrompt_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
