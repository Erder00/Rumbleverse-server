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
	 * 		Name   -> Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.SetStatItemSoundPlayback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldPlaySound                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_EOM_MatchInfo_C::SetStatItemSoundPlayback(bool bShouldPlaySound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.SetStatItemSoundPlayback");
		
		UWBP_Sheik_EOM_MatchInfo_C_SetStatItemSoundPlayback_Params params {};
		params.bShouldPlaySound = bShouldPlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.IsTeamMatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsTeamMatch                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_EOM_MatchInfo_C::IsTeamMatch(bool* IsTeamMatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.IsTeamMatch");
		
		UWBP_Sheik_EOM_MatchInfo_C_IsTeamMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsTeamMatch != nullptr)
			*IsTeamMatch = params.IsTeamMatch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.OnVoiceChatOptionsUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsMuted                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsDeafened                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPushToTalk                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_EOM_MatchInfo_C::OnVoiceChatOptionsUpdated(bool bIsEnabled, bool bIsMuted, bool bIsDeafened, bool bIsPushToTalk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.OnVoiceChatOptionsUpdated");
		
		UWBP_Sheik_EOM_MatchInfo_C_OnVoiceChatOptionsUpdated_Params params {};
		params.bIsEnabled = bIsEnabled;
		params.bIsMuted = bIsMuted;
		params.bIsDeafened = bIsDeafened;
		params.bIsPushToTalk = bIsPushToTalk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.OnVoiceChatPlayerTalkingUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ChannelName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ProductUserId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bIsTalking                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsLocalPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_EOM_MatchInfo_C::OnVoiceChatPlayerTalkingUpdated(const class FString& ChannelName, const class FString& ProductUserId, bool bIsTalking, bool bIsLocalPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.OnVoiceChatPlayerTalkingUpdated");
		
		UWBP_Sheik_EOM_MatchInfo_C_OnVoiceChatPlayerTalkingUpdated_Params params {};
		params.ChannelName = ChannelName;
		params.ProductUserId = ProductUserId;
		params.bIsTalking = bIsTalking;
		params.bIsLocalPlayer = bIsLocalPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.UpdatePlatformIcon
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_EOM_MatchInfo_C::UpdatePlatformIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.UpdatePlatformIcon");
		
		UWBP_Sheik_EOM_MatchInfo_C_UpdatePlatformIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.PopulateStatItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSheikPlayerStat>                    Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_EOM_MatchInfo_C::PopulateStatItems(TArray<struct FSheikPlayerStat>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.PopulateStatItems");
		
		UWBP_Sheik_EOM_MatchInfo_C_PopulateStatItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Stats != nullptr)
			*Stats = params.Stats;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.ResetInitialStates
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_EOM_MatchInfo_C::ResetInitialStates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.ResetInitialStates");
		
		UWBP_Sheik_EOM_MatchInfo_C_ResetInitialStates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.CascadeStatItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SpeedUp                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_EOM_MatchInfo_C::CascadeStatItems(bool SpeedUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.CascadeStatItems");
		
		UWBP_Sheik_EOM_MatchInfo_C_CascadeStatItems_Params params {};
		params.SpeedUp = SpeedUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.ShowStats
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_EOM_MatchInfo_C::ShowStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.ShowStats");
		
		UWBP_Sheik_EOM_MatchInfo_C_ShowStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.InitializeDisplayInfo
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_EOM_MatchInfo_C::InitializeDisplayInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.InitializeDisplayInfo");
		
		UWBP_Sheik_EOM_MatchInfo_C_InitializeDisplayInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_EOM_MatchInfo_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.Tick");
		
		UWBP_Sheik_EOM_MatchInfo_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_EOM_MatchInfo_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.ConstructOnlyOnce");
		
		UWBP_Sheik_EOM_MatchInfo_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.ExecuteUbergraph_WBP_Sheik_EOM_MatchInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_EOM_MatchInfo_C::ExecuteUbergraph_WBP_Sheik_EOM_MatchInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.ExecuteUbergraph_WBP_Sheik_EOM_MatchInfo");
		
		UWBP_Sheik_EOM_MatchInfo_C_ExecuteUbergraph_WBP_Sheik_EOM_MatchInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.CascadeFinished__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_EOM_MatchInfo_C::CascadeFinished__DelegateSignature(class UIGUI_WidgetBase* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C.CascadeFinished__DelegateSignature");
		
		UWBP_Sheik_EOM_MatchInfo_C_CascadeFinished__DelegateSignature_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_EOM_MatchInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_EOM_MatchInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_EOM_MatchInfo.WBP_Sheik_EOM_MatchInfo_C");
		return ptr;
	}

}


