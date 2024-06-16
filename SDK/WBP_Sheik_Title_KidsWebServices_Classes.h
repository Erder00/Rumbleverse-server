#pragma once

/**
 * Name: Rumbleverse
 * Version: Latest
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C
	 * Size -> 0x0058 (FullSize[0x0510] - InheritedSize[0x04B8])
	 */
	class UWBP_Sheik_Title_KidsWebServices_C : public USheikWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ActivationAnim;                                          // 0x04C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              DimBG;                                                   // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Title_KidsWebServicesDOBEntry_C*          DOBEntry;                                                // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Title_KidsWebServicesEmailEntry_C*        EmailEntry;                                              // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Title_KidsWebServicesPermissionWait_C*    PermissionsWait;                                         // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Switcher;                                                // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x04F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnFail;                                                  // 0x0500(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetAccountsManager(class USheikPlayerAccountsManager** AccountsManager);
		void SwitcherActivate(class USheikWidgetBase* Widget);
		void AreAnyPermissionsRejected(TArray<EKWSPermissionStatus>* PermissionStatuses, bool* Rejected);
		void GetAgeGatingManager(class USheikAgeGatingManager** AgeGatingManager);
		void QueryRequirements();
		void OnCommitDateOfBirth(bool bParentEmailRequired);
		void Destruct();
		void BndEvt__WBP_Sheik_Title_KidsWebServices_DOBEntryBox2_K2Node_ComponentBoundEvent_4_OnDateOfBirthCommited__DelegateSignature(const struct FDateTime& DateOfBirth);
		void BndEvt__WBP_Sheik_Title_KidsWebServices_DOBEntry_K2Node_ComponentBoundEvent_1_OnBack__DelegateSignature();
		void BndEvt__WBP_Sheik_Title_KidsWebServices_EmailEntry_K2Node_ComponentBoundEvent_3_OnFinish__DelegateSignature();
		void BndEvt__WBP_Sheik_Title_KidsWebServices_EmailEntry_K2Node_ComponentBoundEvent_6_OnFail__DelegateSignature(const struct FSheikError& Error);
		void BndEvt__WBP_Sheik_Title_KidsWebServices_PermissionsWait_K2Node_ComponentBoundEvent_5_OnBack__DelegateSignature();
		void BndEvt__WBP_Sheik_Title_KidsWebServices_PermissionsWait_K2Node_ComponentBoundEvent_7_OnPermitted__DelegateSignature();
		void BndEvt__WBP_Sheik_Title_KidsWebServices_PermissionsWait_K2Node_ComponentBoundEvent_0_OnRejected__DelegateSignature();
		void HandlePermissionsRejected();
		void OnQueryKidRequirements(bool bDateOfBirthRequired, bool bPermissionsRequired, bool bSuccessful, const struct FSheikError& Error);
		void HandleClose(bool CompletedFlow);
		void Construct();
		void StartFlow();
		void ExecuteUbergraph_WBP_Sheik_Title_KidsWebServices(int32_t EntryPoint);
		void OnFail__DelegateSignature();
		void OnSuccess__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
