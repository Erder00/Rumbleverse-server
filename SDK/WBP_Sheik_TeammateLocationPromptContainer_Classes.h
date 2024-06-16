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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_TeammateLocationPromptContainer.WBP_Sheik_TeammateLocationPromptContainer_C
	 * Size -> 0x0038 (FullSize[0x0450] - InheritedSize[0x0418])
	 */
	class UWBP_Sheik_TeammateLocationPromptContainer_C : public UIGUI_WidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        Canvas;                                                  // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_TeammateLocationPrompt_C*                 WBP_Sheik_TeammateLocationPrompt;                        // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USheikGameInfo_BP_C*                                 GameInfo;                                                // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		int32_t                                                    NumLivingTeammates;                                      // 0x0438(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FEZK[0x4];                                   // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWBP_Sheik_TeammateLocationPrompt_C*>         AllTeammateLocationPrompts;                              // 0x0440(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void OnTeammateLeftServer_cb(class AIGPlayerState* ExitingTeammate);
		void OnTeammateDied_cb(class AIGPlayerState* TeammatePlayerState);
		void OnTeamInfoUpdated_cb();
		void OnGameFlowStateChanged_cb(EGameFlowState NewState);
		void AddNewTeammates();
		void ConstructOnlyOnce();
		void ExecuteUbergraph_WBP_Sheik_TeammateLocationPromptContainer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
