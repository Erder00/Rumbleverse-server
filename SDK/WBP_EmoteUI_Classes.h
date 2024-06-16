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
	 * WidgetBlueprintGeneratedClass WBP_EmoteUI.WBP_EmoteUI_C
	 * Size -> 0x004A (FullSize[0x0462] - InheritedSize[0x0418])
	 */
	class UWBP_EmoteUI_C : public UIGUI_WidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ShowAnim;                                                // 0x0420(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWBP_EmoteUIPage_C*                                  WBP_EmoteUI_PageOne;                                     // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_EmoteUIPage_C*                                  WBP_EmoteUI_PageTwo;                                     // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_LegendKey_C*                              WBP_Sheik_LegendKey_Close;                               // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_LegendKey_C*                              WBP_Sheik_LegendKey_NextPage;                            // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class APlayerController*                                   PlayerController;                                        // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UWBP_EmoteUIPage_C*>                          EmotePages;                                              // 0x0450(0x0010) Edit, BlueprintVisible, ContainsInstancedReference
		EUISounds                                                  EmoteOpenSound;                                          // 0x0460(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EUISounds                                                  EmoteCloseSound;                                         // 0x0461(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void MuteAllSlotSounds();
		void SetPlayPageSlotSounds(class UWBP_EmoteUIPage_C* EmoteUIPage, bool inPlaySound);
		void UpdateNextButton(int32_t PageNumber);
		void WBP_EmoteUI_PopulatePagesAndSlots();
		void WBP_EmoteUI_PlayShowAnim();
		void WBP_EmoteUI_Display();
		void WBPEmoteUILoad();
		void WBP_EmoteUI_Open(bool IsOpen);
		void ConstructOnlyOnce();
		void ExecuteUbergraph_WBP_EmoteUI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
