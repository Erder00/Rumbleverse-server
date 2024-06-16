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
	 * 		Name   -> Function WBP_EmoteUI.WBP_EmoteUI_C.MuteAllSlotSounds
	 * 		Flags  -> ()
	 */
	void UWBP_EmoteUI_C::MuteAllSlotSounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EmoteUI.WBP_EmoteUI_C.MuteAllSlotSounds");
		
		UWBP_EmoteUI_C_MuteAllSlotSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EmoteUI.WBP_EmoteUI_C.SetPlayPageSlotSounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_EmoteUIPage_C*                          EmoteUIPage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               inPlaySound                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_EmoteUI_C::SetPlayPageSlotSounds(class UWBP_EmoteUIPage_C* EmoteUIPage, bool inPlaySound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EmoteUI.WBP_EmoteUI_C.SetPlayPageSlotSounds");
		
		UWBP_EmoteUI_C_SetPlayPageSlotSounds_Params params {};
		params.EmoteUIPage = EmoteUIPage;
		params.inPlaySound = inPlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EmoteUI.WBP_EmoteUI_C.UpdateNextButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PageNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_EmoteUI_C::UpdateNextButton(int32_t PageNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EmoteUI.WBP_EmoteUI_C.UpdateNextButton");
		
		UWBP_EmoteUI_C_UpdateNextButton_Params params {};
		params.PageNumber = PageNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EmoteUI.WBP_EmoteUI_C.WBP_EmoteUI_PopulatePagesAndSlots
	 * 		Flags  -> ()
	 */
	void UWBP_EmoteUI_C::WBP_EmoteUI_PopulatePagesAndSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EmoteUI.WBP_EmoteUI_C.WBP_EmoteUI_PopulatePagesAndSlots");
		
		UWBP_EmoteUI_C_WBP_EmoteUI_PopulatePagesAndSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EmoteUI.WBP_EmoteUI_C.WBP_EmoteUI_PlayShowAnim
	 * 		Flags  -> ()
	 */
	void UWBP_EmoteUI_C::WBP_EmoteUI_PlayShowAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EmoteUI.WBP_EmoteUI_C.WBP_EmoteUI_PlayShowAnim");
		
		UWBP_EmoteUI_C_WBP_EmoteUI_PlayShowAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EmoteUI.WBP_EmoteUI_C.WBP_EmoteUI_Display
	 * 		Flags  -> ()
	 */
	void UWBP_EmoteUI_C::WBP_EmoteUI_Display()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EmoteUI.WBP_EmoteUI_C.WBP_EmoteUI_Display");
		
		UWBP_EmoteUI_C_WBP_EmoteUI_Display_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EmoteUI.WBP_EmoteUI_C.WBP Emote UI Load
	 * 		Flags  -> ()
	 */
	void UWBP_EmoteUI_C::WBPEmoteUILoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EmoteUI.WBP_EmoteUI_C.WBP Emote UI Load");
		
		UWBP_EmoteUI_C_WBPEmoteUILoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EmoteUI.WBP_EmoteUI_C.WBP_EmoteUI_Open
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_EmoteUI_C::WBP_EmoteUI_Open(bool IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EmoteUI.WBP_EmoteUI_C.WBP_EmoteUI_Open");
		
		UWBP_EmoteUI_C_WBP_EmoteUI_Open_Params params {};
		params.IsOpen = IsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EmoteUI.WBP_EmoteUI_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_EmoteUI_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EmoteUI.WBP_EmoteUI_C.ConstructOnlyOnce");
		
		UWBP_EmoteUI_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EmoteUI.WBP_EmoteUI_C.ExecuteUbergraph_WBP_EmoteUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_EmoteUI_C::ExecuteUbergraph_WBP_EmoteUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EmoteUI.WBP_EmoteUI_C.ExecuteUbergraph_WBP_EmoteUI");
		
		UWBP_EmoteUI_C_ExecuteUbergraph_WBP_EmoteUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_EmoteUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_EmoteUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_EmoteUI.WBP_EmoteUI_C");
		return ptr;
	}

}


