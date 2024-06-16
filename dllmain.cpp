#include "pch.h"
#include "SDK.h"

#include<windows.h>

#include "MinHook.h"

#include <random>

#if defined _M_X64
#pragma comment(lib, "libMinHook-x64-v141-mt.lib")
#elif defined _M_IX86
#pragma comment(lib, "MinHook.x86.lib")
#endif

#include "set.h"
#include "SharedPointer.h"

#include <iostream>
#include <fstream>

enum EGameMode {
	FREE_ROAM,
	PLAYGROUND,
	BR_SOLOS,
	BR_DUOS,
	BR_TRIOS,
	BR_QUADS
};

EGameMode global_mode = EGameMode::FREE_ROAM;
bool serverListening = false;

uintptr_t global_baseaddress = 0;
CG::UWorld* global_world = nullptr;

CG::FName global_actor_name;
CG::UGameplayStatics* global_statics = nullptr;
CG::UEngine* global_engine = nullptr;
int32_t actorChannelNumber = 0;

std::vector<int> connectionsWithLevelsInit = std::vector<int>();

// - C++ Exceptions are /EHa (Yes with SEH Exceptions)

/*
typedef bool(__thiscall* func)(CG::AOnlineBeaconHost*);

	uintptr_t baseAddress = (uintptr_t)GetModuleHandleA("rumbleverseclient-win64-shipping.exe");

	std::cout << std::hex << baseAddress << std::endl;

	//Add the offset of the function relative to the base
	uintptr_t functAddress = baseAddress + 0x0ba78f0;

	std::cout << std::hex << functAddress << std::endl;

	func thefunc = (func)functAddress;

	Sleep(10 * 1000);

	std::cout << "ITS TIME!!!" << std::endl;

	bool out = (*thefunc)(host);*/

static void log(std::string object, std::string function) {
	/*
	std::ofstream outputFile("groglog.txt", std::ios::app);

	outputFile << "UFunction " << function << " called on " << object << std::endl;

	outputFile.close();
	*/
}

static void log(std::string msg) {
	std::ofstream outputFile("groglog.txt", std::ios::app);

	outputFile << msg << std::endl;

	outputFile.close();
}

static CG::FString allocateFString(const wchar_t* string) {
	CG::FString* orig = new CG::FString(string);
	void* owo = reinterpret_cast<void* (*)(size_t size, size_t alignment)>(global_baseaddress + 0x1573d90)(sizeof(string), 0);
	memcpy(owo, orig->Data(), sizeof(string));
	orig->_data = (wchar_t*)owo;
	return *orig;
}

template<typename T>
static void ListAllOfType() {
	std::vector<T*> vec = CG::UObject::FindObjects<T>();

	for (int i = 0; i < vec.size(); i++) {
		log(vec[i]->GetFullName());
	}
}

template<typename T>
static T* NewObject() {
	CG::UGameplayStatics* statics = CG::UObject::FindObject<CG::UGameplayStatics>();

	CG::UWorld* world = CG::UObject::FindObject<CG::UWorld>("World erder.erder");

	return static_cast<T*>(statics->SpawnObject(T::StaticClass(), world));
}

bool CreateNamedNetDriver(CG::UEngine* engine, CG::UWorld* world) {
	typedef bool(__thiscall* func)(CG::UEngine*, CG::UWorld*, CG::FName, CG::FName);

	uintptr_t functAddress = global_baseaddress + 0x34f0af0;

	func thefunc = (func)functAddress;

	return (*thefunc)(engine, world, CG::FName("GameNetDriver"), CG::FName("GameNetDriver"));
}

CG::FWorldContext& GetWorldContextFromWorldChecked(CG::UEngine* engine, CG::UWorld* world) {
	//0x34f91a0
	typedef CG::FWorldContext&(__thiscall* func)(CG::UEngine* engine, CG::UWorld* world);

	uintptr_t functAddress = global_baseaddress + 0x34f91a0;

	func thefunc = (func)functAddress;

	return (*thefunc)(engine, world);
}

int Browse(CG::UEngine* engine, CG::UWorld* world, CG::FURL url) {
	//0x34f91a0
	typedef bool(__thiscall* func)(CG::UEngine* engine, CG::FWorldContext& worldContext, CG::FURL url, CG::FString&);

	uintptr_t functAddress = global_baseaddress + 0x34ebe10;

	func thefunc = (func)functAddress;

	CG::FWorldContext& wc = GetWorldContextFromWorldChecked(engine, world);
	
	CG::FString error = CG::FString(L"");

	return (*thefunc)(engine, wc, url, error);
}

bool InitListen(CG::UIpNetDriver* netdriver, CG::UObject* world) {
	typedef bool(__thiscall* func)(CG::UIpNetDriver*, CG::UObject*, CG::FURL&, bool, CG::FString&);

	uintptr_t functAddress = global_baseaddress + 0x0ba7e80;

	func thefunc = (func)functAddress;

	CG::FURL* furl = new CG::FURL();

	furl->Map = CG::FString(L"erder");

	furl->Port = 62169;

	furl->Valid = 1;

	CG::FString* error = new CG::FString(L"");

	return (*thefunc)(netdriver, world, *furl, false, *error);
}

//0x3226800 - UNetDriver::TickFlush
//0x2dea830 - AActor::CallPreReplication

typedef void(__thiscall* TickFlush)(CG::UIpNetDriver*, float);

TickFlush originalTickFlush = NULL;

int ServerReplicateActors_PrepConnections(CG::UIpNetDriver* NetDriver, CG::UWorld* World)
{
	auto& ClientConnections = NetDriver->ClientConnections;

	int NumClientsToTick = ClientConnections.Count();

	bool bFoundReadyConnection = false;

	for (int ConnIdx = 0; ConnIdx < ClientConnections.Count(); ConnIdx++)
	{
		CG::UNetConnection* Connection = ClientConnections[ConnIdx];
		if (!Connection) continue;
		// check(Connection->State == USOCK_Pending || Connection->State == USOCK_Open || Connection->State == USOCK_Closed);
		// checkSlow(Connection->GetUChildConnection() == NULL);

		CG::AActor* OwningActor = Connection->OwningActor;

		if (OwningActor != NULL) // && /* Connection->State == USOCK_Open && */ (Connection->Driver->Time - Connection->LastReceiveTime < 1.5f))
		{
			bFoundReadyConnection = true;

			CG::AActor* DesiredViewTarget = OwningActor;

			if (Connection->PlayerController)
			{
				if (CG::AActor* ViewTarget = Connection->PlayerController->GetViewTarget())
				{
					DesiredViewTarget = ViewTarget;
				}
			}

			Connection->ViewTarget = DesiredViewTarget;

			/*
			for (int32 ChildIdx = 0; ChildIdx < Connection->Children.Count(); ChildIdx++)
			{
				CG::UNetConnection* Child = Connection->Children[ChildIdx];
				CG::APlayerController* ChildPlayerController = Child->PlayerController;
				if (ChildPlayerController != NULL)
				{
					Child->ViewTarget = ChildPlayerController->GetViewTarget();
				}
				else
				{
					Child->ViewTarget = NULL;
				}
			}
			*/
		}
		else
		{
			Connection->ViewTarget = NULL;
			/*
			for (int32 ChildIdx = 0; ChildIdx < Connection->Children.Count(); ChildIdx++)
			{
				Connection->Children[ChildIdx]->ViewTarget = NULL;
			}
			*/
		}
	}

	return bFoundReadyConnection ? NumClientsToTick : 0;
}

struct FNetworkObjectInfo
{
	/** Pointer to the replicated actor. */
	CG::AActor* Actor;

	/** WeakPtr to actor. This is cached here to prevent constantly constructing one when needed for (things like) keys in TMaps/TSets */
	CG::TWeakObjectPtr<CG::AActor> WeakActor;

	/** Next time to consider replicating the actor. Based on FPlatformTime::Seconds(). */
	double NextUpdateTime;

	/** Last absolute time in seconds since actor actually sent something during replication */
	double LastNetReplicateTime;

	/** Optimal delta between replication updates based on how frequently actor properties are actually changing */
	float OptimalNetUpdateDelta;

	/** Last time this actor was updated for replication via NextUpdateTime
	* @warning: internal net driver time, not related to WorldSettings.TimeSeconds */
	float LastNetUpdateTime;

	/** Is this object still pending a full net update due to clients that weren't able to replicate the actor at the time of LastNetUpdateTime */
	UINT32 bPendingNetUpdate : 1;

