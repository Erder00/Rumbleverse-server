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
	 * 		Name   -> Function PlaygroundMode_BotSpawner.PlaygroundMode_BotSpawner_C.GetOverlappingPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlayerFound                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ASheikCharacter*                             Player                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlaygroundMode_BotSpawner_C::GetOverlappingPlayer(bool* PlayerFound, class ASheikCharacter** Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaygroundMode_BotSpawner.PlaygroundMode_BotSpawner_C.GetOverlappingPlayer");
		
		APlaygroundMode_BotSpawner_C_GetOverlappingPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerFound != nullptr)
			*PlayerFound = params.PlayerFound;
		if (Player != nullptr)
			*Player = params.Player;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaygroundMode_BotSpawner.PlaygroundMode_BotSpawner_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void APlaygroundMode_BotSpawner_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaygroundMode_BotSpawner.PlaygroundMode_BotSpawner_C.UserConstructionScript");
		
		APlaygroundMode_BotSpawner_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaygroundMode_BotSpawner.PlaygroundMode_BotSpawner_C.ReceiveActorBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlaygroundMode_BotSpawner_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaygroundMode_BotSpawner.PlaygroundMode_BotSpawner_C.ReceiveActorBeginOverlap");
		
		APlaygroundMode_BotSpawner_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaygroundMode_BotSpawner.PlaygroundMode_BotSpawner_C.ReceiveActorEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlaygroundMode_BotSpawner_C::ReceiveActorEndOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaygroundMode_BotSpawner.PlaygroundMode_BotSpawner_C.ReceiveActorEndOverlap");
		
		APlaygroundMode_BotSpawner_C_ReceiveActorEndOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaygroundMode_BotSpawner.PlaygroundMode_BotSpawner_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APlaygroundMode_BotSpawner_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaygroundMode_BotSpawner.PlaygroundMode_BotSpawner_C.ReceiveBeginPlay");
		
		APlaygroundMode_BotSpawner_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaygroundMode_BotSpawner.PlaygroundMode_BotSpawner_C.ExecuteUbergraph_PlaygroundMode_BotSpawner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlaygroundMode_BotSpawner_C::ExecuteUbergraph_PlaygroundMode_BotSpawner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaygroundMode_BotSpawner.PlaygroundMode_BotSpawner_C.ExecuteUbergraph_PlaygroundMode_BotSpawner");
		
		APlaygroundMode_BotSpawner_C_ExecuteUbergraph_PlaygroundMode_BotSpawner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaygroundMode_BotSpawner.PlaygroundMode_BotSpawner_C.BotExitedCircle__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikCharacter*                             Bot                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlaygroundMode_BotSpawner_C::BotExitedCircle__DelegateSignature(class ASheikCharacter* Bot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaygroundMode_BotSpawner.PlaygroundMode_BotSpawner_C.BotExitedCircle__DelegateSignature");
		
		APlaygroundMode_BotSpawner_C_BotExitedCircle__DelegateSignature_Params params {};
		params.Bot = Bot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaygroundMode_BotSpawner.PlaygroundMode_BotSpawner_C.CharacterEnteredCircle__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikCharacter*                             Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlaygroundMode_BotSpawner_C::CharacterEnteredCircle__DelegateSignature(class ASheikCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaygroundMode_BotSpawner.PlaygroundMode_BotSpawner_C.CharacterEnteredCircle__DelegateSignature");
		
		APlaygroundMode_BotSpawner_C_CharacterEnteredCircle__DelegateSignature_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlaygroundMode_BotSpawner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlaygroundMode_BotSpawner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlaygroundMode_BotSpawner.PlaygroundMode_BotSpawner_C");
		return ptr;
	}

}


