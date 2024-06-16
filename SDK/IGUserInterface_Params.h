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
	 * Function IGUserInterface.IGUI_BlueprintFunctionLibrary.SubscribeToInputEventDropdown
	 */
	struct UIGUI_BlueprintFunctionLibrary_SubscribeToInputEventDropdown_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDataTable*                                          Table;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                UIInputBindingName;                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EInputEventType                                            InputEventType;                                          // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSendEventOnlyWhenWidgetIsFocused;                       // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G57V[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      InputEventCallback;                                      // 0x001C(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_BlueprintFunctionLibrary.SubscribeToInputCombo
	 */
	struct UIGUI_BlueprintFunctionLibrary_SubscribeToInputCombo_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InputBinding1;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InputBinding2;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InputBinding3;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InputBinding4;                                           // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InputBinding5;                                           // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSendEventOnlyWhenWidgetIsFocused;                       // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YTLA[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      InputEventCallback;                                      // 0x0034(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_BlueprintFunctionLibrary.MakeInputBindingKeyEntry
	 */
	struct UIGUI_BlueprintFunctionLibrary_MakeInputBindingKeyEntry_Params
	{
	public:
		class UDataTable*                                          Table;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InputBindingName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                InputLabelOverride;                                      // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FInputBindingKeyEntry                               ReturnValue;                                             // 0x0028(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_DataStyledImage.SetStyle
	 */
	struct UIGUI_DataStyledImage_SetStyle_Params
	{
	public:
		struct FIGUI_RichImageRow                                  RichImageRow;                                            // 0x0000(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_DataStyledImage.ResetStyle
	 */
	struct UIGUI_DataStyledImage_ResetStyle_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_DataStyledTextBlock.SetStyle
	 */
	struct UIGUI_DataStyledTextBlock_SetStyle_Params
	{
	public:
		struct FIGUI_RichTextStyleRow                              RichTextStyleRow;                                        // 0x0000(0x0278)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_DataStyledTextBlock.ResetStyle
	 */
	struct UIGUI_DataStyledTextBlock_ResetStyle_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.TransitionOutScreen
	 */
	struct AIGUI_HUDBase_TransitionOutScreen_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.TransitionInScreen
	 */
	struct AIGUI_HUDBase_TransitionInScreen_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.TransitionFromScreenToScreen
	 */
	struct AIGUI_HUDBase_TransitionFromScreenToScreen_Params
	{
	public:
		unsigned char                                              UnknownData_5YKU[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.TransitionFinishedForScreen
	 */
	struct AIGUI_HUDBase_TransitionFinishedForScreen_Params
	{
	public:
		class UIGUI_ScreenBase*                                    TransitioningScreen;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.StopInputSourceDetection
	 */
	struct AIGUI_HUDBase_StopInputSourceDetection_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.ShowPersistentScreen
	 */
	struct AIGUI_HUDBase_ShowPersistentScreen_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.SetTreatFirstControllerAndKeyboardMouseAsSamePlayer
	 */
	struct AIGUI_HUDBase_SetTreatFirstControllerAndKeyboardMouseAsSamePlayer_Params
	{
	public:
		bool                                                       ShouldTreatThemAsSame;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.NavigateToScreen
	 */
	struct AIGUI_HUDBase_NavigateToScreen_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.NavigateBackToScreen
	 */
	struct AIGUI_HUDBase_NavigateBackToScreen_Params
	{
	public:
		unsigned char                                              UnknownData_LKJJ[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       NavigateToEarliestCase;                                  // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.NavigateBackToFirstScreen
	 */
	struct AIGUI_HUDBase_NavigateBackToFirstScreen_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.NavigateBack
	 */
	struct AIGUI_HUDBase_NavigateBack_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.MoveScreenToSortingLayer
	 */
	struct AIGUI_HUDBase_MoveScreenToSortingLayer_Params
	{
	public:
		unsigned char                                              UnknownData_NA1P[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                LayerName;                                               // 0x0028(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.MoveScreenToSortingDepth
	 */
	struct AIGUI_HUDBase_MoveScreenToSortingDepth_Params
	{
	public:
		unsigned char                                              UnknownData_S4BB[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Depth;                                                   // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.IsFirstControllerTreatedAsSamePlayerAsKeyboardMouse
	 */
	struct AIGUI_HUDBase_IsFirstControllerTreatedAsSamePlayerAsKeyboardMouse_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.IsDebugFocusLoggingEnabled
	 */
	struct AIGUI_HUDBase_IsDebugFocusLoggingEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.IGUI_ShowScreen
	 */
	struct AIGUI_HUDBase_IGUI_ShowScreen_Params
	{
	public:
		class FString                                              ScreenAssetName;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.IGUI_PrintWidgetsInInputGroup
	 */
	struct AIGUI_HUDBase_IGUI_PrintWidgetsInInputGroup_Params
	{
	public:
		class FString                                              InputGroupName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.IGUI_PrintLayerGroups
	 */
	struct AIGUI_HUDBase_IGUI_PrintLayerGroups_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.IGUI_PrintInputGroups
	 */
	struct AIGUI_HUDBase_IGUI_PrintInputGroups_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.IGUI_NavigateToScreen
	 */
	struct AIGUI_HUDBase_IGUI_NavigateToScreen_Params
	{
	public:
		class FString                                              ScreenAssetName;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.IGUI_NavigateBackToScreen
	 */
	struct AIGUI_HUDBase_IGUI_NavigateBackToScreen_Params
	{
	public:
		class FString                                              ScreenAssetName;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNavigateToEarliestCase;                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.IGUI_NavigateBackToFirstScreen
	 */
	struct AIGUI_HUDBase_IGUI_NavigateBackToFirstScreen_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.IGUI_NavigateBack
	 */
	struct AIGUI_HUDBase_IGUI_NavigateBack_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.IGUI_HideScreen
	 */
	struct AIGUI_HUDBase_IGUI_HideScreen_Params
	{
	public:
		class FString                                              ScreenAssetName;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.IGUI_EnableDebugFocusLogging
	 */
	struct AIGUI_HUDBase_IGUI_EnableDebugFocusLogging_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.HidePersistentScreen
	 */
	struct AIGUI_HUDBase_HidePersistentScreen_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.GetScreenSortingDepth
	 */
	struct AIGUI_HUDBase_GetScreenSortingDepth_Params
	{
	public:
		unsigned char                                              UnknownData_3BMB[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.GetScreenInstance
	 */
	struct AIGUI_HUDBase_GetScreenInstance_Params
	{
	public:
		unsigned char                                              UnknownData_N1PN[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UIGUI_ScreenBase*                                    ReturnValue;                                             // 0x0028(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.GetPrecastScreen
	 */
	struct AIGUI_HUDBase_GetPrecastScreen_Params
	{
	public:
		unsigned char                                              UnknownData_4QZX[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UIGUI_ScreenBase*                                    OutScreen;                                               // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.GetOrCreateScreenInstance
	 */
	struct AIGUI_HUDBase_GetOrCreateScreenInstance_Params
	{
	public:
		unsigned char                                              UnknownData_NWJ2[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UIGUI_ScreenBase*                                    ReturnValue;                                             // 0x0028(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.GetInputHandlingSystem
	 */
	struct AIGUI_HUDBase_GetInputHandlingSystem_Params
	{
	public:
		class UIGUI_InputHandlingSystem*                           ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.GetCurrentScreen
	 */
	struct AIGUI_HUDBase_GetCurrentScreen_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.ForceInputSource
	 */
	struct AIGUI_HUDBase_ForceInputSource_Params
	{
	public:
		EInputSource                                               InputSource;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStopInputSourceDetection;                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.FindPrecastScreen
	 */
	struct AIGUI_HUDBase_FindPrecastScreen_Params
	{
	public:
		unsigned char                                              UnknownData_M11T[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UIGUI_ScreenBase*                                    OutScreen;                                               // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.EnsureScreenIsAlreadyLoaded
	 */
	struct AIGUI_HUDBase_EnsureScreenIsAlreadyLoaded_Params
	{
	public:
		unsigned char                                              UnknownData_TWHU[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.EnableDebugFocusLogging
	 */
	struct AIGUI_HUDBase_EnableDebugFocusLogging_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.DebugLogMessageToScreen
	 */
	struct AIGUI_HUDBase_DebugLogMessageToScreen_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FColor                                              MessageColor;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MessageId;                                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_HUDBase.AllowInputSourceDetection
	 */
	struct AIGUI_HUDBase_AllowInputSourceDetection_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_IGUserInterfaceSettings.GetStyleDataObjectFromProjectSettings
	 */
	struct UIGUI_IGUserInterfaceSettings_GetStyleDataObjectFromProjectSettings_Params
	{
	public:
		class UObject*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_InputBindingIcon.UpdateTextureToCurrentInputSource
	 */
	struct UIGUI_InputBindingIcon_UpdateTextureToCurrentInputSource_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_InputBindingIcon.SetUIInputBinding
	 */
	struct UIGUI_InputBindingIcon_SetUIInputBinding_Params
	{
	public:
		class FName                                                NewBinding;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_InputBindingIcon.SetPlayerUserIndex
	 */
	struct UIGUI_InputBindingIcon_SetPlayerUserIndex_Params
	{
	public:
		int32_t                                                    NewUserIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_InputBindingIcon.OnInputSourceChanged
	 */
	struct UIGUI_InputBindingIcon_OnInputSourceChanged_Params
	{
	public:
		struct FUserControllerData                                 OldInputSource;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FUserControllerData                                 NewInputSource;                                          // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_InputBindingIcon.GetUIInputBinding
	 */
	struct UIGUI_InputBindingIcon_GetUIInputBinding_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_InputBindingIcon.GetPlayerUserIndex
	 */
	struct UIGUI_InputBindingIcon_GetPlayerUserIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_InputHandlingSystem.SimulateKeyPressAndRelease
	 */
	struct UIGUI_InputHandlingSystem_SimulateKeyPressAndRelease_Params
	{
	public:
		struct FKey                                                InKey;                                                   // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_InputHandlingSystem.SetWidgetsAsPersistentWidgets
	 */
	struct UIGUI_InputHandlingSystem_SetWidgetsAsPersistentWidgets_Params
	{
	public:
		TArray<class UIGUI_WidgetBase*>                            NewPersistentWidgets;                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_InputHandlingSystem.SetTreatFirstControllerAndKeyboardMouseAsSamePlayer
	 */
	struct UIGUI_InputHandlingSystem_SetTreatFirstControllerAndKeyboardMouseAsSamePlayer_Params
	{
	public:
		bool                                                       ShouldTreatThemAsSame;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_InputHandlingSystem.SetPrimaryControllerByUserIndex
	 */
	struct UIGUI_InputHandlingSystem_SetPrimaryControllerByUserIndex_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_InputHandlingSystem.SetNonControllingUserIndicesWillControlFirstUserIndex
	 */
	struct UIGUI_InputHandlingSystem_SetNonControllingUserIndicesWillControlFirstUserIndex_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_InputHandlingSystem.SetMaxNumberOfUserControllersAllowed
	 */
	struct UIGUI_InputHandlingSystem_SetMaxNumberOfUserControllersAllowed_Params
	{
	public:
		int32_t                                                    NumberOfUserControllersAllowed;                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_InputHandlingSystem.RemoveWidgetsFromPersistentWidgets
	 */
	struct UIGUI_InputHandlingSystem_RemoveWidgetsFromPersistentWidgets_Params
	{
	public:
		TArray<class UIGUI_WidgetBase*>                            ToBeRemovedPersistentWidgets;                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_InputHandlingSystem.RemoveControllingUserIndices
	 */
	struct UIGUI_InputHandlingSystem_RemoveControllingUserIndices_Params
	{
	public:
		TArray<int32_t>                                            UserIndicesToRemove;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_InputHandlingSystem.RemoveAllExtraDetectedUserControllers
	 */
	struct UIGUI_InputHandlingSystem_RemoveAllExtraDetectedUserControllers_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_InputHandlingSystem.RemoveAllControllingUserIndices
	 */
	struct UIGUI_InputHandlingSystem_RemoveAllControllingUserIndices_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_InputHandlingSystem.IsUserIndexAControllingUserIndex
	 */
	struct UIGUI_InputHandlingSystem_IsUserIndexAControllingUserIndex_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_InputHandlingSystem.IsFirstControllerTreatedAsSamePlayerAsKeyboardMouse
	 */
	struct UIGUI_InputHandlingSystem_IsFirstControllerTreatedAsSamePlayerAsKeyboardMouse_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_InputHandlingSystem.GetNumberOfDetectedUserControllers
	 */
	struct UIGUI_InputHandlingSystem_GetNumberOfDetectedUserControllers_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_InputHandlingSystem.GetNumberOfControllingUserIndices
	 */
	struct UIGUI_InputHandlingSystem_GetNumberOfControllingUserIndices_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_InputHandlingSystem.GetMaxNumberOfUserControllersAllowed
	 */
	struct UIGUI_InputHandlingSystem_GetMaxNumberOfUserControllersAllowed_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_InputHandlingSystem.GetDetectedUserControllers
	 */
	struct UIGUI_InputHandlingSystem_GetDetectedUserControllers_Params
	{
	public:
		TArray<struct FUserControllerData>                         ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_InputHandlingSystem.GetCurrentInputSource
	 */
	struct UIGUI_InputHandlingSystem_GetCurrentInputSource_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EInputSource                                               ReturnValue;                                             // 0x0004(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_InputHandlingSystem.GetAllControllingUserIndices
	 */
	struct UIGUI_InputHandlingSystem_GetAllControllingUserIndices_Params
	{
	public:
		TArray<int32_t>                                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_InputHandlingSystem.ClearPrimaryControllerAssignment
	 */
	struct UIGUI_InputHandlingSystem_ClearPrimaryControllerAssignment_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_InputHandlingSystem.AreNonControllingUserIndicesControllingFirstUserIndexNavigation
	 */
	struct UIGUI_InputHandlingSystem_AreNonControllingUserIndicesControllingFirstUserIndexNavigation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_InputHandlingSystem.AddNewControllingUserIndex
	 */
	struct UIGUI_InputHandlingSystem_AddNewControllingUserIndex_Params
	{
	public:
		int32_t                                                    NewUserIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.UnsubscribeFromNewUserControllerDetectedEvents
	 */
	struct UIGUI_WidgetBase_UnsubscribeFromNewUserControllerDetectedEvents_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.UnsubscribeFromInputSourceChanges
	 */
	struct UIGUI_WidgetBase_UnsubscribeFromInputSourceChanges_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.UnsubscribeFromInputEvent
	 */
	struct UIGUI_WidgetBase_UnsubscribeFromInputEvent_Params
	{
	public:
		class FName                                                UIInputBindingName;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.UnsubscribeFromInputCombos
	 */
	struct UIGUI_WidgetBase_UnsubscribeFromInputCombos_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.UnsubscribeFromAllInputEvents
	 */
	struct UIGUI_WidgetBase_UnsubscribeFromAllInputEvents_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.UnblockInputEvents
	 */
	struct UIGUI_WidgetBase_UnblockInputEvents_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.SubscribeToStandardAction
	 */
	struct UIGUI_WidgetBase_SubscribeToStandardAction_Params
	{
	public:
		EStandardActions                                           StandardAction;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EInputEventType                                            InputEventType;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSendEventOnlyWhenWidgetIsFocused;                       // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SMQ5[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      InputEventCallback;                                      // 0x0004(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.SubscribeToNewUserControllerDetectedEvents
	 */
	struct UIGUI_WidgetBase_SubscribeToNewUserControllerDetectedEvents_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.SubscribeToInputSourceChanges
	 */
	struct UIGUI_WidgetBase_SubscribeToInputSourceChanges_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.SubscribeToInputEvent
	 */
	struct UIGUI_WidgetBase_SubscribeToInputEvent_Params
	{
	public:
		class FName                                                UIInputBindingName;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EInputEventType                                            InputEventType;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSendEventOnlyWhenWidgetIsFocused;                       // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OLNI[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      InputEventCallback;                                      // 0x000C(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.SubscribeToInputCombo
	 */
	struct UIGUI_WidgetBase_SubscribeToInputCombo_Params
	{
	public:
		TArray<class FName>                                        ComboBindings;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bSendEventOnlyWhenWidgetIsFocused;                       // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ETPZ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      InputEventCallback;                                      // 0x0014(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.SubscribeToAnyKey
	 */
	struct UIGUI_WidgetBase_SubscribeToAnyKey_Params
	{
	public:
		EInputEventType                                            InputEventType;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSendEventOnlyWhenWidgetIsFocused;                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RKW9[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      InputEventCallback;                                      // 0x0004(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.StopPropagationOfCurrentInputEvent
	 */
	struct UIGUI_WidgetBase_StopPropagationOfCurrentInputEvent_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.StopInputSourceDetection
	 */
	struct UIGUI_WidgetBase_StopInputSourceDetection_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.StopCustomTick
	 */
	struct UIGUI_WidgetBase_StopCustomTick_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.StopConsumptionOfAllInputEvents
	 */
	struct UIGUI_WidgetBase_StopConsumptionOfAllInputEvents_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.StartCustomTick
	 */
	struct UIGUI_WidgetBase_StartCustomTick_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.ShowPersistentScreenByPath
	 */
	struct UIGUI_WidgetBase_ShowPersistentScreenByPath_Params
	{
	public:
		class FString                                              ScreenBlueprintPath;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.ShowPersistentScreen
	 */
	struct UIGUI_WidgetBase_ShowPersistentScreen_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.ShouldChildrenBeAddedInInputGroup
	 */
	struct UIGUI_WidgetBase_ShouldChildrenBeAddedInInputGroup_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.SetTreatFirstControllerAndKeyboardMouseAsSamePlayer
	 */
	struct UIGUI_WidgetBase_SetTreatFirstControllerAndKeyboardMouseAsSamePlayer_Params
	{
	public:
		bool                                                       ShouldTreatThemAsSame;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.SetNonControllingUserIndicesWillControlFirstUserIndex
	 */
	struct UIGUI_WidgetBase_SetNonControllingUserIndicesWillControlFirstUserIndex_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.SetNavigationOverrideWidget
	 */
	struct UIGUI_WidgetBase_SetNavigationOverrideWidget_Params
	{
	public:
		ENavigationDirection                                       Direction;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_U1DA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UIGUI_WidgetBase*                                    OverrideWidget;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.SetNavigationalAnchorPosition
	 */
	struct UIGUI_WidgetBase_SetNavigationalAnchorPosition_Params
	{
	public:
		struct FVector2D                                           NewAnchor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.SetMaxNumberOfUserControllersAllowed
	 */
	struct UIGUI_WidgetBase_SetMaxNumberOfUserControllersAllowed_Params
	{
	public:
		int32_t                                                    NumberOfUserControllersAllowed;                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.SetIsDisabled
	 */
	struct UIGUI_WidgetBase_SetIsDisabled_Params
	{
	public:
		bool                                                       bIsDisabled;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.SetCustomTick
	 */
	struct UIGUI_WidgetBase_SetCustomTick_Params
	{
	public:
		bool                                                       bEnableTick;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIgnoreInputIfInvisible;                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStopAnimationIfInvisible;                               // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FZG8[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CustomTickInterval;                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.SetCanReceiveInputEvents
	 */
	struct UIGUI_WidgetBase_SetCanReceiveInputEvents_Params
	{
	public:
		bool                                                       bReceivesInput;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.SetCanBeNavigatedTo
	 */
	struct UIGUI_WidgetBase_SetCanBeNavigatedTo_Params
	{
	public:
		bool                                                       bCanBeNavigatedTo;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.SetCanBeNavigatedFrom
	 */
	struct UIGUI_WidgetBase_SetCanBeNavigatedFrom_Params
	{
	public:
		bool                                                       bCanBeNavigatedFrom;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.RemoveControllingUserIndices
	 */
	struct UIGUI_WidgetBase_RemoveControllingUserIndices_Params
	{
	public:
		TArray<int32_t>                                            UserIndicesToRemove;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.RemoveAllExtraDetectedUserControllers
	 */
	struct UIGUI_WidgetBase_RemoveAllExtraDetectedUserControllers_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.RemoveAllControllingUserIndices
	 */
	struct UIGUI_WidgetBase_RemoveAllControllingUserIndices_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.PlayAnimationAndThen
	 */
	struct UIGUI_WidgetBase_PlayAnimationAndThen_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      StartAtTime;                                             // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumOfLoopsToPlay;                                        // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PlaybackSpeed;                                           // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.PerformSelfActivityCheck
	 */
	struct UIGUI_WidgetBase_PerformSelfActivityCheck_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.OnWidgetOnScreen
	 */
	struct UIGUI_WidgetBase_OnWidgetOnScreen_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.OnWidgetOffScreen
	 */
	struct UIGUI_WidgetBase_OnWidgetOffScreen_Params
	{	};

	/**
	 * DelegateFunction IGUserInterface.IGUI_WidgetBase.OnStateChangeEventWithUserIndex__DelegateSignature
	 */
	struct UIGUI_WidgetBase_OnStateChangeEventWithUserIndex__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction IGUserInterface.IGUI_WidgetBase.OnStateChangeEvent__DelegateSignature
	 */
	struct UIGUI_WidgetBase_OnStateChangeEvent__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.OnSelected
	 */
	struct UIGUI_WidgetBase_OnSelected_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.OnNewUserControllerDetected
	 */
	struct UIGUI_WidgetBase_OnNewUserControllerDetected_Params
	{
	public:
		struct FUserControllerData                                 NewUserController;                                       // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction IGUserInterface.IGUI_WidgetBase.OnNavigationOverrideChanged__DelegateSignature
	 */
	struct UIGUI_WidgetBase_OnNavigationOverrideChanged__DelegateSignature_Params
	{
	public:
		ENavigationDirection                                       Direction;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YT83[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UIGUI_WidgetBase*                                    NewOverride;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.OnNavigationOverrideChanged
	 */
	struct UIGUI_WidgetBase_OnNavigationOverrideChanged_Params
	{
	public:
		ENavigationDirection                                       Direction;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AOPS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UIGUI_WidgetBase*                                    NewOverride;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.OnLoseFocus
	 */
	struct UIGUI_WidgetBase_OnLoseFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.OnInputSourceChanged
	 */
	struct UIGUI_WidgetBase_OnInputSourceChanged_Params
	{
	public:
		struct FUserControllerData                                 OldInputSource;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FUserControllerData                                 NewInputSource;                                          // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.OnGainFocus
	 */
	struct UIGUI_WidgetBase_OnGainFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.OnEnabled
	 */
	struct UIGUI_WidgetBase_OnEnabled_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.OnDisabled
	 */
	struct UIGUI_WidgetBase_OnDisabled_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.OnCustomTick
	 */
	struct UIGUI_WidgetBase_OnCustomTick_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.NavigateToScreen
	 */
	struct UIGUI_WidgetBase_NavigateToScreen_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.NavigateBackToScreen
	 */
	struct UIGUI_WidgetBase_NavigateBackToScreen_Params
	{
	public:
		unsigned char                                              UnknownData_Y6X3[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       NavigateToEarliestCase;                                  // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.NavigateBackToFirstScreen
	 */
	struct UIGUI_WidgetBase_NavigateBackToFirstScreen_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.NavigateBack
	 */
	struct UIGUI_WidgetBase_NavigateBack_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.IsUserIndexAControllingUserIndex
	 */
	struct UIGUI_WidgetBase_IsUserIndexAControllingUserIndex_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.IsFocusable
	 */
	struct UIGUI_WidgetBase_IsFocusable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.IsFirstControllerTreatedAsSamePlayerAsKeyboardMouse
	 */
	struct UIGUI_WidgetBase_IsFirstControllerTreatedAsSamePlayerAsKeyboardMouse_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.IsCustomTickFeatureUsed
	 */
	struct UIGUI_WidgetBase_IsCustomTickFeatureUsed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.IsBindingValid
	 */
	struct UIGUI_WidgetBase_IsBindingValid_Params
	{
	public:
		class FName                                                UIInputBindingName;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.HidePersistentScreenByPath
	 */
	struct UIGUI_WidgetBase_HidePersistentScreenByPath_Params
	{
	public:
		class FString                                              ScreenBlueprintPath;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.HidePersistentScreen
	 */
	struct UIGUI_WidgetBase_HidePersistentScreen_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.HandleOnSelectEvent
	 */
	struct UIGUI_WidgetBase_HandleOnSelectEvent_Params
	{
	public:
		struct FInputEventData                                     InputEvent;                                              // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.GetTextureForUIInputBindingBasedOnCurrentInputSource
	 */
	struct UIGUI_WidgetBase_GetTextureForUIInputBindingBasedOnCurrentInputSource_Params
	{
	public:
		class FName                                                UIInputBindingName;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2CG3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.GetShouldSwapAB
	 */
	struct UIGUI_WidgetBase_GetShouldSwapAB_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.GetPrecastScreen
	 */
	struct UIGUI_WidgetBase_GetPrecastScreen_Params
	{
	public:
		unsigned char                                              UnknownData_WV1R[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UIGUI_ScreenBase*                                    OutScreen;                                               // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.GetNumberOfDetectedUserControllers
	 */
	struct UIGUI_WidgetBase_GetNumberOfDetectedUserControllers_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.GetNumberOfControllingUserIndices
	 */
	struct UIGUI_WidgetBase_GetNumberOfControllingUserIndices_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.GetNavigationOverrideWidget
	 */
	struct UIGUI_WidgetBase_GetNavigationOverrideWidget_Params
	{
	public:
		ENavigationDirection                                       Direction;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R9TD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.GetNavigationalAnchorPosition
	 */
	struct UIGUI_WidgetBase_GetNavigationalAnchorPosition_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.GetMaxNumberOfUserControllersAllowed
	 */
	struct UIGUI_WidgetBase_GetMaxNumberOfUserControllersAllowed_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.GetListOfChildren
	 */
	struct UIGUI_WidgetBase_GetListOfChildren_Params
	{
	public:
		TArray<class UIGUI_WidgetBase*>                            ReturnValue;                                             // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.GetIsDisabled
	 */
	struct UIGUI_WidgetBase_GetIsDisabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.GetInputPriority
	 */
	struct UIGUI_WidgetBase_GetInputPriority_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.GetInputHandlingSystem
	 */
	struct UIGUI_WidgetBase_GetInputHandlingSystem_Params
	{
	public:
		class UIGUI_InputHandlingSystem*                           ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.GetDisplayNameForUIInputBinding
	 */
	struct UIGUI_WidgetBase_GetDisplayNameForUIInputBinding_Params
	{
	public:
		class FName                                                UIInputBindingName;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.GetDetectedUserControllers
	 */
	struct UIGUI_WidgetBase_GetDetectedUserControllers_Params
	{
	public:
		TArray<struct FUserControllerData>                         ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.GetCurrentInputSource
	 */
	struct UIGUI_WidgetBase_GetCurrentInputSource_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EInputSource                                               ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.GetBindingRepresentingStandardAction
	 */
	struct UIGUI_WidgetBase_GetBindingRepresentingStandardAction_Params
	{
	public:
		EStandardActions                                           StandardAction;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8POR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.GetAllControllingUserIndices
	 */
	struct UIGUI_WidgetBase_GetAllControllingUserIndices_Params
	{
	public:
		TArray<int32_t>                                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.GetAbsolutePosition
	 */
	struct UIGUI_WidgetBase_GetAbsolutePosition_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.ForceInputSource
	 */
	struct UIGUI_WidgetBase_ForceInputSource_Params
	{
	public:
		EInputSource                                               InputSource;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStopInputSourceDetection;                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.FindPrecastScreen
	 */
	struct UIGUI_WidgetBase_FindPrecastScreen_Params
	{
	public:
		unsigned char                                              UnknownData_ZDM6[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UIGUI_ScreenBase*                                    OutScreen;                                               // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.CustomTick
	 */
	struct UIGUI_WidgetBase_CustomTick_Params
	{
	public:
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.ConsumeAllInputEvents
	 */
	struct UIGUI_WidgetBase_ConsumeAllInputEvents_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.ConstructOnlyOnce
	 */
	struct UIGUI_WidgetBase_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.CanReceiveInputEvents
	 */
	struct UIGUI_WidgetBase_CanReceiveInputEvents_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.CanBeNavigatedTo
	 */
	struct UIGUI_WidgetBase_CanBeNavigatedTo_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.CanBeNavigatedFrom
	 */
	struct UIGUI_WidgetBase_CanBeNavigatedFrom_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.BroadcastOnWidgetSelected
	 */
	struct UIGUI_WidgetBase_BroadcastOnWidgetSelected_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.BlockAllInputEvents
	 */
	struct UIGUI_WidgetBase_BlockAllInputEvents_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.BindHandleOnSelectEventToSelectStandardAction
	 */
	struct UIGUI_WidgetBase_BindHandleOnSelectEventToSelectStandardAction_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.AsyncLoadAssetList
	 */
	struct UIGUI_WidgetBase_AsyncLoadAssetList_Params
	{
	public:
		unsigned char                                              UnknownData_7RC5[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.AsyncLoadAsset
	 */
	struct UIGUI_WidgetBase_AsyncLoadAsset_Params
	{
	public:
		unsigned char                                              UnknownData_VEOK[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.AreNonControllingUserIndicesControllingFirstUserIndexNavigation
	 */
	struct UIGUI_WidgetBase_AreNonControllingUserIndicesControllingFirstUserIndexNavigation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.AllowInputSourceDetection
	 */
	struct UIGUI_WidgetBase_AllowInputSourceDetection_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_WidgetBase.AddNewControllingUserIndex
	 */
	struct UIGUI_WidgetBase_AddNewControllingUserIndex_Params
	{
	public:
		int32_t                                                    NewUserIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScreenBase.TransitionFinished
	 */
	struct UIGUI_ScreenBase_TransitionFinished_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_ScreenBase.ShowScreen
	 */
	struct UIGUI_ScreenBase_ShowScreen_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_ScreenBase.SetWidgetsAsPersistentWidgets
	 */
	struct UIGUI_ScreenBase_SetWidgetsAsPersistentWidgets_Params
	{
	public:
		TArray<class UIGUI_WidgetBase*>                            NewPersistentWidgets;                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScreenBase.SetFocusOnScreen
	 */
	struct UIGUI_ScreenBase_SetFocusOnScreen_Params
	{
	public:
		bool                                                       bResetToDefaultInputGroup;                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScreenBase.SetFocusOnInputGroupForAllUsers
	 */
	struct UIGUI_ScreenBase_SetFocusOnInputGroupForAllUsers_Params
	{
	public:
		class FString                                              InputGroupName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UIGUI_WidgetBase*                                    SetFocusTo;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bResetFocusToDefault;                                    // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScreenBase.SetFocusOnInputGroup
	 */
	struct UIGUI_ScreenBase_SetFocusOnInputGroup_Params
	{
	public:
		class FString                                              InputGroupName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UIGUI_WidgetBase*                                    SetFocusTo;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bResetFocusToDefault;                                    // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UYAY[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    UserIndex;                                               // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScreenBase.SetDefaultWidgetForInputGroup
	 */
	struct UIGUI_ScreenBase_SetDefaultWidgetForInputGroup_Params
	{
	public:
		class FString                                              InputGroupName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScreenBase.SetCurrentFocusOnWidgetForUserIndex
	 */
	struct UIGUI_ScreenBase_SetCurrentFocusOnWidgetForUserIndex_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q7P2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScreenBase.SetCurrentFocusOnWidget
	 */
	struct UIGUI_ScreenBase_SetCurrentFocusOnWidget_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScreenBase.RemoveWidgetsFromPersistentWidgets
	 */
	struct UIGUI_ScreenBase_RemoveWidgetsFromPersistentWidgets_Params
	{
	public:
		TArray<class UIGUI_WidgetBase*>                            ToBeRemovedPersistentWidgets;                            // 0x0000(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScreenBase.RemoveWidgetFromInputGroup
	 */
	struct UIGUI_ScreenBase_RemoveWidgetFromInputGroup_Params
	{
	public:
		class UIGUI_WidgetBase*                                    WidgetToRemove;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InputGroupName;                                          // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScreenBase.RemoveInputGroup
	 */
	struct UIGUI_ScreenBase_RemoveInputGroup_Params
	{
	public:
		class FString                                              InputGroupName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScreenBase.RemoveChildrenOfTypeClassFromWidgetBaseFromInputGroup
	 */
	struct UIGUI_ScreenBase_RemoveChildrenOfTypeClassFromWidgetBaseFromInputGroup_Params
	{
	public:
		class UIGUI_WidgetBase*                                    ContainerWidget;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IWLG[0x28];                                  // 0x0008(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InputGroupName;                                          // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScreenBase.RemoveChildrenOfTypeClassFromPanelWidgetFromInputGroup
	 */
	struct UIGUI_ScreenBase_RemoveChildrenOfTypeClassFromPanelWidgetFromInputGroup_Params
	{
	public:
		class UPanelWidget*                                        PanelWidget;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4LX1[0x28];                                  // 0x0008(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InputGroupName;                                          // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScreenBase.RemoveAllWidgetsFromInputGroup
	 */
	struct UIGUI_ScreenBase_RemoveAllWidgetsFromInputGroup_Params
	{
	public:
		class FString                                              InputGroupName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScreenBase.HideScreen
	 */
	struct UIGUI_ScreenBase_HideScreen_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_ScreenBase.GetWidgetsInInputGroup
	 */
	struct UIGUI_ScreenBase_GetWidgetsInInputGroup_Params
	{
	public:
		class FString                                              InputGroupName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UIGUI_WidgetBase*>                            ReturnValue;                                             // 0x0010(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScreenBase.GetInputGroups
	 */
	struct UIGUI_ScreenBase_GetInputGroups_Params
	{
	public:
		TArray<struct FInputGroup>                                 ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScreenBase.GetInputGroupForUserIndex
	 */
	struct UIGUI_ScreenBase_GetInputGroupForUserIndex_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_P1UG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScreenBase.GetInputGroup
	 */
	struct UIGUI_ScreenBase_GetInputGroup_Params
	{
	public:
		class FString                                              InputGroupName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputGroup                                         ReturnValue;                                             // 0x0010(0x0098)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScreenBase.GetDefaultInputGroupName
	 */
	struct UIGUI_ScreenBase_GetDefaultInputGroupName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScreenBase.GetCurrentFocusedWidget
	 */
	struct UIGUI_ScreenBase_GetCurrentFocusedWidget_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_37O1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UIGUI_WidgetBase*                                    ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScreenBase.DoesInputGroupExist
	 */
	struct UIGUI_ScreenBase_DoesInputGroupExist_Params
	{
	public:
		class FString                                              InputGroupName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScreenBase.CreateInputGroup
	 */
	struct UIGUI_ScreenBase_CreateInputGroup_Params
	{
	public:
		struct FInputGroup                                         InputGroup;                                              // 0x0000(0x0098)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScreenBase.CreateEmptyInputGroups
	 */
	struct UIGUI_ScreenBase_CreateEmptyInputGroups_Params
	{
	public:
		TArray<class FString>                                      InputGroupNames;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FInputGroupOptions                                  InputGroupOptions;                                       // 0x0010(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScreenBase.AddWidgetToInputGroup
	 */
	struct UIGUI_ScreenBase_AddWidgetToInputGroup_Params
	{
	public:
		class UIGUI_WidgetBase*                                    WidgetToAdd;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InputGroupName;                                          // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScreenBase.AddChildrenOfTypeClassFromWidgetBaseToInputGroup
	 */
	struct UIGUI_ScreenBase_AddChildrenOfTypeClassFromWidgetBaseToInputGroup_Params
	{
	public:
		class UIGUI_WidgetBase*                                    ContainerWidget;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VQHX[0x28];                                  // 0x0008(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InputGroupName;                                          // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScreenBase.AddChildrenOfTypeClassFromPanelWidgetToInputGroup
	 */
	struct UIGUI_ScreenBase_AddChildrenOfTypeClassFromPanelWidgetToInputGroup_Params
	{
	public:
		class UPanelWidget*                                        PanelWidget;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GJIN[0x28];                                  // 0x0008(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InputGroupName;                                          // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScreenBase.AddArrayOfWidgetsToInputGroup
	 */
	struct UIGUI_ScreenBase_AddArrayOfWidgetsToInputGroup_Params
	{
	public:
		TArray<class UIGUI_WidgetBase*>                            WidgetsToAdd;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class FString                                              InputGroupName;                                          // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ProfilerHelper.OpenStatProfilerSavesDirectory
	 */
	struct UIGUI_ProfilerHelper_OpenStatProfilerSavesDirectory_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_ProgressBar.SetTrailColor
	 */
	struct UIGUI_ProgressBar_SetTrailColor_Params
	{
	public:
		struct FLinearColor                                        LinearColor;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ProgressBar.SetRawValueRange
	 */
	struct UIGUI_ProgressBar_SetRawValueRange_Params
	{
	public:
		float                                                      MinValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxValue;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ProgressBar.SetGradientTexture
	 */
	struct UIGUI_ProgressBar_SetGradientTexture_Params
	{
	public:
		class UTexture*                                            Gradient;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ProgressBar.SetGoalValueAsPercent
	 */
	struct UIGUI_ProgressBar_SetGoalValueAsPercent_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ProgressBar.SetGoalValue
	 */
	struct UIGUI_ProgressBar_SetGoalValue_Params
	{
	public:
		float                                                      RawValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ProgressBar.SetFillTexture
	 */
	struct UIGUI_ProgressBar_SetFillTexture_Params
	{
	public:
		class UTexture*                                            Fill;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ProgressBar.SetFillColor
	 */
	struct UIGUI_ProgressBar_SetFillColor_Params
	{
	public:
		struct FLinearColor                                        LinearColor;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ProgressBar.SetAutomaticAnimations
	 */
	struct UIGUI_ProgressBar_SetAutomaticAnimations_Params
	{
	public:
		class UUserWidget*                                         Parent;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidgetAnimation*                                    Increase;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidgetAnimation*                                    Decrease;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ProgressBar.SetAnimTrailPercentToGoal
	 */
	struct UIGUI_ProgressBar_SetAnimTrailPercentToGoal_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ProgressBar.SetAnimFillPercentToGoal
	 */
	struct UIGUI_ProgressBar_SetAnimFillPercentToGoal_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ProgressBar.GetAnimatedTrailPercent
	 */
	struct UIGUI_ProgressBar_GetAnimatedTrailPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ProgressBar.GetAnimatedFillPercent
	 */
	struct UIGUI_ProgressBar_GetAnimatedFillPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ProgressBar.ConvertFromRawToPercent
	 */
	struct UIGUI_ProgressBar_ConvertFromRawToPercent_Params
	{
	public:
		float                                                      RawValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ProgressBar.ConvertFromPercentToRaw
	 */
	struct UIGUI_ProgressBar_ConvertFromPercentToRaw_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_RichTextBlock.SetText
	 */
	struct UIGUI_RichTextBlock_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_RichTextBlock.GetDecoratorByClass
	 */
	struct UIGUI_RichTextBlock_GetDecoratorByClass_Params
	{
	public:
		class UClass*                                              DecoratorClass;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UIGUI_RichTextBlockDecorator*                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_RichTextBlockImageDecorator.SetImageSets
	 */
	struct UIGUI_RichTextBlockImageDecorator_SetImageSets_Params
	{
	public:
		TArray<class UDataTable*>                                  ImageSetTables;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_SceneRootBase.GetRootOverlay
	 */
	struct UIGUI_SceneRootBase_GetRootOverlay_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_SceneRootBase.AddWidgetToOverlay
	 */
	struct UIGUI_SceneRootBase_AddWidgetToOverlay_Params
	{
	public:
		class UUserWidget*                                         WidgetInstance;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScrollableList.SetScrollPosition
	 */
	struct UIGUI_ScrollableList_SetScrollPosition_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScrollableList.SetScrollboxOffset
	 */
	struct UIGUI_ScrollableList_SetScrollboxOffset_Params
	{
	public:
		float                                                      NewScrollboxOffset;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScrollableList.ScrollPageByPercent
	 */
	struct UIGUI_ScrollableList_ScrollPageByPercent_Params
	{
	public:
		float                                                      OffsetScrollPercent;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScrollableList.RemoveItems
	 */
	struct UIGUI_ScrollableList_RemoveItems_Params
	{
	public:
		TArray<class UIGUI_WidgetBase*>                            Widgets;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScrollableList.RemoveItem
	 */
	struct UIGUI_ScrollableList_RemoveItem_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScrollableList.RemoveAllItems
	 */
	struct UIGUI_ScrollableList_RemoveAllItems_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_ScrollableList.RefreshWidgetWithNavigationOverride
	 */
	struct UIGUI_ScrollableList_RefreshWidgetWithNavigationOverride_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_ScrollableList.ListItemFocused
	 */
	struct UIGUI_ScrollableList_ListItemFocused_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScrollableList.GetScrollPercent
	 */
	struct UIGUI_ScrollableList_GetScrollPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScrollableList.GetMaxOffset
	 */
	struct UIGUI_ScrollableList_GetMaxOffset_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScrollableList.GetContentSize
	 */
	struct UIGUI_ScrollableList_GetContentSize_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScrollableList.AddListItems
	 */
	struct UIGUI_ScrollableList_AddListItems_Params
	{
	public:
		TArray<class UIGUI_WidgetBase*>                            Widgets;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ScrollableList.AddListItem
	 */
	struct UIGUI_ScrollableList_AddListItem_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_StateComponent.TransitionStartedForScreen
	 */
	struct UIGUI_StateComponent_TransitionStartedForScreen_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_StateComponent.TransitionFinishedForScreen
	 */
	struct UIGUI_StateComponent_TransitionFinishedForScreen_Params
	{
	public:
		class UIGUI_ScreenBase*                                    Screen;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_StateComponent.RemoveStatesAfterLastInstanceOf
	 */
	struct UIGUI_StateComponent_RemoveStatesAfterLastInstanceOf_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_StateComponent.RemoveStatesAfterFirstInstanceOf
	 */
	struct UIGUI_StateComponent_RemoveStatesAfterFirstInstanceOf_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_StateComponent.RemoveCurrentState
	 */
	struct UIGUI_StateComponent_RemoveCurrentState_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_StateComponent.RemoveAllButFirstState
	 */
	struct UIGUI_StateComponent_RemoveAllButFirstState_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_StateComponent.IsScreenTransitionActive
	 */
	struct UIGUI_StateComponent_IsScreenTransitionActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_StateComponent.HasState
	 */
	struct UIGUI_StateComponent_HasState_Params
	{
	public:
		unsigned char                                              UnknownData_D5OK[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_StateComponent.HasPreviousState
	 */
	struct UIGUI_StateComponent_HasPreviousState_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_StateComponent.GetPreviousState
	 */
	struct UIGUI_StateComponent_GetPreviousState_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_StateComponent.GetCurrentState
	 */
	struct UIGUI_StateComponent_GetCurrentState_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_StateComponent.AddState
	 */
	struct UIGUI_StateComponent_AddState_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_ToggleText.SetShouldNavigationLoop
	 */
	struct UIGUI_ToggleText_SetShouldNavigationLoop_Params
	{
	public:
		bool                                                       ShouldLoop;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ToggleText.SetOptionList
	 */
	struct UIGUI_ToggleText_SetOptionList_Params
	{
	public:
		TArray<class FText>                                        OptionList;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ToggleText.SetCurrentOptionIndex
	 */
	struct UIGUI_ToggleText_SetCurrentOptionIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ToggleText.RemoveOptionFromList
	 */
	struct UIGUI_ToggleText_RemoveOptionFromList_Params
	{
	public:
		class FText                                                OptionText;                                              // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ToggleText.NavigatePrevious
	 */
	struct UIGUI_ToggleText_NavigatePrevious_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_ToggleText.NavigateNext
	 */
	struct UIGUI_ToggleText_NavigateNext_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_ToggleText.GetOptionTextForIndex
	 */
	struct UIGUI_ToggleText_GetOptionTextForIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NVFO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ToggleText.GetOptionList
	 */
	struct UIGUI_ToggleText_GetOptionList_Params
	{
	public:
		TArray<class FText>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ToggleText.GetOptionIndexForText
	 */
	struct UIGUI_ToggleText_GetOptionIndexForText_Params
	{
	public:
		class FText                                                OptionText;                                              // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ToggleText.GetCurrentOptionText
	 */
	struct UIGUI_ToggleText_GetCurrentOptionText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ToggleText.CanNavigatePrevious
	 */
	struct UIGUI_ToggleText_CanNavigatePrevious_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ToggleText.CanNavigateNext
	 */
	struct UIGUI_ToggleText_CanNavigateNext_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_ToggleText.AddOptionToList
	 */
	struct UIGUI_ToggleText_AddOptionToList_Params
	{
	public:
		class FText                                                OptionText;                                              // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_UniformGridList.SetWrapUpEnabled
	 */
	struct UIGUI_UniformGridList_SetWrapUpEnabled_Params
	{
	public:
		bool                                                       IsWrappingEnabled;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_UniformGridList.SetWrapRightEnabled
	 */
	struct UIGUI_UniformGridList_SetWrapRightEnabled_Params
	{
	public:
		bool                                                       IsWrappingEnabled;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_UniformGridList.SetWrapLeftEnabled
	 */
	struct UIGUI_UniformGridList_SetWrapLeftEnabled_Params
	{
	public:
		bool                                                       IsWrappingEnabled;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_UniformGridList.SetWrapDownEnabled
	 */
	struct UIGUI_UniformGridList_SetWrapDownEnabled_Params
	{
	public:
		bool                                                       IsWrappingEnabled;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_UniformGridList.SetSlotPadding
	 */
	struct UIGUI_UniformGridList_SetSlotPadding_Params
	{
	public:
		struct FMargin                                             InSlotPadding;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_UniformGridList.SetScrollPosition
	 */
	struct UIGUI_UniformGridList_SetScrollPosition_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_UniformGridList.SetScrollboxOffset
	 */
	struct UIGUI_UniformGridList_SetScrollboxOffset_Params
	{
	public:
		float                                                      NewScrollboxOffset;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_UniformGridList.SetMinDesiredSlotWidth
	 */
	struct UIGUI_UniformGridList_SetMinDesiredSlotWidth_Params
	{
	public:
		float                                                      InMinDesiredSlotWidth;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_UniformGridList.SetMinDesiredSlotHeight
	 */
	struct UIGUI_UniformGridList_SetMinDesiredSlotHeight_Params
	{
	public:
		float                                                      InMinDesiredSlotHeight;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_UniformGridList.ScrollPageByPercent
	 */
	struct UIGUI_UniformGridList_ScrollPageByPercent_Params
	{
	public:
		float                                                      OffsetScrollPercent;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_UniformGridList.RemoveItem
	 */
	struct UIGUI_UniformGridList_RemoveItem_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_UniformGridList.RemoveAllItems
	 */
	struct UIGUI_UniformGridList_RemoveAllItems_Params
	{	};

	/**
	 * Function IGUserInterface.IGUI_UniformGridList.ListItemFocused
	 */
	struct UIGUI_UniformGridList_ListItemFocused_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_UniformGridList.GetScrollPercent
	 */
	struct UIGUI_UniformGridList_GetScrollPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_UniformGridList.GetMaxOffset
	 */
	struct UIGUI_UniformGridList_GetMaxOffset_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_UniformGridList.GetContentSize
	 */
	struct UIGUI_UniformGridList_GetContentSize_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_UniformGridList.AddListItemWithGridPosition
	 */
	struct UIGUI_UniformGridList_AddListItemWithGridPosition_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           GridPosition;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_UniformGridList.AddListItem
	 */
	struct UIGUI_UniformGridList_AddListItem_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IGUserInterface.IGUI_UniformGridList.AddChildToUniformGrid
	 */
	struct UIGUI_UniformGridList_AddChildToUniformGrid_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUniformGridSlot*                                    ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
