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
	 * Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.ErrorPopup
	 */
	struct UWBP_Sheik_MMStatus_C_ErrorPopup_Params
	{
	public:
		struct FSheikError                                         Error;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		unsigned char                                              UnknownData_Z6J7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.PartyManager
	 */
	struct UWBP_Sheik_MMStatus_C_PartyManager_Params
	{
	public:
		class USheikPartyManager*                                  PartyManager;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.MatchmakingCallbacks
	 */
	struct UWBP_Sheik_MMStatus_C_MatchmakingCallbacks_Params
	{
	public:
		class USheikMatchmakingCallbacks*                          MatchmakingCallbacks;                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.OnInitialized
	 */
	struct UWBP_Sheik_MMStatus_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.EventHandleOnMatchmakingStarted
	 */
	struct UWBP_Sheik_MMStatus_C_EventHandleOnMatchmakingStarted_Params
	{
	public:
		class FString                                              MatchConfig;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.OnMatchmakingStatusChanged
	 */
	struct UWBP_Sheik_MMStatus_C_OnMatchmakingStatusChanged_Params
	{
	public:
		EMatchmakingStatus                                         NewStatus;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.EventHandleOnPartyMatchmakingStarted
	 */
	struct UWBP_Sheik_MMStatus_C_EventHandleOnPartyMatchmakingStarted_Params
	{
	public:
		class FString                                              ConfigurationName;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bIsLeader;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.EventHandleOnPartyMatchmakingStopped
	 */
	struct UWBP_Sheik_MMStatus_C_EventHandleOnPartyMatchmakingStopped_Params
	{
	public:
		bool                                                       bIsLeader;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.EventHandleOnPartyMatchmakingFound
	 */
	struct UWBP_Sheik_MMStatus_C_EventHandleOnPartyMatchmakingFound_Params
	{
	public:
		bool                                                       bIsLeader;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.EventHandleOnPartyMatchmakingError
	 */
	struct UWBP_Sheik_MMStatus_C_EventHandleOnPartyMatchmakingError_Params
	{
	public:
		class FText                                                ErrorText;                                               // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bIsPartyLeader;                                          // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.OnPartyPlayerLeft
	 */
	struct UWBP_Sheik_MMStatus_C_OnPartyPlayerLeft_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.PreConstruct
	 */
	struct UWBP_Sheik_MMStatus_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.OnMatchmakingComplete
	 */
	struct UWBP_Sheik_MMStatus_C_OnMatchmakingComplete_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N8C6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.OnMatchmakingCancelled
	 */
	struct UWBP_Sheik_MMStatus_C_OnMatchmakingCancelled_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SK63[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.ExecuteUbergraph_WBP_Sheik_MMStatus
	 */
	struct UWBP_Sheik_MMStatus_C_ExecuteUbergraph_WBP_Sheik_MMStatus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N3P5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