	/** Force this object to be considered relevant for at least one update */
	UINT32 bForceRelevantNextUpdate : 1;

	/** List of connections that this actor is dormant on */
	TSet<CG::TWeakObjectPtr<CG::UNetConnection>> DormantConnections;
	TSet<CG::TWeakObjectPtr<CG::UNetConnection>> RecentlyDormantConnections;

	~FNetworkObjectInfo() {
		//delete DormantConnections;
	}
};

CG::ULevel* getLevelFromActor(CG::AActor* actor) {
	CG::UObject* currentOuter = actor->Outer;

	while (currentOuter->GetFullName().find("Level ") == std::string::npos) {
		currentOuter = currentOuter->Outer;
	}

	return (CG::ULevel*)currentOuter;
}

class FNetworkObjectList
{
public:
	typedef TSet<TSharedPtr<FNetworkObjectInfo>> FNetworkObjectSet;

	FNetworkObjectSet AllNetworkObjects;
	FNetworkObjectSet ActiveNetworkObjects;
	FNetworkObjectSet ObjectsDormantOnAllConnections;

	CG::TMap<CG::TWeakObjectPtr<CG::UNetConnection>, int32> NumDormantObjectsPerConnection;

	void Remove(CG::AActor* const Actor) {
		log("Remove init");
		for (int i = 0; i < AllNetworkObjects.Num(); i++) {
			if (AllNetworkObjects.IsIndexValid(i) && AllNetworkObjects[i].Object && (__int64)AllNetworkObjects[i].Object != 0xffffffffffffffff) {
				if (AllNetworkObjects[i]->Actor == Actor) {
					log("Remove from all");
					AllNetworkObjects.Remove(i);
					break;
				}
			}
		}

		log("scan active");
		for (int i = 0; i < ActiveNetworkObjects.Num(); i++) {
			if (ActiveNetworkObjects.IsIndexValid(i) && ActiveNetworkObjects[i].Object && (__int64)ActiveNetworkObjects[i].Object != 0xffffffffffffffff) {
				if (ActiveNetworkObjects[i]->Actor == Actor) {
					log("Remove from active");
					ActiveNetworkObjects.Remove(i);
					break;
				}
			}
		}

		log("Scan dormant");
		for (int i = 0; i < ObjectsDormantOnAllConnections.Num(); i++) {
			if (ObjectsDormantOnAllConnections.IsIndexValid(i) && ObjectsDormantOnAllConnections[i].Object && (__int64)ObjectsDormantOnAllConnections[i].Object != 0xffffffffffffffff) {
				if (ObjectsDormantOnAllConnections[i]->Actor == Actor) {
					log("Remove from dormant");
					ObjectsDormantOnAllConnections.Remove(i);
					break;
				}
			}
		}
		log("done!");
	}
};

FNetworkObjectList& GetNetworkObjectList(CG::UNetDriver* NetDriver)
{
	//log(std::to_string((__int64)(__int64(NetDriver) + 0x708)));
	return *(*(TSharedPtr<FNetworkObjectList>*)(__int64(NetDriver) + 0x708));
}

FORCEINLINE float FRand()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<> dis(0, 1);
	float random_number = dis(gen);

	return random_number;
}

void ServerReplicateActors_BuildConsiderList(CG::UIpNetDriver* NetDriver, CG::UWorld* World, std::vector<TSharedPtr<FNetworkObjectInfo>>& OutConsiderList, float ServerTickTime)
{
	/*
	std::vector<CG::AActor*> ActorsToRemove;

	auto& ActiveObjects = GetNetworkObjectList(NetDriver).ActiveNetworkObjects;

	//auto World = global_world;
	//AllNetworkObjects.IsIndexValid(i) && AllNetworkObjects[i].Object && (__int64)AllNetworkObjects[i].Object != 0xffffffffffffffff
	
	//for(int i = 0; i < GetNetworkObjectList(NetDriver).ActiveNetworkObjects.Num(); i++)
	for (const TSharedPtr<FNetworkObjectInfo>& ActorInfo : ActiveObjects)
	{
		//if (!(GetNetworkObjectList(NetDriver).ActiveNetworkObjects.IsIndexValid(i) && GetNetworkObjectList(NetDriver).ActiveNetworkObjects[i].Object && (__int64)GetNetworkObjectList(NetDriver).ActiveNetworkObjects[i].Object != 0xffffffffffffffff)) {
			//continue;
		//}

		//const TSharedPtr<FNetworkObjectInfo>& ActorInfo = GetNetworkObjectList(NetDriver).ActiveNetworkObjects[i];
		if (!ActorInfo->bPendingNetUpdate && global_statics->GetTimeSeconds(World) <= ActorInfo->NextUpdateTime)
		{
			continue;
		}

		auto Actor = ActorInfo->Actor;

		if (!Actor)
			continue;

		if (Actor->IsActorBeingDestroyed())
			// if (Actor->IsPendingKill())
		{
			ActorsToRemove.push_back(Actor);
			continue;
		}

		//static auto RemoteRoleOffset = Actor->GetOffset("RemoteRole");

		if (Actor->RemoteRole == CG::ENetRole::ROLE_None)
		{
			ActorsToRemove.push_back(Actor);
			continue;
		}

		// We should add a NetDriverName check but I don't believe it is needed.

		// We should check if the actor is initialized here.

		// We should check the level stuff here.

		//static auto NetDormancyOffset = Actor->GetOffset("NetDormancy");

		if (Actor->NetDormancy == CG::ENetDormancy::DORM_Initial && Actor->bNetStartup) // IsDormInitialStartupActor
		{
			continue;
		}

		// We should check NeedsLoadForClient here.
		// We should make sure the actor is in the same world here but I don't believe it is needed.

		if (ActorInfo->LastNetReplicateTime == 0)
		{
			ActorInfo->LastNetReplicateTime = global_statics->GetTimeSeconds(World);
			ActorInfo->OptimalNetUpdateDelta = 1.0f / Actor->NetUpdateFrequency;
		}

		const float ScaleDownStartTime = 2.0f;
		const float ScaleDownTimeRange = 5.0f;

		const float LastReplicateDelta = global_statics->GetTimeSeconds(World) - ActorInfo->LastNetReplicateTime;

		if (LastReplicateDelta > ScaleDownStartTime)
		{
			if (Actor->MinNetUpdateFrequency == 0.0f)
			{
				Actor->MinNetUpdateFrequency = 2.0f;
			}

			const float MinOptimalDelta = 1.0f / Actor->NetUpdateFrequency;									  // Don't go faster than NetUpdateFrequency
			const float MaxOptimalDelta = max(1.0f / Actor->MinNetUpdateFrequency, MinOptimalDelta); // Don't go slower than MinNetUpdateFrequency (or NetUpdateFrequency if it's slower)

			const float Alpha = std::clamp((LastReplicateDelta - ScaleDownStartTime) / ScaleDownTimeRange, 0.0f, 1.0f); // should we use fmath?
			ActorInfo->OptimalNetUpdateDelta = std::lerp(MinOptimalDelta, MaxOptimalDelta, Alpha); // should we use fmath?
		}

		if (!ActorInfo->bPendingNetUpdate)
		{
			constexpr bool bUseAdapativeNetFrequency = false;
			const float NextUpdateDelta = bUseAdapativeNetFrequency ? ActorInfo->OptimalNetUpdateDelta : 1.0f / Actor->NetUpdateFrequency;

			// then set the next update time
			float ServerTickTime = 1.f / 30;
			ActorInfo->NextUpdateTime = global_statics->GetTimeSeconds(World) + FRand() * ServerTickTime + NextUpdateDelta;
			//static auto TimeOffset = GetOffset("Time");
			ActorInfo->LastNetUpdateTime = NetDriver->Time;
		}

		ActorInfo->bPendingNetUpdate = false;

		OutConsiderList.push_back(ActorInfo.Get());

		typedef void(__thiscall* CallPreReplication)(CG::AActor*, CG::UNetDriver*);

		//getLevelFromActor(Actor)->bIsVisible = true; //:(

		((CallPreReplication)(global_baseaddress + 0x2dea830))(Actor, NetDriver);
	}
	*/
	
	//CG::TArray<CG::AActor*>* Actors = new CG::TArray<CG::AActor*>();

	//global_statics->GetAllActorsOfClass(World, CG::AActor::StaticClass(), Actors);

	

	//for (int i = 0; i < Actors->Count(); ++i)
	for (const TSharedPtr<FNetworkObjectInfo>& ActorInfo : GetNetworkObjectList(NetDriver).ActiveNetworkObjects)
	{
		CG::AActor* Actor = ActorInfo->Actor;

		if (Actor->RemoteRole == CG::ENetRole::ROLE_None) {
			//ActorsToRemove.push_back(Actor);
			continue;
		}

		// We should add a NetDriverName check but I don't believe it is needed.

		// We should check if the actor is initialized here.

		// We should check the level stuff here.

		if (Actor->NetDormancy == CG::ENetDormancy::DORM_Initial && Actor->bNetStartup) {
			continue;
		}

		//auto ActorInfo = new FNetworkObjectInfo;
		//ActorInfo->Actor = Actor;

		OutConsiderList.push_back(ActorInfo);

		typedef void(__thiscall* CallPreReplication)(CG::AActor*, CG::UNetDriver*);

		//getLevelFromActor(Actor)->bIsVisible = true; //:(

		((CallPreReplication)(global_baseaddress + 0x2dea830))(Actor, NetDriver);
	}

	/*
	for (auto Actor : ActorsToRemove)
	{
		if (!Actor)
			continue;

		//LOG_INFO(LogDev, "Removing actor: {}", Actor ? Actor->GetFullName() : "InvalidObject");
		//GetNetworkObjectList(NetDriver).Remove(Actor);
		//LOG_INFO(LogDev, "Finished removing actor.");
	}
	*/
		

	//delete Actors;
}

