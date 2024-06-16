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
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.SequenceEvent__ENTRYPOINTWBP_Sheik_ScreenTitle_1
	 */
	struct UWBP_Sheik_ScreenTitle_C_SequenceEvent__ENTRYPOINTWBP_Sheik_ScreenTitle_1_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.Open Quit Confirmation Popup
	 */
	struct UWBP_Sheik_ScreenTitle_C_OpenQuitConfirmationPopup_Params
	{
	public:
		class FScriptDelegate                                      ConfirmedPressedCallback;                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
		class FScriptDelegate                                      CanceledPressedCallback;                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnBetaPopUpConfirmPressed_cb
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnBetaPopUpConfirmPressed_cb_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q9AV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.ShowBetaPopUp
	 */
	struct UWBP_Sheik_ScreenTitle_C_ShowBetaPopUp_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.GetAccountsManager
	 */
	struct UWBP_Sheik_ScreenTitle_C_GetAccountsManager_Params
	{
	public:
		class USheikPlayerAccountsManager*                         AccountsManager;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.ShowCozmoQueueLeavePopup
	 */
	struct UWBP_Sheik_ScreenTitle_C_ShowCozmoQueueLeavePopup_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.UpdateCozmoQueuePopup
	 */
	struct UWBP_Sheik_ScreenTitle_C_UpdateCozmoQueuePopup_Params
	{
	public:
		int32_t                                                    TicketId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ServingNumber;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.GetPartyManager
	 */
	struct UWBP_Sheik_ScreenTitle_C_GetPartyManager_Params
	{
	public:
		class USheikPartyManager*                                  PartyManager;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.GetHotfixSystem
	 */
	struct UWBP_Sheik_ScreenTitle_C_GetHotfixSystem_Params
	{
	public:
		class USheikHotfixSystem*                                  HotfixSystem;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnAcceptedPlatformInviteBypassStartupScreen
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnAcceptedPlatformInviteBypassStartupScreen_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.GetLoginManager
	 */
	struct UWBP_Sheik_ScreenTitle_C_GetLoginManager_Params
	{
	public:
		class USheikLoginManager*                                  LoginManager;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.HandleError
	 */
	struct UWBP_Sheik_ScreenTitle_C_HandleError_Params
	{
	public:
		struct FSheikError                                         Error;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class FScriptDelegate                                      DevIgnoreCallback;                                       // 0x000C(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
		unsigned char                                              UnknownData_VWK3[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.GetErrorManager
	 */
	struct UWBP_Sheik_ScreenTitle_C_GetErrorManager_Params
	{
	public:
		class USheikErrorManager*                                  ErrorManager;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.HandleErrorFromGame
	 */
	struct UWBP_Sheik_ScreenTitle_C_HandleErrorFromGame_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.HandleLauncherLogin
	 */
	struct UWBP_Sheik_ScreenTitle_C_HandleLauncherLogin_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.UpdateCurrentProfileText
	 */
	struct UWBP_Sheik_ScreenTitle_C_UpdateCurrentProfileText_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.PopupNoCallback
	 */
	struct UWBP_Sheik_ScreenTitle_C_PopupNoCallback_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.ResetFromPopupError
	 */
	struct UWBP_Sheik_ScreenTitle_C_ResetFromPopupError_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.Reset
	 */
	struct UWBP_Sheik_ScreenTitle_C_Reset_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.ShowErrorPopup
	 */
	struct UWBP_Sheik_ScreenTitle_C_ShowErrorPopup_Params
	{
	public:
		class FText                                                HeaderText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                BodyText;                                                // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ErrorCodeText;                                           // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FScriptDelegate                                      ConfirmCallback;                                         // 0x0048(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
		class FScriptDelegate                                      DevIgnoreCallback;                                       // 0x0058(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.SetDevStatus
	 */
	struct UWBP_Sheik_ScreenTitle_C_SetDevStatus_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.InitDevStatus
	 */
	struct UWBP_Sheik_ScreenTitle_C_InitDevStatus_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.GetTitleStorage
	 */
	struct UWBP_Sheik_ScreenTitle_C_GetTitleStorage_Params
	{
	public:
		class USheikUITitleStorageInterface*                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.GetPopupSystem
	 */
	struct UWBP_Sheik_ScreenTitle_C_GetPopupSystem_Params
	{
	public:
		class UWBP_SheikPopupSystem_C*                             PopupSystemWidget;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.InputAvailableEvent
	 */
	struct UWBP_Sheik_ScreenTitle_C_InputAvailableEvent_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.AnyKeyPressed_cb
	 */
	struct UWBP_Sheik_ScreenTitle_C_AnyKeyPressed_cb_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnFailure_A2F21B574BAC9520290B9CBB098556AF
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnFailure_A2F21B574BAC9520290B9CBB098556AF_Params
	{
	public:
		ESheikUserPrivilegeResult                                  PrivilegeResult;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnSuccess_A2F21B574BAC9520290B9CBB098556AF
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnSuccess_A2F21B574BAC9520290B9CBB098556AF_Params
	{
	public:
		ESheikUserPrivilegeResult                                  PrivilegeResult;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnFailure_6BB2071743236EAE5F04D381E65C824E
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnFailure_6BB2071743236EAE5F04D381E65C824E_Params
	{
	public:
		ESheikUserPrivilegeResult                                  PrivilegeResult;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnSuccess_6BB2071743236EAE5F04D381E65C824E
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnSuccess_6BB2071743236EAE5F04D381E65C824E_Params
	{
	public:
		ESheikUserPrivilegeResult                                  PrivilegeResult;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnFailure_60598D594003E823A85BD49F57601DE7
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnFailure_60598D594003E823A85BD49F57601DE7_Params
	{
	public:
		ESheikUserPrivilegeResult                                  PrivilegeResult;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnSuccess_60598D594003E823A85BD49F57601DE7
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnSuccess_60598D594003E823A85BD49F57601DE7_Params
	{
	public:
		ESheikUserPrivilegeResult                                  PrivilegeResult;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnFailure_7017BC1C4999BB9F6FCE49AB89EA0527
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnFailure_7017BC1C4999BB9F6FCE49AB89EA0527_Params
	{
	public:
		ESheikUserPrivilegeResult                                  PrivilegeResult;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnSuccess_7017BC1C4999BB9F6FCE49AB89EA0527
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnSuccess_7017BC1C4999BB9F6FCE49AB89EA0527_Params
	{
	public:
		ESheikUserPrivilegeResult                                  PrivilegeResult;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnFailure_795CAF384CC39E6115B7AA82A60E9FC7
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnFailure_795CAF384CC39E6115B7AA82A60E9FC7_Params
	{
	public:
		ESheikUserPrivilegeResult                                  PrivilegeResult;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnSuccess_795CAF384CC39E6115B7AA82A60E9FC7
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnSuccess_795CAF384CC39E6115B7AA82A60E9FC7_Params
	{
	public:
		ESheikUserPrivilegeResult                                  PrivilegeResult;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnCozmoLoginComplete
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnCozmoLoginComplete_Params
	{
	public:
		int32_t                                                    LocalUserNum;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bWasSuccessful;                                          // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HO0I[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0008(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		ESheikLoginResultType                                      OutType;                                                 // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnCozmoBanInfoRequestComplete
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnCozmoBanInfoRequestComplete_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TNNN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                BanText;                                                 // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FSheikError                                         Error;                                                   // 0x0020(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnUpdateQueueIntoCozmo
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnUpdateQueueIntoCozmo_Params
	{
	public:
		int32_t                                                    TicketId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ServingNumber;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnCompleteQueueIntoCozmo
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnCompleteQueueIntoCozmo_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_46JD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.QueueIntoCozmo
	 */
	struct UWBP_Sheik_ScreenTitle_C_QueueIntoCozmo_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.LoginIntoCozmo
	 */
	struct UWBP_Sheik_ScreenTitle_C_LoginIntoCozmo_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnIgnoreQueueIntoCozmoError
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnIgnoreQueueIntoCozmoError_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnLeaveQueueSelected
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnLeaveQueueSelected_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnCancelLeaveQueueSelected
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnCancelLeaveQueueSelected_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnConfirmLeaveQueueSelected
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnConfirmLeaveQueueSelected_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.StartLegalDocs
	 */
	struct UWBP_Sheik_ScreenTitle_C_StartLegalDocs_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.PromptNextLegalDoc
	 */
	struct UWBP_Sheik_ScreenTitle_C_PromptNextLegalDoc_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnTitleStorageDataRetrieved
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnTitleStorageDataRetrieved_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_10Q4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnPrivilegeErrorIgnored
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnPrivilegeErrorIgnored_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnWaitForLegalDocs
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnWaitForLegalDocs_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.ReadTitleStorageData
	 */
	struct UWBP_Sheik_ScreenTitle_C_ReadTitleStorageData_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.GetLegalDocsToAccept
	 */
	struct UWBP_Sheik_ScreenTitle_C_GetLegalDocsToAccept_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnCozmoLoginErrorIgnored
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnCozmoLoginErrorIgnored_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.BndEvt__LegalDocsWidget_K2Node_ComponentBoundEvent_0_OnAccept__DelegateSignature
	 */
	struct UWBP_Sheik_ScreenTitle_C_BndEvt__LegalDocsWidget_K2Node_ComponentBoundEvent_0_OnAccept__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.BndEvt__LegalDocsWidget_K2Node_ComponentBoundEvent_1_OnDecline__DelegateSignature
	 */
	struct UWBP_Sheik_ScreenTitle_C_BndEvt__LegalDocsWidget_K2Node_ComponentBoundEvent_1_OnDecline__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnAcceptLegalDocErrorIgnored
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnAcceptLegalDocErrorIgnored_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnGetLegalDocErrorIgnored
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnGetLegalDocErrorIgnored_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnGetLegalDocsToAcceptErrorIgnored
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnGetLegalDocsToAcceptErrorIgnored_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.SkipCozmoLogin
	 */
	struct UWBP_Sheik_ScreenTitle_C_SkipCozmoLogin_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnTitleStorageErrorIgnored
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnTitleStorageErrorIgnored_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnGetRequiredLegalDocs
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnGetRequiredLegalDocs_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YDL6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		TArray<class FString>                                      DocumentPaths;                                           // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnAcceptLegalDocument
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnAcceptLegalDocument_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OGQI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_ScreenTitle_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnShowLogoAnimFinished
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnShowLogoAnimFinished_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnHidePressAnimFinished
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnHidePressAnimFinished_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OpenFrontend
	 */
	struct UWBP_Sheik_ScreenTitle_C_OpenFrontend_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnCompletedLegalDocs
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnCompletedLegalDocs_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.StartEOSLogin
	 */
	struct UWBP_Sheik_ScreenTitle_C_StartEOSLogin_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.SkipEOSLogin
	 */
	struct UWBP_Sheik_ScreenTitle_C_SkipEOSLogin_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.SkipLegalDocs
	 */
	struct UWBP_Sheik_ScreenTitle_C_SkipLegalDocs_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.DoDevCozmoOnlyLogin
	 */
	struct UWBP_Sheik_ScreenTitle_C_DoDevCozmoOnlyLogin_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnEOSLoginErrorIgnored
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnEOSLoginErrorIgnored_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnEOSLogout
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnEOSLogout_Params
	{
	public:
		int32_t                                                    LocalUserNum;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bWasSuccessful;                                          // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4QE6[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0008(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.BndEvt__LoginScreen_K2Node_ComponentBoundEvent_3_OnPlatformLoginPromptCancelled__DelegateSignature
	 */
	struct UWBP_Sheik_ScreenTitle_C_BndEvt__LoginScreen_K2Node_ComponentBoundEvent_3_OnPlatformLoginPromptCancelled__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnFaceButtonTopPressed
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnFaceButtonTopPressed_Params
	{
	public:
		struct FInputEventData                                     InputData;                                               // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.StartCozmoLogin
	 */
	struct UWBP_Sheik_ScreenTitle_C_StartCozmoLogin_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnPlatformLoginUIClosed
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnPlatformLoginUIClosed_Params
	{
	public:
		int32_t                                                    LocalUserNum;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bWasSuccessful;                                          // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bDidSignIn;                                              // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.BndEvt__LoginScreen_K2Node_ComponentBoundEvent_1_OnInitialEGSLoginCompleted__DelegateSignature
	 */
	struct UWBP_Sheik_ScreenTitle_C_BndEvt__LoginScreen_K2Node_ComponentBoundEvent_1_OnInitialEGSLoginCompleted__DelegateSignature_Params
	{
	public:
		bool                                                       Succeeded;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TO3I[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnInitialEGSLoginErrorIgnored
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnInitialEGSLoginErrorIgnored_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnPlatformActiveUserChanged
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnPlatformActiveUserChanged_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnInitialized
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.HandleReturnToTitleScreen
	 */
	struct UWBP_Sheik_ScreenTitle_C_HandleReturnToTitleScreen_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.BndEvt__LoginScreen_K2Node_ComponentBoundEvent_2_OnLoginSucceeded__DelegateSignature
	 */
	struct UWBP_Sheik_ScreenTitle_C_BndEvt__LoginScreen_K2Node_ComponentBoundEvent_2_OnLoginSucceeded__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.BndEvt__LoginScreen_K2Node_ComponentBoundEvent_4_OnLoginFailed__DelegateSignature
	 */
	struct UWBP_Sheik_ScreenTitle_C_BndEvt__LoginScreen_K2Node_ComponentBoundEvent_4_OnLoginFailed__DelegateSignature_Params
	{
	public:
		struct FSheikError                                         Error;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.HandleHotfixSystemComplete
	 */
	struct UWBP_Sheik_ScreenTitle_C_HandleHotfixSystemComplete_Params
	{
	public:
		EUpdateCompletionStatus                                    UpdateStatus;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.Destruct
	 */
	struct UWBP_Sheik_ScreenTitle_C_Destruct_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnSplashMovieFinished
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnSplashMovieFinished_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.BndEvt__WBP_Sheik_ScreenTitle_KidsWebServices_K2Node_ComponentBoundEvent_0_OnSuccess__DelegateSignature
	 */
	struct UWBP_Sheik_ScreenTitle_C_BndEvt__WBP_Sheik_ScreenTitle_KidsWebServices_K2Node_ComponentBoundEvent_0_OnSuccess__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.BndEvt__WBP_Sheik_ScreenTitle_KidsWebServices_K2Node_ComponentBoundEvent_5_OnFail__DelegateSignature
	 */
	struct UWBP_Sheik_ScreenTitle_C_BndEvt__WBP_Sheik_ScreenTitle_KidsWebServices_K2Node_ComponentBoundEvent_5_OnFail__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnQuitPressed
	 */
	struct UWBP_Sheik_ScreenTitle_C_OnQuitPressed_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.CancelQuit
	 */
	struct UWBP_Sheik_ScreenTitle_C_CancelQuit_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.ConfirmQuit
	 */
	struct UWBP_Sheik_ScreenTitle_C_ConfirmQuit_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.BndEvt__WBP_Sheik_ScreenTitle_LoginScreen_K2Node_ComponentBoundEvent_6_OnDevLoginSkipped__DelegateSignature
	 */
	struct UWBP_Sheik_ScreenTitle_C_BndEvt__WBP_Sheik_ScreenTitle_LoginScreen_K2Node_ComponentBoundEvent_6_OnDevLoginSkipped__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.ExecuteUbergraph_WBP_Sheik_ScreenTitle
	 */
	struct UWBP_Sheik_ScreenTitle_C_ExecuteUbergraph_WBP_Sheik_ScreenTitle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BVKX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
