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
	 * 		Name   -> Function BP_Sheik_SpectatorWidgetComponent.BP_Sheik_SpectatorWidgetComponent_C.SetHealthbarVisibility22
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Sheik_SpectatorWidgetComponent_C::SetHealthbarVisibility22(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sheik_SpectatorWidgetComponent.BP_Sheik_SpectatorWidgetComponent_C.SetHealthbarVisibility22");
		
		UBP_Sheik_SpectatorWidgetComponent_C_SetHealthbarVisibility22_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sheik_SpectatorWidgetComponent.BP_Sheik_SpectatorWidgetComponent_C.SetWidgetShouldBeShown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Sheik_SpectatorWidgetComponent_C::SetWidgetShouldBeShown(bool NewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sheik_SpectatorWidgetComponent.BP_Sheik_SpectatorWidgetComponent_C.SetWidgetShouldBeShown");
		
		UBP_Sheik_SpectatorWidgetComponent_C_SetWidgetShouldBeShown_Params params {};
		params.NewVisibility = NewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sheik_SpectatorWidgetComponent.BP_Sheik_SpectatorWidgetComponent_C.SetForPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikPlayerStateCommon*                     SheikPlayerState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Sheik_SpectatorWidgetComponent_C::SetForPlayer(class ASheikPlayerStateCommon* SheikPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sheik_SpectatorWidgetComponent.BP_Sheik_SpectatorWidgetComponent_C.SetForPlayer");
		
		UBP_Sheik_SpectatorWidgetComponent_C_SetForPlayer_Params params {};
		params.SheikPlayerState = SheikPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sheik_SpectatorWidgetComponent.BP_Sheik_SpectatorWidgetComponent_C.UpdateRenderScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   NewScale                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Sheik_SpectatorWidgetComponent_C::UpdateRenderScale(const struct FVector2D& NewScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sheik_SpectatorWidgetComponent.BP_Sheik_SpectatorWidgetComponent_C.UpdateRenderScale");
		
		UBP_Sheik_SpectatorWidgetComponent_C_UpdateRenderScale_Params params {};
		params.NewScale = NewScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sheik_SpectatorWidgetComponent.BP_Sheik_SpectatorWidgetComponent_C.SetHealthbarVisiblity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Sheik_SpectatorWidgetComponent_C::SetHealthbarVisiblity(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sheik_SpectatorWidgetComponent.BP_Sheik_SpectatorWidgetComponent_C.SetHealthbarVisiblity");
		
		UBP_Sheik_SpectatorWidgetComponent_C_SetHealthbarVisiblity_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sheik_SpectatorWidgetComponent.BP_Sheik_SpectatorWidgetComponent_C.ExecuteUbergraph_BP_Sheik_SpectatorWidgetComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Sheik_SpectatorWidgetComponent_C::ExecuteUbergraph_BP_Sheik_SpectatorWidgetComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sheik_SpectatorWidgetComponent.BP_Sheik_SpectatorWidgetComponent_C.ExecuteUbergraph_BP_Sheik_SpectatorWidgetComponent");
		
		UBP_Sheik_SpectatorWidgetComponent_C_ExecuteUbergraph_BP_Sheik_SpectatorWidgetComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Sheik_SpectatorWidgetComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Sheik_SpectatorWidgetComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Sheik_SpectatorWidgetComponent.BP_Sheik_SpectatorWidgetComponent_C");
		return ptr;
	}

}


