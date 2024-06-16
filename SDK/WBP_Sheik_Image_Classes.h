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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_Image.WBP_Sheik_Image_C
	 * Size -> 0x00C1 (FullSize[0x04E1] - InheritedSize[0x0420])
	 */
	class UWBP_Sheik_Image_C : public USheikImage
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0420(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             ImageLoadSucceeded;                                      // 0x0428(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSlateBrush                                         Brush;                                                   // 0x0438(0x0088) Edit, BlueprintVisible
		struct FLinearColor                                        ColorAndOpacity;                                         // 0x04C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ImageLoadFailed;                                         // 0x04D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       MatchSize;                                               // 0x04E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SheikImageAsyncLoad(bool MatchSize, bool* RequestSucceeded);
		void HandleOnAssetLoadSucceeded(class UObject* LoadedObject);
		void HandleOnAssetLoadFailed(TArray<class FString>* FailedAssetPaths);
		void PreConstruct(bool IsDesignTime);
		void Destruct();
		void ExecuteUbergraph_WBP_Sheik_Image(int32_t EntryPoint);
		void ImageLoadFailed__DelegateSignature();
		void ImageLoadSucceeded__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
