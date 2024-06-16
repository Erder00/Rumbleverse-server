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
	 * 		Name   -> Function Grenade_Healing_Linger_T1.Grenade_Healing_Linger_T1_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AGrenade_Healing_Linger_T1_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Grenade_Healing_Linger_T1.Grenade_Healing_Linger_T1_C.ReceiveBeginPlay");
		
		AGrenade_Healing_Linger_T1_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Grenade_Healing_Linger_T1.Grenade_Healing_Linger_T1_C.ExecuteUbergraph_Grenade_Healing_Linger_T1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGrenade_Healing_Linger_T1_C::ExecuteUbergraph_Grenade_Healing_Linger_T1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Grenade_Healing_Linger_T1.Grenade_Healing_Linger_T1_C.ExecuteUbergraph_Grenade_Healing_Linger_T1");
		
		AGrenade_Healing_Linger_T1_C_ExecuteUbergraph_Grenade_Healing_Linger_T1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGrenade_Healing_Linger_T1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGrenade_Healing_Linger_T1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Grenade_Healing_Linger_T1.Grenade_Healing_Linger_T1_C");
		return ptr;
	}

}