static CG::UActorChannel* FindChannel(CG::AActor* Actor, CG::UNetConnection* Connection)
{
	auto& OpenChannels = Connection->OpenChannels;

	//static auto ActorChannelClass = CG::UObject::FindClass("Engine.ActorChannel");

	// LOG_INFO(LogReplication, "OpenChannels.Num(): {}", OpenChannels.Num());

	for (int i = 0; i < OpenChannels.Count(); ++i)
	{
		auto Channel = OpenChannels[i];

		if (!Channel)
			continue;

		// LOG_INFO(LogReplication, "[{}] Class {}", i, Channel->ClassPrivate ? Channel->ClassPrivate->GetFullName() : "InvalidObject");

		if(Channel->Class->Name.Number != actorChannelNumber)
			continue;
		//if ((Channel->Class->GetFullName().find("ActorChannel") == std::string::npos)) // (Channel->ClassPrivate == ActorChannelClass)
			

		auto ChannelActor = ((CG::UActorChannel*)Channel)->Actor;

		// LOG_INFO(LogReplication, "[{}] {}", i, ChannelActor->GetFullName());

		if (ChannelActor != Actor)
			continue;

		return (CG::UActorChannel*)Channel;
	}

	// LOG_INFO(LogDev, "Failed to find channel for {}!", Actor->GetName());

	return nullptr;
}

struct FNetViewer
{
	CG::UNetConnection* Connection;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	CG::AActor* InViewer;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	CG::AActor* ViewTarget;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	CG::FVector                                     ViewLocation;                                             // 0x0018(0x000C) (IsPlainOldData)
	CG::FVector                                     ViewDir;
};

#define INV_PI			(0.31830988618f)
#define HALF_PI			(1.57079632679f)
#define PI 					(3.1415926535897932f)

static FORCEINLINE void SinCos(float* ScalarSin, float* ScalarCos, float  Value)
{
	// Map Value to y in [-pi,pi], x = 2*pi*quotient + remainder.
	float quotient = (INV_PI * 0.5f) * Value;
	if (Value >= 0.0f)
	{
		quotient = (float)((int)(quotient + 0.5f));
	}
	else
	{
		quotient = (float)((int)(quotient - 0.5f));
	}
	float y = Value - (2.0f * PI) * quotient;

	// Map y to [-pi/2,pi/2] with sin(y) = sin(Value).
	float sign;
	if (y > HALF_PI)
	{
		y = PI - y;
		sign = -1.0f;
	}
	else if (y < -HALF_PI)
	{
		y = -PI - y;
		sign = -1.0f;
	}
	else
	{
		sign = +1.0f;
	}

	float y2 = y * y;

	// 11-degree minimax approximation
	*ScalarSin = (((((-2.3889859e-08f * y2 + 2.7525562e-06f) * y2 - 0.00019840874f) * y2 + 0.0083333310f) * y2 - 0.16666667f) * y2 + 1.0f) * y;

	// 10-degree minimax approximation
	float p = ((((-2.6051615e-07f * y2 + 2.4760495e-05f) * y2 - 0.0013888378f) * y2 + 0.041666638f) * y2 - 0.5f) * y2 + 1.0f;
	*ScalarCos = sign * p;
}

static CG::FVector rotatorToVector(CG::FRotator rotator) {
	float CP, SP, CY, SY;
	SinCos(&SP, &CP, rotator.Pitch * (PI / 180.0f));
	SinCos(&SY, &CY, rotator.Yaw * (PI / 180.0f));
	CG::FVector V = CG::FVector(CP * CY, CP * SY, SP);

	return V;
}

static FNetViewer ConstructNetViewer(CG::UNetConnection* NetConnection)
{
	FNetViewer newViewer{};
	newViewer.Connection = NetConnection;
	newViewer.InViewer = NetConnection->PlayerController ? NetConnection->PlayerController : NetConnection->OwningActor;
	newViewer.ViewTarget = NetConnection->ViewTarget;

	if (!NetConnection->OwningActor || !(!NetConnection->PlayerController || (NetConnection->PlayerController == NetConnection->OwningActor)))
		return newViewer;

	CG::APlayerController* ViewingController = NetConnection->PlayerController;

	newViewer.ViewLocation = newViewer.ViewTarget->K2_GetActorLocation();

	if (ViewingController)
	{
		CG::FRotator ViewRotation = ViewingController->ControlRotation; // hmmmm // ViewingController->GetControlRotation();
		// AFortPlayerControllerAthena::GetPlayerViewPointHook(Cast<AFortPlayerControllerAthena>(ViewingController, false), newViewer.ViewLocation, ViewRotation);
		ViewingController->GetActorEyesViewPoint(&newViewer.ViewLocation, &ViewRotation); // HMMM

		// static auto GetActorEyesViewPointOffset = 0x5B0;
		// void (*GetActorEyesViewPointOriginal)(AController*, FVector * a2, FRotator * a3) = decltype(GetActorEyesViewPointOriginal)(ViewingController->VFTable[GetActorEyesViewPointOffset / 8]);
		// GetActorEyesViewPointOriginal(ViewingController, &newViewer.ViewLocation, &ViewRotation);
		// AFortPlayerControllerAthena::GetPlayerViewPointHook((AFortPlayerControllerAthena*)ViewingController, newViewer.ViewLocation, ViewRotation);
		newViewer.ViewDir = rotatorToVector(ViewRotation);
	}

	return newViewer;
}

static bool IsActorRelevantToConnection(CG::AActor* Actor, std::vector<FNetViewer>& ConnectionViewers)
{
	for (int32 viewerIdx = 0; viewerIdx < ConnectionViewers.size(); viewerIdx++)
	{
		if (!ConnectionViewers[viewerIdx].ViewTarget)
			continue;

		// static bool (*IsNetRelevantFor)(AActor*, AActor*, AActor*, FVector&) = decltype(IsNetRelevantFor)(__int64(GetModuleHandleW(0)) + 0x1ECC700);

		// if (Actor->IsNetRelevantFor(ConnectionViewers[viewerIdx].InViewer, ConnectionViewers[viewerIdx].ViewTarget, ConnectionViewers[viewerIdx].ViewLocation))
		// if (IsNetRelevantFor(Actor, ConnectionViewers[viewerIdx].InViewer, ConnectionViewers[viewerIdx].ViewTarget, ConnectionViewers[viewerIdx].ViewLocation))
		if (reinterpret_cast<bool(*)(CG::AActor*, CG::AActor*, CG::AActor*, CG::FVector&)>(global_baseaddress + 0x2dfb220)(
			Actor, ConnectionViewers[viewerIdx].InViewer, ConnectionViewers[viewerIdx].ViewTarget, ConnectionViewers[viewerIdx].ViewLocation))
		{
			return true;
		}
	}

	return false;
}

bool levelInitForConnection(int connectionIdx) {
	for (int connIdx : connectionsWithLevelsInit) {
		if (connectionIdx == connIdx) {
			return true;
		}
	}

	return false;
}

