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
	 * 		Name   -> Function WBP_Sheik_Image.WBP_Sheik_Image_C.SheikImageAsyncLoad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               MatchSize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RequestSucceeded                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Image_C::SheikImageAsyncLoad(bool MatchSize, bool* RequestSucceeded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Image.WBP_Sheik_Image_C.SheikImageAsyncLoad");
		
		UWBP_Sheik_Image_C_SheikImageAsyncLoad_Params params {};
		params.MatchSize = MatchSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RequestSucceeded != nullptr)
			*RequestSucceeded = params.RequestSucceeded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Image.WBP_Sheik_Image_C.HandleOnAssetLoadSucceeded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     LoadedObject                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Image_C::HandleOnAssetLoadSucceeded(class UObject* LoadedObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Image.WBP_Sheik_Image_C.HandleOnAssetLoadSucceeded");
		
		UWBP_Sheik_Image_C_HandleOnAssetLoadSucceeded_Params params {};
		params.LoadedObject = LoadedObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Image.WBP_Sheik_Image_C.HandleOnAssetLoadFailed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              FailedAssetPaths                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_Image_C::HandleOnAssetLoadFailed(TArray<class FString>* FailedAssetPaths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Image.WBP_Sheik_Image_C.HandleOnAssetLoadFailed");
		
		UWBP_Sheik_Image_C_HandleOnAssetLoadFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FailedAssetPaths != nullptr)
			*FailedAssetPaths = params.FailedAssetPaths;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Image.WBP_Sheik_Image_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Image_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Image.WBP_Sheik_Image_C.PreConstruct");
		
		UWBP_Sheik_Image_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Image.WBP_Sheik_Image_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Image_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Image.WBP_Sheik_Image_C.Destruct");
		
		UWBP_Sheik_Image_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Image.WBP_Sheik_Image_C.ExecuteUbergraph_WBP_Sheik_Image
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Image_C::ExecuteUbergraph_WBP_Sheik_Image(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Image.WBP_Sheik_Image_C.ExecuteUbergraph_WBP_Sheik_Image");
		
		UWBP_Sheik_Image_C_ExecuteUbergraph_WBP_Sheik_Image_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Image.WBP_Sheik_Image_C.ImageLoadFailed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Image_C::ImageLoadFailed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Image.WBP_Sheik_Image_C.ImageLoadFailed__DelegateSignature");
		
		UWBP_Sheik_Image_C_ImageLoadFailed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Image.WBP_Sheik_Image_C.ImageLoadSucceeded__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Image_C::ImageLoadSucceeded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Image.WBP_Sheik_Image_C.ImageLoadSucceeded__DelegateSignature");
		
		UWBP_Sheik_Image_C_ImageLoadSucceeded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Image_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Image_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Image.WBP_Sheik_Image_C");
		return ptr;
	}

}


