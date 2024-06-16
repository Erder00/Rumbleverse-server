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
	 * 		Name   -> PredefinedFunction AIGSmokeActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGSmokeActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGSmokeRuntime.IGSmokeActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGSmokeTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGSmokeTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGSmokeRuntime.IGSmokeTask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGSmokeCameraTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGSmokeCameraTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGSmokeRuntime.IGSmokeCameraTask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGSmokeSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGSmokeSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGSmokeRuntime.IGSmokeSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGSmokeStaticCamera.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGSmokeStaticCamera::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGSmokeRuntime.IGSmokeStaticCamera");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIGSmokeTaskManagerActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIGSmokeTaskManagerActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGSmokeRuntime.IGSmokeTaskManagerActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APerfCaptureGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APerfCaptureGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGSmokeRuntime.PerfCaptureGameMode");
		return ptr;
	}

}