CG::UPackage* getPackageFromUObject(CG::UObject* object) {
	CG::UObject* currentOuter = object->Outer;

	while (currentOuter->GetFullName().find("Package ") == std::string::npos) {
		currentOuter = currentOuter->Outer;
	}

	return (CG::UPackage*)currentOuter;
}

/*
bool IsActorDormant(CG::UNetDriver* NetDriver, FNetworkObjectInfo* ActorInfo, CG::TWeakObjectPtr<CG::UNetConnection> Connection) {
	return ActorInfo->DormantConnections.Contains(Connection);
}

bool ShouldActorGoDormant(CG::AActor* Actor, std::vector<FNetViewer> ConnectionViewers, CG::UActorChannel* Channel, float Time, bool bLowNetBandwidth) {
	if (Actor->NetDormancy <= CG::ENetDormancy::DORM_Awake || !Channel)
	{
		// Either shouldn't go dormant, or is already dormant
		return false;
	}

	if (Actor->NetDormancy == CG::ENetDormancy::DORM_DormantPartial)
	{
		for (int viewerIdx = 0; viewerIdx < ConnectionViewers.size(); viewerIdx++)
		{
			if (!false)
			{
				return false;
			}
		}
	}

	return true;
}
*/

int ServerReplicateActors(CG::UIpNetDriver* NetDriver, CG::UWorld* World, float DeltaSeconds)
{
	int Updated = 0;

	++(*(int*)(__int64(NetDriver) + 0x420)); //might have to fix

	const int NumClientsToTick = ServerReplicateActors_PrepConnections(NetDriver, World);

	if (NumClientsToTick == 0)
	{
		// No connections are ready this frame
		return 0;
	}

	// bool bCPUSaturated = false;

	//0x34f88f0

	

	float ServerTickTime = reinterpret_cast<bool(*)(CG::UEngine*, float, bool)>(global_baseaddress + 0x34f88f0)(global_engine, DeltaSeconds, false); //tickrate
	
	//float ServerTickTime = NetDriver->NetServerMaxTickRate;
	 if (ServerTickTime == 0.f)
	{
		ServerTickTime = DeltaSeconds;
	}
	else 
	{
		ServerTickTime = 1.f / ServerTickTime;
		// bCPUSaturated = DeltaSeconds > 1.2f * ServerTickTime;
	}


	std::vector< TSharedPtr<FNetworkObjectInfo>> ConsiderList = std::vector<TSharedPtr<FNetworkObjectInfo>>();

	ConsiderList.reserve(GetNetworkObjectList(NetDriver).ActiveNetworkObjects.Num());

	//log("Pre ConsiderList");
	ServerReplicateActors_BuildConsiderList(NetDriver, World, ConsiderList, ServerTickTime);
	//log("Post ConsiderList");

	//std::vector<CG::UNetConnection*> connectionsToClose = std::vector<CG::UNetConnection*>();

	// LOG_INFO(LogReplication, "Considering {} actors.", ConsiderList.size());

	for (int32 i = 0; i < NetDriver->ClientConnections.Count(); i++)
	{
		CG::UNetConnection* Connection = NetDriver->ClientConnections[i];

		if (!Connection)
			continue;

		if (i >= NumClientsToTick)
			continue;

		if (!Connection->ViewTarget)
			continue;

		/*
		if (!levelInitForConnection(i)) {
			log("Init level time!");
			connectionsWithLevelsInit.push_back(i);

			for (CG::ULevel* level : CG::UObject::FindObjects<CG::ULevel>()) {
				if (getPackageFromUObject(level)->Name.GetName().find("/Game/Maps/Island2/") != std::string::npos) {
					log(getPackageFromUObject(level)->Name.GetName());
					
					CG::FUpdateLevelVisibilityLevelInfo visInfo = CG::FUpdateLevelVisibilityLevelInfo();

					visInfo.bIsVisible = true;
					visInfo.Filename = getPackageFromUObject(level)->Name;
					visInfo.PackageName = getPackageFromUObject(level)->Name;
					//visInfo.Filename = level->Name;
					//visInfo.PackageName = level->Name;

					reinterpret_cast<void(*)(CG::UNetConnection*, CG::FUpdateLevelVisibilityLevelInfo&)>(global_baseaddress + 0x31feaa0)(Connection, visInfo);
					level->bIsVisible = true;
				}
			}

			for (CG::ULevelStreaming* level : CG::UObject::FindObjects<CG::ULevelStreaming>()) {
				if (getPackageFromUObject(level)->Name.GetName().find("/Game/Maps/Island2/") != std::string::npos) {
					log(getPackageFromUObject(level)->Name.GetName());

					CG::FUpdateLevelVisibilityLevelInfo visInfo = CG::FUpdateLevelVisibilityLevelInfo();

					visInfo.bIsVisible = true;
					visInfo.Filename = getPackageFromUObject(level)->Name;
					visInfo.PackageName = getPackageFromUObject(level)->Name;
					//visInfo.Filename = level->Name;
					//visInfo.PackageName = level->Name;

					reinterpret_cast<void(*)(CG::UNetConnection*, CG::FUpdateLevelVisibilityLevelInfo&)>(global_baseaddress + 0x31feaa0)(Connection, visInfo);
					level->bDisableDistanceStreaming = true;
					level->SetShouldBeLoaded(true);
					level->SetShouldBeVisible(true);
				}
			}
		}
		*/

		if (Connection->PlayerController)
		{
			typedef void(__thiscall* SendClientAdjustment)(CG::APlayerController*);

			//log("Pre SendClientAdjustment");
			((SendClientAdjustment)((size_t*)Connection->PlayerController->VfTable)[0x1BD])(Connection->PlayerController); //MAYBE SCUFFED IF WE CRASH LOOK HERE
			//log("Post SendClientAdjustment");
		}

		/*
		for (int32 ChildIdx = 0; ChildIdx < Connection->Children.Count(); ChildIdx++)
		{
			if (Connection->Children[ChildIdx]->PlayerController != NULL)
			{
				typedef void(__thiscall* SendClientAdjustment)(CG::APlayerController*);

				((SendClientAdjustment)((size_t*)Connection->PlayerController->VfTable)[0x1BD])(Connection->Children[ChildIdx]->PlayerController);
				//->SendClientAdjustment();
			}
		}
		*/

		// Make weak ptr once for IsActorDormant call
		//log("SerialNumber Bullshit");
		CG::TWeakObjectPtr<CG::UNetConnection> WeakConnection{};
		WeakConnection.ObjectIndex = Connection->InternalIndex;
		WeakConnection.ObjectSerialNumber = CG::UObject::GObjects->GetItemByIndex(Connection->InternalIndex)->SerialNumber;
		//log("Post SerialNumber Bullshit");

		/* GetNetTag()++;
		Connection->GetTickCount()++;

		for (int32 j = 0; j < Connection->GetSentTemporaries().Num(); j++) 	// Set up to skip all sent temporary actors
		{
			Connection->GetSentTemporaries().at(j)->GetNetTag() = GetNetTag();
		} */

		for (auto& ActorInfo : ConsiderList)
		{
			//if (!ActorInfo || !ActorInfo->Actor)
			if (!ActorInfo->Actor)
				continue;

			auto Actor = ActorInfo->Actor;

			auto Channel = FindChannel(Actor, Connection);

			/*
			if (IsActorDormant(NetDriver, ActorInfo, WeakConnection))
			{
				continue;
			}*/

			std::vector<FNetViewer> ConnectionViewers = std::vector<FNetViewer>();
			ConnectionViewers.push_back(ConstructNetViewer(Connection));

			const bool bLevelInitializedForActor = true; //This makes me :(

			if (!Channel)
			{
				// if (!IsLevelInitializedForActor(Actor, Connection))
				if (!bLevelInitializedForActor)
				{
					// If the level this actor belongs to isn't loaded on client, don't bother sending
					continue;
				}

				 if (!IsActorRelevantToConnection(Actor, ConnectionViewers))
				{
					// If not relevant (and we don't have a channel), skip
					continue;
				} 
			}

			bool bLowNetBandwidth = false;

			/*
			// See of actor wants to try and go dormant
			 if (ShouldActorGoDormant(Actor, ConnectionViewers, Channel, 0, bLowNetBandwidth))
			{
				// LOG_INFO(LogDev, "Actor is going dormant!");

				// Channel is marked to go dormant now once all properties have been replicated (but is not dormant yet)
				Channel->StartBecomingDormant();
			}
			*/


			static void (*ActorChannelClose)(CG::UActorChannel*) = decltype(ActorChannelClose)(global_baseaddress + 0x2ff2c20);

			if (!Actor->bAlwaysRelevant && !Actor->bNetUseOwnerRelevancy && !Actor->bOnlyRelevantToOwner)
			{
				if (Connection && Connection->ViewTarget)
				{
					auto Viewer = Connection->ViewTarget;
					auto Loc = Viewer->K2_GetActorLocation();

					if (!IsActorRelevantToConnection(Actor, ConnectionViewers))
					{
						// LOG_INFO(LogReplication, "Actor is not relevant!");

						if (Channel) {
							ActorChannelClose(Channel);
						}

						continue;
					}
				}
			}

			/*
			if (Addresses::ActorChannelClose && Offsets::IsNetRelevantFor)
			{
				static void (*ActorChannelClose)(UActorChannel*) = decltype(ActorChannelClose)(Addresses::ActorChannelClose);

				if (!Actor->IsAlwaysRelevant() && !Actor->UsesOwnerRelevancy() && !Actor->IsOnlyRelevantToOwner())
				{
					if (Connection && Connection->GetViewTarget())
					{
						auto Viewer = Connection->GetViewTarget();
						auto Loc = Viewer->GetActorLocation();

						if (!IsActorRelevantToConnection(Actor, ConnectionViewers))
						{
							// LOG_INFO(LogReplication, "Actor is not relevant!");

							if (Channel)
								ActorChannelClose(Channel);

							continue;
						}
					}
				}
			}
			*/



			enum class EChannelCreateFlags : uint32_t
			{
				None = (1 << 0),
				OpenedLocally = (1 << 1)
			};

			uintptr_t baseAddress = global_baseaddress;

			static __int64 (*ReplicateActor)(CG::UActorChannel*) = decltype(ReplicateActor)(baseAddress + 0x300c2f0);
			static CG::UObject* (*CreateChannelByName)(CG::UNetConnection * Connection, CG::FName * ChName, EChannelCreateFlags CreateFlags, int32_t ChannelIndex) = decltype(CreateChannelByName)(baseAddress + 0x31e2d40);
			static __int64 (*SetChannelActor)(CG::UActorChannel*, CG::AActor*) = decltype(SetChannelActor)(baseAddress + 0x3010f30);

			if (!Channel)
			{
				if (Actor->IsA(CG::APlayerController::StaticClass()) && Actor != Connection->PlayerController) // isnetrelevantfor should handle this iirc
					continue;

				if (bLevelInitializedForActor)
				{
					//CG::FString ActorStr = L"Actor";
					CG::FName ActorName = global_actor_name;

					int ChannelIndex = -1; // 4294967295
					Channel = (CG::UActorChannel*)CreateChannelByName(Connection, &ActorName, EChannelCreateFlags::OpenedLocally, ChannelIndex);

					if (Channel)
					{
						SetChannelActor(Channel, Actor);
					}
				}

				else if (Actor->NetUpdateFrequency < 1.0f)
				{
					//ActorInfo->NextUpdateTime = global_statics->GetTimeSeconds(World) + 0.2f * FRand();
				}
			}

			if (Channel)
			{
				if (ReplicateActor(Channel)) {
					auto TimeSeconds = global_statics->GetTimeSeconds(World);
					const float MinOptimalDelta = 1.0f / Actor->NetUpdateFrequency;
					const float MaxOptimalDelta = max(1.0f / Actor->MinNetUpdateFrequency, MinOptimalDelta);
					const float DeltaBetweenReplications = (TimeSeconds - ActorInfo->LastNetReplicateTime);

					// Choose an optimal time, we choose 70% of the actual rate to allow frequency to go up if needed
					ActorInfo->OptimalNetUpdateDelta = std::clamp(DeltaBetweenReplications * 0.7f, MinOptimalDelta, MaxOptimalDelta); // should we use fmath?
					ActorInfo->LastNetReplicateTime = TimeSeconds;
				}
			}
		}
	}

	/*
	for (int i = 0; i < ConsiderList.size(); i++) {
		delete ConsiderList[i];
	}
	*/

	//ConsiderList.clear();

	

	// shuffle the list of connections if not all connections were ticked
	/*
	if (NumClientsToTick < NetDriver->ClientConnections.Num())
	{
		int32 NumConnectionsToMove = NumClientsToTick;
		while (NumConnectionsToMove > 0)
		{
			// move all the ticked connections to the end of the list so that the other connections are considered first for the next frame
			UNetConnection* Connection = NetDriver->ClientConnections[0];
			NetDriver->ClientConnections.RemoveAt(0, 1);
			NetDriver->ClientConnections.Add(Connection);
			NumConnectionsToMove--;
		}
	}
	*/

	return Updated;
}

