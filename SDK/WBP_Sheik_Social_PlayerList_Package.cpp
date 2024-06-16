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
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.OnFriendPresenceUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikPlayerAccount                         Account                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_Social_PlayerList_C::OnFriendPresenceUpdated(const struct FSheikPlayerAccount& Account)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.OnFriendPresenceUpdated");
		
		UWBP_Sheik_Social_PlayerList_C_OnFriendPresenceUpdated_Params params {};
		params.Account = Account;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.GetFriendsManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikFriendsManager*                        FriendsManager                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerList_C::GetFriendsManager(class USheikFriendsManager** FriendsManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.GetFriendsManager");
		
		UWBP_Sheik_Social_PlayerList_C_GetFriendsManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FriendsManager != nullptr)
			*FriendsManager = params.FriendsManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.ResetHeaders
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerList_C::ResetHeaders()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.ResetHeaders");
		
		UWBP_Sheik_Social_PlayerList_C_ResetHeaders_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.SetHeaderTextVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikPlayerSocialEntry                     PlayerSocialEntry                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UWBP_Sheik_Social_PlayerInfo_C*              SocialPlayerEntry                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerList_C::SetHeaderTextVisibility(const struct FSheikPlayerSocialEntry& PlayerSocialEntry, class UWBP_Sheik_Social_PlayerInfo_C* SocialPlayerEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.SetHeaderTextVisibility");
		
		UWBP_Sheik_Social_PlayerList_C_SetHeaderTextVisibility_Params params {};
		params.PlayerSocialEntry = PlayerSocialEntry;
		params.SocialPlayerEntry = SocialPlayerEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.TabPageRight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Social_PlayerList_C::TabPageRight(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.TabPageRight");
		
		UWBP_Sheik_Social_PlayerList_C_TabPageRight_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.TabPageLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Social_PlayerList_C::TabPageLeft(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.TabPageLeft");
		
		UWBP_Sheik_Social_PlayerList_C_TabPageLeft_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.HandlePageIndexInputSubscribe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Activated                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_PlayerList_C::HandlePageIndexInputSubscribe(bool Activated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.HandlePageIndexInputSubscribe");
		
		UWBP_Sheik_Social_PlayerList_C_HandlePageIndexInputSubscribe_Params params {};
		params.Activated = Activated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.CreatePagerTabs
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerList_C::CreatePagerTabs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.CreatePagerTabs");
		
		UWBP_Sheik_Social_PlayerList_C_CreatePagerTabs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.SetSocialEntryData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSheikPlayerSocialEntry>             SocialEntries                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_Social_PlayerList_C::SetSocialEntryData(TArray<struct FSheikPlayerSocialEntry>* SocialEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.SetSocialEntryData");
		
		UWBP_Sheik_Social_PlayerList_C_SetSocialEntryData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SocialEntries != nullptr)
			*SocialEntries = params.SocialEntries;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.OnSocialEntryWidgetUnfocused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerList_C::OnSocialEntryWidgetUnfocused(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.OnSocialEntryWidgetUnfocused");
		
		UWBP_Sheik_Social_PlayerList_C_OnSocialEntryWidgetUnfocused_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.OnSocialEntryWidgetFocused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerList_C::OnSocialEntryWidgetFocused(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.OnSocialEntryWidgetFocused");
		
		UWBP_Sheik_Social_PlayerList_C_OnSocialEntryWidgetFocused_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.OnSocialEntryWidgetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerList_C::OnSocialEntryWidgetSelected(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.OnSocialEntryWidgetSelected");
		
		UWBP_Sheik_Social_PlayerList_C_OnSocialEntryWidgetSelected_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.ClearSeparators
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerList_C::ClearSeparators()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.ClearSeparators");
		
		UWBP_Sheik_Social_PlayerList_C_ClearSeparators_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.AddSeparator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            WidgetEntry                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EWBP_Sheik_Social_ListSeparatorType                SeparatorType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerList_C::AddSeparator(class UIGUI_WidgetBase* WidgetEntry, EWBP_Sheik_Social_ListSeparatorType SeparatorType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.AddSeparator");
		
		UWBP_Sheik_Social_PlayerList_C_AddSeparator_Params params {};
		params.WidgetEntry = WidgetEntry;
		params.SeparatorType = SeparatorType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.FocusSocialEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikPlayerSocialEntry                     SocialEntry                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Social_PlayerList_C::FocusSocialEntry(const struct FSheikPlayerSocialEntry& SocialEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.FocusSocialEntry");
		
		UWBP_Sheik_Social_PlayerList_C_FocusSocialEntry_Params params {};
		params.SocialEntry = SocialEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.GetNavigableWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UIGUI_WidgetBase*>                    NavigableWidgets                                           (Parm, OutParm, ContainsInstancedReference)
	 */
	void UWBP_Sheik_Social_PlayerList_C::GetNavigableWidgets(TArray<class UIGUI_WidgetBase*>* NavigableWidgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.GetNavigableWidgets");
		
		UWBP_Sheik_Social_PlayerList_C_GetNavigableWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NavigableWidgets != nullptr)
			*NavigableWidgets = params.NavigableWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.Populate
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerList_C::Populate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.Populate");
		
		UWBP_Sheik_Social_PlayerList_C_Populate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.PreviousPage
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerList_C::PreviousPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.PreviousPage");
		
		UWBP_Sheik_Social_PlayerList_C_PreviousPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.NextPage
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerList_C::NextPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.NextPage");
		
		UWBP_Sheik_Social_PlayerList_C_NextPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.FindWidgetForSocialEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikPlayerSocialEntry                     SocialEntry                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class USheikWidgetBase*                            Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerList_C::FindWidgetForSocialEntry(const struct FSheikPlayerSocialEntry& SocialEntry, class USheikWidgetBase** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.FindWidgetForSocialEntry");
		
		UWBP_Sheik_Social_PlayerList_C_FindWidgetForSocialEntry_Params params {};
		params.SocialEntry = SocialEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.RefocusSelection
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerList_C::RefocusSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.RefocusSelection");
		
		UWBP_Sheik_Social_PlayerList_C_RefocusSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.FindDataIndexForSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ArrayIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerList_C::FindDataIndexForSelection(int32_t* ArrayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.FindDataIndexForSelection");
		
		UWBP_Sheik_Social_PlayerList_C_FindDataIndexForSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrayIndex != nullptr)
			*ArrayIndex = params.ArrayIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.AdjustPaging
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerList_C::AdjustPaging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.AdjustPaging");
		
		UWBP_Sheik_Social_PlayerList_C_AdjustPaging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.GetRelativeIndexForSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ArrayIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerList_C::GetRelativeIndexForSelection(int32_t* ArrayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.GetRelativeIndexForSelection");
		
		UWBP_Sheik_Social_PlayerList_C_GetRelativeIndexForSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrayIndex != nullptr)
			*ArrayIndex = params.ArrayIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.ClearSelection
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerList_C::ClearSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.ClearSelection");
		
		UWBP_Sheik_Social_PlayerList_C_ClearSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.Update
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerList_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.Update");
		
		UWBP_Sheik_Social_PlayerList_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.BndEvt__WBP_Sheik_Social_PlayerList_PagerTabs_K2Node_ComponentBoundEvent_0_SwitchPage__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PageNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerList_C::BndEvt__WBP_Sheik_Social_PlayerList_PagerTabs_K2Node_ComponentBoundEvent_0_SwitchPage__DelegateSignature(int32_t PageNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.BndEvt__WBP_Sheik_Social_PlayerList_PagerTabs_K2Node_ComponentBoundEvent_0_SwitchPage__DelegateSignature");
		
		UWBP_Sheik_Social_PlayerList_C_BndEvt__WBP_Sheik_Social_PlayerList_PagerTabs_K2Node_ComponentBoundEvent_0_SwitchPage__DelegateSignature_Params params {};
		params.PageNumber = PageNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerList_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.OnInitialized");
		
		UWBP_Sheik_Social_PlayerList_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.ExecuteUbergraph_WBP_Sheik_Social_PlayerList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerList_C::ExecuteUbergraph_WBP_Sheik_Social_PlayerList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.ExecuteUbergraph_WBP_Sheik_Social_PlayerList");
		
		UWBP_Sheik_Social_PlayerList_C_ExecuteUbergraph_WBP_Sheik_Social_PlayerList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.OnEntrySelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSheikPlayerSocialEntry                     PlayerSocialEntry                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Social_PlayerList_C::OnEntrySelected__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex, const struct FSheikPlayerSocialEntry& PlayerSocialEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C.OnEntrySelected__DelegateSignature");
		
		UWBP_Sheik_Social_PlayerList_C_OnEntrySelected__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		params.PlayerSocialEntry = PlayerSocialEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Social_PlayerList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Social_PlayerList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C");
		return ptr;
	}

}


