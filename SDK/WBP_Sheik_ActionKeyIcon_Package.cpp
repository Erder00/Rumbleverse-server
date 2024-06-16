/**
 * Name: Rumbleverse
 * Version: Latest
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ActionKeyIcon.WBP_Sheik_ActionKeyIcon_C.Set Texture Sizes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InputTextureSize                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ComboTextFontSize                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ActionKeyIcon_C::SetTextureSizes(const struct FVector2D& InputTextureSize, int32_t ComboTextFontSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ActionKeyIcon.WBP_Sheik_ActionKeyIcon_C.Set Texture Sizes");
		
		UWBP_Sheik_ActionKeyIcon_C_SetTextureSizes_Params params {};
		params.InputTextureSize = InputTextureSize;
		params.ComboTextFontSize = ComboTextFontSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ActionKeyIcon.WBP_Sheik_ActionKeyIcon_C.SetIconImages
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  PrimaryTexture                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  SecondaryTexture                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ActionKeyIcon_C::SetIconImages(class UTexture2D* PrimaryTexture, class UTexture2D* SecondaryTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ActionKeyIcon.WBP_Sheik_ActionKeyIcon_C.SetIconImages");
		
		UWBP_Sheik_ActionKeyIcon_C_SetIconImages_Params params {};
		params.PrimaryTexture = PrimaryTexture;
		params.SecondaryTexture = SecondaryTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_ActionKeyIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_ActionKeyIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_ActionKeyIcon.WBP_Sheik_ActionKeyIcon_C");
		return ptr;
	}

}