//undefined FUN_143561fb0(longlong param_1,undefined8 param_2,byte param_3,char param_4)
//bool UWorld::ServerTravel(const FString& FURL, bool bAbsolute, bool bShouldSkipGameNotify)

typedef bool(__thiscall* ServerTravel)(CG::UWorld* world, CG::FString& URL, bool bAbsolute, bool bShouldSkipGameNotify);

ServerTravel origServerTravel = 0;

//0x30bb450
//AGameModeBase::PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
/*/
typedef void(__thiscall* PreLogin)(CG::AGameModeBase* gameModeBase, const CG::FString& Options, const CG::FString& Address, const CG::FUniqueNetIdRepl& UniqueId, CG::FString& ErrorMessage);

PreLogin origPreLogin = 0;

void PreLoginHook(CG::AGameModeBase* gameModeBase, const CG::FString& Options, const CG::FString& Address, const CG::FUniqueNetIdRepl& UniqueId, CG::FString& ErrorMessage) {
	log(Options.ToString());

	std::string options = Options.ToString();

	if (options.find("ticket") != std::string::npos) {
		log("LOGIN APPROVED");
		origPreLogin(gameModeBase, Options, Address, UniqueId, ErrorMessage);
	}
	else {
		CG::FString orig = CG::FString(L":3");
		void* owo = reinterpret_cast<void* (*)(size_t size, size_t alignment)>(global_baseaddress + 0x1573d90)(sizeof(L":3"), 0);
		memcpy(owo, orig.Data(), sizeof(L":3"));
		orig._data = (wchar_t*)owo;
		ErrorMessage = orig;
		log("LOGIN (THEORETICALLY) DENIED");
	}
}

//0x30b79b0
typedef CG::APlayerController* (__thiscall* Login)(CG::AGameModeBase* GameModeBase, CG::UPlayer* NewPlayer, CG::ENetRole InRemoteRole, const CG::FString& Portal, const CG::FString& Options, const CG::FUniqueNetIdRepl& UniqueId, CG::FString& ErrorMessage);

Login origLogin = 0;

CG::APlayerController* LoginHook(CG::AGameModeBase* GameModeBase, CG::UPlayer* NewPlayer, CG::ENetRole InRemoteRole, const CG::FString& Portal, const CG::FString& Options, const CG::FUniqueNetIdRepl& UniqueId, CG::FString& ErrorMessage) {
	log("LoginHook pre orig");
	
	CG::APlayerController* playerController = origLogin(GameModeBase, NewPlayer, InRemoteRole, Portal, Options, UniqueId, ErrorMessage);

	log("LoginHook post orig");
	
	if (serverListening) {
		log("LoginHook gwog time");
		CG::FSheikSpawnParams spawnParams = CG::FSheikSpawnParams();

		//((CG::ASheikPlayerController_BP_C*)playerController)->server
	}

	return playerController;
}
/*/
bool ServerTravelHook(CG::UWorld* world, CG::FString& URL, bool bAbsolute, bool bShouldSkipGameNotify) {
	log("PRE ORIGSERVERTRAVEL");

	bool result = origServerTravel(world, URL, bAbsolute, bShouldSkipGameNotify);

	if (result) {
		log("STUFF HAPPENS HERE");
		//CG::FWorldContext worldContext = GetWorldContextFromWorldChecked(global_engine, world);

		//getPackageFromUObject(world)

		//bool UWorld::DestroyActor( AActor* ThisActor, bool bNetForce, bool bShouldModifyLevel )
	}

	log("SERVER TRAVEL HOOK");

	return result;
}

void TickFlushHook(CG::UIpNetDriver* NetDriver, float DeltaSeconds) {
	ServerReplicateActors(NetDriver, global_world, DeltaSeconds);

	return originalTickFlush(NetDriver, DeltaSeconds);
}

