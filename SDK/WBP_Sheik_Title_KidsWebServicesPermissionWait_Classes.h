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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C
	 * Size -> 0x0084 (FullSize[0x053C] - InheritedSize[0x04B8])
	 */
	class UWBP_Sheik_Title_KidsWebServicesPermissionWait_C : public USheikWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ActivationAnim;                                          // 0x04C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWBP_Sheik_NonNavigableButton_C*                     Backbutton;                                              // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        ResendBox;                                               // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SentText;                                                // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Spinner;                                                 // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     StatusSwitcher;                                          // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnBack;                                                  // 0x04F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<EKWSPermissionStatus>                               PermissionStatuses;                                      // 0x0500(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnPermitted;                                             // 0x0510(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnRejected;                                              // 0x0520(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FTimerHandle                                        LongWaitTimer;                                           // 0x0530(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      LongWaitTime;                                            // 0x0538(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetAccountsManager(class USheikPlayerAccountsManager** AccountsManager);
		void AreAnyPermissionsRejected(bool* Rejected);
		void AreAllPermissionsGranted(bool* Granted);
		void UnbindUpdate();
		void BindUpdate();
		void GetAgeGatingManager(class USheikAgeGatingManager** AgeGatingManager);
		void OnDeactivated();
		void OnPermissionsUpdated(TArray<class FString> Names, TArray<EKWSPermissionStatus> Statuses);
		void OnActivated();
		void BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_BackButton_K2Node_ComponentBoundEvent_1_OnActionConfirmed__DelegateSignature();
		void OnLongWaitTime();
		void ExecuteUbergraph_WBP_Sheik_Title_KidsWebServicesPermissionWait(int32_t EntryPoint);
		void OnRejected__DelegateSignature();
		void OnPermitted__DelegateSignature();
		void OnBack__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
