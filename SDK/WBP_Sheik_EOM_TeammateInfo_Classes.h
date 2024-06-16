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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C
	 * Size -> 0x0068 (FullSize[0x0480] - InheritedSize[0x0418])
	 */
	class UWBP_Sheik_EOM_TeammateInfo_C : public UIGUI_WidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Backing;                                                 // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BG;                                                      // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PartyIcon;                                               // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PartyLeaderIcon;                                         // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PlatformIcon;                                            // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PlayerName;                                              // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              VoiceChatIcon;                                           // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              VoiceChatTalking;                                        // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USheikGameInfo_BP_C*                                 GameInfoBP;                                              // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              ProductIDPlayerName;                                     // 0x0468(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class ASheikPlayerStateCommon*                             PlayerStateToFollow;                                     // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnNameChanged_cb();
		void GetPartyManager(class USheikPartyManager** PartyManager);
		void HandleInfoUpdated(struct FSheikSpectatorInfo* SpectatorInfo);
		void SetForPlayer(class ASheikPlayerStateCommon* SheikPlayerState);
		void UpdatePartyIcon(bool IsInParty);
		void UpdatePlayerMuted();
		void UpdateVoiceChatSpeakingIcon(bool IsTalking);
		void OnVoiceChatMuteListChanged();
		void OnVoiceChatOptionsUpdated(bool bIsLocalVOIPEnabled, bool bIsLocalVOIPMuted, bool bIsLocalVOIPDeafened, bool bIsLocalVOIPPushToTalk);
		void OnVoiceChatPlayerTalkingUpdated(const class FString& ChannelName, const class FString& ProductUserId, bool bIsTalking, bool bIsLocalPlayer);
		void ConstructOnlyOnce();
		void ExecuteUbergraph_WBP_Sheik_EOM_TeammateInfo(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
