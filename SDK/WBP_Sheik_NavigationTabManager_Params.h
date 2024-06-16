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
	 * Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.GetTabImagesAsString
	 */
	struct UWBP_Sheik_NavigationTabManager_C_GetTabImagesAsString_Params
	{
	public:
		class FString                                              Out;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.GetTabNamesAsString
	 */
	struct UWBP_Sheik_NavigationTabManager_C_GetTabNamesAsString_Params
	{
	public:
		class FString                                              Out;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.Get Input Enabled
	 */
	struct UWBP_Sheik_NavigationTabManager_C_GetInputEnabled_Params
	{
	public:
		bool                                                       Out;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.SetInputEnabled
	 */
	struct UWBP_Sheik_NavigationTabManager_C_SetInputEnabled_Params
	{
	public:
		bool                                                       InputEnabled;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.OnTabWidgetSelected
	 */
	struct UWBP_Sheik_NavigationTabManager_C_OnTabWidgetSelected_Params
	{
	public:
		class UIGUI_WidgetBase*                                    TabSelected;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D61Z[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.PlayTabSound
	 */
	struct UWBP_Sheik_NavigationTabManager_C_PlayTabSound_Params
	{	};

	/**
	 * Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.CheckTabImageArraySize
	 */
	struct UWBP_Sheik_NavigationTabManager_C_CheckTabImageArraySize_Params
	{
	public:
		bool                                                       Pass;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WJ2J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.DisableTabInput
	 */
	struct UWBP_Sheik_NavigationTabManager_C_DisableTabInput_Params
	{	};

	/**
	 * Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.RemoveTab
	 */
	struct UWBP_Sheik_NavigationTabManager_C_RemoveTab_Params
	{
	public:
		int32_t                                                    TabIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.PopulateContent
	 */
	struct UWBP_Sheik_NavigationTabManager_C_PopulateContent_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.AddTabsToContentArea
	 */
	struct UWBP_Sheik_NavigationTabManager_C_AddTabsToContentArea_Params
	{	};

	/**
	 * Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.GetSelectedTabIndex
	 */
	struct UWBP_Sheik_NavigationTabManager_C_GetSelectedTabIndex_Params
	{
	public:
		int32_t                                                    SelectedTabIndex;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.GetSelectedTab
	 */
	struct UWBP_Sheik_NavigationTabManager_C_GetSelectedTab_Params
	{
	public:
		class USheikTabBase*                                       SelectedTab;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.GetTabsLength
	 */
	struct UWBP_Sheik_NavigationTabManager_C_GetTabsLength_Params
	{
	public:
		int32_t                                                    TabsLength;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.SetTabInput
	 */
	struct UWBP_Sheik_NavigationTabManager_C_SetTabInput_Params
	{	};

	/**
	 * Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.CreateTab
	 */
	struct UWBP_Sheik_NavigationTabManager_C_CreateTab_Params
	{
	public:
		class FText                                                TabLabel;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UTexture2D*                                          TabImage;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.GetWrapping
	 */
	struct UWBP_Sheik_NavigationTabManager_C_GetWrapping_Params
	{
	public:
		int32_t                                                    RequestedIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrappedIndex;                                            // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.TabLeftRight
	 */
	struct UWBP_Sheik_NavigationTabManager_C_TabLeftRight_Params
	{
	public:
		int32_t                                                    WrapDirection;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.InitializeFirstTabSelected
	 */
	struct UWBP_Sheik_NavigationTabManager_C_InitializeFirstTabSelected_Params
	{	};

	/**
	 * Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.SetSelectedTab
	 */
	struct UWBP_Sheik_NavigationTabManager_C_SetSelectedTab_Params
	{
	public:
		class UIGUI_WidgetBase*                                    TabSelected;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SZNI[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.GetTabs
	 */
	struct UWBP_Sheik_NavigationTabManager_C_GetTabs_Params
	{
	public:
		TArray<class USheikTabBase*>                               ArrayOfTabs;                                             // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.SetTabList
	 */
	struct UWBP_Sheik_NavigationTabManager_C_SetTabList_Params
	{
	public:
		TArray<class FText>                                        TabNames;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class UTexture2D*>                                  InTabImages;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.TabLeft
	 */
	struct UWBP_Sheik_NavigationTabManager_C_TabLeft_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.TabRight
	 */
	struct UWBP_Sheik_NavigationTabManager_C_TabRight_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_NavigationTabManager_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.PreConstruct
	 */
	struct UWBP_Sheik_NavigationTabManager_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.ExecuteUbergraph_WBP_Sheik_NavigationTabManager
	 */
	struct UWBP_Sheik_NavigationTabManager_C_ExecuteUbergraph_WBP_Sheik_NavigationTabManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GESW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.OnTabSelected__DelegateSignature
	 */
	struct UWBP_Sheik_NavigationTabManager_C_OnTabSelected__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TabIndex;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
