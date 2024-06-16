#pragma once

/**
 * Name: Rumbleverse
 * Version: Latest
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class IGProxyClasses.IGProxyActor
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class AIGProxyActor : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGProxyClasses.IGProxyActorComponent
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UIGProxyActorComponent : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGProxyClasses.IGProxyBoxTriggerComponent
	 * Size -> 0x0038 (FullSize[0x04C0] - InheritedSize[0x0488])
	 */
	class UIGProxyBoxTriggerComponent : public UBoxComponent
	{
	public:
		class FScriptMulticastDelegate                             OnSimpleComponentBeginOverlap;                           // 0x0488(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSimpleComponentEndOverlap;                             // 0x0498(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSimpleComponentHitOverlap;                             // 0x04A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DDS4[0x8];                                   // 0x04B8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnProxyComponentHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void OnProxyComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnProxyComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class IGProxyClasses.IGProxyCapsuleTriggerComponent
	 * Size -> 0x0030 (FullSize[0x04B0] - InheritedSize[0x0480])
	 */
	class UIGProxyCapsuleTriggerComponent : public UCapsuleComponent
	{
	public:
		class FScriptMulticastDelegate                             OnSimpleComponentBeginOverlap;                           // 0x0480(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSimpleComponentEndOverlap;                             // 0x0490(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSimpleComponentHitOverlap;                             // 0x04A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnProxyComponentHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void OnProxyComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnProxyComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class IGProxyClasses.IGProxyPawn
	 * Size -> 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
	 */
	class AIGProxyPawn : public APawn
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGProxyClasses.IGProxySceneComponent
	 * Size -> 0x0008 (FullSize[0x0210] - InheritedSize[0x0208])
	 */
	class UIGProxySceneComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_MU1I[0x8];                                   // 0x0208(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGProxyClasses.IGProxySphereTriggerComponent
	 * Size -> 0x0030 (FullSize[0x04B0] - InheritedSize[0x0480])
	 */
	class UIGProxySphereTriggerComponent : public USphereComponent
	{
	public:
		class FScriptMulticastDelegate                             OnSimpleComponentBeginOverlap;                           // 0x0480(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSimpleComponentEndOverlap;                             // 0x0490(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSimpleComponentHitOverlap;                             // 0x04A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnProxyComponentHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void OnProxyComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnProxyComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class IGProxyClasses.IGProxyStaticMeshActor
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class AIGProxyStaticMeshActor : public AStaticMeshActor
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
