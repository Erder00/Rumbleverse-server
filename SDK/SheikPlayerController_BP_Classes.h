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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass SheikPlayerController_BP.SheikPlayerController_BP_C
	 * Size -> 0x00A8 (FullSize[0x0DD0] - InheritedSize[0x0D28])
	 */
	class ASheikPlayerController_BP_C : public ASheikPlayerControllerCommon
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0D28(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                FrontendLevel;                                           // 0x0D30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USheikGameInfo_BP_C*                                 LocalGameInfo;                                           // 0x0D38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DefaultSkyBrightness;                                    // 0x0D40(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinSkyBrightness;                                        // 0x0D44(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinLightBrightness;                                      // 0x0D48(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JKZM[0x4];                                   // 0x0D4C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASheikGenericVFXHandler_BP_C*                        GameVFXHandler;                                          // 0x0D50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     RingoutAmbienceSFXReference;                             // 0x0D58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     RingoutTVStaticSFXReference;                             // 0x0D60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsRingoutSFXActive;                                      // 0x0D68(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsFollowingPlayer;                                       // 0x0D69(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3BZE[0x6];                                   // 0x0D6A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASheikCharacter*                                     PinAttacker;                                             // 0x0D70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASheikCharacter*                                     PinVictim;                                               // 0x0D78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PinFX_UpdateIncrement;                                   // 0x0D80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PinFX_RemoveIncrement_Lost;                              // 0x0D84(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PinFX_RemoveIncrement_Win;                               // 0x0D88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_391B[0x4];                                   // 0x0D8C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        PinningTimer;                                            // 0x0D90(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      DefaultFOV;                                              // 0x0D98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PinPostFXAmount;                                         // 0x0D9C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            PinVignettePostProcessMat;                               // 0x0DA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         PinningFoVCurve;                                         // 0x0DA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         PinningFoVCurve_Attacker_KO;                             // 0x0DB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         PinningFoVCurve_Victim_KO;                               // 0x0DB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PostProcessFadeAmount;                                   // 0x0DC0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QMMT[0x4];                                   // 0x0DC4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChar_VFXComponent_C*                                Char_VFXComponent;                                       // 0x0DC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PinFailFX();
		void PinSuccessfulFX();
		void PinIncreasePulseFX(float PulseSpeed, float ShakeScale);
		void PinPostProcessRemove_Win();
		void PinPostProcessRemove_Lost();
		void PinPostProcessUpdate();
		void PinStartShake();
		void PinStartFX();
		void PinUpdate(ESheikPinEventType EventType, class ASheikCharacter* Attacker, class ASheikCharacter* Victim);
		void GetVFXHandler(class ASheikGenericVFXHandler_BP_C** GameVFXHandler);
		void SetCameraRingOutState(bool IsCurrentlyRingedOut);
		void GatherCameraRingOutState(bool IsFollowingPlayer);
		void ReceiveTick(float DeltaSeconds);
		void ForceUserToMainMenu_BP();
		void ReceiveBeginPlay();
		void UpdateCamRingOut(bool IsOutside);
		void OnPlayerFollowingChanged(bool IsFollowingPlayer);
		void OnRoundFinished(TArray<class AIGPlayerState*> WinningPlayers, bool isLocalPlayer, bool isSpectator);
		void HandleTeammateLeftServer(class AIGPlayerState* ExitingTeammate);
		void ExecuteUbergraph_SheikPlayerController_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
