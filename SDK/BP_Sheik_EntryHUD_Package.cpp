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
	 * 		Name   -> Function BP_Sheik_EntryHUD.BP_Sheik_EntryHUD_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Sheik_EntryHUD_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sheik_EntryHUD.BP_Sheik_EntryHUD_C.ReceiveBeginPlay");
		
		ABP_Sheik_EntryHUD_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sheik_EntryHUD.BP_Sheik_EntryHUD_C.ReceiveDrawHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SizeX                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SizeY                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Sheik_EntryHUD_C::ReceiveDrawHUD(int32_t SizeX, int32_t SizeY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sheik_EntryHUD.BP_Sheik_EntryHUD_C.ReceiveDrawHUD");
		
		ABP_Sheik_EntryHUD_C_ReceiveDrawHUD_Params params {};
		params.SizeX = SizeX;
		params.SizeY = SizeY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sheik_EntryHUD.BP_Sheik_EntryHUD_C.NotifyReadyToInitialize
	 * 		Flags  -> ()
	 */
	void ABP_Sheik_EntryHUD_C::NotifyReadyToInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sheik_EntryHUD.BP_Sheik_EntryHUD_C.NotifyReadyToInitialize");
		
		ABP_Sheik_EntryHUD_C_NotifyReadyToInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sheik_EntryHUD.BP_Sheik_EntryHUD_C.ExecuteUbergraph_BP_Sheik_EntryHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Sheik_EntryHUD_C::ExecuteUbergraph_BP_Sheik_EntryHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sheik_EntryHUD.BP_Sheik_EntryHUD_C.ExecuteUbergraph_BP_Sheik_EntryHUD");
		
		ABP_Sheik_EntryHUD_C_ExecuteUbergraph_BP_Sheik_EntryHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Sheik_EntryHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Sheik_EntryHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Sheik_EntryHUD.BP_Sheik_EntryHUD_C");
		return ptr;
	}

}


