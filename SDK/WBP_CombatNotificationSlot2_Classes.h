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
	 * WidgetBlueprintGeneratedClass WBP_CombatNotificationSlot2.WBP_CombatNotificationSlot2_C
	 * Size -> 0x0070 (FullSize[0x0488] - InheritedSize[0x0418])
	 */
	class UWBP_CombatNotificationSlot2_C : public UIGUI_WidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        EnemyNotifVerticalBox;                                   // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_CombatNotification_Killstreak_C*                WBP_CombatNotification_Killstreak;                       // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_CombatNotification_OpponentDown_C*              WBP_CombatNotification_OpponentDown;                     // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_CombatNotification_OpponentDown_C*              WBP_CombatNotification_OpponentDown_2;                   // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_CombatNotification_OpponentDown_C*              WBP_CombatNotification_OpponentDown_3;                   // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_CombatNotification_TeammateDown_C*              WBP_CombatNotification_TeammateDown;                     // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USheikGameInfo_BP_C*                                 GameInfo;                                                // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		int32_t                                                    NumberOfLines;                                           // 0x0458(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WDT6[0x4];                                   // 0x045C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWBP_CombatNotification_OpponentDown_C*>      LinesWBP;                                                // 0x0460(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UObject*                                             Object;                                                  // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASheikCharacter*                                     CurrentCharacter;                                        // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class ASheikPlayerStateCommon*                             PlayerState;                                             // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnKnockedOut_cb(const struct FIGKnockOutData& KnockOutData);
		void SetCurrentCharacter(class ASheikPlayerStateCommon* PlayerState);
		void AddTextToNotifLine(const class FText& PlayerName, const class FText& PlayerStatus, EKnockoutType KnockoutType);
		void SetupEnemyNotifLines();
		void ConstructOnlyOnce();
		void ExecuteUbergraph_WBP_CombatNotificationSlot2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
