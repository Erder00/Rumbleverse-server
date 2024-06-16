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
	 * 		Name   -> Function BPFL_AI_Behaviors.BPFL_AI_Behaviors_C.GetCharacterHealthPercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGCharacter*                                IGCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UBPFL_AI_Behaviors_C::GetCharacterHealthPercentage(class AIGCharacter* IGCharacter, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_AI_Behaviors.BPFL_AI_Behaviors_C.GetCharacterHealthPercentage");
		
		UBPFL_AI_Behaviors_C_GetCharacterHealthPercentage_Params params {};
		params.IGCharacter = IGCharacter;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_AI_Behaviors.BPFL_AI_Behaviors_C.GetItemCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       GameplayTagContainer                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EBotItemCategory                                   Category                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_AI_Behaviors_C::GetItemCategory(const struct FGameplayTagContainer& GameplayTagContainer, class UObject* __WorldContext, EBotItemCategory* Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_AI_Behaviors.BPFL_AI_Behaviors_C.GetItemCategory");
		
		UBPFL_AI_Behaviors_C_GetItemCategory_Params params {};
		params.GameplayTagContainer = GameplayTagContainer;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Category != nullptr)
			*Category = params.Category;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_AI_Behaviors.BPFL_AI_Behaviors_C.GetRingRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikCharacterAIController_BP_C*            AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UBPFL_AI_Behaviors_C::GetRingRadius(class ASheikCharacterAIController_BP_C* AIController, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_AI_Behaviors.BPFL_AI_Behaviors_C.GetRingRadius");
		
		UBPFL_AI_Behaviors_C_GetRingRadius_Params params {};
		params.AIController = AIController;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_AI_Behaviors.BPFL_AI_Behaviors_C.GetLowestTierStashedWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikCharacter*                             Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IncludeHandSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               WeaponFound                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EIGInventorySlot                                   InventorySlot                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMoveTier                                          Tier                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_AI_Behaviors_C::GetLowestTierStashedWeapon(class ASheikCharacter* Target, bool IncludeHandSlot, class UObject* __WorldContext, bool* WeaponFound, EIGInventorySlot* InventorySlot, EMoveTier* Tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_AI_Behaviors.BPFL_AI_Behaviors_C.GetLowestTierStashedWeapon");
		
		UBPFL_AI_Behaviors_C_GetLowestTierStashedWeapon_Params params {};
		params.Target = Target;
		params.IncludeHandSlot = IncludeHandSlot;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WeaponFound != nullptr)
			*WeaponFound = params.WeaponFound;
		if (InventorySlot != nullptr)
			*InventorySlot = params.InventorySlot;
		if (Tier != nullptr)
			*Tier = params.Tier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_AI_Behaviors.BPFL_AI_Behaviors_C.GetHighestTierStashedWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikCharacter*                             Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IncludeHandSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               WeaponFound                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EIGInventorySlot                                   InventorySlot                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMoveTier                                          Tier                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_AI_Behaviors_C::GetHighestTierStashedWeapon(class ASheikCharacter* Target, bool IncludeHandSlot, class UObject* __WorldContext, bool* WeaponFound, EIGInventorySlot* InventorySlot, EMoveTier* Tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_AI_Behaviors.BPFL_AI_Behaviors_C.GetHighestTierStashedWeapon");
		
		UBPFL_AI_Behaviors_C_GetHighestTierStashedWeapon_Params params {};
		params.Target = Target;
		params.IncludeHandSlot = IncludeHandSlot;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WeaponFound != nullptr)
			*WeaponFound = params.WeaponFound;
		if (InventorySlot != nullptr)
			*InventorySlot = params.InventorySlot;
		if (Tier != nullptr)
			*Tier = params.Tier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_AI_Behaviors.BPFL_AI_Behaviors_C.GetEmptyInventorySlotCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikCharacter*                             Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IncludeHandSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_AI_Behaviors_C::GetEmptyInventorySlotCount(class ASheikCharacter* Target, bool IncludeHandSlot, class UObject* __WorldContext, int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_AI_Behaviors.BPFL_AI_Behaviors_C.GetEmptyInventorySlotCount");
		
		UBPFL_AI_Behaviors_C_GetEmptyInventorySlotCount_Params params {};
		params.Target = Target;
		params.IncludeHandSlot = IncludeHandSlot;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_AI_Behaviors.BPFL_AI_Behaviors_C.GetOnBarge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPFL_AI_Behaviors_C::GetOnBarge(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_AI_Behaviors.BPFL_AI_Behaviors_C.GetOnBarge");
		
		UBPFL_AI_Behaviors_C_GetOnBarge_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_AI_Behaviors.BPFL_AI_Behaviors_C.GetActorsFacingEachOther
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FacingEachOther                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPFL_AI_Behaviors_C::GetActorsFacingEachOther(class AActor* A, class AActor* B, class UObject* __WorldContext, bool* FacingEachOther)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_AI_Behaviors.BPFL_AI_Behaviors_C.GetActorsFacingEachOther");
		
		UBPFL_AI_Behaviors_C_GetActorsFacingEachOther_Params params {};
		params.A = A;
		params.B = B;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FacingEachOther != nullptr)
			*FacingEachOther = params.FacingEachOther;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_AI_Behaviors.BPFL_AI_Behaviors_C.GetActorFacingTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ActorFacingTarget                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Dot                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_AI_Behaviors_C::GetActorFacingTarget(class AActor* Actor, class AActor* Target, class UObject* __WorldContext, bool* ActorFacingTarget, float* Dot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_AI_Behaviors.BPFL_AI_Behaviors_C.GetActorFacingTarget");
		
		UBPFL_AI_Behaviors_C_GetActorFacingTarget_Params params {};
		params.Actor = Actor;
		params.Target = Target;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorFacingTarget != nullptr)
			*ActorFacingTarget = params.ActorFacingTarget;
		if (Dot != nullptr)
			*Dot = params.Dot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_AI_Behaviors.BPFL_AI_Behaviors_C.SprintIfAllowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikCharacterAIController_BP_C*            AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_AI_Behaviors_C::SprintIfAllowed(class ASheikCharacterAIController_BP_C* AIController, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_AI_Behaviors.BPFL_AI_Behaviors_C.SprintIfAllowed");
		
		UBPFL_AI_Behaviors_C_SprintIfAllowed_Params params {};
		params.AIController = AIController;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPFL_AI_Behaviors_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPFL_AI_Behaviors_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_AI_Behaviors.BPFL_AI_Behaviors_C");
		return ptr;
	}

}


