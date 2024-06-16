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
	 * 		Name   -> Function WBP_Sheik_PingContainer.WBP_Sheik_PingContainer_C.GetAdvancedPingingEnabled
	 * 		Flags  -> ()
	 */
	bool UWBP_Sheik_PingContainer_C::GetAdvancedPingingEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PingContainer.WBP_Sheik_PingContainer_C.GetAdvancedPingingEnabled");
		
		UWBP_Sheik_PingContainer_C_GetAdvancedPingingEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PingContainer.WBP_Sheik_PingContainer_C.ClearAllPings
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_PingContainer_C::ClearAllPings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PingContainer.WBP_Sheik_PingContainer_C.ClearAllPings");
		
		UWBP_Sheik_PingContainer_C_ClearAllPings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PingContainer.WBP_Sheik_PingContainer_C.GetUnusedPingWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Sheik_Ping_C*                           PingWidget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_PingContainer_C::GetUnusedPingWidget(class UWBP_Sheik_Ping_C** PingWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PingContainer.WBP_Sheik_PingContainer_C.GetUnusedPingWidget");
		
		UWBP_Sheik_PingContainer_C_GetUnusedPingWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PingWidget != nullptr)
			*PingWidget = params.PingWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PingContainer.WBP_Sheik_PingContainer_C.PingExpired
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PartyMemberID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_PingContainer_C::PingExpired(int32_t PartyMemberID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PingContainer.WBP_Sheik_PingContainer_C.PingExpired");
		
		UWBP_Sheik_PingContainer_C_PingExpired_Params params {};
		params.PartyMemberID = PartyMemberID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PingContainer.WBP_Sheik_PingContainer_C.PingCreated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGPingType                                        PingType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PartyMemberID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     PingLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     PingNormal                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_PingContainer_C::PingCreated(EIGPingType PingType, int32_t PartyMemberID, const struct FVector& PingLocation, const struct FVector& PingNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PingContainer.WBP_Sheik_PingContainer_C.PingCreated");
		
		UWBP_Sheik_PingContainer_C_PingCreated_Params params {};
		params.PingType = PingType;
		params.PartyMemberID = PartyMemberID;
		params.PingLocation = PingLocation;
		params.PingNormal = PingNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PingContainer.WBP_Sheik_PingContainer_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_PingContainer_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PingContainer.WBP_Sheik_PingContainer_C.ConstructOnlyOnce");
		
		UWBP_Sheik_PingContainer_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PingContainer.WBP_Sheik_PingContainer_C.OnPlayerFollowingChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFollowingPlayer                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_PingContainer_C::OnPlayerFollowingChanged(bool IsFollowingPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PingContainer.WBP_Sheik_PingContainer_C.OnPlayerFollowingChanged");
		
		UWBP_Sheik_PingContainer_C_OnPlayerFollowingChanged_Params params {};
		params.IsFollowingPlayer = IsFollowingPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PingContainer.WBP_Sheik_PingContainer_C.ExecuteUbergraph_WBP_Sheik_PingContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_PingContainer_C::ExecuteUbergraph_WBP_Sheik_PingContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PingContainer.WBP_Sheik_PingContainer_C.ExecuteUbergraph_WBP_Sheik_PingContainer");
		
		UWBP_Sheik_PingContainer_C_ExecuteUbergraph_WBP_Sheik_PingContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_PingContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_PingContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_PingContainer.WBP_Sheik_PingContainer_C");
		return ptr;
	}

}


