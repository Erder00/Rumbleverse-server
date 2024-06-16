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
	 * 		Name   -> Function WBP_Sheik_PromoTag.WBP_Sheik_PromoTag_C.SetStoreData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikStoreItem                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_PromoTag_C::SetStoreData(const struct FSheikStoreItem& StoreItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PromoTag.WBP_Sheik_PromoTag_C.SetStoreData");
		
		UWBP_Sheik_PromoTag_C_SetStoreData_Params params {};
		params.StoreItem = StoreItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PromoTag.WBP_Sheik_PromoTag_C.UpdateStore
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_PromoTag_C::UpdateStore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PromoTag.WBP_Sheik_PromoTag_C.UpdateStore");
		
		UWBP_Sheik_PromoTag_C_UpdateStore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PromoTag.WBP_Sheik_PromoTag_C.HideBottomWrapTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HideTexture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_PromoTag_C::HideBottomWrapTexture(bool HideTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PromoTag.WBP_Sheik_PromoTag_C.HideBottomWrapTexture");
		
		UWBP_Sheik_PromoTag_C_HideBottomWrapTexture_Params params {};
		params.HideTexture = HideTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PromoTag.WBP_Sheik_PromoTag_C.SetTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InTitle                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_PromoTag_C::SetTitle(const class FText& InTitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PromoTag.WBP_Sheik_PromoTag_C.SetTitle");
		
		UWBP_Sheik_PromoTag_C_SetTitle_Params params {};
		params.InTitle = InTitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PromoTag.WBP_Sheik_PromoTag_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_PromoTag_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PromoTag.WBP_Sheik_PromoTag_C.PreConstruct");
		
		UWBP_Sheik_PromoTag_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PromoTag.WBP_Sheik_PromoTag_C.ExecuteUbergraph_WBP_Sheik_PromoTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_PromoTag_C::ExecuteUbergraph_WBP_Sheik_PromoTag(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PromoTag.WBP_Sheik_PromoTag_C.ExecuteUbergraph_WBP_Sheik_PromoTag");
		
		UWBP_Sheik_PromoTag_C_ExecuteUbergraph_WBP_Sheik_PromoTag_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_PromoTag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_PromoTag_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_PromoTag.WBP_Sheik_PromoTag_C");
		return ptr;
	}

}


