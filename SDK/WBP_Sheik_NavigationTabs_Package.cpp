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
	 * 		Name   -> Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.UpdateTabNamesForPlatform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               RebuildTabs                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_NavigationTabs_C::UpdateTabNamesForPlatform(bool RebuildTabs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.UpdateTabNamesForPlatform");
		
		UWBP_Sheik_NavigationTabs_C_UpdateTabNamesForPlatform_Params params {};
		params.RebuildTabs = RebuildTabs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.SetTabNamesForConsole
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FText>                                InTabNamesXbox                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class FText>                                InTabNamesPlaystation                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_NavigationTabs_C::SetTabNamesForConsole(TArray<class FText>* InTabNamesXbox, TArray<class FText>* InTabNamesPlaystation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.SetTabNamesForConsole");
		
		UWBP_Sheik_NavigationTabs_C_SetTabNamesForConsole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InTabNamesXbox != nullptr)
			*InTabNamesXbox = params.InTabNamesXbox;
		if (InTabNamesPlaystation != nullptr)
			*InTabNamesPlaystation = params.InTabNamesPlaystation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.SetTabNamesForPC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FText>                                InTabNames                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_NavigationTabs_C::SetTabNamesForPC(TArray<class FText>* InTabNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.SetTabNamesForPC");
		
		UWBP_Sheik_NavigationTabs_C_SetTabNamesForPC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InTabNames != nullptr)
			*InTabNames = params.InTabNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.SetupTabs
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_NavigationTabs_C::SetupTabs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.SetupTabs");
		
		UWBP_Sheik_NavigationTabs_C_SetupTabs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_NavigationTabs_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.ConstructOnlyOnce");
		
		UWBP_Sheik_NavigationTabs_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.LeftBumperClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_NavigationTabs_C::LeftBumperClicked(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.LeftBumperClicked");
		
		UWBP_Sheik_NavigationTabs_C_LeftBumperClicked_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.RightBumperCicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_NavigationTabs_C::RightBumperCicked(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.RightBumperCicked");
		
		UWBP_Sheik_NavigationTabs_C_RightBumperCicked_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_NavigationTabs_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.PreConstruct");
		
		UWBP_Sheik_NavigationTabs_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.ExecuteUbergraph_WBP_Sheik_NavigationTabs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_NavigationTabs_C::ExecuteUbergraph_WBP_Sheik_NavigationTabs(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.ExecuteUbergraph_WBP_Sheik_NavigationTabs");
		
		UWBP_Sheik_NavigationTabs_C_ExecuteUbergraph_WBP_Sheik_NavigationTabs_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.OnTabRightSelected__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_NavigationTabs_C::OnTabRightSelected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.OnTabRightSelected__DelegateSignature");
		
		UWBP_Sheik_NavigationTabs_C_OnTabRightSelected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.OnTabLeftSelected__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_NavigationTabs_C::OnTabLeftSelected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.OnTabLeftSelected__DelegateSignature");
		
		UWBP_Sheik_NavigationTabs_C_OnTabLeftSelected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_NavigationTabs_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_NavigationTabs_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C");
		return ptr;
	}

}


