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
	 * Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.GetAccountsManager
	 */
	struct UWBP_Sheik_Title_KidsWebServices_C_GetAccountsManager_Params
	{
	public:
		class USheikPlayerAccountsManager*                         AccountsManager;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.SwitcherActivate
	 */
	struct UWBP_Sheik_Title_KidsWebServices_C_SwitcherActivate_Params
	{
	public:
		class USheikWidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.AreAnyPermissionsRejected
	 */
	struct UWBP_Sheik_Title_KidsWebServices_C_AreAnyPermissionsRejected_Params
	{
	public:
		TArray<EKWSPermissionStatus>                               PermissionStatuses;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Rejected;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7X8K[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.GetAgeGatingManager
	 */
	struct UWBP_Sheik_Title_KidsWebServices_C_GetAgeGatingManager_Params
	{
	public:
		class USheikAgeGatingManager*                              AgeGatingManager;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.QueryRequirements
	 */
	struct UWBP_Sheik_Title_KidsWebServices_C_QueryRequirements_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.OnCommitDateOfBirth
	 */
	struct UWBP_Sheik_Title_KidsWebServices_C_OnCommitDateOfBirth_Params
	{
	public:
		bool                                                       bParentEmailRequired;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.Destruct
	 */
	struct UWBP_Sheik_Title_KidsWebServices_C_Destruct_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.BndEvt__WBP_Sheik_Title_KidsWebServices_DOBEntryBox2_K2Node_ComponentBoundEvent_4_OnDateOfBirthCommited__DelegateSignature
	 */
	struct UWBP_Sheik_Title_KidsWebServices_C_BndEvt__WBP_Sheik_Title_KidsWebServices_DOBEntryBox2_K2Node_ComponentBoundEvent_4_OnDateOfBirthCommited__DelegateSignature_Params
	{
	public:
		struct FDateTime                                           DateOfBirth;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.BndEvt__WBP_Sheik_Title_KidsWebServices_DOBEntry_K2Node_ComponentBoundEvent_1_OnBack__DelegateSignature
	 */
	struct UWBP_Sheik_Title_KidsWebServices_C_BndEvt__WBP_Sheik_Title_KidsWebServices_DOBEntry_K2Node_ComponentBoundEvent_1_OnBack__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.BndEvt__WBP_Sheik_Title_KidsWebServices_EmailEntry_K2Node_ComponentBoundEvent_3_OnFinish__DelegateSignature
	 */
	struct UWBP_Sheik_Title_KidsWebServices_C_BndEvt__WBP_Sheik_Title_KidsWebServices_EmailEntry_K2Node_ComponentBoundEvent_3_OnFinish__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.BndEvt__WBP_Sheik_Title_KidsWebServices_EmailEntry_K2Node_ComponentBoundEvent_6_OnFail__DelegateSignature
	 */
	struct UWBP_Sheik_Title_KidsWebServices_C_BndEvt__WBP_Sheik_Title_KidsWebServices_EmailEntry_K2Node_ComponentBoundEvent_6_OnFail__DelegateSignature_Params
	{
	public:
		struct FSheikError                                         Error;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.BndEvt__WBP_Sheik_Title_KidsWebServices_PermissionsWait_K2Node_ComponentBoundEvent_5_OnBack__DelegateSignature
	 */
	struct UWBP_Sheik_Title_KidsWebServices_C_BndEvt__WBP_Sheik_Title_KidsWebServices_PermissionsWait_K2Node_ComponentBoundEvent_5_OnBack__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.BndEvt__WBP_Sheik_Title_KidsWebServices_PermissionsWait_K2Node_ComponentBoundEvent_7_OnPermitted__DelegateSignature
	 */
	struct UWBP_Sheik_Title_KidsWebServices_C_BndEvt__WBP_Sheik_Title_KidsWebServices_PermissionsWait_K2Node_ComponentBoundEvent_7_OnPermitted__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.BndEvt__WBP_Sheik_Title_KidsWebServices_PermissionsWait_K2Node_ComponentBoundEvent_0_OnRejected__DelegateSignature
	 */
	struct UWBP_Sheik_Title_KidsWebServices_C_BndEvt__WBP_Sheik_Title_KidsWebServices_PermissionsWait_K2Node_ComponentBoundEvent_0_OnRejected__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.HandlePermissionsRejected
	 */
	struct UWBP_Sheik_Title_KidsWebServices_C_HandlePermissionsRejected_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.OnQueryKidRequirements
	 */
	struct UWBP_Sheik_Title_KidsWebServices_C_OnQueryKidRequirements_Params
	{
	public:
		bool                                                       bDateOfBirthRequired;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bPermissionsRequired;                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSuccessful;                                             // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_33U5[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.HandleClose
	 */
	struct UWBP_Sheik_Title_KidsWebServices_C_HandleClose_Params
	{
	public:
		bool                                                       CompletedFlow;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.Construct
	 */
	struct UWBP_Sheik_Title_KidsWebServices_C_Construct_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.StartFlow
	 */
	struct UWBP_Sheik_Title_KidsWebServices_C_StartFlow_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.ExecuteUbergraph_WBP_Sheik_Title_KidsWebServices
	 */
	struct UWBP_Sheik_Title_KidsWebServices_C_ExecuteUbergraph_WBP_Sheik_Title_KidsWebServices_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_95NX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.OnFail__DelegateSignature
	 */
	struct UWBP_Sheik_Title_KidsWebServices_C_OnFail__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.OnSuccess__DelegateSignature
	 */
	struct UWBP_Sheik_Title_KidsWebServices_C_OnSuccess__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
