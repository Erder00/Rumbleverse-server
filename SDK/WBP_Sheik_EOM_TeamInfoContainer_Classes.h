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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_EOM_TeamInfoContainer.WBP_Sheik_EOM_TeamInfoContainer_C
	 * Size -> 0x0039 (FullSize[0x0451] - InheritedSize[0x0418])
	 */
	class UWBP_Sheik_EOM_TeamInfoContainer_C : public UIGUI_WidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      TeamInfoHorizontalBox;                                   // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_EOM_TeammateInfo_C*                       WBP_Sheik_EOM_TeammateInfo;                              // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_EOM_TeammateInfo_C*                       WBP_Sheik_EOM_TeammateInfo_2;                            // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_EOM_TeammateInfo_C*                       WBP_Sheik_EOM_TeammateInfo_3;                            // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ASheikPlayerControllerCommon*                        SheikPlayerController;                                   // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASheikPlayerStateCommon*                             CurrentPlayerState;                                      // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GotPlayerPawn;                                           // 0x0450(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ClearNonTeammateInfo(TArray<class ASheikPlayerStateCommon*>* ExistingTeammateStates);
		void HandleOnTeammateLeftSever_cb(class AIGPlayerState* ExitingTeammate);
		void HandleOnTeamInfoUpdated();
		void ClearList();
		void ConstructOnlyOnce();
		void ExecuteUbergraph_WBP_Sheik_EOM_TeamInfoContainer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
