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
	 * Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.UpdateTabNamesForPlatform
	 */
	struct UWBP_Sheik_NavigationTabs_C_UpdateTabNamesForPlatform_Params
	{
	public:
		bool                                                       RebuildTabs;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.SetTabNamesForConsole
	 */
	struct UWBP_Sheik_NavigationTabs_C_SetTabNamesForConsole_Params
	{
	public:
		TArray<class FText>                                        InTabNamesXbox;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class FText>                                        InTabNamesPlaystation;                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.SetTabNamesForPC
	 */
	struct UWBP_Sheik_NavigationTabs_C_SetTabNamesForPC_Params
	{
	public:
		TArray<class FText>                                        InTabNames;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.SetupTabs
	 */
	struct UWBP_Sheik_NavigationTabs_C_SetupTabs_Params
	{	};

	/**
	 * Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_NavigationTabs_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.LeftBumperClicked
	 */
	struct UWBP_Sheik_NavigationTabs_C_LeftBumperClicked_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.RightBumperCicked
	 */
	struct UWBP_Sheik_NavigationTabs_C_RightBumperCicked_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.PreConstruct
	 */
	struct UWBP_Sheik_NavigationTabs_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.ExecuteUbergraph_WBP_Sheik_NavigationTabs
	 */
	struct UWBP_Sheik_NavigationTabs_C_ExecuteUbergraph_WBP_Sheik_NavigationTabs_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.OnTabRightSelected__DelegateSignature
	 */
	struct UWBP_Sheik_NavigationTabs_C_OnTabRightSelected__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C.OnTabLeftSelected__DelegateSignature
	 */
	struct UWBP_Sheik_NavigationTabs_C_OnTabLeftSelected__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
