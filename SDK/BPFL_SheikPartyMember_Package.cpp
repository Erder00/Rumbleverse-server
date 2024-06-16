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
	 * 		Name   -> Function BPFL_SheikPartyMember.BPFL_SheikPartyMember_C.GetColorByPartyID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PartyMemberID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateColor                                 PartySlateColor                                            (Parm, OutParm)
	 * 		struct FLinearColor                                PartyLinearColor                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_SheikPartyMember_C::GetColorByPartyID(int32_t PartyMemberID, class UObject* __WorldContext, struct FSlateColor* PartySlateColor, struct FLinearColor* PartyLinearColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_SheikPartyMember.BPFL_SheikPartyMember_C.GetColorByPartyID");
		
		UBPFL_SheikPartyMember_C_GetColorByPartyID_Params params {};
		params.PartyMemberID = PartyMemberID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PartySlateColor != nullptr)
			*PartySlateColor = params.PartySlateColor;
		if (PartyLinearColor != nullptr)
			*PartyLinearColor = params.PartyLinearColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_SheikPartyMember.BPFL_SheikPartyMember_C.FindFloatAttribute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPartyMemberInfo                            PartyMember                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      AttributeName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFound                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPFL_SheikPartyMember_C::FindFloatAttribute(const struct FPartyMemberInfo& PartyMember, const class FString& AttributeName, class UObject* __WorldContext, float* Value, bool* bFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_SheikPartyMember.BPFL_SheikPartyMember_C.FindFloatAttribute");
		
		UBPFL_SheikPartyMember_C_FindFloatAttribute_Params params {};
		params.PartyMember = PartyMember;
		params.AttributeName = AttributeName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		if (bFound != nullptr)
			*bFound = params.bFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_SheikPartyMember.BPFL_SheikPartyMember_C.ResolvePlatformImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPartyMemberInfo                            PartyMember                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 Brush                                                      (Parm, OutParm)
	 */
	void UBPFL_SheikPartyMember_C::ResolvePlatformImage(const struct FPartyMemberInfo& PartyMember, class UObject* __WorldContext, struct FSlateBrush* Brush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_SheikPartyMember.BPFL_SheikPartyMember_C.ResolvePlatformImage");
		
		UBPFL_SheikPartyMember_C_ResolvePlatformImage_Params params {};
		params.PartyMember = PartyMember;
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
	 * 		Name   -> Function BPFL_SheikPartyMember.BPFL_SheikPartyMember_C.FindStringAttribute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPartyMemberInfo                            PartyMember                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      AttributeName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Value                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bFound                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPFL_SheikPartyMember_C::FindStringAttribute(const struct FPartyMemberInfo& PartyMember, const class FString& AttributeName, class UObject* __WorldContext, class FString* Value, bool* bFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_SheikPartyMember.BPFL_SheikPartyMember_C.FindStringAttribute");
		
		UBPFL_SheikPartyMember_C_FindStringAttribute_Params params {};
		params.PartyMember = PartyMember;
		params.AttributeName = AttributeName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		if (bFound != nullptr)
			*bFound = params.bFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPFL_SheikPartyMember_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPFL_SheikPartyMember_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_SheikPartyMember.BPFL_SheikPartyMember_C");
		return ptr;
	}

}


