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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_Status_Effects.WBP_Sheik_Status_Effects_C
	 * Size -> 0x011C (FullSize[0x0534] - InheritedSize[0x0418])
	 */
	class UWBP_Sheik_Status_Effects_C : public UIGUI_WidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUniformGridPanel*                                   StatusFX_Grid;                                           // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_StatusSlot_C*                             WBP_Sheik_StatusSlot;                                    // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_StatusSlot_C*                             WBP_Sheik_StatusSlot_C_2;                                // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_StatusSlot_C*                             WBP_Sheik_StatusSlot_C_3;                                // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_StatusSlot_C*                             WBP_Sheik_StatusSlot_C_4;                                // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_StatusSlot_C*                             WBP_Sheik_StatusSlot_C_5;                                // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USheikGameInfo_BP_C*                                 GameInfo;                                                // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumStatus;                                               // 0x0458(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VLQX[0x4];                                   // 0x045C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWBP_Sheik_StatusSlot_C*>                     StatusSlotPool;                                          // 0x0460(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<class FName, class UWBP_Sheik_StatusSlot_C*>          StatusMap;                                               // 0x0470(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UWBP_Sheik_StatusSlot_C*>                     ActiveStatusSlots;                                       // 0x04C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		unsigned char                                              CachedStatusNames[0x50];                                 // 0x04D0(0x0050) UNKNOWN PROPERTY: SetProperty
		class ASheikPlayerStateCommon*                             CachedPlayerState;                                       // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isSpectator;                                             // 0x0528(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZDXR[0x3];                                   // 0x0529(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                WindedName;                                              // 0x052C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetForPlayer(class ASheikPlayerStateCommon* PlayerState);
		void OnSpectatorInfoChanged(struct FSheikSpectatorInfo* SpectatorInfo);
		void SetColumns();
		void UpdateStatusTimer(const struct FIGPerkHUDInfo& HUDInfo);
		void GetFreeStatusSlot(class UWBP_Sheik_StatusSlot_C** OutStatusSlot);
		void RemoveStatus(const struct FIGPerkHUDInfo& HUDInfo);
		void AddStatus(const struct FIGPerkHUDInfo& HUDInfo);
		void ConstructOnlyOnce();
		void ExecuteUbergraph_WBP_Sheik_Status_Effects(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
