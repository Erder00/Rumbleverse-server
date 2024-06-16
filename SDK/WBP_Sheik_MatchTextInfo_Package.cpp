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
	 * 		Name   -> Function WBP_Sheik_MatchTextInfo.WBP_Sheik_MatchTextInfo_C.GetIsSnowballFight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSnowballFight                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MatchTextInfo_C::GetIsSnowballFight(bool* IsSnowballFight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchTextInfo.WBP_Sheik_MatchTextInfo_C.GetIsSnowballFight");
		
		UWBP_Sheik_MatchTextInfo_C_GetIsSnowballFight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSnowballFight != nullptr)
			*IsSnowballFight = params.IsSnowballFight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchTextInfo.WBP_Sheik_MatchTextInfo_C.GetGameModeText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        GameModeType                                               (Parm, OutParm)
	 */
	void UWBP_Sheik_MatchTextInfo_C::GetGameModeText(class FText* GameModeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchTextInfo.WBP_Sheik_MatchTextInfo_C.GetGameModeText");
		
		UWBP_Sheik_MatchTextInfo_C_GetGameModeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameModeType != nullptr)
			*GameModeType = params.GameModeType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchTextInfo.WBP_Sheik_MatchTextInfo_C.UpdateMatchText
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MatchTextInfo_C::UpdateMatchText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchTextInfo.WBP_Sheik_MatchTextInfo_C.UpdateMatchText");
		
		UWBP_Sheik_MatchTextInfo_C_UpdateMatchText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchTextInfo.WBP_Sheik_MatchTextInfo_C.GetMatchText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        MatchFlowState                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        MatchText                                                  (Parm, OutParm)
	 */
	void UWBP_Sheik_MatchTextInfo_C::GetMatchText(const class FText& MatchFlowState, class FText* MatchText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchTextInfo.WBP_Sheik_MatchTextInfo_C.GetMatchText");
		
		UWBP_Sheik_MatchTextInfo_C_GetMatchText_Params params {};
		params.MatchFlowState = MatchFlowState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MatchText != nullptr)
			*MatchText = params.MatchText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchTextInfo.WBP_Sheik_MatchTextInfo_C.SetIintialMatchInfo
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MatchTextInfo_C::SetIintialMatchInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchTextInfo.WBP_Sheik_MatchTextInfo_C.SetIintialMatchInfo");
		
		UWBP_Sheik_MatchTextInfo_C_SetIintialMatchInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchTextInfo.WBP_Sheik_MatchTextInfo_C.OnGameFlowStateChanged_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGameFlowState                                     GameFlowState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MatchTextInfo_C::OnGameFlowStateChanged_cb(EGameFlowState GameFlowState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchTextInfo.WBP_Sheik_MatchTextInfo_C.OnGameFlowStateChanged_cb");
		
		UWBP_Sheik_MatchTextInfo_C_OnGameFlowStateChanged_cb_Params params {};
		params.GameFlowState = GameFlowState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchTextInfo.WBP_Sheik_MatchTextInfo_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MatchTextInfo_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchTextInfo.WBP_Sheik_MatchTextInfo_C.ConstructOnlyOnce");
		
		UWBP_Sheik_MatchTextInfo_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchTextInfo.WBP_Sheik_MatchTextInfo_C.OnRestrictedMatchHideMatchCodeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHideInviteCode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MatchTextInfo_C::OnRestrictedMatchHideMatchCodeChanged(bool bHideInviteCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchTextInfo.WBP_Sheik_MatchTextInfo_C.OnRestrictedMatchHideMatchCodeChanged");
		
		UWBP_Sheik_MatchTextInfo_C_OnRestrictedMatchHideMatchCodeChanged_Params params {};
		params.bHideInviteCode = bHideInviteCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MatchTextInfo.WBP_Sheik_MatchTextInfo_C.ExecuteUbergraph_WBP_Sheik_MatchTextInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MatchTextInfo_C::ExecuteUbergraph_WBP_Sheik_MatchTextInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MatchTextInfo.WBP_Sheik_MatchTextInfo_C.ExecuteUbergraph_WBP_Sheik_MatchTextInfo");
		
		UWBP_Sheik_MatchTextInfo_C_ExecuteUbergraph_WBP_Sheik_MatchTextInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_MatchTextInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_MatchTextInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_MatchTextInfo.WBP_Sheik_MatchTextInfo_C");
		return ptr;
	}

}


