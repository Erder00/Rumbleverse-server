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
	 * 		Name   -> Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.HandleImageLoadFail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              FailedAssetPaths                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_ScreenCredits_C::HandleImageLoadFail(TArray<class FString>* FailedAssetPaths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.HandleImageLoadFail");
		
		UWBP_Sheik_ScreenCredits_C_HandleImageLoadFail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FailedAssetPaths != nullptr)
			*FailedAssetPaths = params.FailedAssetPaths;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.HandleImageListLoadSuccess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UObject*>                             LoadedCreditsImage                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_ScreenCredits_C::HandleImageListLoadSuccess(TArray<class UObject*>* LoadedCreditsImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.HandleImageListLoadSuccess");
		
		UWBP_Sheik_ScreenCredits_C_HandleImageListLoadSuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LoadedCreditsImage != nullptr)
			*LoadedCreditsImage = params.LoadedCreditsImage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.HandleImageLoadSuccess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     LoadedImage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenCredits_C::HandleImageLoadSuccess(class UObject* LoadedImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.HandleImageLoadSuccess");
		
		UWBP_Sheik_ScreenCredits_C_HandleImageLoadSuccess_Params params {};
		params.LoadedImage = LoadedImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.CreditsImageLoadComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenCredits_C::CreditsImageLoadComplete(class UObject* InTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.CreditsImageLoadComplete");
		
		UWBP_Sheik_ScreenCredits_C_CreditsImageLoadComplete_Params params {};
		params.InTexture = InTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.MakeCreditsImageEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InAlign                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InTopPadding                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InBottomPadding                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InScale                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenCredits_C::MakeCreditsImageEntry(EHorizontalAlignment InAlign, int32_t InTopPadding, int32_t InBottomPadding, float InScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.MakeCreditsImageEntry");
		
		UWBP_Sheik_ScreenCredits_C_MakeCreditsImageEntry_Params params {};
		params.InAlign = InAlign;
		params.InTopPadding = InTopPadding;
		params.InBottomPadding = InBottomPadding;
		params.InScale = InScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.PopulateCrawl
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenCredits_C::PopulateCrawl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.PopulateCrawl");
		
		UWBP_Sheik_ScreenCredits_C_PopulateCrawl_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.MakeCreditsTextEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InIsHeader                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InIsSubHeader                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InIsName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EHorizontalAlignment                               InAlign                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InTopPadding                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InBottomPadding                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenCredits_C::MakeCreditsTextEntry(const class FString& InText, bool InIsHeader, bool InIsSubHeader, bool InIsName, EHorizontalAlignment InAlign, int32_t InTopPadding, int32_t InBottomPadding, const struct FLinearColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.MakeCreditsTextEntry");
		
		UWBP_Sheik_ScreenCredits_C_MakeCreditsTextEntry_Params params {};
		params.InText = InText;
		params.InIsHeader = InIsHeader;
		params.InIsSubHeader = InIsSubHeader;
		params.InIsName = InIsName;
		params.InAlign = InAlign;
		params.InTopPadding = InTopPadding;
		params.InBottomPadding = InBottomPadding;
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.OnGainFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenCredits_C::OnGainFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.OnGainFocus");
		
		UWBP_Sheik_ScreenCredits_C_OnGainFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.BackEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ScreenCredits_C::BackEvent(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.BackEvent");
		
		UWBP_Sheik_ScreenCredits_C_BackEvent_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenCredits_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.Tick");
		
		UWBP_Sheik_ScreenCredits_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenCredits_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.ConstructOnlyOnce");
		
		UWBP_Sheik_ScreenCredits_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.LoadImages
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenCredits_C::LoadImages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.LoadImages");
		
		UWBP_Sheik_ScreenCredits_C_LoadImages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.LoadFirstImage
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenCredits_C::LoadFirstImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.LoadFirstImage");
		
		UWBP_Sheik_ScreenCredits_C_LoadFirstImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.ExecuteUbergraph_WBP_Sheik_ScreenCredits
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenCredits_C::ExecuteUbergraph_WBP_Sheik_ScreenCredits(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.ExecuteUbergraph_WBP_Sheik_ScreenCredits");
		
		UWBP_Sheik_ScreenCredits_C_ExecuteUbergraph_WBP_Sheik_ScreenCredits_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.OnCreditsClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenCredits_C::OnCreditsClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C.OnCreditsClosed__DelegateSignature");
		
		UWBP_Sheik_ScreenCredits_C_OnCreditsClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_ScreenCredits_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_ScreenCredits_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_ScreenCredits.WBP_Sheik_ScreenCredits_C");
		return ptr;
	}

}


