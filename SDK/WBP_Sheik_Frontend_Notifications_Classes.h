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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C
	 * Size -> 0x00A2 (FullSize[0x055A] - InheritedSize[0x04B8])
	 */
	class UWBP_Sheik_Frontend_Notifications_C : public USheikWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Init;                                                    // 0x04C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Hide;                                                    // 0x04C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Show;                                                    // 0x04D0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWBP_Sheik_LR_GridLegendKey_C*                       ActionKey;                                               // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          BottomText;                                              // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Icon;                                                    // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            InputPrompt;                                             // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            RootOverlay;                                             // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScrollBox;                                               // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TopText;                                                 // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSheikFrontendNotification                          CurrentNotification;                                     // 0x0510(0x0030) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      NotificationDelay;                                       // 0x0540(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NotificationShowTime;                                    // 0x0544(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FText>                                        TextParameters;                                          // 0x0548(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       AllowScroll;                                             // 0x0558(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       NotificationExpired;                                     // 0x0559(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ActionKeyBindingPressed(const struct FInputEventData& InputEventData);
		void ActionKeyBindingClicked(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void UnbindFromActionKeyInputEvents();
		void BindToActionKeyInputEvents();
		void SetNotificationText(ESheikFrontendNotificationType Selection);
		void NotificationsManager(class USheikNotificationsManager** NotificationsManager);
		void HasInputAction(bool* HasInputAction);
		void StartNextNotification();
		void OnShowTimeFinished();
		void ConstructOnlyOnce();
		void OnActivated();
		void OnDeactivated();
		void OnHideFinished();
		void OnNotificationsUpdated();
		void OnShowFinished();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnNotificationExpired(const struct FSheikFrontendNotification& Notification);
		void OnHideTimeFinished();
		void OnInitialized();
		void OnPressAndHoldActionStarted();
		void OnPressAndHold_ActionConfirmed();
		void OnPressAndHoldActionCancelled();
		void SinglePress_ActionConfirmed();
		void ExecuteUbergraph_WBP_Sheik_Frontend_Notifications(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
