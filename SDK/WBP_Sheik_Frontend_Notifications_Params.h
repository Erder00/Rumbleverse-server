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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.Action Key Binding Pressed
	 */
	struct UWBP_Sheik_Frontend_Notifications_C_ActionKeyBindingPressed_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.ActionKeyBindingClicked
	 */
	struct UWBP_Sheik_Frontend_Notifications_C_ActionKeyBindingClicked_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.UnbindFromActionKeyInputEvents
	 */
	struct UWBP_Sheik_Frontend_Notifications_C_UnbindFromActionKeyInputEvents_Params
	{	};

	/**
	 * Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.BindToActionKeyInputEvents
	 */
	struct UWBP_Sheik_Frontend_Notifications_C_BindToActionKeyInputEvents_Params
	{	};

	/**
	 * Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.SetNotificationText
	 */
	struct UWBP_Sheik_Frontend_Notifications_C_SetNotificationText_Params
	{
	public:
		ESheikFrontendNotificationType                             Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PT50[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.NotificationsManager
	 */
	struct UWBP_Sheik_Frontend_Notifications_C_NotificationsManager_Params
	{
	public:
		class USheikNotificationsManager*                          NotificationsManager;                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.HasInputAction
	 */
	struct UWBP_Sheik_Frontend_Notifications_C_HasInputAction_Params
	{
	public:
		bool                                                       HasInputAction;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.StartNextNotification
	 */
	struct UWBP_Sheik_Frontend_Notifications_C_StartNextNotification_Params
	{	};

	/**
	 * Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnShowTimeFinished
	 */
	struct UWBP_Sheik_Frontend_Notifications_C_OnShowTimeFinished_Params
	{	};

	/**
	 * Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_Frontend_Notifications_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnActivated
	 */
	struct UWBP_Sheik_Frontend_Notifications_C_OnActivated_Params
	{	};

	/**
	 * Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnDeactivated
	 */
	struct UWBP_Sheik_Frontend_Notifications_C_OnDeactivated_Params
	{	};

	/**
	 * Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnHideFinished
	 */
	struct UWBP_Sheik_Frontend_Notifications_C_OnHideFinished_Params
	{	};

	/**
	 * Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnNotificationsUpdated
	 */
	struct UWBP_Sheik_Frontend_Notifications_C_OnNotificationsUpdated_Params
	{	};

	/**
	 * Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnShowFinished
	 */
	struct UWBP_Sheik_Frontend_Notifications_C_OnShowFinished_Params
	{	};

	/**
	 * Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.Tick
	 */
	struct UWBP_Sheik_Frontend_Notifications_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnNotificationExpired
	 */
	struct UWBP_Sheik_Frontend_Notifications_C_OnNotificationExpired_Params
	{
	public:
		struct FSheikFrontendNotification                          Notification;                                            // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnHideTimeFinished
	 */
	struct UWBP_Sheik_Frontend_Notifications_C_OnHideTimeFinished_Params
	{	};

	/**
	 * Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnInitialized
	 */
	struct UWBP_Sheik_Frontend_Notifications_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnPressAndHoldActionStarted
	 */
	struct UWBP_Sheik_Frontend_Notifications_C_OnPressAndHoldActionStarted_Params
	{	};

	/**
	 * Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnPressAndHold_ActionConfirmed
	 */
	struct UWBP_Sheik_Frontend_Notifications_C_OnPressAndHold_ActionConfirmed_Params
	{	};

	/**
	 * Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.OnPressAndHoldActionCancelled
	 */
	struct UWBP_Sheik_Frontend_Notifications_C_OnPressAndHoldActionCancelled_Params
	{	};

	/**
	 * Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.SinglePress_ActionConfirmed
	 */
	struct UWBP_Sheik_Frontend_Notifications_C_SinglePress_ActionConfirmed_Params
	{	};

	/**
	 * Function WBP_Sheik_Frontend_Notifications.WBP_Sheik_Frontend_Notifications_C.ExecuteUbergraph_WBP_Sheik_Frontend_Notifications
	 */
	struct UWBP_Sheik_Frontend_Notifications_C_ExecuteUbergraph_WBP_Sheik_Frontend_Notifications_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9SS9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