typedef void(__fastcall* ProcessEvent)(CG::UObject*, CG::UFunction*, void* parms);

ProcessEvent origProcessEvent = 0;

typedef void*(__thiscall* SkillUpload)(void* param1, void* param2);

SkillUpload origSkillUpload = 0;

typedef void* (__thiscall* SkillUpload2)(void* param1);

typedef void(__thiscall* SkillUpload4)(void* param1, void* param2, int param3);

typedef void(__thiscall* SkillUpload5)(void* param1);

SkillUpload2 origSkillUpload2 = 0;

SkillUpload2 origSkillUpload3 = 0;

SkillUpload4 origSkillUpload4 = 0;

SkillUpload5 origSkillUpload5 = 0;

//

//int Browse(CG::UEngine* engine, CG::UWorld* world, CG::FURL url) {
	//0x34f91a0

/*
enum BrowseReturnType
{
	Success,
	Failure,
	Pending,
};

typedef BrowseReturnType(__thiscall* BrowseType)(CG::UEngine* engine, CG::FWorldContext& worldContext, CG::FURL url, CG::FString& error);

BrowseType origBrowse = 0;
*/

void* FakeSkillUpload(void* param1, void* param2) {
	return nullptr;
}

void* FakeSkillUpload2(void* param1) {
	return nullptr;
}

void FakeSkillUpload5(void* param1) {
	return;
}

void FakeSkillUpload4(void* param1, void* param2, int param3) {
	return;
}

void FakeProcessEvent(CG::UObject* object, CG::UFunction* function, void* parms) {
	log(object->GetFullName(), function->GetFullName());

	return origProcessEvent(object, function, parms);
}

/*
BrowseReturnType FakeBrowse(CG::UEngine* engine, CG::FWorldContext& worldContext, CG::FURL url, CG::FString& error) {
	return origBrowse(engine, worldContext, url, error);
	log("GAR");
	log(std::to_string((__int64)origBrowse));
	if (url.Map.Count() == 0) {
		return origBrowse(engine, worldContext, url, error);
	}
	log("GAR2");
	log(url.Map.ToString());
	//log(url.Protocol.ToString());
	//log(std::to_string(url.Valid));
	//if (url.Map.ToString().find("ShiekEntry") != std::string::npos) {
		//return false;
	//}
	//else {
		return origBrowse(engine, worldContext, url, error);
	//}
}
*/

enum ENetMode
{
	NM_Standalone,
	NM_DedicatedServer,
	NM_ListenServer,
	NM_Client,
	NM_MAX,
};

typedef ENetMode(__thiscall* GetNetMode)(void*);

GetNetMode origGetWorldNetMode = 0;
GetNetMode origGetActorNetMode = 0;

ENetMode FakeGetNetMode(void* param1) {
	return NM_ListenServer;
}

