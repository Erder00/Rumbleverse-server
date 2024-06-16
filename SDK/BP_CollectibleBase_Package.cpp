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
	 * 		Name   -> Function BP_CollectibleBase.BP_CollectibleBase_C.SuctionAnimation__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_CollectibleBase_C::SuctionAnimation__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CollectibleBase.BP_CollectibleBase_C.SuctionAnimation__FinishedFunc");
		
		ABP_CollectibleBase_C_SuctionAnimation__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CollectibleBase.BP_CollectibleBase_C.SuctionAnimation__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_CollectibleBase_C::SuctionAnimation__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CollectibleBase.BP_CollectibleBase_C.SuctionAnimation__UpdateFunc");
		
		ABP_CollectibleBase_C_SuctionAnimation__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CollectibleBase.BP_CollectibleBase_C.OnHiddenInGameChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewHiddenInGame                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CollectibleBase_C::OnHiddenInGameChanged(bool bNewHiddenInGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CollectibleBase.BP_CollectibleBase_C.OnHiddenInGameChanged");
		
		ABP_CollectibleBase_C_OnHiddenInGameChanged_Params params {};
		params.bNewHiddenInGame = bNewHiddenInGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CollectibleBase.BP_CollectibleBase_C.OnStartVanishWarning
	 * 		Flags  -> ()
	 */
	void ABP_CollectibleBase_C::OnStartVanishWarning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CollectibleBase.BP_CollectibleBase_C.OnStartVanishWarning");
		
		ABP_CollectibleBase_C_OnStartVanishWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CollectibleBase.BP_CollectibleBase_C.OnCollected
	 * 		Flags  -> ()
	 */
	void ABP_CollectibleBase_C::OnCollected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CollectibleBase.BP_CollectibleBase_C.OnCollected");
		
		ABP_CollectibleBase_C_OnCollected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CollectibleBase.BP_CollectibleBase_C.ExecuteUbergraph_BP_CollectibleBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CollectibleBase_C::ExecuteUbergraph_BP_CollectibleBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CollectibleBase.BP_CollectibleBase_C.ExecuteUbergraph_BP_CollectibleBase");
		
		ABP_CollectibleBase_C_ExecuteUbergraph_BP_CollectibleBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CollectibleBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CollectibleBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CollectibleBase.BP_CollectibleBase_C");
		return ptr;
	}

}


