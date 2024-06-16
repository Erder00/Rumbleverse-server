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
	 * Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.ShouldShowDevLogin
	 */
	struct UWBP_Sheik_ScreenLogin_C_ShouldShowDevLogin_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KPQO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.GetAccountsManager
	 */
	struct UWBP_Sheik_ScreenLogin_C_GetAccountsManager_Params
	{
	public:
		class USheikPlayerAccountsManager*                         AccountsManager;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.GetLoginManager
	 */
	struct UWBP_Sheik_ScreenLogin_C_GetLoginManager_Params
	{
	public:
		class USheikLoginManager*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnLogin
	 */
	struct UWBP_Sheik_ScreenLogin_C_OnLogin_Params
	{
	public:
		int32_t                                                    LocalUserNum;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bWasSuccessful;                                          // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bCancelled;                                              // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6R3T[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0008(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.StartLogin
	 */
	struct UWBP_Sheik_ScreenLogin_C_StartLogin_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.Construct
	 */
	struct UWBP_Sheik_ScreenLogin_C_Construct_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.StartDevLogin
	 */
	struct UWBP_Sheik_ScreenLogin_C_StartDevLogin_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnDevLoginInputFinished
	 */
	struct UWBP_Sheik_ScreenLogin_C_OnDevLoginInputFinished_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnDevLoginInputSkipped
	 */
	struct UWBP_Sheik_ScreenLogin_C_OnDevLoginInputSkipped_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnDevLoginComplete
	 */
	struct UWBP_Sheik_ScreenLogin_C_OnDevLoginComplete_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.On Platform Login UI Closed
	 */
	struct UWBP_Sheik_ScreenLogin_C_OnPlatformLoginUIClosed_Params
	{
	public:
		int32_t                                                    LocalUserNum;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bWasSuccessful;                                          // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bDidSignIn;                                              // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.PromptPlatformLogin
	 */
	struct UWBP_Sheik_ScreenLogin_C_PromptPlatformLogin_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnSelectChooseAccount
	 */
	struct UWBP_Sheik_ScreenLogin_C_OnSelectChooseAccount_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnCancelChooseAccount
	 */
	struct UWBP_Sheik_ScreenLogin_C_OnCancelChooseAccount_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.StartInitialEGSLogin
	 */
	struct UWBP_Sheik_ScreenLogin_C_StartInitialEGSLogin_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnInitialEGSLogin
	 */
	struct UWBP_Sheik_ScreenLogin_C_OnInitialEGSLogin_Params
	{
	public:
		int32_t                                                    LocalUserNum;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bWasSuccessful;                                          // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bCancelled;                                              // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_15ZN[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0008(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnConsoleLoginComplete
	 */
	struct UWBP_Sheik_ScreenLogin_C_OnConsoleLoginComplete_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.ExecuteUbergraph_WBP_Sheik_ScreenLogin
	 */
	struct UWBP_Sheik_ScreenLogin_C_ExecuteUbergraph_WBP_Sheik_ScreenLogin_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CUTA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnDevLoginSkipped__DelegateSignature
	 */
	struct UWBP_Sheik_ScreenLogin_C_OnDevLoginSkipped__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnLoginFailed__DelegateSignature
	 */
	struct UWBP_Sheik_ScreenLogin_C_OnLoginFailed__DelegateSignature_Params
	{
	public:
		struct FSheikError                                         Error;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnReturnToTitleScreen__DelegateSignature
	 */
	struct UWBP_Sheik_ScreenLogin_C_OnReturnToTitleScreen__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnInitialEGSLoginCompleted__DelegateSignature
	 */
	struct UWBP_Sheik_ScreenLogin_C_OnInitialEGSLoginCompleted__DelegateSignature_Params
	{
	public:
		bool                                                       Succeeded;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CZK5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnPlatformLoginPromptCancelled__DelegateSignature
	 */
	struct UWBP_Sheik_ScreenLogin_C_OnPlatformLoginPromptCancelled__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnLoginSucceeded__DelegateSignature
	 */
	struct UWBP_Sheik_ScreenLogin_C_OnLoginSucceeded__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
