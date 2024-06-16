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
	 * 		Name   -> Function BPFL_SheikPlayerAccounts.BPFL_SheikPlayerAccounts_C.PrintSocialEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikPlayerSocialEntry                     SocialEntry                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_SheikPlayerAccounts_C::PrintSocialEntry(const struct FSheikPlayerSocialEntry& SocialEntry, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_SheikPlayerAccounts.BPFL_SheikPlayerAccounts_C.PrintSocialEntry");
		
		UBPFL_SheikPlayerAccounts_C_PrintSocialEntry_Params params {};
		params.SocialEntry = SocialEntry;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_SheikPlayerAccounts.BPFL_SheikPlayerAccounts_C.GetServicePlatformImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikPlatformService                              Service                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 Brush                                                      (Parm, OutParm)
	 */
	void UBPFL_SheikPlayerAccounts_C::GetServicePlatformImage(ESheikPlatformService Service, class UObject* __WorldContext, struct FSlateBrush* Brush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_SheikPlayerAccounts.BPFL_SheikPlayerAccounts_C.GetServicePlatformImage");
		
		UBPFL_SheikPlayerAccounts_C_GetServicePlatformImage_Params params {};
		params.Service = Service;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Brush != nullptr)
			*Brush = params.Brush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPFL_SheikPlayerAccounts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPFL_SheikPlayerAccounts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_SheikPlayerAccounts.BPFL_SheikPlayerAccounts_C");
		return ptr;
	}

}


