#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class EModifyCurveApplyMode
{
	EModifyCurveApplyMode__Add     = 0,
	EModifyCurveApplyMode__Scale   = 1,
	EModifyCurveApplyMode__Blend   = 2,
	EModifyCurveApplyMode__EModifyCurveApplyMode_MAX = 3
};


// Enum AnimGraphRuntime.ERBFDistanceMethod
enum class ERBFDistanceMethod
{
	ERBFDistanceMethod__Euclidean  = 0,
	ERBFDistanceMethod__Quaternion = 1,
	ERBFDistanceMethod__SwingAngle = 2,
	ERBFDistanceMethod__ERBFDistanceMethod_MAX = 3
};


// Enum AnimGraphRuntime.ERBFFunctionType
enum class ERBFFunctionType
{
	ERBFFunctionType__Gaussian     = 0,
	ERBFFunctionType__Exponential  = 1,
	ERBFFunctionType__Linear       = 2,
	ERBFFunctionType__Cubic        = 3,
	ERBFFunctionType__Quintic      = 4,
	ERBFFunctionType__ERBFFunctionType_MAX = 5
};


// Enum AnimGraphRuntime.EPoseDriverOutput
enum class EPoseDriverOutput
{
	EPoseDriverOutput__DrivePoses  = 0,
	EPoseDriverOutput__DriveCurves = 1,
	EPoseDriverOutput__EPoseDriverOutput_MAX = 2
};


// Enum AnimGraphRuntime.EPoseDriverSource
enum class EPoseDriverSource
{
	EPoseDriverSource__Rotation    = 0,
	EPoseDriverSource__Translation = 1,
	EPoseDriverSource__EPoseDriverSource_MAX = 2
};


// Enum AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType
{
	EPoseDriverType__SwingAndTwist = 0,
	EPoseDriverType__SwingOnly     = 1,
	EPoseDriverType__Translation   = 2,
	EPoseDriverType__EPoseDriverType_MAX = 3
};


// Enum AnimGraphRuntime.ESnapshotSourceMode
enum class ESnapshotSourceMode
{
	ESnapshotSourceMode__NamedSnapshot = 0,
	ESnapshotSourceMode__SnapshotPin = 1,
	ESnapshotSourceMode__ESnapshotSourceMode_MAX = 2
};


// Enum AnimGraphRuntime.ERefPoseType
enum class ERefPoseType
{
	EIT_LocalSpace                 = 0,
	EIT_Additive                   = 1,
	EIT_MAX                        = 2
};


// Enum AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit
{
	ESequenceEvalReinit__NoReset   = 0,
	ESequenceEvalReinit__StartPosition = 1,
	ESequenceEvalReinit__ExplicitTime = 2,
	ESequenceEvalReinit__ESequenceEvalReinit_MAX = 3
};


// Enum AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType
{
	ESphericalLimitType__Inner     = 0,
	ESphericalLimitType__Outer     = 1,
	ESphericalLimitType__ESphericalLimitType_MAX = 2
};


// Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class EAnimPhysSimSpaceType
{
	AnimPhysSimSpaceType__Component = 0,
	AnimPhysSimSpaceType__Actor    = 1,
	AnimPhysSimSpaceType__World    = 2,
	AnimPhysSimSpaceType__RootRelative = 3,
	AnimPhysSimSpaceType__BoneRelative = 4,
	AnimPhysSimSpaceType__AnimPhysSimSpaceType_MAX = 5
};


// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class EAnimPhysLinearConstraintType
{
	AnimPhysLinearConstraintType__Free = 0,
	AnimPhysLinearConstraintType__Limited = 1,
	AnimPhysLinearConstraintType__AnimPhysLinearConstraintType_MAX = 2
};


// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class EAnimPhysAngularConstraintType
{
	AnimPhysAngularConstraintType__Angular = 0,
	AnimPhysAngularConstraintType__Cone = 1,
	AnimPhysAngularConstraintType__AnimPhysAngularConstraintType_MAX = 2
};


// Enum AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode
{
	EDrivenDestinationMode__Bone   = 0,
	EDrivenDestinationMode__MorphTarget = 1,
	EDrivenDestinationMode__MaterialParameter = 2,
	EDrivenDestinationMode__EDrivenDestinationMode_MAX = 3
};


// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode
{
	EDrivenBoneModificationMode__AddToInput = 0,
	EDrivenBoneModificationMode__ReplaceComponent = 1,
	EDrivenBoneModificationMode__AddToRefPose = 2,
	EDrivenBoneModificationMode__EDrivenBoneModificationMode_MAX = 3
};


