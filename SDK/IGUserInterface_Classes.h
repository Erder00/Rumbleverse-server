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
	 * Class IGUserInterface.IGUI_BlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGUI_BlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SubscribeToInputEventDropdown(class UIGUI_WidgetBase* Widget, class UDataTable* Table, const class FName& UIInputBindingName, EInputEventType InputEventType, bool bSendEventOnlyWhenWidgetIsFocused, const class FScriptDelegate& InputEventCallback);
		void SubscribeToInputCombo(class UIGUI_WidgetBase* Widget, const class FName& InputBinding1, const class FName& InputBinding2, const class FName& InputBinding3, const class FName& InputBinding4, const class FName& InputBinding5, bool bSendEventOnlyWhenWidgetIsFocused, const class FScriptDelegate& InputEventCallback);
		struct FInputBindingKeyEntry MakeInputBindingKeyEntry(class UDataTable* Table, const class FName& InputBindingName, const class FText& InputLabelOverride);
		static UClass* StaticClass();
	};

	/**
	 * Class IGUserInterface.IGUI_DataStyledImage
	 * Size -> 0x00C8 (FullSize[0x02D8] - InheritedSize[0x0210])
	 */
	class UIGUI_DataStyledImage : public UImage
	{
	public:
		struct FDataTableRowHandle                                 DataTableRowHandle;                                      // 0x0210(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseOverrideImageRow;                                    // 0x0220(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_69E8[0x7];                                   // 0x0221(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGUI_RichImageRow                                  OverrideImageRow;                                        // 0x0228(0x00B0) Protected, NativeAccessSpecifierProtected

	public:
		void SetStyle(const struct FIGUI_RichImageRow& RichImageRow);
		void ResetStyle();
		static UClass* StaticClass();
	};

	/**
	 * Class IGUserInterface.IGUI_DataStyledTextBlock
	 * Size -> 0x0290 (FullSize[0x0538] - InheritedSize[0x02A8])
	 */
	class UIGUI_DataStyledTextBlock : public UTextBlock
	{
	public:
		struct FDataTableRowHandle                                 DataTableRowHandle;                                      // 0x02A8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseOverrideStyleRow;                                    // 0x02B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EKJA[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGUI_RichTextStyleRow                              OverrideStyleRow;                                        // 0x02C0(0x0278) Protected, NativeAccessSpecifierProtected

	public:
		void SetStyle(const struct FIGUI_RichTextStyleRow& RichTextStyleRow);
		void ResetStyle();
		static UClass* StaticClass();
	};

	/**
	 * Class IGUserInterface.IGUI_HUDBase
	 * Size -> 0x01D8 (FullSize[0x04E8] - InheritedSize[0x0310])
	 */
	class AIGUI_HUDBase : public AHUD
	{
	public:
		TArray<EInputSource>                                       AllowedInputSources;                                     // 0x0310(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UIGUI_StateComponent*                                StateComponent;                                          // 0x0320(0x0008) Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UIGUI_InputHandlingSystem*                           InputHandlingSystemComponent;                            // 0x0328(0x0008) Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              SceneRootBlueprint[0x28];                                // 0x0330(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		TArray<struct FIGUI_SortingLayer>                          CustomSortingLayers;                                     // 0x0358(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              PreInitializedScreensForDebugNavigation[0x10];           // 0x0368(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              LayerDepthToSceneRootMap[0x50];                          // 0x0378(0x0050) UNKNOWN PROPERTY: MapProperty
		unsigned char                                              LayerNameToSceneRootMap[0x50];                           // 0x03C8(0x0050) UNKNOWN PROPERTY: MapProperty
		unsigned char                                              ScreenBlueprintNameToInstanceMap[0x50];                  // 0x0418(0x0050) UNKNOWN PROPERTY: MapProperty
		unsigned char                                              ScreenBlueprintNameToBlueprintMap[0x50];                 // 0x0468(0x0050) UNKNOWN PROPERTY: MapProperty
		bool                                                       bIsDebugFocusLoggingEnabled;                             // 0x04B8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QRRP[0x2F];                                  // 0x04B9(0x002F) MISSED OFFSET (PADDING)

	public:
		void TransitionOutScreen();
		void TransitionInScreen();
		void TransitionFromScreenToScreen();
		void TransitionFinishedForScreen(class UIGUI_ScreenBase* TransitioningScreen);
		void StopInputSourceDetection();
		void ShowPersistentScreen();
		void SetTreatFirstControllerAndKeyboardMouseAsSamePlayer(bool ShouldTreatThemAsSame);
		void NavigateToScreen();
		void NavigateBackToScreen(bool NavigateToEarliestCase);
		void NavigateBackToFirstScreen();
		void NavigateBack();
		void MoveScreenToSortingLayer(const class FName& LayerName);
		void MoveScreenToSortingDepth(int32_t Depth);
		bool IsFirstControllerTreatedAsSamePlayerAsKeyboardMouse();
		bool IsDebugFocusLoggingEnabled();
		void IGUI_ShowScreen(const class FString& ScreenAssetName);
		void IGUI_PrintWidgetsInInputGroup(const class FString& InputGroupName);
		void IGUI_PrintLayerGroups();
		void IGUI_PrintInputGroups();
		void IGUI_NavigateToScreen(const class FString& ScreenAssetName);
		void IGUI_NavigateBackToScreen(const class FString& ScreenAssetName, bool bNavigateToEarliestCase);
		void IGUI_NavigateBackToFirstScreen();
		void IGUI_NavigateBack();
		void IGUI_HideScreen(const class FString& ScreenAssetName);
		void IGUI_EnableDebugFocusLogging(bool bEnable);
		void HidePersistentScreen();
		int32_t GetScreenSortingDepth();
		class UIGUI_ScreenBase* GetScreenInstance();
		void GetPrecastScreen(class UIGUI_ScreenBase** OutScreen);
		class UIGUI_ScreenBase* GetOrCreateScreenInstance();
		class UIGUI_InputHandlingSystem* GetInputHandlingSystem();
		void GetCurrentScreen();
		void ForceInputSource(EInputSource InputSource, bool bStopInputSourceDetection);
		bool FindPrecastScreen(class UIGUI_ScreenBase** OutScreen);
		void EnsureScreenIsAlreadyLoaded();
		void EnableDebugFocusLogging(bool bEnable);
		void DebugLogMessageToScreen(const class FString& Message, const struct FColor& MessageColor, int32_t MessageId);
		void AllowInputSourceDetection();
		static UClass* StaticClass();
	};

	/**
	 * Class IGUserInterface.IGUI_IGUserInterfaceSettings
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class UIGUI_IGUserInterfaceSettings : public UDeveloperSettings
	{
	public:
		TWeakObjectPtr<class UObject>                              LoadedCustomStyleDataAsset;                              // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     DefaultInputBindingDataTable;                            // 0x0040(0x0018) Edit, ZeroConstructor, Config, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     CustomStyleDataAsset;                                    // 0x0058(0x0018) Edit, ZeroConstructor, Config, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ProcessInputOnlyIfInForeground;                          // 0x0070(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PSGV[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)

	public:
		class UObject* GetStyleDataObjectFromProjectSettings();
		static UClass* StaticClass();
	};

	/**
	 * Class IGUserInterface.IGUI_InputBindingIcon
	 * Size -> 0x0010 (FullSize[0x0220] - InheritedSize[0x0210])
	 */
	class UIGUI_InputBindingIcon : public UImage
	{
	public:
		struct FInputBindingName                                   UIInputBindingName;                                      // 0x0210(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    UserIndex;                                               // 0x0218(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EN52[0x4];                                   // 0x021C(0x0004) MISSED OFFSET (PADDING)

	public:
		void UpdateTextureToCurrentInputSource();
		void SetUIInputBinding(const class FName& NewBinding);
		void SetPlayerUserIndex(int32_t NewUserIndex);
		void OnInputSourceChanged(const struct FUserControllerData& OldInputSource, const struct FUserControllerData& NewInputSource);
		class FName GetUIInputBinding();
		int32_t GetPlayerUserIndex();
		static UClass* StaticClass();
	};

	/**
	 * Class IGUserInterface.IGUI_InputHandlingSystem
	 * Size -> 0x02A8 (FullSize[0x0358] - InheritedSize[0x00B0])
	 */
	class UIGUI_InputHandlingSystem : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_3UPS[0x60];                                  // 0x00B0(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxDistanceForWidgetNavigation;                          // 0x0110(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnalogValueDeadZone;                                     // 0x0114(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxXRangeNearClosestItem;                                // 0x0118(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxYRangeNearClosestItem;                                // 0x011C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DHKX[0x238];                                 // 0x0120(0x0238) MISSED OFFSET (PADDING)

	public:
		void SimulateKeyPressAndRelease(const struct FKey& InKey);
		void SetWidgetsAsPersistentWidgets(TArray<class UIGUI_WidgetBase*>* NewPersistentWidgets);
		void SetTreatFirstControllerAndKeyboardMouseAsSamePlayer(bool ShouldTreatThemAsSame);
		void SetPrimaryControllerByUserIndex(int32_t UserIndex);
		void SetNonControllingUserIndicesWillControlFirstUserIndex(bool Enabled);
		void SetMaxNumberOfUserControllersAllowed(int32_t NumberOfUserControllersAllowed);
		void RemoveWidgetsFromPersistentWidgets(TArray<class UIGUI_WidgetBase*>* ToBeRemovedPersistentWidgets);
		void RemoveControllingUserIndices(TArray<int32_t> UserIndicesToRemove);
		void RemoveAllExtraDetectedUserControllers();
		void RemoveAllControllingUserIndices();
		bool IsUserIndexAControllingUserIndex(int32_t UserIndex);
		bool IsFirstControllerTreatedAsSamePlayerAsKeyboardMouse();
		int32_t GetNumberOfDetectedUserControllers();
		int32_t GetNumberOfControllingUserIndices();
		int32_t GetMaxNumberOfUserControllersAllowed();
		TArray<struct FUserControllerData> GetDetectedUserControllers();
		EInputSource GetCurrentInputSource(int32_t UserIndex);
		TArray<int32_t> GetAllControllingUserIndices();
		void ClearPrimaryControllerAssignment();
		bool AreNonControllingUserIndicesControllingFirstUserIndexNavigation();
		void AddNewControllingUserIndex(int32_t NewUserIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class IGUserInterface.IGUI_WidgetBase
	 * Size -> 0x01B8 (FullSize[0x0418] - InheritedSize[0x0260])
	 */
	class UIGUI_WidgetBase : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_0H89[0x20];                                  // 0x0260(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAssetLoadSucceeded;                                    // 0x0280(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAssetListLoadSucceeded;                                // 0x0290(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAssetLoadFailed;                                       // 0x02A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnWidgetFocused;                                         // 0x02B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnWidgetUnfocused;                                       // 0x02C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnWidgetSelected;                                        // 0x02D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnWidgetDisabled;                                        // 0x02E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnWidgetEnabled;                                         // 0x02F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnSelectEvent;                                           // 0x0300(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNavigationOverrideChangedBroadcast;                    // 0x0310(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FInputHandlingProperties                            InputHandlingProperties;                                 // 0x0320(0x000C) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XTD0[0x4];                                   // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNavigationOverrides                                NavigationOverrides;                                     // 0x0330(0x00C0) Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NJKJ[0x1];                                   // 0x03F0(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAddChildrenIntoInputGroup;                              // 0x03F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LJMP[0x2];                                   // 0x03F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           NavigationalAnchorPosition;                              // 0x03F4(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FWidgetStateProperties                              WidgetStateProperties;                                   // 0x03FC(0x0001) NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_T0F2[0x3];                                   // 0x03FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        CustomTickTimerHandle;                                   // 0x0400(0x0008) NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableCustomTickEvent;                                  // 0x0408(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bStopAnimationIfInvisible;                               // 0x0409(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIgnoreInputIfInvisible;                                 // 0x040A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LISL[0x1];                                   // 0x040B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CustomTickDeltaTime;                                     // 0x040C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_S6QG[0x8];                                   // 0x0410(0x0008) MISSED OFFSET (PADDING)

	public:
		void UnsubscribeFromNewUserControllerDetectedEvents();
		void UnsubscribeFromInputSourceChanges();
		void UnsubscribeFromInputEvent(const class FName& UIInputBindingName);
		void UnsubscribeFromInputCombos();
		void UnsubscribeFromAllInputEvents();
		void UnblockInputEvents();
		void SubscribeToStandardAction(EStandardActions StandardAction, EInputEventType InputEventType, bool bSendEventOnlyWhenWidgetIsFocused, const class FScriptDelegate& InputEventCallback);
		void SubscribeToNewUserControllerDetectedEvents();
		void SubscribeToInputSourceChanges();
		void SubscribeToInputEvent(const class FName& UIInputBindingName, EInputEventType InputEventType, bool bSendEventOnlyWhenWidgetIsFocused, const class FScriptDelegate& InputEventCallback);
		void SubscribeToInputCombo(TArray<class FName> ComboBindings, bool bSendEventOnlyWhenWidgetIsFocused, const class FScriptDelegate& InputEventCallback);
		void SubscribeToAnyKey(EInputEventType InputEventType, bool bSendEventOnlyWhenWidgetIsFocused, const class FScriptDelegate& InputEventCallback);
		void StopPropagationOfCurrentInputEvent();
		void StopInputSourceDetection();
		void StopCustomTick();
		void StopConsumptionOfAllInputEvents();
		void StartCustomTick();
		void ShowPersistentScreenByPath(const class FString& ScreenBlueprintPath);
		void ShowPersistentScreen();
		bool ShouldChildrenBeAddedInInputGroup();
		void SetTreatFirstControllerAndKeyboardMouseAsSamePlayer(bool ShouldTreatThemAsSame);
		void SetNonControllingUserIndicesWillControlFirstUserIndex(bool Enabled);
		void SetNavigationOverrideWidget(ENavigationDirection Direction, class UIGUI_WidgetBase* OverrideWidget);
		void SetNavigationalAnchorPosition(const struct FVector2D& NewAnchor);
		void SetMaxNumberOfUserControllersAllowed(int32_t NumberOfUserControllersAllowed);
		void SetIsDisabled(bool bIsDisabled);
		void SetCustomTick(bool bEnableTick, bool bIgnoreInputIfInvisible, bool bStopAnimationIfInvisible, float CustomTickInterval);
		void SetCanReceiveInputEvents(bool bReceivesInput);
		void SetCanBeNavigatedTo(bool bCanBeNavigatedTo);
		void SetCanBeNavigatedFrom(bool bCanBeNavigatedFrom);
		void RemoveControllingUserIndices(TArray<int32_t> UserIndicesToRemove);
		void RemoveAllExtraDetectedUserControllers();
		void RemoveAllControllingUserIndices();
		void PlayAnimationAndThen(class UWidgetAnimation* InAnimation, const struct FLatentActionInfo& LatentInfo, float StartAtTime, int32_t NumOfLoopsToPlay, float PlaybackSpeed);
		void PerformSelfActivityCheck();
		void OnWidgetOnScreen();
		void OnWidgetOffScreen();
		void OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void OnStateChangeEvent__DelegateSignature(class UIGUI_WidgetBase* Widget);
		void OnSelected(int32_t UserIndex);
		void OnNewUserControllerDetected(const struct FUserControllerData& NewUserController);
		void OnNavigationOverrideChanged__DelegateSignature(ENavigationDirection Direction, class UIGUI_WidgetBase* NewOverride);
		void OnNavigationOverrideChanged(ENavigationDirection Direction, class UIGUI_WidgetBase* NewOverride);
		void OnLoseFocus(int32_t UserIndex);
		void OnInputSourceChanged(const struct FUserControllerData& OldInputSource, const struct FUserControllerData& NewInputSource);
		void OnGainFocus(int32_t UserIndex);
		void OnEnabled();
		void OnDisabled();
		void OnCustomTick();
		void NavigateToScreen();
		void NavigateBackToScreen(bool NavigateToEarliestCase);
		void NavigateBackToFirstScreen();
		void NavigateBack();
		bool IsUserIndexAControllingUserIndex(int32_t UserIndex);
		bool IsFocusable();
		bool IsFirstControllerTreatedAsSamePlayerAsKeyboardMouse();
		bool IsCustomTickFeatureUsed();
		bool IsBindingValid(const class FName& UIInputBindingName);
		void HidePersistentScreenByPath(const class FString& ScreenBlueprintPath);
		void HidePersistentScreen();
		void HandleOnSelectEvent(const struct FInputEventData& InputEvent);
		class UTexture2D* GetTextureForUIInputBindingBasedOnCurrentInputSource(const class FName& UIInputBindingName, int32_t UserIndex);
		bool GetShouldSwapAB();
		void GetPrecastScreen(class UIGUI_ScreenBase** OutScreen);
		int32_t GetNumberOfDetectedUserControllers();
		int32_t GetNumberOfControllingUserIndices();
		void GetNavigationOverrideWidget(ENavigationDirection Direction);
		struct FVector2D GetNavigationalAnchorPosition();
		int32_t GetMaxNumberOfUserControllersAllowed();
		TArray<class UIGUI_WidgetBase*> GetListOfChildren();
		bool GetIsDisabled();
		int32_t GetInputPriority();
		class UIGUI_InputHandlingSystem* GetInputHandlingSystem();
		class FText GetDisplayNameForUIInputBinding(const class FName& UIInputBindingName);
		TArray<struct FUserControllerData> GetDetectedUserControllers();
		EInputSource GetCurrentInputSource(int32_t UserIndex);
		class FName GetBindingRepresentingStandardAction(EStandardActions StandardAction);
		TArray<int32_t> GetAllControllingUserIndices();
		struct FVector2D GetAbsolutePosition();
		void ForceInputSource(EInputSource InputSource, bool bStopInputSourceDetection);
		bool FindPrecastScreen(class UIGUI_ScreenBase** OutScreen);
		void CustomTick(float InDeltaTime);
		void ConsumeAllInputEvents();
		void ConstructOnlyOnce();
		bool CanReceiveInputEvents();
		bool CanBeNavigatedTo();
		bool CanBeNavigatedFrom();
		void BroadcastOnWidgetSelected(int32_t UserIndex);
		void BlockAllInputEvents();
		void BindHandleOnSelectEventToSelectStandardAction();
		bool AsyncLoadAssetList();
		bool AsyncLoadAsset();
		bool AreNonControllingUserIndicesControllingFirstUserIndexNavigation();
		void AllowInputSourceDetection();
		void AddNewControllingUserIndex(int32_t NewUserIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class IGUserInterface.IGUI_ScreenBase
	 * Size -> 0x0068 (FullSize[0x0480] - InheritedSize[0x0418])
	 */
	class UIGUI_ScreenBase : public UIGUI_WidgetBase
	{
	public:
		bool                                                       bLogTransitionsForScreen;                                // 0x0418(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6MG0[0x7];                                   // 0x0419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FInputGroup>                                 InputGroups;                                             // 0x0420(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class FString                                              CurrentFocusedInputGroup;                                // 0x0430(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XEMU[0x10];                                  // 0x0440(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DefaultFocusedInputGroup;                                // 0x0450(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7ESV[0x20];                                  // 0x0460(0x0020) MISSED OFFSET (PADDING)

	public:
		void TransitionFinished();
		void ShowScreen();
		void SetWidgetsAsPersistentWidgets(TArray<class UIGUI_WidgetBase*> NewPersistentWidgets);
		void SetFocusOnScreen(bool bResetToDefaultInputGroup);
		void SetFocusOnInputGroupForAllUsers(const class FString& InputGroupName, class UIGUI_WidgetBase* SetFocusTo, bool bResetFocusToDefault);
		void SetFocusOnInputGroup(const class FString& InputGroupName, class UIGUI_WidgetBase* SetFocusTo, bool bResetFocusToDefault, int32_t UserIndex);
		void SetDefaultWidgetForInputGroup(const class FString& InputGroupName, class UIGUI_WidgetBase* Widget);
		void SetCurrentFocusOnWidgetForUserIndex(int32_t UserIndex, class UIGUI_WidgetBase* Widget);
		void SetCurrentFocusOnWidget(class UIGUI_WidgetBase* Widget);
		void RemoveWidgetsFromPersistentWidgets(TArray<class UIGUI_WidgetBase*> ToBeRemovedPersistentWidgets);
		void RemoveWidgetFromInputGroup(class UIGUI_WidgetBase* WidgetToRemove, const class FString& InputGroupName);
		void RemoveInputGroup(const class FString& InputGroupName);
		void RemoveChildrenOfTypeClassFromWidgetBaseFromInputGroup(class UIGUI_WidgetBase* ContainerWidget, const class FString& InputGroupName);
		void RemoveChildrenOfTypeClassFromPanelWidgetFromInputGroup(class UPanelWidget* PanelWidget, const class FString& InputGroupName);
		void RemoveAllWidgetsFromInputGroup(const class FString& InputGroupName);
		void HideScreen();
		TArray<class UIGUI_WidgetBase*> GetWidgetsInInputGroup(const class FString& InputGroupName);
		TArray<struct FInputGroup> GetInputGroups();
		class FString GetInputGroupForUserIndex(int32_t UserIndex);
		struct FInputGroup GetInputGroup(const class FString& InputGroupName);
		class FString GetDefaultInputGroupName();
		class UIGUI_WidgetBase* GetCurrentFocusedWidget(int32_t UserIndex);
		bool DoesInputGroupExist(const class FString& InputGroupName);
		void CreateInputGroup(const struct FInputGroup& InputGroup);
		void CreateEmptyInputGroups(TArray<class FString> InputGroupNames, const struct FInputGroupOptions& InputGroupOptions);
		void AddWidgetToInputGroup(class UIGUI_WidgetBase* WidgetToAdd, const class FString& InputGroupName);
		void AddChildrenOfTypeClassFromWidgetBaseToInputGroup(class UIGUI_WidgetBase* ContainerWidget, const class FString& InputGroupName);
		void AddChildrenOfTypeClassFromPanelWidgetToInputGroup(class UPanelWidget* PanelWidget, const class FString& InputGroupName);
		void AddArrayOfWidgetsToInputGroup(TArray<class UIGUI_WidgetBase*> WidgetsToAdd, const class FString& InputGroupName);
		static UClass* StaticClass();
	};

	/**
	 * Class IGUserInterface.IGUI_ProfilerHelper
	 * Size -> 0x0000 (FullSize[0x0480] - InheritedSize[0x0480])
	 */
	class UIGUI_ProfilerHelper : public UIGUI_ScreenBase
	{
	public:
		void OpenStatProfilerSavesDirectory();
		static UClass* StaticClass();
	};

	/**
	 * Class IGUserInterface.IGUI_ProgressBar
	 * Size -> 0x00A8 (FullSize[0x02B8] - InheritedSize[0x0210])
	 */
	class UIGUI_ProgressBar : public UImage
	{
	public:
		unsigned char                                              UnknownData_GTNR[0x30];                                  // 0x0210(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterial*                                           ProgressBarMaterial;                                     // 0x0240(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            MaterialInstance;                                        // 0x0248(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture*                                            FillTexture;                                             // 0x0250(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture*                                            GradientTexture;                                         // 0x0258(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           RawValueRange;                                           // 0x0260(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RawGoalValue;                                            // 0x0268(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RawOriginValue;                                          // 0x026C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseAnimation;                                           // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPlayAutomaticAnimations;                                // 0x0271(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAnimatedTrailIsNewOriginOnDecrease;                     // 0x0272(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAnimatedFillIsNewOriginOnIncrease;                      // 0x0273(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AnimFillPercentToGoal;                                   // 0x0274(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AnimTrailPercentToGoal;                                  // 0x0278(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        FillColor;                                               // 0x027C(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        TrailColor;                                              // 0x028C(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6CRZ[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         ParentWidget;                                            // 0x02A0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWidgetAnimation*                                    IncreaseAnimation;                                       // 0x02A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWidgetAnimation*                                    DecreaseAnimation;                                       // 0x02B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetTrailColor(const struct FLinearColor& LinearColor);
		void SetRawValueRange(float MinValue, float MaxValue);
		void SetGradientTexture(class UTexture* Gradient);
		void SetGoalValueAsPercent(float Percent);
		void SetGoalValue(float RawValue);
		void SetFillTexture(class UTexture* Fill);
		void SetFillColor(const struct FLinearColor& LinearColor);
		void SetAutomaticAnimations(class UUserWidget* Parent, class UWidgetAnimation* Increase, class UWidgetAnimation* Decrease);
		void SetAnimTrailPercentToGoal(float Value);
		void SetAnimFillPercentToGoal(float Value);
		float GetAnimatedTrailPercent();
		float GetAnimatedFillPercent();
		float ConvertFromRawToPercent(float RawValue);
		float ConvertFromPercentToRaw(float Percent);
		static UClass* StaticClass();
	};

	/**
	 * Class IGUserInterface.IGUI_RichTextBlock
	 * Size -> 0x02E0 (FullSize[0x0408] - InheritedSize[0x0128])
	 */
	class UIGUI_RichTextBlock : public UTextLayoutWidget
	{
	public:
		class FText                                                Text;                                                    // 0x0128(0x0018) Edit, Protected, NativeAccessSpecifierProtected
		TArray<class UDataTable*>                                  TextStyleSets;                                           // 0x0140(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UDataTable*                                          TextColorSet;                                            // 0x0150(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UClass*>                                      DecoratorClasses;                                        // 0x0158(0x0010) Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_E5OD[0x280];                                 // 0x0168(0x0280) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UIGUI_RichTextBlockDecorator*>                InstanceDecorators;                                      // 0x03E8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UUK9[0x10];                                  // 0x03F8(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetText(const class FText& InText);
		class UIGUI_RichTextBlockDecorator* GetDecoratorByClass(class UClass* DecoratorClass);
		static UClass* StaticClass();
	};

	/**
	 * Class IGUserInterface.IGUI_RichTextBlockDecorator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGUI_RichTextBlockDecorator : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGUserInterface.IGUI_RichTextBlockImageDecorator
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UIGUI_RichTextBlockImageDecorator : public UIGUI_RichTextBlockDecorator
	{
	public:
		TArray<class UDataTable*>                                  ImageSets;                                               // 0x0028(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		void SetImageSets(TArray<class UDataTable*> ImageSetTables);
		static UClass* StaticClass();
	};

	/**
	 * Class IGUserInterface.IGUI_SceneRootBase
	 * Size -> 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
	 */
	class UIGUI_SceneRootBase : public UUserWidget
	{
	public:
		EHorizontalAlignment                                       DefaultHorizontalAlignmentForScreenSlots;                // 0x0260(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         DefaultVerticalAlignmentForScreenSlots;                  // 0x0261(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SFZH[0x6];                                   // 0x0262(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SceneRootOverlay[0x28];                                  // 0x0268(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void GetRootOverlay();
		void AddWidgetToOverlay(class UUserWidget* WidgetInstance);
		static UClass* StaticClass();
	};

	/**
	 * Class IGUserInterface.IGUI_ScrollableList
	 * Size -> 0x0010 (FullSize[0x0890] - InheritedSize[0x0880])
	 */
	class UIGUI_ScrollableList : public UScrollBox
	{
	public:
		unsigned char                                              UnknownData_X64E[0x10];                                  // 0x0880(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetScrollPosition(float Percent);
		void SetScrollboxOffset(float NewScrollboxOffset);
		void ScrollPageByPercent(float OffsetScrollPercent);
		void RemoveItems(TArray<class UIGUI_WidgetBase*> Widgets);
		void RemoveItem(class UIGUI_WidgetBase* Widget);
		void RemoveAllItems();
		void RefreshWidgetWithNavigationOverride();
		void ListItemFocused(class UIGUI_WidgetBase* Source, int32_t UserIndex);
		float GetScrollPercent();
		float GetMaxOffset();
		struct FVector2D GetContentSize();
		void AddListItems(TArray<class UIGUI_WidgetBase*> Widgets);
		void AddListItem(class UIGUI_WidgetBase* Widget);
		static UClass* StaticClass();
	};

	/**
	 * Class IGUserInterface.IGUI_StateComponent
	 * Size -> 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
	 */
	class UIGUI_StateComponent : public UActorComponent
	{
	public:
		unsigned char                                              ScreenStateStack[0x10];                                  // 0x00B0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              TransitioningScreens[0x10];                              // 0x00C0(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		void TransitionStartedForScreen();
		void TransitionFinishedForScreen(class UIGUI_ScreenBase* Screen);
		void RemoveStatesAfterLastInstanceOf();
		void RemoveStatesAfterFirstInstanceOf();
		void RemoveCurrentState();
		void RemoveAllButFirstState();
		bool IsScreenTransitionActive();
		bool HasState();
		bool HasPreviousState();
		void GetPreviousState();
		void GetCurrentState();
		void AddState();
		static UClass* StaticClass();
	};

	/**
	 * Class IGUserInterface.IGUI_ToggleText
	 * Size -> 0x0018 (FullSize[0x02C0] - InheritedSize[0x02A8])
	 */
	class UIGUI_ToggleText : public UTextBlock
	{
	public:
		bool                                                       bShouldNavigationLoop;                                   // 0x02A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DBGL[0x3];                                   // 0x02A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentOptionIndex;                                      // 0x02AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class FText>                                        OptionTextList;                                          // 0x02B0(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		void SetShouldNavigationLoop(bool ShouldLoop);
		void SetOptionList(TArray<class FText> OptionList);
		void SetCurrentOptionIndex(int32_t index);
		void RemoveOptionFromList(const class FText& OptionText);
		void NavigatePrevious();
		void NavigateNext();
		class FText GetOptionTextForIndex(int32_t index);
		TArray<class FText> GetOptionList();
		int32_t GetOptionIndexForText(const class FText& OptionText);
		class FText GetCurrentOptionText();
		bool CanNavigatePrevious();
		bool CanNavigateNext();
		void AddOptionToList(const class FText& OptionText);
		static UClass* StaticClass();
	};

	/**
	 * Class IGUserInterface.IGUI_UniformGridList
	 * Size -> 0x0048 (FullSize[0x08C8] - InheritedSize[0x0880])
	 */
	class UIGUI_UniformGridList : public UScrollBox
	{
	public:
		struct FMargin                                             SlotPadding;                                             // 0x0880(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MinDesiredSlotWidth;                                     // 0x0890(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDesiredSlotHeight;                                    // 0x0894(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WrapUpEnabled;                                           // 0x0898(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WrapDownEnabled;                                         // 0x0899(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WrapLeftEnabled;                                         // 0x089A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WrapRightEnabled;                                        // 0x089B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumOfRowsForUniformGrid;                                 // 0x089C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumOfColumnsForUniformGrid;                              // 0x08A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DF9E[0x24];                                  // 0x08A4(0x0024) MISSED OFFSET (PADDING)

	public:
		void SetWrapUpEnabled(bool IsWrappingEnabled);
		void SetWrapRightEnabled(bool IsWrappingEnabled);
		void SetWrapLeftEnabled(bool IsWrappingEnabled);
		void SetWrapDownEnabled(bool IsWrappingEnabled);
		void SetSlotPadding(const struct FMargin& InSlotPadding);
		void SetScrollPosition(float Percent);
		void SetScrollboxOffset(float NewScrollboxOffset);
		void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
		void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
		void ScrollPageByPercent(float OffsetScrollPercent);
		void RemoveItem(class UIGUI_WidgetBase* Widget);
		void RemoveAllItems();
		void ListItemFocused(class UIGUI_WidgetBase* Source, int32_t UserIndex);
		float GetScrollPercent();
		float GetMaxOffset();
		struct FVector2D GetContentSize();
		void AddListItemWithGridPosition(class UIGUI_WidgetBase* Widget, const struct FVector2D& GridPosition);
		void AddListItem(class UIGUI_WidgetBase* Widget);
		class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
