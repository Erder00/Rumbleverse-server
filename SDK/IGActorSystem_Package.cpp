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
	 * 		Name   -> Function IGActorSystem.IGNotifyStateBase.UpdateMontageName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                InInstance                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGNotifyStateBase::UpdateMontageName(class UAnimMontage* InInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGNotifyStateBase.UpdateMontageName");
		
		UIGNotifyStateBase_UpdateMontageName_Params params {};
		params.InInstance = InInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGNotifyStateBase.IsRunningOnOriginalMontage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                InInstance                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGNotifyStateBase::IsRunningOnOriginalMontage(class UAnimMontage* InInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGNotifyStateBase.IsRunningOnOriginalMontage");
		
		UIGNotifyStateBase_IsRunningOnOriginalMontage_Params params {};
		params.InInstance = InInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGNotifyStateBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGNotifyStateBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGNotifyStateBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFameCombatDetectionState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFameCombatDetectionState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.FameCombatDetectionState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGAccessory.ResolveTextCultureInvariance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGContentReleaseVersion                    CurrentVersion                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UIGAccessory::ResolveTextCultureInvariance(const struct FIGContentReleaseVersion& CurrentVersion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGAccessory.ResolveTextCultureInvariance");
		
		UIGAccessory_ResolveTextCultureInvariance_Params params {};
		params.CurrentVersion = CurrentVersion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGAccessory.IsTextCultureInvarianceDirty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGContentReleaseVersion                    CurrentVersion                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UIGAccessory::IsTextCultureInvarianceDirty(const struct FIGContentReleaseVersion& CurrentVersion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGAccessory.IsTextCultureInvarianceDirty");
		
		UIGAccessory_IsTextCultureInvarianceDirty_Params params {};
		params.CurrentVersion = CurrentVersion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGAccessory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGAccessory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGAccessory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGAccessoryData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGAccessoryData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGAccessoryData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGAchievementsManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGAchievementsManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGAchievementsManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGAchievementsProgress.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGAchievementsProgress::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGAchievementsProgress");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGAchievementTypes.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGAchievementTypes::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGAchievementTypes");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGActionAllowedState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGActionAllowedState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGActionAllowedState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGActorModValueManager.ServerDebugSetModifiedFloatBaseValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BaseValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGActorModValueManager::ServerDebugSetModifiedFloatBaseValue(int32_t index, float BaseValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGActorModValueManager.ServerDebugSetModifiedFloatBaseValue");
		
		UIGActorModValueManager_ServerDebugSetModifiedFloatBaseValue_Params params {};
		params.index = index;
		params.BaseValue = BaseValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGActorModValueManager.ServerDebugRemoveStackFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TargetStat                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EIGModType                                         ModType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ModValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGActorModValueManager::ServerDebugRemoveStackFloat(int32_t TargetStat, EIGModType ModType, float ModValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGActorModValueManager.ServerDebugRemoveStackFloat");
		
		UIGActorModValueManager_ServerDebugRemoveStackFloat_Params params {};
		params.TargetStat = TargetStat;
		params.ModType = ModType;
		params.ModValue = ModValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGActorModValueManager.ServerDebugClearAllStackFloats
	 * 		Flags  -> ()
	 */
	void UIGActorModValueManager::ServerDebugClearAllStackFloats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGActorModValueManager.ServerDebugClearAllStackFloats");
		
		UIGActorModValueManager_ServerDebugClearAllStackFloats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGActorModValueManager.ServerDebugAddStackFloatTimed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TargetStat                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EIGModType                                         ModType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ModValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGActorModValueManager::ServerDebugAddStackFloatTimed(int32_t TargetStat, EIGModType ModType, float ModValue, float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGActorModValueManager.ServerDebugAddStackFloatTimed");
		
		UIGActorModValueManager_ServerDebugAddStackFloatTimed_Params params {};
		params.TargetStat = TargetStat;
		params.ModType = ModType;
		params.ModValue = ModValue;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGActorModValueManager.ServerDebugAddStackFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TargetStat                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EIGModType                                         ModType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ModValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGActorModValueManager::ServerDebugAddStackFloat(int32_t TargetStat, EIGModType ModType, float ModValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGActorModValueManager.ServerDebugAddStackFloat");
		
		UIGActorModValueManager_ServerDebugAddStackFloat_Params params {};
		params.TargetStat = TargetStat;
		params.ModType = ModType;
		params.ModValue = ModValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGActorModValueManager.OnRep_ModifiedCharacterStats
	 * 		Flags  -> ()
	 */
	void UIGActorModValueManager::OnRep_ModifiedCharacterStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGActorModValueManager.OnRep_ModifiedCharacterStats");
		
		UIGActorModValueManager_OnRep_ModifiedCharacterStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGActorModValueManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGActorModValueManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGActorModValueManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGPerkData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGPerkData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGPerkData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGActivatedPerkData.Deactivate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGActorPerkManager*                         Owner                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EPerkActivationType                                Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CurrentStackLevel                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UIGActorPerkManager*                         OtherTarget                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OverrideTriggerCondition                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGActivatedPerkData::Deactivate(class UIGActorPerkManager* Owner, EPerkActivationType Type, int32_t CurrentStackLevel, class UIGActorPerkManager* OtherTarget, bool OverrideTriggerCondition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGActivatedPerkData.Deactivate");
		
		UIGActivatedPerkData_Deactivate_Params params {};
		params.Owner = Owner;
		params.Type = Type;
		params.CurrentStackLevel = CurrentStackLevel;
		params.OtherTarget = OtherTarget;
		params.OverrideTriggerCondition = OverrideTriggerCondition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGActivatedPerkData.Activate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGActorPerkManager*                         Owner                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EPerkActivationType                                Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CurrentStackLevel                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UIGActorPerkManager*                         OtherTarget                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OverrideTriggerCondition                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGActivatedPerkData::Activate(class UIGActorPerkManager* Owner, EPerkActivationType Type, int32_t CurrentStackLevel, class UIGActorPerkManager* OtherTarget, bool OverrideTriggerCondition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGActivatedPerkData.Activate");
		
		UIGActivatedPerkData_Activate_Params params {};
		params.Owner = Owner;
		params.Type = Type;
		params.CurrentStackLevel = CurrentStackLevel;
		params.OtherTarget = OtherTarget;
		params.OverrideTriggerCondition = OverrideTriggerCondition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGActivatedPerkData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGActivatedPerkData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGActivatedPerkData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGCombinationPerkData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCombinationPerkData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGCombinationPerkData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGStackedPerkData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGStackedPerkData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGStackedPerkData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGMontagePerkData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGMontagePerkData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGMontagePerkData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGStatUpgradeMultiplierPerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGStatUpgradeMultiplierPerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGStatUpgradeMultiplierPerk");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGStaminaReductionPerkData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGStaminaReductionPerkData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGStaminaReductionPerkData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGRegenerationPerkData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGRegenerationPerkData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGRegenerationPerkData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGHealthAndStaminaConsumablePerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGHealthAndStaminaConsumablePerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGHealthAndStaminaConsumablePerk");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGStatusApplicationPerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGStatusApplicationPerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGStatusApplicationPerk");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGBurstRestorationPerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGBurstRestorationPerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGBurstRestorationPerk");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGDamageModificationPerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGDamageModificationPerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGDamageModificationPerk");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGModValuePerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGModValuePerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGModValuePerk");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGMontageOverridePerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGMontageOverridePerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGMontageOverridePerk");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGCharacterEventPerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCharacterEventPerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGCharacterEventPerk");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGInventoryModifierPerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGInventoryModifierPerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGInventoryModifierPerk");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGProjectileModifierPerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGProjectileModifierPerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGProjectileModifierPerk");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGPerkDataList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGPerkDataList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGPerkDataList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGPerkGrouping.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGPerkGrouping::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGPerkGrouping");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGPerkProfile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGPerkProfile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGPerkProfile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGActorPerkManager.ServerAddPerk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGActorPerkManager::ServerAddPerk(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGActorPerkManager.ServerAddPerk");
		
		UIGActorPerkManager_ServerAddPerk_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGActorPerkManager.OnRep_CharacterPerks
	 * 		Flags  -> ()
	 */
	void UIGActorPerkManager::OnRep_CharacterPerks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGActorPerkManager.OnRep_CharacterPerks");
		
		UIGActorPerkManager_OnRep_CharacterPerks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGActorPerkManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGActorPerkManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGActorPerkManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGActorPool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGActorPool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGActorPool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGActorSystemConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGActorSystemConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGActorSystemConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGActorSystemHUD.IsShowMoveInformationEnbabled
	 * 		Flags  -> ()
	 */
	bool AIGActorSystemHUD::IsShowMoveInformationEnbabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGActorSystemHUD.IsShowMoveInformationEnbabled");
		
		AIGActorSystemHUD_IsShowMoveInformationEnbabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGActorSystemHUD.IsShowMoveIndicatorsEnabled
	 * 		Flags  -> ()
	 */
	bool AIGActorSystemHUD::IsShowMoveIndicatorsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGActorSystemHUD.IsShowMoveIndicatorsEnabled");
		
		AIGActorSystemHUD_IsShowMoveIndicatorsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGActorSystemHUD.IsHitboxesEnabled
	 * 		Flags  -> ()
	 */
	bool AIGActorSystemHUD::IsHitboxesEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGActorSystemHUD.IsHitboxesEnabled");
		
		AIGActorSystemHUD_IsHitboxesEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGActorSystemHUD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGActorSystemHUD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGActorSystemHUD");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGActorSystemLibrary.Not_InheritsFrom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGActorSystemLibrary::Not_InheritsFrom(class UObject* A, class UClass* B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGActorSystemLibrary.Not_InheritsFrom");
		
		UIGActorSystemLibrary_Not_InheritsFrom_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGActorSystemLibrary.Not_HasAllExactTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UIGActorSystemLibrary::Not_HasAllExactTags(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGActorSystemLibrary.Not_HasAllExactTags");
		
		UIGActorSystemLibrary_Not_HasAllExactTags_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGActorSystemLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGActorSystemLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGActorSystemLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGAddGenericTransitionState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGAddGenericTransitionState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGAddGenericTransitionState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGAIController.OnTeamInfoUpdated
	 * 		Flags  -> ()
	 */
	void AIGAIController::OnTeamInfoUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGAIController.OnTeamInfoUpdated");
		
		AIGAIController_OnTeamInfoUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGAIController.OnFreeFallEnabled
	 * 		Flags  -> ()
	 */
	void AIGAIController::OnFreeFallEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGAIController.OnFreeFallEnabled");
		
		AIGAIController_OnFreeFallEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGAIController.BPOnWakeupWindowStarted
	 * 		Flags  -> ()
	 */
	void AIGAIController::BPOnWakeupWindowStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGAIController.BPOnWakeupWindowStarted");
		
		AIGAIController_BPOnWakeupWindowStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGAIController.BPOnTransitionWindowStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGMovesetData*                              TransitionData                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGAIController::BPOnTransitionWindowStarted(class UIGMovesetData* TransitionData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGAIController.BPOnTransitionWindowStarted");
		
		AIGAIController_BPOnTransitionWindowStarted_Params params {};
		params.TransitionData = TransitionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGAIController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGAIController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGAIController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGAimIndicatorState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGAimIndicatorState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGAimIndicatorState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGAllowMovementOverrideState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGAllowMovementOverrideState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGAllowMovementOverrideState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGAllowRotationOverrideState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGAllowRotationOverrideState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGAllowRotationOverrideState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGAnimGraphNotifyState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGAnimGraphNotifyState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGAnimGraphNotifyState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAOEAttackShape.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAOEAttackShape::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.AOEAttackShape");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USphereAttackShape.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USphereAttackShape::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.SphereAttackShape");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoxAttackShape.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoxAttackShape::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.BoxAttackShape");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCapsuleAttackShape.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCapsuleAttackShape::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.CapsuleAttackShape");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCylinderAttackShape.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCylinderAttackShape::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.CylinderAttackShape");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGAttackNotifyStateBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGAttackNotifyStateBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGAttackNotifyStateBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGAOEAttackTriggerState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGAOEAttackTriggerState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGAOEAttackTriggerState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGNotifyBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGNotifyBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGNotifyBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGApplyStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGApplyStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGApplyStatusEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGApproachInteractableDisplacementState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGApproachInteractableDisplacementState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGApproachInteractableDisplacementState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGRotateToInteractableState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGRotateToInteractableState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGRotateToInteractableState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGAssetDataSources.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGAssetDataSources::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGAssetDataSources");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGAttackTriggerState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGAttackTriggerState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGAttackTriggerState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGAudioHandlerActor.HandleVictimStatusNotificationBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Attacker                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Victim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EQueuedAttackVictimStatus                          Status                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGAudioHandlerActor::HandleVictimStatusNotificationBP(class AActor* Attacker, class AActor* Victim, EQueuedAttackVictimStatus Status)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGAudioHandlerActor.HandleVictimStatusNotificationBP");
		
		AIGAudioHandlerActor_HandleVictimStatusNotificationBP_Params params {};
		params.Attacker = Attacker;
		params.Victim = Victim;
		params.Status = Status;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGAudioHandlerActor.HandleResetAllFallSFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGAudioHandlerActor::HandleResetAllFallSFXBP(class AActor* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGAudioHandlerActor.HandleResetAllFallSFXBP");
		
		AIGAudioHandlerActor_HandleResetAllFallSFXBP_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGAudioHandlerActor.HandleRemoteCharacterDisplaySecondsChangeAudioBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AIGCharacter*                                Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGAudioHandlerActor::HandleRemoteCharacterDisplaySecondsChangeAudioBP(int32_t Value, class AIGCharacter* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGAudioHandlerActor.HandleRemoteCharacterDisplaySecondsChangeAudioBP");
		
		AIGAudioHandlerActor_HandleRemoteCharacterDisplaySecondsChangeAudioBP_Params params {};
		params.Value = Value;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGAudioHandlerActor.HandlePerkRemovedNotifyAudioBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGAudioPerkNotifyInfo                      EventInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGAudioHandlerActor::HandlePerkRemovedNotifyAudioBP(const struct FIGAudioPerkNotifyInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGAudioHandlerActor.HandlePerkRemovedNotifyAudioBP");
		
		AIGAudioHandlerActor_HandlePerkRemovedNotifyAudioBP_Params params {};
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGAudioHandlerActor.HandlePerkGainedNotifyAudioBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGAudioPerkNotifyInfo                      EventInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGAudioHandlerActor::HandlePerkGainedNotifyAudioBP(const struct FIGAudioPerkNotifyInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGAudioHandlerActor.HandlePerkGainedNotifyAudioBP");
		
		AIGAudioHandlerActor_HandlePerkGainedNotifyAudioBP_Params params {};
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGAudioHandlerActor.HandlePerkDeactivateNotifyAudioBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGAudioPerkNotifyInfo                      EventInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGAudioHandlerActor::HandlePerkDeactivateNotifyAudioBP(const struct FIGAudioPerkNotifyInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGAudioHandlerActor.HandlePerkDeactivateNotifyAudioBP");
		
		AIGAudioHandlerActor_HandlePerkDeactivateNotifyAudioBP_Params params {};
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGAudioHandlerActor.HandlePerkActivateNotifyAudioBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGAudioPerkNotifyInfo                      EventInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGAudioHandlerActor::HandlePerkActivateNotifyAudioBP(const struct FIGAudioPerkNotifyInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGAudioHandlerActor.HandlePerkActivateNotifyAudioBP");
		
		AIGAudioHandlerActor_HandlePerkActivateNotifyAudioBP_Params params {};
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGAudioHandlerActor.HandleHitBlockNotificationBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGAudioHitBlockEventInfo                   EventInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGAudioHandlerActor::HandleHitBlockNotificationBP(const struct FIGAudioHitBlockEventInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGAudioHandlerActor.HandleHitBlockNotificationBP");
		
		AIGAudioHandlerActor_HandleHitBlockNotificationBP_Params params {};
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGAudioHandlerActor.HandleHitAnnouncementNotificationBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGAudioHitBlockEventInfo                   EventInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGAudioHandlerActor::HandleHitAnnouncementNotificationBP(const struct FIGAudioHitBlockEventInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGAudioHandlerActor.HandleHitAnnouncementNotificationBP");
		
		AIGAudioHandlerActor_HandleHitAnnouncementNotificationBP_Params params {};
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGAudioHandlerActor.HandleFallTierNotifyAudioBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGAudioFallTierNotifyInfo                  EventInfo                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGAudioHandlerActor::HandleFallTierNotifyAudioBP(const struct FIGAudioFallTierNotifyInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGAudioHandlerActor.HandleFallTierNotifyAudioBP");
		
		AIGAudioHandlerActor_HandleFallTierNotifyAudioBP_Params params {};
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGAudioHandlerActor.HandleFallEndNotifyAudioBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIGAudioFallEndNotifyInfo                   EventInfo                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGAudioHandlerActor::HandleFallEndNotifyAudioBP(const class FName& EventName, const struct FIGAudioFallEndNotifyInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGAudioHandlerActor.HandleFallEndNotifyAudioBP");
		
		AIGAudioHandlerActor_HandleFallEndNotifyAudioBP_Params params {};
		params.EventName = EventName;
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGAudioHandlerActor.HandleAnimNotifyVoiceBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIGVoiceAnimNotifyEventInfo                 EventInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGAudioHandlerActor::HandleAnimNotifyVoiceBP(const class FName& EventName, const struct FIGVoiceAnimNotifyEventInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGAudioHandlerActor.HandleAnimNotifyVoiceBP");
		
		AIGAudioHandlerActor_HandleAnimNotifyVoiceBP_Params params {};
		params.EventName = EventName;
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGAudioHandlerActor.HandleAnimNotifyStateEndAudioBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIGAudioAnimNotifyEventInfo                 EventInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGAudioHandlerActor::HandleAnimNotifyStateEndAudioBP(const class FName& EventName, const struct FIGAudioAnimNotifyEventInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGAudioHandlerActor.HandleAnimNotifyStateEndAudioBP");
		
		AIGAudioHandlerActor_HandleAnimNotifyStateEndAudioBP_Params params {};
		params.EventName = EventName;
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGAudioHandlerActor.HandleAnimNotifyStateBeginAudioBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIGAudioAnimNotifyEventInfo                 EventInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGAudioHandlerActor::HandleAnimNotifyStateBeginAudioBP(const class FName& EventName, const struct FIGAudioAnimNotifyEventInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGAudioHandlerActor.HandleAnimNotifyStateBeginAudioBP");
		
		AIGAudioHandlerActor_HandleAnimNotifyStateBeginAudioBP_Params params {};
		params.EventName = EventName;
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGAudioHandlerActor.HandleAnimNotifyAudioBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIGAudioAnimNotifyEventInfo                 EventInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGAudioHandlerActor::HandleAnimNotifyAudioBP(const class FName& EventName, const struct FIGAudioAnimNotifyEventInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGAudioHandlerActor.HandleAnimNotifyAudioBP");
		
		AIGAudioHandlerActor_HandleAnimNotifyAudioBP_Params params {};
		params.EventName = EventName;
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGAudioHandlerActor.GetGenericAudioHandler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AIGAudioHandlerActor* AIGAudioHandlerActor::GetGenericAudioHandler(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGAudioHandlerActor.GetGenericAudioHandler");
		
		AIGAudioHandlerActor_GetGenericAudioHandler_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGAudioHandlerActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGAudioHandlerActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGAudioHandlerActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGAudioNotifyState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGAudioNotifyState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGAudioNotifyState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGAudioNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGAudioNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGAudioNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGPlayLocalAndRemoteSFX.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGPlayLocalAndRemoteSFX::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGPlayLocalAndRemoteSFX");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGVoiceNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGVoiceNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGVoiceNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGAutoChargeReleaseNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGAutoChargeReleaseNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGAutoChargeReleaseNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGBindTargetToMeshSocket.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGBindTargetToMeshSocket::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGBindTargetToMeshSocket");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGBlockDamageState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGBlockDamageState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGBlockDamageState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGBodyTypeAnimationOverrideAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGBodyTypeAnimationOverrideAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGBodyTypeAnimationOverrideAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGChangeMovementModeNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGChangeMovementModeNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGChangeMovementModeNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.WindedStateUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsWinded                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseZeroStamina                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::WindedStateUpdated(bool bIsWinded, bool bUseZeroStamina)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.WindedStateUpdated");
		
		AIGCharacter_WindedStateUpdated_Params params {};
		params.bIsWinded = bIsWinded;
		params.bUseZeroStamina = bUseZeroStamina;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.TryInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::TryInteract(class UObject* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.TryInteract");
		
		AIGCharacter_TryInteract_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.TryGetCurrentMagazineMoveInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGMoveMontage*                              OutMoveMontage                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMoveTier                                          OutMoveTier                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AIGCharacter::TryGetCurrentMagazineMoveInfo(class UIGMoveMontage** OutMoveMontage, EMoveTier* OutMoveTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.TryGetCurrentMagazineMoveInfo");
		
		AIGCharacter_TryGetCurrentMagazineMoveInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMoveMontage != nullptr)
			*OutMoveMontage = params.OutMoveMontage;
		if (OutMoveTier != nullptr)
			*OutMoveTier = params.OutMoveTier;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.StopSprintRPC
	 * 		Flags  -> ()
	 */
	void AIGCharacter::StopSprintRPC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.StopSprintRPC");
		
		AIGCharacter_StopSprintRPC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.StopServerMoveTracking
	 * 		Flags  -> ()
	 */
	void AIGCharacter::StopServerMoveTracking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.StopServerMoveTracking");
		
		AIGCharacter_StopServerMoveTracking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.StopScriptedMode
	 * 		Flags  -> ()
	 */
	void AIGCharacter::StopScriptedMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.StopScriptedMode");
		
		AIGCharacter_StopScriptedMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.StartSprintRPC
	 * 		Flags  -> ()
	 */
	void AIGCharacter::StartSprintRPC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.StartSprintRPC");
		
		AIGCharacter_StartSprintRPC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.StartServerMoveTracking
	 * 		Flags  -> ()
	 */
	void AIGCharacter::StartServerMoveTracking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.StartServerMoveTracking");
		
		AIGCharacter_StartServerMoveTracking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.SetSpecialTwo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InTier                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::SetSpecialTwo(const class FString& InName, int32_t InTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.SetSpecialTwo");
		
		AIGCharacter_SetSpecialTwo_Params params {};
		params.InName = InName;
		params.InTier = InTier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.SetSpecialOne
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InTier                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::SetSpecialOne(const class FString& InName, int32_t InTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.SetSpecialOne");
		
		AIGCharacter_SetSpecialOne_Params params {};
		params.InName = InName;
		params.InTier = InTier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.SetShouldShowDamageDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsInCombatMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::SetShouldShowDamageDebug(bool IsInCombatMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.SetShouldShowDamageDebug");
		
		AIGCharacter_SetShouldShowDamageDebug_Params params {};
		params.IsInCombatMode = IsInCombatMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.SetScriptedWaypointMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TargetTag                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::SetScriptedWaypointMode(const class FString& TargetTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.SetScriptedWaypointMode");
		
		AIGCharacter_SetScriptedWaypointMode_Params params {};
		params.TargetTag = TargetTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.SetScriptedFollowMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGCharacter*                                FollowCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::SetScriptedFollowMode(class AIGCharacter* FollowCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.SetScriptedFollowMode");
		
		AIGCharacter_SetScriptedFollowMode_Params params {};
		params.FollowCharacter = FollowCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.SetModifiedStatBaseValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGModValueType                                    ValueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BaseValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::SetModifiedStatBaseValue(EIGModValueType ValueType, float BaseValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.SetModifiedStatBaseValue");
		
		AIGCharacter_SetModifiedStatBaseValue_Params params {};
		params.ValueType = ValueType;
		params.BaseValue = BaseValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.SetIsInCombatMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsInCombatMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::SetIsInCombatMode(bool IsInCombatMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.SetIsInCombatMode");
		
		AIGCharacter_SetIsInCombatMode_Params params {};
		params.IsInCombatMode = IsInCombatMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.SetInfiniteStaminaOnAuthority
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::SetInfiniteStaminaOnAuthority(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.SetInfiniteStaminaOnAuthority");
		
		AIGCharacter_SetInfiniteStaminaOnAuthority_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.SetInfiniteStamina
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::SetInfiniteStamina(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.SetInfiniteStamina");
		
		AIGCharacter_SetInfiniteStamina_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.SetInfiniteHealthOnAuthority
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::SetInfiniteHealthOnAuthority(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.SetInfiniteHealthOnAuthority");
		
		AIGCharacter_SetInfiniteHealthOnAuthority_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.SetInfiniteHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::SetInfiniteHealth(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.SetInfiniteHealth");
		
		AIGCharacter_SetInfiniteHealth_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.SetDebugMoveTier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Tier                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::SetDebugMoveTier(int32_t Tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.SetDebugMoveTier");
		
		AIGCharacter_SetDebugMoveTier_Params params {};
		params.Tier = Tier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ServerStopSpeedingUpDownedTime
	 * 		Flags  -> ()
	 */
	void AIGCharacter::ServerStopSpeedingUpDownedTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ServerStopSpeedingUpDownedTime");
		
		AIGCharacter_ServerStopSpeedingUpDownedTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ServerStopServerMoveTracking
	 * 		Flags  -> ()
	 */
	void AIGCharacter::ServerStopServerMoveTracking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ServerStopServerMoveTracking");
		
		AIGCharacter_ServerStopServerMoveTracking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ServerStartSpeedingUpDownedTime
	 * 		Flags  -> ()
	 */
	void AIGCharacter::ServerStartSpeedingUpDownedTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ServerStartSpeedingUpDownedTime");
		
		AIGCharacter_ServerStartSpeedingUpDownedTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ServerStartServerMoveTracking
	 * 		Flags  -> ()
	 */
	void AIGCharacter::ServerStartServerMoveTracking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ServerStartServerMoveTracking");
		
		AIGCharacter_ServerStartServerMoveTracking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ServerSetMoveTier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Tier                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::ServerSetMoveTier(int32_t Tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ServerSetMoveTier");
		
		AIGCharacter_ServerSetMoveTier_Params params {};
		params.Tier = Tier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ServerSetMoveExecutionParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FServerMoveExecutionParamsMsg               ServerMoveExecutionParamsMsg                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::ServerSetMoveExecutionParams(const struct FServerMoveExecutionParamsMsg& ServerMoveExecutionParamsMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ServerSetMoveExecutionParams");
		
		AIGCharacter_ServerSetMoveExecutionParams_Params params {};
		params.ServerMoveExecutionParamsMsg = ServerMoveExecutionParamsMsg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ServerSetInfiniteStamina
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::ServerSetInfiniteStamina(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ServerSetInfiniteStamina");
		
		AIGCharacter_ServerSetInfiniteStamina_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ServerSetInfiniteHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::ServerSetInfiniteHealth(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ServerSetInfiniteHealth");
		
		AIGCharacter_ServerSetInfiniteHealth_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ServerMoveWithParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Timestamp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize10                       InAccel                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize100                      ClientLoc                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      CompressedMoveFlags                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ClientRoll                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           View                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         ClientMovementBase                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ClientBaseBoneName                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ClientMovementMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FServerMoveValidationParams                 ClientParams                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::ServerMoveWithParams(float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char CompressedMoveFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const class FName& ClientBaseBoneName, unsigned char ClientMovementMode, const struct FServerMoveValidationParams& ClientParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ServerMoveWithParams");
		
		AIGCharacter_ServerMoveWithParams_Params params {};
		params.Timestamp = Timestamp;
		params.InAccel = InAccel;
		params.ClientLoc = ClientLoc;
		params.CompressedMoveFlags = CompressedMoveFlags;
		params.ClientRoll = ClientRoll;
		params.View = View;
		params.ClientMovementBase = ClientMovementBase;
		params.ClientBaseBoneName = ClientBaseBoneName;
		params.ClientMovementMode = ClientMovementMode;
		params.ClientParams = ClientParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ServerMoveNoBaseWithParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Timestamp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize10                       InAccel                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize100                      ClientLoc                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      CompressedMoveFlags                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ClientRoll                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           View                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ClientMovementMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FServerMoveValidationParams                 ClientParams                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::ServerMoveNoBaseWithParams(float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char CompressedMoveFlags, unsigned char ClientRoll, uint32_t View, unsigned char ClientMovementMode, const struct FServerMoveValidationParams& ClientParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ServerMoveNoBaseWithParams");
		
		AIGCharacter_ServerMoveNoBaseWithParams_Params params {};
		params.Timestamp = Timestamp;
		params.InAccel = InAccel;
		params.ClientLoc = ClientLoc;
		params.CompressedMoveFlags = CompressedMoveFlags;
		params.ClientRoll = ClientRoll;
		params.View = View;
		params.ClientMovementMode = ClientMovementMode;
		params.ClientParams = ClientParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ServerMoveDualWithParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeStamp0                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize10                       InAccel0                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      PendingFlags                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           View0                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timestamp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize10                       InAccel                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize100                      ClientLoc                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NewFlags                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ClientRoll                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           View                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         ClientMovementBase                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ClientBaseBoneName                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ClientMovementMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FServerMoveValidationParams                 ClientParams                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::ServerMoveDualWithParams(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const class FName& ClientBaseBoneName, unsigned char ClientMovementMode, const struct FServerMoveValidationParams& ClientParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ServerMoveDualWithParams");
		
		AIGCharacter_ServerMoveDualWithParams_Params params {};
		params.TimeStamp0 = TimeStamp0;
		params.InAccel0 = InAccel0;
		params.PendingFlags = PendingFlags;
		params.View0 = View0;
		params.Timestamp = Timestamp;
		params.InAccel = InAccel;
		params.ClientLoc = ClientLoc;
		params.NewFlags = NewFlags;
		params.ClientRoll = ClientRoll;
		params.View = View;
		params.ClientMovementBase = ClientMovementBase;
		params.ClientBaseBoneName = ClientBaseBoneName;
		params.ClientMovementMode = ClientMovementMode;
		params.ClientParams = ClientParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ServerMoveDualNoBaseWithParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeStamp0                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize10                       InAccel0                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      PendingFlags                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           View0                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timestamp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize10                       InAccel                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize100                      ClientLoc                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NewFlags                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ClientRoll                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           View                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ClientMovementMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FServerMoveValidationParams                 ClientParams                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::ServerMoveDualNoBaseWithParams(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, unsigned char ClientMovementMode, const struct FServerMoveValidationParams& ClientParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ServerMoveDualNoBaseWithParams");
		
		AIGCharacter_ServerMoveDualNoBaseWithParams_Params params {};
		params.TimeStamp0 = TimeStamp0;
		params.InAccel0 = InAccel0;
		params.PendingFlags = PendingFlags;
		params.View0 = View0;
		params.Timestamp = Timestamp;
		params.InAccel = InAccel;
		params.ClientLoc = ClientLoc;
		params.NewFlags = NewFlags;
		params.ClientRoll = ClientRoll;
		params.View = View;
		params.ClientMovementMode = ClientMovementMode;
		params.ClientParams = ClientParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ServerMoveDualHybridRootMotionWithParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeStamp0                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize10                       InAccel0                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      PendingFlags                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           View0                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timestamp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize10                       InAccel                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize100                      ClientLoc                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NewFlags                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ClientRoll                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           View                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         ClientMovementBase                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ClientBaseBoneName                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ClientMovementMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FServerMoveValidationParams                 ClientParams                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::ServerMoveDualHybridRootMotionWithParams(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const class FName& ClientBaseBoneName, unsigned char ClientMovementMode, const struct FServerMoveValidationParams& ClientParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ServerMoveDualHybridRootMotionWithParams");
		
		AIGCharacter_ServerMoveDualHybridRootMotionWithParams_Params params {};
		params.TimeStamp0 = TimeStamp0;
		params.InAccel0 = InAccel0;
		params.PendingFlags = PendingFlags;
		params.View0 = View0;
		params.Timestamp = Timestamp;
		params.InAccel = InAccel;
		params.ClientLoc = ClientLoc;
		params.NewFlags = NewFlags;
		params.ClientRoll = ClientRoll;
		params.View = View;
		params.ClientMovementBase = ClientMovementBase;
		params.ClientBaseBoneName = ClientBaseBoneName;
		params.ClientMovementMode = ClientMovementMode;
		params.ClientParams = ClientParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ServerDumpServerMoveTracking
	 * 		Flags  -> ()
	 */
	void AIGCharacter::ServerDumpServerMoveTracking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ServerDumpServerMoveTracking");
		
		AIGCharacter_ServerDumpServerMoveTracking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ServerDebugClearStackFloatsAllPlayers
	 * 		Flags  -> ()
	 */
	void AIGCharacter::ServerDebugClearStackFloatsAllPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ServerDebugClearStackFloatsAllPlayers");
		
		AIGCharacter_ServerDebugClearStackFloatsAllPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ServerApplyLoadout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        LoadoutName                                                (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::ServerApplyLoadout(const class FName& LoadoutName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ServerApplyLoadout");
		
		AIGCharacter_ServerApplyLoadout_Params params {};
		params.LoadoutName = LoadoutName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.Respawn
	 * 		Flags  -> ()
	 */
	void AIGCharacter::Respawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.Respawn");
		
		AIGCharacter_Respawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ResetMoveTier
	 * 		Flags  -> ()
	 */
	void AIGCharacter::ResetMoveTier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ResetMoveTier");
		
		AIGCharacter_ResetMoveTier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ResetCharacterTransition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGGenericInputEvent*                        InEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AdditionalDurationMS                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::ResetCharacterTransition(class UIGGenericInputEvent* InEvent, int32_t AdditionalDurationMS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ResetCharacterTransition");
		
		AIGCharacter_ResetCharacterTransition_Params params {};
		params.InEvent = InEvent;
		params.AdditionalDurationMS = AdditionalDurationMS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.PostNetReceiveRole
	 * 		Flags  -> ()
	 */
	void AIGCharacter::PostNetReceiveRole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.PostNetReceiveRole");
		
		AIGCharacter_PostNetReceiveRole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.PocketSwap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AIGCharacter::PocketSwap(class UObject* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.PocketSwap");
		
		AIGCharacter_PocketSwap_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.PlaySoundForOwnership
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundBase*                                  Sound                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              VolumeMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PitchMultiplier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundAttenuation*                           AttenuationSettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundConcurrency*                           ConcurrencySettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OwningActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::PlaySoundForOwnership(class USoundBase* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, class AActor* OwningActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.PlaySoundForOwnership");
		
		AIGCharacter_PlaySoundForOwnership_Params params {};
		params.Sound = Sound;
		params.Location = Location;
		params.Rotation = Rotation;
		params.VolumeMultiplier = VolumeMultiplier;
		params.PitchMultiplier = PitchMultiplier;
		params.StartTime = StartTime;
		params.AttenuationSettings = AttenuationSettings;
		params.ConcurrencySettings = ConcurrencySettings;
		params.OwningActor = OwningActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.OverrideStaminaRegenValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InStaminaRegenRate                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InStaminaRegenCooldown                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::OverrideStaminaRegenValues(float InStaminaRegenRate, float InStaminaRegenCooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.OverrideStaminaRegenValues");
		
		AIGCharacter_OverrideStaminaRegenValues_Params params {};
		params.InStaminaRegenRate = InStaminaRegenRate;
		params.InStaminaRegenCooldown = InStaminaRegenCooldown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.OverrideMinStamina
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldOverride                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewMinStamina                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::OverrideMinStamina(bool bShouldOverride, float NewMinStamina)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.OverrideMinStamina");
		
		AIGCharacter_OverrideMinStamina_Params params {};
		params.bShouldOverride = bShouldOverride;
		params.NewMinStamina = NewMinStamina;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.OrientToSurface
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     surfaceNormal                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::OrientToSurface(const struct FVector& surfaceNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.OrientToSurface");
		
		AIGCharacter_OrientToSurface_Params params {};
		params.surfaceNormal = surfaceNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGCharacter.OnWinded__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StaminaPercentage                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::OnWinded__DelegateSignature(float StaminaPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGCharacter.OnWinded__DelegateSignature");
		
		AIGCharacter_OnWinded__DelegateSignature_Params params {};
		params.StaminaPercentage = StaminaPercentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGCharacter.OnSwingingMovementExited__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AIGCharacter::OnSwingingMovementExited__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGCharacter.OnSwingingMovementExited__DelegateSignature");
		
		AIGCharacter_OnSwingingMovementExited__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGCharacter.OnSwingingMovementEntered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AIGCharacter::OnSwingingMovementEntered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGCharacter.OnSwingingMovementEntered__DelegateSignature");
		
		AIGCharacter_OnSwingingMovementEntered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.OnRep_WantsToBlock
	 * 		Flags  -> ()
	 */
	void AIGCharacter::OnRep_WantsToBlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.OnRep_WantsToBlock");
		
		AIGCharacter_OnRep_WantsToBlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.OnRep_Stamina
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OldStamina                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::OnRep_Stamina(float OldStamina)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.OnRep_Stamina");
		
		AIGCharacter_OnRep_Stamina_Params params {};
		params.OldStamina = OldStamina;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.OnRep_ReplicatedTargetingInfo
	 * 		Flags  -> ()
	 */
	void AIGCharacter::OnRep_ReplicatedTargetingInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.OnRep_ReplicatedTargetingInfo");
		
		AIGCharacter_OnRep_ReplicatedTargetingInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.OnRep_ReplicatedMoveMontage
	 * 		Flags  -> ()
	 */
	void AIGCharacter::OnRep_ReplicatedMoveMontage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.OnRep_ReplicatedMoveMontage");
		
		AIGCharacter_OnRep_ReplicatedMoveMontage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.OnRep_ReplicatedFame
	 * 		Flags  -> ()
	 */
	void AIGCharacter::OnRep_ReplicatedFame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.OnRep_ReplicatedFame");
		
		AIGCharacter_OnRep_ReplicatedFame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.OnRep_MapZoneId
	 * 		Flags  -> ()
	 */
	void AIGCharacter::OnRep_MapZoneId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.OnRep_MapZoneId");
		
		AIGCharacter_OnRep_MapZoneId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.OnRep_IsSuperstarModeActive
	 * 		Flags  -> ()
	 */
	void AIGCharacter::OnRep_IsSuperstarModeActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.OnRep_IsSuperstarModeActive");
		
		AIGCharacter_OnRep_IsSuperstarModeActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.OnRep_IsInCombatMode
	 * 		Flags  -> ()
	 */
	void AIGCharacter::OnRep_IsInCombatMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.OnRep_IsInCombatMode");
		
		AIGCharacter_OnRep_IsInCombatMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.OnRep_IsDBNO
	 * 		Flags  -> ()
	 */
	void AIGCharacter::OnRep_IsDBNO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.OnRep_IsDBNO");
		
		AIGCharacter_OnRep_IsDBNO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.OnRep_IGMovementInfo
	 * 		Flags  -> ()
	 */
	void AIGCharacter::OnRep_IGMovementInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.OnRep_IGMovementInfo");
		
		AIGCharacter_OnRep_IGMovementInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.OnRep_Health
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OldHealth                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::OnRep_Health(float OldHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.OnRep_Health");
		
		AIGCharacter_OnRep_Health_Params params {};
		params.OldHealth = OldHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.OnRep_DownedTimeLeftChanged
	 * 		Flags  -> ()
	 */
	void AIGCharacter::OnRep_DownedTimeLeftChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.OnRep_DownedTimeLeftChanged");
		
		AIGCharacter_OnRep_DownedTimeLeftChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.OnRep_DownedCountChanged
	 * 		Flags  -> ()
	 */
	void AIGCharacter::OnRep_DownedCountChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.OnRep_DownedCountChanged");
		
		AIGCharacter_OnRep_DownedCountChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.OnRep_CurrentPerkXP
	 * 		Flags  -> ()
	 */
	void AIGCharacter::OnRep_CurrentPerkXP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.OnRep_CurrentPerkXP");
		
		AIGCharacter_OnRep_CurrentPerkXP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.OnRep_CurrentPerkLevel
	 * 		Flags  -> ()
	 */
	void AIGCharacter::OnRep_CurrentPerkLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.OnRep_CurrentPerkLevel");
		
		AIGCharacter_OnRep_CurrentPerkLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGCharacter.OnPerkXPChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PerkXP                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::OnPerkXPChanged__DelegateSignature(float PerkXP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGCharacter.OnPerkXPChanged__DelegateSignature");
		
		AIGCharacter_OnPerkXPChanged__DelegateSignature_Params params {};
		params.PerkXP = PerkXP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGCharacter.OnPerkLevelChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PerkLevel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::OnPerkLevelChanged__DelegateSignature(int32_t PerkLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGCharacter.OnPerkLevelChanged__DelegateSignature");
		
		AIGCharacter_OnPerkLevelChanged__DelegateSignature_Params params {};
		params.PerkLevel = PerkLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGCharacter.OnNoLongerWinded__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AIGCharacter::OnNoLongerWinded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGCharacter.OnNoLongerWinded__DelegateSignature");
		
		AIGCharacter_OnNoLongerWinded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.OnMontageEnded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInterrupted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.OnMontageEnded");
		
		AIGCharacter_OnMontageEnded_Params params {};
		params.Montage = Montage;
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.OnHitReact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGHitData*                                  ReactMove                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIGInstanceHitData                          InstanceHitData                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::OnHitReact(class UIGHitData* ReactMove, const struct FIGInstanceHitData& InstanceHitData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.OnHitReact");
		
		AIGCharacter_OnHitReact_Params params {};
		params.ReactMove = ReactMove;
		params.InstanceHitData = InstanceHitData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.OnGrabComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInterrupted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::OnGrabComplete(class UAnimMontage* Montage, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.OnGrabComplete");
		
		AIGCharacter_OnGrabComplete_Params params {};
		params.Montage = Montage;
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGCharacter.OnFreeFallMovementStart__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AIGCharacter::OnFreeFallMovementStart__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGCharacter.OnFreeFallMovementStart__DelegateSignature");
		
		AIGCharacter_OnFreeFallMovementStart__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGCharacter.OnFreeFallMovementEnd__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AIGCharacter::OnFreeFallMovementEnd__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGCharacter.OnFreeFallMovementEnd__DelegateSignature");
		
		AIGCharacter_OnFreeFallMovementEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGCharacter.OnFinisherModeChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               FinisherModeActive                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::OnFinisherModeChanged__DelegateSignature(bool FinisherModeActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGCharacter.OnFinisherModeChanged__DelegateSignature");
		
		AIGCharacter_OnFinisherModeChanged__DelegateSignature_Params params {};
		params.FinisherModeActive = FinisherModeActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGCharacter.OnFameEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FameAmount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FameMax                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FamePercentage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFameSource                                        FameSource                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::OnFameEvent__DelegateSignature(float FameAmount, float FameMax, float FamePercentage, EFameSource FameSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGCharacter.OnFameEvent__DelegateSignature");
		
		AIGCharacter_OnFameEvent__DelegateSignature_Params params {};
		params.FameAmount = FameAmount;
		params.FameMax = FameMax;
		params.FamePercentage = FamePercentage;
		params.FameSource = FameSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGCharacter.OnExitedSupertarMode__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AIGCharacter::OnExitedSupertarMode__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGCharacter.OnExitedSupertarMode__DelegateSignature");
		
		AIGCharacter_OnExitedSupertarMode__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGCharacter.OnEnteredSuperstarMode__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AIGCharacter::OnEnteredSuperstarMode__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGCharacter.OnEnteredSuperstarMode__DelegateSignature");
		
		AIGCharacter_OnEnteredSuperstarMode__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGCharacter.OnCombatModeStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsInCombatMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::OnCombatModeStateChanged__DelegateSignature(bool IsInCombatMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGCharacter.OnCombatModeStateChanged__DelegateSignature");
		
		AIGCharacter_OnCombatModeStateChanged__DelegateSignature_Params params {};
		params.IsInCombatMode = IsInCombatMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGCharacter.OnCharacterSelfDamaged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGInstanceHitData                          HitData                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::OnCharacterSelfDamaged__DelegateSignature(const struct FIGInstanceHitData& HitData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGCharacter.OnCharacterSelfDamaged__DelegateSignature");
		
		AIGCharacter_OnCharacterSelfDamaged__DelegateSignature_Params params {};
		params.HitData = HitData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGCharacter.OnCharacterRecovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGCharacter*                                RevivedCharacter                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::OnCharacterRecovered__DelegateSignature(class AIGCharacter* RevivedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGCharacter.OnCharacterRecovered__DelegateSignature");
		
		AIGCharacter_OnCharacterRecovered__DelegateSignature_Params params {};
		params.RevivedCharacter = RevivedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGCharacter.OnCharacterExitedDBNO__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGCharacter*                                Victim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::OnCharacterExitedDBNO__DelegateSignature(class AIGCharacter* Victim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGCharacter.OnCharacterExitedDBNO__DelegateSignature");
		
		AIGCharacter_OnCharacterExitedDBNO__DelegateSignature_Params params {};
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGCharacter.OnCharacterEnteredDBNO__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGCharacter*                                Victim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::OnCharacterEnteredDBNO__DelegateSignature(class AIGCharacter* Victim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGCharacter.OnCharacterEnteredDBNO__DelegateSignature");
		
		AIGCharacter_OnCharacterEnteredDBNO__DelegateSignature_Params params {};
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGCharacter.OnCharacterDowned__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGCharacter*                                Victim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::OnCharacterDowned__DelegateSignature(class AIGCharacter* Victim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGCharacter.OnCharacterDowned__DelegateSignature");
		
		AIGCharacter_OnCharacterDowned__DelegateSignature_Params params {};
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGCharacter.OnCharacterDied__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECauseOfDeath                                      Cause                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::OnCharacterDied__DelegateSignature(ECauseOfDeath Cause)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGCharacter.OnCharacterDied__DelegateSignature");
		
		AIGCharacter_OnCharacterDied__DelegateSignature_Params params {};
		params.Cause = Cause;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGCharacter.OnCharacterDangerZoneStatusChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DangerZoneStatus                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::OnCharacterDangerZoneStatusChanged__DelegateSignature(bool DangerZoneStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGCharacter.OnCharacterDangerZoneStatusChanged__DelegateSignature");
		
		AIGCharacter_OnCharacterDangerZoneStatusChanged__DelegateSignature_Params params {};
		params.DangerZoneStatus = DangerZoneStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGCharacter.OnCharacterDamaged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGInstanceHitData                          HitData                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::OnCharacterDamaged__DelegateSignature(const struct FIGInstanceHitData& HitData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGCharacter.OnCharacterDamaged__DelegateSignature");
		
		AIGCharacter_OnCharacterDamaged__DelegateSignature_Params params {};
		params.HitData = HitData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGCharacter.OnCharacterBounced__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BounceIntensity                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::OnCharacterBounced__DelegateSignature(float BounceIntensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGCharacter.OnCharacterBounced__DelegateSignature");
		
		AIGCharacter_OnCharacterBounced__DelegateSignature_Params params {};
		params.BounceIntensity = BounceIntensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGCharacter.OnCannonShotMovementStart__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AIGCharacter::OnCannonShotMovementStart__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGCharacter.OnCannonShotMovementStart__DelegateSignature");
		
		AIGCharacter_OnCannonShotMovementStart__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGCharacter.OnCannonShotMovementEnd__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AIGCharacter::OnCannonShotMovementEnd__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGCharacter.OnCannonShotMovementEnd__DelegateSignature");
		
		AIGCharacter_OnCannonShotMovementEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.OnAutoPocketComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInterrupted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::OnAutoPocketComplete(class UAnimMontage* Montage, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.OnAutoPocketComplete");
		
		AIGCharacter_OnAutoPocketComplete_Params params {};
		params.Montage = Montage;
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGCharacter.OnAttackHit__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bClashed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrushed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStaminaBreak                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUnblockable                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BaseDamage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FinalDamage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EIGClashPriorityTier                               AttackerPriority                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EIGClashPriorityTier                               VictimPriority                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::OnAttackHit__DelegateSignature(bool bClashed, bool bCrushed, bool bStaminaBreak, bool bUnblockable, float BaseDamage, float FinalDamage, EIGClashPriorityTier AttackerPriority, EIGClashPriorityTier VictimPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGCharacter.OnAttackHit__DelegateSignature");
		
		AIGCharacter_OnAttackHit__DelegateSignature_Params params {};
		params.bClashed = bClashed;
		params.bCrushed = bCrushed;
		params.bStaminaBreak = bStaminaBreak;
		params.bUnblockable = bUnblockable;
		params.BaseDamage = BaseDamage;
		params.FinalDamage = FinalDamage;
		params.AttackerPriority = AttackerPriority;
		params.VictimPriority = VictimPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.OnAttackConnect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQueuedAttack                               InQueuedAttack                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::OnAttackConnect(const struct FQueuedAttack& InQueuedAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.OnAttackConnect");
		
		AIGCharacter_OnAttackConnect_Params params {};
		params.InQueuedAttack = InQueuedAttack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGCharacter.OnAimingArcUpdated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     StartPoint                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndPoint                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartTangent                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndTangent                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ImpactNormal                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::OnAimingArcUpdated__DelegateSignature(const struct FVector& StartPoint, const struct FVector& EndPoint, const struct FVector& StartTangent, const struct FVector& EndTangent, const struct FVector& ImpactNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGCharacter.OnAimingArcUpdated__DelegateSignature");
		
		AIGCharacter_OnAimingArcUpdated__DelegateSignature_Params params {};
		params.StartPoint = StartPoint;
		params.EndPoint = EndPoint;
		params.StartTangent = StartTangent;
		params.EndTangent = EndTangent;
		params.ImpactNormal = ImpactNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.MulticastPerkRemoved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGPerkData*                                 Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::MulticastPerkRemoved(class UIGPerkData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.MulticastPerkRemoved");
		
		AIGCharacter_MulticastPerkRemoved_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.MulticastPerkDeactivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGPerkData*                                 Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::MulticastPerkDeactivated(class UIGPerkData* Data, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.MulticastPerkDeactivated");
		
		AIGCharacter_MulticastPerkDeactivated_Params params {};
		params.Data = Data;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.MulticastPerkAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGPerkData*                                 Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::MulticastPerkAdded(class UIGPerkData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.MulticastPerkAdded");
		
		AIGCharacter_MulticastPerkAdded_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.MulticastPerkActivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGPerkData*                                 Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumStacks                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::MulticastPerkActivated(class UIGPerkData* Data, int32_t NumStacks, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.MulticastPerkActivated");
		
		AIGCharacter_MulticastPerkActivated_Params params {};
		params.Data = Data;
		params.NumStacks = NumStacks;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.MulticastHealingVFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HealingAmount                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::MulticastHealingVFX(float HealingAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.MulticastHealingVFX");
		
		AIGCharacter_MulticastHealingVFX_Params params {};
		params.HealingAmount = HealingAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.MulticastDeathMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Attacker                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::MulticastDeathMessage(class AActor* Attacker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.MulticastDeathMessage");
		
		AIGCharacter_MulticastDeathMessage_Params params {};
		params.Attacker = Attacker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.MulticastDangerZoneEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewStatus                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::MulticastDangerZoneEvent(bool bNewStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.MulticastDangerZoneEvent");
		
		AIGCharacter_MulticastDangerZoneEvent_Params params {};
		params.bNewStatus = bNewStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ModifyHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::ModifyHealth(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ModifyHealth");
		
		AIGCharacter_ModifyHealth_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.IsWinded
	 * 		Flags  -> ()
	 */
	bool AIGCharacter::IsWinded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.IsWinded");
		
		AIGCharacter_IsWinded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.IsTeamLeader
	 * 		Flags  -> ()
	 */
	bool AIGCharacter::IsTeamLeader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.IsTeamLeader");
		
		AIGCharacter_IsTeamLeader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.IsSwinging
	 * 		Flags  -> ()
	 */
	bool AIGCharacter::IsSwinging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.IsSwinging");
		
		AIGCharacter_IsSwinging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.IsStaminaBoosted
	 * 		Flags  -> ()
	 */
	bool AIGCharacter::IsStaminaBoosted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.IsStaminaBoosted");
		
		AIGCharacter_IsStaminaBoosted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.IsSafeZone
	 * 		Flags  -> ()
	 */
	bool AIGCharacter::IsSafeZone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.IsSafeZone");
		
		AIGCharacter_IsSafeZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.IsPlayingTagTeamMatch
	 * 		Flags  -> ()
	 */
	bool AIGCharacter::IsPlayingTagTeamMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.IsPlayingTagTeamMatch");
		
		AIGCharacter_IsPlayingTagTeamMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.IsPlayerATeammate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGCharacter*                                PlayerCharacter                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AIGCharacter::IsPlayerATeammate(class AIGCharacter* PlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.IsPlayerATeammate");
		
		AIGCharacter_IsPlayerATeammate_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.IsPerformingPin
	 * 		Flags  -> ()
	 */
	bool AIGCharacter::IsPerformingPin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.IsPerformingPin");
		
		AIGCharacter_IsPerformingPin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.IsMeditating
	 * 		Flags  -> ()
	 */
	bool AIGCharacter::IsMeditating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.IsMeditating");
		
		AIGCharacter_IsMeditating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.IsLocalPlayerATeammate
	 * 		Flags  -> ()
	 */
	bool AIGCharacter::IsLocalPlayerATeammate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.IsLocalPlayerATeammate");
		
		AIGCharacter_IsLocalPlayerATeammate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.IsInSpecialIdleMontage
	 * 		Flags  -> ()
	 */
	bool AIGCharacter::IsInSpecialIdleMontage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.IsInSpecialIdleMontage");
		
		AIGCharacter_IsInSpecialIdleMontage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.IsInHealthDangerZone
	 * 		Flags  -> ()
	 */
	bool AIGCharacter::IsInHealthDangerZone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.IsInHealthDangerZone");
		
		AIGCharacter_IsInHealthDangerZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.IsInCombatMode
	 * 		Flags  -> ()
	 */
	bool AIGCharacter::IsInCombatMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.IsInCombatMode");
		
		AIGCharacter_IsInCombatMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.IsFalling
	 * 		Flags  -> ()
	 */
	bool AIGCharacter::IsFalling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.IsFalling");
		
		AIGCharacter_IsFalling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.IsClimbing
	 * 		Flags  -> ()
	 */
	bool AIGCharacter::IsClimbing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.IsClimbing");
		
		AIGCharacter_IsClimbing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.IsCharacterLocalOrSpectated
	 * 		Flags  -> ()
	 */
	bool AIGCharacter::IsCharacterLocalOrSpectated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.IsCharacterLocalOrSpectated");
		
		AIGCharacter_IsCharacterLocalOrSpectated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.IsCharacterDead
	 * 		Flags  -> ()
	 */
	bool AIGCharacter::IsCharacterDead()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.IsCharacterDead");
		
		AIGCharacter_IsCharacterDead_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.IsCharacterDBNO
	 * 		Flags  -> ()
	 */
	bool AIGCharacter::IsCharacterDBNO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.IsCharacterDBNO");
		
		AIGCharacter_IsCharacterDBNO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.IsBlockingStateVulnerableToOnTheGroundAttacks
	 * 		Flags  -> ()
	 */
	bool AIGCharacter::IsBlockingStateVulnerableToOnTheGroundAttacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.IsBlockingStateVulnerableToOnTheGroundAttacks");
		
		AIGCharacter_IsBlockingStateVulnerableToOnTheGroundAttacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.IsBlocking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGInteractableBase*                         Weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AIGCharacter::IsBlocking(class AIGInteractableBase* Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.IsBlocking");
		
		AIGCharacter_IsBlocking_Params params {};
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.IsBeingPinned
	 * 		Flags  -> ()
	 */
	bool AIGCharacter::IsBeingPinned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.IsBeingPinned");
		
		AIGCharacter_IsBeingPinned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.IsAttachedToSurface
	 * 		Flags  -> ()
	 */
	bool AIGCharacter::IsAttachedToSurface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.IsAttachedToSurface");
		
		AIGCharacter_IsAttachedToSurface_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.IsAiming
	 * 		Flags  -> ()
	 */
	bool AIGCharacter::IsAiming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.IsAiming");
		
		AIGCharacter_IsAiming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.IsAIControlled
	 * 		Flags  -> ()
	 */
	bool AIGCharacter::IsAIControlled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.IsAIControlled");
		
		AIGCharacter_IsAIControlled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.InvalidateLastClimbSurfaceCheck
	 * 		Flags  -> ()
	 */
	void AIGCharacter::InvalidateLastClimbSurfaceCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.InvalidateLastClimbSurfaceCheck");
		
		AIGCharacter_InvalidateLastClimbSurfaceCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.HasTarget
	 * 		Flags  -> ()
	 */
	bool AIGCharacter::HasTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.HasTarget");
		
		AIGCharacter_HasTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.HasInteractableObject
	 * 		Flags  -> ()
	 */
	bool AIGCharacter::HasInteractableObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.HasInteractableObject");
		
		AIGCharacter_HasInteractableObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.HasContextInteractable
	 * 		Flags  -> ()
	 */
	bool AIGCharacter::HasContextInteractable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.HasContextInteractable");
		
		AIGCharacter_HasContextInteractable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.HandleOnThrownItemTargetingPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGInteractablePickup*                       ThrownItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::HandleOnThrownItemTargetingPlayer(class AIGInteractablePickup* ThrownItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.HandleOnThrownItemTargetingPlayer");
		
		AIGCharacter_HandleOnThrownItemTargetingPlayer_Params params {};
		params.ThrownItem = ThrownItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.HandleOnThrownItemNoLongerTargetingPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGInteractablePickup*                       ThrownItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::HandleOnThrownItemNoLongerTargetingPlayer(class AIGInteractablePickup* ThrownItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.HandleOnThrownItemNoLongerTargetingPlayer");
		
		AIGCharacter_HandleOnThrownItemNoLongerTargetingPlayer_Params params {};
		params.ThrownItem = ThrownItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.HandleOnMoveMontageStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                MoveMontag                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AIGCharacter*                                Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::HandleOnMoveMontageStarted(class UAnimMontage* MoveMontag, class AIGCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.HandleOnMoveMontageStarted");
		
		AIGCharacter_HandleOnMoveMontageStarted_Params params {};
		params.MoveMontag = MoveMontag;
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.HandleOnMoveMontageEnded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                MoveMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInterrupted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::HandleOnMoveMontageEnded(class UAnimMontage* MoveMontage, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.HandleOnMoveMontageEnded");
		
		AIGCharacter_HandleOnMoveMontageEnded_Params params {};
		params.MoveMontage = MoveMontage;
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.HandleOnKnockoutOccurred
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGKnockOutData                             KnockOutData                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::HandleOnKnockoutOccurred(const struct FIGKnockOutData& KnockOutData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.HandleOnKnockoutOccurred");
		
		AIGCharacter_HandleOnKnockoutOccurred_Params params {};
		params.KnockOutData = KnockOutData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetVFXComponent
	 * 		Flags  -> ()
	 */
	class UIGCharacterVFXComponent* AIGCharacter::GetVFXComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetVFXComponent");
		
		AIGCharacter_GetVFXComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetTeammates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AIGPlayerState*>                      Teammates                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bFilterSelf                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::GetTeammates(TArray<class AIGPlayerState*>* Teammates, bool bFilterSelf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetTeammates");
		
		AIGCharacter_GetTeammates_Params params {};
		params.bFilterSelf = bFilterSelf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Teammates != nullptr)
			*Teammates = params.Teammates;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetTeamLeader
	 * 		Flags  -> ()
	 */
	class AIGCharacter* AIGCharacter::GetTeamLeader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetTeamLeader");
		
		AIGCharacter_GetTeamLeader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetSpecialTwoTier
	 * 		Flags  -> ()
	 */
	EMoveTier AIGCharacter::GetSpecialTwoTier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetSpecialTwoTier");
		
		AIGCharacter_GetSpecialTwoTier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetSpecialTwoName
	 * 		Flags  -> ()
	 */
	class FName AIGCharacter::GetSpecialTwoName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetSpecialTwoName");
		
		AIGCharacter_GetSpecialTwoName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetSpecialOneTier
	 * 		Flags  -> ()
	 */
	EMoveTier AIGCharacter::GetSpecialOneTier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetSpecialOneTier");
		
		AIGCharacter_GetSpecialOneTier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetSpecialOneName
	 * 		Flags  -> ()
	 */
	class FName AIGCharacter::GetSpecialOneName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetSpecialOneName");
		
		AIGCharacter_GetSpecialOneName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetSheikModMaxValue
	 * 		Flags  -> ()
	 */
	float AIGCharacter::GetSheikModMaxValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetSheikModMaxValue");
		
		AIGCharacter_GetSheikModMaxValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetSheikModCombinedMaxValue
	 * 		Flags  -> ()
	 */
	float AIGCharacter::GetSheikModCombinedMaxValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetSheikModCombinedMaxValue");
		
		AIGCharacter_GetSheikModCombinedMaxValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetSFXComponent
	 * 		Flags  -> ()
	 */
	class UIGCharacterSFXComponent* AIGCharacter::GetSFXComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetSFXComponent");
		
		AIGCharacter_GetSFXComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetScriptedComponent
	 * 		Flags  -> ()
	 */
	class UIGScriptedActorComponent* AIGCharacter::GetScriptedComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetScriptedComponent");
		
		AIGCharacter_GetScriptedComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetModifiedStatValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGModValueType                                    ValueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AIGCharacter::GetModifiedStatValue(EIGModValueType ValueType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetModifiedStatValue");
		
		AIGCharacter_GetModifiedStatValue_Params params {};
		params.ValueType = ValueType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetModifiedMaxStamina
	 * 		Flags  -> ()
	 */
	float AIGCharacter::GetModifiedMaxStamina()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetModifiedMaxStamina");
		
		AIGCharacter_GetModifiedMaxStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetModifiedMaxHealth
	 * 		Flags  -> ()
	 */
	float AIGCharacter::GetModifiedMaxHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetModifiedMaxHealth");
		
		AIGCharacter_GetModifiedMaxHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetModifiedMaxFame
	 * 		Flags  -> ()
	 */
	float AIGCharacter::GetModifiedMaxFame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetModifiedMaxFame");
		
		AIGCharacter_GetModifiedMaxFame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetModifiedLookUpRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InRate                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AIGCharacter::GetModifiedLookUpRate(float InRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetModifiedLookUpRate");
		
		AIGCharacter_GetModifiedLookUpRate_Params params {};
		params.InRate = InRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetLastSurfaceMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        FromBoneName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFallbackToRestingSurface                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPhysicalMaterial* AIGCharacter::GetLastSurfaceMaterial(const class FName& FromBoneName, bool bFallbackToRestingSurface)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetLastSurfaceMaterial");
		
		AIGCharacter_GetLastSurfaceMaterial_Params params {};
		params.FromBoneName = FromBoneName;
		params.bFallbackToRestingSurface = bFallbackToRestingSurface;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetLastFallingVelocity
	 * 		Flags  -> ()
	 */
	struct FVector AIGCharacter::GetLastFallingVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetLastFallingVelocity");
		
		AIGCharacter_GetLastFallingVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetLastContextInteractable
	 * 		Flags  -> ()
	 */
	class UObject* AIGCharacter::GetLastContextInteractable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetLastContextInteractable");
		
		AIGCharacter_GetLastContextInteractable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetKnockdownsRemaining
	 * 		Flags  -> ()
	 */
	int32_t AIGCharacter::GetKnockdownsRemaining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetKnockdownsRemaining");
		
		AIGCharacter_GetKnockdownsRemaining_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetItemDisplayInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGInventorySlot                                   Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FIGItemDisplayInfo AIGCharacter::GetItemDisplayInfo(EIGInventorySlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetItemDisplayInfo");
		
		AIGCharacter_GetItemDisplayInfo_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetIGCharaterMovementComponent
	 * 		Flags  -> ()
	 */
	class UIGCharacterMovementComponent* AIGCharacter::GetIGCharaterMovementComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetIGCharaterMovementComponent");
		
		AIGCharacter_GetIGCharaterMovementComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetHeldWeaponType
	 * 		Flags  -> ()
	 */
	EIGWeaponType AIGCharacter::GetHeldWeaponType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetHeldWeaponType");
		
		AIGCharacter_GetHeldWeaponType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetHeldWeapon
	 * 		Flags  -> ()
	 */
	class AIGWeaponBase* AIGCharacter::GetHeldWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetHeldWeapon");
		
		AIGCharacter_GetHeldWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetHeldItem
	 * 		Flags  -> ()
	 */
	class AIGInteractablePickup* AIGCharacter::GetHeldItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetHeldItem");
		
		AIGCharacter_GetHeldItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetCurrentTarget
	 * 		Flags  -> ()
	 */
	class UObject* AIGCharacter::GetCurrentTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetCurrentTarget");
		
		AIGCharacter_GetCurrentTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetCurrentStamiaPercentage
	 * 		Flags  -> ()
	 */
	float AIGCharacter::GetCurrentStamiaPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetCurrentStamiaPercentage");
		
		AIGCharacter_GetCurrentStamiaPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetCurrentMoveTier
	 * 		Flags  -> ()
	 */
	EMoveTier AIGCharacter::GetCurrentMoveTier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetCurrentMoveTier");
		
		AIGCharacter_GetCurrentMoveTier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetCurrentMoveMontage
	 * 		Flags  -> ()
	 */
	class UIGMoveMontage* AIGCharacter::GetCurrentMoveMontage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetCurrentMoveMontage");
		
		AIGCharacter_GetCurrentMoveMontage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetCurrentMaxPerkXP
	 * 		Flags  -> ()
	 */
	float AIGCharacter::GetCurrentMaxPerkXP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetCurrentMaxPerkXP");
		
		AIGCharacter_GetCurrentMaxPerkXP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetCurrentJumpType
	 * 		Flags  -> ()
	 */
	EIGJumpType AIGCharacter::GetCurrentJumpType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetCurrentJumpType");
		
		AIGCharacter_GetCurrentJumpType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetCurrentHealthPercentage
	 * 		Flags  -> ()
	 */
	float AIGCharacter::GetCurrentHealthPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetCurrentHealthPercentage");
		
		AIGCharacter_GetCurrentHealthPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetCurrentFamePercentage
	 * 		Flags  -> ()
	 */
	float AIGCharacter::GetCurrentFamePercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetCurrentFamePercentage");
		
		AIGCharacter_GetCurrentFamePercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetCurrentDangerZoneThreshold
	 * 		Flags  -> ()
	 */
	float AIGCharacter::GetCurrentDangerZoneThreshold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetCurrentDangerZoneThreshold");
		
		AIGCharacter_GetCurrentDangerZoneThreshold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetContextInteractableItemDisplayInfo
	 * 		Flags  -> ()
	 */
	struct FIGItemDisplayInfo AIGCharacter::GetContextInteractableItemDisplayInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetContextInteractableItemDisplayInfo");
		
		AIGCharacter_GetContextInteractableItemDisplayInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetContextInteractable
	 * 		Flags  -> ()
	 */
	class UObject* AIGCharacter::GetContextInteractable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetContextInteractable");
		
		AIGCharacter_GetContextInteractable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetContextAvailableInteractableActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     OutInteractableActor                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::GetContextAvailableInteractableActor(class UObject* OutInteractableActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetContextAvailableInteractableActor");
		
		AIGCharacter_GetContextAvailableInteractableActor_Params params {};
		params.OutInteractableActor = OutInteractableActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetCombinedStatsValue
	 * 		Flags  -> ()
	 */
	float AIGCharacter::GetCombinedStatsValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetCombinedStatsValue");
		
		AIGCharacter_GetCombinedStatsValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetCachedClimbableSurfaceCheck
	 * 		Flags  -> ()
	 */
	struct FHitResult AIGCharacter::GetCachedClimbableSurfaceCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetCachedClimbableSurfaceCheck");
		
		AIGCharacter_GetCachedClimbableSurfaceCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetBaseTargetingDirection
	 * 		Flags  -> ()
	 */
	struct FVector AIGCharacter::GetBaseTargetingDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetBaseTargetingDirection");
		
		AIGCharacter_GetBaseTargetingDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.GetBaseMoveTier
	 * 		Flags  -> ()
	 */
	EMoveTier AIGCharacter::GetBaseMoveTier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.GetBaseMoveTier");
		
		AIGCharacter_GetBaseMoveTier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ForceTaunt
	 * 		Flags  -> ()
	 */
	void AIGCharacter::ForceTaunt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ForceTaunt");
		
		AIGCharacter_ForceTaunt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ForceReleaseAll
	 * 		Flags  -> ()
	 */
	void AIGCharacter::ForceReleaseAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ForceReleaseAll");
		
		AIGCharacter_ForceReleaseAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ForceMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::ForceMove(const struct FVector& Direction, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ForceMove");
		
		AIGCharacter_ForceMove_Params params {};
		params.Direction = Direction;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ForceLook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    Rotate                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::ForceLook(const struct FRotator& Rotate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ForceLook");
		
		AIGCharacter_ForceLook_Params params {};
		params.Rotate = Rotate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ForceInteract
	 * 		Flags  -> ()
	 */
	void AIGCharacter::ForceInteract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ForceInteract");
		
		AIGCharacter_ForceInteract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ForceGrab
	 * 		Flags  -> ()
	 */
	void AIGCharacter::ForceGrab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ForceGrab");
		
		AIGCharacter_ForceGrab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ForceDashRelease
	 * 		Flags  -> ()
	 */
	void AIGCharacter::ForceDashRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ForceDashRelease");
		
		AIGCharacter_ForceDashRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ForceDash
	 * 		Flags  -> ()
	 */
	void AIGCharacter::ForceDash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ForceDash");
		
		AIGCharacter_ForceDash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ForceBlockRelease
	 * 		Flags  -> ()
	 */
	void AIGCharacter::ForceBlockRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ForceBlockRelease");
		
		AIGCharacter_ForceBlockRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ForceBlockPress
	 * 		Flags  -> ()
	 */
	void AIGCharacter::ForceBlockPress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ForceBlockPress");
		
		AIGCharacter_ForceBlockPress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ForceAttack
	 * 		Flags  -> ()
	 */
	void AIGCharacter::ForceAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ForceAttack");
		
		AIGCharacter_ForceAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ExecuteMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGMoveMontage*                              InMove                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGuidType                                          SyncType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMoveTier                                          ExecutionTier                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMoveTrack                                         ExecutionMoveTrack                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StaminaCostOverride                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::ExecuteMove(class UIGMoveMontage* InMove, EGuidType SyncType, EMoveTier ExecutionTier, EMoveTrack ExecutionMoveTrack, float StaminaCostOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ExecuteMove");
		
		AIGCharacter_ExecuteMove_Params params {};
		params.InMove = InMove;
		params.SyncType = SyncType;
		params.ExecutionTier = ExecutionTier;
		params.ExecutionMoveTrack = ExecutionMoveTrack;
		params.StaminaCostOverride = StaminaCostOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ExecTestFinisherModeEvent
	 * 		Flags  -> ()
	 */
	void AIGCharacter::ExecTestFinisherModeEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ExecTestFinisherModeEvent");
		
		AIGCharacter_ExecTestFinisherModeEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ExecRemoveStackFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGModValueType                                    TargetStat                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EIGModType                                         ModType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ModValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::ExecRemoveStackFloat(EIGModValueType TargetStat, EIGModType ModType, float ModValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ExecRemoveStackFloat");
		
		AIGCharacter_ExecRemoveStackFloat_Params params {};
		params.TargetStat = TargetStat;
		params.ModType = ModType;
		params.ModValue = ModValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ExecClearStackFloatsAllPlayers
	 * 		Flags  -> ()
	 */
	void AIGCharacter::ExecClearStackFloatsAllPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ExecClearStackFloatsAllPlayers");
		
		AIGCharacter_ExecClearStackFloatsAllPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ExecClearStackFloats
	 * 		Flags  -> ()
	 */
	void AIGCharacter::ExecClearStackFloats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ExecClearStackFloats");
		
		AIGCharacter_ExecClearStackFloats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ExecApplyLoadout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        LoadoutName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::ExecApplyLoadout(const class FName& LoadoutName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ExecApplyLoadout");
		
		AIGCharacter_ExecApplyLoadout_Params params {};
		params.LoadoutName = LoadoutName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ExecAddStackFloatTimed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGModValueType                                    TargetStat                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EIGModType                                         ModType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ModValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::ExecAddStackFloatTimed(EIGModValueType TargetStat, EIGModType ModType, float ModValue, float Timer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ExecAddStackFloatTimed");
		
		AIGCharacter_ExecAddStackFloatTimed_Params params {};
		params.TargetStat = TargetStat;
		params.ModType = ModType;
		params.ModValue = ModValue;
		params.Timer = Timer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ExecAddStackFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGModValueType                                    TargetStat                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EIGModType                                         ModType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ModValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::ExecAddStackFloat(EIGModValueType TargetStat, EIGModType ModType, float ModValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ExecAddStackFloat");
		
		AIGCharacter_ExecAddStackFloat_Params params {};
		params.TargetStat = TargetStat;
		params.ModType = ModType;
		params.ModValue = ModValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.EndForcedFall
	 * 		Flags  -> ()
	 */
	void AIGCharacter::EndForcedFall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.EndForcedFall");
		
		AIGCharacter_EndForcedFall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.DumpServerMoveTracking
	 * 		Flags  -> ()
	 */
	void AIGCharacter::DumpServerMoveTracking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.DumpServerMoveTracking");
		
		AIGCharacter_DumpServerMoveTracking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.DropSwap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AIGCharacter::DropSwap(class UObject* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.DropSwap");
		
		AIGCharacter_DropSwap_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.DropPickup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInstant                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EIGCauseOfPickupDrop                               CauseOfDrop                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AIGCharacter::DropPickup(class AActor* Target, bool bInstant, EIGCauseOfPickupDrop CauseOfDrop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.DropPickup");
		
		AIGCharacter_DropPickup_Params params {};
		params.Target = Target;
		params.bInstant = bInstant;
		params.CauseOfDrop = CauseOfDrop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.DoWallOrAirJump
	 * 		Flags  -> ()
	 */
	void AIGCharacter::DoWallOrAirJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.DoWallOrAirJump");
		
		AIGCharacter_DoWallOrAirJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.DoStandardJump
	 * 		Flags  -> ()
	 */
	void AIGCharacter::DoStandardJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.DoStandardJump");
		
		AIGCharacter_DoStandardJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.DoSideFlipJump
	 * 		Flags  -> ()
	 */
	void AIGCharacter::DoSideFlipJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.DoSideFlipJump");
		
		AIGCharacter_DoSideFlipJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.DoOffWallJump
	 * 		Flags  -> ()
	 */
	void AIGCharacter::DoOffWallJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.DoOffWallJump");
		
		AIGCharacter_DoOffWallJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.DoLongJump
	 * 		Flags  -> ()
	 */
	void AIGCharacter::DoLongJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.DoLongJump");
		
		AIGCharacter_DoLongJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.DoJumpWithData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGJumpType                                        InType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AIGCharacter::DoJumpWithData(EIGJumpType InType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.DoJumpWithData");
		
		AIGCharacter_DoJumpWithData_Params params {};
		params.InType = InType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.DoBoostJump
	 * 		Flags  -> ()
	 */
	void AIGCharacter::DoBoostJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.DoBoostJump");
		
		AIGCharacter_DoBoostJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.DoBlockFlipJump
	 * 		Flags  -> ()
	 */
	void AIGCharacter::DoBlockFlipJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.DoBlockFlipJump");
		
		AIGCharacter_DoBlockFlipJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.DisallowSpecialMoves
	 * 		Flags  -> ()
	 */
	void AIGCharacter::DisallowSpecialMoves()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.DisallowSpecialMoves");
		
		AIGCharacter_DisallowSpecialMoves_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.DisallowInterceptions
	 * 		Flags  -> ()
	 */
	void AIGCharacter::DisallowInterceptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.DisallowInterceptions");
		
		AIGCharacter_DisallowInterceptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.DealDamageToSelf
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGHitData*                                  InHitData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InDamageDirection                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseSelfStats                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FallDistance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFallDamageSource                                  FallDamageSource                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bKeepCurrentTier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::DealDamageToSelf(class UIGHitData* InHitData, const struct FVector& InDamageDirection, bool bUseSelfStats, float FallDistance, EFallDamageSource FallDamageSource, bool bKeepCurrentTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.DealDamageToSelf");
		
		AIGCharacter_DealDamageToSelf_Params params {};
		params.InHitData = InHitData;
		params.InDamageDirection = InDamageDirection;
		params.bUseSelfStats = bUseSelfStats;
		params.FallDistance = FallDistance;
		params.FallDamageSource = FallDamageSource;
		params.bKeepCurrentTier = bKeepCurrentTier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ConsumeWeaponPendingDurabilityCost
	 * 		Flags  -> ()
	 */
	void AIGCharacter::ConsumeWeaponPendingDurabilityCost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ConsumeWeaponPendingDurabilityCost");
		
		AIGCharacter_ConsumeWeaponPendingDurabilityCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ConsumeDamage
	 * 		Flags  -> ()
	 */
	void AIGCharacter::ConsumeDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ConsumeDamage");
		
		AIGCharacter_ConsumeDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ClientSetRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::ClientSetRotation(const struct FRotator& NewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ClientSetRotation");
		
		AIGCharacter_ClientSetRotation_Params params {};
		params.NewRotation = NewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ClientReset
	 * 		Flags  -> ()
	 */
	void AIGCharacter::ClientReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ClientReset");
		
		AIGCharacter_ClientReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ClientDebugMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      DebugString                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::ClientDebugMessage(const class FString& DebugString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ClientDebugMessage");
		
		AIGCharacter_ClientDebugMessage_Params params {};
		params.DebugString = DebugString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ClientAdjustMoveMontage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMoveMontageCorrection                      MontageCorrectionInfo                                      (Parm, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::ClientAdjustMoveMontage(const struct FMoveMontageCorrection& MontageCorrectionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ClientAdjustMoveMontage");
		
		AIGCharacter_ClientAdjustMoveMontage_Params params {};
		params.MontageCorrectionInfo = MontageCorrectionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ClearTarget
	 * 		Flags  -> ()
	 */
	void AIGCharacter::ClearTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ClearTarget");
		
		AIGCharacter_ClearTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.ClearComboLimit
	 * 		Flags  -> ()
	 */
	void AIGCharacter::ClearComboLimit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.ClearComboLimit");
		
		AIGCharacter_ClearComboLimit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.CheckForClimbableSurface
	 * 		Flags  -> ()
	 */
	struct FHitResult AIGCharacter::CheckForClimbableSurface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.CheckForClimbableSurface");
		
		AIGCharacter_CheckForClimbableSurface_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.CanStashHeldItem
	 * 		Flags  -> ()
	 */
	bool AIGCharacter::CanStashHeldItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.CanStashHeldItem");
		
		AIGCharacter_CanStashHeldItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.CanSpeedUpDownedTime
	 * 		Flags  -> ()
	 */
	bool AIGCharacter::CanSpeedUpDownedTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.CanSpeedUpDownedTime");
		
		AIGCharacter_CanSpeedUpDownedTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.CanPinEscape
	 * 		Flags  -> ()
	 */
	bool AIGCharacter::CanPinEscape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.CanPinEscape");
		
		AIGCharacter_CanPinEscape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.AllowSpecialMoves
	 * 		Flags  -> ()
	 */
	void AIGCharacter::AllowSpecialMoves()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.AllowSpecialMoves");
		
		AIGCharacter_AllowSpecialMoves_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.AllowInterceptions
	 * 		Flags  -> ()
	 */
	void AIGCharacter::AllowInterceptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.AllowInterceptions");
		
		AIGCharacter_AllowInterceptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGCharacter.AimingModeEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AIGCharacter::AimingModeEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGCharacter.AimingModeEvent__DelegateSignature");
		
		AIGCharacter_AimingModeEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacter.AddCharacterTransition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGGenericInputEvent*                        InEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AdditionalDurationMS                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCharacter::AddCharacterTransition(class UIGGenericInputEvent* InEvent, int32_t AdditionalDurationMS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacter.AddCharacterTransition");
		
		AIGCharacter_AddCharacterTransition_Params params {};
		params.InEvent = InEvent;
		params.AdditionalDurationMS = AdditionalDurationMS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGHitReactComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGHitReactComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGHitReactComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterHitReactComponent.IsStunned
	 * 		Flags  -> ()
	 */
	bool UIGCharacterHitReactComponent::IsStunned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterHitReactComponent.IsStunned");
		
		UIGCharacterHitReactComponent_IsStunned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterHitReactComponent.IsPushedBack
	 * 		Flags  -> ()
	 */
	bool UIGCharacterHitReactComponent::IsPushedBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterHitReactComponent.IsPushedBack");
		
		UIGCharacterHitReactComponent_IsPushedBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterHitReactComponent.GetHitStunDuration
	 * 		Flags  -> ()
	 */
	float UIGCharacterHitReactComponent::GetHitStunDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterHitReactComponent.GetHitStunDuration");
		
		UIGCharacterHitReactComponent_GetHitStunDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterHitReactComponent.ConsumeDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OutDamagePerkXP                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UIGCharacterHitReactComponent::ConsumeDamage(float* OutDamagePerkXP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterHitReactComponent.ConsumeDamage");
		
		UIGCharacterHitReactComponent_ConsumeDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDamagePerkXP != nullptr)
			*OutDamagePerkXP = params.OutDamagePerkXP;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGCharacterHitReactComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCharacterHitReactComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGCharacterHitReactComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterMovementComponent.StartForcedFall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewVelocity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGCharacterMovementComponent::StartForcedFall(const struct FVector& NewVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterMovementComponent.StartForcedFall");
		
		UIGCharacterMovementComponent_StartForcedFall_Params params {};
		params.NewVelocity = NewVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterMovementComponent.ProjectGroundMovement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Delta                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  RampHit                                                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		bool                                               bHitFromLineTrace                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UIGCharacterMovementComponent::ProjectGroundMovement(const struct FVector& Delta, const struct FHitResult& RampHit, bool bHitFromLineTrace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterMovementComponent.ProjectGroundMovement");
		
		UIGCharacterMovementComponent_ProjectGroundMovement_Params params {};
		params.Delta = Delta;
		params.RampHit = RampHit;
		params.bHitFromLineTrace = bHitFromLineTrace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterMovementComponent.OnRep_ReplicatedFallLandingData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFallData                                   OldData                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UIGCharacterMovementComponent::OnRep_ReplicatedFallLandingData(struct FFallData* OldData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterMovementComponent.OnRep_ReplicatedFallLandingData");
		
		UIGCharacterMovementComponent_OnRep_ReplicatedFallLandingData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OldData != nullptr)
			*OldData = params.OldData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterMovementComponent.OnRep_CurrentFallData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFallData                                   OldData                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UIGCharacterMovementComponent::OnRep_CurrentFallData(struct FFallData* OldData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterMovementComponent.OnRep_CurrentFallData");
		
		UIGCharacterMovementComponent_OnRep_CurrentFallData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OldData != nullptr)
			*OldData = params.OldData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterMovementComponent.IsClimbSkidding
	 * 		Flags  -> ()
	 */
	bool UIGCharacterMovementComponent::IsClimbSkidding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterMovementComponent.IsClimbSkidding");
		
		UIGCharacterMovementComponent_IsClimbSkidding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterMovementComponent.GetMinSafeSurfaceAttachDistance
	 * 		Flags  -> ()
	 */
	float UIGCharacterMovementComponent::GetMinSafeSurfaceAttachDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterMovementComponent.GetMinSafeSurfaceAttachDistance");
		
		UIGCharacterMovementComponent_GetMinSafeSurfaceAttachDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterMovementComponent.GetLauncherDistance
	 * 		Flags  -> ()
	 */
	float UIGCharacterMovementComponent::GetLauncherDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterMovementComponent.GetLauncherDistance");
		
		UIGCharacterMovementComponent_GetLauncherDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterMovementComponent.GetJumpType
	 * 		Flags  -> ()
	 */
	EIGJumpType UIGCharacterMovementComponent::GetJumpType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterMovementComponent.GetJumpType");
		
		UIGCharacterMovementComponent_GetJumpType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterMovementComponent.GetGrappleDistance
	 * 		Flags  -> ()
	 */
	float UIGCharacterMovementComponent::GetGrappleDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterMovementComponent.GetGrappleDistance");
		
		UIGCharacterMovementComponent_GetGrappleDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterMovementComponent.GetFallDistance
	 * 		Flags  -> ()
	 */
	float UIGCharacterMovementComponent::GetFallDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterMovementComponent.GetFallDistance");
		
		UIGCharacterMovementComponent_GetFallDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterMovementComponent.GetCurrentSwingSpeed
	 * 		Flags  -> ()
	 */
	float UIGCharacterMovementComponent::GetCurrentSwingSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterMovementComponent.GetCurrentSwingSpeed");
		
		UIGCharacterMovementComponent_GetCurrentSwingSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterMovementComponent.GetClimbMaxSpeedModifier
	 * 		Flags  -> ()
	 */
	float UIGCharacterMovementComponent::GetClimbMaxSpeedModifier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterMovementComponent.GetClimbMaxSpeedModifier");
		
		UIGCharacterMovementComponent_GetClimbMaxSpeedModifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterMovementComponent.GetActorHeadLocation
	 * 		Flags  -> ()
	 */
	struct FVector UIGCharacterMovementComponent::GetActorHeadLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterMovementComponent.GetActorHeadLocation");
		
		UIGCharacterMovementComponent_GetActorHeadLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterMovementComponent.CheckForWallJumpTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     OutNormal                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCharacterMovementComponent::CheckForWallJumpTarget(struct FVector* OutNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterMovementComponent.CheckForWallJumpTarget");
		
		UIGCharacterMovementComponent_CheckForWallJumpTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNormal != nullptr)
			*OutNormal = params.OutNormal;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterMovementComponent.CheckForEdge
	 * 		Flags  -> ()
	 */
	void UIGCharacterMovementComponent::CheckForEdge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterMovementComponent.CheckForEdge");
		
		UIGCharacterMovementComponent_CheckForEdge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterMovementComponent.CanProcessClimbingInput
	 * 		Flags  -> ()
	 */
	bool UIGCharacterMovementComponent::CanProcessClimbingInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterMovementComponent.CanProcessClimbingInput");
		
		UIGCharacterMovementComponent_CanProcessClimbingInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterMovementComponent.CanDropFromClimbing
	 * 		Flags  -> ()
	 */
	bool UIGCharacterMovementComponent::CanDropFromClimbing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterMovementComponent.CanDropFromClimbing");
		
		UIGCharacterMovementComponent_CanDropFromClimbing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterMovementComponent.BPGetActorFeetLocation
	 * 		Flags  -> ()
	 */
	struct FVector UIGCharacterMovementComponent::BPGetActorFeetLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterMovementComponent.BPGetActorFeetLocation");
		
		UIGCharacterMovementComponent_BPGetActorFeetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGCharacterMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCharacterMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGCharacterMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGCharacterMovementData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCharacterMovementData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGCharacterMovementData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGNetworkCharacterSyncComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGNetworkCharacterSyncComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGNetworkCharacterSyncComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterSFXComponent.ProcessUnstashingAudio
	 * 		Flags  -> ()
	 */
	void UIGCharacterSFXComponent::ProcessUnstashingAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterSFXComponent.ProcessUnstashingAudio");
		
		UIGCharacterSFXComponent_ProcessUnstashingAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterSFXComponent.ProcessStashingAudio
	 * 		Flags  -> ()
	 */
	void UIGCharacterSFXComponent::ProcessStashingAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterSFXComponent.ProcessStashingAudio");
		
		UIGCharacterSFXComponent_ProcessStashingAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterSFXComponent.OnBrokenByViciousAttack
	 * 		Flags  -> ()
	 */
	void UIGCharacterSFXComponent::OnBrokenByViciousAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterSFXComponent.OnBrokenByViciousAttack");
		
		UIGCharacterSFXComponent_OnBrokenByViciousAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterSFXComponent.IGCharacterSpawnSoundAttached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundBase*                                  Sound                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             AttachToComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttachPointName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		EAttachLocation                                    LocationType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VolumeMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PitchMultiplier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundAttenuation*                           AttenuationSettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundConcurrency*                           ConcurrencySettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAutoDestroy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAudioComponent* UIGCharacterSFXComponent::IGCharacterSpawnSoundAttached(class USoundBase* Sound, class USceneComponent* AttachToComponent, const class FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterSFXComponent.IGCharacterSpawnSoundAttached");
		
		UIGCharacterSFXComponent_IGCharacterSpawnSoundAttached_Params params {};
		params.Sound = Sound;
		params.AttachToComponent = AttachToComponent;
		params.AttachPointName = AttachPointName;
		params.Location = Location;
		params.Rotation = Rotation;
		params.LocationType = LocationType;
		params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
		params.VolumeMultiplier = VolumeMultiplier;
		params.PitchMultiplier = PitchMultiplier;
		params.StartTime = StartTime;
		params.AttenuationSettings = AttenuationSettings;
		params.ConcurrencySettings = ConcurrencySettings;
		params.bAutoDestroy = bAutoDestroy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterSFXComponent.IGCharacterSpawnSoundAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundBase*                                  Sound                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		float                                              VolumeMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PitchMultiplier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundAttenuation*                           AttenuationSettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundConcurrency*                           ConcurrencySettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAutoDestroy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAudioComponent* UIGCharacterSFXComponent::IGCharacterSpawnSoundAtLocation(class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterSFXComponent.IGCharacterSpawnSoundAtLocation");
		
		UIGCharacterSFXComponent_IGCharacterSpawnSoundAtLocation_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Sound = Sound;
		params.Location = Location;
		params.Rotation = Rotation;
		params.VolumeMultiplier = VolumeMultiplier;
		params.PitchMultiplier = PitchMultiplier;
		params.StartTime = StartTime;
		params.AttenuationSettings = AttenuationSettings;
		params.ConcurrencySettings = ConcurrencySettings;
		params.bAutoDestroy = bAutoDestroy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterSFXComponent.IGCharacterSpawnSound2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundBase*                                  Sound                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VolumeMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PitchMultiplier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundConcurrency*                           ConcurrencySettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPersistAcrossLevelTransition                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAutoDestroy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAudioComponent* UIGCharacterSFXComponent::IGCharacterSpawnSound2D(class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterSFXComponent.IGCharacterSpawnSound2D");
		
		UIGCharacterSFXComponent_IGCharacterSpawnSound2D_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Sound = Sound;
		params.VolumeMultiplier = VolumeMultiplier;
		params.PitchMultiplier = PitchMultiplier;
		params.StartTime = StartTime;
		params.ConcurrencySettings = ConcurrencySettings;
		params.bPersistAcrossLevelTransition = bPersistAcrossLevelTransition;
		params.bAutoDestroy = bAutoDestroy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterSFXComponent.IGCharacterPlaySoundAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundBase*                                  Sound                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		float                                              VolumeMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PitchMultiplier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundAttenuation*                           AttenuationSettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundConcurrency*                           ConcurrencySettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OwningActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGCharacterSFXComponent::IGCharacterPlaySoundAtLocation(class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, class AActor* OwningActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterSFXComponent.IGCharacterPlaySoundAtLocation");
		
		UIGCharacterSFXComponent_IGCharacterPlaySoundAtLocation_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Sound = Sound;
		params.Location = Location;
		params.Rotation = Rotation;
		params.VolumeMultiplier = VolumeMultiplier;
		params.PitchMultiplier = PitchMultiplier;
		params.StartTime = StartTime;
		params.AttenuationSettings = AttenuationSettings;
		params.ConcurrencySettings = ConcurrencySettings;
		params.OwningActor = OwningActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterSFXComponent.IGCharacterPlaySound2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundBase*                                  Sound                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VolumeMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PitchMultiplier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundConcurrency*                           ConcurrencySettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OwningActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsUISound                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGCharacterSFXComponent::IGCharacterPlaySound2D(class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, class AActor* OwningActor, bool bIsUISound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterSFXComponent.IGCharacterPlaySound2D");
		
		UIGCharacterSFXComponent_IGCharacterPlaySound2D_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Sound = Sound;
		params.VolumeMultiplier = VolumeMultiplier;
		params.PitchMultiplier = PitchMultiplier;
		params.StartTime = StartTime;
		params.ConcurrencySettings = ConcurrencySettings;
		params.OwningActor = OwningActor;
		params.bIsUISound = bIsUISound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterSFXComponent.HandleUnpocketSFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Attacker                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Victim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DroppedAnItem                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGCharacterSFXComponent::HandleUnpocketSFXBP(class AActor* Attacker, class AActor* Victim, bool DroppedAnItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterSFXComponent.HandleUnpocketSFXBP");
		
		UIGCharacterSFXComponent_HandleUnpocketSFXBP_Params params {};
		params.Attacker = Attacker;
		params.Victim = Victim;
		params.DroppedAnItem = DroppedAnItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterSFXComponent.HandleStashUnstashAudioBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsStashing                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsLargeItem                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGCharacterSFXComponent::HandleStashUnstashAudioBP(bool IsStashing, bool IsLargeItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterSFXComponent.HandleStashUnstashAudioBP");
		
		UIGCharacterSFXComponent_HandleStashUnstashAudioBP_Params params {};
		params.IsStashing = IsStashing;
		params.IsLargeItem = IsLargeItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterSFXComponent.HandleClashAudioBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Attacker                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Victim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGCharacterSFXComponent::HandleClashAudioBP(class AActor* Attacker, class AActor* Victim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterSFXComponent.HandleClashAudioBP");
		
		UIGCharacterSFXComponent_HandleClashAudioBP_Params params {};
		params.Attacker = Attacker;
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterSFXComponent.HandleCharacterReset
	 * 		Flags  -> ()
	 */
	void UIGCharacterSFXComponent::HandleCharacterReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterSFXComponent.HandleCharacterReset");
		
		UIGCharacterSFXComponent_HandleCharacterReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterSFXComponent.HandleCannonLaunchEnd
	 * 		Flags  -> ()
	 */
	void UIGCharacterSFXComponent::HandleCannonLaunchEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterSFXComponent.HandleCannonLaunchEnd");
		
		UIGCharacterSFXComponent_HandleCannonLaunchEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterSFXComponent.HandleAnimNotifyStateEndAudioBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIGCharacterAudioAnimNotifyEventInfo        EventInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIGCharacterSFXComponent::HandleAnimNotifyStateEndAudioBP(const class FName& EventName, const struct FIGCharacterAudioAnimNotifyEventInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterSFXComponent.HandleAnimNotifyStateEndAudioBP");
		
		UIGCharacterSFXComponent_HandleAnimNotifyStateEndAudioBP_Params params {};
		params.EventName = EventName;
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterSFXComponent.HandleAnimNotifyStateBeginAudioBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIGCharacterAudioAnimNotifyEventInfo        EventInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIGCharacterSFXComponent::HandleAnimNotifyStateBeginAudioBP(const class FName& EventName, const struct FIGCharacterAudioAnimNotifyEventInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterSFXComponent.HandleAnimNotifyStateBeginAudioBP");
		
		UIGCharacterSFXComponent_HandleAnimNotifyStateBeginAudioBP_Params params {};
		params.EventName = EventName;
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterSFXComponent.HandleAnimNotifyAudioBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIGCharacterAudioAnimNotifyEventInfo        EventInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIGCharacterSFXComponent::HandleAnimNotifyAudioBP(const class FName& EventName, const struct FIGCharacterAudioAnimNotifyEventInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterSFXComponent.HandleAnimNotifyAudioBP");
		
		UIGCharacterSFXComponent_HandleAnimNotifyAudioBP_Params params {};
		params.EventName = EventName;
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterSFXComponent.CheckCharacterForPerk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGPerkData*                                 Perk                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCharacterSFXComponent::CheckCharacterForPerk(class UIGPerkData* Perk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterSFXComponent.CheckCharacterForPerk");
		
		UIGCharacterSFXComponent_CheckCharacterForPerk_Params params {};
		params.Perk = Perk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGCharacterSFXComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCharacterSFXComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGCharacterSFXComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterVFXComponent.ProcessUnstashingVFX
	 * 		Flags  -> ()
	 */
	void UIGCharacterVFXComponent::ProcessUnstashingVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterVFXComponent.ProcessUnstashingVFX");
		
		UIGCharacterVFXComponent_ProcessUnstashingVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterVFXComponent.ProcessStashingVFX
	 * 		Flags  -> ()
	 */
	void UIGCharacterVFXComponent::ProcessStashingVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterVFXComponent.ProcessStashingVFX");
		
		UIGCharacterVFXComponent_ProcessStashingVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterVFXComponent.OnBrokenByViciousAttack
	 * 		Flags  -> ()
	 */
	void UIGCharacterVFXComponent::OnBrokenByViciousAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterVFXComponent.OnBrokenByViciousAttack");
		
		UIGCharacterVFXComponent_OnBrokenByViciousAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterVFXComponent.HandleUnpocketVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Attacker                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Victim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DroppedAnItem                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGCharacterVFXComponent::HandleUnpocketVFXBP(class AActor* Attacker, class AActor* Victim, bool DroppedAnItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterVFXComponent.HandleUnpocketVFXBP");
		
		UIGCharacterVFXComponent_HandleUnpocketVFXBP_Params params {};
		params.Attacker = Attacker;
		params.Victim = Victim;
		params.DroppedAnItem = DroppedAnItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterVFXComponent.HandleStashUnstashVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsStashing                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsLargeItem                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGCharacterVFXComponent::HandleStashUnstashVFXBP(bool IsStashing, bool IsLargeItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterVFXComponent.HandleStashUnstashVFXBP");
		
		UIGCharacterVFXComponent_HandleStashUnstashVFXBP_Params params {};
		params.IsStashing = IsStashing;
		params.IsLargeItem = IsLargeItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterVFXComponent.HandleDamageNumberNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DamageValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UParticleSystem*                             DamageNumberEffect                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NumberSpawnLocation                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NumberSpawnScale                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAttackerWasInSuper                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGCharacterVFXComponent::HandleDamageNumberNotification(float DamageValue, class UParticleSystem* DamageNumberEffect, const struct FVector& NumberSpawnLocation, const struct FVector& NumberSpawnScale, bool bAttackerWasInSuper)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterVFXComponent.HandleDamageNumberNotification");
		
		UIGCharacterVFXComponent_HandleDamageNumberNotification_Params params {};
		params.DamageValue = DamageValue;
		params.DamageNumberEffect = DamageNumberEffect;
		params.NumberSpawnLocation = NumberSpawnLocation;
		params.NumberSpawnScale = NumberSpawnScale;
		params.bAttackerWasInSuper = bAttackerWasInSuper;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterVFXComponent.HandleClashVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Attacker                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Victim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGCharacterVFXComponent::HandleClashVFXBP(class AActor* Attacker, class AActor* Victim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterVFXComponent.HandleClashVFXBP");
		
		UIGCharacterVFXComponent_HandleClashVFXBP_Params params {};
		params.Attacker = Attacker;
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterVFXComponent.HandleCharacterReset
	 * 		Flags  -> ()
	 */
	void UIGCharacterVFXComponent::HandleCharacterReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterVFXComponent.HandleCharacterReset");
		
		UIGCharacterVFXComponent_HandleCharacterReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterVFXComponent.HandleCannonLaunchEnd
	 * 		Flags  -> ()
	 */
	void UIGCharacterVFXComponent::HandleCannonLaunchEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterVFXComponent.HandleCannonLaunchEnd");
		
		UIGCharacterVFXComponent_HandleCannonLaunchEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterVFXComponent.HandleAnimNotifyVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIGVFXCharacterAnimNotifyEventInfo          EventInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIGCharacterVFXComponent::HandleAnimNotifyVFXBP(const class FName& EventName, const struct FIGVFXCharacterAnimNotifyEventInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterVFXComponent.HandleAnimNotifyVFXBP");
		
		UIGCharacterVFXComponent_HandleAnimNotifyVFXBP_Params params {};
		params.EventName = EventName;
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterVFXComponent.HandleAnimNotifyStateTickVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIGVFXCharacterAnimNotifyEventInfo          EventInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIGCharacterVFXComponent::HandleAnimNotifyStateTickVFXBP(const class FName& EventName, const struct FIGVFXCharacterAnimNotifyEventInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterVFXComponent.HandleAnimNotifyStateTickVFXBP");
		
		UIGCharacterVFXComponent_HandleAnimNotifyStateTickVFXBP_Params params {};
		params.EventName = EventName;
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterVFXComponent.HandleAnimNotifyStateEndVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIGVFXCharacterAnimNotifyEventInfo          EventInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIGCharacterVFXComponent::HandleAnimNotifyStateEndVFXBP(const class FName& EventName, const struct FIGVFXCharacterAnimNotifyEventInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterVFXComponent.HandleAnimNotifyStateEndVFXBP");
		
		UIGCharacterVFXComponent_HandleAnimNotifyStateEndVFXBP_Params params {};
		params.EventName = EventName;
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterVFXComponent.HandleAnimNotifyStateBeginVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIGVFXCharacterAnimNotifyEventInfo          EventInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIGCharacterVFXComponent::HandleAnimNotifyStateBeginVFXBP(const class FName& EventName, const struct FIGVFXCharacterAnimNotifyEventInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterVFXComponent.HandleAnimNotifyStateBeginVFXBP");
		
		UIGCharacterVFXComponent_HandleAnimNotifyStateBeginVFXBP_Params params {};
		params.EventName = EventName;
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterVFXComponent.GetClimbingSlideRollValue
	 * 		Flags  -> ()
	 */
	float UIGCharacterVFXComponent::GetClimbingSlideRollValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterVFXComponent.GetClimbingSlideRollValue");
		
		UIGCharacterVFXComponent_GetClimbingSlideRollValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterVFXComponent.CheckCharacterForPerk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGPerkData*                                 Perk                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCharacterVFXComponent::CheckCharacterForPerk(class UIGPerkData* Perk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterVFXComponent.CheckCharacterForPerk");
		
		UIGCharacterVFXComponent_CheckCharacterForPerk_Params params {};
		params.Perk = Perk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCharacterVFXComponent.AreDamageNumbersEnabled
	 * 		Flags  -> ()
	 */
	bool UIGCharacterVFXComponent::AreDamageNumbersEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCharacterVFXComponent.AreDamageNumbersEnabled");
		
		UIGCharacterVFXComponent_AreDamageNumbersEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGCharacterVFXComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCharacterVFXComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGCharacterVFXComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGClimbDetachNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGClimbDetachNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGClimbDetachNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGClimbingAllowedState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGClimbingAllowedState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGClimbingAllowedState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGCoinSpline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGCoinSpline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGCoinSpline");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCollectibleBase.Vanish
	 * 		Flags  -> ()
	 */
	void AIGCollectibleBase::Vanish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCollectibleBase.Vanish");
		
		AIGCollectibleBase_Vanish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCollectibleBase.StartVanishWarning
	 * 		Flags  -> ()
	 */
	void AIGCollectibleBase::StartVanishWarning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCollectibleBase.StartVanishWarning");
		
		AIGCollectibleBase_StartVanishWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCollectibleBase.OnVanish
	 * 		Flags  -> ()
	 */
	void AIGCollectibleBase::OnVanish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCollectibleBase.OnVanish");
		
		AIGCollectibleBase_OnVanish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCollectibleBase.OnStartVanishWarning
	 * 		Flags  -> ()
	 */
	void AIGCollectibleBase::OnStartVanishWarning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCollectibleBase.OnStartVanishWarning");
		
		AIGCollectibleBase_OnStartVanishWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCollectibleBase.OnRep_CollectibleState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGCollectibleState                                OldCollectibleState                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCollectibleBase::OnRep_CollectibleState(EIGCollectibleState OldCollectibleState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCollectibleBase.OnRep_CollectibleState");
		
		AIGCollectibleBase_OnRep_CollectibleState_Params params {};
		params.OldCollectibleState = OldCollectibleState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCollectibleBase.OnOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AIGCollectibleBase::OnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCollectibleBase.OnOverlap");
		
		AIGCollectibleBase_OnOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCollectibleBase.OnHiddenInGameChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewHiddenInGame                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGCollectibleBase::OnHiddenInGameChanged(bool bNewHiddenInGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCollectibleBase.OnHiddenInGameChanged");
		
		AIGCollectibleBase_OnHiddenInGameChanged_Params params {};
		params.bNewHiddenInGame = bNewHiddenInGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCollectibleBase.OnCollected
	 * 		Flags  -> ()
	 */
	void AIGCollectibleBase::OnCollected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCollectibleBase.OnCollected");
		
		AIGCollectibleBase_OnCollected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGCollectibleBase.EndCollectibleDelay
	 * 		Flags  -> ()
	 */
	void AIGCollectibleBase::EndCollectibleDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGCollectibleBase.EndCollectibleDelay");
		
		AIGCollectibleBase_EndCollectibleDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGCollectibleBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGCollectibleBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGCollectibleBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGConsumeWeaponDurability.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGConsumeWeaponDurability::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGConsumeWeaponDurability");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGInteractableCommon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGInteractableCommon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGInteractableCommon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableBase.Use
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGCharacter*                                InChar                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AIGInteractableBase::Use(class AIGCharacter* InChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableBase.Use");
		
		AIGInteractableBase_Use_Params params {};
		params.InChar = InChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableBase.StopInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForceInstant                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AIGInteractableBase::StopInteract(bool bForceInstant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableBase.StopInteract");
		
		AIGInteractableBase_StopInteract_Params params {};
		params.bForceInstant = bForceInstant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableBase.SetPendingDurabilityCost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PendingDurability                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGInteractableBase::SetPendingDurabilityCost(int32_t PendingDurability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableBase.SetPendingDurabilityCost");
		
		AIGInteractableBase_SetPendingDurabilityCost_Params params {};
		params.PendingDurability = PendingDurability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableBase.OnUseSequenceEnded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInterrupted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGInteractableBase::OnUseSequenceEnded(class UAnimMontage* Montage, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableBase.OnUseSequenceEnded");
		
		AIGInteractableBase_OnUseSequenceEnded_Params params {};
		params.Montage = Montage;
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableBase.OnUse
	 * 		Flags  -> ()
	 */
	void AIGInteractableBase::OnUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableBase.OnUse");
		
		AIGInteractableBase_OnUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableBase.OnUnstashSequenceEnded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInterrupted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGInteractableBase::OnUnstashSequenceEnded(class UAnimMontage* Montage, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableBase.OnUnstashSequenceEnded");
		
		AIGInteractableBase_OnUnstashSequenceEnded_Params params {};
		params.Montage = Montage;
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableBase.OnStopInteractSequenceEnded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInterrupted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGInteractableBase::OnStopInteractSequenceEnded(class UAnimMontage* Montage, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableBase.OnStopInteractSequenceEnded");
		
		AIGInteractableBase_OnStopInteractSequenceEnded_Params params {};
		params.Montage = Montage;
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableBase.OnStashSequenceEnded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInterrupted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGInteractableBase::OnStashSequenceEnded(class UAnimMontage* Montage, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableBase.OnStashSequenceEnded");
		
		AIGInteractableBase_OnStashSequenceEnded_Params params {};
		params.Montage = Montage;
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableBase.OnStartInteractSequenceEnded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInterrupted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGInteractableBase::OnStartInteractSequenceEnded(class UAnimMontage* Montage, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableBase.OnStartInteractSequenceEnded");
		
		AIGInteractableBase_OnStartInteractSequenceEnded_Params params {};
		params.Montage = Montage;
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableBase.OnRep_MaxDurabilityReached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOldDurabilityReached                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGInteractableBase::OnRep_MaxDurabilityReached(bool bOldDurabilityReached)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableBase.OnRep_MaxDurabilityReached");
		
		AIGInteractableBase_OnRep_MaxDurabilityReached_Params params {};
		params.bOldDurabilityReached = bOldDurabilityReached;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableBase.OnRep_DurabilityInfo
	 * 		Flags  -> ()
	 */
	void AIGInteractableBase::OnRep_DurabilityInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableBase.OnRep_DurabilityInfo");
		
		AIGInteractableBase_OnRep_DurabilityInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableBase.OnMaxDurabilityReached
	 * 		Flags  -> ()
	 */
	void AIGInteractableBase::OnMaxDurabilityReached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableBase.OnMaxDurabilityReached");
		
		AIGInteractableBase_OnMaxDurabilityReached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableBase.OnInteractionStarted
	 * 		Flags  -> ()
	 */
	void AIGInteractableBase::OnInteractionStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableBase.OnInteractionStarted");
		
		AIGInteractableBase_OnInteractionStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableBase.OnInteractionEnded
	 * 		Flags  -> ()
	 */
	void AIGInteractableBase::OnInteractionEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableBase.OnInteractionEnded");
		
		AIGInteractableBase_OnInteractionEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableBase.OnDurabilityChanged
	 * 		Flags  -> ()
	 */
	void AIGInteractableBase::OnDurabilityChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableBase.OnDurabilityChanged");
		
		AIGInteractableBase_OnDurabilityChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableBase.IsPendingMaxDurablity
	 * 		Flags  -> ()
	 */
	bool AIGInteractableBase::IsPendingMaxDurablity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableBase.IsPendingMaxDurablity");
		
		AIGInteractableBase_IsPendingMaxDurablity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableBase.IsInteractable
	 * 		Flags  -> ()
	 */
	bool AIGInteractableBase::IsInteractable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableBase.IsInteractable");
		
		AIGInteractableBase_IsInteractable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableBase.IsBeingSwapped
	 * 		Flags  -> ()
	 */
	bool AIGInteractableBase::IsBeingSwapped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableBase.IsBeingSwapped");
		
		AIGInteractableBase_IsBeingSwapped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableBase.GetInteractingCharacter
	 * 		Flags  -> ()
	 */
	class AIGCharacter* AIGInteractableBase::GetInteractingCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableBase.GetInteractingCharacter");
		
		AIGInteractableBase_GetInteractingCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableBase.GetInAirFaceButtonTopPrompt
	 * 		Flags  -> ()
	 */
	class FText AIGInteractableBase::GetInAirFaceButtonTopPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableBase.GetInAirFaceButtonTopPrompt");
		
		AIGInteractableBase_GetInAirFaceButtonTopPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableBase.GetInAirFaceButtonLeftPrompt
	 * 		Flags  -> ()
	 */
	class FText AIGInteractableBase::GetInAirFaceButtonLeftPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableBase.GetInAirFaceButtonLeftPrompt");
		
		AIGInteractableBase_GetInAirFaceButtonLeftPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableBase.GetFaceButtonTopPrompt
	 * 		Flags  -> ()
	 */
	class FText AIGInteractableBase::GetFaceButtonTopPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableBase.GetFaceButtonTopPrompt");
		
		AIGInteractableBase_GetFaceButtonTopPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableBase.GetFaceButtonLeftPrompt
	 * 		Flags  -> ()
	 */
	class FText AIGInteractableBase::GetFaceButtonLeftPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableBase.GetFaceButtonLeftPrompt");
		
		AIGInteractableBase_GetFaceButtonLeftPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableBase.DoLocalInteractionEffects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGInteractionType                                 InType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGInteractableBase::DoLocalInteractionEffects(EIGInteractionType InType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableBase.DoLocalInteractionEffects");
		
		AIGInteractableBase_DoLocalInteractionEffects_Params params {};
		params.InType = InType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableBase.ConsumePendingDurability
	 * 		Flags  -> ()
	 */
	void AIGInteractableBase::ConsumePendingDurability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableBase.ConsumePendingDurability");
		
		AIGInteractableBase_ConsumePendingDurability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableBase.CanInteractWithCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGCharacter*                                InChar                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AIGInteractableBase::CanInteractWithCharacter(class AIGCharacter* InChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableBase.CanInteractWithCharacter");
		
		AIGInteractableBase_CanInteractWithCharacter_Params params {};
		params.InChar = InChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableBase.ApplySpawnOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGLootSpawnOptions                         SpawnOpts                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGInteractableBase::ApplySpawnOptions(struct FIGLootSpawnOptions* SpawnOpts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableBase.ApplySpawnOptions");
		
		AIGInteractableBase_ApplySpawnOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnOpts != nullptr)
			*SpawnOpts = params.SpawnOpts;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGInteractableBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGInteractableBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGInteractableBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractablePickup.SweepForHits
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGInteractablePickup::SweepForHits(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractablePickup.SweepForHits");
		
		AIGInteractablePickup_SweepForHits_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractablePickup.SelectTargetAlongPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPredictProjectilePathResult                Result                                                     (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AIGInteractablePickup::SelectTargetAlongPath(struct FPredictProjectilePathResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractablePickup.SelectTargetAlongPath");
		
		AIGInteractablePickup_SelectTargetAlongPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractablePickup.OnRep_ProjectileOverride
	 * 		Flags  -> ()
	 */
	void AIGInteractablePickup::OnRep_ProjectileOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractablePickup.OnRep_ProjectileOverride");
		
		AIGInteractablePickup_OnRep_ProjectileOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractablePickup.OnRep_MovementEnabledChanged
	 * 		Flags  -> ()
	 */
	void AIGInteractablePickup::OnRep_MovementEnabledChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractablePickup.OnRep_MovementEnabledChanged");
		
		AIGInteractablePickup_OnRep_MovementEnabledChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractablePickup.OnRep_IsActiveProjectile
	 * 		Flags  -> ()
	 */
	void AIGInteractablePickup::OnRep_IsActiveProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractablePickup.OnRep_IsActiveProjectile");
		
		AIGInteractablePickup_OnRep_IsActiveProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractablePickup.OnRep_HomingTarget
	 * 		Flags  -> ()
	 */
	void AIGInteractablePickup::OnRep_HomingTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractablePickup.OnRep_HomingTarget");
		
		AIGInteractablePickup_OnRep_HomingTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractablePickup.OnRep_DamageOwner
	 * 		Flags  -> ()
	 */
	void AIGInteractablePickup::OnRep_DamageOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractablePickup.OnRep_DamageOwner");
		
		AIGInteractablePickup_OnRep_DamageOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractablePickup.OnProjectileStop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AIGInteractablePickup::OnProjectileStop(const struct FHitResult& ImpactResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractablePickup.OnProjectileStop");
		
		AIGInteractablePickup_OnProjectileStop_Params params {};
		params.ImpactResult = ImpactResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractablePickup.OnProjectileHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AIGInteractablePickup::OnProjectileHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractablePickup.OnProjectileHit");
		
		AIGInteractablePickup_OnProjectileHit_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractablePickup.OnProjectileEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGInteractablePickup::OnProjectileEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractablePickup.OnProjectileEndOverlap");
		
		AIGInteractablePickup_OnProjectileEndOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractablePickup.OnProjectileBounce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ImpactVelocity                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGInteractablePickup::OnProjectileBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractablePickup.OnProjectileBounce");
		
		AIGInteractablePickup_OnProjectileBounce_Params params {};
		params.ImpactResult = ImpactResult;
		params.ImpactVelocity = ImpactVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractablePickup.OnProjectileBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AIGInteractablePickup::OnProjectileBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractablePickup.OnProjectileBeginOverlap");
		
		AIGInteractablePickup_OnProjectileBeginOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractablePickup.OnPickedUp
	 * 		Flags  -> ()
	 */
	void AIGInteractablePickup::OnPickedUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractablePickup.OnPickedUp");
		
		AIGInteractablePickup_OnPickedUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractablePickup.OnDropped
	 * 		Flags  -> ()
	 */
	void AIGInteractablePickup::OnDropped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractablePickup.OnDropped");
		
		AIGInteractablePickup_OnDropped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractablePickup.OnDeactivateProjectile
	 * 		Flags  -> ()
	 */
	void AIGInteractablePickup::OnDeactivateProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractablePickup.OnDeactivateProjectile");
		
		AIGInteractablePickup_OnDeactivateProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractablePickup.OnAttackConnect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQueuedAttack                               InQueuedAttack                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGInteractablePickup::OnAttackConnect(const struct FQueuedAttack& InQueuedAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractablePickup.OnAttackConnect");
		
		AIGInteractablePickup_OnAttackConnect_Params params {};
		params.InQueuedAttack = InQueuedAttack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractablePickup.OnActivateProjectile
	 * 		Flags  -> ()
	 */
	void AIGInteractablePickup::OnActivateProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractablePickup.OnActivateProjectile");
		
		AIGInteractablePickup_OnActivateProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractablePickup.GetWeaponType
	 * 		Flags  -> ()
	 */
	EIGWeaponType AIGInteractablePickup::GetWeaponType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractablePickup.GetWeaponType");
		
		AIGInteractablePickup_GetWeaponType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractablePickup.ActivateProjectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGCharacter*                                InDamageOwner                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AIGCharacter*                                TargetCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGInteractablePickup::ActivateProjectile(class AIGCharacter* InDamageOwner, class AIGCharacter* TargetCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractablePickup.ActivateProjectile");
		
		AIGInteractablePickup_ActivateProjectile_Params params {};
		params.InDamageOwner = InDamageOwner;
		params.TargetCharacter = TargetCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGInteractablePickup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGInteractablePickup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGInteractablePickup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGCoreStatsConsumable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGCoreStatsConsumable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGCoreStatsConsumable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGStatUpdateNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGStatUpdateNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGStatUpdateNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGDashStatNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGDashStatNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGDashStatNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGDebugLogState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGDebugLogState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGDebugLogState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGDisableCharacterCollisionState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGDisableCharacterCollisionState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGDisableCharacterCollisionState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGDisableSwingTargetCollision.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGDisableSwingTargetCollision::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGDisableSwingTargetCollision");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGDistanceTraveledCalculator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGDistanceTraveledCalculator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGDistanceTraveledCalculator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGDodgeCancelStatNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGDodgeCancelStatNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGDodgeCancelStatNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGDodgeRollStatNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGDodgeRollStatNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGDodgeRollStatNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGDropCollectibleNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGDropCollectibleNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGDropCollectibleNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGDropFameNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGDropFameNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGDropFameNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGDropShadowComponent.OnMoveWalk
	 * 		Flags  -> ()
	 */
	void UIGDropShadowComponent::OnMoveWalk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGDropShadowComponent.OnMoveWalk");
		
		UIGDropShadowComponent_OnMoveWalk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGDropShadowComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGDropShadowComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGDropShadowComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGDropStashNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGDropStashNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGDropStashNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGDynamicObjCluster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGDynamicObjCluster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGDynamicObjCluster");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGEdgeDetectionState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGEdgeDetectionState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGEdgeDetectionState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGEdgeNavLink.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGEdgeNavLink::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGEdgeNavLink");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGEmoteHandlerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGEmoteHandlerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGEmoteHandlerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGFaceTargetState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGFaceTargetState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGFaceTargetState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGFallEffectsOverride.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGFallEffectsOverride::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGFallEffectsOverride");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGFallTierNotifyState.OnFallTierPassedNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Tier                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFallData                                   FallData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UIGFallTierNotifyState::OnFallTierPassedNotify(int32_t Tier, class UWorld* World, const struct FFallData& FallData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGFallTierNotifyState.OnFallTierPassedNotify");
		
		UIGFallTierNotifyState_OnFallTierPassedNotify_Params params {};
		params.Tier = Tier;
		params.World = World;
		params.FallData = FallData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGFallTierNotifyState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGFallTierNotifyState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGFallTierNotifyState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGFameConsumable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGFameConsumable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGFameConsumable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGFanMailRarityData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGFanMailRarityData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGFanMailRarityData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGFindTargetState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGFindTargetState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGFindTargetState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGFXSurfaceCheck.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGFXSurfaceCheck::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGFXSurfaceCheck");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGGameInfo.IsCombatNotificationsEnabled
	 * 		Flags  -> ()
	 */
	bool UIGGameInfo::IsCombatNotificationsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGGameInfo.IsCombatNotificationsEnabled");
		
		UIGGameInfo_IsCombatNotificationsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGGameInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGGameInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGGameInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGGameInstance.SetInvertLook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewInvert                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGGameInstance::SetInvertLook(bool bNewInvert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGGameInstance.SetInvertLook");
		
		UIGGameInstance_SetInvertLook_Params params {};
		params.bNewInvert = bNewInvert;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGGameInstance.Set60FPSProfile
	 * 		Flags  -> ()
	 */
	void UIGGameInstance::Set60FPSProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGGameInstance.Set60FPSProfile");
		
		UIGGameInstance_Set60FPSProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGGameInstance.Set30FPSProfile
	 * 		Flags  -> ()
	 */
	void UIGGameInstance::Set30FPSProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGGameInstance.Set30FPSProfile");
		
		UIGGameInstance_Set30FPSProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGGameInstance.PostTelemetryEventBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EventType                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 AdditionalProperties                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Category                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGGameInstance::PostTelemetryEventBP(const class FString& EventType, TMap<class FString, class FString> AdditionalProperties, const class FString& Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGGameInstance.PostTelemetryEventBP");
		
		UIGGameInstance_PostTelemetryEventBP_Params params {};
		params.EventType = EventType;
		params.AdditionalProperties = AdditionalProperties;
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGGameInstance.IsLookInverted
	 * 		Flags  -> ()
	 */
	bool UIGGameInstance::IsLookInverted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGGameInstance.IsLookInverted");
		
		UIGGameInstance_IsLookInverted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGGameInstance.InitializeAudioSettings
	 * 		Flags  -> ()
	 */
	void UIGGameInstance::InitializeAudioSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGGameInstance.InitializeAudioSettings");
		
		UIGGameInstance_InitializeAudioSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGGameInstance.GetStatsSystem
	 * 		Flags  -> ()
	 */
	class UIGStatsSystem* UIGGameInstance::GetStatsSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGGameInstance.GetStatsSystem");
		
		UIGGameInstance_GetStatsSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGGameInstance.GetSavedSettings
	 * 		Flags  -> ()
	 */
	class UIGSavedSettings* UIGGameInstance::GetSavedSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGGameInstance.GetSavedSettings");
		
		UIGGameInstance_GetSavedSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGGameInstance.CommitSavedSettingsChanges
	 * 		Flags  -> ()
	 */
	void UIGGameInstance::CommitSavedSettingsChanges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGGameInstance.CommitSavedSettingsChanges");
		
		UIGGameInstance_CommitSavedSettingsChanges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGGameInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGGameInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGGameInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGGameMode.DumpLootInfoToLog
	 * 		Flags  -> ()
	 */
	void AIGGameMode::DumpLootInfoToLog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGGameMode.DumpLootInfoToLog");
		
		AIGGameMode_DumpLootInfoToLog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGGameplayLoadoutData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGGameplayLoadoutData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGGameplayLoadoutData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGMapZoningInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGMapZoningInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGMapZoningInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGGameState.OnRep_TeamInfoUpdated
	 * 		Flags  -> ()
	 */
	void AIGGameState::OnRep_TeamInfoUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGGameState.OnRep_TeamInfoUpdated");
		
		AIGGameState_OnRep_TeamInfoUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGGameState.MulticastKnockoutEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGKnockOutData                             Knockout                                                   (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGGameState::MulticastKnockoutEvent(const struct FIGKnockOutData& Knockout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGGameState.MulticastKnockoutEvent");
		
		AIGGameState_MulticastKnockoutEvent_Params params {};
		params.Knockout = Knockout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGGameState.GetNumKnockouts
	 * 		Flags  -> ()
	 */
	int32_t AIGGameState::GetNumKnockouts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGGameState.GetNumKnockouts");
		
		AIGGameState_GetNumKnockouts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGGameState.GetKnockoutAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            I                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FIGKnockOutData AIGGameState::GetKnockoutAt(int32_t I)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGGameState.GetKnockoutAt");
		
		AIGGameState_GetKnockoutAt_Params params {};
		params.I = I;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGGameState.ExecLogTeamInfo
	 * 		Flags  -> ()
	 */
	void AIGGameState::ExecLogTeamInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGGameState.ExecLogTeamInfo");
		
		AIGGameState_ExecLogTeamInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGGameState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGGameState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGGameState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGGenericInputEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGGenericInputEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGGenericInputEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGHitData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGHitData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGHitData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGGrappleData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGGrappleData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGGrappleData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGWeaponBase.OnRep_LockedCrateRadarTiers
	 * 		Flags  -> ()
	 */
	void AIGWeaponBase::OnRep_LockedCrateRadarTiers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGWeaponBase.OnRep_LockedCrateRadarTiers");
		
		AIGWeaponBase_OnRep_LockedCrateRadarTiers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGWeaponBase.OnLockedCrateRadarTierChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EffectTiers                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGWeaponBase::OnLockedCrateRadarTierChanged(int32_t EffectTiers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGWeaponBase.OnLockedCrateRadarTierChanged");
		
		AIGWeaponBase_OnLockedCrateRadarTierChanged_Params params {};
		params.EffectTiers = EffectTiers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGWeaponBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGWeaponBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGWeaponBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGGrenadeBase.OnRep_GrenadeState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGGrenadeState                                    OldGrenadeState                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGGrenadeBase::OnRep_GrenadeState(EIGGrenadeState OldGrenadeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGGrenadeBase.OnRep_GrenadeState");
		
		AIGGrenadeBase_OnRep_GrenadeState_Params params {};
		params.OldGrenadeState = OldGrenadeState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGGrenadeBase.OnLingerFinished
	 * 		Flags  -> ()
	 */
	void AIGGrenadeBase::OnLingerFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGGrenadeBase.OnLingerFinished");
		
		AIGGrenadeBase_OnLingerFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGGrenadeBase.OnDetonateTimerStart
	 * 		Flags  -> ()
	 */
	void AIGGrenadeBase::OnDetonateTimerStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGGrenadeBase.OnDetonateTimerStart");
		
		AIGGrenadeBase_OnDetonateTimerStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGGrenadeBase.OnDetonate
	 * 		Flags  -> ()
	 */
	void AIGGrenadeBase::OnDetonate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGGrenadeBase.OnDetonate");
		
		AIGGrenadeBase_OnDetonate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGGrenadeBase.GetLingerTime
	 * 		Flags  -> ()
	 */
	float AIGGrenadeBase::GetLingerTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGGrenadeBase.GetLingerTime");
		
		AIGGrenadeBase_GetLingerTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGGrenadeBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGGrenadeBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGGrenadeBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGStatusEffectAOEData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGStatusEffectAOEData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGStatusEffectAOEData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGGrenadeLingerData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGGrenadeLingerData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGGrenadeLingerData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGStatusEffectAOEActor.OnEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGStatusEffectAOEActor::OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGStatusEffectAOEActor.OnEndOverlap");
		
		AIGStatusEffectAOEActor_OnEndOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGStatusEffectAOEActor.OnBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AIGStatusEffectAOEActor::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGStatusEffectAOEActor.OnBeginOverlap");
		
		AIGStatusEffectAOEActor_OnBeginOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGStatusEffectAOEActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGStatusEffectAOEActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGStatusEffectAOEActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGGrenadeLingerActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGGrenadeLingerActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGGrenadeLingerActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGHealthAndStaminaConsumable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGHealthAndStaminaConsumable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGHealthAndStaminaConsumable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGCombatInteractionDefinition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCombatInteractionDefinition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGCombatInteractionDefinition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGMultiCombatInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGMultiCombatInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGMultiCombatInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGUnpocketCombatInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGUnpocketCombatInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGUnpocketCombatInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGForceItemStashCombatInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGForceItemStashCombatInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGForceItemStashCombatInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGHitManagerComponent.ResolvePendingHitBlocks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQueuedAttack                               QueuedAttack                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bFinalCheck                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGHitManagerComponent::ResolvePendingHitBlocks(struct FQueuedAttack* QueuedAttack, bool bFinalCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGHitManagerComponent.ResolvePendingHitBlocks");
		
		UIGHitManagerComponent_ResolvePendingHitBlocks_Params params {};
		params.bFinalCheck = bFinalCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QueuedAttack != nullptr)
			*QueuedAttack = params.QueuedAttack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGHitManagerComponent.ResolvePendingBlocks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQueuedAttack                               QueuedAttack                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIGHitManagerComponent::ResolvePendingBlocks(struct FQueuedAttack* QueuedAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGHitManagerComponent.ResolvePendingBlocks");
		
		UIGHitManagerComponent_ResolvePendingBlocks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QueuedAttack != nullptr)
			*QueuedAttack = params.QueuedAttack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGHitManagerComponent.ProcessQueuedAttack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQueuedAttack                               QueuedAttack                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIGHitManagerComponent::ProcessQueuedAttack(struct FQueuedAttack* QueuedAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGHitManagerComponent.ProcessQueuedAttack");
		
		UIGHitManagerComponent_ProcessQueuedAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QueuedAttack != nullptr)
			*QueuedAttack = params.QueuedAttack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGHitManagerComponent.OnRep_ServerQueuedAttacks
	 * 		Flags  -> ()
	 */
	void UIGHitManagerComponent::OnRep_ServerQueuedAttacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGHitManagerComponent.OnRep_ServerQueuedAttacks");
		
		UIGHitManagerComponent_OnRep_ServerQueuedAttacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGHitManagerComponent.LockQueuedAttack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQueuedAttack                               QueuedAttack                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              TimeBeforeActivation                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGHitManagerComponent::LockQueuedAttack(struct FQueuedAttack* QueuedAttack, float TimeBeforeActivation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGHitManagerComponent.LockQueuedAttack");
		
		UIGHitManagerComponent_LockQueuedAttack_Params params {};
		params.TimeBeforeActivation = TimeBeforeActivation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QueuedAttack != nullptr)
			*QueuedAttack = params.QueuedAttack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGHitManagerComponent.HitManagerDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQueuedAttack                               InQueuedAttack                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIGHitManagerComponent::HitManagerDelegate__DelegateSignature(const struct FQueuedAttack& InQueuedAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGHitManagerComponent.HitManagerDelegate__DelegateSignature");
		
		UIGHitManagerComponent_HitManagerDelegate__DelegateSignature_Params params {};
		params.InQueuedAttack = InQueuedAttack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGHitManagerComponent.CheckForClashes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQueuedAttack                               QueuedAttack                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              TimeBeforeActivation                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGHitManagerComponent::CheckForClashes(struct FQueuedAttack* QueuedAttack, float TimeBeforeActivation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGHitManagerComponent.CheckForClashes");
		
		UIGHitManagerComponent_CheckForClashes_Params params {};
		params.TimeBeforeActivation = TimeBeforeActivation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QueuedAttack != nullptr)
			*QueuedAttack = params.QueuedAttack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGHitManagerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGHitManagerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGHitManagerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGHitReactor.OnReceivedHitWithKnockbackDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     KnockbackDirection                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGHitReactor::OnReceivedHitWithKnockbackDirection(const struct FVector& KnockbackDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGHitReactor.OnReceivedHitWithKnockbackDirection");
		
		UIGHitReactor_OnReceivedHitWithKnockbackDirection_Params params {};
		params.KnockbackDirection = KnockbackDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGHitReactor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGHitReactor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGHitReactor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGHitStunTimeDilation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGHitStunTimeDilation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGHitStunTimeDilation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractable.GetInteractionPromptLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InteractingActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UIGInteractable::GetInteractionPromptLocation(class AActor* InteractingActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractable.GetInteractionPromptLocation");
		
		UIGInteractable_GetInteractionPromptLocation_Params params {};
		params.InteractingActor = InteractingActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractable.GetInteractablePromptBehavior
	 * 		Flags  -> ()
	 */
	EInteractablePromptBehavior UIGInteractable::GetInteractablePromptBehavior()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractable.GetInteractablePromptBehavior");
		
		UIGInteractable_GetInteractablePromptBehavior_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGInteractable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGInteractable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGInteractable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableBoxComponent.OnOverlapEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGInteractableBoxComponent::OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableBoxComponent.OnOverlapEnd");
		
		UIGInteractableBoxComponent_OnOverlapEnd_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableBoxComponent.OnOverlapBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UIGInteractableBoxComponent::OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableBoxComponent.OnOverlapBegin");
		
		UIGInteractableBoxComponent_OnOverlapBegin_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGInteractableBoxComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGInteractableBoxComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGInteractableBoxComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGInteractableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGInteractableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGInteractableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGStaticInteractableActor.TimeTillResetToInteractable
	 * 		Flags  -> ()
	 */
	float AIGStaticInteractableActor::TimeTillResetToInteractable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGStaticInteractableActor.TimeTillResetToInteractable");
		
		AIGStaticInteractableActor_TimeTillResetToInteractable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGStaticInteractableActor.StopInteract
	 * 		Flags  -> ()
	 */
	void AIGStaticInteractableActor::StopInteract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGStaticInteractableActor.StopInteract");
		
		AIGStaticInteractableActor_StopInteract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGStaticInteractableActor.ShouldBeVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGStaticInteractableActorState                    PreviousState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EIGStaticInteractableActorState                    NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AIGStaticInteractableActor::ShouldBeVisible(EIGStaticInteractableActorState PreviousState, EIGStaticInteractableActorState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGStaticInteractableActor.ShouldBeVisible");
		
		AIGStaticInteractableActor_ShouldBeVisible_Params params {};
		params.PreviousState = PreviousState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGStaticInteractableActor.ResetTimerExpired
	 * 		Flags  -> ()
	 */
	void AIGStaticInteractableActor::ResetTimerExpired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGStaticInteractableActor.ResetTimerExpired");
		
		AIGStaticInteractableActor_ResetTimerExpired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGStaticInteractableActor.OnStartInteractSequenceEnded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInterrupted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGStaticInteractableActor::OnStartInteractSequenceEnded(class UAnimMontage* Montage, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGStaticInteractableActor.OnStartInteractSequenceEnded");
		
		AIGStaticInteractableActor_OnStartInteractSequenceEnded_Params params {};
		params.Montage = Montage;
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGStaticInteractableActor.OnRep_InteractableActorStateChanged
	 * 		Flags  -> ()
	 */
	void AIGStaticInteractableActor::OnRep_InteractableActorStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGStaticInteractableActor.OnRep_InteractableActorStateChanged");
		
		AIGStaticInteractableActor_OnRep_InteractableActorStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGStaticInteractableActor.IsInteractable
	 * 		Flags  -> ()
	 */
	bool AIGStaticInteractableActor::IsInteractable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGStaticInteractableActor.IsInteractable");
		
		AIGStaticInteractableActor_IsInteractable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGStaticInteractableActor.HandleInteractableStateChanged_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGStaticInteractableActorState                    PreviousState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EIGStaticInteractableActorState                    NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGStaticInteractableActor::HandleInteractableStateChanged_BP(EIGStaticInteractableActorState PreviousState, EIGStaticInteractableActorState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGStaticInteractableActor.HandleInteractableStateChanged_BP");
		
		AIGStaticInteractableActor_HandleInteractableStateChanged_BP_Params params {};
		params.PreviousState = PreviousState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGStaticInteractableActor.HandleInteractableReset_BP
	 * 		Flags  -> ()
	 */
	void AIGStaticInteractableActor::HandleInteractableReset_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGStaticInteractableActor.HandleInteractableReset_BP");
		
		AIGStaticInteractableActor_HandleInteractableReset_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGStaticInteractableActor.GetInteractableID
	 * 		Flags  -> ()
	 */
	struct FGuid AIGStaticInteractableActor::GetInteractableID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGStaticInteractableActor.GetInteractableID");
		
		AIGStaticInteractableActor_GetInteractableID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGStaticInteractableActor.GetInteractableActorState
	 * 		Flags  -> ()
	 */
	EIGStaticInteractableActorState AIGStaticInteractableActor::GetInteractableActorState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGStaticInteractableActor.GetInteractableActorState");
		
		AIGStaticInteractableActor_GetInteractableActorState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGStaticInteractableActor.GetCachedInteractingCharacter
	 * 		Flags  -> ()
	 */
	class AIGCharacter* AIGStaticInteractableActor::GetCachedInteractingCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGStaticInteractableActor.GetCachedInteractingCharacter");
		
		AIGStaticInteractableActor_GetCachedInteractingCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGStaticInteractableActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGStaticInteractableActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGStaticInteractableActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGItemEquipActor.UnpickupableStartInteraction_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGCharacter*                                InteractingCharacter                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGItemEquipActor::UnpickupableStartInteraction_BP(class AIGCharacter* InteractingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGItemEquipActor.UnpickupableStartInteraction_BP");
		
		AIGItemEquipActor_UnpickupableStartInteraction_BP_Params params {};
		params.InteractingCharacter = InteractingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGItemEquipActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGItemEquipActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGItemEquipActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableLootSpawner.TimeTillSpawnInteractable
	 * 		Flags  -> ()
	 */
	float AIGInteractableLootSpawner::TimeTillSpawnInteractable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableLootSpawner.TimeTillSpawnInteractable");
		
		AIGInteractableLootSpawner_TimeTillSpawnInteractable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableLootSpawner.SpawnTimerComplete
	 * 		Flags  -> ()
	 */
	void AIGInteractableLootSpawner::SpawnTimerComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableLootSpawner.SpawnTimerComplete");
		
		AIGInteractableLootSpawner_SpawnTimerComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableLootSpawner.SpawnerHasBeenHit_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccessfulHit                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGInteractableLootSpawner::SpawnerHasBeenHit_BP(bool bSuccessfulHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableLootSpawner.SpawnerHasBeenHit_BP");
		
		AIGInteractableLootSpawner_SpawnerHasBeenHit_BP_Params params {};
		params.bSuccessfulHit = bSuccessfulHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableLootSpawner.OnRep_SpawnIncoming
	 * 		Flags  -> ()
	 */
	void AIGInteractableLootSpawner::OnRep_SpawnIncoming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableLootSpawner.OnRep_SpawnIncoming");
		
		AIGInteractableLootSpawner_OnRep_SpawnIncoming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableLootSpawner.NeedsKeyToReact
	 * 		Flags  -> ()
	 */
	bool AIGInteractableLootSpawner::NeedsKeyToReact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableLootSpawner.NeedsKeyToReact");
		
		AIGInteractableLootSpawner_NeedsKeyToReact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInteractableLootSpawner.HandleSpawnIncomingEvent_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSpawnIncomingEvent                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGInteractableLootSpawner::HandleSpawnIncomingEvent_BP(bool bSpawnIncomingEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInteractableLootSpawner.HandleSpawnIncomingEvent_BP");
		
		AIGInteractableLootSpawner_HandleSpawnIncomingEvent_BP_Params params {};
		params.bSpawnIncomingEvent = bSpawnIncomingEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGInteractableLootSpawner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGInteractableLootSpawner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGInteractableLootSpawner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGProjectileOverrideSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGProjectileOverrideSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGProjectileOverrideSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGInteractiveObjectReactComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGInteractiveObjectReactComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGInteractiveObjectReactComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInventory.UpdateItemDurability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewDurability                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGInventory::UpdateItemDurability(int32_t NewDurability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInventory.UpdateItemDurability");
		
		UIGInventory_UpdateItemDurability_Params params {};
		params.NewDurability = NewDurability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInventory.TriggerSlotUpdateEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGInventorySlot                                   Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGInventory::TriggerSlotUpdateEvent(EIGInventorySlot Slot, bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInventory.TriggerSlotUpdateEvent");
		
		UIGInventory_TriggerSlotUpdateEvent_Params params {};
		params.Slot = Slot;
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInventory.TriggerDurabilityUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGInventorySlot                                   Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGInventory::TriggerDurabilityUpdate(EIGInventorySlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInventory.TriggerDurabilityUpdate");
		
		UIGInventory_TriggerDurabilityUpdate_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInventory.ServerSwapWithHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGInventorySlot                                   InSlot                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EIGStashType                                       InStashType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGInventory::ServerSwapWithHand(EIGInventorySlot InSlot, EIGStashType InStashType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInventory.ServerSwapWithHand");
		
		UIGInventory_ServerSwapWithHand_Params params {};
		params.InSlot = InSlot;
		params.InStashType = InStashType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInventory.OnRep_ItemInHand
	 * 		Flags  -> ()
	 */
	void UIGInventory::OnRep_ItemInHand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInventory.OnRep_ItemInHand");
		
		UIGInventory_OnRep_ItemInHand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInventory.OnRep_Inventory
	 * 		Flags  -> ()
	 */
	void UIGInventory::OnRep_Inventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInventory.OnRep_Inventory");
		
		UIGInventory_OnRep_Inventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInventory.OnFinishUnstash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInterrupted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGInventory::OnFinishUnstash(bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInventory.OnFinishUnstash");
		
		UIGInventory_OnFinishUnstash_Params params {};
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInventory.OnFinishStashHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInterrupted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGInventory::OnFinishStashHand(bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInventory.OnFinishStashHand");
		
		UIGInventory_OnFinishStashHand_Params params {};
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInventory.IsItemStashable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGInteractablePickup*                       Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGInventory::IsItemStashable(class AIGInteractablePickup* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInventory.IsItemStashable");
		
		UIGInventory_IsItemStashable_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInventory.IsItemInHandStashable
	 * 		Flags  -> ()
	 */
	bool UIGInventory::IsItemInHandStashable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInventory.IsItemInHandStashable");
		
		UIGInventory_IsItemInHandStashable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInventory.IsItemClassStashable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ItemClass                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGInventory::IsItemClassStashable(class UClass* ItemClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInventory.IsItemClassStashable");
		
		UIGInventory_IsItemClassStashable_Params params {};
		params.ItemClass = ItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInventory.HasEmptySlot
	 * 		Flags  -> ()
	 */
	bool UIGInventory::HasEmptySlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInventory.HasEmptySlot");
		
		UIGInventory_HasEmptySlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInventory.HandleInventoryUpdated
	 * 		Flags  -> ()
	 */
	void UIGInventory::HandleInventoryUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInventory.HandleInventoryUpdated");
		
		UIGInventory_HandleInventoryUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInventory.GetPendingUnstashType
	 * 		Flags  -> ()
	 */
	EIGStashabilityType UIGInventory::GetPendingUnstashType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInventory.GetPendingUnstashType");
		
		UIGInventory_GetPendingUnstashType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInventory.GetPendingStashType
	 * 		Flags  -> ()
	 */
	EIGStashabilityType UIGInventory::GetPendingStashType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInventory.GetPendingStashType");
		
		UIGInventory_GetPendingStashType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInventory.GetItemInSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGInventorySlot                                   Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FIGInventoryItem UIGInventory::GetItemInSlot(EIGInventorySlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInventory.GetItemInSlot");
		
		UIGInventory_GetItemInSlot_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInventory.GetIsSwapping
	 * 		Flags  -> ()
	 */
	bool UIGInventory::GetIsSwapping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInventory.GetIsSwapping");
		
		UIGInventory_GetIsSwapping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInventory.GetDisplayInfoForSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGInventorySlot                                   Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FIGItemDisplayInfo UIGInventory::GetDisplayInfoForSlot(EIGInventorySlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInventory.GetDisplayInfoForSlot");
		
		UIGInventory_GetDisplayInfoForSlot_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInventory.GetDisplayInfoForPickup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGInteractablePickup*                       InPickup                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FIGItemDisplayInfo UIGInventory::GetDisplayInfoForPickup(class AIGInteractablePickup* InPickup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInventory.GetDisplayInfoForPickup");
		
		UIGInventory_GetDisplayInfoForPickup_Params params {};
		params.InPickup = InPickup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInventory.GetDisplayInfoForItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGInventoryItem                            Item                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FIGItemDisplayInfo UIGInventory::GetDisplayInfoForItem(const struct FIGInventoryItem& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInventory.GetDisplayInfoForItem");
		
		UIGInventory_GetDisplayInfoForItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInventory.FinishDelayedSwap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInterrupted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGInventory::FinishDelayedSwap(class UAnimMontage* Montage, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInventory.FinishDelayedSwap");
		
		UIGInventory_FinishDelayedSwap_Params params {};
		params.Montage = Montage;
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInventory.DropItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UIGInventory::DropItems(int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInventory.DropItems");
		
		UIGInventory_DropItems_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInventory.DropItemFromSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGInventorySlot                                   Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGInventory::DropItemFromSlot(EIGInventorySlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInventory.DropItemFromSlot");
		
		UIGInventory_DropItemFromSlot_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInventory.DropAllItems
	 * 		Flags  -> ()
	 */
	void UIGInventory::DropAllItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInventory.DropAllItems");
		
		UIGInventory_DropAllItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInventory.ClientTriggerFailedSwap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGInventorySlot                                   Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGInventory::ClientTriggerFailedSwap(EIGInventorySlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInventory.ClientTriggerFailedSwap");
		
		UIGInventory_ClientTriggerFailedSwap_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInventory.CanSwapWithHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGInventorySlot                                   Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGInventory::CanSwapWithHand(EIGInventorySlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInventory.CanSwapWithHand");
		
		UIGInventory_CanSwapWithHand_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGInventory.CanPossiblySwapWithHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGInventorySlot                                   Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGInventory::CanPossiblySwapWithHand(EIGInventorySlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGInventory.CanPossiblySwapWithHand");
		
		UIGInventory_CanPossiblySwapWithHand_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGInventory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGInventory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGInventory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGStaticInteractableActorHitReact.InteractableHasBeenHit_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessfulHit                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGStaticInteractableActorHitReact::InteractableHasBeenHit_BP(bool bWasSuccessfulHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGStaticInteractableActorHitReact.InteractableHasBeenHit_BP");
		
		AIGStaticInteractableActorHitReact_InteractableHasBeenHit_BP_Params params {};
		params.bWasSuccessfulHit = bWasSuccessfulHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGStaticInteractableActorHitReact.AssignHitReactComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             SceneComponentHitReact                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGStaticInteractableActorHitReact::AssignHitReactComponent(class USceneComponent* SceneComponentHitReact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGStaticInteractableActorHitReact.AssignHitReactComponent");
		
		AIGStaticInteractableActorHitReact_AssignHitReactComponent_Params params {};
		params.SceneComponentHitReact = SceneComponentHitReact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGStaticInteractableActorHitReact.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGStaticInteractableActorHitReact::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGStaticInteractableActorHitReact");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGItemDispenserActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGItemDispenserActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGItemDispenserActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGItemDropComplete.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGItemDropComplete::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGItemDropComplete");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGItemPickupComplete.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGItemPickupComplete::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGItemPickupComplete");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGItemStartInteractComplete.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGItemStartInteractComplete::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGItemStartInteractComplete");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGItemStashComplete.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGItemStashComplete::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGItemStashComplete");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGItemStopInteractComplete.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGItemStopInteractComplete::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGItemStopInteractComplete");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGItemUseNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGItemUseNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGItemUseNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGJumpData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGJumpData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGJumpData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGStatUpdateStateNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGStatUpdateStateNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGStatUpdateStateNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGKeybatFlyDistanceStatNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGKeybatFlyDistanceStatNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGKeybatFlyDistanceStatNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGLedgeUpBoxComponent.OnOverlapBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UIGLedgeUpBoxComponent::OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGLedgeUpBoxComponent.OnOverlapBegin");
		
		UIGLedgeUpBoxComponent_OnOverlapBegin_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGLedgeUpBoxComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGLedgeUpBoxComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGLedgeUpBoxComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGLedgeUpTriggerVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGLedgeUpTriggerVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGLedgeUpTriggerVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGLocalActorPoolList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGLocalActorPoolList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGLocalActorPoolList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGLootableModuleMeshComponent.OnLootableStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EModuleLootState                                   NewLootState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGLootableModuleMeshComponent::OnLootableStateChanged(EModuleLootState NewLootState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGLootableModuleMeshComponent.OnLootableStateChanged");
		
		UIGLootableModuleMeshComponent_OnLootableStateChanged_Params params {};
		params.NewLootState = NewLootState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGLootableModuleMeshComponent.ChangeModuleLootState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EModuleLootState                                   NewLootState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGLootableModuleMeshComponent::ChangeModuleLootState(EModuleLootState NewLootState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGLootableModuleMeshComponent.ChangeModuleLootState");
		
		UIGLootableModuleMeshComponent_ChangeModuleLootState_Params params {};
		params.NewLootState = NewLootState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGLootableModuleMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGLootableModuleMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGLootableModuleMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGLootGrouping.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGLootGrouping::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGLootGrouping");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGLootProfileBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGLootProfileBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGLootProfileBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGSpecialMoveProfile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGSpecialMoveProfile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGSpecialMoveProfile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGLootProfile.GetAllUniqueLootTypes
	 * 		Flags  -> ()
	 */
	void UIGLootProfile::GetAllUniqueLootTypes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGLootProfile.GetAllUniqueLootTypes");
		
		UIGLootProfile_GetAllUniqueLootTypes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGLootProfile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGLootProfile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGLootProfile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGDisperseLootChanceTable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGDisperseLootChanceTable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGDisperseLootChanceTable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGCollectibleProfile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCollectibleProfile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGCollectibleProfile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGMatchTimeLootSelectionProfile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGMatchTimeLootSelectionProfile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGMatchTimeLootSelectionProfile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGLootManagerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGLootManagerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGLootManagerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGRollableLootActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGRollableLootActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGRollableLootActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGLootSpawner.SpawnTimerComplete
	 * 		Flags  -> ()
	 */
	void AIGLootSpawner::SpawnTimerComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGLootSpawner.SpawnTimerComplete");
		
		AIGLootSpawner_SpawnTimerComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGLootSpawner.OnRep_SpawnStateChanged
	 * 		Flags  -> ()
	 */
	void AIGLootSpawner::OnRep_SpawnStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGLootSpawner.OnRep_SpawnStateChanged");
		
		AIGLootSpawner_OnRep_SpawnStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGLootSpawner.HandleSpawnerStateChanged_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGSpawnerState                                    PreviousState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EIGSpawnerState                                    NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGLootSpawner::HandleSpawnerStateChanged_BP(EIGSpawnerState PreviousState, EIGSpawnerState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGLootSpawner.HandleSpawnerStateChanged_BP");
		
		AIGLootSpawner_HandleSpawnerStateChanged_BP_Params params {};
		params.PreviousState = PreviousState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGLootSpawner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGLootSpawner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGLootSpawner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGModUtils.RemoveIntMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGModValueInt                              InVal                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		struct FIGModStackInt                              ModToApply                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIGModUtils::RemoveIntMod(struct FIGModValueInt* InVal, const struct FIGModStackInt& ModToApply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGModUtils.RemoveIntMod");
		
		UIGModUtils_RemoveIntMod_Params params {};
		params.ModToApply = ModToApply;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InVal != nullptr)
			*InVal = params.InVal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGModUtils.RemoveFloatMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGModValueFloat                            InVal                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		struct FIGModStackFloat                            ModToApply                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIGModUtils::RemoveFloatMod(struct FIGModValueFloat* InVal, const struct FIGModStackFloat& ModToApply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGModUtils.RemoveFloatMod");
		
		UIGModUtils_RemoveFloatMod_Params params {};
		params.ModToApply = ModToApply;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InVal != nullptr)
			*InVal = params.InVal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGModUtils.GetIntMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGModValueInt                              InVal                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UIGModUtils::GetIntMod(const struct FIGModValueInt& InVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGModUtils.GetIntMod");
		
		UIGModUtils_GetIntMod_Params params {};
		params.InVal = InVal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGModUtils.GetFloatMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGModValueFloat                            InVal                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	float UIGModUtils::GetFloatMod(const struct FIGModValueFloat& InVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGModUtils.GetFloatMod");
		
		UIGModUtils_GetFloatMod_Params params {};
		params.InVal = InVal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGModUtils.ApplyIntMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGModValueInt                              InVal                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		struct FIGModStackInt                              ModToApply                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIGModUtils::ApplyIntMod(struct FIGModValueInt* InVal, const struct FIGModStackInt& ModToApply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGModUtils.ApplyIntMod");
		
		UIGModUtils_ApplyIntMod_Params params {};
		params.ModToApply = ModToApply;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InVal != nullptr)
			*InVal = params.InVal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGModUtils.ApplyFloatMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGModValueFloat                            InVal                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		struct FIGModStackFloat                            ModToApply                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIGModUtils::ApplyFloatMod(struct FIGModValueFloat* InVal, const struct FIGModStackFloat& ModToApply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGModUtils.ApplyFloatMod");
		
		UIGModUtils_ApplyFloatMod_Params params {};
		params.ModToApply = ModToApply;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InVal != nullptr)
			*InVal = params.InVal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGModUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGModUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGModUtils");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGMoveDisplacementState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGMoveDisplacementState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGMoveDisplacementState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGMovementInterruptState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGMovementInterruptState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGMovementInterruptState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGMoveMontage.GetSimpleMoveMontageData
	 * 		Flags  -> ()
	 */
	struct FIGSimpleMoveMontageData UIGMoveMontage::GetSimpleMoveMontageData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGMoveMontage.GetSimpleMoveMontageData");
		
		UIGMoveMontage_GetSimpleMoveMontageData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGMoveMontage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGMoveMontage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGMoveMontage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGMovesetComponent.SetSpecialTwo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGMoveMontage*                              InSpecialTwo                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMoveTier                                          InTier                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGMovesetComponent::SetSpecialTwo(class UIGMoveMontage* InSpecialTwo, EMoveTier InTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGMovesetComponent.SetSpecialTwo");
		
		UIGMovesetComponent_SetSpecialTwo_Params params {};
		params.InSpecialTwo = InSpecialTwo;
		params.InTier = InTier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGMovesetComponent.SetSpecialOne
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGMoveMontage*                              InSpecialOne                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMoveTier                                          InTier                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGMovesetComponent::SetSpecialOne(class UIGMoveMontage* InSpecialOne, EMoveTier InTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGMovesetComponent.SetSpecialOne");
		
		UIGMovesetComponent_SetSpecialOne_Params params {};
		params.InSpecialOne = InSpecialOne;
		params.InTier = InTier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGMovesetComponent.SetNextSpecialSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGMoveMontage*                              InSpecial                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGMovesetComponent::SetNextSpecialSlot(class UIGMoveMontage* InSpecial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGMovesetComponent.SetNextSpecialSlot");
		
		UIGMovesetComponent_SetNextSpecialSlot_Params params {};
		params.InSpecial = InSpecial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGMovesetComponent.ResetCharacterTransition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGGenericInputEvent*                        InEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AdditionalDurationMS                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGMovesetComponent::ResetCharacterTransition(class UIGGenericInputEvent* InEvent, int32_t AdditionalDurationMS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGMovesetComponent.ResetCharacterTransition");
		
		UIGMovesetComponent_ResetCharacterTransition_Params params {};
		params.InEvent = InEvent;
		params.AdditionalDurationMS = AdditionalDurationMS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGMovesetComponent.RemoveCharacterTransition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGGenericInputEvent*                        InEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGMovesetComponent::RemoveCharacterTransition(class UIGGenericInputEvent* InEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGMovesetComponent.RemoveCharacterTransition");
		
		UIGMovesetComponent_RemoveCharacterTransition_Params params {};
		params.InEvent = InEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGMovesetComponent.RecordInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMoveTrack                                         RequestedTrack                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EInputEvent                                        EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMoveInputDirection                                InputDirection                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGMovesetComponent::RecordInput(EMoveTrack RequestedTrack, EInputEvent EventType, EMoveInputDirection InputDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGMovesetComponent.RecordInput");
		
		UIGMovesetComponent_RecordInput_Params params {};
		params.RequestedTrack = RequestedTrack;
		params.EventType = EventType;
		params.InputDirection = InputDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGMovesetComponent.PrepareForNewTransition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGMoveMontage*                              NewMontage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGMovesetComponent::PrepareForNewTransition(class UIGMoveMontage* NewMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGMovesetComponent.PrepareForNewTransition");
		
		UIGMovesetComponent_PrepareForNewTransition_Params params {};
		params.NewMontage = NewMontage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGMovesetComponent.PopMoveTransitions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MovesetDataName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DelayMS                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGMovesetComponent::PopMoveTransitions(const class FName& MovesetDataName, int32_t DelayMS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGMovesetComponent.PopMoveTransitions");
		
		UIGMovesetComponent_PopMoveTransitions_Params params {};
		params.MovesetDataName = MovesetDataName;
		params.DelayMS = DelayMS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGMovesetComponent.OnRep_SpecialTwo
	 * 		Flags  -> ()
	 */
	void UIGMovesetComponent::OnRep_SpecialTwo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGMovesetComponent.OnRep_SpecialTwo");
		
		UIGMovesetComponent_OnRep_SpecialTwo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGMovesetComponent.OnRep_SpecialOne
	 * 		Flags  -> ()
	 */
	void UIGMovesetComponent::OnRep_SpecialOne()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGMovesetComponent.OnRep_SpecialOne");
		
		UIGMovesetComponent_OnRep_SpecialOne_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGMovesetComponent.ObtainPerk
	 * 		Flags  -> ()
	 */
	void UIGMovesetComponent::ObtainPerk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGMovesetComponent.ObtainPerk");
		
		UIGMovesetComponent_ObtainPerk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGMovesetComponent.IsInCombo
	 * 		Flags  -> ()
	 */
	bool UIGMovesetComponent::IsInCombo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGMovesetComponent.IsInCombo");
		
		UIGMovesetComponent_IsInCombo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGMovesetComponent.IsHolding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMoveTrack                                         TestedTrack                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGMovesetComponent::IsHolding(EMoveTrack TestedTrack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGMovesetComponent.IsHolding");
		
		UIGMovesetComponent_IsHolding_Params params {};
		params.TestedTrack = TestedTrack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGMovesetComponent.GetSpecialTwoTier
	 * 		Flags  -> ()
	 */
	EMoveTier UIGMovesetComponent::GetSpecialTwoTier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGMovesetComponent.GetSpecialTwoTier");
		
		UIGMovesetComponent_GetSpecialTwoTier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGMovesetComponent.GetSpecialTwo
	 * 		Flags  -> ()
	 */
	class UIGMoveMontage* UIGMovesetComponent::GetSpecialTwo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGMovesetComponent.GetSpecialTwo");
		
		UIGMovesetComponent_GetSpecialTwo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGMovesetComponent.GetSpecialOneTier
	 * 		Flags  -> ()
	 */
	EMoveTier UIGMovesetComponent::GetSpecialOneTier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGMovesetComponent.GetSpecialOneTier");
		
		UIGMovesetComponent_GetSpecialOneTier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGMovesetComponent.GetSpecialOne
	 * 		Flags  -> ()
	 */
	class UIGMoveMontage* UIGMovesetComponent::GetSpecialOne()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGMovesetComponent.GetSpecialOne");
		
		UIGMovesetComponent_GetSpecialOne_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGMovesetComponent.GetSpecialMovesetName
	 * 		Flags  -> ()
	 */
	class FName UIGMovesetComponent::GetSpecialMovesetName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGMovesetComponent.GetSpecialMovesetName");
		
		UIGMovesetComponent_GetSpecialMovesetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGMovesetComponent.GetOldestTimestamp
	 * 		Flags  -> ()
	 */
	int32_t UIGMovesetComponent::GetOldestTimestamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGMovesetComponent.GetOldestTimestamp");
		
		UIGMovesetComponent_GetOldestTimestamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGMovesetComponent.GetAimingContextname
	 * 		Flags  -> ()
	 */
	class FName UIGMovesetComponent::GetAimingContextname()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGMovesetComponent.GetAimingContextname");
		
		UIGMovesetComponent_GetAimingContextname_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGMovesetComponent.ClearCharacterTransitions
	 * 		Flags  -> ()
	 */
	void UIGMovesetComponent::ClearCharacterTransitions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGMovesetComponent.ClearCharacterTransitions");
		
		UIGMovesetComponent_ClearCharacterTransitions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGMovesetComponent.ClearAllPendingInputs
	 * 		Flags  -> ()
	 */
	void UIGMovesetComponent::ClearAllPendingInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGMovesetComponent.ClearAllPendingInputs");
		
		UIGMovesetComponent_ClearAllPendingInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGMovesetComponent.CharacterTransitionsInTrack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMoveTrack                                         InTrack                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UIGMovesetComponent::CharacterTransitionsInTrack(EMoveTrack InTrack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGMovesetComponent.CharacterTransitionsInTrack");
		
		UIGMovesetComponent_CharacterTransitionsInTrack_Params params {};
		params.InTrack = InTrack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGMovesetComponent.AddCharacterTransition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGGenericInputEvent*                        InEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AdditionalDurationMS                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGMovesetComponent::AddCharacterTransition(class UIGGenericInputEvent* InEvent, int32_t AdditionalDurationMS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGMovesetComponent.AddCharacterTransition");
		
		UIGMovesetComponent_AddCharacterTransition_Params params {};
		params.InEvent = InEvent;
		params.AdditionalDurationMS = AdditionalDurationMS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGMovesetComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGMovesetComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGMovesetComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGMovesetEventTransitions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGMovesetEventTransitions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGMovesetEventTransitions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGMovesetData.GetComboStrings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FIGBotComboString>                   OutComboStrings                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		ECharacterLocomotionState                          StartingState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGMovesetData::GetComboStrings(TArray<struct FIGBotComboString>* OutComboStrings, ECharacterLocomotionState StartingState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGMovesetData.GetComboStrings");
		
		UIGMovesetData_GetComboStrings_Params params {};
		params.StartingState = StartingState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutComboStrings != nullptr)
			*OutComboStrings = params.OutComboStrings;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGMovesetData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGMovesetData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGMovesetData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGMovesetSpecial.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGMovesetSpecial::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGMovesetSpecial");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGMoveTargetDisplacementState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGMoveTargetDisplacementState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGMoveTargetDisplacementState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGMoveTransitionWindow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGMoveTransitionWindow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGMoveTransitionWindow");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGMoveTransitionOnLocomotionState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGMoveTransitionOnLocomotionState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGMoveTransitionOnLocomotionState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGMoveTransitionOnStaminaState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGMoveTransitionOnStaminaState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGMoveTransitionOnStaminaState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGMoveTransitionOnTargetState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGMoveTransitionOnTargetState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGMoveTransitionOnTargetState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGTargetable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGTargetable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGTargetable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGCombatContextData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCombatContextData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGCombatContextData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGPingable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGPingable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGPingable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGOverrideFallDamageNotifyState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGOverrideFallDamageNotifyState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGOverrideFallDamageNotifyState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGOverrideLocomotionState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGOverrideLocomotionState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGOverrideLocomotionState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGPauseSuperstarPassives.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGPauseSuperstarPassives::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGPauseSuperstarPassives");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ToggleStaminaRegen
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::ToggleStaminaRegen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ToggleStaminaRegen");
		
		AIGPlayerController_ToggleStaminaRegen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ToggleSpectatorMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldSpectate                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ToggleSpectatorMode(bool bShouldSpectate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ToggleSpectatorMode");
		
		AIGPlayerController_ToggleSpectatorMode_Params params {};
		params.bShouldSpectate = bShouldSpectate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ToggleShowFameValue
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::ToggleShowFameValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ToggleShowFameValue");
		
		AIGPlayerController_ToggleShowFameValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ToggleScriptedNetPlayerWaypoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TargetTag                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ToggleScriptedNetPlayerWaypoints(const class FString& TargetTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ToggleScriptedNetPlayerWaypoints");
		
		AIGPlayerController_ToggleScriptedNetPlayerWaypoints_Params params {};
		params.TargetTag = TargetTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.TakeAPerk
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::TakeAPerk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.TakeAPerk");
		
		AIGPlayerController_TakeAPerk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.TagMe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NameTag                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::TagMe(const class FName& NameTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.TagMe");
		
		AIGPlayerController_TagMe_Params params {};
		params.NameTag = NameTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.StopSpecialMoveConsumableLoopAnimation
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::StopSpecialMoveConsumableLoopAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.StopSpecialMoveConsumableLoopAnimation");
		
		AIGPlayerController_StopSpecialMoveConsumableLoopAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.StopReading
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::StopReading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.StopReading");
		
		AIGPlayerController_StopReading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.StopAllScriptedPlayers
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::StopAllScriptedPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.StopAllScriptedPlayers");
		
		AIGPlayerController_StopAllScriptedPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.SetHUDToSpectatorState
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::SetHUDToSpectatorState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.SetHUDToSpectatorState");
		
		AIGPlayerController_SetHUDToSpectatorState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.SetAllToFollowMe
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::SetAllToFollowMe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.SetAllToFollowMe");
		
		AIGPlayerController_SetAllToFollowMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ServerTagMe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NameTag                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ServerTagMe(const class FName& NameTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ServerTagMe");
		
		AIGPlayerController_ServerTagMe_Params params {};
		params.NameTag = NameTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ServerSpawnBots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     SpawnPos                                                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TeamSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ServerSpawnBots(const class FString& Params, int32_t Count, const struct FVector& SpawnPos, int32_t TeamSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ServerSpawnBots");
		
		AIGPlayerController_ServerSpawnBots_Params params {};
		params.Params = Params;
		params.Count = Count;
		params.SpawnPos = SpawnPos;
		params.TeamSize = TeamSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ServerSetViewTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                NewTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ServerSetViewTarget(class APlayerState* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ServerSetViewTarget");
		
		AIGPlayerController_ServerSetViewTarget_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ServerRescueMe
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::ServerRescueMe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ServerRescueMe");
		
		AIGPlayerController_ServerRescueMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ServerRequestServerTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           requester                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              requestWorldTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ServerRequestServerTime(class APlayerController* requester, float requestWorldTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ServerRequestServerTime");
		
		AIGPlayerController_ServerRequestServerTime_Params params {};
		params.requester = requester;
		params.requestWorldTime = requestWorldTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ServerRequestReplicateServerStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldReplicate                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ServerRequestReplicateServerStats(bool bShouldReplicate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ServerRequestReplicateServerStats");
		
		AIGPlayerController_ServerRequestReplicateServerStats_Params params {};
		params.bShouldReplicate = bShouldReplicate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ServerRequestLevelRestart
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::ServerRequestLevelRestart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ServerRequestLevelRestart");
		
		AIGPlayerController_ServerRequestLevelRestart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ServerRequestChangeState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ServerRequestChangeState(const class FName& NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ServerRequestChangeState");
		
		AIGPlayerController_ServerRequestChangeState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ServerReplicateStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldReplicate                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ServerReplicateStats(bool bShouldReplicate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ServerReplicateStats");
		
		AIGPlayerController_ServerReplicateStats_Params params {};
		params.bShouldReplicate = bShouldReplicate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ServerKillMe
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::ServerKillMe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ServerKillMe");
		
		AIGPlayerController_ServerKillMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ServerExecuteCmd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Cmd                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ServerExecuteCmd(const class FString& Cmd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ServerExecuteCmd");
		
		AIGPlayerController_ServerExecuteCmd_Params params {};
		params.Cmd = Cmd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ServerDestroyBot
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::ServerDestroyBot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ServerDestroyBot");
		
		AIGPlayerController_ServerDestroyBot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ServerDebugToggleStaminaRegen
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::ServerDebugToggleStaminaRegen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ServerDebugToggleStaminaRegen");
		
		AIGPlayerController_ServerDebugToggleStaminaRegen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ServerDebugSpawnRandomItem
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::ServerDebugSpawnRandomItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ServerDebugSpawnRandomItem");
		
		AIGPlayerController_ServerDebugSpawnRandomItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ServerDebugSpawnItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InteractableType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ServerDebugSpawnItem(class UClass* InteractableType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ServerDebugSpawnItem");
		
		AIGPlayerController_ServerDebugSpawnItem_Params params {};
		params.InteractableType = InteractableType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ServerDebugSpawnAllCoinSplines
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::ServerDebugSpawnAllCoinSplines()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ServerDebugSpawnAllCoinSplines");
		
		AIGPlayerController_ServerDebugSpawnAllCoinSplines_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ServerDebugSetStamina
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TargetStamina                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ServerDebugSetStamina(float TargetStamina)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ServerDebugSetStamina");
		
		AIGPlayerController_ServerDebugSetStamina_Params params {};
		params.TargetStamina = TargetStamina;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ServerDebugSetPlayerSizeModifier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Modifier                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ServerDebugSetPlayerSizeModifier(float Modifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ServerDebugSetPlayerSizeModifier");
		
		AIGPlayerController_ServerDebugSetPlayerSizeModifier_Params params {};
		params.Modifier = Modifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ServerDebugSetHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TargetHealth                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ServerDebugSetHealth(float TargetHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ServerDebugSetHealth");
		
		AIGPlayerController_ServerDebugSetHealth_Params params {};
		params.TargetHealth = TargetHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ServerDebugSetFame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TargetFame                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ServerDebugSetFame(float TargetFame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ServerDebugSetFame");
		
		AIGPlayerController_ServerDebugSetFame_Params params {};
		params.TargetFame = TargetFame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ServerDebugRerollLoots
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::ServerDebugRerollLoots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ServerDebugRerollLoots");
		
		AIGPlayerController_ServerDebugRerollLoots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ServerDebugInitializeLootTableDummies
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::ServerDebugInitializeLootTableDummies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ServerDebugInitializeLootTableDummies");
		
		AIGPlayerController_ServerDebugInitializeLootTableDummies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ServerDebugAddPerkXP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PerkXPAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ServerDebugAddPerkXP(float PerkXPAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ServerDebugAddPerkXP");
		
		AIGPlayerController_ServerDebugAddPerkXP_Params params {};
		params.PerkXPAmount = PerkXPAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ServerCleanUpAllPooledActor
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::ServerCleanUpAllPooledActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ServerCleanUpAllPooledActor");
		
		AIGPlayerController_ServerCleanUpAllPooledActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ServerAckedGuidSync
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::ServerAckedGuidSync()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ServerAckedGuidSync");
		
		AIGPlayerController_ServerAckedGuidSync_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.RescueMe
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::RescueMe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.RescueMe");
		
		AIGPlayerController_RescueMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.RequestSpawnBotWithTree
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      BehaviorTreeName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::RequestSpawnBotWithTree(const class FString& BehaviorTreeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.RequestSpawnBotWithTree");
		
		AIGPlayerController_RequestSpawnBotWithTree_Params params {};
		params.BehaviorTreeName = BehaviorTreeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.RequestSpawnBotTeams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ProfileName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TeamSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TeamCount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::RequestSpawnBotTeams(const class FString& ProfileName, int32_t TeamSize, int32_t TeamCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.RequestSpawnBotTeams");
		
		AIGPlayerController_RequestSpawnBotTeams_Params params {};
		params.ProfileName = ProfileName;
		params.TeamSize = TeamSize;
		params.TeamCount = TeamCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.RequestSpawnBotsWithTree
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      BehaviorTreeName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::RequestSpawnBotsWithTree(const class FString& BehaviorTreeName, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.RequestSpawnBotsWithTree");
		
		AIGPlayerController_RequestSpawnBotsWithTree_Params params {};
		params.BehaviorTreeName = BehaviorTreeName;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.RequestSpawnBots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ProfileName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::RequestSpawnBots(const class FString& ProfileName, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.RequestSpawnBots");
		
		AIGPlayerController_RequestSpawnBots_Params params {};
		params.ProfileName = ProfileName;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.RequestSpawnBot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ProfileName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::RequestSpawnBot(const class FString& ProfileName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.RequestSpawnBot");
		
		AIGPlayerController_RequestSpawnBot_Params params {};
		params.ProfileName = ProfileName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.RequestLevelRestart
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::RequestLevelRestart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.RequestLevelRestart");
		
		AIGPlayerController_RequestLevelRestart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.RequestDestroyBot
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::RequestDestroyBot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.RequestDestroyBot");
		
		AIGPlayerController_RequestDestroyBot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.KillMe
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::KillMe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.KillMe");
		
		AIGPlayerController_KillMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.HandleOnClientIsAimingCannonChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsAimingCannon                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::HandleOnClientIsAimingCannonChanged(bool IsAimingCannon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.HandleOnClientIsAimingCannonChanged");
		
		AIGPlayerController_HandleOnClientIsAimingCannonChanged_Params params {};
		params.IsAimingCannon = IsAimingCannon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.GetLocalActorPool
	 * 		Flags  -> ()
	 */
	class UIGActorPool* AIGPlayerController::GetLocalActorPool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.GetLocalActorPool");
		
		AIGPlayerController_GetLocalActorPool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ExecVanishAllCoins
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::ExecVanishAllCoins()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ExecVanishAllCoins");
		
		AIGPlayerController_ExecVanishAllCoins_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ExecSpawnRandomItem
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::ExecSpawnRandomItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ExecSpawnRandomItem");
		
		AIGPlayerController_ExecSpawnRandomItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ExecSpawnAllCoinSplines
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::ExecSpawnAllCoinSplines()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ExecSpawnAllCoinSplines");
		
		AIGPlayerController_ExecSpawnAllCoinSplines_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ExecShowLockedCrateRadar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldShow                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ExecShowLockedCrateRadar(bool bShouldShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ExecShowLockedCrateRadar");
		
		AIGPlayerController_ExecShowLockedCrateRadar_Params params {};
		params.bShouldShow = bShouldShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ExecShowDamageDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldShow                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ExecShowDamageDebug(bool bShouldShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ExecShowDamageDebug");
		
		AIGPlayerController_ExecShowDamageDebug_Params params {};
		params.bShouldShow = bShouldShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ExecSetStamina
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TargetStamina                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ExecSetStamina(float TargetStamina)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ExecSetStamina");
		
		AIGPlayerController_ExecSetStamina_Params params {};
		params.TargetStamina = TargetStamina;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ExecSetPlayerSizeModifier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Modifier                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ExecSetPlayerSizeModifier(float Modifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ExecSetPlayerSizeModifier");
		
		AIGPlayerController_ExecSetPlayerSizeModifier_Params params {};
		params.Modifier = Modifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ExecSetHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TargetHealth                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ExecSetHealth(float TargetHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ExecSetHealth");
		
		AIGPlayerController_ExecSetHealth_Params params {};
		params.TargetHealth = TargetHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ExecSetFame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TargetFame                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ExecSetFame(float TargetFame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ExecSetFame");
		
		AIGPlayerController_ExecSetFame_Params params {};
		params.TargetFame = TargetFame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ExecSetCombatMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsInCombatMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ExecSetCombatMode(bool IsInCombatMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ExecSetCombatMode");
		
		AIGPlayerController_ExecSetCombatMode_Params params {};
		params.IsInCombatMode = IsInCombatMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ExecRerollLoots
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::ExecRerollLoots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ExecRerollLoots");
		
		AIGPlayerController_ExecRerollLoots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ExecLogIfTeammateIsNetRelevant
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::ExecLogIfTeammateIsNetRelevant()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ExecLogIfTeammateIsNetRelevant");
		
		AIGPlayerController_ExecLogIfTeammateIsNetRelevant_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ExecInitializeLootTableDummies
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::ExecInitializeLootTableDummies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ExecInitializeLootTableDummies");
		
		AIGPlayerController_ExecInitializeLootTableDummies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ExecEnableFame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ExecEnableFame(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ExecEnableFame");
		
		AIGPlayerController_ExecEnableFame_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ExecDropMagazines
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDrop                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ExecDropMagazines(bool bDrop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ExecDropMagazines");
		
		AIGPlayerController_ExecDropMagazines_Params params {};
		params.bDrop = bDrop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ExecCleanUpAllPooledActor
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::ExecCleanUpAllPooledActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ExecCleanUpAllPooledActor");
		
		AIGPlayerController_ExecCleanUpAllPooledActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ExecAddPerkXP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PerkXPAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ExecAddPerkXP(float PerkXPAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ExecAddPerkXP");
		
		AIGPlayerController_ExecAddPerkXP_Params params {};
		params.PerkXPAmount = PerkXPAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.DownTeammate
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::DownTeammate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.DownTeammate");
		
		AIGPlayerController_DownTeammate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ClientStopScriptedNetPlayer
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::ClientStopScriptedNetPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ClientStopScriptedNetPlayer");
		
		AIGPlayerController_ClientStopScriptedNetPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ClientSetScriptedNetPlayerWaypoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TargetTag                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ClientSetScriptedNetPlayerWaypoints(const class FString& TargetTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ClientSetScriptedNetPlayerWaypoints");
		
		AIGPlayerController_ClientSetScriptedNetPlayerWaypoints_Params params {};
		params.TargetTag = TargetTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ClientSetScriptedNetPlayerToFollow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGCharacter*                                FollowCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ClientSetScriptedNetPlayerToFollow(class AIGCharacter* FollowCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ClientSetScriptedNetPlayerToFollow");
		
		AIGPlayerController_ClientSetScriptedNetPlayerToFollow_Params params {};
		params.FollowCharacter = FollowCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ClientRequestAckOfGuidSync
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::ClientRequestAckOfGuidSync()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ClientRequestAckOfGuidSync");
		
		AIGPlayerController_ClientRequestAckOfGuidSync_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ClientReportServerTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              requestWorldTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              serverTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ClientReportServerTime(float requestWorldTime, float serverTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ClientReportServerTime");
		
		AIGPlayerController_ClientReportServerTime_Params params {};
		params.requestWorldTime = requestWorldTime;
		params.serverTime = serverTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ClientPerformSpecialMoveEquipChoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGMoveMontage*                              MoveMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMoveTier                                          SpecialTier                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ClientPerformSpecialMoveEquipChoice(class UIGMoveMontage* MoveMontage, EMoveTier SpecialTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ClientPerformSpecialMoveEquipChoice");
		
		AIGPlayerController_ClientPerformSpecialMoveEquipChoice_Params params {};
		params.MoveMontage = MoveMontage;
		params.SpecialTier = SpecialTier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ClientForceExit
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::ClientForceExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ClientForceExit");
		
		AIGPlayerController_ClientForceExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ClearPendingCombatInput
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::ClearPendingCombatInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ClearPendingCombatInput");
		
		AIGPlayerController_ClearPendingCombatInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ChangeCombatContextBehavior
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ContextName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Behavior                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ChangeCombatContextBehavior(const class FName& ContextName, int32_t Behavior)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ChangeCombatContextBehavior");
		
		AIGPlayerController_ChangeCombatContextBehavior_Params params {};
		params.ContextName = ContextName;
		params.Behavior = Behavior;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.ChangeAutoChargeReleaseBehavior
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ContextName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShouldTurnOn                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerController::ChangeAutoChargeReleaseBehavior(const class FName& ContextName, bool bShouldTurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.ChangeAutoChargeReleaseBehavior");
		
		AIGPlayerController_ChangeAutoChargeReleaseBehavior_Params params {};
		params.ContextName = ContextName;
		params.bShouldTurnOn = bShouldTurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.BroadcastOnSpecialMoveConsumableConsumed
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::BroadcastOnSpecialMoveConsumableConsumed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.BroadcastOnSpecialMoveConsumableConsumed");
		
		AIGPlayerController_BroadcastOnSpecialMoveConsumableConsumed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.AssignMoveToEquipToSlotTwo
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::AssignMoveToEquipToSlotTwo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.AssignMoveToEquipToSlotTwo");
		
		AIGPlayerController_AssignMoveToEquipToSlotTwo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerController.AssignMoveToEquipToSlotOne
	 * 		Flags  -> ()
	 */
	void AIGPlayerController::AssignMoveToEquipToSlotOne()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerController.AssignMoveToEquipToSlotOne");
		
		AIGPlayerController_AssignMoveToEquipToSlotOne_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGPlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGPlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGPlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerData.TryGetStringJsonValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ValueName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGPlayerData::TryGetStringJsonValue(const class FString& ValueName, class FString* OutValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerData.TryGetStringJsonValue");
		
		UIGPlayerData_TryGetStringJsonValue_Params params {};
		params.ValueName = ValueName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutValue != nullptr)
			*OutValue = params.OutValue;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerData.TryGetIntJsonValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ValueName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGPlayerData::TryGetIntJsonValue(const class FString& ValueName, int32_t* OutValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerData.TryGetIntJsonValue");
		
		UIGPlayerData_TryGetIntJsonValue_Params params {};
		params.ValueName = ValueName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutValue != nullptr)
			*OutValue = params.OutValue;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerData.TryGetFloatJsonValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ValueName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGPlayerData::TryGetFloatJsonValue(const class FString& ValueName, float* OutValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerData.TryGetFloatJsonValue");
		
		UIGPlayerData_TryGetFloatJsonValue_Params params {};
		params.ValueName = ValueName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutValue != nullptr)
			*OutValue = params.OutValue;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerData.TryGetBoolJsonValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ValueName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OutValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGPlayerData::TryGetBoolJsonValue(const class FString& ValueName, bool* OutValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerData.TryGetBoolJsonValue");
		
		UIGPlayerData_TryGetBoolJsonValue_Params params {};
		params.ValueName = ValueName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutValue != nullptr)
			*OutValue = params.OutValue;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerData.SetStringJsonValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ValueName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGPlayerData::SetStringJsonValue(const class FString& ValueName, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerData.SetStringJsonValue");
		
		UIGPlayerData_SetStringJsonValue_Params params {};
		params.ValueName = ValueName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerData.SetIntJsonValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ValueName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGPlayerData::SetIntJsonValue(const class FString& ValueName, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerData.SetIntJsonValue");
		
		UIGPlayerData_SetIntJsonValue_Params params {};
		params.ValueName = ValueName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerData.SetFloatJsonValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ValueName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGPlayerData::SetFloatJsonValue(const class FString& ValueName, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerData.SetFloatJsonValue");
		
		UIGPlayerData_SetFloatJsonValue_Params params {};
		params.ValueName = ValueName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerData.SetBoolJsonValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ValueName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGPlayerData::SetBoolJsonValue(const class FString& ValueName, bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerData.SetBoolJsonValue");
		
		UIGPlayerData_SetBoolJsonValue_Params params {};
		params.ValueName = ValueName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerData.LogJsonData
	 * 		Flags  -> ()
	 */
	void UIGPlayerData::LogJsonData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerData.LogJsonData");
		
		UIGPlayerData_LogJsonData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerData.IsJsonDataInitialized
	 * 		Flags  -> ()
	 */
	bool UIGPlayerData::IsJsonDataInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerData.IsJsonDataInitialized");
		
		UIGPlayerData_IsJsonDataInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGPlayerData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGPlayerData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGPlayerData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerState.UpdateKillerPlayerState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                KillerPlayerState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerState::UpdateKillerPlayerState(class APlayerState* KillerPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerState.UpdateKillerPlayerState");
		
		AIGPlayerState_UpdateKillerPlayerState_Params params {};
		params.KillerPlayerState = KillerPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGPlayerState.OnTeamLeaderUpdated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsTeamLeader                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerState::OnTeamLeaderUpdated__DelegateSignature(bool bIsTeamLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGPlayerState.OnTeamLeaderUpdated__DelegateSignature");
		
		AIGPlayerState_OnTeamLeaderUpdated__DelegateSignature_Params params {};
		params.bIsTeamLeader = bIsTeamLeader;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerState.OnRep_TeamID
	 * 		Flags  -> ()
	 */
	void AIGPlayerState::OnRep_TeamID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerState.OnRep_TeamID");
		
		AIGPlayerState_OnRep_TeamID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerState.OnRep_IsTeamLeader
	 * 		Flags  -> ()
	 */
	void AIGPlayerState::OnRep_IsTeamLeader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerState.OnRep_IsTeamLeader");
		
		AIGPlayerState_OnRep_IsTeamLeader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerState.OnRep_IsLowHealth
	 * 		Flags  -> ()
	 */
	void AIGPlayerState::OnRep_IsLowHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerState.OnRep_IsLowHealth");
		
		AIGPlayerState_OnRep_IsLowHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerState.OnRep_IsInCombat
	 * 		Flags  -> ()
	 */
	void AIGPlayerState::OnRep_IsInCombat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerState.OnRep_IsInCombat");
		
		AIGPlayerState_OnRep_IsInCombat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerState.IsTeamLeader
	 * 		Flags  -> ()
	 */
	bool AIGPlayerState::IsTeamLeader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerState.IsTeamLeader");
		
		AIGPlayerState_IsTeamLeader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerState.IsLocalPlayerState
	 * 		Flags  -> ()
	 */
	bool AIGPlayerState::IsLocalPlayerState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerState.IsLocalPlayerState");
		
		AIGPlayerState_IsLocalPlayerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerState.HasLaunchControl
	 * 		Flags  -> ()
	 */
	bool AIGPlayerState::HasLaunchControl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerState.HasLaunchControl");
		
		AIGPlayerState_HasLaunchControl_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerState.HandleOnTeammateLeftServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGPlayerState*                              ExitingTeammate                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerState::HandleOnTeammateLeftServer(class AIGPlayerState* ExitingTeammate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerState.HandleOnTeammateLeftServer");
		
		AIGPlayerState_HandleOnTeammateLeftServer_Params params {};
		params.ExitingTeammate = ExitingTeammate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerState.HandleOnTeammateDied
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGPlayerState*                              TeammatePlayerState                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerState::HandleOnTeammateDied(class AIGPlayerState* TeammatePlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerState.HandleOnTeammateDied");
		
		AIGPlayerState_HandleOnTeammateDied_Params params {};
		params.TeammatePlayerState = TeammatePlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerState.HandleOnTeammateCannonLanded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGPlayerState*                              TeammatePlayerState                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerState::HandleOnTeammateCannonLanded(class AIGPlayerState* TeammatePlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerState.HandleOnTeammateCannonLanded");
		
		AIGPlayerState_HandleOnTeammateCannonLanded_Params params {};
		params.TeammatePlayerState = TeammatePlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerState.HandleOnTeammateAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGPlayerState*                              TeammatePlayerState                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerState::HandleOnTeammateAdded(class AIGPlayerState* TeammatePlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerState.HandleOnTeammateAdded");
		
		AIGPlayerState_HandleOnTeammateAdded_Params params {};
		params.TeammatePlayerState = TeammatePlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerState.GetTeamInfoForPlayerState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTeamInfo                                   OutTeamInfo                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerState::GetTeamInfoForPlayerState(struct FTeamInfo* OutTeamInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerState.GetTeamInfoForPlayerState");
		
		AIGPlayerState_GetTeamInfoForPlayerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTeamInfo != nullptr)
			*OutTeamInfo = params.OutTeamInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerState.GetTeamID
	 * 		Flags  -> ()
	 */
	struct FGuid AIGPlayerState::GetTeamID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerState.GetTeamID");
		
		AIGPlayerState_GetTeamID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerState.GetStatsSystem
	 * 		Flags  -> ()
	 */
	class UIGStatsSystem* AIGPlayerState::GetStatsSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerState.GetStatsSystem");
		
		AIGPlayerState_GetStatsSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerState.GetPartyMemberID
	 * 		Flags  -> ()
	 */
	int32_t AIGPlayerState::GetPartyMemberID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerState.GetPartyMemberID");
		
		AIGPlayerState_GetPartyMemberID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerState.ClientUpdateAchievement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGAchievement                                     Achievement                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NewProgress                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EIGAchievementStatProgressionType                  ProgressionType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerState::ClientUpdateAchievement(EIGAchievement Achievement, int32_t NewProgress, EIGAchievementStatProgressionType ProgressionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerState.ClientUpdateAchievement");
		
		AIGPlayerState_ClientUpdateAchievement_Params params {};
		params.Achievement = Achievement;
		params.NewProgress = NewProgress;
		params.ProgressionType = ProgressionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerState.ClientSetEOSLobbyId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InEOSLobbyId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPlayerState::ClientSetEOSLobbyId(const class FString& InEOSLobbyId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerState.ClientSetEOSLobbyId");
		
		AIGPlayerState_ClientSetEOSLobbyId_Params params {};
		params.InEOSLobbyId = InEOSLobbyId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPlayerState.Client_DumpServerTrackedStatsStoredOnClient
	 * 		Flags  -> ()
	 */
	void AIGPlayerState::Client_DumpServerTrackedStatsStoredOnClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPlayerState.Client_DumpServerTrackedStatsStoredOnClient");
		
		AIGPlayerState_Client_DumpServerTrackedStatsStoredOnClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGPlayerState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGPlayerState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGPlayerState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPooledActor.OnReturnedToPool
	 * 		Flags  -> ()
	 */
	void UIGPooledActor::OnReturnedToPool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPooledActor.OnReturnedToPool");
		
		UIGPooledActor_OnReturnedToPool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPooledActor.OnRemovedFromPool
	 * 		Flags  -> ()
	 */
	void UIGPooledActor::OnRemovedFromPool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPooledActor.OnRemovedFromPool");
		
		UIGPooledActor_OnRemovedFromPool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGPooledActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGPooledActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGPooledActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPoseSpotActor.UpdatePoseSpotHighlight_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PlayerDistance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsInRange                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPoseSpotActor::UpdatePoseSpotHighlight_BP(float PlayerDistance, bool IsInRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPoseSpotActor.UpdatePoseSpotHighlight_BP");
		
		AIGPoseSpotActor_UpdatePoseSpotHighlight_BP_Params params {};
		params.PlayerDistance = PlayerDistance;
		params.IsInRange = IsInRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPoseSpotActor.SetInitialState
	 * 		Flags  -> ()
	 */
	void AIGPoseSpotActor::SetInitialState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPoseSpotActor.SetInitialState");
		
		AIGPoseSpotActor_SetInitialState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPoseSpotActor.OnRep_PoseSpotActorStateChanged
	 * 		Flags  -> ()
	 */
	void AIGPoseSpotActor::OnRep_PoseSpotActorStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPoseSpotActor.OnRep_PoseSpotActorStateChanged");
		
		AIGPoseSpotActor_OnRep_PoseSpotActorStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPoseSpotActor.OnRep_HasActivatingCharactersChanged
	 * 		Flags  -> ()
	 */
	void AIGPoseSpotActor::OnRep_HasActivatingCharactersChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPoseSpotActor.OnRep_HasActivatingCharactersChanged");
		
		AIGPoseSpotActor_OnRep_HasActivatingCharactersChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPoseSpotActor.OnOverlapEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPoseSpotActor::OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPoseSpotActor.OnOverlapEnd");
		
		AIGPoseSpotActor_OnOverlapEnd_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPoseSpotActor.OnOverlapBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AIGPoseSpotActor::OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPoseSpotActor.OnOverlapBegin");
		
		AIGPoseSpotActor_OnOverlapBegin_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPoseSpotActor.OnMontageStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AIGCharacter*                                Char                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPoseSpotActor::OnMontageStarted(class UAnimMontage* Montage, class AIGCharacter* Char)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPoseSpotActor.OnMontageStarted");
		
		AIGPoseSpotActor_OnMontageStarted_Params params {};
		params.Montage = Montage;
		params.Char = Char;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPoseSpotActor.HandlePoseSpotActorStateChanged_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGPoseSpotActorState                              PreviousState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EIGPoseSpotActorState                              NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPoseSpotActor::HandlePoseSpotActorStateChanged_BP(EIGPoseSpotActorState PreviousState, EIGPoseSpotActorState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPoseSpotActor.HandlePoseSpotActorStateChanged_BP");
		
		AIGPoseSpotActor_HandlePoseSpotActorStateChanged_BP_Params params {};
		params.PreviousState = PreviousState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPoseSpotActor.HandleHasCharactersOnPoseSpot_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasCharactersOnPoseSpot                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPoseSpotActor::HandleHasCharactersOnPoseSpot_BP(bool HasCharactersOnPoseSpot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPoseSpotActor.HandleHasCharactersOnPoseSpot_BP");
		
		AIGPoseSpotActor_HandleHasCharactersOnPoseSpot_BP_Params params {};
		params.HasCharactersOnPoseSpot = HasCharactersOnPoseSpot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPoseSpotActor.GetPoseSpotActorState
	 * 		Flags  -> ()
	 */
	EIGPoseSpotActorState AIGPoseSpotActor::GetPoseSpotActorState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPoseSpotActor.GetPoseSpotActorState");
		
		AIGPoseSpotActor_GetPoseSpotActorState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPoseSpotActor.CooldownStateOnTimerFinished
	 * 		Flags  -> ()
	 */
	void AIGPoseSpotActor::CooldownStateOnTimerFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPoseSpotActor.CooldownStateOnTimerFinished");
		
		AIGPoseSpotActor_CooldownStateOnTimerFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPoseSpotActor.CompletedStateOnTimerFinished
	 * 		Flags  -> ()
	 */
	void AIGPoseSpotActor::CompletedStateOnTimerFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPoseSpotActor.CompletedStateOnTimerFinished");
		
		AIGPoseSpotActor_CompletedStateOnTimerFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPoseSpotActor.ActivatedStateOnTimerFinished
	 * 		Flags  -> ()
	 */
	void AIGPoseSpotActor::ActivatedStateOnTimerFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPoseSpotActor.ActivatedStateOnTimerFinished");
		
		AIGPoseSpotActor_ActivatedStateOnTimerFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPoseSpotActor.ActivatedStateOnMontageEnded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInterrupted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGPoseSpotActor::ActivatedStateOnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPoseSpotActor.ActivatedStateOnMontageEnded");
		
		AIGPoseSpotActor_ActivatedStateOnMontageEnded_Params params {};
		params.Montage = Montage;
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGPoseSpotActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGPoseSpotActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGPoseSpotActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPoseSpotDetectComponent.OnOverlapEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGPoseSpotDetectComponent::OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPoseSpotDetectComponent.OnOverlapEnd");
		
		UIGPoseSpotDetectComponent_OnOverlapEnd_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPoseSpotDetectComponent.OnOverlapBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UIGPoseSpotDetectComponent::OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPoseSpotDetectComponent.OnOverlapBegin");
		
		UIGPoseSpotDetectComponent_OnOverlapBegin_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGPoseSpotDetectComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGPoseSpotDetectComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGPoseSpotDetectComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPostProcessAnimInstance.IsUsingBlueprintPath
	 * 		Flags  -> ()
	 */
	bool UIGPostProcessAnimInstance::IsUsingBlueprintPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPostProcessAnimInstance.IsUsingBlueprintPath");
		
		UIGPostProcessAnimInstance_IsUsingBlueprintPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPostProcessAnimInstance.InitFlexySystemBP
	 * 		Flags  -> ()
	 */
	void UIGPostProcessAnimInstance::InitFlexySystemBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPostProcessAnimInstance.InitFlexySystemBP");
		
		UIGPostProcessAnimInstance_InitFlexySystemBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPostProcessAnimInstance.GetSocketScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UIGPostProcessAnimInstance::GetSocketScale(const class FName& SocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPostProcessAnimInstance.GetSocketScale");
		
		UIGPostProcessAnimInstance_GetSocketScale_Params params {};
		params.SocketName = SocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPostProcessAnimInstance.GetSocketRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator UIGPostProcessAnimInstance::GetSocketRotation(const class FName& SocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPostProcessAnimInstance.GetSocketRotation");
		
		UIGPostProcessAnimInstance_GetSocketRotation_Params params {};
		params.SocketName = SocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPostProcessAnimInstance.GetSocketLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UIGPostProcessAnimInstance::GetSocketLocation(const class FName& SocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPostProcessAnimInstance.GetSocketLocation");
		
		UIGPostProcessAnimInstance_GetSocketLocation_Params params {};
		params.SocketName = SocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPostProcessAnimInstance.FPIK_InitBP
	 * 		Flags  -> ()
	 */
	void UIGPostProcessAnimInstance::FPIK_InitBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPostProcessAnimInstance.FPIK_InitBP");
		
		UIGPostProcessAnimInstance_FPIK_InitBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPostProcessAnimInstance.FPIK_DebugDisplayBP
	 * 		Flags  -> ()
	 */
	void UIGPostProcessAnimInstance::FPIK_DebugDisplayBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPostProcessAnimInstance.FPIK_DebugDisplayBP");
		
		UIGPostProcessAnimInstance_FPIK_DebugDisplayBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPostProcessAnimInstance.Foot_Placement_TickNative
	 * 		Flags  -> ()
	 */
	void UIGPostProcessAnimInstance::Foot_Placement_TickNative()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPostProcessAnimInstance.Foot_Placement_TickNative");
		
		UIGPostProcessAnimInstance_Foot_Placement_TickNative_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPostProcessAnimInstance.Foot_Placement_TickBP
	 * 		Flags  -> ()
	 */
	void UIGPostProcessAnimInstance::Foot_Placement_TickBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPostProcessAnimInstance.Foot_Placement_TickBP");
		
		UIGPostProcessAnimInstance_Foot_Placement_TickBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPostProcessAnimInstance.FlexyLegCalculationNative
	 * 		Flags  -> ()
	 */
	void UIGPostProcessAnimInstance::FlexyLegCalculationNative()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPostProcessAnimInstance.FlexyLegCalculationNative");
		
		UIGPostProcessAnimInstance_FlexyLegCalculationNative_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPostProcessAnimInstance.FlexyLegCalculationBP
	 * 		Flags  -> ()
	 */
	void UIGPostProcessAnimInstance::FlexyLegCalculationBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPostProcessAnimInstance.FlexyLegCalculationBP");
		
		UIGPostProcessAnimInstance_FlexyLegCalculationBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPostProcessAnimInstance.FlexyArmCalculationNative
	 * 		Flags  -> ()
	 */
	void UIGPostProcessAnimInstance::FlexyArmCalculationNative()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPostProcessAnimInstance.FlexyArmCalculationNative");
		
		UIGPostProcessAnimInstance_FlexyArmCalculationNative_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPostProcessAnimInstance.FlexyArmCalculationBP
	 * 		Flags  -> ()
	 */
	void UIGPostProcessAnimInstance::FlexyArmCalculationBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPostProcessAnimInstance.FlexyArmCalculationBP");
		
		UIGPostProcessAnimInstance_FlexyArmCalculationBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPostProcessAnimInstance.Climbing_IK_TickNative
	 * 		Flags  -> ()
	 */
	void UIGPostProcessAnimInstance::Climbing_IK_TickNative()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPostProcessAnimInstance.Climbing_IK_TickNative");
		
		UIGPostProcessAnimInstance_Climbing_IK_TickNative_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPostProcessAnimInstance.Climbing_IK_TickBP
	 * 		Flags  -> ()
	 */
	void UIGPostProcessAnimInstance::Climbing_IK_TickBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPostProcessAnimInstance.Climbing_IK_TickBP");
		
		UIGPostProcessAnimInstance_Climbing_IK_TickBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPostProcessAnimInstance.CIKOnBeginClimbingBP
	 * 		Flags  -> ()
	 */
	void UIGPostProcessAnimInstance::CIKOnBeginClimbingBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPostProcessAnimInstance.CIKOnBeginClimbingBP");
		
		UIGPostProcessAnimInstance_CIKOnBeginClimbingBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPostProcessAnimInstance.CIK_TraceFromLimb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              WallToBoneOffset                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EffectorLocation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LocationDelta                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGPostProcessAnimInstance::CIK_TraceFromLimb(float WallToBoneOffset, const class FName& BoneName, struct FVector* EffectorLocation, struct FVector* LocationDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPostProcessAnimInstance.CIK_TraceFromLimb");
		
		UIGPostProcessAnimInstance_CIK_TraceFromLimb_Params params {};
		params.WallToBoneOffset = WallToBoneOffset;
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EffectorLocation != nullptr)
			*EffectorLocation = params.EffectorLocation;
		if (LocationDelta != nullptr)
			*LocationDelta = params.LocationDelta;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPostProcessAnimInstance.CIK_InitBP
	 * 		Flags  -> ()
	 */
	void UIGPostProcessAnimInstance::CIK_InitBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPostProcessAnimInstance.CIK_InitBP");
		
		UIGPostProcessAnimInstance_CIK_InitBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPostProcessAnimInstance.CIK_DebugDisplayBP
	 * 		Flags  -> ()
	 */
	void UIGPostProcessAnimInstance::CIK_DebugDisplayBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPostProcessAnimInstance.CIK_DebugDisplayBP");
		
		UIGPostProcessAnimInstance_CIK_DebugDisplayBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPostProcessAnimInstance.CIK_CalculateEffectorLocationDelta
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TargetLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LocationDelta                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGPostProcessAnimInstance::CIK_CalculateEffectorLocationDelta(const struct FVector& TargetLocation, const class FName& BoneName, struct FVector* LocationDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPostProcessAnimInstance.CIK_CalculateEffectorLocationDelta");
		
		UIGPostProcessAnimInstance_CIK_CalculateEffectorLocationDelta_Params params {};
		params.TargetLocation = TargetLocation;
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocationDelta != nullptr)
			*LocationDelta = params.LocationDelta;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPostProcessAnimInstance.ChoreographedMoveTickBP
	 * 		Flags  -> ()
	 */
	void UIGPostProcessAnimInstance::ChoreographedMoveTickBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPostProcessAnimInstance.ChoreographedMoveTickBP");
		
		UIGPostProcessAnimInstance_ChoreographedMoveTickBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGPostProcessAnimInstance.CalculateLengthOfLimbsBP
	 * 		Flags  -> ()
	 */
	void UIGPostProcessAnimInstance::CalculateLengthOfLimbsBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGPostProcessAnimInstance.CalculateLengthOfLimbsBP");
		
		UIGPostProcessAnimInstance_CalculateLengthOfLimbsBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGPostProcessAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGPostProcessAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGPostProcessAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URepAccrualInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URepAccrualInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.RepAccrualInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFanMailLevelDefInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFanMailLevelDefInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.FanMailLevelDefInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGBattlePassSeasonsMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGBattlePassSeasonsMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGBattlePassSeasonsMap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGProjectile.TriggerDestroyVisuals
	 * 		Flags  -> ()
	 */
	void AIGProjectile::TriggerDestroyVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGProjectile.TriggerDestroyVisuals");
		
		AIGProjectile_TriggerDestroyVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGProjectile.OnProjectileStop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AIGProjectile::OnProjectileStop(const struct FHitResult& ImpactResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGProjectile.OnProjectileStop");
		
		AIGProjectile_OnProjectileStop_Params params {};
		params.ImpactResult = ImpactResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGProjectile.OnProjectileHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AIGProjectile::OnProjectileHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGProjectile.OnProjectileHit");
		
		AIGProjectile_OnProjectileHit_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGProjectile.OnProjectileEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGProjectile::OnProjectileEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGProjectile.OnProjectileEndOverlap");
		
		AIGProjectile_OnProjectileEndOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGProjectile.OnProjectileBounce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ImpactVelocity                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGProjectile::OnProjectileBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGProjectile.OnProjectileBounce");
		
		AIGProjectile_OnProjectileBounce_Params params {};
		params.ImpactResult = ImpactResult;
		params.ImpactVelocity = ImpactVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGProjectile.OnProjectileBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AIGProjectile::OnProjectileBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGProjectile.OnProjectileBeginOverlap");
		
		AIGProjectile_OnProjectileBeginOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGProjectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGProjectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGProjectile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGProjectileData.SuggestProjectileVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     TossVelocity                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESuggestProjVelocityTraceOption                    TraceOption                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFavorHighArc                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDrawDebug                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGProjectileData::SuggestProjectileVelocity(class UObject* WorldContextObject, struct FVector* TossVelocity, const struct FVector& StartLocation, const struct FVector& EndLocation, ESuggestProjVelocityTraceOption TraceOption, bool bFavorHighArc, bool bDrawDebug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGProjectileData.SuggestProjectileVelocity");
		
		UIGProjectileData_SuggestProjectileVelocity_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.StartLocation = StartLocation;
		params.EndLocation = EndLocation;
		params.TraceOption = TraceOption;
		params.bFavorHighArc = bFavorHighArc;
		params.bDrawDebug = bDrawDebug;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TossVelocity != nullptr)
			*TossVelocity = params.TossVelocity;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGProjectileData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGProjectileData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGProjectileData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGProjectileMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGProjectileMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGProjectileMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGRaycastTransitionWindow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGRaycastTransitionWindow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGRaycastTransitionWindow");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGRaycastApplyHitWindow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGRaycastApplyHitWindow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGRaycastApplyHitWindow");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGReadableInteractable.OnVisibilityOverlapEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGReadableInteractable::OnVisibilityOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGReadableInteractable.OnVisibilityOverlapEnd");
		
		AIGReadableInteractable_OnVisibilityOverlapEnd_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGReadableInteractable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGReadableInteractable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGReadableInteractable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGReplicationGraph.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGReplicationGraph::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGReplicationGraph");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGReplicationGraphNode_SpawnedDormantGridSpatial.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGReplicationGraphNode_SpawnedDormantGridSpatial::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGReplicationGraphNode_SpawnedDormantGridSpatial");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGReplicationGraphNode_GridSpatial2DKeepAlive.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGReplicationGraphNode_GridSpatial2DKeepAlive::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGReplicationGraphNode_GridSpatial2DKeepAlive");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGActorListFrequencyBucket_KeepAlive.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGActorListFrequencyBucket_KeepAlive::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGActorListFrequencyBucket_KeepAlive");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGReplicationGraphNode_AlwaysRelevant_ForConnection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGReplicationGraphNode_AlwaysRelevant_ForConnection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGReplicationGraphNode_PlayerStateFrequencyLimiter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGReplicationGraphNode_PlayerStateFrequencyLimiter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGReplicationGraphNode_PlayerStateFrequencyLimiter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGReplicationGraphNode_DormancyNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGReplicationGraphNode_DormancyNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGReplicationGraphNode_DormancyNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGReplicationGraphNode_ConnectionForceSpawnNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGReplicationGraphNode_ConnectionForceSpawnNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGReplicationGraphNode_ConnectionForceSpawnNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGReplicationGraphNode_ForceSpawnNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGReplicationGraphNode_ForceSpawnNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGReplicationGraphNode_ForceSpawnNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGReportNoiseEventNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGReportNoiseEventNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGReportNoiseEventNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGRepSystem.UpdateReps
	 * 		Flags  -> ()
	 */
	void UIGRepSystem::UpdateReps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGRepSystem.UpdateReps");
		
		UIGRepSystem_UpdateReps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGRepSystem.SortRepGroupings
	 * 		Flags  -> ()
	 */
	TArray<struct FRepGrouping> UIGRepSystem::SortRepGroupings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGRepSystem.SortRepGroupings");
		
		UIGRepSystem_SortRepGroupings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGRepSystem.OnRep_RepProgressList
	 * 		Flags  -> ()
	 */
	void UIGRepSystem::OnRep_RepProgressList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGRepSystem.OnRep_RepProgressList");
		
		UIGRepSystem_OnRep_RepProgressList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGRepSystem.OnRep_RepProgressDataVersion
	 * 		Flags  -> ()
	 */
	void UIGRepSystem::OnRep_RepProgressDataVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGRepSystem.OnRep_RepProgressDataVersion");
		
		UIGRepSystem_OnRep_RepProgressDataVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGRepSystem.IsRepPoolDownloadComplete
	 * 		Flags  -> ()
	 */
	bool UIGRepSystem::IsRepPoolDownloadComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGRepSystem.IsRepPoolDownloadComplete");
		
		UIGRepSystem_IsRepPoolDownloadComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGRepSystem.GetRepProgressForUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FRepUIData>                          OutRepUiData                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UIGRepSystem::GetRepProgressForUI(TArray<struct FRepUIData>* OutRepUiData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGRepSystem.GetRepProgressForUI");
		
		UIGRepSystem_GetRepProgressForUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRepUiData != nullptr)
			*OutRepUiData = params.OutRepUiData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGRepSystem.DebugOnlyStopAllRepProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               StopRepProgression                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGRepSystem::DebugOnlyStopAllRepProgress(bool StopRepProgression)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGRepSystem.DebugOnlyStopAllRepProgress");
		
		UIGRepSystem_DebugOnlyStopAllRepProgress_Params params {};
		params.StopRepProgression = StopRepProgression;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGRepSystem.DebugOnlySetRepProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RepName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ProgressValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGRepSystem::DebugOnlySetRepProgress(const class FName& RepName, int32_t ProgressValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGRepSystem.DebugOnlySetRepProgress");
		
		UIGRepSystem_DebugOnlySetRepProgress_Params params {};
		params.RepName = RepName;
		params.ProgressValue = ProgressValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGRepSystem.DebugOnlyResetAllRepProgress
	 * 		Flags  -> ()
	 */
	void UIGRepSystem::DebugOnlyResetAllRepProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGRepSystem.DebugOnlyResetAllRepProgress");
		
		UIGRepSystem_DebugOnlyResetAllRepProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGRepSystem.DebugOnlyRemoveAllRepProgress
	 * 		Flags  -> ()
	 */
	void UIGRepSystem::DebugOnlyRemoveAllRepProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGRepSystem.DebugOnlyRemoveAllRepProgress");
		
		UIGRepSystem_DebugOnlyRemoveAllRepProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGRepSystem.DebugOnlyDumpRepProgress
	 * 		Flags  -> ()
	 */
	void UIGRepSystem::DebugOnlyDumpRepProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGRepSystem.DebugOnlyDumpRepProgress");
		
		UIGRepSystem_DebugOnlyDumpRepProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGRepSystem.CleanRepTrackingDataInFrontend
	 * 		Flags  -> ()
	 */
	void UIGRepSystem::CleanRepTrackingDataInFrontend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGRepSystem.CleanRepTrackingDataInFrontend");
		
		UIGRepSystem_CleanRepTrackingDataInFrontend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGRepSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGRepSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGRepSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGResurrectHealthNotifyState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGResurrectHealthNotifyState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGResurrectHealthNotifyState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGRewardCollectibleBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGRewardCollectibleBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGRewardCollectibleBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGRewardCollectible.OnRep_MovementEnabledChanged
	 * 		Flags  -> ()
	 */
	void AIGRewardCollectible::OnRep_MovementEnabledChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGRewardCollectible.OnRep_MovementEnabledChanged");
		
		AIGRewardCollectible_OnRep_MovementEnabledChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGRewardCollectible.OnProjectileStop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AIGRewardCollectible::OnProjectileStop(const struct FHitResult& ImpactResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGRewardCollectible.OnProjectileStop");
		
		AIGRewardCollectible_OnProjectileStop_Params params {};
		params.ImpactResult = ImpactResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGRewardCollectible.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGRewardCollectible::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGRewardCollectible");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGRotateToTargetState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGRotateToTargetState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGRotateToTargetState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGRumbleData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGRumbleData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGRumbleData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGRumbleNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGRumbleNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGRumbleNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGSavedSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGSavedSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGSavedSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGScriptedActorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGScriptedActorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGScriptedActorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGScriptTargetingVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGScriptTargetingVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGScriptTargetingVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGScriptTargetingWaypoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGScriptTargetingWaypoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGScriptTargetingWaypoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGSetWeaponDurability.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGSetWeaponDurability::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGSetWeaponDurability");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGShapeCastTransitionWindow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGShapeCastTransitionWindow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGShapeCastTransitionWindow");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGShapeCastApplyHitWindow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGShapeCastApplyHitWindow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGShapeCastApplyHitWindow");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGSkeletalMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGSkeletalMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGSkeletalMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGSkeletalMeshToAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGSkeletalMeshToAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGSkeletalMeshToAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpecialMoveConsumable.StopLoopAnimation
	 * 		Flags  -> ()
	 */
	void AIGSpecialMoveConsumable::StopLoopAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpecialMoveConsumable.StopLoopAnimation");
		
		AIGSpecialMoveConsumable_StopLoopAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpecialMoveConsumable.GetCurrentTier
	 * 		Flags  -> ()
	 */
	EMoveTier AIGSpecialMoveConsumable::GetCurrentTier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpecialMoveConsumable.GetCurrentTier");
		
		AIGSpecialMoveConsumable_GetCurrentTier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpecialMoveConsumable.GetCurrentMove
	 * 		Flags  -> ()
	 */
	class UIGMoveMontage* AIGSpecialMoveConsumable::GetCurrentMove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpecialMoveConsumable.GetCurrentMove");
		
		AIGSpecialMoveConsumable_GetCurrentMove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpecialMoveConsumable.ConsumeSpecialMoveConsumable
	 * 		Flags  -> ()
	 */
	void AIGSpecialMoveConsumable::ConsumeSpecialMoveConsumable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpecialMoveConsumable.ConsumeSpecialMoveConsumable");
		
		AIGSpecialMoveConsumable_ConsumeSpecialMoveConsumable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGSpecialMoveConsumable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGSpecialMoveConsumable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGSpecialMoveConsumable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpecialMoveConsumer.TakeAPerk
	 * 		Flags  -> ()
	 */
	void UIGSpecialMoveConsumer::TakeAPerk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpecialMoveConsumer.TakeAPerk");
		
		UIGSpecialMoveConsumer_TakeAPerk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpecialMoveConsumer.StopSpecialMoveConsumableLoopAnimation
	 * 		Flags  -> ()
	 */
	void UIGSpecialMoveConsumer::StopSpecialMoveConsumableLoopAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpecialMoveConsumer.StopSpecialMoveConsumableLoopAnimation");
		
		UIGSpecialMoveConsumer_StopSpecialMoveConsumableLoopAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpecialMoveConsumer.StopReading
	 * 		Flags  -> ()
	 */
	void UIGSpecialMoveConsumer::StopReading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpecialMoveConsumer.StopReading");
		
		UIGSpecialMoveConsumer_StopReading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpecialMoveConsumer.PerformSpecialMoveEquipChoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGSpecialMoveConsumable*                    Magazine                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UIGMoveMontage*                              MoveMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMoveTier                                          ExecutionTier                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGSpecialMoveConsumer::PerformSpecialMoveEquipChoice(class AIGSpecialMoveConsumable* Magazine, class UIGMoveMontage* MoveMontage, EMoveTier ExecutionTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpecialMoveConsumer.PerformSpecialMoveEquipChoice");
		
		UIGSpecialMoveConsumer_PerformSpecialMoveEquipChoice_Params params {};
		params.Magazine = Magazine;
		params.MoveMontage = MoveMontage;
		params.ExecutionTier = ExecutionTier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGSpecialMoveConsumer.OnSpecialMoveConsumableConsumed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UIGSpecialMoveConsumer::OnSpecialMoveConsumableConsumed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGSpecialMoveConsumer.OnSpecialMoveConsumableConsumed__DelegateSignature");
		
		UIGSpecialMoveConsumer_OnSpecialMoveConsumableConsumed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGSpecialMoveConsumer.OnPerformSpecialMoveEquipChoice__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGMoveMontage*                              MoveMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMoveTier                                          ExecutionTier                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGSpecialMoveConsumer::OnPerformSpecialMoveEquipChoice__DelegateSignature(class UIGMoveMontage* MoveMontage, EMoveTier ExecutionTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGSpecialMoveConsumer.OnPerformSpecialMoveEquipChoice__DelegateSignature");
		
		UIGSpecialMoveConsumer_OnPerformSpecialMoveEquipChoice__DelegateSignature_Params params {};
		params.MoveMontage = MoveMontage;
		params.ExecutionTier = ExecutionTier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpecialMoveConsumer.AssignMoveToEquipToSlotTwo
	 * 		Flags  -> ()
	 */
	void UIGSpecialMoveConsumer::AssignMoveToEquipToSlotTwo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpecialMoveConsumer.AssignMoveToEquipToSlotTwo");
		
		UIGSpecialMoveConsumer_AssignMoveToEquipToSlotTwo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpecialMoveConsumer.AssignMoveToEquipToSlotOne
	 * 		Flags  -> ()
	 */
	void UIGSpecialMoveConsumer::AssignMoveToEquipToSlotOne()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpecialMoveConsumer.AssignMoveToEquipToSlotOne");
		
		UIGSpecialMoveConsumer_AssignMoveToEquipToSlotOne_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGSpecialMoveConsumer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGSpecialMoveConsumer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGSpecialMoveConsumer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGSpecialMoveEquipActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGSpecialMoveEquipActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGSpecialMoveEquipActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGSpecialTransitionWindow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGSpecialTransitionWindow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGSpecialTransitionWindow");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpectatorPawn.SetAllowMovement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AllowMovement                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGSpectatorPawn::SetAllowMovement(bool AllowMovement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpectatorPawn.SetAllowMovement");
		
		AIGSpectatorPawn_SetAllowMovement_Params params {};
		params.AllowMovement = AllowMovement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpectatorPawn.IsMovementAllowed
	 * 		Flags  -> ()
	 */
	bool AIGSpectatorPawn::IsMovementAllowed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpectatorPawn.IsMovementAllowed");
		
		AIGSpectatorPawn_IsMovementAllowed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGSpectatorPawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGSpectatorPawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGSpectatorPawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpringArmComponent.SetupForPinning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGCharacter*                                OtherCharacter                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsPerformingPin                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGSpringArmComponent::SetupForPinning(class AIGCharacter* OtherCharacter, bool bIsPerformingPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpringArmComponent.SetupForPinning");
		
		UIGSpringArmComponent_SetupForPinning_Params params {};
		params.OtherCharacter = OtherCharacter;
		params.bIsPerformingPin = bIsPerformingPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpringArmComponent.SetupForClimbing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsAttaching                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGSpringArmComponent::SetupForClimbing(bool bIsAttaching)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpringArmComponent.SetupForClimbing");
		
		UIGSpringArmComponent_SetupForClimbing_Params params {};
		params.bIsAttaching = bIsAttaching;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpringArmComponent.SetupForClash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGCharacter*                                ClashingCharacter                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGSpringArmComponent::SetupForClash(class AIGCharacter* ClashingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpringArmComponent.SetupForClash");
		
		UIGSpringArmComponent_SetupForClash_Params params {};
		params.ClashingCharacter = ClashingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpringArmComponent.SetupForAttackHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGCharacter*                                InCombatTarget                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInIsAttacker                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsSpecialMove                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsVictimStunned                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     AttackMoveDirection                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsGrapple                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGSpringArmComponent::SetupForAttackHit(class AIGCharacter* InCombatTarget, bool bInIsAttacker, bool bIsSpecialMove, bool bIsVictimStunned, const struct FVector& AttackMoveDirection, bool bIsGrapple)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpringArmComponent.SetupForAttackHit");
		
		UIGSpringArmComponent_SetupForAttackHit_Params params {};
		params.InCombatTarget = InCombatTarget;
		params.bInIsAttacker = bInIsAttacker;
		params.bIsSpecialMove = bIsSpecialMove;
		params.bIsVictimStunned = bIsVictimStunned;
		params.AttackMoveDirection = AttackMoveDirection;
		params.bIsGrapple = bIsGrapple;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpringArmComponent.RotateCameraYawNoAdjustmentNative
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              RotationValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGSpringArmComponent::RotateCameraYawNoAdjustmentNative(float RotationValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpringArmComponent.RotateCameraYawNoAdjustmentNative");
		
		UIGSpringArmComponent_RotateCameraYawNoAdjustmentNative_Params params {};
		params.RotationValue = RotationValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpringArmComponent.RotateCameraYawNative
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsKeyboardInput                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGSpringArmComponent::RotateCameraYawNative(float Value, bool bIsKeyboardInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpringArmComponent.RotateCameraYawNative");
		
		UIGSpringArmComponent_RotateCameraYawNative_Params params {};
		params.Value = Value;
		params.bIsKeyboardInput = bIsKeyboardInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpringArmComponent.RotateCameraPitchNoAdjustmentNative
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              RotationValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGSpringArmComponent::RotateCameraPitchNoAdjustmentNative(float RotationValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpringArmComponent.RotateCameraPitchNoAdjustmentNative");
		
		UIGSpringArmComponent_RotateCameraPitchNoAdjustmentNative_Params params {};
		params.RotationValue = RotationValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpringArmComponent.RotateCameraPitchNative
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsKeyboardInput                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGSpringArmComponent::RotateCameraPitchNative(float Value, bool bIsKeyboardInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpringArmComponent.RotateCameraPitchNative");
		
		UIGSpringArmComponent_RotateCameraPitchNative_Params params {};
		params.Value = Value;
		params.bIsKeyboardInput = bIsKeyboardInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpringArmComponent.ResetEdgePeeking
	 * 		Flags  -> ()
	 */
	void UIGSpringArmComponent::ResetEdgePeeking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpringArmComponent.ResetEdgePeeking");
		
		UIGSpringArmComponent_ResetEdgePeeking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpringArmComponent.HandleRotateCameraUpInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPressed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGSpringArmComponent::HandleRotateCameraUpInput(bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpringArmComponent.HandleRotateCameraUpInput");
		
		UIGSpringArmComponent_HandleRotateCameraUpInput_Params params {};
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpringArmComponent.HandleRotateCameraRightInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPressed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGSpringArmComponent::HandleRotateCameraRightInput(bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpringArmComponent.HandleRotateCameraRightInput");
		
		UIGSpringArmComponent_HandleRotateCameraRightInput_Params params {};
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpringArmComponent.HandleRotateCameraLeftInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPressed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGSpringArmComponent::HandleRotateCameraLeftInput(bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpringArmComponent.HandleRotateCameraLeftInput");
		
		UIGSpringArmComponent_HandleRotateCameraLeftInput_Params params {};
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpringArmComponent.HandleRotateCameraDownInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPressed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGSpringArmComponent::HandleRotateCameraDownInput(bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpringArmComponent.HandleRotateCameraDownInput");
		
		UIGSpringArmComponent_HandleRotateCameraDownInput_Params params {};
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpringArmComponent.HandleResetCameraInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPressed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGSpringArmComponent::HandleResetCameraInput(bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpringArmComponent.HandleResetCameraInput");
		
		UIGSpringArmComponent_HandleResetCameraInput_Params params {};
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpringArmComponent.HandleCameraTurnRaw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AIGCharacter*                                OwnerCharacter                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGSpringArmComponent::HandleCameraTurnRaw(float Value, class AIGCharacter* OwnerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpringArmComponent.HandleCameraTurnRaw");
		
		UIGSpringArmComponent_HandleCameraTurnRaw_Params params {};
		params.Value = Value;
		params.OwnerCharacter = OwnerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpringArmComponent.HandleCameraTurn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TurnCurrent                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AIGCharacter*                                OwnerCharacter                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGSpringArmComponent::HandleCameraTurn(float Rate, float TurnCurrent, class AIGCharacter* OwnerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpringArmComponent.HandleCameraTurn");
		
		UIGSpringArmComponent_HandleCameraTurn_Params params {};
		params.Rate = Rate;
		params.TurnCurrent = TurnCurrent;
		params.OwnerCharacter = OwnerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpringArmComponent.HandleCameraLookUpRaw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AIGCharacter*                                OwnerCharacter                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGSpringArmComponent::HandleCameraLookUpRaw(float Value, class AIGCharacter* OwnerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpringArmComponent.HandleCameraLookUpRaw");
		
		UIGSpringArmComponent_HandleCameraLookUpRaw_Params params {};
		params.Value = Value;
		params.OwnerCharacter = OwnerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpringArmComponent.HandleCameraLookUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LookUpCurrent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AIGCharacter*                                OwnerCharacter                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGSpringArmComponent::HandleCameraLookUp(float Rate, float LookUpCurrent, class AIGCharacter* OwnerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpringArmComponent.HandleCameraLookUp");
		
		UIGSpringArmComponent_HandleCameraLookUp_Params params {};
		params.Rate = Rate;
		params.LookUpCurrent = LookUpCurrent;
		params.OwnerCharacter = OwnerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpringArmComponent.GetFallDistance
	 * 		Flags  -> ()
	 */
	float UIGSpringArmComponent::GetFallDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpringArmComponent.GetFallDistance");
		
		UIGSpringArmComponent_GetFallDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpringArmComponent.ExitAimingMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InTransitionDuration                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGSpringArmComponent::ExitAimingMode(float InTransitionDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpringArmComponent.ExitAimingMode");
		
		UIGSpringArmComponent_ExitAimingMode_Params params {};
		params.InTransitionDuration = InTransitionDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpringArmComponent.EventTickComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGSpringArmComponent::EventTickComponent(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpringArmComponent.EventTickComponent");
		
		UIGSpringArmComponent_EventTickComponent_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpringArmComponent.EnterAimingMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InTransitionDuration                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InAimingModeOffset                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGSpringArmComponent::EnterAimingMode(float InTransitionDuration, const struct FVector& InAimingModeOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpringArmComponent.EnterAimingMode");
		
		UIGSpringArmComponent_EnterAimingMode_Params params {};
		params.InTransitionDuration = InTransitionDuration;
		params.InAimingModeOffset = InAimingModeOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSpringArmComponent.CameraMoveInputReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InYaw                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InPitch                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGSpringArmComponent::CameraMoveInputReceived(float InYaw, float InPitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSpringArmComponent.CameraMoveInputReceived");
		
		UIGSpringArmComponent_CameraMoveInputReceived_Params params {};
		params.InYaw = InYaw;
		params.InPitch = InPitch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGSpringArmComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGSpringArmComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGSpringArmComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGSpringboardInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGSpringboardInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGSpringboardInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGStaticRewardCollectible.ResetTimerExpired
	 * 		Flags  -> ()
	 */
	void AIGStaticRewardCollectible::ResetTimerExpired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGStaticRewardCollectible.ResetTimerExpired");
		
		AIGStaticRewardCollectible_ResetTimerExpired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGStaticRewardCollectible.OnCollectibleReset
	 * 		Flags  -> ()
	 */
	void AIGStaticRewardCollectible::OnCollectibleReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGStaticRewardCollectible.OnCollectibleReset");
		
		AIGStaticRewardCollectible_OnCollectibleReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGStaticRewardCollectible.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGStaticRewardCollectible::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGStaticRewardCollectible");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGStaticRandomRewardCollectible.OnRep_CurrentRepresentationComponent
	 * 		Flags  -> ()
	 */
	void AIGStaticRandomRewardCollectible::OnRep_CurrentRepresentationComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGStaticRandomRewardCollectible.OnRep_CurrentRepresentationComponent");
		
		AIGStaticRandomRewardCollectible_OnRep_CurrentRepresentationComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGStaticRandomRewardCollectible.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGStaticRandomRewardCollectible::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGStaticRandomRewardCollectible");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGStatsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGStatsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGStatsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGStatsSystem.ResetStatValues
	 * 		Flags  -> ()
	 */
	void UIGStatsSystem::ResetStatValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGStatsSystem.ResetStatValues");
		
		UIGStatsSystem_ResetStatValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGStatsSystem.OnStatsUnlockedAndSafeForReads__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UIGStatsSystem::OnStatsUnlockedAndSafeForReads__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGStatsSystem.OnStatsUnlockedAndSafeForReads__DelegateSignature");
		
		UIGStatsSystem_OnStatsUnlockedAndSafeForReads__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGStatsSystem.OnRep_ReplicatedStatList
	 * 		Flags  -> ()
	 */
	void UIGStatsSystem::OnRep_ReplicatedStatList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGStatsSystem.OnRep_ReplicatedStatList");
		
		UIGStatsSystem_OnRep_ReplicatedStatList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGStatsSystem.GetAllStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FName, float>                           OutCurrentStats                                            (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UIGStatsSystem::GetAllStats(TMap<class FName, float>* OutCurrentStats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGStatsSystem.GetAllStats");
		
		UIGStatsSystem_GetAllStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCurrentStats != nullptr)
			*OutCurrentStats = params.OutCurrentStats;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGStatsSystem.DumpStats
	 * 		Flags  -> ()
	 */
	void UIGStatsSystem::DumpStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGStatsSystem.DumpStats");
		
		UIGStatsSystem_DumpStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGStatsSystem.DebugDumpStatNames
	 * 		Flags  -> ()
	 */
	void UIGStatsSystem::DebugDumpStatNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGStatsSystem.DebugDumpStatNames");
		
		UIGStatsSystem_DebugDumpStatNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGStatsSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGStatsSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGStatsSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGSuperstarComponent.IsSuperstarModeActive
	 * 		Flags  -> ()
	 */
	bool UIGSuperstarComponent::IsSuperstarModeActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGSuperstarComponent.IsSuperstarModeActive");
		
		UIGSuperstarComponent_IsSuperstarModeActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGSuperstarComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGSuperstarComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGSuperstarComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGSuperstarNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGSuperstarNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGSuperstarNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGSwingableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGSwingableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGSwingableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGSwingingAllowedState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGSwingingAllowedState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGSwingingAllowedState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGSwingLaunchNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGSwingLaunchNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGSwingLaunchNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGSwingStartNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGSwingStartNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGSwingStartNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGTeleportNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGTeleportNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGTeleportNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGTitleStorageBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGTitleStorageBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGTitleStorageBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGUIActor.GetVFXComponent
	 * 		Flags  -> ()
	 */
	class UIGCharacterVFXComponent* AIGUIActor::GetVFXComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGUIActor.GetVFXComponent");
		
		AIGUIActor_GetVFXComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGUIActor.GetSFXComponent
	 * 		Flags  -> ()
	 */
	class UIGCharacterSFXComponent* AIGUIActor::GetSFXComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGUIActor.GetSFXComponent");
		
		AIGUIActor_GetSFXComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGUIActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGUIActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGUIActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGVFXHandlerActor.HandleVictimStatusNotificationBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Attacker                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Victim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EQueuedAttackVictimStatus                          Status                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGVFXHandlerActor::HandleVictimStatusNotificationBP(class AActor* Attacker, class AActor* Victim, EQueuedAttackVictimStatus Status)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGVFXHandlerActor.HandleVictimStatusNotificationBP");
		
		AIGVFXHandlerActor_HandleVictimStatusNotificationBP_Params params {};
		params.Attacker = Attacker;
		params.Victim = Victim;
		params.Status = Status;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGVFXHandlerActor.HandleResetAllFallVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGVFXHandlerActor::HandleResetAllFallVFXBP(class AActor* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGVFXHandlerActor.HandleResetAllFallVFXBP");
		
		AIGVFXHandlerActor_HandleResetAllFallVFXBP_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGVFXHandlerActor.HandleRemoteCharacterDisplaySecondsChangeVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AIGCharacter*                                Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGVFXHandlerActor::HandleRemoteCharacterDisplaySecondsChangeVFXBP(int32_t Value, class AIGCharacter* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGVFXHandlerActor.HandleRemoteCharacterDisplaySecondsChangeVFXBP");
		
		AIGVFXHandlerActor_HandleRemoteCharacterDisplaySecondsChangeVFXBP_Params params {};
		params.Value = Value;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGVFXHandlerActor.HandlePerkRemovedNotifyVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGVFXPerkNotifyInfo                        EventInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGVFXHandlerActor::HandlePerkRemovedNotifyVFXBP(const struct FIGVFXPerkNotifyInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGVFXHandlerActor.HandlePerkRemovedNotifyVFXBP");
		
		AIGVFXHandlerActor_HandlePerkRemovedNotifyVFXBP_Params params {};
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGVFXHandlerActor.HandlePerkGainedNotifyVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGVFXPerkNotifyInfo                        EventInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGVFXHandlerActor::HandlePerkGainedNotifyVFXBP(const struct FIGVFXPerkNotifyInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGVFXHandlerActor.HandlePerkGainedNotifyVFXBP");
		
		AIGVFXHandlerActor_HandlePerkGainedNotifyVFXBP_Params params {};
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGVFXHandlerActor.HandlePerkDeactivateNotifyVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGVFXPerkNotifyInfo                        EventInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGVFXHandlerActor::HandlePerkDeactivateNotifyVFXBP(const struct FIGVFXPerkNotifyInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGVFXHandlerActor.HandlePerkDeactivateNotifyVFXBP");
		
		AIGVFXHandlerActor_HandlePerkDeactivateNotifyVFXBP_Params params {};
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGVFXHandlerActor.HandlePerkActivateNotifyVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGVFXPerkNotifyInfo                        EventInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGVFXHandlerActor::HandlePerkActivateNotifyVFXBP(const struct FIGVFXPerkNotifyInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGVFXHandlerActor.HandlePerkActivateNotifyVFXBP");
		
		AIGVFXHandlerActor_HandlePerkActivateNotifyVFXBP_Params params {};
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGVFXHandlerActor.HandleHitBlockNotificationBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGVFXHitBlockEventInfo                     HitBlockInfo                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGVFXHandlerActor::HandleHitBlockNotificationBP(const struct FIGVFXHitBlockEventInfo& HitBlockInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGVFXHandlerActor.HandleHitBlockNotificationBP");
		
		AIGVFXHandlerActor_HandleHitBlockNotificationBP_Params params {};
		params.HitBlockInfo = HitBlockInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGVFXHandlerActor.HandleHealingNotifyVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TargetHealed                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HealedAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGVFXHandlerActor::HandleHealingNotifyVFXBP(class AActor* TargetHealed, float HealedAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGVFXHandlerActor.HandleHealingNotifyVFXBP");
		
		AIGVFXHandlerActor_HandleHealingNotifyVFXBP_Params params {};
		params.TargetHealed = TargetHealed;
		params.HealedAmount = HealedAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGVFXHandlerActor.HandleFallTierNotifyVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGVFXFallTierNotifyInfo                    EventInfo                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGVFXHandlerActor::HandleFallTierNotifyVFXBP(const struct FIGVFXFallTierNotifyInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGVFXHandlerActor.HandleFallTierNotifyVFXBP");
		
		AIGVFXHandlerActor_HandleFallTierNotifyVFXBP_Params params {};
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGVFXHandlerActor.HandleFallEndNotifyVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIGVFXFallEndNotifyInfo                     EventInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AIGVFXHandlerActor::HandleFallEndNotifyVFXBP(const class FName& EventName, const struct FIGVFXFallEndNotifyInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGVFXHandlerActor.HandleFallEndNotifyVFXBP");
		
		AIGVFXHandlerActor_HandleFallEndNotifyVFXBP_Params params {};
		params.EventName = EventName;
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGVFXHandlerActor.HandleAnimNotifyVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIGVFXAnimNotifyEventInfo                   EventInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGVFXHandlerActor::HandleAnimNotifyVFXBP(const class FName& EventName, const struct FIGVFXAnimNotifyEventInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGVFXHandlerActor.HandleAnimNotifyVFXBP");
		
		AIGVFXHandlerActor_HandleAnimNotifyVFXBP_Params params {};
		params.EventName = EventName;
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGVFXHandlerActor.HandleAnimNotifyStateTickVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIGVFXAnimNotifyEventInfo                   EventInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGVFXHandlerActor::HandleAnimNotifyStateTickVFXBP(const class FName& EventName, const struct FIGVFXAnimNotifyEventInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGVFXHandlerActor.HandleAnimNotifyStateTickVFXBP");
		
		AIGVFXHandlerActor_HandleAnimNotifyStateTickVFXBP_Params params {};
		params.EventName = EventName;
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGVFXHandlerActor.HandleAnimNotifyStateEndVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIGVFXAnimNotifyEventInfo                   EventInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGVFXHandlerActor::HandleAnimNotifyStateEndVFXBP(const class FName& EventName, const struct FIGVFXAnimNotifyEventInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGVFXHandlerActor.HandleAnimNotifyStateEndVFXBP");
		
		AIGVFXHandlerActor_HandleAnimNotifyStateEndVFXBP_Params params {};
		params.EventName = EventName;
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGVFXHandlerActor.HandleAnimNotifyStateBeginVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIGVFXAnimNotifyEventInfo                   EventInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIGVFXHandlerActor::HandleAnimNotifyStateBeginVFXBP(const class FName& EventName, const struct FIGVFXAnimNotifyEventInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGVFXHandlerActor.HandleAnimNotifyStateBeginVFXBP");
		
		AIGVFXHandlerActor_HandleAnimNotifyStateBeginVFXBP_Params params {};
		params.EventName = EventName;
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGVFXHandlerActor.GetGenericVFXHandler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AIGVFXHandlerActor* AIGVFXHandlerActor::GetGenericVFXHandler(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGVFXHandlerActor.GetGenericVFXHandler");
		
		AIGVFXHandlerActor_GetGenericVFXHandler_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGVFXHandlerActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGVFXHandlerActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGVFXHandlerActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGVFXNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGVFXNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGVFXNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGVFXNotifyState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGVFXNotifyState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGVFXNotifyState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGPlayParticleEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGPlayParticleEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGPlayParticleEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGTieredPlayParticleEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGTieredPlayParticleEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGTieredPlayParticleEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGTieredTimedParticleEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGTieredTimedParticleEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGTieredTimedParticleEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction IGActorSystem.IGVFXPhysActor.OnActorAboutToReturnToPool__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AIGVFXPhysActor::OnActorAboutToReturnToPool__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction IGActorSystem.IGVFXPhysActor.OnActorAboutToReturnToPool__DelegateSignature");
		
		AIGVFXPhysActor_OnActorAboutToReturnToPool__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGVFXPhysActor.ImmediateDespawn
	 * 		Flags  -> ()
	 */
	void AIGVFXPhysActor::ImmediateDespawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGVFXPhysActor.ImmediateDespawn");
		
		AIGVFXPhysActor_ImmediateDespawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGVFXPhysActor.AddImpulse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     RelativeImpulse                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGVFXPhysActor::AddImpulse(const struct FVector& RelativeImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGVFXPhysActor.AddImpulse");
		
		AIGVFXPhysActor_AddImpulse_Params params {};
		params.RelativeImpulse = RelativeImpulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGVFXPhysActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGVFXPhysActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGVFXPhysActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGWakeupAttackStatNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGWakeupAttackStatNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGWakeupAttackStatNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGWakeupBlockStatNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGWakeupBlockStatNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGWakeupBlockStatNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGWakeupRollStatNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGWakeupRollStatNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGWakeupRollStatNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGWalletAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGWalletAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGWalletAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGWalletAssetUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGWalletAssetUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGWalletAssetUtils");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGWeaponContainer.OnWeaponContainerHit_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessfulHit                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIGWeaponContainer::OnWeaponContainerHit_BP(bool bWasSuccessfulHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGWeaponContainer.OnWeaponContainerHit_BP");
		
		AIGWeaponContainer_OnWeaponContainerHit_BP_Params params {};
		params.bWasSuccessfulHit = bWasSuccessfulHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGActorSystem.IGWeaponContainer.NeedsKeyToReact
	 * 		Flags  -> ()
	 */
	bool AIGWeaponContainer::NeedsKeyToReact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGActorSystem.IGWeaponContainer.NeedsKeyToReact");
		
		AIGWeaponContainer_NeedsKeyToReact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGWeaponContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGWeaponContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.IGWeaponContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemThrowNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemThrowNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.ItemThrowNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModifyCharacterResourceState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModifyCharacterResourceState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.ModifyCharacterResourceState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovesetInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovesetInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGActorSystem.MovesetInterface");
		return ptr;
	}

}


