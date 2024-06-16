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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C
	 * Size -> 0x01B0 (FullSize[0x0630] - InheritedSize[0x0480])
	 */
	class UWBP_Sheik_ScreenCredits_C : public USheikScreenBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0480(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              BG;                                                      // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BGDim;                                                   // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UIGUI_ScrollableList*                                CreditsScrollableList;                                   // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Legend_C*                                 Legend;                                                  // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateFontInfo                                      HeaderStyle;                                             // 0x04A8(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FSlateFontInfo                                      SubHeaderStyle;                                          // 0x0500(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FSlateFontInfo                                      NameStyle;                                               // 0x0558(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash
		float                                                      ScrollSpeed;                                             // 0x05B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldScroll;                                            // 0x05B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N1PC[0x3];                                   // 0x05B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class UWidget*>                        AssetIdToWidgetMap;                                      // 0x05B8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       EntryLoadComplete;                                       // 0x0608(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PFC5[0x3];                                   // 0x0609(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartDelay;                                              // 0x060C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnCreditsClosed;                                         // 0x0610(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                              TexturesToLoad[0x10];                                    // 0x0620(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		void HandleImageLoadFail(TArray<class FString>* FailedAssetPaths);
		void HandleImageListLoadSuccess(TArray<class UObject*>* LoadedCreditsImage);
		void HandleImageLoadSuccess(class UObject* LoadedImage);
		void CreditsImageLoadComplete(class UObject* InTexture);
		void MakeCreditsImageEntry(EHorizontalAlignment InAlign, int32_t InTopPadding, int32_t InBottomPadding, float InScale);
		void PopulateCrawl();
		void MakeCreditsTextEntry(const class FString& InText, bool InIsHeader, bool InIsSubHeader, bool InIsName, EHorizontalAlignment InAlign, int32_t InTopPadding, int32_t InBottomPadding, const struct FLinearColor& InColor);
		void OnGainFocus(int32_t UserIndex);
		void BackEvent(const struct FInputEventData& InputEventData);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ConstructOnlyOnce();
		void LoadImages();
		void LoadFirstImage();
		void ExecuteUbergraph_WBP_Sheik_ScreenCredits(int32_t EntryPoint);
		void OnCreditsClosed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
