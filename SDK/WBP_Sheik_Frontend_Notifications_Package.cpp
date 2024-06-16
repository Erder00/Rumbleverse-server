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
	 * 		Name   -> Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.Action Key Binding Pressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Frontend_Notifications_C::ActionKeyBindingPressed(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.Action Key Binding Pressed");
		
		UWBP_Sheik_Frontend_Notifications_C_ActionKeyBindingPressed_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.ActionKeyBindingClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Frontend_Notifications_C::ActionKeyBindingClicked(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.ActionKeyBindingClicked");
		
		UWBP_Sheik_Frontend_Notifications_C_ActionKeyBindingClicked_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.UnbindFromActionKeyInputEvents
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Frontend_Notifications_C::UnbindFromActionKeyInputEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.UnbindFromActionKeyInputEvents");
		
		UWBP_Sheik_Frontend_Notifications_C_UnbindFromActionKeyInputEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.BindToActionKeyInputEvents
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Frontend_Notifications_C::BindToActionKeyInputEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.BindToActionKeyInputEvents");
		
		UWBP_Sheik_Frontend_Notifications_C_BindToActionKeyInputEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.SetNotificationText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikFrontendNotificationType                     Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Frontend_Notifications_C::SetNotificationText(ESheikFrontendNotificationType Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.SetNotificationText");
		
		UWBP_Sheik_Frontend_Notifications_C_SetNotificationText_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.NotificationsManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikNotificationsManager*                  NotificationsManager                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Frontend_Notifications_C::NotificationsManager(class USheikNotificationsManager** NotificationsManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.NotificationsManager");
		
		UWBP_Sheik_Frontend_Notifications_C_NotificationsManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NotificationsManager != nullptr)
			*NotificationsManager = params.NotificationsManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.HasInputAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasInputAction                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Frontend_Notifications_C::HasInputAction(bool* HasInputAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.HasInputAction");
		
		UWBP_Sheik_Frontend_Notifications_C_HasInputAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasInputAction != nullptr)
			*HasInputAction = params.HasInputAction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.StartNextNotification
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Frontend_Notifications_C::StartNextNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.StartNextNotification");
		
		UWBP_Sheik_Frontend_Notifications_C_StartNextNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnShowTimeFinished
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Frontend_Notifications_C::OnShowTimeFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnShowTimeFinished");
		
		UWBP_Sheik_Frontend_Notifications_C_OnShowTimeFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Frontend_Notifications_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.ConstructOnlyOnce");
		
		UWBP_Sheik_Frontend_Notifications_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnActivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Frontend_Notifications_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnActivated");
		
		UWBP_Sheik_Frontend_Notifications_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnDeactivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Frontend_Notifications_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnDeactivated");
		
		UWBP_Sheik_Frontend_Notifications_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnHideFinished
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Frontend_Notifications_C::OnHideFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnHideFinished");
		
		UWBP_Sheik_Frontend_Notifications_C_OnHideFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnNotificationsUpdated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Frontend_Notifications_C::OnNotificationsUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnNotificationsUpdated");
		
		UWBP_Sheik_Frontend_Notifications_C_OnNotificationsUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnShowFinished
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Frontend_Notifications_C::OnShowFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnShowFinished");
		
		UWBP_Sheik_Frontend_Notifications_C_OnShowFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Frontend_Notifications_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.Tick");
		
		UWBP_Sheik_Frontend_Notifications_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnNotificationExpired
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikFrontendNotification                  Notification                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_Frontend_Notifications_C::OnNotificationExpired(const struct FSheikFrontendNotification& Notification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnNotificationExpired");
		
		UWBP_Sheik_Frontend_Notifications_C_OnNotificationExpired_Params params {};
		params.Notification = Notification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnHideTimeFinished
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Frontend_Notifications_C::OnHideTimeFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnHideTimeFinished");
		
		UWBP_Sheik_Frontend_Notifications_C_OnHideTimeFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Frontend_Notifications_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnInitialized");
		
		UWBP_Sheik_Frontend_Notifications_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnPressAndHoldActionStarted
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Frontend_Notifications_C::OnPressAndHoldActionStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnPressAndHoldActionStarted");
		
		UWBP_Sheik_Frontend_Notifications_C_OnPressAndHoldActionStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnPressAndHold_ActionConfirmed
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Frontend_Notifications_C::OnPressAndHold_ActionConfirmed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnPressAndHold_ActionConfirmed");
		
		UWBP_Sheik_Frontend_Notifications_C_OnPressAndHold_ActionConfirmed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnPressAndHoldActionCancelled
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Frontend_Notifications_C::OnPressAndHoldActionCancelled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnPressAndHoldActionCancelled");
		
		UWBP_Sheik_Frontend_Notifications_C_OnPressAndHoldActionCancelled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.SinglePress_ActionConfirmed
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Frontend_Notifications_C::SinglePress_ActionConfirmed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.SinglePress_ActionConfirmed");
		
		UWBP_Sheik_Frontend_Notifications_C_SinglePress_ActionConfirmed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.ExecuteUbergraph_WBP_Sheik_Frontend_Notifications
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Frontend_Notifications_C::ExecuteUbergraph_WBP_Sheik_Frontend_Notifications(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.ExecuteUbergraph_WBP_Sheik_Frontend_Notifications");
		
		UWBP_Sheik_Frontend_Notifications_C_ExecuteUbergraph_WBP_Sheik_Frontend_Notifications_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Frontend_Notifications_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Frontend_Notifications_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C");
		return ptr;
	}

}