// Enum AnimGraphRuntime.EComponentType
enum class EComponentType
{
	EComponentType__None           = 0,
	EComponentType__TranslationX   = 1,
	EComponentType__TranslationY   = 2,
	EComponentType__TranslationZ   = 3,
	EComponentType__RotationX      = 4,
	EComponentType__RotationY      = 5,
	EComponentType__RotationZ      = 6,
	EComponentType__Scale          = 7,
	EComponentType__ScaleX         = 8,
	EComponentType__ScaleY         = 9,
	EComponentType__ScaleZ         = 10,
	EComponentType__EComponentType_MAX = 11
};


// Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class ECopyBoneDeltaMode
{
	CopyBoneDeltaMode__Accumulate  = 0,
	CopyBoneDeltaMode__Copy        = 1,
	CopyBoneDeltaMode__CopyBoneDeltaMode_MAX = 2
};


// Enum AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend
{
	EInterpolationBlend__Linear    = 0,
	EInterpolationBlend__Cubic     = 1,
	EInterpolationBlend__Sinusoidal = 2,
	EInterpolationBlend__EaseInOutExponent2 = 3,
	EInterpolationBlend__EaseInOutExponent3 = 4,
	EInterpolationBlend__EaseInOutExponent4 = 5,
	EInterpolationBlend__EaseInOutExponent5 = 6,
	EInterpolationBlend__MAX       = 7,
	EInterpolationBlend__EInterpolationBlend_MAX = 8
};


// Enum AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode
{
	BMM_Ignore                     = 0,
	BMM_Replace                    = 1,
	BMM_Additive                   = 2,
	BMM_MAX                        = 3
};


