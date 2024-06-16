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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_PingContainer.WBP_Sheik_PingContainer_C
	 * Size -> 0x0078 (FullSize[0x0530] - InheritedSize[0x04B8])
	 */
	class UWBP_Sheik_PingContainer_C : public USheikWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        Canvas;                                                  // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USheikGameInfo_BP_C*                                 LocalGameInfo;                                           // 0x04C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<int32_t, class UWBP_Sheik_Ping_C*>                    ActivePings;                                             // 0x04D0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UWBP_Sheik_Ping_C*>                           InactivePings;                                           // 0x0520(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		bool GetAdvancedPingingEnabled();
		void ClearAllPings();
		void GetUnusedPingWidget(class UWBP_Sheik_Ping_C** PingWidget);
		void PingExpired(int32_t PartyMemberID);
		void PingCreated(EIGPingType PingType, int32_t PartyMemberID, const struct FVector& PingLocation, const struct FVector& PingNormal);
		void ConstructOnlyOnce();
		void OnPlayerFollowingChanged(bool IsFollowingPlayer);
		void ExecuteUbergraph_WBP_Sheik_PingContainer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
