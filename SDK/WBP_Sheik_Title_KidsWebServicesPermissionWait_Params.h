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
	 * Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.GetAccountsManager
	 */
	struct UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_GetAccountsManager_Params
	{
	public:
		class USheikPlayerAccountsManager*                         AccountsManager;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.AreAnyPermissionsRejected
	 */
	struct UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_AreAnyPermissionsRejected_Params
	{
	public:
		bool                                                       Rejected;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WJSL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.AreAllPermissionsGranted
	 */
	struct UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_AreAllPermissionsGranted_Params
	{
	public:
		bool                                                       Granted;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XS8I[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.UnbindUpdate
	 */
	struct UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_UnbindUpdate_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.BindUpdate
	 */
	struct UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_BindUpdate_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.GetAgeGatingManager
	 */
	struct UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_GetAgeGatingManager_Params
	{
	public:
		class USheikAgeGatingManager*                              AgeGatingManager;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.OnDeactivated
	 */
	struct UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_OnDeactivated_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.OnPermissionsUpdated
	 */
	struct UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_OnPermissionsUpdated_Params
	{
	public:
		TArray<class FString>                                      Names;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<EKWSPermissionStatus>                               Statuses;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.OnActivated
	 */
	struct UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_OnActivated_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_BackButton_K2Node_ComponentBoundEvent_1_OnActionConfirmed__DelegateSignature
	 */
	struct UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_BackButton_K2Node_ComponentBoundEvent_1_OnActionConfirmed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.OnLongWaitTime
	 */
	struct UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_OnLongWaitTime_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.ExecuteUbergraph_WBP_Sheik_Title_KidsWebServicesPermissionWait
	 */
	struct UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_ExecuteUbergraph_WBP_Sheik_Title_KidsWebServicesPermissionWait_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J1DT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.OnRejected__DelegateSignature
	 */
	struct UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_OnRejected__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.OnPermitted__DelegateSignature
	 */
	struct UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_OnPermitted__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.OnBack__DelegateSignature
	 */
	struct UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_OnBack__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
