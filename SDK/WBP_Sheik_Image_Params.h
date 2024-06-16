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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function WBP_Sheik_Image.WBP_Sheik_Image_C.SheikImageAsyncLoad
	 */
	struct UWBP_Sheik_Image_C_SheikImageAsyncLoad_Params
	{
	public:
		unsigned char                                              UnknownData_3YX7[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       MatchSize;                                               // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RequestSucceeded;                                        // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_907K[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Image.WBP_Sheik_Image_C.HandleOnAssetLoadSucceeded
	 */
	struct UWBP_Sheik_Image_C_HandleOnAssetLoadSucceeded_Params
	{
	public:
		class UObject*                                             LoadedObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Image.WBP_Sheik_Image_C.HandleOnAssetLoadFailed
	 */
	struct UWBP_Sheik_Image_C_HandleOnAssetLoadFailed_Params
	{
	public:
		TArray<class FString>                                      FailedAssetPaths;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_Image.WBP_Sheik_Image_C.PreConstruct
	 */
	struct UWBP_Sheik_Image_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Image.WBP_Sheik_Image_C.Destruct
	 */
	struct UWBP_Sheik_Image_C_Destruct_Params
	{	};

	/**
	 * Function WBP_Sheik_Image.WBP_Sheik_Image_C.ExecuteUbergraph_WBP_Sheik_Image
	 */
	struct UWBP_Sheik_Image_C_ExecuteUbergraph_WBP_Sheik_Image_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Image.WBP_Sheik_Image_C.ImageLoadFailed__DelegateSignature
	 */
	struct UWBP_Sheik_Image_C_ImageLoadFailed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_Image.WBP_Sheik_Image_C.ImageLoadSucceeded__DelegateSignature
	 */
	struct UWBP_Sheik_Image_C_ImageLoadSucceeded__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
