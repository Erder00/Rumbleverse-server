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
	 * 		Name   -> Function BP_InGameHUD.BP_InGameHUD_C.DebugStartMinigame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StartingPosition                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TargetPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TargetSize                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              GradientSize                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Speed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               BounceBackOnHit                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumOfBounces                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_InGameHUD_C::DebugStartMinigame(float StartingPosition, float TargetPosition, float TargetSize, float GradientSize, float Speed, bool BounceBackOnHit, int32_t NumOfBounces)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameHUD.BP_InGameHUD_C.DebugStartMinigame");
		
		ABP_InGameHUD_C_DebugStartMinigame_Params params {};
		params.StartingPosition = StartingPosition;
		params.TargetPosition = TargetPosition;
		params.TargetSize = TargetSize;
		params.GradientSize = GradientSize;
		params.Speed = Speed;
		params.BounceBackOnHit = BounceBackOnHit;
		params.NumOfBounces = NumOfBounces;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InGameHUD.BP_InGameHUD_C.DebugOnMinigameResults
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikMinigameResults                       MinigameResults                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABP_InGameHUD_C::DebugOnMinigameResults(const struct FSheikMinigameResults& MinigameResults)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameHUD.BP_InGameHUD_C.DebugOnMinigameResults");
		
		ABP_InGameHUD_C_DebugOnMinigameResults_Params params {};
		params.MinigameResults = MinigameResults;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InGameHUD.BP_InGameHUD_C.ReceiveDrawHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SizeX                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SizeY                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_InGameHUD_C::ReceiveDrawHUD(int32_t SizeX, int32_t SizeY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameHUD.BP_InGameHUD_C.ReceiveDrawHUD");
		
		ABP_InGameHUD_C_ReceiveDrawHUD_Params params {};
		params.SizeX = SizeX;
		params.SizeY = SizeY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InGameHUD.BP_InGameHUD_C.NotifyReadyToInitialize
	 * 		Flags  -> ()
	 */
	void ABP_InGameHUD_C::NotifyReadyToInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameHUD.BP_InGameHUD_C.NotifyReadyToInitialize");
		
		ABP_InGameHUD_C_NotifyReadyToInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InGameHUD.BP_InGameHUD_C.OnAttemptComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSheikError                                 Error                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		ESheikLoginResultType                              OutType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_InGameHUD_C::OnAttemptComplete(int32_t LocalUserNum, bool bWasSuccessful, const struct FSheikError& Error, ESheikLoginResultType OutType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameHUD.BP_InGameHUD_C.OnAttemptComplete");
		
		ABP_InGameHUD_C_OnAttemptComplete_Params params {};
		params.LocalUserNum = LocalUserNum;
		params.bWasSuccessful = bWasSuccessful;
		params.Error = Error;
		params.OutType = OutType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InGameHUD.BP_InGameHUD_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_InGameHUD_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameHUD.BP_InGameHUD_C.ReceiveBeginPlay");
		
		ABP_InGameHUD_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InGameHUD.BP_InGameHUD_C.OpenPlaygroundPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Argument1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Argument2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Argument3                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Argument4                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_InGameHUD_C::OpenPlaygroundPopup(const class FString& Argument1, const class FString& Argument2, const class FString& Argument3, const class FString& Argument4)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameHUD.BP_InGameHUD_C.OpenPlaygroundPopup");
		
		ABP_InGameHUD_C_OpenPlaygroundPopup_Params params {};
		params.Argument1 = Argument1;
		params.Argument2 = Argument2;
		params.Argument3 = Argument3;
		params.Argument4 = Argument4;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InGameHUD.BP_InGameHUD_C.ExecuteUbergraph_BP_InGameHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_InGameHUD_C::ExecuteUbergraph_BP_InGameHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameHUD.BP_InGameHUD_C.ExecuteUbergraph_BP_InGameHUD");
		
		ABP_InGameHUD_C_ExecuteUbergraph_BP_InGameHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_InGameHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_InGameHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_InGameHUD.BP_InGameHUD_C");
		return ptr;
	}

}


