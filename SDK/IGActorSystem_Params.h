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
	 * Function IGActorSystem.IGNotifyStateBase.UpdateMontageName
	 */
	struct UIGNotifyStateBase_UpdateMontageName_Params
	{
	public:
		class UAnimMontage*                                        InInstance;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGNotifyStateBase.IsRunningOnOriginalMontage
	 */
	struct UIGNotifyStateBase_IsRunningOnOriginalMontage_Params
	{
	public:
		class UAnimMontage*                                        InInstance;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGAccessory.ResolveTextCultureInvariance
	 */
	struct UIGAccessory_ResolveTextCultureInvariance_Params
	{
	public:
		struct FIGContentReleaseVersion                            CurrentVersion;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGAccessory.IsTextCultureInvarianceDirty
	 */
	struct UIGAccessory_IsTextCultureInvarianceDirty_Params
	{
	public:
		struct FIGContentReleaseVersion                            CurrentVersion;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGActorModValueManager.ServerDebugSetModifiedFloatBaseValue
	 */
	struct UIGActorModValueManager_ServerDebugSetModifiedFloatBaseValue_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      BaseValue;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGActorModValueManager.ServerDebugRemoveStackFloat
	 */
	struct UIGActorModValueManager_ServerDebugRemoveStackFloat_Params
	{
	public:
		int32_t                                                    TargetStat;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EIGModType                                                 ModType;                                                 // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_48XV[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ModValue;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGActorModValueManager.ServerDebugClearAllStackFloats
	 */
	struct UIGActorModValueManager_ServerDebugClearAllStackFloats_Params
	{	};

	/**
	 * Function IGActorSystem.IGActorModValueManager.ServerDebugAddStackFloatTimed
	 */
	struct UIGActorModValueManager_ServerDebugAddStackFloatTimed_Params
	{
	public:
		int32_t                                                    TargetStat;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EIGModType                                                 ModType;                                                 // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2FWN[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ModValue;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Time;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGActorModValueManager.ServerDebugAddStackFloat
	 */
	struct UIGActorModValueManager_ServerDebugAddStackFloat_Params
	{
	public:
		int32_t                                                    TargetStat;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EIGModType                                                 ModType;                                                 // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OUZU[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ModValue;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGActorModValueManager.OnRep_ModifiedCharacterStats
	 */
	struct UIGActorModValueManager_OnRep_ModifiedCharacterStats_Params
	{	};

	/**
	 * Function IGActorSystem.IGActivatedPerkData.Deactivate
	 */
	struct UIGActivatedPerkData_Deactivate_Params
	{
	public:
		class UIGActorPerkManager*                                 Owner;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPerkActivationType                                        Type;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2PLI[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CurrentStackLevel;                                       // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UIGActorPerkManager*                                 OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OverrideTriggerCondition;                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGActivatedPerkData.Activate
	 */
	struct UIGActivatedPerkData_Activate_Params
	{
	public:
		class UIGActorPerkManager*                                 Owner;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPerkActivationType                                        Type;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OC4X[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CurrentStackLevel;                                       // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UIGActorPerkManager*                                 OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OverrideTriggerCondition;                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGActorPerkManager.ServerAddPerk
	 */
	struct UIGActorPerkManager_ServerAddPerk_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGActorPerkManager.OnRep_CharacterPerks
	 */
	struct UIGActorPerkManager_OnRep_CharacterPerks_Params
	{	};

	/**
	 * Function IGActorSystem.IGActorSystemHUD.IsShowMoveInformationEnbabled
	 */
	struct AIGActorSystemHUD_IsShowMoveInformationEnbabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGActorSystemHUD.IsShowMoveIndicatorsEnabled
	 */
	struct AIGActorSystemHUD_IsShowMoveIndicatorsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGActorSystemHUD.IsHitboxesEnabled
	 */
	struct AIGActorSystemHUD_IsHitboxesEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGActorSystemLibrary.Not_InheritsFrom
	 */
	struct UIGActorSystemLibrary_Not_InheritsFrom_Params
	{
	public:
		class UObject*                                             A;                                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              B;                                                       // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGActorSystemLibrary.Not_HasAllExactTags
	 */
	struct UIGActorSystemLibrary_Not_HasAllExactTags_Params
	{
	public:
		struct FGameplayTagContainer                               A;                                                       // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               B;                                                       // 0x0020(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGAIController.OnTeamInfoUpdated
	 */
	struct AIGAIController_OnTeamInfoUpdated_Params
	{	};

	/**
	 * Function IGActorSystem.IGAIController.OnFreeFallEnabled
	 */
	struct AIGAIController_OnFreeFallEnabled_Params
	{	};

	/**
	 * Function IGActorSystem.IGAIController.BPOnWakeupWindowStarted
	 */
	struct AIGAIController_BPOnWakeupWindowStarted_Params
	{	};

	/**
	 * Function IGActorSystem.IGAIController.BPOnTransitionWindowStarted
	 */
	struct AIGAIController_BPOnTransitionWindowStarted_Params
	{
	public:
		class UIGMovesetData*                                      TransitionData;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGAudioHandlerActor.HandleVictimStatusNotificationBP
	 */
	struct AIGAudioHandlerActor_HandleVictimStatusNotificationBP_Params
	{
	public:
		class AActor*                                              Attacker;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Victim;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EQueuedAttackVictimStatus                                  Status;                                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGAudioHandlerActor.HandleResetAllFallSFXBP
	 */
	struct AIGAudioHandlerActor_HandleResetAllFallSFXBP_Params
	{
	public:
		class AActor*                                              Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGAudioHandlerActor.HandleRemoteCharacterDisplaySecondsChangeAudioBP
	 */
	struct AIGAudioHandlerActor_HandleRemoteCharacterDisplaySecondsChangeAudioBP_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EDHG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AIGCharacter*                                        Target;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGAudioHandlerActor.HandlePerkRemovedNotifyAudioBP
	 */
	struct AIGAudioHandlerActor_HandlePerkRemovedNotifyAudioBP_Params
	{
	public:
		struct FIGAudioPerkNotifyInfo                              EventInfo;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGAudioHandlerActor.HandlePerkGainedNotifyAudioBP
	 */
	struct AIGAudioHandlerActor_HandlePerkGainedNotifyAudioBP_Params
	{
	public:
		struct FIGAudioPerkNotifyInfo                              EventInfo;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGAudioHandlerActor.HandlePerkDeactivateNotifyAudioBP
	 */
	struct AIGAudioHandlerActor_HandlePerkDeactivateNotifyAudioBP_Params
	{
	public:
		struct FIGAudioPerkNotifyInfo                              EventInfo;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGAudioHandlerActor.HandlePerkActivateNotifyAudioBP
	 */
	struct AIGAudioHandlerActor_HandlePerkActivateNotifyAudioBP_Params
	{
	public:
		struct FIGAudioPerkNotifyInfo                              EventInfo;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGAudioHandlerActor.HandleHitBlockNotificationBP
	 */
	struct AIGAudioHandlerActor_HandleHitBlockNotificationBP_Params
	{
	public:
		struct FIGAudioHitBlockEventInfo                           EventInfo;                                               // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGAudioHandlerActor.HandleHitAnnouncementNotificationBP
	 */
	struct AIGAudioHandlerActor_HandleHitAnnouncementNotificationBP_Params
	{
	public:
		struct FIGAudioHitBlockEventInfo                           EventInfo;                                               // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGAudioHandlerActor.HandleFallTierNotifyAudioBP
	 */
	struct AIGAudioHandlerActor_HandleFallTierNotifyAudioBP_Params
	{
	public:
		struct FIGAudioFallTierNotifyInfo                          EventInfo;                                               // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGAudioHandlerActor.HandleFallEndNotifyAudioBP
	 */
	struct AIGAudioHandlerActor_HandleFallEndNotifyAudioBP_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIGAudioFallEndNotifyInfo                           EventInfo;                                               // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGAudioHandlerActor.HandleAnimNotifyVoiceBP
	 */
	struct AIGAudioHandlerActor_HandleAnimNotifyVoiceBP_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIGVoiceAnimNotifyEventInfo                         EventInfo;                                               // 0x0008(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGAudioHandlerActor.HandleAnimNotifyStateEndAudioBP
	 */
	struct AIGAudioHandlerActor_HandleAnimNotifyStateEndAudioBP_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIGAudioAnimNotifyEventInfo                         EventInfo;                                               // 0x0008(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGAudioHandlerActor.HandleAnimNotifyStateBeginAudioBP
	 */
	struct AIGAudioHandlerActor_HandleAnimNotifyStateBeginAudioBP_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIGAudioAnimNotifyEventInfo                         EventInfo;                                               // 0x0008(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGAudioHandlerActor.HandleAnimNotifyAudioBP
	 */
	struct AIGAudioHandlerActor_HandleAnimNotifyAudioBP_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIGAudioAnimNotifyEventInfo                         EventInfo;                                               // 0x0008(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGAudioHandlerActor.GetGenericAudioHandler
	 */
	struct AIGAudioHandlerActor_GetGenericAudioHandler_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AIGAudioHandlerActor*                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.WindedStateUpdated
	 */
	struct AIGCharacter_WindedStateUpdated_Params
	{
	public:
		bool                                                       bIsWinded;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseZeroStamina;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.TryInteract
	 */
	struct AIGCharacter_TryInteract_Params
	{
	public:
		class UObject*                                             Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.TryGetCurrentMagazineMoveInfo
	 */
	struct AIGCharacter_TryGetCurrentMagazineMoveInfo_Params
	{
	public:
		class UIGMoveMontage*                                      OutMoveMontage;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMoveTier                                                  OutMoveTier;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.StopSprintRPC
	 */
	struct AIGCharacter_StopSprintRPC_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.StopServerMoveTracking
	 */
	struct AIGCharacter_StopServerMoveTracking_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.StopScriptedMode
	 */
	struct AIGCharacter_StopScriptedMode_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.StartSprintRPC
	 */
	struct AIGCharacter_StartSprintRPC_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.StartServerMoveTracking
	 */
	struct AIGCharacter_StartServerMoveTracking_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.SetSpecialTwo
	 */
	struct AIGCharacter_SetSpecialTwo_Params
	{
	public:
		class FString                                              InName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InTier;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.SetSpecialOne
	 */
	struct AIGCharacter_SetSpecialOne_Params
	{
	public:
		class FString                                              InName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InTier;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.SetShouldShowDamageDebug
	 */
	struct AIGCharacter_SetShouldShowDamageDebug_Params
	{
	public:
		bool                                                       IsInCombatMode;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.SetScriptedWaypointMode
	 */
	struct AIGCharacter_SetScriptedWaypointMode_Params
	{
	public:
		class FString                                              TargetTag;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.SetScriptedFollowMode
	 */
	struct AIGCharacter_SetScriptedFollowMode_Params
	{
	public:
		class AIGCharacter*                                        FollowCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.SetModifiedStatBaseValue
	 */
	struct AIGCharacter_SetModifiedStatBaseValue_Params
	{
	public:
		EIGModValueType                                            ValueType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CRHM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      BaseValue;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.SetIsInCombatMode
	 */
	struct AIGCharacter_SetIsInCombatMode_Params
	{
	public:
		bool                                                       IsInCombatMode;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.SetInfiniteStaminaOnAuthority
	 */
	struct AIGCharacter_SetInfiniteStaminaOnAuthority_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.SetInfiniteStamina
	 */
	struct AIGCharacter_SetInfiniteStamina_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.SetInfiniteHealthOnAuthority
	 */
	struct AIGCharacter_SetInfiniteHealthOnAuthority_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.SetInfiniteHealth
	 */
	struct AIGCharacter_SetInfiniteHealth_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.SetDebugMoveTier
	 */
	struct AIGCharacter_SetDebugMoveTier_Params
	{
	public:
		int32_t                                                    Tier;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.ServerStopSpeedingUpDownedTime
	 */
	struct AIGCharacter_ServerStopSpeedingUpDownedTime_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.ServerStopServerMoveTracking
	 */
	struct AIGCharacter_ServerStopServerMoveTracking_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.ServerStartSpeedingUpDownedTime
	 */
	struct AIGCharacter_ServerStartSpeedingUpDownedTime_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.ServerStartServerMoveTracking
	 */
	struct AIGCharacter_ServerStartServerMoveTracking_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.ServerSetMoveTier
	 */
	struct AIGCharacter_ServerSetMoveTier_Params
	{
	public:
		int32_t                                                    Tier;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.ServerSetMoveExecutionParams
	 */
	struct AIGCharacter_ServerSetMoveExecutionParams_Params
	{
	public:
		struct FServerMoveExecutionParamsMsg                       ServerMoveExecutionParamsMsg;                            // 0x0000(0x0188)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.ServerSetInfiniteStamina
	 */
	struct AIGCharacter_ServerSetInfiniteStamina_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.ServerSetInfiniteHealth
	 */
	struct AIGCharacter_ServerSetInfiniteHealth_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.ServerMoveWithParams
	 */
	struct AIGCharacter_ServerMoveWithParams_Params
	{
	public:
		float                                                      Timestamp;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize10                               InAccel;                                                 // 0x0004(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize100                              ClientLoc;                                               // 0x0010(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              CompressedMoveFlags;                                     // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ClientRoll;                                              // 0x001D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_M3OO[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		uint32_t                                                   View;                                                    // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HWR2[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 ClientMovementBase;                                      // 0x0028(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ClientBaseBoneName;                                      // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ClientMovementMode;                                      // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IIXI[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FServerMoveValidationParams                         ClientParams;                                            // 0x0040(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.ServerMoveNoBaseWithParams
	 */
	struct AIGCharacter_ServerMoveNoBaseWithParams_Params
	{
	public:
		float                                                      Timestamp;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize10                               InAccel;                                                 // 0x0004(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize100                              ClientLoc;                                               // 0x0010(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              CompressedMoveFlags;                                     // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ClientRoll;                                              // 0x001D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YZUO[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		uint32_t                                                   View;                                                    // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ClientMovementMode;                                      // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6WKH[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FServerMoveValidationParams                         ClientParams;                                            // 0x0028(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.ServerMoveDualWithParams
	 */
	struct AIGCharacter_ServerMoveDualWithParams_Params
	{
	public:
		float                                                      TimeStamp0;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize10                               InAccel0;                                                // 0x0004(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              PendingFlags;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CYO3[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		uint32_t                                                   View0;                                                   // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timestamp;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize10                               InAccel;                                                 // 0x001C(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize100                              ClientLoc;                                               // 0x0028(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              NewFlags;                                                // 0x0034(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ClientRoll;                                              // 0x0035(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_P6QA[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		uint32_t                                                   View;                                                    // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NP6U[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 ClientMovementBase;                                      // 0x0040(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ClientBaseBoneName;                                      // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ClientMovementMode;                                      // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WYK1[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FServerMoveValidationParams                         ClientParams;                                            // 0x0058(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.ServerMoveDualNoBaseWithParams
	 */
	struct AIGCharacter_ServerMoveDualNoBaseWithParams_Params
	{
	public:
		float                                                      TimeStamp0;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize10                               InAccel0;                                                // 0x0004(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              PendingFlags;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T7HN[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		uint32_t                                                   View0;                                                   // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timestamp;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize10                               InAccel;                                                 // 0x001C(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize100                              ClientLoc;                                               // 0x0028(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              NewFlags;                                                // 0x0034(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ClientRoll;                                              // 0x0035(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QBB1[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		uint32_t                                                   View;                                                    // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ClientMovementMode;                                      // 0x003C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QNUW[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FServerMoveValidationParams                         ClientParams;                                            // 0x0040(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.ServerMoveDualHybridRootMotionWithParams
	 */
	struct AIGCharacter_ServerMoveDualHybridRootMotionWithParams_Params
	{
	public:
		float                                                      TimeStamp0;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize10                               InAccel0;                                                // 0x0004(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              PendingFlags;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BRM7[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		uint32_t                                                   View0;                                                   // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timestamp;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize10                               InAccel;                                                 // 0x001C(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize100                              ClientLoc;                                               // 0x0028(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              NewFlags;                                                // 0x0034(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ClientRoll;                                              // 0x0035(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QS16[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		uint32_t                                                   View;                                                    // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4I4G[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 ClientMovementBase;                                      // 0x0040(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ClientBaseBoneName;                                      // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ClientMovementMode;                                      // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LA4K[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FServerMoveValidationParams                         ClientParams;                                            // 0x0058(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.ServerDumpServerMoveTracking
	 */
	struct AIGCharacter_ServerDumpServerMoveTracking_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.ServerDebugClearStackFloatsAllPlayers
	 */
	struct AIGCharacter_ServerDebugClearStackFloatsAllPlayers_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.ServerApplyLoadout
	 */
	struct AIGCharacter_ServerApplyLoadout_Params
	{
	public:
		class FName                                                LoadoutName;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.Respawn
	 */
	struct AIGCharacter_Respawn_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.ResetMoveTier
	 */
	struct AIGCharacter_ResetMoveTier_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.ResetCharacterTransition
	 */
	struct AIGCharacter_ResetCharacterTransition_Params
	{
	public:
		class UIGGenericInputEvent*                                InEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AdditionalDurationMS;                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.PostNetReceiveRole
	 */
	struct AIGCharacter_PostNetReceiveRole_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.PocketSwap
	 */
	struct AIGCharacter_PocketSwap_Params
	{
	public:
		class UObject*                                             Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.PlaySoundForOwnership
	 */
	struct AIGCharacter_PlaySoundForOwnership_Params
	{
	public:
		class USoundBase*                                          Sound;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      VolumeMultiplier;                                        // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PitchMultiplier;                                         // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTime;                                               // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YNEX[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundAttenuation*                                   AttenuationSettings;                                     // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundConcurrency*                                   ConcurrencySettings;                                     // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OwningActor;                                             // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.OverrideStaminaRegenValues
	 */
	struct AIGCharacter_OverrideStaminaRegenValues_Params
	{
	public:
		float                                                      InStaminaRegenRate;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InStaminaRegenCooldown;                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.OverrideMinStamina
	 */
	struct AIGCharacter_OverrideMinStamina_Params
	{
	public:
		bool                                                       bShouldOverride;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HLAF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      NewMinStamina;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.OrientToSurface
	 */
	struct AIGCharacter_OrientToSurface_Params
	{
	public:
		struct FVector                                             surfaceNormal;                                           // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction IGActorSystem.IGCharacter.OnWinded__DelegateSignature
	 */
	struct AIGCharacter_OnWinded__DelegateSignature_Params
	{
	public:
		float                                                      StaminaPercentage;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction IGActorSystem.IGCharacter.OnSwingingMovementExited__DelegateSignature
	 */
	struct AIGCharacter_OnSwingingMovementExited__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction IGActorSystem.IGCharacter.OnSwingingMovementEntered__DelegateSignature
	 */
	struct AIGCharacter_OnSwingingMovementEntered__DelegateSignature_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.OnRep_WantsToBlock
	 */
	struct AIGCharacter_OnRep_WantsToBlock_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.OnRep_Stamina
	 */
	struct AIGCharacter_OnRep_Stamina_Params
	{
	public:
		float                                                      OldStamina;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.OnRep_ReplicatedTargetingInfo
	 */
	struct AIGCharacter_OnRep_ReplicatedTargetingInfo_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.OnRep_ReplicatedMoveMontage
	 */
	struct AIGCharacter_OnRep_ReplicatedMoveMontage_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.OnRep_ReplicatedFame
	 */
	struct AIGCharacter_OnRep_ReplicatedFame_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.OnRep_MapZoneId
	 */
	struct AIGCharacter_OnRep_MapZoneId_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.OnRep_IsSuperstarModeActive
	 */
	struct AIGCharacter_OnRep_IsSuperstarModeActive_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.OnRep_IsInCombatMode
	 */
	struct AIGCharacter_OnRep_IsInCombatMode_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.OnRep_IsDBNO
	 */
	struct AIGCharacter_OnRep_IsDBNO_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.OnRep_IGMovementInfo
	 */
	struct AIGCharacter_OnRep_IGMovementInfo_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.OnRep_Health
	 */
	struct AIGCharacter_OnRep_Health_Params
	{
	public:
		float                                                      OldHealth;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.OnRep_DownedTimeLeftChanged
	 */
	struct AIGCharacter_OnRep_DownedTimeLeftChanged_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.OnRep_DownedCountChanged
	 */
	struct AIGCharacter_OnRep_DownedCountChanged_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.OnRep_CurrentPerkXP
	 */
	struct AIGCharacter_OnRep_CurrentPerkXP_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.OnRep_CurrentPerkLevel
	 */
	struct AIGCharacter_OnRep_CurrentPerkLevel_Params
	{	};

	/**
	 * DelegateFunction IGActorSystem.IGCharacter.OnPerkXPChanged__DelegateSignature
	 */
	struct AIGCharacter_OnPerkXPChanged__DelegateSignature_Params
	{
	public:
		float                                                      PerkXP;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction IGActorSystem.IGCharacter.OnPerkLevelChanged__DelegateSignature
	 */
	struct AIGCharacter_OnPerkLevelChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    PerkLevel;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction IGActorSystem.IGCharacter.OnNoLongerWinded__DelegateSignature
	 */
	struct AIGCharacter_OnNoLongerWinded__DelegateSignature_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.OnMontageEnded
	 */
	struct AIGCharacter_OnMontageEnded_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.OnHitReact
	 */
	struct AIGCharacter_OnHitReact_Params
	{
	public:
		class UIGHitData*                                          ReactMove;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIGInstanceHitData                                  InstanceHitData;                                         // 0x0008(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.OnGrabComplete
	 */
	struct AIGCharacter_OnGrabComplete_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction IGActorSystem.IGCharacter.OnFreeFallMovementStart__DelegateSignature
	 */
	struct AIGCharacter_OnFreeFallMovementStart__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction IGActorSystem.IGCharacter.OnFreeFallMovementEnd__DelegateSignature
	 */
	struct AIGCharacter_OnFreeFallMovementEnd__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction IGActorSystem.IGCharacter.OnFinisherModeChanged__DelegateSignature
	 */
	struct AIGCharacter_OnFinisherModeChanged__DelegateSignature_Params
	{
	public:
		bool                                                       FinisherModeActive;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction IGActorSystem.IGCharacter.OnFameEvent__DelegateSignature
	 */
	struct AIGCharacter_OnFameEvent__DelegateSignature_Params
	{
	public:
		float                                                      FameAmount;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FameMax;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FamePercentage;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFameSource                                                FameSource;                                              // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction IGActorSystem.IGCharacter.OnExitedSupertarMode__DelegateSignature
	 */
	struct AIGCharacter_OnExitedSupertarMode__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction IGActorSystem.IGCharacter.OnEnteredSuperstarMode__DelegateSignature
	 */
	struct AIGCharacter_OnEnteredSuperstarMode__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction IGActorSystem.IGCharacter.OnCombatModeStateChanged__DelegateSignature
	 */
	struct AIGCharacter_OnCombatModeStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsInCombatMode;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction IGActorSystem.IGCharacter.OnCharacterSelfDamaged__DelegateSignature
	 */
	struct AIGCharacter_OnCharacterSelfDamaged__DelegateSignature_Params
	{
	public:
		struct FIGInstanceHitData                                  HitData;                                                 // 0x0000(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction IGActorSystem.IGCharacter.OnCharacterRecovered__DelegateSignature
	 */
	struct AIGCharacter_OnCharacterRecovered__DelegateSignature_Params
	{
	public:
		class AIGCharacter*                                        RevivedCharacter;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction IGActorSystem.IGCharacter.OnCharacterExitedDBNO__DelegateSignature
	 */
	struct AIGCharacter_OnCharacterExitedDBNO__DelegateSignature_Params
	{
	public:
		class AIGCharacter*                                        Victim;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction IGActorSystem.IGCharacter.OnCharacterEnteredDBNO__DelegateSignature
	 */
	struct AIGCharacter_OnCharacterEnteredDBNO__DelegateSignature_Params
	{
	public:
		class AIGCharacter*                                        Victim;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction IGActorSystem.IGCharacter.OnCharacterDowned__DelegateSignature
	 */
	struct AIGCharacter_OnCharacterDowned__DelegateSignature_Params
	{
	public:
		class AIGCharacter*                                        Victim;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction IGActorSystem.IGCharacter.OnCharacterDied__DelegateSignature
	 */
	struct AIGCharacter_OnCharacterDied__DelegateSignature_Params
	{
	public:
		ECauseOfDeath                                              Cause;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction IGActorSystem.IGCharacter.OnCharacterDangerZoneStatusChanged__DelegateSignature
	 */
	struct AIGCharacter_OnCharacterDangerZoneStatusChanged__DelegateSignature_Params
	{
	public:
		bool                                                       DangerZoneStatus;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction IGActorSystem.IGCharacter.OnCharacterDamaged__DelegateSignature
	 */
	struct AIGCharacter_OnCharacterDamaged__DelegateSignature_Params
	{
	public:
		struct FIGInstanceHitData                                  HitData;                                                 // 0x0000(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction IGActorSystem.IGCharacter.OnCharacterBounced__DelegateSignature
	 */
	struct AIGCharacter_OnCharacterBounced__DelegateSignature_Params
	{
	public:
		float                                                      BounceIntensity;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction IGActorSystem.IGCharacter.OnCannonShotMovementStart__DelegateSignature
	 */
	struct AIGCharacter_OnCannonShotMovementStart__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction IGActorSystem.IGCharacter.OnCannonShotMovementEnd__DelegateSignature
	 */
	struct AIGCharacter_OnCannonShotMovementEnd__DelegateSignature_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.OnAutoPocketComplete
	 */
	struct AIGCharacter_OnAutoPocketComplete_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction IGActorSystem.IGCharacter.OnAttackHit__DelegateSignature
	 */
	struct AIGCharacter_OnAttackHit__DelegateSignature_Params
	{
	public:
		bool                                                       bClashed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCrushed;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStaminaBreak;                                           // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUnblockable;                                            // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      BaseDamage;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FinalDamage;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EIGClashPriorityTier                                       AttackerPriority;                                        // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EIGClashPriorityTier                                       VictimPriority;                                          // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.OnAttackConnect
	 */
	struct AIGCharacter_OnAttackConnect_Params
	{
	public:
		struct FQueuedAttack                                       InQueuedAttack;                                          // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction IGActorSystem.IGCharacter.OnAimingArcUpdated__DelegateSignature
	 */
	struct AIGCharacter_OnAimingArcUpdated__DelegateSignature_Params
	{
	public:
		struct FVector                                             StartPoint;                                              // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             EndPoint;                                                // 0x000C(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             StartTangent;                                            // 0x0018(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             EndTangent;                                              // 0x0024(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ImpactNormal;                                            // 0x0030(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.MulticastPerkRemoved
	 */
	struct AIGCharacter_MulticastPerkRemoved_Params
	{
	public:
		class UIGPerkData*                                         Data;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.MulticastPerkDeactivated
	 */
	struct AIGCharacter_MulticastPerkDeactivated_Params
	{
	public:
		class UIGPerkData*                                         Data;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.MulticastPerkAdded
	 */
	struct AIGCharacter_MulticastPerkAdded_Params
	{
	public:
		class UIGPerkData*                                         Data;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.MulticastPerkActivated
	 */
	struct AIGCharacter_MulticastPerkActivated_Params
	{
	public:
		class UIGPerkData*                                         Data;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumStacks;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.MulticastHealingVFX
	 */
	struct AIGCharacter_MulticastHealingVFX_Params
	{
	public:
		float                                                      HealingAmount;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.MulticastDeathMessage
	 */
	struct AIGCharacter_MulticastDeathMessage_Params
	{
	public:
		class AActor*                                              Attacker;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.MulticastDangerZoneEvent
	 */
	struct AIGCharacter_MulticastDangerZoneEvent_Params
	{
	public:
		bool                                                       bNewStatus;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.ModifyHealth
	 */
	struct AIGCharacter_ModifyHealth_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.IsWinded
	 */
	struct AIGCharacter_IsWinded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.IsTeamLeader
	 */
	struct AIGCharacter_IsTeamLeader_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.IsSwinging
	 */
	struct AIGCharacter_IsSwinging_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.IsStaminaBoosted
	 */
	struct AIGCharacter_IsStaminaBoosted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.IsSafeZone
	 */
	struct AIGCharacter_IsSafeZone_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.IsPlayingTagTeamMatch
	 */
	struct AIGCharacter_IsPlayingTagTeamMatch_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.IsPlayerATeammate
	 */
	struct AIGCharacter_IsPlayerATeammate_Params
	{
	public:
		class AIGCharacter*                                        PlayerCharacter;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.IsPerformingPin
	 */
	struct AIGCharacter_IsPerformingPin_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.IsMeditating
	 */
	struct AIGCharacter_IsMeditating_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.IsLocalPlayerATeammate
	 */
	struct AIGCharacter_IsLocalPlayerATeammate_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.IsInSpecialIdleMontage
	 */
	struct AIGCharacter_IsInSpecialIdleMontage_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.IsInHealthDangerZone
	 */
	struct AIGCharacter_IsInHealthDangerZone_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.IsInCombatMode
	 */
	struct AIGCharacter_IsInCombatMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.IsFalling
	 */
	struct AIGCharacter_IsFalling_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.IsClimbing
	 */
	struct AIGCharacter_IsClimbing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.IsCharacterLocalOrSpectated
	 */
	struct AIGCharacter_IsCharacterLocalOrSpectated_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.IsCharacterDead
	 */
	struct AIGCharacter_IsCharacterDead_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.IsCharacterDBNO
	 */
	struct AIGCharacter_IsCharacterDBNO_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.IsBlockingStateVulnerableToOnTheGroundAttacks
	 */
	struct AIGCharacter_IsBlockingStateVulnerableToOnTheGroundAttacks_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.IsBlocking
	 */
	struct AIGCharacter_IsBlocking_Params
	{
	public:
		class AIGInteractableBase*                                 Weapon;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.IsBeingPinned
	 */
	struct AIGCharacter_IsBeingPinned_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.IsAttachedToSurface
	 */
	struct AIGCharacter_IsAttachedToSurface_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.IsAiming
	 */
	struct AIGCharacter_IsAiming_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.IsAIControlled
	 */
	struct AIGCharacter_IsAIControlled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.InvalidateLastClimbSurfaceCheck
	 */
	struct AIGCharacter_InvalidateLastClimbSurfaceCheck_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.HasTarget
	 */
	struct AIGCharacter_HasTarget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.HasInteractableObject
	 */
	struct AIGCharacter_HasInteractableObject_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.HasContextInteractable
	 */
	struct AIGCharacter_HasContextInteractable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.HandleOnThrownItemTargetingPlayer
	 */
	struct AIGCharacter_HandleOnThrownItemTargetingPlayer_Params
	{
	public:
		class AIGInteractablePickup*                               ThrownItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.HandleOnThrownItemNoLongerTargetingPlayer
	 */
	struct AIGCharacter_HandleOnThrownItemNoLongerTargetingPlayer_Params
	{
	public:
		class AIGInteractablePickup*                               ThrownItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.HandleOnMoveMontageStarted
	 */
	struct AIGCharacter_HandleOnMoveMontageStarted_Params
	{
	public:
		class UAnimMontage*                                        MoveMontag;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AIGCharacter*                                        Character;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.HandleOnMoveMontageEnded
	 */
	struct AIGCharacter_HandleOnMoveMontageEnded_Params
	{
	public:
		class UAnimMontage*                                        MoveMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.HandleOnKnockoutOccurred
	 */
	struct AIGCharacter_HandleOnKnockoutOccurred_Params
	{
	public:
		struct FIGKnockOutData                                     KnockOutData;                                            // 0x0000(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetVFXComponent
	 */
	struct AIGCharacter_GetVFXComponent_Params
	{
	public:
		class UIGCharacterVFXComponent*                            ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetTeammates
	 */
	struct AIGCharacter_GetTeammates_Params
	{
	public:
		TArray<class AIGPlayerState*>                              Teammates;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bFilterSelf;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetTeamLeader
	 */
	struct AIGCharacter_GetTeamLeader_Params
	{
	public:
		class AIGCharacter*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetSpecialTwoTier
	 */
	struct AIGCharacter_GetSpecialTwoTier_Params
	{
	public:
		EMoveTier                                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetSpecialTwoName
	 */
	struct AIGCharacter_GetSpecialTwoName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetSpecialOneTier
	 */
	struct AIGCharacter_GetSpecialOneTier_Params
	{
	public:
		EMoveTier                                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetSpecialOneName
	 */
	struct AIGCharacter_GetSpecialOneName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetSheikModMaxValue
	 */
	struct AIGCharacter_GetSheikModMaxValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetSheikModCombinedMaxValue
	 */
	struct AIGCharacter_GetSheikModCombinedMaxValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetSFXComponent
	 */
	struct AIGCharacter_GetSFXComponent_Params
	{
	public:
		class UIGCharacterSFXComponent*                            ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetScriptedComponent
	 */
	struct AIGCharacter_GetScriptedComponent_Params
	{
	public:
		class UIGScriptedActorComponent*                           ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetModifiedStatValue
	 */
	struct AIGCharacter_GetModifiedStatValue_Params
	{
	public:
		EIGModValueType                                            ValueType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZDOF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetModifiedMaxStamina
	 */
	struct AIGCharacter_GetModifiedMaxStamina_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetModifiedMaxHealth
	 */
	struct AIGCharacter_GetModifiedMaxHealth_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetModifiedMaxFame
	 */
	struct AIGCharacter_GetModifiedMaxFame_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetModifiedLookUpRate
	 */
	struct AIGCharacter_GetModifiedLookUpRate_Params
	{
	public:
		float                                                      InRate;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetLastSurfaceMaterial
	 */
	struct AIGCharacter_GetLastSurfaceMaterial_Params
	{
	public:
		class FName                                                FromBoneName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFallbackToRestingSurface;                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VDKN[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPhysicalMaterial*                                   ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetLastFallingVelocity
	 */
	struct AIGCharacter_GetLastFallingVelocity_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetLastContextInteractable
	 */
	struct AIGCharacter_GetLastContextInteractable_Params
	{
	public:
		class UObject*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetKnockdownsRemaining
	 */
	struct AIGCharacter_GetKnockdownsRemaining_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetItemDisplayInfo
	 */
	struct AIGCharacter_GetItemDisplayInfo_Params
	{
	public:
		EIGInventorySlot                                           Slot;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_U0GK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FIGItemDisplayInfo                                  ReturnValue;                                             // 0x0008(0x0078)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetIGCharaterMovementComponent
	 */
	struct AIGCharacter_GetIGCharaterMovementComponent_Params
	{
	public:
		class UIGCharacterMovementComponent*                       ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetHeldWeaponType
	 */
	struct AIGCharacter_GetHeldWeaponType_Params
	{
	public:
		EIGWeaponType                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetHeldWeapon
	 */
	struct AIGCharacter_GetHeldWeapon_Params
	{
	public:
		class AIGWeaponBase*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetHeldItem
	 */
	struct AIGCharacter_GetHeldItem_Params
	{
	public:
		class AIGInteractablePickup*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetCurrentTarget
	 */
	struct AIGCharacter_GetCurrentTarget_Params
	{
	public:
		class UObject*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetCurrentStamiaPercentage
	 */
	struct AIGCharacter_GetCurrentStamiaPercentage_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetCurrentMoveTier
	 */
	struct AIGCharacter_GetCurrentMoveTier_Params
	{
	public:
		EMoveTier                                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetCurrentMoveMontage
	 */
	struct AIGCharacter_GetCurrentMoveMontage_Params
	{
	public:
		class UIGMoveMontage*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetCurrentMaxPerkXP
	 */
	struct AIGCharacter_GetCurrentMaxPerkXP_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetCurrentJumpType
	 */
	struct AIGCharacter_GetCurrentJumpType_Params
	{
	public:
		EIGJumpType                                                ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetCurrentHealthPercentage
	 */
	struct AIGCharacter_GetCurrentHealthPercentage_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetCurrentFamePercentage
	 */
	struct AIGCharacter_GetCurrentFamePercentage_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetCurrentDangerZoneThreshold
	 */
	struct AIGCharacter_GetCurrentDangerZoneThreshold_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetContextInteractableItemDisplayInfo
	 */
	struct AIGCharacter_GetContextInteractableItemDisplayInfo_Params
	{
	public:
		struct FIGItemDisplayInfo                                  ReturnValue;                                             // 0x0000(0x0078)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetContextInteractable
	 */
	struct AIGCharacter_GetContextInteractable_Params
	{
	public:
		class UObject*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetContextAvailableInteractableActor
	 */
	struct AIGCharacter_GetContextAvailableInteractableActor_Params
	{
	public:
		class UObject*                                             OutInteractableActor;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetCombinedStatsValue
	 */
	struct AIGCharacter_GetCombinedStatsValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetCachedClimbableSurfaceCheck
	 */
	struct AIGCharacter_GetCachedClimbableSurfaceCheck_Params
	{
	public:
		struct FHitResult                                          ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetBaseTargetingDirection
	 */
	struct AIGCharacter_GetBaseTargetingDirection_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.GetBaseMoveTier
	 */
	struct AIGCharacter_GetBaseMoveTier_Params
	{
	public:
		EMoveTier                                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.ForceTaunt
	 */
	struct AIGCharacter_ForceTaunt_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.ForceReleaseAll
	 */
	struct AIGCharacter_ForceReleaseAll_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.ForceMove
	 */
	struct AIGCharacter_ForceMove_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.ForceLook
	 */
	struct AIGCharacter_ForceLook_Params
	{
	public:
		struct FRotator                                            Rotate;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.ForceInteract
	 */
	struct AIGCharacter_ForceInteract_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.ForceGrab
	 */
	struct AIGCharacter_ForceGrab_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.ForceDashRelease
	 */
	struct AIGCharacter_ForceDashRelease_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.ForceDash
	 */
	struct AIGCharacter_ForceDash_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.ForceBlockRelease
	 */
	struct AIGCharacter_ForceBlockRelease_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.ForceBlockPress
	 */
	struct AIGCharacter_ForceBlockPress_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.ForceAttack
	 */
	struct AIGCharacter_ForceAttack_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.ExecuteMove
	 */
	struct AIGCharacter_ExecuteMove_Params
	{
	public:
		class UIGMoveMontage*                                      InMove;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGuidType                                                  SyncType;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMoveTier                                                  ExecutionTier;                                           // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMoveTrack                                                 ExecutionMoveTrack;                                      // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WS7W[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      StaminaCostOverride;                                     // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.ExecTestFinisherModeEvent
	 */
	struct AIGCharacter_ExecTestFinisherModeEvent_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.ExecRemoveStackFloat
	 */
	struct AIGCharacter_ExecRemoveStackFloat_Params
	{
	public:
		EIGModValueType                                            TargetStat;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EIGModType                                                 ModType;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZK17[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ModValue;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.ExecClearStackFloatsAllPlayers
	 */
	struct AIGCharacter_ExecClearStackFloatsAllPlayers_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.ExecClearStackFloats
	 */
	struct AIGCharacter_ExecClearStackFloats_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.ExecApplyLoadout
	 */
	struct AIGCharacter_ExecApplyLoadout_Params
	{
	public:
		class FName                                                LoadoutName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.ExecAddStackFloatTimed
	 */
	struct AIGCharacter_ExecAddStackFloatTimed_Params
	{
	public:
		EIGModValueType                                            TargetStat;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EIGModType                                                 ModType;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XVAX[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ModValue;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timer;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.ExecAddStackFloat
	 */
	struct AIGCharacter_ExecAddStackFloat_Params
	{
	public:
		EIGModValueType                                            TargetStat;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EIGModType                                                 ModType;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8EPY[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ModValue;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.EndForcedFall
	 */
	struct AIGCharacter_EndForcedFall_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.DumpServerMoveTracking
	 */
	struct AIGCharacter_DumpServerMoveTracking_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.DropSwap
	 */
	struct AIGCharacter_DropSwap_Params
	{
	public:
		class UObject*                                             Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.DropPickup
	 */
	struct AIGCharacter_DropPickup_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInstant;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EIGCauseOfPickupDrop                                       CauseOfDrop;                                             // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.DoWallOrAirJump
	 */
	struct AIGCharacter_DoWallOrAirJump_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.DoStandardJump
	 */
	struct AIGCharacter_DoStandardJump_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.DoSideFlipJump
	 */
	struct AIGCharacter_DoSideFlipJump_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.DoOffWallJump
	 */
	struct AIGCharacter_DoOffWallJump_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.DoLongJump
	 */
	struct AIGCharacter_DoLongJump_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.DoJumpWithData
	 */
	struct AIGCharacter_DoJumpWithData_Params
	{
	public:
		EIGJumpType                                                InType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.DoBoostJump
	 */
	struct AIGCharacter_DoBoostJump_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.DoBlockFlipJump
	 */
	struct AIGCharacter_DoBlockFlipJump_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.DisallowSpecialMoves
	 */
	struct AIGCharacter_DisallowSpecialMoves_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.DisallowInterceptions
	 */
	struct AIGCharacter_DisallowInterceptions_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.DealDamageToSelf
	 */
	struct AIGCharacter_DealDamageToSelf_Params
	{
	public:
		class UIGHitData*                                          InHitData;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InDamageDirection;                                       // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseSelfStats;                                           // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9MUX[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      FallDistance;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFallDamageSource                                          FallDamageSource;                                        // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bKeepCurrentTier;                                        // 0x001D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.ConsumeWeaponPendingDurabilityCost
	 */
	struct AIGCharacter_ConsumeWeaponPendingDurabilityCost_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.ConsumeDamage
	 */
	struct AIGCharacter_ConsumeDamage_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.ClientSetRotation
	 */
	struct AIGCharacter_ClientSetRotation_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.ClientReset
	 */
	struct AIGCharacter_ClientReset_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.ClientDebugMessage
	 */
	struct AIGCharacter_ClientDebugMessage_Params
	{
	public:
		class FString                                              DebugString;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.ClientAdjustMoveMontage
	 */
	struct AIGCharacter_ClientAdjustMoveMontage_Params
	{
	public:
		struct FMoveMontageCorrection                              MontageCorrectionInfo;                                   // 0x0000(0x00F8)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.ClearTarget
	 */
	struct AIGCharacter_ClearTarget_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.ClearComboLimit
	 */
	struct AIGCharacter_ClearComboLimit_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.CheckForClimbableSurface
	 */
	struct AIGCharacter_CheckForClimbableSurface_Params
	{
	public:
		struct FHitResult                                          ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.CanStashHeldItem
	 */
	struct AIGCharacter_CanStashHeldItem_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.CanSpeedUpDownedTime
	 */
	struct AIGCharacter_CanSpeedUpDownedTime_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.CanPinEscape
	 */
	struct AIGCharacter_CanPinEscape_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacter.AllowSpecialMoves
	 */
	struct AIGCharacter_AllowSpecialMoves_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.AllowInterceptions
	 */
	struct AIGCharacter_AllowInterceptions_Params
	{	};

	/**
	 * DelegateFunction IGActorSystem.IGCharacter.AimingModeEvent__DelegateSignature
	 */
	struct AIGCharacter_AimingModeEvent__DelegateSignature_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacter.AddCharacterTransition
	 */
	struct AIGCharacter_AddCharacterTransition_Params
	{
	public:
		class UIGGenericInputEvent*                                InEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AdditionalDurationMS;                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterHitReactComponent.IsStunned
	 */
	struct UIGCharacterHitReactComponent_IsStunned_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterHitReactComponent.IsPushedBack
	 */
	struct UIGCharacterHitReactComponent_IsPushedBack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterHitReactComponent.GetHitStunDuration
	 */
	struct UIGCharacterHitReactComponent_GetHitStunDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterHitReactComponent.ConsumeDamage
	 */
	struct UIGCharacterHitReactComponent_ConsumeDamage_Params
	{
	public:
		float                                                      OutDamagePerkXP;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterMovementComponent.StartForcedFall
	 */
	struct UIGCharacterMovementComponent_StartForcedFall_Params
	{
	public:
		struct FVector                                             NewVelocity;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterMovementComponent.ProjectGroundMovement
	 */
	struct UIGCharacterMovementComponent_ProjectGroundMovement_Params
	{
	public:
		struct FVector                                             Delta;                                                   // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          RampHit;                                                 // 0x000C(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bHitFromLineTrace;                                       // 0x0094(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UAPY[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0098(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterMovementComponent.OnRep_ReplicatedFallLandingData
	 */
	struct UIGCharacterMovementComponent_OnRep_ReplicatedFallLandingData_Params
	{
	public:
		struct FFallData                                           OldData;                                                 // 0x0000(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterMovementComponent.OnRep_CurrentFallData
	 */
	struct UIGCharacterMovementComponent_OnRep_CurrentFallData_Params
	{
	public:
		struct FFallData                                           OldData;                                                 // 0x0000(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterMovementComponent.IsClimbSkidding
	 */
	struct UIGCharacterMovementComponent_IsClimbSkidding_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterMovementComponent.GetMinSafeSurfaceAttachDistance
	 */
	struct UIGCharacterMovementComponent_GetMinSafeSurfaceAttachDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterMovementComponent.GetLauncherDistance
	 */
	struct UIGCharacterMovementComponent_GetLauncherDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterMovementComponent.GetJumpType
	 */
	struct UIGCharacterMovementComponent_GetJumpType_Params
	{
	public:
		EIGJumpType                                                ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterMovementComponent.GetGrappleDistance
	 */
	struct UIGCharacterMovementComponent_GetGrappleDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterMovementComponent.GetFallDistance
	 */
	struct UIGCharacterMovementComponent_GetFallDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterMovementComponent.GetCurrentSwingSpeed
	 */
	struct UIGCharacterMovementComponent_GetCurrentSwingSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterMovementComponent.GetClimbMaxSpeedModifier
	 */
	struct UIGCharacterMovementComponent_GetClimbMaxSpeedModifier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterMovementComponent.GetActorHeadLocation
	 */
	struct UIGCharacterMovementComponent_GetActorHeadLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterMovementComponent.CheckForWallJumpTarget
	 */
	struct UIGCharacterMovementComponent_CheckForWallJumpTarget_Params
	{
	public:
		struct FVector                                             OutNormal;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterMovementComponent.CheckForEdge
	 */
	struct UIGCharacterMovementComponent_CheckForEdge_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacterMovementComponent.CanProcessClimbingInput
	 */
	struct UIGCharacterMovementComponent_CanProcessClimbingInput_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterMovementComponent.CanDropFromClimbing
	 */
	struct UIGCharacterMovementComponent_CanDropFromClimbing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterMovementComponent.BPGetActorFeetLocation
	 */
	struct UIGCharacterMovementComponent_BPGetActorFeetLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterSFXComponent.ProcessUnstashingAudio
	 */
	struct UIGCharacterSFXComponent_ProcessUnstashingAudio_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacterSFXComponent.ProcessStashingAudio
	 */
	struct UIGCharacterSFXComponent_ProcessStashingAudio_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacterSFXComponent.OnBrokenByViciousAttack
	 */
	struct UIGCharacterSFXComponent_OnBrokenByViciousAttack_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacterSFXComponent.IGCharacterSpawnSoundAttached
	 */
	struct UIGCharacterSFXComponent_IGCharacterSpawnSoundAttached_Params
	{
	public:
		class USoundBase*                                          Sound;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     AttachToComponent;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttachPointName;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0024(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		EAttachLocation                                            LocationType;                                            // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStopWhenAttachedToDestroyed;                            // 0x0031(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_O1PU[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      VolumeMultiplier;                                        // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PitchMultiplier;                                         // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTime;                                               // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundAttenuation*                                   AttenuationSettings;                                     // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundConcurrency*                                   ConcurrencySettings;                                     // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAutoDestroy;                                            // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DAYZ[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAudioComponent*                                     ReturnValue;                                             // 0x0058(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterSFXComponent.IGCharacterSpawnSoundAtLocation
	 */
	struct UIGCharacterSFXComponent_IGCharacterSpawnSoundAtLocation_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundBase*                                          Sound;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		float                                                      VolumeMultiplier;                                        // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PitchMultiplier;                                         // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTime;                                               // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BC8H[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundAttenuation*                                   AttenuationSettings;                                     // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundConcurrency*                                   ConcurrencySettings;                                     // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAutoDestroy;                                            // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2NIA[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAudioComponent*                                     ReturnValue;                                             // 0x0050(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterSFXComponent.IGCharacterSpawnSound2D
	 */
	struct UIGCharacterSFXComponent_IGCharacterSpawnSound2D_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundBase*                                          Sound;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      VolumeMultiplier;                                        // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PitchMultiplier;                                         // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T6GE[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundConcurrency*                                   ConcurrencySettings;                                     // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPersistAcrossLevelTransition;                           // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAutoDestroy;                                            // 0x0029(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SCOP[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAudioComponent*                                     ReturnValue;                                             // 0x0030(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterSFXComponent.IGCharacterPlaySoundAtLocation
	 */
	struct UIGCharacterSFXComponent_IGCharacterPlaySoundAtLocation_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundBase*                                          Sound;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		float                                                      VolumeMultiplier;                                        // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PitchMultiplier;                                         // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTime;                                               // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_44LB[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundAttenuation*                                   AttenuationSettings;                                     // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundConcurrency*                                   ConcurrencySettings;                                     // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OwningActor;                                             // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterSFXComponent.IGCharacterPlaySound2D
	 */
	struct UIGCharacterSFXComponent_IGCharacterPlaySound2D_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundBase*                                          Sound;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      VolumeMultiplier;                                        // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PitchMultiplier;                                         // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VP5A[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundConcurrency*                                   ConcurrencySettings;                                     // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OwningActor;                                             // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsUISound;                                              // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterSFXComponent.HandleUnpocketSFXBP
	 */
	struct UIGCharacterSFXComponent_HandleUnpocketSFXBP_Params
	{
	public:
		class AActor*                                              Attacker;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Victim;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       DroppedAnItem;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterSFXComponent.HandleStashUnstashAudioBP
	 */
	struct UIGCharacterSFXComponent_HandleStashUnstashAudioBP_Params
	{
	public:
		bool                                                       IsStashing;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsLargeItem;                                             // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterSFXComponent.HandleClashAudioBP
	 */
	struct UIGCharacterSFXComponent_HandleClashAudioBP_Params
	{
	public:
		class AActor*                                              Attacker;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Victim;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterSFXComponent.HandleCharacterReset
	 */
	struct UIGCharacterSFXComponent_HandleCharacterReset_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacterSFXComponent.HandleCannonLaunchEnd
	 */
	struct UIGCharacterSFXComponent_HandleCannonLaunchEnd_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacterSFXComponent.HandleAnimNotifyStateEndAudioBP
	 */
	struct UIGCharacterSFXComponent_HandleAnimNotifyStateEndAudioBP_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIGCharacterAudioAnimNotifyEventInfo                EventInfo;                                               // 0x0008(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterSFXComponent.HandleAnimNotifyStateBeginAudioBP
	 */
	struct UIGCharacterSFXComponent_HandleAnimNotifyStateBeginAudioBP_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIGCharacterAudioAnimNotifyEventInfo                EventInfo;                                               // 0x0008(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterSFXComponent.HandleAnimNotifyAudioBP
	 */
	struct UIGCharacterSFXComponent_HandleAnimNotifyAudioBP_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIGCharacterAudioAnimNotifyEventInfo                EventInfo;                                               // 0x0008(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterSFXComponent.CheckCharacterForPerk
	 */
	struct UIGCharacterSFXComponent_CheckCharacterForPerk_Params
	{
	public:
		class UIGPerkData*                                         Perk;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterVFXComponent.ProcessUnstashingVFX
	 */
	struct UIGCharacterVFXComponent_ProcessUnstashingVFX_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacterVFXComponent.ProcessStashingVFX
	 */
	struct UIGCharacterVFXComponent_ProcessStashingVFX_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacterVFXComponent.OnBrokenByViciousAttack
	 */
	struct UIGCharacterVFXComponent_OnBrokenByViciousAttack_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacterVFXComponent.HandleUnpocketVFXBP
	 */
	struct UIGCharacterVFXComponent_HandleUnpocketVFXBP_Params
	{
	public:
		class AActor*                                              Attacker;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Victim;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       DroppedAnItem;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterVFXComponent.HandleStashUnstashVFXBP
	 */
	struct UIGCharacterVFXComponent_HandleStashUnstashVFXBP_Params
	{
	public:
		bool                                                       IsStashing;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsLargeItem;                                             // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterVFXComponent.HandleDamageNumberNotification
	 */
	struct UIGCharacterVFXComponent_HandleDamageNumberNotification_Params
	{
	public:
		float                                                      DamageValue;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LEU2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UParticleSystem*                                     DamageNumberEffect;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NumberSpawnLocation;                                     // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NumberSpawnScale;                                        // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAttackerWasInSuper;                                     // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterVFXComponent.HandleClashVFXBP
	 */
	struct UIGCharacterVFXComponent_HandleClashVFXBP_Params
	{
	public:
		class AActor*                                              Attacker;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Victim;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterVFXComponent.HandleCharacterReset
	 */
	struct UIGCharacterVFXComponent_HandleCharacterReset_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacterVFXComponent.HandleCannonLaunchEnd
	 */
	struct UIGCharacterVFXComponent_HandleCannonLaunchEnd_Params
	{	};

	/**
	 * Function IGActorSystem.IGCharacterVFXComponent.HandleAnimNotifyVFXBP
	 */
	struct UIGCharacterVFXComponent_HandleAnimNotifyVFXBP_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIGVFXCharacterAnimNotifyEventInfo                  EventInfo;                                               // 0x0008(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterVFXComponent.HandleAnimNotifyStateTickVFXBP
	 */
	struct UIGCharacterVFXComponent_HandleAnimNotifyStateTickVFXBP_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIGVFXCharacterAnimNotifyEventInfo                  EventInfo;                                               // 0x0008(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterVFXComponent.HandleAnimNotifyStateEndVFXBP
	 */
	struct UIGCharacterVFXComponent_HandleAnimNotifyStateEndVFXBP_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIGVFXCharacterAnimNotifyEventInfo                  EventInfo;                                               // 0x0008(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterVFXComponent.HandleAnimNotifyStateBeginVFXBP
	 */
	struct UIGCharacterVFXComponent_HandleAnimNotifyStateBeginVFXBP_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIGVFXCharacterAnimNotifyEventInfo                  EventInfo;                                               // 0x0008(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterVFXComponent.GetClimbingSlideRollValue
	 */
	struct UIGCharacterVFXComponent_GetClimbingSlideRollValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterVFXComponent.CheckCharacterForPerk
	 */
	struct UIGCharacterVFXComponent_CheckCharacterForPerk_Params
	{
	public:
		class UIGPerkData*                                         Perk;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCharacterVFXComponent.AreDamageNumbersEnabled
	 */
	struct UIGCharacterVFXComponent_AreDamageNumbersEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCollectibleBase.Vanish
	 */
	struct AIGCollectibleBase_Vanish_Params
	{	};

	/**
	 * Function IGActorSystem.IGCollectibleBase.StartVanishWarning
	 */
	struct AIGCollectibleBase_StartVanishWarning_Params
	{	};

	/**
	 * Function IGActorSystem.IGCollectibleBase.OnVanish
	 */
	struct AIGCollectibleBase_OnVanish_Params
	{	};

	/**
	 * Function IGActorSystem.IGCollectibleBase.OnStartVanishWarning
	 */
	struct AIGCollectibleBase_OnStartVanishWarning_Params
	{	};

	/**
	 * Function IGActorSystem.IGCollectibleBase.OnRep_CollectibleState
	 */
	struct AIGCollectibleBase_OnRep_CollectibleState_Params
	{
	public:
		EIGCollectibleState                                        OldCollectibleState;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCollectibleBase.OnOverlap
	 */
	struct AIGCollectibleBase_OnOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0Y55[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCollectibleBase.OnHiddenInGameChanged
	 */
	struct AIGCollectibleBase_OnHiddenInGameChanged_Params
	{
	public:
		bool                                                       bNewHiddenInGame;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGCollectibleBase.OnCollected
	 */
	struct AIGCollectibleBase_OnCollected_Params
	{	};

	/**
	 * Function IGActorSystem.IGCollectibleBase.EndCollectibleDelay
	 */
	struct AIGCollectibleBase_EndCollectibleDelay_Params
	{	};

	/**
	 * Function IGActorSystem.IGInteractableBase.Use
	 */
	struct AIGInteractableBase_Use_Params
	{
	public:
		class AIGCharacter*                                        InChar;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractableBase.StopInteract
	 */
	struct AIGInteractableBase_StopInteract_Params
	{
	public:
		bool                                                       bForceInstant;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractableBase.SetPendingDurabilityCost
	 */
	struct AIGInteractableBase_SetPendingDurabilityCost_Params
	{
	public:
		int32_t                                                    PendingDurability;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractableBase.OnUseSequenceEnded
	 */
	struct AIGInteractableBase_OnUseSequenceEnded_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractableBase.OnUse
	 */
	struct AIGInteractableBase_OnUse_Params
	{	};

	/**
	 * Function IGActorSystem.IGInteractableBase.OnUnstashSequenceEnded
	 */
	struct AIGInteractableBase_OnUnstashSequenceEnded_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractableBase.OnStopInteractSequenceEnded
	 */
	struct AIGInteractableBase_OnStopInteractSequenceEnded_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractableBase.OnStashSequenceEnded
	 */
	struct AIGInteractableBase_OnStashSequenceEnded_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractableBase.OnStartInteractSequenceEnded
	 */
	struct AIGInteractableBase_OnStartInteractSequenceEnded_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractableBase.OnRep_MaxDurabilityReached
	 */
	struct AIGInteractableBase_OnRep_MaxDurabilityReached_Params
	{
	public:
		bool                                                       bOldDurabilityReached;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractableBase.OnRep_DurabilityInfo
	 */
	struct AIGInteractableBase_OnRep_DurabilityInfo_Params
	{	};

	/**
	 * Function IGActorSystem.IGInteractableBase.OnMaxDurabilityReached
	 */
	struct AIGInteractableBase_OnMaxDurabilityReached_Params
	{	};

	/**
	 * Function IGActorSystem.IGInteractableBase.OnInteractionStarted
	 */
	struct AIGInteractableBase_OnInteractionStarted_Params
	{	};

	/**
	 * Function IGActorSystem.IGInteractableBase.OnInteractionEnded
	 */
	struct AIGInteractableBase_OnInteractionEnded_Params
	{	};

	/**
	 * Function IGActorSystem.IGInteractableBase.OnDurabilityChanged
	 */
	struct AIGInteractableBase_OnDurabilityChanged_Params
	{	};

	/**
	 * Function IGActorSystem.IGInteractableBase.IsPendingMaxDurablity
	 */
	struct AIGInteractableBase_IsPendingMaxDurablity_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractableBase.IsInteractable
	 */
	struct AIGInteractableBase_IsInteractable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractableBase.IsBeingSwapped
	 */
	struct AIGInteractableBase_IsBeingSwapped_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractableBase.GetInteractingCharacter
	 */
	struct AIGInteractableBase_GetInteractingCharacter_Params
	{
	public:
		class AIGCharacter*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractableBase.GetInAirFaceButtonTopPrompt
	 */
	struct AIGInteractableBase_GetInAirFaceButtonTopPrompt_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractableBase.GetInAirFaceButtonLeftPrompt
	 */
	struct AIGInteractableBase_GetInAirFaceButtonLeftPrompt_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractableBase.GetFaceButtonTopPrompt
	 */
	struct AIGInteractableBase_GetFaceButtonTopPrompt_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractableBase.GetFaceButtonLeftPrompt
	 */
	struct AIGInteractableBase_GetFaceButtonLeftPrompt_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractableBase.DoLocalInteractionEffects
	 */
	struct AIGInteractableBase_DoLocalInteractionEffects_Params
	{
	public:
		EIGInteractionType                                         InType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractableBase.ConsumePendingDurability
	 */
	struct AIGInteractableBase_ConsumePendingDurability_Params
	{	};

	/**
	 * Function IGActorSystem.IGInteractableBase.CanInteractWithCharacter
	 */
	struct AIGInteractableBase_CanInteractWithCharacter_Params
	{
	public:
		class AIGCharacter*                                        InChar;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractableBase.ApplySpawnOptions
	 */
	struct AIGInteractableBase_ApplySpawnOptions_Params
	{
	public:
		struct FIGLootSpawnOptions                                 SpawnOpts;                                               // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractablePickup.SweepForHits
	 */
	struct AIGInteractablePickup_SweepForHits_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractablePickup.SelectTargetAlongPath
	 */
	struct AIGInteractablePickup_SelectTargetAlongPath_Params
	{
	public:
		struct FPredictProjectilePathResult                        Result;                                                  // 0x0000(0x00B8)  (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractablePickup.OnRep_ProjectileOverride
	 */
	struct AIGInteractablePickup_OnRep_ProjectileOverride_Params
	{	};

	/**
	 * Function IGActorSystem.IGInteractablePickup.OnRep_MovementEnabledChanged
	 */
	struct AIGInteractablePickup_OnRep_MovementEnabledChanged_Params
	{	};

	/**
	 * Function IGActorSystem.IGInteractablePickup.OnRep_IsActiveProjectile
	 */
	struct AIGInteractablePickup_OnRep_IsActiveProjectile_Params
	{	};

	/**
	 * Function IGActorSystem.IGInteractablePickup.OnRep_HomingTarget
	 */
	struct AIGInteractablePickup_OnRep_HomingTarget_Params
	{	};

	/**
	 * Function IGActorSystem.IGInteractablePickup.OnRep_DamageOwner
	 */
	struct AIGInteractablePickup_OnRep_DamageOwner_Params
	{	};

	/**
	 * Function IGActorSystem.IGInteractablePickup.OnProjectileStop
	 */
	struct AIGInteractablePickup_OnProjectileStop_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractablePickup.OnProjectileHit
	 */
	struct AIGInteractablePickup_OnProjectileHit_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractablePickup.OnProjectileEndOverlap
	 */
	struct AIGInteractablePickup_OnProjectileEndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractablePickup.OnProjectileBounce
	 */
	struct AIGInteractablePickup_OnProjectileBounce_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             ImpactVelocity;                                          // 0x0088(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractablePickup.OnProjectileBeginOverlap
	 */
	struct AIGInteractablePickup_OnProjectileBeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IV1V[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractablePickup.OnPickedUp
	 */
	struct AIGInteractablePickup_OnPickedUp_Params
	{	};

	/**
	 * Function IGActorSystem.IGInteractablePickup.OnDropped
	 */
	struct AIGInteractablePickup_OnDropped_Params
	{	};

	/**
	 * Function IGActorSystem.IGInteractablePickup.OnDeactivateProjectile
	 */
	struct AIGInteractablePickup_OnDeactivateProjectile_Params
	{	};

	/**
	 * Function IGActorSystem.IGInteractablePickup.OnAttackConnect
	 */
	struct AIGInteractablePickup_OnAttackConnect_Params
	{
	public:
		struct FQueuedAttack                                       InQueuedAttack;                                          // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractablePickup.OnActivateProjectile
	 */
	struct AIGInteractablePickup_OnActivateProjectile_Params
	{	};

	/**
	 * Function IGActorSystem.IGInteractablePickup.GetWeaponType
	 */
	struct AIGInteractablePickup_GetWeaponType_Params
	{
	public:
		EIGWeaponType                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractablePickup.ActivateProjectile
	 */
	struct AIGInteractablePickup_ActivateProjectile_Params
	{
	public:
		class AIGCharacter*                                        InDamageOwner;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AIGCharacter*                                        TargetCharacter;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGDropShadowComponent.OnMoveWalk
	 */
	struct UIGDropShadowComponent_OnMoveWalk_Params
	{	};

	/**
	 * Function IGActorSystem.IGFallTierNotifyState.OnFallTierPassedNotify
	 */
	struct UIGFallTierNotifyState_OnFallTierPassedNotify_Params
	{
	public:
		int32_t                                                    Tier;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YKTN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWorld*                                              World;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFallData                                           FallData;                                                // 0x0010(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGGameInfo.IsCombatNotificationsEnabled
	 */
	struct UIGGameInfo_IsCombatNotificationsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGGameInstance.SetInvertLook
	 */
	struct UIGGameInstance_SetInvertLook_Params
	{
	public:
		bool                                                       bNewInvert;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGGameInstance.Set60FPSProfile
	 */
	struct UIGGameInstance_Set60FPSProfile_Params
	{	};

	/**
	 * Function IGActorSystem.IGGameInstance.Set30FPSProfile
	 */
	struct UIGGameInstance_Set30FPSProfile_Params
	{	};

	/**
	 * Function IGActorSystem.IGGameInstance.PostTelemetryEventBP
	 */
	struct UIGGameInstance_PostTelemetryEventBP_Params
	{
	public:
		class FString                                              EventType;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         AdditionalProperties;                                    // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Category;                                                // 0x0060(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGGameInstance.IsLookInverted
	 */
	struct UIGGameInstance_IsLookInverted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGGameInstance.InitializeAudioSettings
	 */
	struct UIGGameInstance_InitializeAudioSettings_Params
	{	};

	/**
	 * Function IGActorSystem.IGGameInstance.GetStatsSystem
	 */
	struct UIGGameInstance_GetStatsSystem_Params
	{
	public:
		class UIGStatsSystem*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGGameInstance.GetSavedSettings
	 */
	struct UIGGameInstance_GetSavedSettings_Params
	{
	public:
		class UIGSavedSettings*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGGameInstance.CommitSavedSettingsChanges
	 */
	struct UIGGameInstance_CommitSavedSettingsChanges_Params
	{	};

	/**
	 * Function IGActorSystem.IGGameMode.DumpLootInfoToLog
	 */
	struct AIGGameMode_DumpLootInfoToLog_Params
	{	};

	/**
	 * Function IGActorSystem.IGGameState.OnRep_TeamInfoUpdated
	 */
	struct AIGGameState_OnRep_TeamInfoUpdated_Params
	{	};

	/**
	 * Function IGActorSystem.IGGameState.MulticastKnockoutEvent
	 */
	struct AIGGameState_MulticastKnockoutEvent_Params
	{
	public:
		struct FIGKnockOutData                                     Knockout;                                                // 0x0000(0x0030)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGGameState.GetNumKnockouts
	 */
	struct AIGGameState_GetNumKnockouts_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGGameState.GetKnockoutAt
	 */
	struct AIGGameState_GetKnockoutAt_Params
	{
	public:
		int32_t                                                    I;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9ALJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FIGKnockOutData                                     ReturnValue;                                             // 0x0008(0x0030)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGGameState.ExecLogTeamInfo
	 */
	struct AIGGameState_ExecLogTeamInfo_Params
	{	};

	/**
	 * Function IGActorSystem.IGWeaponBase.OnRep_LockedCrateRadarTiers
	 */
	struct AIGWeaponBase_OnRep_LockedCrateRadarTiers_Params
	{	};

	/**
	 * Function IGActorSystem.IGWeaponBase.OnLockedCrateRadarTierChanged
	 */
	struct AIGWeaponBase_OnLockedCrateRadarTierChanged_Params
	{
	public:
		int32_t                                                    EffectTiers;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGGrenadeBase.OnRep_GrenadeState
	 */
	struct AIGGrenadeBase_OnRep_GrenadeState_Params
	{
	public:
		EIGGrenadeState                                            OldGrenadeState;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGGrenadeBase.OnLingerFinished
	 */
	struct AIGGrenadeBase_OnLingerFinished_Params
	{	};

	/**
	 * Function IGActorSystem.IGGrenadeBase.OnDetonateTimerStart
	 */
	struct AIGGrenadeBase_OnDetonateTimerStart_Params
	{	};

	/**
	 * Function IGActorSystem.IGGrenadeBase.OnDetonate
	 */
	struct AIGGrenadeBase_OnDetonate_Params
	{	};

	/**
	 * Function IGActorSystem.IGGrenadeBase.GetLingerTime
	 */
	struct AIGGrenadeBase_GetLingerTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGStatusEffectAOEActor.OnEndOverlap
	 */
	struct AIGStatusEffectAOEActor_OnEndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGStatusEffectAOEActor.OnBeginOverlap
	 */
	struct AIGStatusEffectAOEActor_OnBeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EQ2I[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGHitManagerComponent.ResolvePendingHitBlocks
	 */
	struct UIGHitManagerComponent_ResolvePendingHitBlocks_Params
	{
	public:
		struct FQueuedAttack                                       QueuedAttack;                                            // 0x0000(0x0080)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bFinalCheck;                                             // 0x0080(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGHitManagerComponent.ResolvePendingBlocks
	 */
	struct UIGHitManagerComponent_ResolvePendingBlocks_Params
	{
	public:
		struct FQueuedAttack                                       QueuedAttack;                                            // 0x0000(0x0080)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGHitManagerComponent.ProcessQueuedAttack
	 */
	struct UIGHitManagerComponent_ProcessQueuedAttack_Params
	{
	public:
		struct FQueuedAttack                                       QueuedAttack;                                            // 0x0000(0x0080)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGHitManagerComponent.OnRep_ServerQueuedAttacks
	 */
	struct UIGHitManagerComponent_OnRep_ServerQueuedAttacks_Params
	{	};

	/**
	 * Function IGActorSystem.IGHitManagerComponent.LockQueuedAttack
	 */
	struct UIGHitManagerComponent_LockQueuedAttack_Params
	{
	public:
		struct FQueuedAttack                                       QueuedAttack;                                            // 0x0000(0x0080)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      TimeBeforeActivation;                                    // 0x0080(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction IGActorSystem.IGHitManagerComponent.HitManagerDelegate__DelegateSignature
	 */
	struct UIGHitManagerComponent_HitManagerDelegate__DelegateSignature_Params
	{
	public:
		struct FQueuedAttack                                       InQueuedAttack;                                          // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGHitManagerComponent.CheckForClashes
	 */
	struct UIGHitManagerComponent_CheckForClashes_Params
	{
	public:
		struct FQueuedAttack                                       QueuedAttack;                                            // 0x0000(0x0080)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      TimeBeforeActivation;                                    // 0x0080(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGHitReactor.OnReceivedHitWithKnockbackDirection
	 */
	struct UIGHitReactor_OnReceivedHitWithKnockbackDirection_Params
	{
	public:
		struct FVector                                             KnockbackDirection;                                      // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractable.GetInteractionPromptLocation
	 */
	struct UIGInteractable_GetInteractionPromptLocation_Params
	{
	public:
		class AActor*                                              InteractingActor;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractable.GetInteractablePromptBehavior
	 */
	struct UIGInteractable_GetInteractablePromptBehavior_Params
	{
	public:
		EInteractablePromptBehavior                                ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractableBoxComponent.OnOverlapEnd
	 */
	struct UIGInteractableBoxComponent_OnOverlapEnd_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractableBoxComponent.OnOverlapBegin
	 */
	struct UIGInteractableBoxComponent_OnOverlapBegin_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7NBB[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGStaticInteractableActor.TimeTillResetToInteractable
	 */
	struct AIGStaticInteractableActor_TimeTillResetToInteractable_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGStaticInteractableActor.StopInteract
	 */
	struct AIGStaticInteractableActor_StopInteract_Params
	{	};

	/**
	 * Function IGActorSystem.IGStaticInteractableActor.ShouldBeVisible
	 */
	struct AIGStaticInteractableActor_ShouldBeVisible_Params
	{
	public:
		EIGStaticInteractableActorState                            PreviousState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EIGStaticInteractableActorState                            NewState;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGStaticInteractableActor.ResetTimerExpired
	 */
	struct AIGStaticInteractableActor_ResetTimerExpired_Params
	{	};

	/**
	 * Function IGActorSystem.IGStaticInteractableActor.OnStartInteractSequenceEnded
	 */
	struct AIGStaticInteractableActor_OnStartInteractSequenceEnded_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGStaticInteractableActor.OnRep_InteractableActorStateChanged
	 */
	struct AIGStaticInteractableActor_OnRep_InteractableActorStateChanged_Params
	{	};

	/**
	 * Function IGActorSystem.IGStaticInteractableActor.IsInteractable
	 */
	struct AIGStaticInteractableActor_IsInteractable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGStaticInteractableActor.HandleInteractableStateChanged_BP
	 */
	struct AIGStaticInteractableActor_HandleInteractableStateChanged_BP_Params
	{
	public:
		EIGStaticInteractableActorState                            PreviousState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EIGStaticInteractableActorState                            NewState;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGStaticInteractableActor.HandleInteractableReset_BP
	 */
	struct AIGStaticInteractableActor_HandleInteractableReset_BP_Params
	{	};

	/**
	 * Function IGActorSystem.IGStaticInteractableActor.GetInteractableID
	 */
	struct AIGStaticInteractableActor_GetInteractableID_Params
	{
	public:
		struct FGuid                                               ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGStaticInteractableActor.GetInteractableActorState
	 */
	struct AIGStaticInteractableActor_GetInteractableActorState_Params
	{
	public:
		EIGStaticInteractableActorState                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGStaticInteractableActor.GetCachedInteractingCharacter
	 */
	struct AIGStaticInteractableActor_GetCachedInteractingCharacter_Params
	{
	public:
		class AIGCharacter*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGItemEquipActor.UnpickupableStartInteraction_BP
	 */
	struct AIGItemEquipActor_UnpickupableStartInteraction_BP_Params
	{
	public:
		class AIGCharacter*                                        InteractingCharacter;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractableLootSpawner.TimeTillSpawnInteractable
	 */
	struct AIGInteractableLootSpawner_TimeTillSpawnInteractable_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractableLootSpawner.SpawnTimerComplete
	 */
	struct AIGInteractableLootSpawner_SpawnTimerComplete_Params
	{	};

	/**
	 * Function IGActorSystem.IGInteractableLootSpawner.SpawnerHasBeenHit_BP
	 */
	struct AIGInteractableLootSpawner_SpawnerHasBeenHit_BP_Params
	{
	public:
		bool                                                       bSuccessfulHit;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractableLootSpawner.OnRep_SpawnIncoming
	 */
	struct AIGInteractableLootSpawner_OnRep_SpawnIncoming_Params
	{	};

	/**
	 * Function IGActorSystem.IGInteractableLootSpawner.NeedsKeyToReact
	 */
	struct AIGInteractableLootSpawner_NeedsKeyToReact_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInteractableLootSpawner.HandleSpawnIncomingEvent_BP
	 */
	struct AIGInteractableLootSpawner_HandleSpawnIncomingEvent_BP_Params
	{
	public:
		bool                                                       bSpawnIncomingEvent;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInventory.UpdateItemDurability
	 */
	struct UIGInventory_UpdateItemDurability_Params
	{
	public:
		int32_t                                                    NewDurability;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInventory.TriggerSlotUpdateEvent
	 */
	struct UIGInventory_TriggerSlotUpdateEvent_Params
	{
	public:
		EIGInventorySlot                                           Slot;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInventory.TriggerDurabilityUpdate
	 */
	struct UIGInventory_TriggerDurabilityUpdate_Params
	{
	public:
		EIGInventorySlot                                           Slot;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInventory.ServerSwapWithHand
	 */
	struct UIGInventory_ServerSwapWithHand_Params
	{
	public:
		EIGInventorySlot                                           InSlot;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_X6X4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		EIGStashType                                               InStashType;                                             // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInventory.OnRep_ItemInHand
	 */
	struct UIGInventory_OnRep_ItemInHand_Params
	{	};

	/**
	 * Function IGActorSystem.IGInventory.OnRep_Inventory
	 */
	struct UIGInventory_OnRep_Inventory_Params
	{	};

	/**
	 * Function IGActorSystem.IGInventory.OnFinishUnstash
	 */
	struct UIGInventory_OnFinishUnstash_Params
	{
	public:
		bool                                                       bInterrupted;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInventory.OnFinishStashHand
	 */
	struct UIGInventory_OnFinishStashHand_Params
	{
	public:
		bool                                                       bInterrupted;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInventory.IsItemStashable
	 */
	struct UIGInventory_IsItemStashable_Params
	{
	public:
		class AIGInteractablePickup*                               Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInventory.IsItemInHandStashable
	 */
	struct UIGInventory_IsItemInHandStashable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInventory.IsItemClassStashable
	 */
	struct UIGInventory_IsItemClassStashable_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInventory.HasEmptySlot
	 */
	struct UIGInventory_HasEmptySlot_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInventory.HandleInventoryUpdated
	 */
	struct UIGInventory_HandleInventoryUpdated_Params
	{	};

	/**
	 * Function IGActorSystem.IGInventory.GetPendingUnstashType
	 */
	struct UIGInventory_GetPendingUnstashType_Params
	{
	public:
		EIGStashabilityType                                        ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInventory.GetPendingStashType
	 */
	struct UIGInventory_GetPendingStashType_Params
	{
	public:
		EIGStashabilityType                                        ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInventory.GetItemInSlot
	 */
	struct UIGInventory_GetItemInSlot_Params
	{
	public:
		EIGInventorySlot                                           Slot;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_70MD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FIGInventoryItem                                    ReturnValue;                                             // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInventory.GetIsSwapping
	 */
	struct UIGInventory_GetIsSwapping_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInventory.GetDisplayInfoForSlot
	 */
	struct UIGInventory_GetDisplayInfoForSlot_Params
	{
	public:
		EIGInventorySlot                                           Slot;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XC0Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FIGItemDisplayInfo                                  ReturnValue;                                             // 0x0008(0x0078)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInventory.GetDisplayInfoForPickup
	 */
	struct UIGInventory_GetDisplayInfoForPickup_Params
	{
	public:
		class AIGInteractablePickup*                               InPickup;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIGItemDisplayInfo                                  ReturnValue;                                             // 0x0008(0x0078)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInventory.GetDisplayInfoForItem
	 */
	struct UIGInventory_GetDisplayInfoForItem_Params
	{
	public:
		struct FIGInventoryItem                                    Item;                                                    // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FIGItemDisplayInfo                                  ReturnValue;                                             // 0x0030(0x0078)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInventory.FinishDelayedSwap
	 */
	struct UIGInventory_FinishDelayedSwap_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInventory.DropItems
	 */
	struct UIGInventory_DropItems_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInventory.DropItemFromSlot
	 */
	struct UIGInventory_DropItemFromSlot_Params
	{
	public:
		EIGInventorySlot                                           Slot;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInventory.DropAllItems
	 */
	struct UIGInventory_DropAllItems_Params
	{	};

	/**
	 * Function IGActorSystem.IGInventory.ClientTriggerFailedSwap
	 */
	struct UIGInventory_ClientTriggerFailedSwap_Params
	{
	public:
		EIGInventorySlot                                           Slot;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInventory.CanSwapWithHand
	 */
	struct UIGInventory_CanSwapWithHand_Params
	{
	public:
		EIGInventorySlot                                           Slot;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGInventory.CanPossiblySwapWithHand
	 */
	struct UIGInventory_CanPossiblySwapWithHand_Params
	{
	public:
		EIGInventorySlot                                           Slot;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGStaticInteractableActorHitReact.InteractableHasBeenHit_BP
	 */
	struct AIGStaticInteractableActorHitReact_InteractableHasBeenHit_BP_Params
	{
	public:
		bool                                                       bWasSuccessfulHit;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGStaticInteractableActorHitReact.AssignHitReactComponent
	 */
	struct AIGStaticInteractableActorHitReact_AssignHitReactComponent_Params
	{
	public:
		class USceneComponent*                                     SceneComponentHitReact;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGLedgeUpBoxComponent.OnOverlapBegin
	 */
	struct UIGLedgeUpBoxComponent_OnOverlapBegin_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GXCH[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGLootableModuleMeshComponent.OnLootableStateChanged
	 */
	struct UIGLootableModuleMeshComponent_OnLootableStateChanged_Params
	{
	public:
		EModuleLootState                                           NewLootState;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGLootableModuleMeshComponent.ChangeModuleLootState
	 */
	struct UIGLootableModuleMeshComponent_ChangeModuleLootState_Params
	{
	public:
		EModuleLootState                                           NewLootState;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGLootProfile.GetAllUniqueLootTypes
	 */
	struct UIGLootProfile_GetAllUniqueLootTypes_Params
	{	};

	/**
	 * Function IGActorSystem.IGLootSpawner.SpawnTimerComplete
	 */
	struct AIGLootSpawner_SpawnTimerComplete_Params
	{	};

	/**
	 * Function IGActorSystem.IGLootSpawner.OnRep_SpawnStateChanged
	 */
	struct AIGLootSpawner_OnRep_SpawnStateChanged_Params
	{	};

	/**
	 * Function IGActorSystem.IGLootSpawner.HandleSpawnerStateChanged_BP
	 */
	struct AIGLootSpawner_HandleSpawnerStateChanged_BP_Params
	{
	public:
		EIGSpawnerState                                            PreviousState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EIGSpawnerState                                            NewState;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGModUtils.RemoveIntMod
	 */
	struct UIGModUtils_RemoveIntMod_Params
	{
	public:
		struct FIGModValueInt                                      InVal;                                                   // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		struct FIGModStackInt                                      ModToApply;                                              // 0x0018(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGModUtils.RemoveFloatMod
	 */
	struct UIGModUtils_RemoveFloatMod_Params
	{
	public:
		struct FIGModValueFloat                                    InVal;                                                   // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		struct FIGModStackFloat                                    ModToApply;                                              // 0x0018(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGModUtils.GetIntMod
	 */
	struct UIGModUtils_GetIntMod_Params
	{
	public:
		struct FIGModValueInt                                      InVal;                                                   // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGModUtils.GetFloatMod
	 */
	struct UIGModUtils_GetFloatMod_Params
	{
	public:
		struct FIGModValueFloat                                    InVal;                                                   // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGModUtils.ApplyIntMod
	 */
	struct UIGModUtils_ApplyIntMod_Params
	{
	public:
		struct FIGModValueInt                                      InVal;                                                   // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		struct FIGModStackInt                                      ModToApply;                                              // 0x0018(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGModUtils.ApplyFloatMod
	 */
	struct UIGModUtils_ApplyFloatMod_Params
	{
	public:
		struct FIGModValueFloat                                    InVal;                                                   // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		struct FIGModStackFloat                                    ModToApply;                                              // 0x0018(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGMoveMontage.GetSimpleMoveMontageData
	 */
	struct UIGMoveMontage_GetSimpleMoveMontageData_Params
	{
	public:
		struct FIGSimpleMoveMontageData                            ReturnValue;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGMovesetComponent.SetSpecialTwo
	 */
	struct UIGMovesetComponent_SetSpecialTwo_Params
	{
	public:
		class UIGMoveMontage*                                      InSpecialTwo;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMoveTier                                                  InTier;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGMovesetComponent.SetSpecialOne
	 */
	struct UIGMovesetComponent_SetSpecialOne_Params
	{
	public:
		class UIGMoveMontage*                                      InSpecialOne;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMoveTier                                                  InTier;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGMovesetComponent.SetNextSpecialSlot
	 */
	struct UIGMovesetComponent_SetNextSpecialSlot_Params
	{
	public:
		class UIGMoveMontage*                                      InSpecial;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGMovesetComponent.ResetCharacterTransition
	 */
	struct UIGMovesetComponent_ResetCharacterTransition_Params
	{
	public:
		class UIGGenericInputEvent*                                InEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AdditionalDurationMS;                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGMovesetComponent.RemoveCharacterTransition
	 */
	struct UIGMovesetComponent_RemoveCharacterTransition_Params
	{
	public:
		class UIGGenericInputEvent*                                InEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGMovesetComponent.RecordInput
	 */
	struct UIGMovesetComponent_RecordInput_Params
	{
	public:
		EMoveTrack                                                 RequestedTrack;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EInputEvent                                                EventType;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMoveInputDirection                                        InputDirection;                                          // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGMovesetComponent.PrepareForNewTransition
	 */
	struct UIGMovesetComponent_PrepareForNewTransition_Params
	{
	public:
		class UIGMoveMontage*                                      NewMontage;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGMovesetComponent.PopMoveTransitions
	 */
	struct UIGMovesetComponent_PopMoveTransitions_Params
	{
	public:
		class FName                                                MovesetDataName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    DelayMS;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGMovesetComponent.OnRep_SpecialTwo
	 */
	struct UIGMovesetComponent_OnRep_SpecialTwo_Params
	{	};

	/**
	 * Function IGActorSystem.IGMovesetComponent.OnRep_SpecialOne
	 */
	struct UIGMovesetComponent_OnRep_SpecialOne_Params
	{	};

	/**
	 * Function IGActorSystem.IGMovesetComponent.ObtainPerk
	 */
	struct UIGMovesetComponent_ObtainPerk_Params
	{	};

	/**
	 * Function IGActorSystem.IGMovesetComponent.IsInCombo
	 */
	struct UIGMovesetComponent_IsInCombo_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGMovesetComponent.IsHolding
	 */
	struct UIGMovesetComponent_IsHolding_Params
	{
	public:
		EMoveTrack                                                 TestedTrack;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGMovesetComponent.GetSpecialTwoTier
	 */
	struct UIGMovesetComponent_GetSpecialTwoTier_Params
	{
	public:
		EMoveTier                                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGMovesetComponent.GetSpecialTwo
	 */
	struct UIGMovesetComponent_GetSpecialTwo_Params
	{
	public:
		class UIGMoveMontage*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGMovesetComponent.GetSpecialOneTier
	 */
	struct UIGMovesetComponent_GetSpecialOneTier_Params
	{
	public:
		EMoveTier                                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGMovesetComponent.GetSpecialOne
	 */
	struct UIGMovesetComponent_GetSpecialOne_Params
	{
	public:
		class UIGMoveMontage*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGMovesetComponent.GetSpecialMovesetName
	 */
	struct UIGMovesetComponent_GetSpecialMovesetName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGMovesetComponent.GetOldestTimestamp
	 */
	struct UIGMovesetComponent_GetOldestTimestamp_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGMovesetComponent.GetAimingContextname
	 */
	struct UIGMovesetComponent_GetAimingContextname_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGMovesetComponent.ClearCharacterTransitions
	 */
	struct UIGMovesetComponent_ClearCharacterTransitions_Params
	{	};

	/**
	 * Function IGActorSystem.IGMovesetComponent.ClearAllPendingInputs
	 */
	struct UIGMovesetComponent_ClearAllPendingInputs_Params
	{	};

	/**
	 * Function IGActorSystem.IGMovesetComponent.CharacterTransitionsInTrack
	 */
	struct UIGMovesetComponent_CharacterTransitionsInTrack_Params
	{
	public:
		EMoveTrack                                                 InTrack;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7M8T[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGMovesetComponent.AddCharacterTransition
	 */
	struct UIGMovesetComponent_AddCharacterTransition_Params
	{
	public:
		class UIGGenericInputEvent*                                InEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AdditionalDurationMS;                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGMovesetData.GetComboStrings
	 */
	struct UIGMovesetData_GetComboStrings_Params
	{
	public:
		TArray<struct FIGBotComboString>                           OutComboStrings;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		ECharacterLocomotionState                                  StartingState;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ToggleStaminaRegen
	 */
	struct AIGPlayerController_ToggleStaminaRegen_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.ToggleSpectatorMode
	 */
	struct AIGPlayerController_ToggleSpectatorMode_Params
	{
	public:
		bool                                                       bShouldSpectate;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ToggleShowFameValue
	 */
	struct AIGPlayerController_ToggleShowFameValue_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.ToggleScriptedNetPlayerWaypoints
	 */
	struct AIGPlayerController_ToggleScriptedNetPlayerWaypoints_Params
	{
	public:
		class FString                                              TargetTag;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.TakeAPerk
	 */
	struct AIGPlayerController_TakeAPerk_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.TagMe
	 */
	struct AIGPlayerController_TagMe_Params
	{
	public:
		class FName                                                NameTag;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.StopSpecialMoveConsumableLoopAnimation
	 */
	struct AIGPlayerController_StopSpecialMoveConsumableLoopAnimation_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.StopReading
	 */
	struct AIGPlayerController_StopReading_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.StopAllScriptedPlayers
	 */
	struct AIGPlayerController_StopAllScriptedPlayers_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.SetHUDToSpectatorState
	 */
	struct AIGPlayerController_SetHUDToSpectatorState_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.SetAllToFollowMe
	 */
	struct AIGPlayerController_SetAllToFollowMe_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.ServerTagMe
	 */
	struct AIGPlayerController_ServerTagMe_Params
	{
	public:
		class FName                                                NameTag;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ServerSpawnBots
	 */
	struct AIGPlayerController_ServerSpawnBots_Params
	{
	public:
		class FString                                              Params;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Count;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             SpawnPos;                                                // 0x0014(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TeamSize;                                                // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ServerSetViewTarget
	 */
	struct AIGPlayerController_ServerSetViewTarget_Params
	{
	public:
		class APlayerState*                                        NewTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ServerRescueMe
	 */
	struct AIGPlayerController_ServerRescueMe_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.ServerRequestServerTime
	 */
	struct AIGPlayerController_ServerRequestServerTime_Params
	{
	public:
		class APlayerController*                                   requester;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      requestWorldTime;                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ServerRequestReplicateServerStats
	 */
	struct AIGPlayerController_ServerRequestReplicateServerStats_Params
	{
	public:
		bool                                                       bShouldReplicate;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ServerRequestLevelRestart
	 */
	struct AIGPlayerController_ServerRequestLevelRestart_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.ServerRequestChangeState
	 */
	struct AIGPlayerController_ServerRequestChangeState_Params
	{
	public:
		class FName                                                NewState;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ServerReplicateStats
	 */
	struct AIGPlayerController_ServerReplicateStats_Params
	{
	public:
		bool                                                       bShouldReplicate;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ServerKillMe
	 */
	struct AIGPlayerController_ServerKillMe_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.ServerExecuteCmd
	 */
	struct AIGPlayerController_ServerExecuteCmd_Params
	{
	public:
		class FString                                              Cmd;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ServerDestroyBot
	 */
	struct AIGPlayerController_ServerDestroyBot_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.ServerDebugToggleStaminaRegen
	 */
	struct AIGPlayerController_ServerDebugToggleStaminaRegen_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.ServerDebugSpawnRandomItem
	 */
	struct AIGPlayerController_ServerDebugSpawnRandomItem_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.ServerDebugSpawnItem
	 */
	struct AIGPlayerController_ServerDebugSpawnItem_Params
	{
	public:
		class UClass*                                              InteractableType;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ServerDebugSpawnAllCoinSplines
	 */
	struct AIGPlayerController_ServerDebugSpawnAllCoinSplines_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.ServerDebugSetStamina
	 */
	struct AIGPlayerController_ServerDebugSetStamina_Params
	{
	public:
		float                                                      TargetStamina;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ServerDebugSetPlayerSizeModifier
	 */
	struct AIGPlayerController_ServerDebugSetPlayerSizeModifier_Params
	{
	public:
		float                                                      Modifier;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ServerDebugSetHealth
	 */
	struct AIGPlayerController_ServerDebugSetHealth_Params
	{
	public:
		float                                                      TargetHealth;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ServerDebugSetFame
	 */
	struct AIGPlayerController_ServerDebugSetFame_Params
	{
	public:
		float                                                      TargetFame;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ServerDebugRerollLoots
	 */
	struct AIGPlayerController_ServerDebugRerollLoots_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.ServerDebugInitializeLootTableDummies
	 */
	struct AIGPlayerController_ServerDebugInitializeLootTableDummies_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.ServerDebugAddPerkXP
	 */
	struct AIGPlayerController_ServerDebugAddPerkXP_Params
	{
	public:
		float                                                      PerkXPAmount;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ServerCleanUpAllPooledActor
	 */
	struct AIGPlayerController_ServerCleanUpAllPooledActor_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.ServerAckedGuidSync
	 */
	struct AIGPlayerController_ServerAckedGuidSync_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.RescueMe
	 */
	struct AIGPlayerController_RescueMe_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.RequestSpawnBotWithTree
	 */
	struct AIGPlayerController_RequestSpawnBotWithTree_Params
	{
	public:
		class FString                                              BehaviorTreeName;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.RequestSpawnBotTeams
	 */
	struct AIGPlayerController_RequestSpawnBotTeams_Params
	{
	public:
		class FString                                              ProfileName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TeamSize;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TeamCount;                                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.RequestSpawnBotsWithTree
	 */
	struct AIGPlayerController_RequestSpawnBotsWithTree_Params
	{
	public:
		class FString                                              BehaviorTreeName;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Count;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.RequestSpawnBots
	 */
	struct AIGPlayerController_RequestSpawnBots_Params
	{
	public:
		class FString                                              ProfileName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Count;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.RequestSpawnBot
	 */
	struct AIGPlayerController_RequestSpawnBot_Params
	{
	public:
		class FString                                              ProfileName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.RequestLevelRestart
	 */
	struct AIGPlayerController_RequestLevelRestart_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.RequestDestroyBot
	 */
	struct AIGPlayerController_RequestDestroyBot_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.KillMe
	 */
	struct AIGPlayerController_KillMe_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.HandleOnClientIsAimingCannonChanged
	 */
	struct AIGPlayerController_HandleOnClientIsAimingCannonChanged_Params
	{
	public:
		bool                                                       IsAimingCannon;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.GetLocalActorPool
	 */
	struct AIGPlayerController_GetLocalActorPool_Params
	{
	public:
		class UIGActorPool*                                        ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ExecVanishAllCoins
	 */
	struct AIGPlayerController_ExecVanishAllCoins_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.ExecSpawnRandomItem
	 */
	struct AIGPlayerController_ExecSpawnRandomItem_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.ExecSpawnAllCoinSplines
	 */
	struct AIGPlayerController_ExecSpawnAllCoinSplines_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.ExecShowLockedCrateRadar
	 */
	struct AIGPlayerController_ExecShowLockedCrateRadar_Params
	{
	public:
		bool                                                       bShouldShow;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ExecShowDamageDebug
	 */
	struct AIGPlayerController_ExecShowDamageDebug_Params
	{
	public:
		bool                                                       bShouldShow;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ExecSetStamina
	 */
	struct AIGPlayerController_ExecSetStamina_Params
	{
	public:
		float                                                      TargetStamina;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ExecSetPlayerSizeModifier
	 */
	struct AIGPlayerController_ExecSetPlayerSizeModifier_Params
	{
	public:
		float                                                      Modifier;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ExecSetHealth
	 */
	struct AIGPlayerController_ExecSetHealth_Params
	{
	public:
		float                                                      TargetHealth;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ExecSetFame
	 */
	struct AIGPlayerController_ExecSetFame_Params
	{
	public:
		float                                                      TargetFame;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ExecSetCombatMode
	 */
	struct AIGPlayerController_ExecSetCombatMode_Params
	{
	public:
		bool                                                       IsInCombatMode;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ExecRerollLoots
	 */
	struct AIGPlayerController_ExecRerollLoots_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.ExecLogIfTeammateIsNetRelevant
	 */
	struct AIGPlayerController_ExecLogIfTeammateIsNetRelevant_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.ExecInitializeLootTableDummies
	 */
	struct AIGPlayerController_ExecInitializeLootTableDummies_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.ExecEnableFame
	 */
	struct AIGPlayerController_ExecEnableFame_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ExecDropMagazines
	 */
	struct AIGPlayerController_ExecDropMagazines_Params
	{
	public:
		bool                                                       bDrop;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ExecCleanUpAllPooledActor
	 */
	struct AIGPlayerController_ExecCleanUpAllPooledActor_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.ExecAddPerkXP
	 */
	struct AIGPlayerController_ExecAddPerkXP_Params
	{
	public:
		float                                                      PerkXPAmount;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.DownTeammate
	 */
	struct AIGPlayerController_DownTeammate_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.ClientStopScriptedNetPlayer
	 */
	struct AIGPlayerController_ClientStopScriptedNetPlayer_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.ClientSetScriptedNetPlayerWaypoints
	 */
	struct AIGPlayerController_ClientSetScriptedNetPlayerWaypoints_Params
	{
	public:
		class FString                                              TargetTag;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ClientSetScriptedNetPlayerToFollow
	 */
	struct AIGPlayerController_ClientSetScriptedNetPlayerToFollow_Params
	{
	public:
		class AIGCharacter*                                        FollowCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ClientRequestAckOfGuidSync
	 */
	struct AIGPlayerController_ClientRequestAckOfGuidSync_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.ClientReportServerTime
	 */
	struct AIGPlayerController_ClientReportServerTime_Params
	{
	public:
		float                                                      requestWorldTime;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      serverTime;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ClientPerformSpecialMoveEquipChoice
	 */
	struct AIGPlayerController_ClientPerformSpecialMoveEquipChoice_Params
	{
	public:
		class UIGMoveMontage*                                      MoveMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMoveTier                                                  SpecialTier;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ClientForceExit
	 */
	struct AIGPlayerController_ClientForceExit_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.ClearPendingCombatInput
	 */
	struct AIGPlayerController_ClearPendingCombatInput_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.ChangeCombatContextBehavior
	 */
	struct AIGPlayerController_ChangeCombatContextBehavior_Params
	{
	public:
		class FName                                                ContextName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Behavior;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.ChangeAutoChargeReleaseBehavior
	 */
	struct AIGPlayerController_ChangeAutoChargeReleaseBehavior_Params
	{
	public:
		class FName                                                ContextName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShouldTurnOn;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerController.BroadcastOnSpecialMoveConsumableConsumed
	 */
	struct AIGPlayerController_BroadcastOnSpecialMoveConsumableConsumed_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.AssignMoveToEquipToSlotTwo
	 */
	struct AIGPlayerController_AssignMoveToEquipToSlotTwo_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerController.AssignMoveToEquipToSlotOne
	 */
	struct AIGPlayerController_AssignMoveToEquipToSlotOne_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerData.TryGetStringJsonValue
	 */
	struct UIGPlayerData_TryGetStringJsonValue_Params
	{
	public:
		class FString                                              ValueName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutValue;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerData.TryGetIntJsonValue
	 */
	struct UIGPlayerData_TryGetIntJsonValue_Params
	{
	public:
		class FString                                              ValueName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutValue;                                                // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerData.TryGetFloatJsonValue
	 */
	struct UIGPlayerData_TryGetFloatJsonValue_Params
	{
	public:
		class FString                                              ValueName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutValue;                                                // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerData.TryGetBoolJsonValue
	 */
	struct UIGPlayerData_TryGetBoolJsonValue_Params
	{
	public:
		class FString                                              ValueName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OutValue;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerData.SetStringJsonValue
	 */
	struct UIGPlayerData_SetStringJsonValue_Params
	{
	public:
		class FString                                              ValueName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerData.SetIntJsonValue
	 */
	struct UIGPlayerData_SetIntJsonValue_Params
	{
	public:
		class FString                                              ValueName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerData.SetFloatJsonValue
	 */
	struct UIGPlayerData_SetFloatJsonValue_Params
	{
	public:
		class FString                                              ValueName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerData.SetBoolJsonValue
	 */
	struct UIGPlayerData_SetBoolJsonValue_Params
	{
	public:
		class FString                                              ValueName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Value;                                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerData.LogJsonData
	 */
	struct UIGPlayerData_LogJsonData_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerData.IsJsonDataInitialized
	 */
	struct UIGPlayerData_IsJsonDataInitialized_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerState.UpdateKillerPlayerState
	 */
	struct AIGPlayerState_UpdateKillerPlayerState_Params
	{
	public:
		class APlayerState*                                        KillerPlayerState;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction IGActorSystem.IGPlayerState.OnTeamLeaderUpdated__DelegateSignature
	 */
	struct AIGPlayerState_OnTeamLeaderUpdated__DelegateSignature_Params
	{
	public:
		bool                                                       bIsTeamLeader;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerState.OnRep_TeamID
	 */
	struct AIGPlayerState_OnRep_TeamID_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerState.OnRep_IsTeamLeader
	 */
	struct AIGPlayerState_OnRep_IsTeamLeader_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerState.OnRep_IsLowHealth
	 */
	struct AIGPlayerState_OnRep_IsLowHealth_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerState.OnRep_IsInCombat
	 */
	struct AIGPlayerState_OnRep_IsInCombat_Params
	{	};

	/**
	 * Function IGActorSystem.IGPlayerState.IsTeamLeader
	 */
	struct AIGPlayerState_IsTeamLeader_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerState.IsLocalPlayerState
	 */
	struct AIGPlayerState_IsLocalPlayerState_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerState.HasLaunchControl
	 */
	struct AIGPlayerState_HasLaunchControl_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerState.HandleOnTeammateLeftServer
	 */
	struct AIGPlayerState_HandleOnTeammateLeftServer_Params
	{
	public:
		class AIGPlayerState*                                      ExitingTeammate;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerState.HandleOnTeammateDied
	 */
	struct AIGPlayerState_HandleOnTeammateDied_Params
	{
	public:
		class AIGPlayerState*                                      TeammatePlayerState;                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerState.HandleOnTeammateCannonLanded
	 */
	struct AIGPlayerState_HandleOnTeammateCannonLanded_Params
	{
	public:
		class AIGPlayerState*                                      TeammatePlayerState;                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerState.HandleOnTeammateAdded
	 */
	struct AIGPlayerState_HandleOnTeammateAdded_Params
	{
	public:
		class AIGPlayerState*                                      TeammatePlayerState;                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerState.GetTeamInfoForPlayerState
	 */
	struct AIGPlayerState_GetTeamInfoForPlayerState_Params
	{
	public:
		struct FTeamInfo                                           OutTeamInfo;                                             // 0x0000(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerState.GetTeamID
	 */
	struct AIGPlayerState_GetTeamID_Params
	{
	public:
		struct FGuid                                               ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerState.GetStatsSystem
	 */
	struct AIGPlayerState_GetStatsSystem_Params
	{
	public:
		class UIGStatsSystem*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerState.GetPartyMemberID
	 */
	struct AIGPlayerState_GetPartyMemberID_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerState.ClientUpdateAchievement
	 */
	struct AIGPlayerState_ClientUpdateAchievement_Params
	{
	public:
		EIGAchievement                                             Achievement;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9PON[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    NewProgress;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EIGAchievementStatProgressionType                          ProgressionType;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerState.ClientSetEOSLobbyId
	 */
	struct AIGPlayerState_ClientSetEOSLobbyId_Params
	{
	public:
		class FString                                              InEOSLobbyId;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPlayerState.Client_DumpServerTrackedStatsStoredOnClient
	 */
	struct AIGPlayerState_Client_DumpServerTrackedStatsStoredOnClient_Params
	{	};

	/**
	 * Function IGActorSystem.IGPooledActor.OnReturnedToPool
	 */
	struct UIGPooledActor_OnReturnedToPool_Params
	{	};

	/**
	 * Function IGActorSystem.IGPooledActor.OnRemovedFromPool
	 */
	struct UIGPooledActor_OnRemovedFromPool_Params
	{	};

	/**
	 * Function IGActorSystem.IGPoseSpotActor.UpdatePoseSpotHighlight_BP
	 */
	struct AIGPoseSpotActor_UpdatePoseSpotHighlight_BP_Params
	{
	public:
		float                                                      PlayerDistance;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsInRange;                                               // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPoseSpotActor.SetInitialState
	 */
	struct AIGPoseSpotActor_SetInitialState_Params
	{	};

	/**
	 * Function IGActorSystem.IGPoseSpotActor.OnRep_PoseSpotActorStateChanged
	 */
	struct AIGPoseSpotActor_OnRep_PoseSpotActorStateChanged_Params
	{	};

	/**
	 * Function IGActorSystem.IGPoseSpotActor.OnRep_HasActivatingCharactersChanged
	 */
	struct AIGPoseSpotActor_OnRep_HasActivatingCharactersChanged_Params
	{	};

	/**
	 * Function IGActorSystem.IGPoseSpotActor.OnOverlapEnd
	 */
	struct AIGPoseSpotActor_OnOverlapEnd_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPoseSpotActor.OnOverlapBegin
	 */
	struct AIGPoseSpotActor_OnOverlapBegin_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1XN7[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPoseSpotActor.OnMontageStarted
	 */
	struct AIGPoseSpotActor_OnMontageStarted_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AIGCharacter*                                        Char;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPoseSpotActor.HandlePoseSpotActorStateChanged_BP
	 */
	struct AIGPoseSpotActor_HandlePoseSpotActorStateChanged_BP_Params
	{
	public:
		EIGPoseSpotActorState                                      PreviousState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EIGPoseSpotActorState                                      NewState;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPoseSpotActor.HandleHasCharactersOnPoseSpot_BP
	 */
	struct AIGPoseSpotActor_HandleHasCharactersOnPoseSpot_BP_Params
	{
	public:
		bool                                                       HasCharactersOnPoseSpot;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPoseSpotActor.GetPoseSpotActorState
	 */
	struct AIGPoseSpotActor_GetPoseSpotActorState_Params
	{
	public:
		EIGPoseSpotActorState                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPoseSpotActor.CooldownStateOnTimerFinished
	 */
	struct AIGPoseSpotActor_CooldownStateOnTimerFinished_Params
	{	};

	/**
	 * Function IGActorSystem.IGPoseSpotActor.CompletedStateOnTimerFinished
	 */
	struct AIGPoseSpotActor_CompletedStateOnTimerFinished_Params
	{	};

	/**
	 * Function IGActorSystem.IGPoseSpotActor.ActivatedStateOnTimerFinished
	 */
	struct AIGPoseSpotActor_ActivatedStateOnTimerFinished_Params
	{	};

	/**
	 * Function IGActorSystem.IGPoseSpotActor.ActivatedStateOnMontageEnded
	 */
	struct AIGPoseSpotActor_ActivatedStateOnMontageEnded_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPoseSpotDetectComponent.OnOverlapEnd
	 */
	struct UIGPoseSpotDetectComponent_OnOverlapEnd_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPoseSpotDetectComponent.OnOverlapBegin
	 */
	struct UIGPoseSpotDetectComponent_OnOverlapBegin_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZL40[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPostProcessAnimInstance.IsUsingBlueprintPath
	 */
	struct UIGPostProcessAnimInstance_IsUsingBlueprintPath_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPostProcessAnimInstance.InitFlexySystemBP
	 */
	struct UIGPostProcessAnimInstance_InitFlexySystemBP_Params
	{	};

	/**
	 * Function IGActorSystem.IGPostProcessAnimInstance.GetSocketScale
	 */
	struct UIGPostProcessAnimInstance_GetSocketScale_Params
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPostProcessAnimInstance.GetSocketRotation
	 */
	struct UIGPostProcessAnimInstance_GetSocketRotation_Params
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPostProcessAnimInstance.GetSocketLocation
	 */
	struct UIGPostProcessAnimInstance_GetSocketLocation_Params
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPostProcessAnimInstance.FPIK_InitBP
	 */
	struct UIGPostProcessAnimInstance_FPIK_InitBP_Params
	{	};

	/**
	 * Function IGActorSystem.IGPostProcessAnimInstance.FPIK_DebugDisplayBP
	 */
	struct UIGPostProcessAnimInstance_FPIK_DebugDisplayBP_Params
	{	};

	/**
	 * Function IGActorSystem.IGPostProcessAnimInstance.Foot_Placement_TickNative
	 */
	struct UIGPostProcessAnimInstance_Foot_Placement_TickNative_Params
	{	};

	/**
	 * Function IGActorSystem.IGPostProcessAnimInstance.Foot_Placement_TickBP
	 */
	struct UIGPostProcessAnimInstance_Foot_Placement_TickBP_Params
	{	};

	/**
	 * Function IGActorSystem.IGPostProcessAnimInstance.FlexyLegCalculationNative
	 */
	struct UIGPostProcessAnimInstance_FlexyLegCalculationNative_Params
	{	};

	/**
	 * Function IGActorSystem.IGPostProcessAnimInstance.FlexyLegCalculationBP
	 */
	struct UIGPostProcessAnimInstance_FlexyLegCalculationBP_Params
	{	};

	/**
	 * Function IGActorSystem.IGPostProcessAnimInstance.FlexyArmCalculationNative
	 */
	struct UIGPostProcessAnimInstance_FlexyArmCalculationNative_Params
	{	};

	/**
	 * Function IGActorSystem.IGPostProcessAnimInstance.FlexyArmCalculationBP
	 */
	struct UIGPostProcessAnimInstance_FlexyArmCalculationBP_Params
	{	};

	/**
	 * Function IGActorSystem.IGPostProcessAnimInstance.Climbing_IK_TickNative
	 */
	struct UIGPostProcessAnimInstance_Climbing_IK_TickNative_Params
	{	};

	/**
	 * Function IGActorSystem.IGPostProcessAnimInstance.Climbing_IK_TickBP
	 */
	struct UIGPostProcessAnimInstance_Climbing_IK_TickBP_Params
	{	};

	/**
	 * Function IGActorSystem.IGPostProcessAnimInstance.CIKOnBeginClimbingBP
	 */
	struct UIGPostProcessAnimInstance_CIKOnBeginClimbingBP_Params
	{	};

	/**
	 * Function IGActorSystem.IGPostProcessAnimInstance.CIK_TraceFromLimb
	 */
	struct UIGPostProcessAnimInstance_CIK_TraceFromLimb_Params
	{
	public:
		float                                                      WallToBoneOffset;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                BoneName;                                                // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             EffectorLocation;                                        // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LocationDelta;                                           // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPostProcessAnimInstance.CIK_InitBP
	 */
	struct UIGPostProcessAnimInstance_CIK_InitBP_Params
	{	};

	/**
	 * Function IGActorSystem.IGPostProcessAnimInstance.CIK_DebugDisplayBP
	 */
	struct UIGPostProcessAnimInstance_CIK_DebugDisplayBP_Params
	{	};

	/**
	 * Function IGActorSystem.IGPostProcessAnimInstance.CIK_CalculateEffectorLocationDelta
	 */
	struct UIGPostProcessAnimInstance_CIK_CalculateEffectorLocationDelta_Params
	{
	public:
		struct FVector                                             TargetLocation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                BoneName;                                                // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LocationDelta;                                           // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGPostProcessAnimInstance.ChoreographedMoveTickBP
	 */
	struct UIGPostProcessAnimInstance_ChoreographedMoveTickBP_Params
	{	};

	/**
	 * Function IGActorSystem.IGPostProcessAnimInstance.CalculateLengthOfLimbsBP
	 */
	struct UIGPostProcessAnimInstance_CalculateLengthOfLimbsBP_Params
	{	};

	/**
	 * Function IGActorSystem.IGProjectile.TriggerDestroyVisuals
	 */
	struct AIGProjectile_TriggerDestroyVisuals_Params
	{	};

	/**
	 * Function IGActorSystem.IGProjectile.OnProjectileStop
	 */
	struct AIGProjectile_OnProjectileStop_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGProjectile.OnProjectileHit
	 */
	struct AIGProjectile_OnProjectileHit_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGProjectile.OnProjectileEndOverlap
	 */
	struct AIGProjectile_OnProjectileEndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGProjectile.OnProjectileBounce
	 */
	struct AIGProjectile_OnProjectileBounce_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             ImpactVelocity;                                          // 0x0088(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGProjectile.OnProjectileBeginOverlap
	 */
	struct AIGProjectile_OnProjectileBeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D0R0[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGProjectileData.SuggestProjectileVelocity
	 */
	struct UIGProjectileData_SuggestProjectileVelocity_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             TossVelocity;                                            // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             StartLocation;                                           // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             EndLocation;                                             // 0x0020(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESuggestProjVelocityTraceOption                            TraceOption;                                             // 0x002C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFavorHighArc;                                           // 0x002D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDrawDebug;                                              // 0x002E(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x002F(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGReadableInteractable.OnVisibilityOverlapEnd
	 */
	struct AIGReadableInteractable_OnVisibilityOverlapEnd_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGRepSystem.UpdateReps
	 */
	struct UIGRepSystem_UpdateReps_Params
	{	};

	/**
	 * Function IGActorSystem.IGRepSystem.SortRepGroupings
	 */
	struct UIGRepSystem_SortRepGroupings_Params
	{
	public:
		TArray<struct FRepGrouping>                                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGRepSystem.OnRep_RepProgressList
	 */
	struct UIGRepSystem_OnRep_RepProgressList_Params
	{	};

	/**
	 * Function IGActorSystem.IGRepSystem.OnRep_RepProgressDataVersion
	 */
	struct UIGRepSystem_OnRep_RepProgressDataVersion_Params
	{	};

	/**
	 * Function IGActorSystem.IGRepSystem.IsRepPoolDownloadComplete
	 */
	struct UIGRepSystem_IsRepPoolDownloadComplete_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGRepSystem.GetRepProgressForUI
	 */
	struct UIGRepSystem_GetRepProgressForUI_Params
	{
	public:
		TArray<struct FRepUIData>                                  OutRepUiData;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGRepSystem.DebugOnlyStopAllRepProgress
	 */
	struct UIGRepSystem_DebugOnlyStopAllRepProgress_Params
	{
	public:
		bool                                                       StopRepProgression;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGRepSystem.DebugOnlySetRepProgress
	 */
	struct UIGRepSystem_DebugOnlySetRepProgress_Params
	{
	public:
		class FName                                                RepName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ProgressValue;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGRepSystem.DebugOnlyResetAllRepProgress
	 */
	struct UIGRepSystem_DebugOnlyResetAllRepProgress_Params
	{	};

	/**
	 * Function IGActorSystem.IGRepSystem.DebugOnlyRemoveAllRepProgress
	 */
	struct UIGRepSystem_DebugOnlyRemoveAllRepProgress_Params
	{	};

	/**
	 * Function IGActorSystem.IGRepSystem.DebugOnlyDumpRepProgress
	 */
	struct UIGRepSystem_DebugOnlyDumpRepProgress_Params
	{	};

	/**
	 * Function IGActorSystem.IGRepSystem.CleanRepTrackingDataInFrontend
	 */
	struct UIGRepSystem_CleanRepTrackingDataInFrontend_Params
	{	};

	/**
	 * Function IGActorSystem.IGRewardCollectible.OnRep_MovementEnabledChanged
	 */
	struct AIGRewardCollectible_OnRep_MovementEnabledChanged_Params
	{	};

	/**
	 * Function IGActorSystem.IGRewardCollectible.OnProjectileStop
	 */
	struct AIGRewardCollectible_OnProjectileStop_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGSpecialMoveConsumable.StopLoopAnimation
	 */
	struct AIGSpecialMoveConsumable_StopLoopAnimation_Params
	{	};

	/**
	 * Function IGActorSystem.IGSpecialMoveConsumable.GetCurrentTier
	 */
	struct AIGSpecialMoveConsumable_GetCurrentTier_Params
	{
	public:
		EMoveTier                                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGSpecialMoveConsumable.GetCurrentMove
	 */
	struct AIGSpecialMoveConsumable_GetCurrentMove_Params
	{
	public:
		class UIGMoveMontage*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGSpecialMoveConsumable.ConsumeSpecialMoveConsumable
	 */
	struct AIGSpecialMoveConsumable_ConsumeSpecialMoveConsumable_Params
	{	};

	/**
	 * Function IGActorSystem.IGSpecialMoveConsumer.TakeAPerk
	 */
	struct UIGSpecialMoveConsumer_TakeAPerk_Params
	{	};

	/**
	 * Function IGActorSystem.IGSpecialMoveConsumer.StopSpecialMoveConsumableLoopAnimation
	 */
	struct UIGSpecialMoveConsumer_StopSpecialMoveConsumableLoopAnimation_Params
	{	};

	/**
	 * Function IGActorSystem.IGSpecialMoveConsumer.StopReading
	 */
	struct UIGSpecialMoveConsumer_StopReading_Params
	{	};

	/**
	 * Function IGActorSystem.IGSpecialMoveConsumer.PerformSpecialMoveEquipChoice
	 */
	struct UIGSpecialMoveConsumer_PerformSpecialMoveEquipChoice_Params
	{
	public:
		class AIGSpecialMoveConsumable*                            Magazine;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UIGMoveMontage*                                      MoveMontage;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMoveTier                                                  ExecutionTier;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction IGActorSystem.IGSpecialMoveConsumer.OnSpecialMoveConsumableConsumed__DelegateSignature
	 */
	struct UIGSpecialMoveConsumer_OnSpecialMoveConsumableConsumed__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction IGActorSystem.IGSpecialMoveConsumer.OnPerformSpecialMoveEquipChoice__DelegateSignature
	 */
	struct UIGSpecialMoveConsumer_OnPerformSpecialMoveEquipChoice__DelegateSignature_Params
	{
	public:
		class UIGMoveMontage*                                      MoveMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMoveTier                                                  ExecutionTier;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGSpecialMoveConsumer.AssignMoveToEquipToSlotTwo
	 */
	struct UIGSpecialMoveConsumer_AssignMoveToEquipToSlotTwo_Params
	{	};

	/**
	 * Function IGActorSystem.IGSpecialMoveConsumer.AssignMoveToEquipToSlotOne
	 */
	struct UIGSpecialMoveConsumer_AssignMoveToEquipToSlotOne_Params
	{	};

	/**
	 * Function IGActorSystem.IGSpectatorPawn.SetAllowMovement
	 */
	struct AIGSpectatorPawn_SetAllowMovement_Params
	{
	public:
		bool                                                       AllowMovement;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGSpectatorPawn.IsMovementAllowed
	 */
	struct AIGSpectatorPawn_IsMovementAllowed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGSpringArmComponent.SetupForPinning
	 */
	struct UIGSpringArmComponent_SetupForPinning_Params
	{
	public:
		class AIGCharacter*                                        OtherCharacter;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsPerformingPin;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGSpringArmComponent.SetupForClimbing
	 */
	struct UIGSpringArmComponent_SetupForClimbing_Params
	{
	public:
		bool                                                       bIsAttaching;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGSpringArmComponent.SetupForClash
	 */
	struct UIGSpringArmComponent_SetupForClash_Params
	{
	public:
		class AIGCharacter*                                        ClashingCharacter;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGSpringArmComponent.SetupForAttackHit
	 */
	struct UIGSpringArmComponent_SetupForAttackHit_Params
	{
	public:
		class AIGCharacter*                                        InCombatTarget;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInIsAttacker;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsSpecialMove;                                          // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsVictimStunned;                                        // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6684[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             AttackMoveDirection;                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsGrapple;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGSpringArmComponent.RotateCameraYawNoAdjustmentNative
	 */
	struct UIGSpringArmComponent_RotateCameraYawNoAdjustmentNative_Params
	{
	public:
		float                                                      RotationValue;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGSpringArmComponent.RotateCameraYawNative
	 */
	struct UIGSpringArmComponent_RotateCameraYawNative_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsKeyboardInput;                                        // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGSpringArmComponent.RotateCameraPitchNoAdjustmentNative
	 */
	struct UIGSpringArmComponent_RotateCameraPitchNoAdjustmentNative_Params
	{
	public:
		float                                                      RotationValue;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGSpringArmComponent.RotateCameraPitchNative
	 */
	struct UIGSpringArmComponent_RotateCameraPitchNative_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsKeyboardInput;                                        // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGSpringArmComponent.ResetEdgePeeking
	 */
	struct UIGSpringArmComponent_ResetEdgePeeking_Params
	{	};

	/**
	 * Function IGActorSystem.IGSpringArmComponent.HandleRotateCameraUpInput
	 */
	struct UIGSpringArmComponent_HandleRotateCameraUpInput_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGSpringArmComponent.HandleRotateCameraRightInput
	 */
	struct UIGSpringArmComponent_HandleRotateCameraRightInput_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGSpringArmComponent.HandleRotateCameraLeftInput
	 */
	struct UIGSpringArmComponent_HandleRotateCameraLeftInput_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGSpringArmComponent.HandleRotateCameraDownInput
	 */
	struct UIGSpringArmComponent_HandleRotateCameraDownInput_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGSpringArmComponent.HandleResetCameraInput
	 */
	struct UIGSpringArmComponent_HandleResetCameraInput_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGSpringArmComponent.HandleCameraTurnRaw
	 */
	struct UIGSpringArmComponent_HandleCameraTurnRaw_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0AHG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AIGCharacter*                                        OwnerCharacter;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGSpringArmComponent.HandleCameraTurn
	 */
	struct UIGSpringArmComponent_HandleCameraTurn_Params
	{
	public:
		float                                                      Rate;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TurnCurrent;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AIGCharacter*                                        OwnerCharacter;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGSpringArmComponent.HandleCameraLookUpRaw
	 */
	struct UIGSpringArmComponent_HandleCameraLookUpRaw_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QMZT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AIGCharacter*                                        OwnerCharacter;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGSpringArmComponent.HandleCameraLookUp
	 */
	struct UIGSpringArmComponent_HandleCameraLookUp_Params
	{
	public:
		float                                                      Rate;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      LookUpCurrent;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AIGCharacter*                                        OwnerCharacter;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGSpringArmComponent.GetFallDistance
	 */
	struct UIGSpringArmComponent_GetFallDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGSpringArmComponent.ExitAimingMode
	 */
	struct UIGSpringArmComponent_ExitAimingMode_Params
	{
	public:
		float                                                      InTransitionDuration;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGSpringArmComponent.EventTickComponent
	 */
	struct UIGSpringArmComponent_EventTickComponent_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGSpringArmComponent.EnterAimingMode
	 */
	struct UIGSpringArmComponent_EnterAimingMode_Params
	{
	public:
		float                                                      InTransitionDuration;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InAimingModeOffset;                                      // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGSpringArmComponent.CameraMoveInputReceived
	 */
	struct UIGSpringArmComponent_CameraMoveInputReceived_Params
	{
	public:
		float                                                      InYaw;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InPitch;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGStaticRewardCollectible.ResetTimerExpired
	 */
	struct AIGStaticRewardCollectible_ResetTimerExpired_Params
	{	};

	/**
	 * Function IGActorSystem.IGStaticRewardCollectible.OnCollectibleReset
	 */
	struct AIGStaticRewardCollectible_OnCollectibleReset_Params
	{	};

	/**
	 * Function IGActorSystem.IGStaticRandomRewardCollectible.OnRep_CurrentRepresentationComponent
	 */
	struct AIGStaticRandomRewardCollectible_OnRep_CurrentRepresentationComponent_Params
	{	};

	/**
	 * Function IGActorSystem.IGStatsSystem.ResetStatValues
	 */
	struct UIGStatsSystem_ResetStatValues_Params
	{	};

	/**
	 * DelegateFunction IGActorSystem.IGStatsSystem.OnStatsUnlockedAndSafeForReads__DelegateSignature
	 */
	struct UIGStatsSystem_OnStatsUnlockedAndSafeForReads__DelegateSignature_Params
	{	};

	/**
	 * Function IGActorSystem.IGStatsSystem.OnRep_ReplicatedStatList
	 */
	struct UIGStatsSystem_OnRep_ReplicatedStatList_Params
	{	};

	/**
	 * Function IGActorSystem.IGStatsSystem.GetAllStats
	 */
	struct UIGStatsSystem_GetAllStats_Params
	{
	public:
		TMap<class FName, float>                                   OutCurrentStats;                                         // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGStatsSystem.DumpStats
	 */
	struct UIGStatsSystem_DumpStats_Params
	{	};

	/**
	 * Function IGActorSystem.IGStatsSystem.DebugDumpStatNames
	 */
	struct UIGStatsSystem_DebugDumpStatNames_Params
	{	};

	/**
	 * Function IGActorSystem.IGSuperstarComponent.IsSuperstarModeActive
	 */
	struct UIGSuperstarComponent_IsSuperstarModeActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGUIActor.GetVFXComponent
	 */
	struct AIGUIActor_GetVFXComponent_Params
	{
	public:
		class UIGCharacterVFXComponent*                            ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGUIActor.GetSFXComponent
	 */
	struct AIGUIActor_GetSFXComponent_Params
	{
	public:
		class UIGCharacterSFXComponent*                            ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGVFXHandlerActor.HandleVictimStatusNotificationBP
	 */
	struct AIGVFXHandlerActor_HandleVictimStatusNotificationBP_Params
	{
	public:
		class AActor*                                              Attacker;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Victim;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EQueuedAttackVictimStatus                                  Status;                                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGVFXHandlerActor.HandleResetAllFallVFXBP
	 */
	struct AIGVFXHandlerActor_HandleResetAllFallVFXBP_Params
	{
	public:
		class AActor*                                              Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGVFXHandlerActor.HandleRemoteCharacterDisplaySecondsChangeVFXBP
	 */
	struct AIGVFXHandlerActor_HandleRemoteCharacterDisplaySecondsChangeVFXBP_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1MUY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AIGCharacter*                                        Target;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGVFXHandlerActor.HandlePerkRemovedNotifyVFXBP
	 */
	struct AIGVFXHandlerActor_HandlePerkRemovedNotifyVFXBP_Params
	{
	public:
		struct FIGVFXPerkNotifyInfo                                EventInfo;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGVFXHandlerActor.HandlePerkGainedNotifyVFXBP
	 */
	struct AIGVFXHandlerActor_HandlePerkGainedNotifyVFXBP_Params
	{
	public:
		struct FIGVFXPerkNotifyInfo                                EventInfo;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGVFXHandlerActor.HandlePerkDeactivateNotifyVFXBP
	 */
	struct AIGVFXHandlerActor_HandlePerkDeactivateNotifyVFXBP_Params
	{
	public:
		struct FIGVFXPerkNotifyInfo                                EventInfo;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGVFXHandlerActor.HandlePerkActivateNotifyVFXBP
	 */
	struct AIGVFXHandlerActor_HandlePerkActivateNotifyVFXBP_Params
	{
	public:
		struct FIGVFXPerkNotifyInfo                                EventInfo;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGVFXHandlerActor.HandleHitBlockNotificationBP
	 */
	struct AIGVFXHandlerActor_HandleHitBlockNotificationBP_Params
	{
	public:
		struct FIGVFXHitBlockEventInfo                             HitBlockInfo;                                            // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGVFXHandlerActor.HandleHealingNotifyVFXBP
	 */
	struct AIGVFXHandlerActor_HandleHealingNotifyVFXBP_Params
	{
	public:
		class AActor*                                              TargetHealed;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      HealedAmount;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGVFXHandlerActor.HandleFallTierNotifyVFXBP
	 */
	struct AIGVFXHandlerActor_HandleFallTierNotifyVFXBP_Params
	{
	public:
		struct FIGVFXFallTierNotifyInfo                            EventInfo;                                               // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGVFXHandlerActor.HandleFallEndNotifyVFXBP
	 */
	struct AIGVFXHandlerActor_HandleFallEndNotifyVFXBP_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIGVFXFallEndNotifyInfo                             EventInfo;                                               // 0x0008(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGVFXHandlerActor.HandleAnimNotifyVFXBP
	 */
	struct AIGVFXHandlerActor_HandleAnimNotifyVFXBP_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIGVFXAnimNotifyEventInfo                           EventInfo;                                               // 0x0008(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGVFXHandlerActor.HandleAnimNotifyStateTickVFXBP
	 */
	struct AIGVFXHandlerActor_HandleAnimNotifyStateTickVFXBP_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIGVFXAnimNotifyEventInfo                           EventInfo;                                               // 0x0008(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGVFXHandlerActor.HandleAnimNotifyStateEndVFXBP
	 */
	struct AIGVFXHandlerActor_HandleAnimNotifyStateEndVFXBP_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIGVFXAnimNotifyEventInfo                           EventInfo;                                               // 0x0008(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGVFXHandlerActor.HandleAnimNotifyStateBeginVFXBP
	 */
	struct AIGVFXHandlerActor_HandleAnimNotifyStateBeginVFXBP_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIGVFXAnimNotifyEventInfo                           EventInfo;                                               // 0x0008(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGVFXHandlerActor.GetGenericVFXHandler
	 */
	struct AIGVFXHandlerActor_GetGenericVFXHandler_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AIGVFXHandlerActor*                                  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction IGActorSystem.IGVFXPhysActor.OnActorAboutToReturnToPool__DelegateSignature
	 */
	struct AIGVFXPhysActor_OnActorAboutToReturnToPool__DelegateSignature_Params
	{	};

	/**
	 * Function IGActorSystem.IGVFXPhysActor.ImmediateDespawn
	 */
	struct AIGVFXPhysActor_ImmediateDespawn_Params
	{	};

	/**
	 * Function IGActorSystem.IGVFXPhysActor.AddImpulse
	 */
	struct AIGVFXPhysActor_AddImpulse_Params
	{
	public:
		struct FVector                                             RelativeImpulse;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGWeaponContainer.OnWeaponContainerHit_BP
	 */
	struct AIGWeaponContainer_OnWeaponContainerHit_BP_Params
	{
	public:
		bool                                                       bWasSuccessfulHit;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGActorSystem.IGWeaponContainer.NeedsKeyToReact
	 */
	struct AIGWeaponContainer_NeedsKeyToReact_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
