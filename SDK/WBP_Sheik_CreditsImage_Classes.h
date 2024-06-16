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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_CreditsImage.WBP_Sheik_CreditsImage_C
	 * Size -> 0x0014 (FullSize[0x04CC] - InheritedSize[0x04B8])
	 */
	class UWBP_Sheik_CreditsImage_C : public USheikWidgetBase
	{
	public:
		class UImage*                                              DisplayImage;                                            // 0x04B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      Scale;                                                   // 0x04C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           Size;                                                    // 0x04C4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetScale(float InScale);
		void SetSize(float InWidth, float InHeight);
		void SetImage(class UTexture2D* InTexture);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
