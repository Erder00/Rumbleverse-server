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
	 * 		Name   -> Function WBP_Sheik_DebugPlayerCoordinates.WBP_Sheik_DebugPlayerCoordinates_C.SetForPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikPlayerStateCommon*                     SpectatorPlayerState                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_DebugPlayerCoordinates_C::SetForPlayer(class ASheikPlayerStateCommon* SpectatorPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DebugPlayerCoordinates.WBP_Sheik_DebugPlayerCoordinates_C.SetForPlayer");
		
		UWBP_Sheik_DebugPlayerCoordinates_C_SetForPlayer_Params params {};
		params.SpectatorPlayerState = SpectatorPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DebugPlayerCoordinates.WBP_Sheik_DebugPlayerCoordinates_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_DebugPlayerCoordinates_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DebugPlayerCoordinates.WBP_Sheik_DebugPlayerCoordinates_C.Tick");
		
		UWBP_Sheik_DebugPlayerCoordinates_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DebugPlayerCoordinates.WBP_Sheik_DebugPlayerCoordinates_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_DebugPlayerCoordinates_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DebugPlayerCoordinates.WBP_Sheik_DebugPlayerCoordinates_C.ConstructOnlyOnce");
		
		UWBP_Sheik_DebugPlayerCoordinates_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DebugPlayerCoordinates.WBP_Sheik_DebugPlayerCoordinates_C.ExecuteUbergraph_WBP_Sheik_DebugPlayerCoordinates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_DebugPlayerCoordinates_C::ExecuteUbergraph_WBP_Sheik_DebugPlayerCoordinates(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DebugPlayerCoordinates.WBP_Sheik_DebugPlayerCoordinates_C.ExecuteUbergraph_WBP_Sheik_DebugPlayerCoordinates");
		
		UWBP_Sheik_DebugPlayerCoordinates_C_ExecuteUbergraph_WBP_Sheik_DebugPlayerCoordinates_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_DebugPlayerCoordinates_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_DebugPlayerCoordinates_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_DebugPlayerCoordinates.WBP_Sheik_DebugPlayerCoordinates_C");
		return ptr;
	}

}


