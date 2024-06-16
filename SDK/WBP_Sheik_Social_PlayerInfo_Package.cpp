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
	 * 		Name   -> Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.OnFriendPresenceUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikPlayerAccount                         Account                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_Social_PlayerInfo_C::OnFriendPresenceUpdated(const struct FSheikPlayerAccount& Account)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.OnFriendPresenceUpdated");
		
		UWBP_Sheik_Social_PlayerInfo_C_OnFriendPresenceUpdated_Params params {};
		params.Account = Account;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.GetFriendsManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikFriendsManager*                        FriendsManager                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerInfo_C::GetFriendsManager(class USheikFriendsManager** FriendsManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.GetFriendsManager");
		
		UWBP_Sheik_Social_PlayerInfo_C_GetFriendsManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FriendsManager != nullptr)
			*FriendsManager = params.FriendsManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.UpdateHeaderVisiblity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_PlayerInfo_C::UpdateHeaderVisiblity(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.UpdateHeaderVisiblity");
		
		UWBP_Sheik_Social_PlayerInfo_C_UpdateHeaderVisiblity_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.UpdateHeaderText
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerInfo_C::UpdateHeaderText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.UpdateHeaderText");
		
		UWBP_Sheik_Social_PlayerInfo_C_UpdateHeaderText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.UpdateWidgetColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 StatusBorderColor                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FSlateColor                                 NameColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Social_PlayerInfo_C::UpdateWidgetColor(const struct FSlateColor& StatusBorderColor, const struct FSlateColor& NameColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.UpdateWidgetColor");
		
		UWBP_Sheik_Social_PlayerInfo_C_UpdateWidgetColor_Params params {};
		params.StatusBorderColor = StatusBorderColor;
		params.NameColor = NameColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.UpdateBlockedStatus
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerInfo_C::UpdateBlockedStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.UpdateBlockedStatus");
		
		UWBP_Sheik_Social_PlayerInfo_C_UpdateBlockedStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.UpdateLastSeen
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerInfo_C::UpdateLastSeen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.UpdateLastSeen");
		
		UWBP_Sheik_Social_PlayerInfo_C_UpdateLastSeen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.UpdatePlatformImage
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerInfo_C::UpdatePlatformImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.UpdatePlatformImage");
		
		UWBP_Sheik_Social_PlayerInfo_C_UpdatePlatformImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.UpdateStatus
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerInfo_C::UpdateStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.UpdateStatus");
		
		UWBP_Sheik_Social_PlayerInfo_C_UpdateStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.UpdateName
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerInfo_C::UpdateName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.UpdateName");
		
		UWBP_Sheik_Social_PlayerInfo_C_UpdateName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikPlayerSocialEntry                     PlayerSocialEntry                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Social_PlayerInfo_C::SetData(const struct FSheikPlayerSocialEntry& PlayerSocialEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.SetData");
		
		UWBP_Sheik_Social_PlayerInfo_C_SetData_Params params {};
		params.PlayerSocialEntry = PlayerSocialEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.OnSelectedAnimationFinished
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerInfo_C::OnSelectedAnimationFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.OnSelectedAnimationFinished");
		
		UWBP_Sheik_Social_PlayerInfo_C_OnSelectedAnimationFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.HandleSelect
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerInfo_C::HandleSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.HandleSelect");
		
		UWBP_Sheik_Social_PlayerInfo_C_HandleSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.SetWidgetFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SkipAnimations                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsFocused                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_PlayerInfo_C::SetWidgetFocus(bool SkipAnimations, bool IsFocused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.SetWidgetFocus");
		
		UWBP_Sheik_Social_PlayerInfo_C_SetWidgetFocus_Params params {};
		params.SkipAnimations = SkipAnimations;
		params.IsFocused = IsFocused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.OnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerInfo_C::OnSelected(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.OnSelected");
		
		UWBP_Sheik_Social_PlayerInfo_C_OnSelected_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.OnGainFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerInfo_C::OnGainFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.OnGainFocus");
		
		UWBP_Sheik_Social_PlayerInfo_C_OnGainFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.OnLoseFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerInfo_C::OnLoseFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.OnLoseFocus");
		
		UWBP_Sheik_Social_PlayerInfo_C_OnLoseFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_PlayerInfo_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.PreConstruct");
		
		UWBP_Sheik_Social_PlayerInfo_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerInfo_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.ConstructOnlyOnce");
		
		UWBP_Sheik_Social_PlayerInfo_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerInfo_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.Tick");
		
		UWBP_Sheik_Social_PlayerInfo_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerInfo_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.OnInitialized");
		
		UWBP_Sheik_Social_PlayerInfo_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.ExecuteUbergraph_WBP_Sheik_Social_PlayerInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerInfo_C::ExecuteUbergraph_WBP_Sheik_Social_PlayerInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C.ExecuteUbergraph_WBP_Sheik_Social_PlayerInfo");
		
		UWBP_Sheik_Social_PlayerInfo_C_ExecuteUbergraph_WBP_Sheik_Social_PlayerInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Social_PlayerInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Social_PlayerInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C");
		return ptr;
	}

}


