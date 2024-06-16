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
	 * BlueprintGeneratedClass BP_SheikAIManager.BP_SheikAIManager_C
	 * Size -> 0x0021 (FullSize[0x01C9] - InheritedSize[0x01A8])
	 */
	class UBP_SheikAIManager_C : public USheikAIManager
	{
	public:
		class UIGDataTable*                                        BotNamesDT;                                              // 0x01A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseBotNameDT;                                            // 0x01B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PK1I[0x3];                                   // 0x01B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumBotNamesToRetrieve;                                   // 0x01B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      BotNames;                                                // 0x01B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       SprintingEnabled;                                        // 0x01C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetSprintingEnabled(bool* SprintingEnabled);
		void GetBotName(class FString* OutName);
		void RequestNamesFromTable();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
