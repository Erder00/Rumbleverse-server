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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_PromoTag.WBP_Sheik_PromoTag_C
	 * Size -> 0x0350 (FullSize[0x0768] - InheritedSize[0x0418])
	 */
	class UWBP_Sheik_PromoTag_C : public UIGUI_WidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              PromoTagBottom;                                          // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PromoText;                                               // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Title;                                                   // 0x0430(0x0018) Edit, BlueprintVisible
		struct FSheikStoreItem                                     StoreItem;                                               // 0x0448(0x0320) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetStoreData(const struct FSheikStoreItem& StoreItem);
		void UpdateStore();
		void HideBottomWrapTexture(bool HideTexture);
		void SetTitle(const class FText& InTitle);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_Sheik_PromoTag(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
