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
	 * 		Name   -> Function WBP_Sheik_SpectatorPawnInfo.WBP_Sheik_SpectatorPawnInfo_C.SetScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_SpectatorPawnInfo_C::SetScale(float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SpectatorPawnInfo.WBP_Sheik_SpectatorPawnInfo_C.SetScale");
		
		UWBP_Sheik_SpectatorPawnInfo_C_SetScale_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SpectatorPawnInfo.WBP_Sheik_SpectatorPawnInfo_C.SetHealthbarVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_SpectatorPawnInfo_C::SetHealthbarVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SpectatorPawnInfo.WBP_Sheik_SpectatorPawnInfo_C.SetHealthbarVisibility");
		
		UWBP_Sheik_SpectatorPawnInfo_C_SetHealthbarVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SpectatorPawnInfo.WBP_Sheik_SpectatorPawnInfo_C.HandleSpectatorInfoUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikSpectatorInfo                         SpectatorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_SpectatorPawnInfo_C::HandleSpectatorInfoUpdated(struct FSheikSpectatorInfo* SpectatorInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SpectatorPawnInfo.WBP_Sheik_SpectatorPawnInfo_C.HandleSpectatorInfoUpdated");
		
		UWBP_Sheik_SpectatorPawnInfo_C_HandleSpectatorInfoUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpectatorInfo != nullptr)
			*SpectatorInfo = params.SpectatorInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SpectatorPawnInfo.WBP_Sheik_SpectatorPawnInfo_C.SetForPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikPlayerStateCommon*                     SheikPlayerState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_SpectatorPawnInfo_C::SetForPlayer(class ASheikPlayerStateCommon* SheikPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SpectatorPawnInfo.WBP_Sheik_SpectatorPawnInfo_C.SetForPlayer");
		
		UWBP_Sheik_SpectatorPawnInfo_C_SetForPlayer_Params params {};
		params.SheikPlayerState = SheikPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SpectatorPawnInfo.WBP_Sheik_SpectatorPawnInfo_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_SpectatorPawnInfo_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SpectatorPawnInfo.WBP_Sheik_SpectatorPawnInfo_C.ConstructOnlyOnce");
		
		UWBP_Sheik_SpectatorPawnInfo_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SpectatorPawnInfo.WBP_Sheik_SpectatorPawnInfo_C.ExecuteUbergraph_WBP_Sheik_SpectatorPawnInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_SpectatorPawnInfo_C::ExecuteUbergraph_WBP_Sheik_SpectatorPawnInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SpectatorPawnInfo.WBP_Sheik_SpectatorPawnInfo_C.ExecuteUbergraph_WBP_Sheik_SpectatorPawnInfo");
		
		UWBP_Sheik_SpectatorPawnInfo_C_ExecuteUbergraph_WBP_Sheik_SpectatorPawnInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_SpectatorPawnInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_SpectatorPawnInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_SpectatorPawnInfo.WBP_Sheik_SpectatorPawnInfo_C");
		return ptr;
	}

}


