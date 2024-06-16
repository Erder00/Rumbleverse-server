/**
 * Name: Rumbleverse
 * Version: Latest
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.GetTabImagesAsString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Out                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_NavigationTabManager_C::GetTabImagesAsString(class FString* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.GetTabImagesAsString");
		
		UWBP_Sheik_NavigationTabManager_C_GetTabImagesAsString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.GetTabNamesAsString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Out                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_NavigationTabManager_C::GetTabNamesAsString(class FString* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.GetTabNamesAsString");
		
		UWBP_Sheik_NavigationTabManager_C_GetTabNamesAsString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.Get Input Enabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_NavigationTabManager_C::GetInputEnabled(bool* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.Get Input Enabled");
		
		UWBP_Sheik_NavigationTabManager_C_GetInputEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.SetInputEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InputEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_NavigationTabManager_C::SetInputEnabled(bool InputEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.SetInputEnabled");
		
		UWBP_Sheik_NavigationTabManager_C_SetInputEnabled_Params params {};
		params.InputEnabled = InputEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.OnTabWidgetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            TabSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_NavigationTabManager_C::OnTabWidgetSelected(class UIGUI_WidgetBase* TabSelected, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.OnTabWidgetSelected");
		
		UWBP_Sheik_NavigationTabManager_C_OnTabWidgetSelected_Params params {};
		params.TabSelected = TabSelected;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.PlayTabSound
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_NavigationTabManager_C::PlayTabSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.PlayTabSound");
		
		UWBP_Sheik_NavigationTabManager_C_PlayTabSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.CheckTabImageArraySize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pass                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_NavigationTabManager_C::CheckTabImageArraySize(bool* Pass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.CheckTabImageArraySize");
		
		UWBP_Sheik_NavigationTabManager_C_CheckTabImageArraySize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pass != nullptr)
			*Pass = params.Pass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.DisableTabInput
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_NavigationTabManager_C::DisableTabInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.DisableTabInput");
		
		UWBP_Sheik_NavigationTabManager_C_DisableTabInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.RemoveTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TabIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_NavigationTabManager_C::RemoveTab(int32_t TabIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.RemoveTab");
		
		UWBP_Sheik_NavigationTabManager_C_RemoveTab_Params params {};
		params.TabIndex = TabIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.PopulateContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_NavigationTabManager_C::PopulateContent(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.PopulateContent");
		
		UWBP_Sheik_NavigationTabManager_C_PopulateContent_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.AddTabsToContentArea
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_NavigationTabManager_C::AddTabsToContentArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.AddTabsToContentArea");
		
		UWBP_Sheik_NavigationTabManager_C_AddTabsToContentArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.GetSelectedTabIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectedTabIndex                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_NavigationTabManager_C::GetSelectedTabIndex(int32_t* SelectedTabIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.GetSelectedTabIndex");
		
		UWBP_Sheik_NavigationTabManager_C_GetSelectedTabIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedTabIndex != nullptr)
			*SelectedTabIndex = params.SelectedTabIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.GetSelectedTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikTabBase*                               SelectedTab                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_NavigationTabManager_C::GetSelectedTab(class USheikTabBase** SelectedTab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.GetSelectedTab");
		
		UWBP_Sheik_NavigationTabManager_C_GetSelectedTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedTab != nullptr)
			*SelectedTab = params.SelectedTab;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.GetTabsLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TabsLength                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_NavigationTabManager_C::GetTabsLength(int32_t* TabsLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.GetTabsLength");
		
		UWBP_Sheik_NavigationTabManager_C_GetTabsLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TabsLength != nullptr)
			*TabsLength = params.TabsLength;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.SetTabInput
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_NavigationTabManager_C::SetTabInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.SetTabInput");
		
		UWBP_Sheik_NavigationTabManager_C_SetTabInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.CreateTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        TabLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UTexture2D*                                  TabImage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_NavigationTabManager_C::CreateTab(const class FText& TabLabel, class UTexture2D* TabImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.CreateTab");
		
		UWBP_Sheik_NavigationTabManager_C_CreateTab_Params params {};
		params.TabLabel = TabLabel;
		params.TabImage = TabImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.GetWrapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RequestedIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrappedIndex                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_NavigationTabManager_C::GetWrapping(int32_t RequestedIndex, int32_t* WrappedIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.GetWrapping");
		
		UWBP_Sheik_NavigationTabManager_C_GetWrapping_Params params {};
		params.RequestedIndex = RequestedIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WrappedIndex != nullptr)
			*WrappedIndex = params.WrappedIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.TabLeftRight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WrapDirection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_NavigationTabManager_C::TabLeftRight(int32_t WrapDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.TabLeftRight");
		
		UWBP_Sheik_NavigationTabManager_C_TabLeftRight_Params params {};
		params.WrapDirection = WrapDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.InitializeFirstTabSelected
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_NavigationTabManager_C::InitializeFirstTabSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.InitializeFirstTabSelected");
		
		UWBP_Sheik_NavigationTabManager_C_InitializeFirstTabSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.SetSelectedTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            TabSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_NavigationTabManager_C::SetSelectedTab(class UIGUI_WidgetBase* TabSelected, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.SetSelectedTab");
		
		UWBP_Sheik_NavigationTabManager_C_SetSelectedTab_Params params {};
		params.TabSelected = TabSelected;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.GetTabs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USheikTabBase*>                       ArrayOfTabs                                                (Parm, OutParm, ContainsInstancedReference)
	 */
	void UWBP_Sheik_NavigationTabManager_C::GetTabs(TArray<class USheikTabBase*>* ArrayOfTabs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.GetTabs");
		
		UWBP_Sheik_NavigationTabManager_C_GetTabs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrayOfTabs != nullptr)
			*ArrayOfTabs = params.ArrayOfTabs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.SetTabList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FText>                                TabNames                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class UTexture2D*>                          InTabImages                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_NavigationTabManager_C::SetTabList(TArray<class FText>* TabNames, TArray<class UTexture2D*>* InTabImages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.SetTabList");
		
		UWBP_Sheik_NavigationTabManager_C_SetTabList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TabNames != nullptr)
			*TabNames = params.TabNames;
		if (InTabImages != nullptr)
			*InTabImages = params.InTabImages;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.TabLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_NavigationTabManager_C::TabLeft(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.TabLeft");
		
		UWBP_Sheik_NavigationTabManager_C_TabLeft_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.TabRight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_NavigationTabManager_C::TabRight(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.TabRight");
		
		UWBP_Sheik_NavigationTabManager_C_TabRight_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_NavigationTabManager_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.ConstructOnlyOnce");
		
		UWBP_Sheik_NavigationTabManager_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_NavigationTabManager_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.PreConstruct");
		
		UWBP_Sheik_NavigationTabManager_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.ExecuteUbergraph_WBP_Sheik_NavigationTabManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_NavigationTabManager_C::ExecuteUbergraph_WBP_Sheik_NavigationTabManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.ExecuteUbergraph_WBP_Sheik_NavigationTabManager");
		
		UWBP_Sheik_NavigationTabManager_C_ExecuteUbergraph_WBP_Sheik_NavigationTabManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.OnTabSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TabIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_NavigationTabManager_C::OnTabSelected__DelegateSignature(class UIGUI_WidgetBase* Source, int32_t TabIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C.OnTabSelected__DelegateSignature");
		
		UWBP_Sheik_NavigationTabManager_C_OnTabSelected__DelegateSignature_Params params {};
		params.Source = Source;
		params.TabIndex = TabIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_NavigationTabManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_NavigationTabManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C");
		return ptr;
	}

}