// Enum AnimGraphRuntime.ESplineBoneAxis
enum class ESplineBoneAxis
{
	ESplineBoneAxis__X             = 0,
	ESplineBoneAxis__Y             = 1,
	ESplineBoneAxis__Z             = 2,
	ESplineBoneAxis__ESplineBoneAxis_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// 0x00D0 (0x0128 - 0x0058)
struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
{
	float                                              X;                                                        // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Y;                                                        // 0x005C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Z;                                                        // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0064(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLoop : 1;                                                // 0x0068(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartPosition;                                            // 0x006C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             BlendSpace;                                               // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bResetPlayTimeWhenBlendSpaceChanges : 1;                  // 0x0078(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBlendFilter                                BlendFilter;                                              // 0x0080(0x0090)
	TArray<struct FBlendSampleData>                    BlendSampleDataCache;                                     // 0x0110(0x0010) (CPF_ZeroConstructor)
	class UBlendSpaceBase*                             PreviousBlendSpace;                                       // 0x0120(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
// 0x00E8 (0x0210 - 0x0128)
struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
{
	struct FPoseLink                                   BasePose;                                                 // 0x0128(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	int                                                LODThreshold;                                             // 0x0140(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsLODEnabled : 1;                                        // 0x0144(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class Vector3D                                     LookAtLocation;                                           // 0x0148(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FName                                       SourceSocketName;                                         // 0x0158(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       PivotSocketName;                                          // 0x0160(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Alpha;                                                    // 0x0168(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBoneReference                              SocketBoneReference;                                      // 0x0170(0x0018)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET
	struct FTransform                                  SocketLocalTransform;                                     // 0x0190(0x0030) (CPF_IsPlainOldData)
	struct FBoneReference                              PivotSocketBoneReference;                                 // 0x01C0(0x0018)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01D8(0x0008) MISSED OFFSET
	struct FTransform                                  PivotSocketLocalTransform;                                // 0x01E0(0x0030) (CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// 0x0048 (0x0078 - 0x0030)
struct FAnimNode_ApplyAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FPoseLink                                   Additive;                                                 // 0x0048(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Alpha;                                                    // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0064(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	int                                                LODThreshold;                                             // 0x006C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ActualAlpha;                                              // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// 0x0098 (0x00C8 - 0x0030)
struct FAnimNode_BlendListBase : public FAnimNode_Base
{
	TArray<struct FPoseLink>                           BlendPose;                                                // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<float>                                      BlendTime;                                                // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_EditFixedSize, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0050(0x0001) UNKNOWN PROPERTY: EnumProperty AnimGraphRuntime.AnimNode_BlendListBase.BlendType
	class UCurveFloat*                                 CustomBlendCurve;                                         // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendProfile*                               BlendProfile;                                             // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FAlphaBlend>                         Blends;                                                   // 0x0068(0x0010) (CPF_ZeroConstructor)
	TArray<float>                                      BlendWeights;                                             // 0x0078(0x0010) (CPF_ZeroConstructor)
	TArray<float>                                      RemainingBlendTimes;                                      // 0x0088(0x0010) (CPF_ZeroConstructor)
	int                                                LastActiveChildIndex;                                     // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FBlendSampleData>                    PerBoneSampleData;                                        // 0x00A0(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET
	unsigned char                                      bResetChildOnActivation : 1;                              // 0x00C0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// 0x0008 (0x00D0 - 0x00C8)
struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{
	unsigned char                                      bActiveValue : 1;                                         // 0x00C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// 0x0018 (0x00E0 - 0x00C8)
struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{
	TArray<int>                                        EnumToPoseIndex;                                          // 0x00C8(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      ActiveEnumValue;                                          // 0x00D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// 0x0008 (0x00D0 - 0x00C8)
struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{
	int                                                ActiveChildIndex;                                         // 0x00C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// 0x0008 (0x0130 - 0x0128)
struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{
	float                                              NormalizedTime;                                           // 0x0128(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// 0x0060 (0x0090 - 0x0030)
struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{
	class USkeletalMeshComponent*                      SourceMeshComponent;                                      // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
// 0x0038 (0x0068 - 0x0030)
struct FAnimNode_CurveSource : public FAnimNode_Base
{
	struct FPoseLink                                   SourcePose;                                               // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       SourceBinding;                                            // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Alpha;                                                    // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class UCurveSourceInterface>      CurveSource;                                              // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// 0x00B0 (0x00E0 - 0x0030)
struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                 // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FPoseLink>                           BlendPoses;                                               // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<struct FInputBlendPose>                     LayerSetup;                                               // 0x0058(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<float>                                      BlendWeights;                                             // 0x0068(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_EditFixedSize, CPF_ZeroConstructor)
	unsigned char                                      bMeshSpaceRotationBlend : 1;                              // 0x0078(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECurveBlendOption>                     CurveBlendOption;                                         // 0x0079(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bBlendRootMotionBasedOnRootBone : 1;                      // 0x007A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHasRelevantPoses : 1;                                    // 0x007B(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<struct FPerBoneBlendWeight>                 PerBoneBlendWeights;                                      // 0x0080(0x0010) (CPF_ZeroConstructor)
	struct FGuid                                       SkeletonGuid;                                             // 0x0090(0x0010) (CPF_IsPlainOldData)
	struct FGuid                                       VirtualBoneGuid;                                          // 0x00A0(0x0010) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x00B0(0x0030) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
// 0x0048 (0x0078 - 0x0030)
struct FAnimNode_ModifyCurve : public FAnimNode_Base
{
	struct FPoseLink                                   SourcePose;                                               // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_EditFixedSize)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0048(0x0001) UNKNOWN PROPERTY: EnumProperty AnimGraphRuntime.AnimNode_ModifyCurve.ApplyMode
	TArray<float>                                      CurveValues;                                              // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<struct FName>                               CurveNames;                                               // 0x0060(0x0010) (CPF_ZeroConstructor)
	float                                              Alpha;                                                    // 0x0070(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
// 0x0040 (0x0070 - 0x0030)
struct FAnimNode_MultiWayBlend : public FAnimNode_Base
{
	TArray<struct FPoseLink>                           Poses;                                                    // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<float>                                      DesiredAlphas;                                            // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      bAdditiveNode : 1;                                        // 0x0050(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bNormalizeAlpha : 1;                                      // 0x0051(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0054(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x14];                                      // 0x005C(0x0014) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// 0x0048 (0x00A0 - 0x0058)
struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{
	class UPoseAsset*                                  PoseAsset;                                                // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0060(0x0040) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// 0x0028 (0x00C8 - 0x00A0)
struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{
	struct FPoseLink                                   SourcePose;                                               // 0x00A0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_EditFixedSize)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00B8(0x0001) UNKNOWN PROPERTY: EnumProperty AnimGraphRuntime.AnimNode_PoseBlendNode.BlendOption
	class UCurveFloat*                                 CustomCurve;                                              // 0x00C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// 0x0010 (0x00B0 - 0x00A0)
struct FAnimNode_PoseByName : public FAnimNode_PoseHandler
{
	struct FName                                       PoseName;                                                 // 0x00A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PoseWeight;                                               // 0x00A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.RBFParams
// 0x0010
struct FRBFParams
{
	int                                                TargetDimensions;                                         // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0008(0x0001) UNKNOWN PROPERTY: EnumProperty AnimGraphRuntime.RBFParams.Function
	unsigned char                                      UnknownData01[0x1];                                       // 0x0009(0x0001) UNKNOWN PROPERTY: EnumProperty AnimGraphRuntime.RBFParams.DistanceMethod
	TEnumAsByte<EBoneAxis>                             TwistAxis;                                                // 0x000A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WeightThreshold;                                          // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.RBFEntry
// 0x0010
struct FRBFEntry
{
	TArray<float>                                      Values;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct AnimGraphRuntime.RBFTarget
// 0x0078 (0x0088 - 0x0010)
struct FRBFTarget : public FRBFEntry
{
	float                                              ScaleFactor;                                              // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bApplyCustomCurve : 1;                                    // 0x0014(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRichCurve                                  CustomCurve;                                              // 0x0018(0x0070) (CPF_Edit)
};

// ScriptStruct AnimGraphRuntime.PoseDriverTransform
// 0x0018
struct FPoseDriverTransform
{
	class Vector3D                                     TargetTranslation;                                        // 0x0000(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	class Rotator                                      TargetRotation;                                           // 0x000C(0x000C) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.PoseDriverTarget
// 0x00A8
struct FPoseDriverTarget
{
	TArray<struct FPoseDriverTransform>                BoneTransforms;                                           // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class Rotator                                      TargetRotation;                                           // 0x0010(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              TargetScale;                                              // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bApplyCustomCurve : 1;                                    // 0x0020(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRichCurve                                  CustomCurve;                                              // 0x0028(0x0070) (CPF_Edit)
	struct FName                                       DrivenName;                                               // 0x0098(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// 0x00D8 (0x0178 - 0x00A0)
struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler
{
	struct FPoseLink                                   SourcePose;                                               // 0x00A0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_EditFixedSize)
	TArray<struct FBoneReference>                      SourceBones;                                              // 0x00B8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      bOnlyDriveSelectedBones : 1;                              // 0x00C8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FBoneReference>                      OnlyDriveBones;                                           // 0x00D0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FBoneReference                              EvalSpaceBone;                                            // 0x00E0(0x0018) (CPF_Edit)
	struct FRBFParams                                  RBFParams;                                                // 0x00F8(0x0010) (CPF_Edit)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0108(0x0001) UNKNOWN PROPERTY: EnumProperty AnimGraphRuntime.AnimNode_PoseDriver.DriveSource
	unsigned char                                      UnknownData01[0x1];                                       // 0x0109(0x0001) UNKNOWN PROPERTY: EnumProperty AnimGraphRuntime.AnimNode_PoseDriver.DriveOutput
	TArray<struct FPoseDriverTarget>                   PoseTargets;                                              // 0x0110(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FBoneReference                              SourceBone;                                               // 0x0120(0x0018) (CPF_Deprecated)
	TEnumAsByte<EBoneAxis>                             TwistAxis;                                                // 0x0138(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0139(0x0001) UNKNOWN PROPERTY: EnumProperty AnimGraphRuntime.AnimNode_PoseDriver.Type
	float                                              RadialScaling;                                            // 0x013C(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x38];                                      // 0x0140(0x0038) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
// 0x0080 (0x00B0 - 0x0030)
struct FAnimNode_PoseSnapshot : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0030(0x0001) UNKNOWN PROPERTY: EnumProperty AnimGraphRuntime.AnimNode_PoseSnapshot.Mode
	struct FName                                       SnapshotName;                                             // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FPoseSnapshot                               Snapshot;                                                 // 0x0040(0x0038) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0078(0x0038) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
// 0x0058
struct FRandomPlayerSequenceEntry
{
	class UAnimSequence*                               Sequence;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ChanceToPlay;                                             // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinLoopCount;                                             // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxLoopCount;                                             // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinPlayRate;                                              // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxPlayRate;                                              // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FAlphaBlend                                 BlendIn;                                                  // 0x0020(0x0038) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// 0x0060 (0x0090 - 0x0030)
struct FAnimNode_RandomPlayer : public FAnimNode_Base
{
	unsigned char                                      bShuffleMode : 1;                                         // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FRandomPlayerSequenceEntry>          Entries;                                                  // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0048(0x0048) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// 0x0000 (0x0030 - 0x0030)
struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// 0x0008 (0x0038 - 0x0030)
struct FAnimNode_RefPose : public FAnimNode_Base
{
	TEnumAsByte<ERefPoseType>                          RefPoseType;                                              // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Root
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_Root : public FAnimNode_Base
{
	struct FPoseLink                                   Result;                                                   // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// 0x0030 (0x0060 - 0x0030)
struct FAnimNode_RotateRootBone : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                 // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Pitch;                                                    // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Yaw;                                                      // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      MeshToComponent;                                          // 0x0050(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// 0x0020 (0x0148 - 0x0128)
struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{
	struct FPoseLink                                   BasePose;                                                 // 0x0128(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	int                                                LODThreshold;                                             // 0x0140(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsLODEnabled : 1;                                        // 0x0144(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// 0x0018 (0x0070 - 0x0058)
struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
{
	class UAnimSequenceBase*                           Sequence;                                                 // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExplicitTime;                                             // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShouldLoop : 1;                                          // 0x0064(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bTeleportToExplicitTime : 1;                              // 0x0065(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartPosition;                                            // 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ESequenceEvalReinit>                   ReinitializationBehavior;                                 // 0x006C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bReinitialized : 1;                                       // 0x006D(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Slot
// 0x0030 (0x0060 - 0x0030)
struct FAnimNode_Slot : public FAnimNode_Base
{
	struct FPoseLink                                   Source;                                                   // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       SlotName;                                                 // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
// 0x0048 (0x0078 - 0x0030)
struct FAnimNode_TwoWayBlend : public FAnimNode_Base
{
	struct FPoseLink                                   A;                                                        // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FPoseLink                                   B;                                                        // 0x0048(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Alpha;                                                    // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0064(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	float                                              InternalBlendAlpha;                                       // 0x006C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bAIsRelevant : 1;                                         // 0x0070(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bBIsRelevant : 1;                                         // 0x0071(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bResetChildOnActivation : 1;                              // 0x0072(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
// 0x01A0 (0x0660 - 0x04C0)
struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x04C0(0x01A0) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// 0x0040 (0x0070 - 0x0030)
struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     ComponentPose;                                            // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Alpha;                                                    // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x004C(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	int                                                LODThreshold;                                             // 0x0054(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ActualAlpha;                                              // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x005C(0x0014) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
// 0x005C
struct FAnimPhysConstraintSetup
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty AnimGraphRuntime.AnimPhysConstraintSetup.LinearXLimitType
	unsigned char                                      UnknownData01[0x1];                                       // 0x0001(0x0001) UNKNOWN PROPERTY: EnumProperty AnimGraphRuntime.AnimPhysConstraintSetup.LinearYLimitType
	unsigned char                                      UnknownData02[0x1];                                       // 0x0002(0x0001) UNKNOWN PROPERTY: EnumProperty AnimGraphRuntime.AnimPhysConstraintSetup.LinearZLimitType
	class Vector3D                                     LinearAxesMin;                                            // 0x0004(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	class Vector3D                                     LinearAxesMax;                                            // 0x0010(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x001C(0x0001) UNKNOWN PROPERTY: EnumProperty AnimGraphRuntime.AnimPhysConstraintSetup.AngularConstraintType
	unsigned char                                      UnknownData04[0x1];                                       // 0x001D(0x0001) UNKNOWN PROPERTY: EnumProperty AnimGraphRuntime.AnimPhysConstraintSetup.TwistAxis
	float                                              ConeAngle;                                                // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AngularXAngle;                                            // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              AngularYAngle;                                            // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              AngularZAngle;                                            // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	class Vector3D                                     AngularLimitsMin;                                         // 0x0030(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	class Vector3D                                     AngularLimitsMax;                                         // 0x003C(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x0048(0x0001) UNKNOWN PROPERTY: EnumProperty AnimGraphRuntime.AnimPhysConstraintSetup.AngularTargetAxis
	class Vector3D                                     AngularTarget;                                            // 0x004C(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      bLinearFullyLocked : 1;                                   // 0x0058(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
// 0x0050
struct FAnimPhysPlanarLimit
{
	struct FBoneReference                              DrivingBone;                                              // 0x0000(0x0018) (CPF_Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FTransform                                  PlaneTransform;                                           // 0x0020(0x0030) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
// 0x0030
struct FAnimPhysSphericalLimit
{
	struct FBoneReference                              DrivingBone;                                              // 0x0000(0x0018) (CPF_Edit)
	class Vector3D                                     SphereLocalOffset;                                        // 0x0018(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              LimitRadius;                                              // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0028(0x0001) UNKNOWN PROPERTY: EnumProperty AnimGraphRuntime.AnimPhysSphericalLimit.LimitType
};

// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// 0x0210 (0x0280 - 0x0070)
struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0070(0x0001) UNKNOWN PROPERTY: EnumProperty AnimGraphRuntime.AnimNode_AnimDynamics.SimulationSpace
	struct FBoneReference                              RelativeSpaceBone;                                        // 0x0078(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bChain : 1;                                               // 0x0090(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBoneReference                              BoundBone;                                                // 0x0098(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FBoneReference                              ChainEnd;                                                 // 0x00B0(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	class Vector3D                                     BoxExtents;                                               // 0x00C8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	class Vector3D                                     LocalJointOffset;                                         // 0x00D4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              GravityScale;                                             // 0x00E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLinearSpring : 1;                                        // 0x00E4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAngularSpring : 1;                                       // 0x00E5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LinearSpringConstant;                                     // 0x00E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AngularSpringConstant;                                    // 0x00EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnableWind : 1;                                          // 0x00F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bWindWasEnabled : 1;                                      // 0x00F1(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              WindScale;                                                // 0x00F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bOverrideLinearDamping : 1;                               // 0x00F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LinearDampingOverride;                                    // 0x00FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bOverrideAngularDamping : 1;                              // 0x0100(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AngularDampingOverride;                                   // 0x0104(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bOverrideAngularBias : 1;                                 // 0x0108(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AngularBiasOverride;                                      // 0x010C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDoUpdate : 1;                                            // 0x0110(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDoEval : 1;                                              // 0x0111(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumSolverIterationsPreUpdate;                             // 0x0114(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumSolverIterationsPostUpdate;                            // 0x0118(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FAnimPhysConstraintSetup                    ConstraintSetup;                                          // 0x011C(0x005C) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bUsePlanarLimit : 1;                                      // 0x0178(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FAnimPhysPlanarLimit>                PlanarLimits;                                             // 0x0180(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      bUseSphericalLimits : 1;                                  // 0x0190(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FAnimPhysSphericalLimit>             SphericalLimits;                                          // 0x0198(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x1];                                       // 0x01A8(0x0001) UNKNOWN PROPERTY: EnumProperty AnimGraphRuntime.AnimNode_AnimDynamics.CollisionType
	float                                              SphereCollisionRadius;                                    // 0x01AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     ExternalForce;                                            // 0x01B0(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xC4];                                      // 0x01BC(0x00C4) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// 0x0078 (0x00E8 - 0x0070)
struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               // 0x0070(0x0018) (CPF_Edit)
	TEnumAsByte<EComponentType>                        SourceComponent;                                          // 0x0088(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 DrivingCurve;                                             // 0x0090(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Multiplier;                                               // 0x0098(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseRange : 1;                                            // 0x009C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RangeMin;                                                 // 0x00A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RangeMax;                                                 // 0x00A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RemappedMin;                                              // 0x00A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RemappedMax;                                              // 0x00AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00B0(0x0001) UNKNOWN PROPERTY: EnumProperty AnimGraphRuntime.AnimNode_BoneDrivenController.DestinationMode
	struct FName                                       ParameterName;                                            // 0x00B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBoneReference                              TargetBone;                                               // 0x00C0(0x0018) (CPF_Edit)
	TEnumAsByte<EComponentType>                        TargetComponent;                                          // 0x00D8(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      bAffectTargetTranslationX : 1;                            // 0x00DC(0x0001) (CPF_Edit)
	unsigned char                                      bAffectTargetTranslationY : 1;                            // 0x00DC(0x0001) (CPF_Edit)
	unsigned char                                      bAffectTargetTranslationZ : 1;                            // 0x00DC(0x0001) (CPF_Edit)
	unsigned char                                      bAffectTargetRotationX : 1;                               // 0x00DC(0x0001) (CPF_Edit)
	unsigned char                                      bAffectTargetRotationY : 1;                               // 0x00DC(0x0001) (CPF_Edit)
	unsigned char                                      bAffectTargetRotationZ : 1;                               // 0x00DC(0x0001) (CPF_Edit)
	unsigned char                                      bAffectTargetScaleX : 1;                                  // 0x00DC(0x0001) (CPF_Edit)
	unsigned char                                      bAffectTargetScaleY : 1;                                  // 0x00DC(0x0001) (CPF_Edit)
	unsigned char                                      bAffectTargetScaleZ : 1;                                  // 0x00DD(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00DE(0x0001) UNKNOWN PROPERTY: EnumProperty AnimGraphRuntime.AnimNode_BoneDrivenController.ModificationMode
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// 0x0038 (0x00A8 - 0x0070)
struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               // 0x0070(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FBoneReference                              TargetBone;                                               // 0x0088(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bCopyTranslation : 1;                                     // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCopyRotation : 1;                                        // 0x00A1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCopyScale : 1;                                           // 0x00A2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     ControlSpace;                                             // 0x00A3(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// 0x0040 (0x00B0 - 0x0070)
struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               // 0x0070(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FBoneReference                              TargetBone;                                               // 0x0088(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bCopyTranslation : 1;                                     // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCopyRotation : 1;                                        // 0x00A1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCopyScale : 1;                                           // 0x00A2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00A3(0x0001) UNKNOWN PROPERTY: EnumProperty AnimGraphRuntime.AnimNode_CopyBoneDelta.CopyMode
	float                                              TranslationMultiplier;                                    // 0x00A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationMultiplier;                                       // 0x00A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScaleMultiplier;                                          // 0x00AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// 0x00A0 (0x0110 - 0x0070)
struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{
	struct FTransform                                  EffectorTransform;                                        // 0x0070(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     EffectorTransformSpace;                                   // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBoneReference                              EffectorTransformBone;                                    // 0x00A8(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<EBoneRotationSource>                   EffectorRotationSource;                                   // 0x00C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBoneReference                              TipBone;                                                  // 0x00C8(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FBoneReference                              RootBone;                                                 // 0x00E0(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Precision;                                                // 0x00F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxIterations;                                            // 0x00FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnableDebugDraw : 1;                                     // 0x0100(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0101(0x000F) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// 0x0078 (0x00E8 - 0x0070)
struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              RightHandFK;                                              // 0x0070(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FBoneReference                              LeftHandFK;                                               // 0x0088(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FBoneReference                              RightHandIK;                                              // 0x00A0(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FBoneReference                              LeftHandIK;                                               // 0x00B8(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FBoneReference>                      IKBonesToMove;                                            // 0x00D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              HandFKWeight;                                             // 0x00E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
// 0x0040
struct FAnimLegIKDefinition
{
	struct FBoneReference                              IKFootBone;                                               // 0x0000(0x0018) (CPF_Edit)
	struct FBoneReference                              FKFootBone;                                               // 0x0018(0x0018) (CPF_Edit)
	int                                                NumBonesInLimb;                                           // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAxis>                                 FootBoneForwardAxis;                                      // 0x0034(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnableRotationLimit : 1;                                 // 0x0035(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinRotationAngle;                                         // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnableKneeTwistCorrection : 1;                           // 0x003C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimLegIKData
// 0x0070
struct FAnimLegIKData
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
// 0x0028 (0x0098 - 0x0070)
struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
{
	float                                              ReachPrecision;                                           // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxIterations;                                            // 0x0074(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FAnimLegIKDefinition>                LegsDefinition;                                           // 0x0078(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FAnimLegIKData>                      LegsData;                                                 // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct AnimGraphRuntime.IKChain
// 0x0030
struct FIKChain
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.IKChainLink
// 0x001C
struct FIKChainLink
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// 0x0110 (0x0180 - 0x0070)
struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x0070(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FBoneReference                              LookAtBone;                                               // 0x0088(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       LookAtSocket;                                             // 0x00A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     LookAtLocation;                                           // 0x00A8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	TEnumAsByte<EAxisOption>                           LookAtAxis;                                               // 0x00B4(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	class Vector3D                                     CustomLookAtAxis;                                         // 0x00B8(0x000C) (CPF_Deprecated, CPF_IsPlainOldData)
	struct FAxis                                       LookAt_Axis;                                              // 0x00C4(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bUseLookUpAxis : 1;                                       // 0x00D4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAxisOption>                           LookUpAxis;                                               // 0x00D5(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	class Vector3D                                     CustomLookUpAxis;                                         // 0x00D8(0x000C) (CPF_Deprecated, CPF_IsPlainOldData)
	struct FAxis                                       LookUp_Axis;                                              // 0x00E4(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	float                                              LookAtClamp;                                              // 0x00F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EInterpolationBlend>                   InterpolationType;                                        // 0x00F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InterpolationTime;                                        // 0x00FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InterpolationTriggerThreashold;                           // 0x0100(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7C];                                      // 0x0104(0x007C) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// 0x0048 (0x00B8 - 0x0070)
struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x0070(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	class Vector3D                                     Translation;                                              // 0x0088(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	class Rotator                                      Rotation;                                                 // 0x0094(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	class Vector3D                                     Scale;                                                    // 0x00A0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 TranslationMode;                                          // 0x00AC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 RotationMode;                                             // 0x00AD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 ScaleMode;                                                // 0x00AE(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     TranslationSpace;                                         // 0x00AF(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     RotationSpace;                                            // 0x00B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     ScaleSpace;                                               // 0x00B1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// 0x0040 (0x00B0 - 0x0070)
struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToObserve;                                            // 0x0070(0x0018) (CPF_Edit)
	TEnumAsByte<EBoneControlSpace>                     DisplaySpace;                                             // 0x0088(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRelativeToRefPose : 1;                                   // 0x0089(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Translation;                                              // 0x008C(0x000C) (CPF_IsPlainOldData)
	class Rotator                                      Rotation;                                                 // 0x0098(0x000C) (CPF_IsPlainOldData)
	class Vector3D                                     Scale;                                                    // 0x00A4(0x000C) (CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// 0x0038 (0x00A8 - 0x0070)
struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              TargetBone;                                               // 0x0070(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FBoneReference                              SourceBone;                                               // 0x0088(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Multiplier;                                               // 0x00A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBoneAxis>                             RotationAxisToRefer;                                      // 0x00A4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsAdditive : 1;                                          // 0x00A5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
// 0x0080 (0x00B0 - 0x0030)
struct FAnimNode_ScaleChainLength : public FAnimNode_Base
{
	struct FPoseLink                                   InputPose;                                                // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	float                                              DefaultChainLength;                                       // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBoneReference                              ChainStartBone;                                           // 0x0050(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FBoneReference                              ChainEndBone;                                             // 0x0068(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	class Vector3D                                     TargetLocation;                                           // 0x0080(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              Alpha;                                                    // 0x008C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0090(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bBoneIndicesCached : 1;                                   // 0x0098(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0099(0x0017) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
// 0x0020
struct FSplineIKCachedBoneData
{
	struct FBoneReference                              Bone;                                                     // 0x0000(0x0018)
	int                                                RefSkeletonIndex;                                         // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
// 0x01A0 (0x0210 - 0x0070)
struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              StartBone;                                                // 0x0070(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FBoneReference                              EndBone;                                                  // 0x0088(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00A0(0x0001) UNKNOWN PROPERTY: EnumProperty AnimGraphRuntime.AnimNode_SplineIK.BoneAxis
	unsigned char                                      bAutoCalculateSpline : 1;                                 // 0x00A1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PointCount;                                               // 0x00A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FTransform>                          ControlPoints;                                            // 0x00A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_EditFixedSize, CPF_ZeroConstructor)
	float                                              Roll;                                                     // 0x00B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TwistStart;                                               // 0x00BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TwistEnd;                                                 // 0x00C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FAlphaBlend                                 TwistBlend;                                               // 0x00C8(0x0038) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Stretch;                                                  // 0x0100(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Offset;                                                   // 0x0104(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x70];                                      // 0x0108(0x0070) MISSED OFFSET
	struct FSplineCurves                               BoneSpline;                                               // 0x0178(0x0060)
	float                                              OriginalSplineLength;                                     // 0x01D8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FSplineIKCachedBoneData>             CachedBoneReferences;                                     // 0x01E0(0x0010) (CPF_ZeroConstructor)
	TArray<float>                                      CachedBoneLengths;                                        // 0x01F0(0x0010) (CPF_ZeroConstructor)
	TArray<struct FQuat>                               CachedOffsetRotations;                                    // 0x0200(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// 0x0068 (0x00D8 - 0x0070)
struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SpringBone;                                               // 0x0070(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bLimitDisplacement : 1;                                   // 0x0088(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxDisplacement;                                          // 0x008C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpringStiffness;                                          // 0x0090(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpringDamping;                                            // 0x0094(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ErrorResetThresh;                                         // 0x0098(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bNoZSpring : 1;                                           // 0x009C(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      bTranslateX : 1;                                          // 0x009D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bTranslateY : 1;                                          // 0x009E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bTranslateZ : 1;                                          // 0x009F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRotateX : 1;                                             // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRotateY : 1;                                             // 0x00A1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRotateZ : 1;                                             // 0x00A2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x35];                                      // 0x00A3(0x0035) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// 0x0140 (0x01B0 - 0x0070)
struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              TrailBone;                                                // 0x0070(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	int                                                ChainLength;                                              // 0x0088(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAxis>                                 ChainBoneAxis;                                            // 0x008C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bInvertChainBoneAxis : 1;                                 // 0x008D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TrailRelaxation;                                          // 0x0090(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FRuntimeFloatCurve                          TrailRelaxationSpeed;                                     // 0x0098(0x0078) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bLimitStretch : 1;                                        // 0x0110(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StretchLimit;                                             // 0x0114(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     FakeVelocity;                                             // 0x0118(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      bActorSpaceFakeVel : 1;                                   // 0x0124(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBoneReference                              BaseJoint;                                                // 0x0128(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0140(0x0070) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
// 0x0028
struct FReferenceBoneFrame
{
	struct FBoneReference                              Bone;                                                     // 0x0000(0x0018) (CPF_Edit)
	struct FAxis                                       Axis;                                                     // 0x0018(0x0010) (CPF_Edit)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// 0x0088 (0x00F8 - 0x0070)
struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{
	struct FReferenceBoneFrame                         BaseFrame;                                                // 0x0070(0x0028) (CPF_Edit)
	struct FReferenceBoneFrame                         TwistFrame;                                               // 0x0098(0x0028) (CPF_Edit)
	struct FAxis                                       TwistPlaneNormalAxis;                                     // 0x00C0(0x0010) (CPF_Edit)
	float                                              RangeMax;                                                 // 0x00D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RemappedMin;                                              // 0x00D4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RemappedMax;                                              // 0x00D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FAnimCurveParam                             Curve;                                                    // 0x00E0(0x0010) (CPF_Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// 0x0058 (0x00C8 - 0x0070)
struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              IKBone;                                                   // 0x0070(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	class Vector3D                                     EffectorLocation;                                         // 0x0088(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	class Vector3D                                     JointTargetLocation;                                      // 0x0094(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FName                                       EffectorSpaceBoneName;                                    // 0x00A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bTakeRotationFromEffectorSpace : 1;                       // 0x00A8(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bMaintainEffectorRelRot : 1;                              // 0x00A8(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bAllowStretching : 1;                                     // 0x00A8(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	class Vector2D                                     StretchLimits;                                            // 0x00AC(0x0008) (CPF_Deprecated, CPF_IsPlainOldData)
	float                                              StartStretchRatio;                                        // 0x00B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxStretchScale;                                          // 0x00B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     EffectorLocationSpace;                                    // 0x00BC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     JointTargetLocationSpace;                                 // 0x00BD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       JointTargetSpaceBoneName;                                 // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
