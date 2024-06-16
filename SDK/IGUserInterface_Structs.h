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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum IGUserInterface.EInputEventType
	 */
	enum class EInputEventType : uint8_t
	{
		Pressed  = 0,
		Released = 1,
		Held     = 2,
		Any      = 3,
		MAX      = 4
	};

	/**
	 * Enum IGUserInterface.EInputSource
	 */
	enum class EInputSource : uint8_t
	{
		None                 = 0,
		Keyboard             = 1,
		Mouse                = 2,
		Touch                = 3,
		Motion               = 4,
		Gamepad_Generic      = 5,
		Gamepad_PS4          = 6,
		Gamepad_Xbox_One     = 7,
		Gamepad_PS5          = 8,
		Gamepad_Xbox_SeriesX = 9,
		Gamepad_Steam        = 10,
		Gamepad_Switch       = 11,
		MAX                  = 12
	};

	/**
	 * Enum IGUserInterface.EStandardActions
	 */
	enum class EStandardActions : uint8_t
	{
		None          = 0,
		SA_Select     = 1,
		SA_Back       = 2,
		SA_Up         = 3,
		SA_Down       = 4,
		SA_Left       = 5,
		SA_Right      = 6,
		SA_PageUp     = 7,
		SA_PageDown   = 8,
		SA_ScrollUp   = 9,
		SA_ScrollDown = 10,
		SA_TabLeft    = 11,
		SA_TabRight   = 12,
		MAX           = 13
	};

	/**
	 * Enum IGUserInterface.ENavigationDirection
	 */
	enum class ENavigationDirection : uint8_t
	{
		None  = 0,
		Up    = 1,
		Down  = 2,
		Left  = 3,
		Right = 4,
		MAX   = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct IGUserInterface.IGUI_RichImageRow
	 * Size -> 0x00A8 (FullSize[0x00B0] - InheritedSize[0x0008])
	 */
	struct FIGUI_RichImageRow : public FTableRowBase
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0008(0x0088) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             Padding;                                                 // 0x0090(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           Offset;                                                  // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ClampSizeToTextSize;                                     // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_81ZR[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGUserInterface.IGUI_RichTextStyleRow
	 * Size -> 0x0270 (FullSize[0x0278] - InheritedSize[0x0008])
	 */
	struct FIGUI_RichTextStyleRow : public FTableRowBase
	{
	public:
		struct FTextBlockStyle                                     TextStyle;                                               // 0x0008(0x0270) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGUserInterface.IGUI_SortingLayer
	 * Size -> 0x0020
	 */
	struct FIGUI_SortingLayer
	{
	public:
		class FName                                                LayerName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LayerDepth;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_60IP[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ScreensInLayer[0x10];                                    // 0x0010(0x0010) UNKNOWN PROPERTY: ArrayProperty
	};

	/**
	 * ScriptStruct IGUserInterface.InputBindingName
	 * Size -> 0x0008
	 */
	struct FInputBindingName
	{
	public:
		class FName                                                InputBindingName;                                        // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGUserInterface.InputHandlingProperties
	 * Size -> 0x000C
	 */
	struct FInputHandlingProperties
	{
	public:
		bool                                                       bCanReceiveInput;                                        // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YS0T[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InputPriority;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanBeNavigatedTo;                                       // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanBeNavigatedFrom;                                     // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J97A[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGUserInterface.NavigationOverride
	 * Size -> 0x0030
	 */
	struct FNavigationOverride
	{
	public:
		class FName                                                NameOfWidgetToOverride;                                  // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Override[0x28];                                          // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct IGUserInterface.NavigationOverrides
	 * Size -> 0x00C0
	 */
	struct FNavigationOverrides
	{
	public:
		struct FNavigationOverride                                 UpNavigationOverride;                                    // 0x0000(0x0030) Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FNavigationOverride                                 DownNavigationOverride;                                  // 0x0030(0x0030) Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FNavigationOverride                                 LeftNavigationOverride;                                  // 0x0060(0x0030) Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FNavigationOverride                                 RightNavigationOverride;                                 // 0x0090(0x0030) Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGUserInterface.WidgetStateProperties
	 * Size -> 0x0001
	 */
	struct FWidgetStateProperties
	{
	public:
		bool                                                       bIsDisabled;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGUserInterface.InputGroupOptions
	 * Size -> 0x0020
	 */
	struct FInputGroupOptions
	{
	public:
		bool                                                       HorizontalWrapping;                                      // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       VerticalWrapping;                                        // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DoNotSetFocusIfThereIsNoDefaultFocus;                    // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ExcludePersistentWidgetsWhenWrapping;                    // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LoseFocusOnWidgetWhenMousingOut;                         // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ContinueNavigatingOnHeldInput;                           // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OTY3[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeForButtonToBeHeldToContinueNavigation;               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeForButtonToBeHeldForEachNavigate;                    // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           CurrentTimeButtonisHeldBetweenEachNavigate;              // 0x0010(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           CurrentTimeLeftBeforeContinuingNavigationOnHeldPresses;  // 0x0018(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGUserInterface.InputGroup
	 * Size -> 0x0098
	 */
	struct FInputGroup
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UIGUI_WidgetBase*>                            FocusableWidgets;                                        // 0x0010(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TMap<int32_t, class UIGUI_WidgetBase*>                     CurrentFocusForUser;                                     // 0x0020(0x0050) BlueprintVisible, ExportObject, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UIGUI_WidgetBase*                                    DefaultFocus;                                            // 0x0070(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputGroupOptions                                  Options;                                                 // 0x0078(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGUserInterface.InputEventData
	 * Size -> 0x0038
	 */
	struct FInputEventData
	{
	public:
		class FName                                                UIInputBindingName;                                      // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                Key;                                                     // 0x0008(0x0018) BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInputEventType                                            InputEventType;                                          // 0x0020(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FWDW[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AnalogAxisValue;                                         // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeInSecsKeyWasHeldDown;                                // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UserIndex;                                               // 0x002C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IEWG[0x1];                                   // 0x0030(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bContinuePropagation;                                    // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LLWM[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGUserInterface.InputComboEventData
	 * Size -> 0x0020
	 */
	struct FInputComboEventData
	{
	public:
		unsigned char                                              UnknownData_ORZO[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        ComboBindings;                                           // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    UserIndex;                                               // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeBetweenFirstKeyPressAndLastKeyPress;                 // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGUserInterface.UserControllerData
	 * Size -> 0x0008
	 */
	struct FUserControllerData
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInputSource                                               LastInputSource;                                         // 0x0004(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3175[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGUserInterface.UserControllerNavigationalData
	 * Size -> 0x0018
	 */
	struct FUserControllerNavigationalData
	{
	public:
		int32_t                                                    ControllingUserIndex;                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SQRH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrentInputGroup;                                       // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGUserInterface.InputBindingComboElement
	 * Size -> 0x00A8
	 */
	struct FInputBindingComboElement
	{
	public:
		class FName                                                UIInputBindingName;                                      // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<int32_t, bool>                                        IsBindingPressedMap;                                     // 0x0008(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<int32_t, struct FDateTime>                            TimeThisBindingWasPressedMap;                            // 0x0058(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGUserInterface.InputBindingComboSubscriptionData
	 * Size -> 0x0030
	 */
	struct FInputBindingComboSubscriptionData
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FInputBindingComboElement>                   ComboBindings;                                           // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      EventDelegate;                                           // 0x0018(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bSendEventOnlyWhenWidgetIsFocused;                       // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5KK7[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGUserInterface.InputSubscriberData
	 * Size -> 0x0020
	 */
	struct FInputSubscriberData
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInputEventType                                            InputEventType;                                          // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AOXE[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      EventDelegate;                                           // 0x000C(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bSendEventOnlyWhenWidgetIsFocused;                       // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SODW[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGUserInterface.BindingKeyData
	 * Size -> 0x0020
	 */
	struct FBindingKeyData
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           AnalogAxisRange;                                         // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGUserInterface.IconBinding
	 * Size -> 0x0010
	 */
	struct FIconBinding
	{
	public:
		EInputSource                                               InputSourcePlatform;                                     // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HXPZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          IconTexture;                                             // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGUserInterface.BindingNameToKeyData
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FBindingNameToKeyData : public FTableRowBase
	{
	public:
		class FName                                                UIInputBindingName;                                      // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FBindingKeyData>                             ListOfKeys;                                              // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                InputIniBindingName;                                     // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          DefaultIconTexture;                                      // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FIconBinding>                                IconBindings;                                            // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		EStandardActions                                           StandardActionRepresentation;                            // 0x0058(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1XCI[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBindingKeyData>                             ABSwappedListOfKeys;                                     // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FIconBinding>                                ABSwappedIconBindings;                                   // 0x0070(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGUserInterface.IGUI_RichTextColorRow
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FIGUI_RichTextColorRow : public FTableRowBase
	{
	public:
		struct FSlateColor                                         TextColor;                                               // 0x0008(0x0028) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGUserInterface.InputBindingKeyEntry
	 * Size -> 0x0020
	 */
	struct FInputBindingKeyEntry
	{
	public:
		class FName                                                InputBindingName;                                        // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                InputLabelOverride;                                      // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
