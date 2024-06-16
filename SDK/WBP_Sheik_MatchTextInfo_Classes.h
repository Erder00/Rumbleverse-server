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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_MatchTextInfo.WBP_Sheik_MatchTextInfo_C
	 * Size -> 0x0021 (FullSize[0x0439] - InheritedSize[0x0418])
	 */
	class UWBP_Sheik_MatchTextInfo_C : public UIGUI_WidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          MatchTypeTextBlock;                                      // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USheikGameInfo_BP_C*                                 GameInfo;                                                // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USheikMatchmakingCallbacks*                          MatchmakingCallbacks;                                    // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EGameFlowState                                             GameFlowState;                                           // 0x0438(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetIsSnowballFight(bool* IsSnowballFight);
		void GetGameModeText(class FText* GameModeType);
		void UpdateMatchText();
		void GetMatchText(const class FText& MatchFlowState, class FText* MatchText);
		void SetIintialMatchInfo();
		void OnGameFlowStateChanged_cb(EGameFlowState GameFlowState);
		void ConstructOnlyOnce();
		void OnRestrictedMatchHideMatchCodeChanged(bool bHideInviteCode);
		void ExecuteUbergraph_WBP_Sheik_MatchTextInfo(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