void projectKOMainThread() {

	//AllocConsole();
	//FILE* f = new FILE();
	//freopen_s(&f, "CONOUT$", "w", stdout);

	//0x1815fc0
	//0x2f32330

	//0x3556be0 - world getnetmode

	//0x13745b0 - Skill upload - undefined8 FUN_1413745b0(undefined8 param_1,longlong param_2)
	//0x1374160 - Skill upload pt2 - ulonglong FUN_141374160(longlong param_1)

	std::cout << "Hello RumbleVerse!" << std::endl;

	int result = MH_Initialize();

	CG::InitSdk();

	actorChannelNumber = CG::FName("ActorChannel").Number;

	global_statics = CG::UObject::FindObject<CG::UGameplayStatics>();

	global_actor_name = CG::FName("Actor");

	std::cout << "Hooking LocalTickFlush..." << std::endl;

	global_baseaddress = (uintptr_t)GetModuleHandleA("rumbleverseclient-win64-shipping.exe");

	std::cout << std::hex << global_baseaddress << std::endl;

	*(bool*)(global_baseaddress + 0x5837a40) = true;

	global_world = CG::UObject::FindObject<CG::UWorld>("World SheikEntry.SheikEntry");

	global_engine = CG::UObject::FindObject<CG::UEngine>();

	uintptr_t functAddress = global_baseaddress + 0x3226800;

	TickFlush localTickFlush = (TickFlush)functAddress;

	result = MH_CreateHook(localTickFlush, &TickFlushHook, reinterpret_cast<LPVOID*>(&originalTickFlush));

	result = MH_EnableHook(localTickFlush);

	uintptr_t functAddress4 = global_baseaddress + 0x3556be0;

	GetNetMode worldGetNetMode = (GetNetMode)functAddress4;

	result = MH_CreateHook(worldGetNetMode, &FakeGetNetMode, reinterpret_cast<LPVOID*>(&origGetWorldNetMode));

	result = MH_EnableHook(worldGetNetMode);

	//0x2dfac20

	//0x3546ec0

	uintptr_t functAddress5 = global_baseaddress + 0x2dfac20;

	GetNetMode actorGetNetMode = (GetNetMode)functAddress5;

	result = MH_CreateHook(actorGetNetMode, &FakeGetNetMode, reinterpret_cast<LPVOID*>(&origGetActorNetMode));

	result = MH_EnableHook(actorGetNetMode);

	//result = MH_EnableHook(randomCrashThingy3);

	//3545f60

	auto PE = (ProcessEvent)CG::GetVFunction<void(*)(CG::UObject*, class UFunction*, void*)>(CG::UObject::FindObject<CG::UObject>(), PROCESS_EVENTS_INDEX);

	result = MH_CreateHook(PE, &FakeProcessEvent, reinterpret_cast<LPVOID*>(&origProcessEvent));

	result = MH_EnableHook(PE);

	uintptr_t functAddress6 = global_baseaddress + 0x13745b0;

	SkillUpload skillUpload = (SkillUpload)functAddress6;

	result = MH_CreateHook(skillUpload, &FakeSkillUpload, reinterpret_cast<LPVOID*>(&origSkillUpload));

	result = MH_EnableHook(skillUpload);

	uintptr_t functAddress7 = global_baseaddress + 0x1374160;

	SkillUpload2 skillUpload2 = (SkillUpload2)functAddress7;

	result = MH_CreateHook(skillUpload2, &FakeSkillUpload2, reinterpret_cast<LPVOID*>(&origSkillUpload2));

	result = MH_EnableHook(skillUpload2);

	//0x3561fb0

	uintptr_t functAddress8 = global_baseaddress + 0x3561fb0;

	ServerTravel serverTravel = (ServerTravel)functAddress8;

	result = MH_CreateHook(serverTravel, &ServerTravelHook, reinterpret_cast<LPVOID*>(&origServerTravel));

	result = MH_EnableHook(serverTravel);

	//0x1373220

	uintptr_t functAddress9 = global_baseaddress + 0x1373220;

	SkillUpload2 skillUpload3 = (SkillUpload2)functAddress9;

	result = MH_CreateHook(skillUpload3, &FakeSkillUpload2, reinterpret_cast<LPVOID*>(&origSkillUpload3));

	result = MH_EnableHook(skillUpload3);

	//0x12db080

	uintptr_t functAddress10 = global_baseaddress + 0x12db080;

	SkillUpload2 skillUpload4 = (SkillUpload2)functAddress10;

	result = MH_CreateHook(skillUpload4, &FakeSkillUpload4, reinterpret_cast<LPVOID*>(&origSkillUpload4));

	result = MH_EnableHook(skillUpload4);

	uintptr_t functAddress11 = global_baseaddress + 0x1314be0;

	SkillUpload5 skillUpload5 = (SkillUpload5)functAddress11;

	result = MH_CreateHook(skillUpload5, &FakeSkillUpload5, reinterpret_cast<LPVOID*>(&origSkillUpload5));

	result = MH_EnableHook(skillUpload5);

	uintptr_t functAddress12 = global_baseaddress + 0x30bb450;

	//PreLogin preLogin = (PreLogin)functAddress12;

	//result = MH_CreateHook(preLogin, &PreLoginHook, reinterpret_cast<LPVOID*>(&origPreLogin));

	//result = MH_EnableHook(preLogin);

	uintptr_t functAddress13 = global_baseaddress + 0x30b79b0;

	//Login login = (Login)functAddress13;

	//result = MH_CreateHook(login, &LoginHook, reinterpret_cast<LPVOID*>(&origLogin));

	//result = MH_EnableHook(login);

	//0x30b79b0

	/*
	uintptr_t functAddress9 = global_baseaddress + 0x34f91a0;

	BrowseType browseType = (BrowseType)functAddress9;

	result = MH_CreateHook(browseType, &FakeBrowse, reinterpret_cast<LPVOID*>(&origBrowse));

	result = MH_EnableHook(browseType);
	*/

	std::vector<CG::APlayerController*> playercontrollers = CG::UObject::FindObjects<CG::APlayerController>();

	std::cout << "Switching levels..." << std::endl;

	CG::APlayerController* playercontroller = playercontrollers.back();

	//playercontroller->SwitchLevel(CG::FString(L"Island_P_2"));

	//CG::UEngine* engine = CG::UObject::FindObject<CG::UEngine>();

	//Browse(engine, global_world, )

	CG::UObject::FindObject<CG::UKismetSystemLibrary>()->ExecuteConsoleCommand(playercontroller, CG::FString(L"t.maxfps 60"), playercontroller);

	//CG::UObject::FindObject<CG::UKismetSystemLibrary>()->ExecuteConsoleCommand(playercontroller, CG::FString(L"log Global VeryVerbose"), playercontroller);

	//CG::UObject::FindObject<CG::UKismetSystemLibrary>()->ExecuteConsoleCommand(playercontroller, CG::FString(L"ExecStartBR 1 true"), playercontroller);

	//CG::UObject::FindObject<CG::UKismetSystemLibrary>()->ExecuteConsoleCommand(playercontroller, CG::FString(L"ExecStartBR 1 true"), playercontroller);

	playercontroller->SwitchLevel(CG::FString(L"erder?game=/Game/Blueprints/Modes/BattleRoyale/SheikGameModeBR_BP.SheikGameModeBR_BP_C"));

	//Sleep(10 * 1000);

	//playercontrollers = CG::UObject::FindObjects<CG::APlayerController>();

	//playercontroller = playercontrollers.back();

	//CG::FString command = CG::FString(L"ExecStartPlayground");

	//reinterpret_cast<bool(*)(CG::APlayerController*, CG::FString&, bool)>(global_baseaddress + 0x333ff70)(playercontroller, command, true);

	//CG::UObject::FindObject<CG::UKismetSystemLibrary>()->ExecuteConsoleCommand(playercontroller, CG::FString(L"ExecStartPlayground"), playercontroller);

	//CG::UObject::FindObject<CG::UKismetSystemLibrary>()->ExecuteConsoleCommand(playercontroller, CG::FString(L"log LogNet VeryVerbose"), playercontroller);

	//CG::UObject::FindObject<CG::UKismetSystemLibrary>()->ExecuteConsoleCommand(playercontroller, CG::FString(L"log LogNetCore VeryVerbose"), playercontroller);

	//CG::UObject::FindObject<CG::UKismetSystemLibrary>()->ExecuteConsoleCommand(playercontroller, CG::FString(L"open Island_P_2?game=/Game/Blueprints/Modes/BattleRoyale/SheikGameModeBR_BP.SheikGameModeBR_BP_C"), playercontroller);

	//playercontroller->SendToConsole();

	//playercontroller->SendToConsole(CG::FString(L"log LogNetCore VeryVerbose"));

	//Sleep(10 * 1000);

	//CG::UWorld* travelworld = CG::UObject::FindObject<CG::UWorld>("World SheikEntry.SheikEntry");

	//CG::FString URL = CG::FString(L"Island_P_2");

	//ServerTravelHook(travelworld, URL, true, false);

	Sleep(5 * 1000);

	if (global_mode == EGameMode::PLAYGROUND) {
		CG::UObject::FindObjects<CG::ASheikPlayerController_BP_C>()[1]->ExecStartPlayground();
	}

	if (global_mode == EGameMode::BR_SOLOS) {
		CG::UObject::FindObjects<CG::ASheikPlayerController_BP_C>()[1]->ExecStartBR(1, false);
	}

	if (global_mode == EGameMode::BR_DUOS) {
		CG::UObject::FindObjects<CG::ASheikPlayerController_BP_C>()[1]->ExecStartBR(2, false);
	}

	if (global_mode == EGameMode::BR_TRIOS) {
		CG::UObject::FindObjects<CG::ASheikPlayerController_BP_C>()[1]->ExecStartBR(3, false);
	}

	if (global_mode == EGameMode::BR_QUADS) {
		CG::UObject::FindObjects<CG::ASheikPlayerController_BP_C>()[1]->ExecStartBR(4, false);
	}

	//CG::UWorld* deleteworld = CG::UObject::FindObject<CG::UWorld>("World Island_P_3.Island_P_3");

	//reinterpret_cast<bool(*)(CG::UWorld*, CG::AActor*, bool, bool)>(global_baseaddress + 0x3174e00)(deleteworld, CG::UObject::FindObjects<CG::APlayerController>()[1], true, true);

	//log("GRAAAA");

	//CG::UObject::FindObjects<CG::ASheikPlayerController_BP_C>()[1]->exec

	//CG::UObject::FindObjects<CG::ASheikPlayerController_BP_C>()[1]->ExecStartBR(1, false);
	
	//CG::UObject::FindObjects<CG::ASheikPlayerController_BP_C>()[1]->ExecStartPlayground();
	//CG::UObject::FindObjects<CG::ASheikPlayerController_BP_C>()[1]->ExecSetNewPlayerPolicy

	//CG::UObject::FindObjects<CG::ASheikPlayerController_BP_C>()[1]->ExecStartBR_NoMapTransition(1, true, true);

	//CG::UObject::FindObject<CG::ASheikPlayerController_BP_C>()[1].ExecStartBR(1, true);

	//CG::UObject::FindObject<CG::UKismetSystemLibrary>()->ExecuteConsoleCommand(playercontroller, CG::FString(L"ExecStartBR 1 True"), playercontroller);

	//Sleep(5 * 1000);

	//CG::UWorld* world1 = CG::UObject::FindObject<CG::UWorld>("World Island_P_3.Island_P_3");

	//CG::UObject::FindObject<CG::UKismetSystemLibrary>()->ExecuteConsoleCommand(world1, CG::FString(L"ExecStartBR 1 True"), playercontroller);

	Sleep(15 * 1000);

	if (global_mode == EGameMode::BR_SOLOS || global_mode == EGameMode::BR_DUOS || global_mode == EGameMode::BR_TRIOS || global_mode == EGameMode::BR_QUADS) {
		CG::UObject::FindObjects<CG::ASheikGameModeCommon>().back()->WaitingForPlayersCountdown = 120;
		CG::UObject::FindObjects<CG::ASheikGameModeCommon>().back()->WaitToStartCountdown = 120;
	}

	//ListAllOfType<CG::LevelStreaming>();

	for (CG::ULevelStreaming* level : CG::UObject::FindObjects<CG::ULevelStreaming>()) {
		/*
		if (level->bShouldBeLoaded) {
			level->bDisableDistanceStreaming = true;
			level->SetShouldBeLoaded(true);
			level->SetShouldBeVisible(true);
			level->bShouldBeVisible = true;
			level->bShouldBeLoaded = true;
			level->SetLevelLODIndex(4);
			//level->

		}
		*/
		if(level->PackageNameToLoad.GetName().find("S2") != std::string::npos){
			level->bDisableDistanceStreaming = true;
			level->SetShouldBeLoaded(true);
			level->SetShouldBeVisible(true);
			level->bShouldBeVisible = true;
			level->bShouldBeLoaded = true;
			level->SetLevelLODIndex(4);
		}
		else if (level->PackageNameToLoad.GetName().find("S3") == std::string::npos && level->PackageNameToLoad.GetName().find("S4") == std::string::npos && level->PackageNameToLoad.GetName().find("NeverStream") == std::string::npos && level->PackageNameToLoad.GetName().find("Greybox") == std::string::npos && level->PackageNameToLoad.GetName().find("_S1_Global_AlwaysLoaded_Design") == std::string::npos) {
			///Game/Maps/Island2/_S1_Global_AlwaysLoaded_Design
			/// Game / Maps / Island2 / _S1andS2_FinalRings
			if (level->PackageNameToLoad.GetName().find("Foliage") != std::string::npos) {
				level->bDisableDistanceStreaming = true;
				level->SetShouldBeLoaded(true);
				level->SetShouldBeVisible(true);
				level->bShouldBeVisible = true;
				level->bShouldBeLoaded = true;
				level->SetLevelLODIndex(4);
			}

			if (level->PackageNameToLoad.GetName().find("Signs") != std::string::npos) {
				level->bDisableDistanceStreaming = true;
				level->SetShouldBeLoaded(true);
				level->SetShouldBeVisible(true);
				level->bShouldBeVisible = true;
				level->bShouldBeLoaded = true;
				level->SetLevelLODIndex(4);
			}

			if (level->PackageNameToLoad.GetName().find("Props") != std::string::npos) {
				level->bDisableDistanceStreaming = true;
				level->SetShouldBeLoaded(true);
				level->SetShouldBeVisible(true);
				level->bShouldBeVisible = true;
				level->bShouldBeLoaded = true;
				level->SetLevelLODIndex(4);
			}

			if (level->PackageNameToLoad.GetName().find("VFX") != std::string::npos) {
				level->bDisableDistanceStreaming = true;
				level->SetShouldBeLoaded(true);
				level->SetShouldBeVisible(true);
				level->bShouldBeVisible = true;
				level->bShouldBeLoaded = true;
				level->SetLevelLODIndex(4);
			}

			if (level->PackageNameToLoad.GetName().find("Trees") != std::string::npos) {
				level->bDisableDistanceStreaming = true;
				level->SetShouldBeLoaded(true);
				level->SetShouldBeVisible(true);
				level->bShouldBeVisible = true;
				level->bShouldBeLoaded = true;
				level->SetLevelLODIndex(4);
			}

			if (level->PackageNameToLoad.GetName().find("Weapons") != std::string::npos) {
				level->bDisableDistanceStreaming = true;
				level->SetShouldBeLoaded(true);
				level->SetShouldBeVisible(true);
				level->bShouldBeVisible = true;
				level->bShouldBeLoaded = true;
				level->SetLevelLODIndex(4);
			}

			if (level->PackageNameToLoad.GetName().find("Buildings") != std::string::npos) {
				level->bDisableDistanceStreaming = true;
				level->SetShouldBeLoaded(true);
				level->SetShouldBeVisible(true);
				level->bShouldBeVisible = true;
				level->bShouldBeLoaded = true;
				level->SetLevelLODIndex(4);
			}

			if (level->PackageNameToLoad.GetName().find("POI") != std::string::npos) {
				level->bDisableDistanceStreaming = true;
				level->SetShouldBeLoaded(true);
				level->SetShouldBeVisible(true);
				level->bShouldBeVisible = true;
				level->bShouldBeLoaded = true;
				level->SetLevelLODIndex(4);
			}

			if (level->PackageNameToLoad.GetName().find("Terrain") != std::string::npos) {
				level->bDisableDistanceStreaming = true;
				level->SetShouldBeLoaded(true);
				level->SetShouldBeVisible(true);
				level->bShouldBeVisible = true;
				level->bShouldBeLoaded = true;
				level->SetLevelLODIndex(4);
			}

			if (level->PackageNameToLoad.GetName().find("Landscape") != std::string::npos) {
				level->bDisableDistanceStreaming = true;
				level->SetShouldBeLoaded(true);
				level->SetShouldBeVisible(true);
				level->bShouldBeVisible = true;
				level->bShouldBeLoaded = true;
				level->SetLevelLODIndex(4);
			}

				if (level->PackageNameToLoad.GetName().find("Global_AlwaysLoaded") != std::string::npos) {
					level->bDisableDistanceStreaming = true;
					level->SetShouldBeLoaded(true);
					level->SetShouldBeVisible(true);
					level->bShouldBeVisible = true;
					level->bShouldBeLoaded = true;
					level->SetLevelLODIndex(4);
				}

			if (global_mode == EGameMode::PLAYGROUND) {
				if (level->PackageNameToLoad.GetName().find("Playground") != std::string::npos) {
					level->bDisableDistanceStreaming = true;
					level->SetShouldBeLoaded(true);
					level->SetShouldBeVisible(true);
					level->bShouldBeVisible = true;
					level->bShouldBeLoaded = true;
					level->SetLevelLODIndex(4);
				}
			}
		}

		if (level->LevelLODIndex == 4) {
			log(level->PackageNameToLoad.GetName());
		}
	}

	Sleep(10 * 1000);

	//ListAllOfType<CG::USheikPlayerDataManager>();

	//CG::UObject::FindObjects< CG::USheikPlayerDataManager>()[1]->

	std::cout << "CreateNamedNetDriver..." << std::endl;

	CG::UEngine* engine = CG::UObject::FindObjects<CG::UEngine>().back();

	//ListAllOfType<CG::UWorld>();

	CG::UWorld* world = CG::UObject::FindObject<CG::UWorld>("World erder.erder");

	global_world = CG::UObject::FindObject<CG::UWorld>("World erder.erder");

	std::cout << "GLOBAL WORLD: " << global_world << std::endl;

	//CG::APlayerController* playerController = CG::UObject::FindObjects<CG::APlayerController>().back();

	int createNamedNetDriverResult = CreateNamedNetDriver(engine, world);

	//NewObject<CG::UNetDriver>();

	std::cout << "CreateNamedNetDriver Result: " << createNamedNetDriverResult << std::endl;

	//ListAllOfType<CG::UNetDriver>();

	CG::UIpNetDriver* netdriver = CG::UObject::FindObjects<CG::UIpNetDriver>().back();

	world->NetDriver = netdriver;

	typedef void(__thiscall* SetWorld)(void*, CG::UWorld*);

	((SetWorld)((size_t*)netdriver->VfTable)[0x75])(netdriver, world);

	for (int i = 0; i < world->LevelCollections.Count(); i++) {
		world->LevelCollections[i].NetDriver = netdriver;
	}

	std::cout << "InitListen..." << std::endl;

	bool initListenResult = InitListen(netdriver, world);

	std::cout << "InitListen Result: " << initListenResult << std::endl;

	netdriver->MaxClientRate = netdriver->MaxInternetClientRate;

	((SetWorld)((size_t*)netdriver->VfTable)[0x75])(netdriver, world);

	std::vector<CG::ULevel*> levels = CG::UObject::FindObjects<CG::ULevel>();

	playercontrollers = CG::UObject::FindObjects<CG::APlayerController>();

	playercontroller = playercontrollers[1];

	serverListening = true;

	//CG::UObject::FindObjects<CG::ASheikPlayerController_BP_C>()[1]->ExecSetNewPlayerPolicy(false);

	//0x3171f50
	
	//getPackageFromUObject()

	/*
	for (CG::ULevelStreaming* level : CG::UObject::FindObjects<CG::ULevelStreaming>()) {
		if (level->GetFullName().find("Default") == std::string::npos) {
			level->bDisableDistanceStreaming = true;
			level->SetShouldBeLoaded(true);
			level->SetShouldBeVisible(true);
			level->bShouldBeVisible = true;
			level->bShouldBeLoaded = true;
		}
	}
	*/

	//for (CG::ULevel* level : CG::UObject::FindObjects<CG::ULevel>()) {
		//if (level->GetFullName().find("Default") == std::string::npos) {
			//level->bIsVisible = true;
		//}
	//}

	//for (CG::ULevelStreaming* level : CG::UObject::FindObjects<CG::ULevelStreaming>()) {
		//if (level->GetFullName().find("Default") == std::string::npos) {
			//level->bDisableDistanceStreaming = true;
			//level->SetShouldBeLoaded(true);
			//level->SetShouldBeVisible(true);
			//level->bShouldBeVisible = true;
			//level->bShouldBeLoaded = true;
		//}
	//}

	/*
	for (CG::UWorld* world : CG::UObject::FindObjects<CG::UWorld>()) {
		if (world->K2_GetWorldSettings()) {
			world->K2_GetWorldSettings()->bEnableWorldComposition = false;
			world->K2_GetWorldSettings()->bEnableWorldOriginRebasing = false;
		}
	}
	*/

	//Sleep(10 * 1000);

	//Sleep(10 * 1000);

	//while(true){
		
	//}
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ulReasonForCall, LPVOID lpReserved)
{
	DisableThreadLibraryCalls(hModule);

	if (ulReasonForCall != DLL_PROCESS_ATTACH)
		return TRUE;

	HANDLE hThread = CreateThread(nullptr, 0,
		(LPTHREAD_START_ROUTINE)projectKOMainThread, hModule, 0, 0);
	if (hThread != nullptr)
		CloseHandle(hThread);

	// TODO: Fill your code here

	return TRUE;
}