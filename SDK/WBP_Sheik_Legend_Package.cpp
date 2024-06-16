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
	 * 		Name   -> Function WBP_Sheik_Legend.WBP_Sheik_Legend_C.CreateKeyFromBindingName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        LabelOverride                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Legend_C::CreateKeyFromBindingName(const class FName& BindingName, const class FText& LabelOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Legend.WBP_Sheik_Legend_C.CreateKeyFromBindingName");
		
		UWBP_Sheik_Legend_C_CreateKeyFromBindingName_Params params {};
		params.BindingName = BindingName;
		params.LabelOverride = LabelOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Legend.WBP_Sheik_Legend_C.ClearKeys
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Legend_C::ClearKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Legend.WBP_Sheik_Legend_C.ClearKeys");
		
		UWBP_Sheik_Legend_C_ClearKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Legend.WBP_Sheik_Legend_C.CreateKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FS_Sheik_InputBindingKeyEntry               KeyEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Legend_C::CreateKey(const struct FS_Sheik_InputBindingKeyEntry& KeyEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Legend.WBP_Sheik_Legend_C.CreateKey");
		
		UWBP_Sheik_Legend_C_CreateKey_Params params {};
		params.KeyEntry = KeyEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Legend.WBP_Sheik_Legend_C.GetKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FS_Sheik_InputBindingKeyEntry>       Keys                                                       (Parm, OutParm)
	 */
	void UWBP_Sheik_Legend_C::GetKeys(TArray<struct FS_Sheik_InputBindingKeyEntry>* Keys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Legend.WBP_Sheik_Legend_C.GetKeys");
		
		UWBP_Sheik_Legend_C_GetKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Keys != nullptr)
			*Keys = params.Keys;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Legend.WBP_Sheik_Legend_C.SetKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FS_Sheik_InputBindingKeyEntry>       InputBindingKeys                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_Legend_C::SetKeys(TArray<struct FS_Sheik_InputBindingKeyEntry>* InputBindingKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Legend.WBP_Sheik_Legend_C.SetKeys");
		
		UWBP_Sheik_Legend_C_SetKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InputBindingKeys != nullptr)
			*InputBindingKeys = params.InputBindingKeys;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Legend.WBP_Sheik_Legend_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Legend_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Legend.WBP_Sheik_Legend_C.PreConstruct");
		
		UWBP_Sheik_Legend_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Legend.WBP_Sheik_Legend_C.ExecuteUbergraph_WBP_Sheik_Legend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Legend_C::ExecuteUbergraph_WBP_Sheik_Legend(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Legend.WBP_Sheik_Legend_C.ExecuteUbergraph_WBP_Sheik_Legend");
		
		UWBP_Sheik_Legend_C_ExecuteUbergraph_WBP_Sheik_Legend_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Legend_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Legend_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Legend.WBP_Sheik_Legend_C");
		return ptr;
	}

}


