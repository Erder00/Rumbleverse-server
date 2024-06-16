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
	 * 		Name   -> Function SheikPlayerController_BP.SheikPlayerController_BP_C.PinFailFX
	 * 		Flags  -> ()
	 */
	void ASheikPlayerController_BP_C::PinFailFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikPlayerController_BP.SheikPlayerController_BP_C.PinFailFX");
		
		ASheikPlayerController_BP_C_PinFailFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikPlayerController_BP.SheikPlayerController_BP_C.PinSuccessfulFX
	 * 		Flags  -> ()
	 */
	void ASheikPlayerController_BP_C::PinSuccessfulFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikPlayerController_BP.SheikPlayerController_BP_C.PinSuccessfulFX");
		
		ASheikPlayerController_BP_C_PinSuccessfulFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikPlayerController_BP.SheikPlayerController_BP_C.PinIncreasePulseFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PulseSpeed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ShakeScale                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikPlayerController_BP_C::PinIncreasePulseFX(float PulseSpeed, float ShakeScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikPlayerController_BP.SheikPlayerController_BP_C.PinIncreasePulseFX");
		
		ASheikPlayerController_BP_C_PinIncreasePulseFX_Params params {};
		params.PulseSpeed = PulseSpeed;
		params.ShakeScale = ShakeScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikPlayerController_BP.SheikPlayerController_BP_C.PinPostProcessRemove_Win
	 * 		Flags  -> ()
	 */
	void ASheikPlayerController_BP_C::PinPostProcessRemove_Win()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikPlayerController_BP.SheikPlayerController_BP_C.PinPostProcessRemove_Win");
		
		ASheikPlayerController_BP_C_PinPostProcessRemove_Win_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikPlayerController_BP.SheikPlayerController_BP_C.PinPostProcessRemove_Lost
	 * 		Flags  -> ()
	 */
	void ASheikPlayerController_BP_C::PinPostProcessRemove_Lost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikPlayerController_BP.SheikPlayerController_BP_C.PinPostProcessRemove_Lost");
		
		ASheikPlayerController_BP_C_PinPostProcessRemove_Lost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikPlayerController_BP.SheikPlayerController_BP_C.PinPostProcessUpdate
	 * 		Flags  -> ()
	 */
	void ASheikPlayerController_BP_C::PinPostProcessUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikPlayerController_BP.SheikPlayerController_BP_C.PinPostProcessUpdate");
		
		ASheikPlayerController_BP_C_PinPostProcessUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikPlayerController_BP.SheikPlayerController_BP_C.PinStartShake
	 * 		Flags  -> ()
	 */
	void ASheikPlayerController_BP_C::PinStartShake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikPlayerController_BP.SheikPlayerController_BP_C.PinStartShake");
		
		ASheikPlayerController_BP_C_PinStartShake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikPlayerController_BP.SheikPlayerController_BP_C.PinStartFX
	 * 		Flags  -> ()
	 */
	void ASheikPlayerController_BP_C::PinStartFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikPlayerController_BP.SheikPlayerController_BP_C.PinStartFX");
		
		ASheikPlayerController_BP_C_PinStartFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikPlayerController_BP.SheikPlayerController_BP_C.PinUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikPinEventType                                 EventType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASheikCharacter*                             Attacker                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASheikCharacter*                             Victim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikPlayerController_BP_C::PinUpdate(ESheikPinEventType EventType, class ASheikCharacter* Attacker, class ASheikCharacter* Victim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikPlayerController_BP.SheikPlayerController_BP_C.PinUpdate");
		
		ASheikPlayerController_BP_C_PinUpdate_Params params {};
		params.EventType = EventType;
		params.Attacker = Attacker;
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikPlayerController_BP.SheikPlayerController_BP_C.GetVFXHandler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikGenericVFXHandler_BP_C*                GameVFXHandler                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikPlayerController_BP_C::GetVFXHandler(class ASheikGenericVFXHandler_BP_C** GameVFXHandler)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikPlayerController_BP.SheikPlayerController_BP_C.GetVFXHandler");
		
		ASheikPlayerController_BP_C_GetVFXHandler_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameVFXHandler != nullptr)
			*GameVFXHandler = params.GameVFXHandler;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikPlayerController_BP.SheikPlayerController_BP_C.SetCameraRingOutState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCurrentlyRingedOut                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheikPlayerController_BP_C::SetCameraRingOutState(bool IsCurrentlyRingedOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikPlayerController_BP.SheikPlayerController_BP_C.SetCameraRingOutState");
		
		ASheikPlayerController_BP_C_SetCameraRingOutState_Params params {};
		params.IsCurrentlyRingedOut = IsCurrentlyRingedOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikPlayerController_BP.SheikPlayerController_BP_C.GatherCameraRingOutState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFollowingPlayer                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheikPlayerController_BP_C::GatherCameraRingOutState(bool IsFollowingPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikPlayerController_BP.SheikPlayerController_BP_C.GatherCameraRingOutState");
		
		ASheikPlayerController_BP_C_GatherCameraRingOutState_Params params {};
		params.IsFollowingPlayer = IsFollowingPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikPlayerController_BP.SheikPlayerController_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikPlayerController_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikPlayerController_BP.SheikPlayerController_BP_C.ReceiveTick");
		
		ASheikPlayerController_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikPlayerController_BP.SheikPlayerController_BP_C.ForceUserToMainMenu_BP
	 * 		Flags  -> ()
	 */
	void ASheikPlayerController_BP_C::ForceUserToMainMenu_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikPlayerController_BP.SheikPlayerController_BP_C.ForceUserToMainMenu_BP");
		
		ASheikPlayerController_BP_C_ForceUserToMainMenu_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikPlayerController_BP.SheikPlayerController_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASheikPlayerController_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikPlayerController_BP.SheikPlayerController_BP_C.ReceiveBeginPlay");
		
		ASheikPlayerController_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikPlayerController_BP.SheikPlayerController_BP_C.UpdateCamRingOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOutside                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheikPlayerController_BP_C::UpdateCamRingOut(bool IsOutside)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikPlayerController_BP.SheikPlayerController_BP_C.UpdateCamRingOut");
		
		ASheikPlayerController_BP_C_UpdateCamRingOut_Params params {};
		params.IsOutside = IsOutside;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikPlayerController_BP.SheikPlayerController_BP_C.OnPlayerFollowingChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFollowingPlayer                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheikPlayerController_BP_C::OnPlayerFollowingChanged(bool IsFollowingPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikPlayerController_BP.SheikPlayerController_BP_C.OnPlayerFollowingChanged");
		
		ASheikPlayerController_BP_C_OnPlayerFollowingChanged_Params params {};
		params.IsFollowingPlayer = IsFollowingPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikPlayerController_BP.SheikPlayerController_BP_C.OnRoundFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AIGPlayerState*>                      WinningPlayers                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               isLocalPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isSpectator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheikPlayerController_BP_C::OnRoundFinished(TArray<class AIGPlayerState*> WinningPlayers, bool isLocalPlayer, bool isSpectator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikPlayerController_BP.SheikPlayerController_BP_C.OnRoundFinished");
		
		ASheikPlayerController_BP_C_OnRoundFinished_Params params {};
		params.WinningPlayers = WinningPlayers;
		params.isLocalPlayer = isLocalPlayer;
		params.isSpectator = isSpectator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikPlayerController_BP.SheikPlayerController_BP_C.HandleTeammateLeftServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGPlayerState*                              ExitingTeammate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikPlayerController_BP_C::HandleTeammateLeftServer(class AIGPlayerState* ExitingTeammate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikPlayerController_BP.SheikPlayerController_BP_C.HandleTeammateLeftServer");
		
		ASheikPlayerController_BP_C_HandleTeammateLeftServer_Params params {};
		params.ExitingTeammate = ExitingTeammate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikPlayerController_BP.SheikPlayerController_BP_C.ExecuteUbergraph_SheikPlayerController_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikPlayerController_BP_C::ExecuteUbergraph_SheikPlayerController_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikPlayerController_BP.SheikPlayerController_BP_C.ExecuteUbergraph_SheikPlayerController_BP");
		
		ASheikPlayerController_BP_C_ExecuteUbergraph_SheikPlayerController_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASheikPlayerController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASheikPlayerController_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SheikPlayerController_BP.SheikPlayerController_BP_C");
		return ptr;
	}

}


