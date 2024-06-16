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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_MatchInfo.WBP_Sheik_MatchInfo_C
	 * Size -> 0x002A (FullSize[0x0442] - InheritedSize[0x0418])
	 */
	class UWBP_Sheik_MatchInfo_C : public UIGUI_WidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          TimerTextBlock;                                          // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_RingOutTimer_C*                           WBP_Sheik_RingOutTimer;                                  // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USheikGameInfo_BP_C*                                 GameInfo;                                                // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LiveTimer;                                               // 0x0438(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LMAM[0x3];                                   // 0x0439(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimerEndGameTime;                                        // 0x043C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FirstTimeOnly;                                           // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsEventActive;                                           // 0x0441(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetTimerText(int32_t Min, int32_t sec);
		void SetForPlayer(class ASheikPlayerStateCommon* SheikPlayerState);
		void OnTimeTillFreeRoamEnd_cb(int32_t TimeTillFreeRoamEnd);
		void OnEventEnd_cb(bool bIsParticipating);
		void OnEventCountdownDisplayTimeChanged(int32_t NewDisplayTime, bool IsInEventRing, bool IsNearbyEventRing);
		void OnEventEndDisplayTimeChanged_cb(int32_t NewDisplayTime, bool IsParicipating);
		void OnEventParticipate_cb(bool IsParticipating);
		void OnEventCountdownToStart_cb(int32_t SecondsToEventStart);
		void SetIintialMatchInfo();
		void UpdateTimer();
		void OnRingStartsWaiting_cb(int32_t WaitTime);
		void OnRingStartsSkrinking_cb(float ShrinkTime);
		void OnTimeTillLaunchChanged_cb(int32_t NewTimeTillLaunch);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ConstructOnlyOnce();
		void ExecuteUbergraph_WBP_Sheik_MatchInfo(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
