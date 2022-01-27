#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.Single,System.Object>
struct Dictionary_2_t28D6C5A32D32B52B1D79D88E28471D4EB8BDEC88;
// System.Collections.Generic.Dictionary`2<System.Single,UnityEngine.WaitForSeconds>
struct Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706;
// System.Collections.Generic.Dictionary`2<System.Single,UnityEngine.WaitForSecondsRealtime>
struct Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED;
// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE;
// DigitalSalmon.EventHandler`1<UnityEngine.Collider>
struct EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837;
// DigitalSalmon.EventHandler`1<System.Int32Enum>
struct EventHandler_1_t3658AA207E5B880CCB104CC54B4F25664F6B7D80;
// DigitalSalmon.EventHandler`1<System.Object>
struct EventHandler_1_tC385E366C81E9C40C76F061A6FB88075581A3BAB;
// DigitalSalmon.EventHandler`1<DigitalSalmon.Sequence/CancelledStatus>
struct EventHandler_1_t857EE8F997B0D1D571982AE33FD7D888E99FB3CC;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`2<UnityEngine.Collider,System.Boolean>
struct Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Collections.Generic.HashSet`1<System.Collections.IEnumerator>
struct HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.ICollection`1<System.Collections.IEnumerator>
struct ICollection_1_t2D9DA7D62617DF526D7073426EA1CDE114C0043E;
// System.Collections.Generic.IEqualityComparer`1<System.Collections.IEnumerator>
struct IEqualityComparer_1_t8EC872593C95676C0ADF0EFBA2FA534019446A2F;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.IEqualityComparer`1<System.Single>
struct IEqualityComparer_1_t6150250D280935445F98D4207E3F728AB0589158;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Single,UnityEngine.WaitForSeconds>
struct KeyCollection_t026DAA4DEB2F0ED0BE297D5103817DDD24AC65E1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Single,UnityEngine.WaitForSecondsRealtime>
struct KeyCollection_t5B805551B86E55B865D4B908E58F14582A11B5EF;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Object>
struct KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// DigitalSalmon.ProtectedSingleton`1<DigitalSalmon.GlobalSequence>
struct ProtectedSingleton_1_tF02527107305CE73183909D91FA01B5A51435355;
// DigitalSalmon.ProtectedSingleton`1<System.Object>
struct ProtectedSingleton_1_t459F59DA36286FF963A16A0692411D28D5965F17;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// System.Collections.Generic.Queue`1<DigitalSalmon.Sequence/QueuedAction>
struct Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Single,UnityEngine.WaitForSeconds>
struct ValueCollection_tB821A95A257C5466BBDF69CACE6BC842EE2E1685;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Single,UnityEngine.WaitForSecondsRealtime>
struct ValueCollection_tE210CFBEE13C44D47EA9B75422A37B8E4895EBA2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Object>
struct ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060;
// System.Collections.Generic.Dictionary`2/Entry<System.Single,UnityEngine.WaitForSeconds>[]
struct EntryU5BU5D_t6CAABCF103FA5BEE1BED80AC5E6E8F7F299C045F;
// System.Collections.Generic.Dictionary`2/Entry<System.Single,UnityEngine.WaitForSecondsRealtime>[]
struct EntryU5BU5D_t007C49D90C48BCF3609EC7956E9E37ECD0A8BCF2;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Object>[]
struct EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A;
// System.Collections.Generic.HashSet`1/Slot<System.Collections.IEnumerator>[]
struct SlotU5BU5D_tAD084898E65DAF6E8A25DE7D325C2B032627113A;
// System.Collections.Generic.HashSet`1/Slot<System.Object>[]
struct SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// DigitalSalmon.Sequence/QueuedAction[]
struct QueuedActionU5BU5D_t92E6EC76B08ED620FD03C088AFB8D36183F3DBDB;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// DigitalSalmon.AnimatedTransformPreview
struct AnimatedTransformPreview_tC83BEE154460B1FEB099401AC7806FFEADF5B8C6;
// UnityEngine.AnimationClip
struct AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// DigitalSalmon.BaseBehaviour
struct BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// DigitalSalmon.Billboard
struct Billboard_tE50EBED70F65C0D04F78F44B69BD222194206C45;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// DigitalSalmon.Fayte.ColliderBehaviour
struct ColliderBehaviour_t57531986DD4AF6CE6932F6730FCA26FAD8A10297;
// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// DigitalSalmon.Components
struct Components_t70C6642CD159E7A7F6475C89133D153D6FD46457;
// DigitalSalmon.ConstantRotation
struct ConstantRotation_t1C3E31FFA3473A421331C6EDBEF2D25DECC4E743;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// DigitalSalmon.EventHandler
struct EventHandler_t9372478C2C0A8EACAEEA5736BBC676C0DAC750E1;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// DigitalSalmon.FloatEventHandler
struct FloatEventHandler_t7AECF385828E1C26E6E4EBE3E51D22E95F3BD3A3;
// DigitalSalmon.ForcedShadowBias
struct ForcedShadowBias_tDEE25748FFC8AF42B4FA0D8CA313221B629C8B30;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// DigitalSalmon.GlobalSequence
struct GlobalSequence_t92F117568F74EF784CFDD426D3B06FD0AF3E8722;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Threading.Mutex
struct Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// DigitalSalmon.PrefabSingleton
struct PrefabSingleton_t10EE2A2982BD2A1991A28A73CC79B3661390B724;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// DigitalSalmon.Sequence
struct Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// DigitalSalmon.SinPosition
struct SinPosition_t659F26724C9093675506B556B31458EE6BF6E609;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// DigitalSalmon.Sequence/<AfterFramesCoroutine>d__36
struct U3CAfterFramesCoroutineU3Ed__36_tBD83F07B0B995468AC2610793966D87D27B4B3B6;
// DigitalSalmon.Sequence/<AfterWaitCoroutine>d__37
struct U3CAfterWaitCoroutineU3Ed__37_t2BDAA5BDA5F4A8B0F9AB9BE54D3155F6FBE5F9D5;
// DigitalSalmon.Sequence/<DoCoroutine>d__31
struct U3CDoCoroutineU3Ed__31_tE81E9E0DB55A03FAE08A05AE0DE6312216BF4B4B;
// DigitalSalmon.Sequence/<EachAfterWaitCoroutine>d__39
struct U3CEachAfterWaitCoroutineU3Ed__39_t6F70CB41A3911A942F6A6F590EE98CA137E116E8;
// DigitalSalmon.Sequence/<EachFrameCoroutine>d__38
struct U3CEachFrameCoroutineU3Ed__38_t272FADCBD79FDA8FE01938B645235E99E0D69791;
// DigitalSalmon.Sequence/<QueueCoroutine>d__32
struct U3CQueueCoroutineU3Ed__32_t7962A48B641243173CA1E0B037FD7510E8B2EDC9;
// DigitalSalmon.Sequence/<YieldCoroutineAndRemoveOnComplete>d__40
struct U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40_t1D55B22A8E0D2C6ED448B3CD7D3E2A041EE7767C;
// DigitalSalmon.Sequence/QueuedAction
struct QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666;
// DigitalSalmon.TextureUtilities/Scaling/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B;
// DigitalSalmon.TextureUtilities/Scaling/ScaleSettings
struct ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE;
// DigitalSalmon.TextureUtilities/Scaling/ThreadData
struct ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorUtilities_t487D68EDAAC238FDD2B4B3F21DE949CD75C3C244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t2D9DA7D62617DF526D7073426EA1CDE114C0043E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LinqExtensions_t7ED552D4D1887621651BBC9825FEE24A2C42DA05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Materials_t9D521DF8F29609271EF503A999A419A05504A3EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAfterFramesCoroutineU3Ed__36_tBD83F07B0B995468AC2610793966D87D27B4B3B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAfterWaitCoroutineU3Ed__37_t2BDAA5BDA5F4A8B0F9AB9BE54D3155F6FBE5F9D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDoCoroutineU3Ed__31_tE81E9E0DB55A03FAE08A05AE0DE6312216BF4B4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEachAfterWaitCoroutineU3Ed__39_t6F70CB41A3911A942F6A6F590EE98CA137E116E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEachFrameCoroutineU3Ed__38_t272FADCBD79FDA8FE01938B645235E99E0D69791_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CQueueCoroutineU3Ed__32_t7962A48B641243173CA1E0B037FD7510E8B2EDC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40_t1D55B22A8E0D2C6ED448B3CD7D3E2A041EE7767C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t4B055B73A4446BBF7998103E56616167484797CA____AEAB8CBF0F8D91747CD9D0B9512DF7A2F96DFAEA4D2FFEA89EF2654D47B721AF_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04E5ED47C85E5B29B7642E38377606724F5D0299;
IL2CPP_EXTERN_C String_t* _stringLiteral3B84CD2555DA2BA3EC3AB6F02075635F47001E22;
IL2CPP_EXTERN_C String_t* _stringLiteral51282E2AAC09AC6EDBC2C1C237C0183F97FEE379;
IL2CPP_EXTERN_C String_t* _stringLiteral890C5DA4DDD10267972A8686CFBA344E99DE784E;
IL2CPP_EXTERN_C String_t* _stringLiteralC84CB0F3694FE2EB26A9C6EFE977D259200530F0;
IL2CPP_EXTERN_C String_t* _stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseBehaviour_LocateComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m49281D8D1DF9D00C8B432113DE361AAF59A0C404_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseBehaviour_LocateComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mEE60CB0E27EADC3EAD6BB6F12C3E72AA2EBFC306_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseBehaviour_LocateComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mBDFDDDD72A654A812EEBF0FC07CE6DC2BE34FC3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseBehaviour_LocateComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m05F28C4F4E083FE2AB22C955405B0646F1A80525_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseBehaviour_LocateComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m5838E7B7BC903B068DD5693BD49411CB4CA7617E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseBehaviour_LocateComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m82770ADE1F2C44B5E5E00CA6E1F9341514EE539E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseBehaviour_LocateComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m5DA99315E8A897D4B44247935C9022C46F827399_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseBehaviour_LocateComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m3A7BC1C30AEEFB4B49C266900C077877CB9E7944_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseBehaviour_LocateComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m927C5DBBBCBC402CE3D070B5FDB9D4889619F3CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseBehaviour_LocateComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mB4597A7D5A1B9FADB5B7B6ADFF62AC5A3B6037EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseBehaviour_LocateComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m609EC327A886D56FA65D0F368E74CF67F9A93559_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m8149C300FED5E97C3A96B5C917230A7BDE51B98B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m8DC4CB47916ACDFDD5EAA1D5721C8F5183FA978B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m99062862FEE98206F053E41E6C6882126164CDC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m91DA06C3F9F01EE55EC97ADF02DFD54D6A542487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mA6BD87C09227CBB54FC5C8183A58BD306CF74121_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m9983D0130915B8182215B7C9B3D3A7D84FABB77F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m822521978FF340FF63888FEAD9D39F61BDAB86E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE80249A2B292C01BE6F1918B88417F0F2E4109EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mEA9AEC3D1E0DD8B5AC3FA4CBAB6B18FE81AD1C62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m4496A322B06369BF6E7D845A639DF2193AB1906F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m68CD187169BB1C72C3BB6F50FFCA3D3C633F12A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE3FC0A764716BE5F460A35515BE200CAC9F846F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m12C471E8A676412B48B13EF94BBA03369BA7A309_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7F663FE557E1C09EDB6B10A448B7D7E61FFAD03F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandlerExtensions_InvokeSafe_TisCancelledStatus_t36BB4F40883B65D4D8C27A81633266FD8156350C_mBB340AACB31EEF344147C6C5E8ABF2E463EFFB6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandlerExtensions_InvokeSafe_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mC2107D6746C798BEC85C75ACB353813EF9FA03B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_mADAFA7DAC444D5B3A69851F238A557D388D29678_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mAF3378D7D4C73EE2B1A687E01500A0A371C6509C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_m9B1954A25A5AD8CED217B8170A9E725EDF4CBC54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m3F42B6E02632F37902929A4F2F313C8BF463CCE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m53E0AF4A624E161114A459D7D81DB3BA878997AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_mACE52FFE184270C40991BE65351EE9D23B05CC9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProtectedSingleton_1_GetInstance_m390BB0F86549BAB8F31EE8A8324FAE9153BE8F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProtectedSingleton_1_OnInstanceCreated_m677E5049551304633179142629CF5823E4C2D153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProtectedSingleton_1__ctor_mE3B50849D3A09B6BFC5C8640C213A5D047FF65A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_m3847EEEB834C8A02908AAC62AAC5949D8FEF15CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mE335828E4881CDCC254C07E440FBAA3BC0423C8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mBD212FC75B5FA0543C7832B20A56B5B81ECAD697_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m30DEF5F6B75AC33198783B71D021607709A03156_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m275AD08D682AE39DC0DD7599659C49EAB4763D7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAfterFramesCoroutineU3Ed__36_System_Collections_IEnumerator_Reset_m3B82CC7452AA189EADDEEB3D1AF2CBAEBC5774B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAfterWaitCoroutineU3Ed__37_System_Collections_IEnumerator_Reset_m836F675B17E84034EE9B538C06A05CE6431A6C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDoCoroutineU3Ed__31_System_Collections_IEnumerator_Reset_mCEE1E44A8E33CA9687189BBC8417D6212B23E981_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEachAfterWaitCoroutineU3Ed__39_System_Collections_IEnumerator_Reset_m4FFBFCA683E879F4E6FE5C4743F2908A39CF9D00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEachFrameCoroutineU3Ed__38_System_Collections_IEnumerator_Reset_mFF5FB42382BFA633A6B216B3F9DFB7D54ABFAE96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CQueueCoroutineU3Ed__32_System_Collections_IEnumerator_Reset_m3DF106229C7F7EEF7F2464C2BDF949B1A46E66C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CThreadedScaleU3Eg__ActionU7C0_m45FA61DE3EBC48DC7941F76F4ED540A81E4F1E09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CThreadedScaleU3Eg__ScaleU7C1_mC4C02B2C5A097F9D2A1A6B9024DB2922F02E066C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40_System_Collections_IEnumerator_Reset_m986EF202F86291760B65DD06921FF222E6085E48_RuntimeMethod_var;
struct ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t17C7592637BFA9FFB2B44E215F701B2EC020AC6A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Single,UnityEngine.WaitForSeconds>
struct Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t6CAABCF103FA5BEE1BED80AC5E6E8F7F299C045F* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t026DAA4DEB2F0ED0BE297D5103817DDD24AC65E1 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB821A95A257C5466BBDF69CACE6BC842EE2E1685 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706, ___entries_1)); }
	inline EntryU5BU5D_t6CAABCF103FA5BEE1BED80AC5E6E8F7F299C045F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t6CAABCF103FA5BEE1BED80AC5E6E8F7F299C045F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t6CAABCF103FA5BEE1BED80AC5E6E8F7F299C045F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706, ___keys_7)); }
	inline KeyCollection_t026DAA4DEB2F0ED0BE297D5103817DDD24AC65E1 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t026DAA4DEB2F0ED0BE297D5103817DDD24AC65E1 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t026DAA4DEB2F0ED0BE297D5103817DDD24AC65E1 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706, ___values_8)); }
	inline ValueCollection_tB821A95A257C5466BBDF69CACE6BC842EE2E1685 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB821A95A257C5466BBDF69CACE6BC842EE2E1685 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB821A95A257C5466BBDF69CACE6BC842EE2E1685 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Single,UnityEngine.WaitForSecondsRealtime>
struct Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t007C49D90C48BCF3609EC7956E9E37ECD0A8BCF2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t5B805551B86E55B865D4B908E58F14582A11B5EF * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tE210CFBEE13C44D47EA9B75422A37B8E4895EBA2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED, ___entries_1)); }
	inline EntryU5BU5D_t007C49D90C48BCF3609EC7956E9E37ECD0A8BCF2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t007C49D90C48BCF3609EC7956E9E37ECD0A8BCF2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t007C49D90C48BCF3609EC7956E9E37ECD0A8BCF2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED, ___keys_7)); }
	inline KeyCollection_t5B805551B86E55B865D4B908E58F14582A11B5EF * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t5B805551B86E55B865D4B908E58F14582A11B5EF ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t5B805551B86E55B865D4B908E58F14582A11B5EF * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED, ___values_8)); }
	inline ValueCollection_tE210CFBEE13C44D47EA9B75422A37B8E4895EBA2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tE210CFBEE13C44D47EA9B75422A37B8E4895EBA2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tE210CFBEE13C44D47EA9B75422A37B8E4895EBA2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___entries_1)); }
	inline EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___keys_7)); }
	inline KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___values_8)); }
	inline ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.Collections.IEnumerator>
struct HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tAD084898E65DAF6E8A25DE7D325C2B032627113A* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C, ____slots_8)); }
	inline SlotU5BU5D_tAD084898E65DAF6E8A25DE7D325C2B032627113A* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tAD084898E65DAF6E8A25DE7D325C2B032627113A** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tAD084898E65DAF6E8A25DE7D325C2B032627113A* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____slots_8)); }
	inline SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<DigitalSalmon.Sequence/QueuedAction>
struct Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	QueuedActionU5BU5D_t92E6EC76B08ED620FD03C088AFB8D36183F3DBDB* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372, ____array_0)); }
	inline QueuedActionU5BU5D_t92E6EC76B08ED620FD03C088AFB8D36183F3DBDB* get__array_0() const { return ____array_0; }
	inline QueuedActionU5BU5D_t92E6EC76B08ED620FD03C088AFB8D36183F3DBDB** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(QueuedActionU5BU5D_t92E6EC76B08ED620FD03C088AFB8D36183F3DBDB* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// DigitalSalmon.Axis
struct Axis_tA9A286E7DEA31BF92D41830616BA0A84C0C7D9DE  : public RuntimeObject
{
public:

public:
};


// DigitalSalmon.Extensions.ColorExtensions
struct ColorExtensions_tA5C88466F4979C0C26460BD10479FAD34B0D42B6  : public RuntimeObject
{
public:

public:
};


// DigitalSalmon.ColorUtilities
struct ColorUtilities_t487D68EDAAC238FDD2B4B3F21DE949CD75C3C244  : public RuntimeObject
{
public:

public:
};

struct ColorUtilities_t487D68EDAAC238FDD2B4B3F21DE949CD75C3C244_StaticFields
{
public:
	// System.Char[] DigitalSalmon.ColorUtilities::TRIM_RGB_START
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___TRIM_RGB_START_0;

public:
	inline static int32_t get_offset_of_TRIM_RGB_START_0() { return static_cast<int32_t>(offsetof(ColorUtilities_t487D68EDAAC238FDD2B4B3F21DE949CD75C3C244_StaticFields, ___TRIM_RGB_START_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_TRIM_RGB_START_0() const { return ___TRIM_RGB_START_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_TRIM_RGB_START_0() { return &___TRIM_RGB_START_0; }
	inline void set_TRIM_RGB_START_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___TRIM_RGB_START_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TRIM_RGB_START_0), (void*)value);
	}
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// DigitalSalmon.Easing
struct Easing_tCE01FE3B6CEC9B6664E3D86185DCFDC3E45B90F0  : public RuntimeObject
{
public:

public:
};


// DigitalSalmon.EventHandlerExtensions
struct EventHandlerExtensions_tC5C886A5544F657F1EE38920D66C365734E83FE3  : public RuntimeObject
{
public:

public:
};


// DigitalSalmon.Extensions.FloatExtensions
struct FloatExtensions_t697BD78B25DC2A32C1B3BBA884C564AD989D47A6  : public RuntimeObject
{
public:

public:
};


// DigitalSalmon.Extensions.GraphicsExtensions
struct GraphicsExtensions_t78F7895DA95D8FE1AE89AB79821A3623F290E93C  : public RuntimeObject
{
public:

public:
};


// DigitalSalmon.Instantiator
struct Instantiator_t33AE6C38B5D887AFBC0617CCCE855066F8D5290C  : public RuntimeObject
{
public:

public:
};


// DigitalSalmon.Extensions.LinqExtensions
struct LinqExtensions_t7ED552D4D1887621651BBC9825FEE24A2C42DA05  : public RuntimeObject
{
public:

public:
};

struct LinqExtensions_t7ED552D4D1887621651BBC9825FEE24A2C42DA05_StaticFields
{
public:
	// System.Random DigitalSalmon.Extensions.LinqExtensions::shuffleRandom
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___shuffleRandom_0;
	// System.Random DigitalSalmon.Extensions.LinqExtensions::weightedElementRandom
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___weightedElementRandom_1;

public:
	inline static int32_t get_offset_of_shuffleRandom_0() { return static_cast<int32_t>(offsetof(LinqExtensions_t7ED552D4D1887621651BBC9825FEE24A2C42DA05_StaticFields, ___shuffleRandom_0)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_shuffleRandom_0() const { return ___shuffleRandom_0; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_shuffleRandom_0() { return &___shuffleRandom_0; }
	inline void set_shuffleRandom_0(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___shuffleRandom_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shuffleRandom_0), (void*)value);
	}

	inline static int32_t get_offset_of_weightedElementRandom_1() { return static_cast<int32_t>(offsetof(LinqExtensions_t7ED552D4D1887621651BBC9825FEE24A2C42DA05_StaticFields, ___weightedElementRandom_1)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_weightedElementRandom_1() const { return ___weightedElementRandom_1; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_weightedElementRandom_1() { return &___weightedElementRandom_1; }
	inline void set_weightedElementRandom_1(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___weightedElementRandom_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___weightedElementRandom_1), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// DigitalSalmon.MathUtilities
struct MathUtilities_t51FDA8E04ADF5DA1DC17DE9D71C32645AAB0CF5C  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// DigitalSalmon.Extensions.MonoExtensions
struct MonoExtensions_tD760B862B93DD3648E00607DEB4C533E0A7F1F63  : public RuntimeObject
{
public:

public:
};


// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___SeedArray_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_2), (void*)value);
	}
};


// DigitalSalmon.Resource
struct Resource_tAA3876846E9DF983DE8DC6A8B80146DC5BBB13A1  : public RuntimeObject
{
public:

public:
};


// DigitalSalmon.Sequence
struct Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C  : public RuntimeObject
{
public:
	// DigitalSalmon.EventHandler`1<DigitalSalmon.Sequence/CancelledStatus> DigitalSalmon.Sequence::Cancelled
	EventHandler_1_t857EE8F997B0D1D571982AE33FD7D888E99FB3CC * ___Cancelled_0;
	// UnityEngine.MonoBehaviour DigitalSalmon.Sequence::_monoBehaviour
	MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ____monoBehaviour_1;
	// System.Collections.Generic.HashSet`1<System.Collections.IEnumerator> DigitalSalmon.Sequence::coroutines
	HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C * ___coroutines_2;
	// System.Collections.Generic.Queue`1<DigitalSalmon.Sequence/QueuedAction> DigitalSalmon.Sequence::actionQueue
	Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372 * ___actionQueue_3;
	// System.Collections.IEnumerator DigitalSalmon.Sequence::actionQueueCoroutine
	RuntimeObject* ___actionQueueCoroutine_4;

public:
	inline static int32_t get_offset_of_Cancelled_0() { return static_cast<int32_t>(offsetof(Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C, ___Cancelled_0)); }
	inline EventHandler_1_t857EE8F997B0D1D571982AE33FD7D888E99FB3CC * get_Cancelled_0() const { return ___Cancelled_0; }
	inline EventHandler_1_t857EE8F997B0D1D571982AE33FD7D888E99FB3CC ** get_address_of_Cancelled_0() { return &___Cancelled_0; }
	inline void set_Cancelled_0(EventHandler_1_t857EE8F997B0D1D571982AE33FD7D888E99FB3CC * value)
	{
		___Cancelled_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Cancelled_0), (void*)value);
	}

	inline static int32_t get_offset_of__monoBehaviour_1() { return static_cast<int32_t>(offsetof(Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C, ____monoBehaviour_1)); }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * get__monoBehaviour_1() const { return ____monoBehaviour_1; }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** get_address_of__monoBehaviour_1() { return &____monoBehaviour_1; }
	inline void set__monoBehaviour_1(MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		____monoBehaviour_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____monoBehaviour_1), (void*)value);
	}

	inline static int32_t get_offset_of_coroutines_2() { return static_cast<int32_t>(offsetof(Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C, ___coroutines_2)); }
	inline HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C * get_coroutines_2() const { return ___coroutines_2; }
	inline HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C ** get_address_of_coroutines_2() { return &___coroutines_2; }
	inline void set_coroutines_2(HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C * value)
	{
		___coroutines_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coroutines_2), (void*)value);
	}

	inline static int32_t get_offset_of_actionQueue_3() { return static_cast<int32_t>(offsetof(Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C, ___actionQueue_3)); }
	inline Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372 * get_actionQueue_3() const { return ___actionQueue_3; }
	inline Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372 ** get_address_of_actionQueue_3() { return &___actionQueue_3; }
	inline void set_actionQueue_3(Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372 * value)
	{
		___actionQueue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionQueue_3), (void*)value);
	}

	inline static int32_t get_offset_of_actionQueueCoroutine_4() { return static_cast<int32_t>(offsetof(Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C, ___actionQueueCoroutine_4)); }
	inline RuntimeObject* get_actionQueueCoroutine_4() const { return ___actionQueueCoroutine_4; }
	inline RuntimeObject** get_address_of_actionQueueCoroutine_4() { return &___actionQueueCoroutine_4; }
	inline void set_actionQueueCoroutine_4(RuntimeObject* value)
	{
		___actionQueueCoroutine_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionQueueCoroutine_4), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// DigitalSalmon.Extensions.StringExtensions
struct StringExtensions_t241E15C69F5E0C89032BE1DC661406A9A3AE5778  : public RuntimeObject
{
public:

public:
};


// DigitalSalmon.UI.Style
struct Style_tD9031D94540B6AD7F7DD6B25843FE03C586DDDCC  : public RuntimeObject
{
public:

public:
};


// DigitalSalmon.TextureUtilities
struct TextureUtilities_tB59CC8A4CDA185249F92AA0F2AA78792F55E18DC  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// DigitalSalmon.Extensions.Vector2Extensions
struct Vector2Extensions_t11A54CF5C12D0A1126F1BA95AE10A5F0A2A27A67  : public RuntimeObject
{
public:

public:
};


// DigitalSalmon.Extensions.Vector3Extensions
struct Vector3Extensions_tB0C048882E8C64D7B37A62B69DDE3E9932AB271C  : public RuntimeObject
{
public:

public:
};


// DigitalSalmon.Wait
struct Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600  : public RuntimeObject
{
public:

public:
};

struct Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Single,UnityEngine.WaitForSeconds> DigitalSalmon.Wait::waitCache
	Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706 * ___waitCache_0;
	// System.Collections.Generic.Dictionary`2<System.Single,UnityEngine.WaitForSecondsRealtime> DigitalSalmon.Wait::waitRealtimeCache
	Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED * ___waitRealtimeCache_1;
	// UnityEngine.WaitForEndOfFrame DigitalSalmon.Wait::endOfFrame
	WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * ___endOfFrame_2;
	// UnityEngine.WaitForFixedUpdate DigitalSalmon.Wait::fixedUpdate
	WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * ___fixedUpdate_3;

public:
	inline static int32_t get_offset_of_waitCache_0() { return static_cast<int32_t>(offsetof(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_StaticFields, ___waitCache_0)); }
	inline Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706 * get_waitCache_0() const { return ___waitCache_0; }
	inline Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706 ** get_address_of_waitCache_0() { return &___waitCache_0; }
	inline void set_waitCache_0(Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706 * value)
	{
		___waitCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitCache_0), (void*)value);
	}

	inline static int32_t get_offset_of_waitRealtimeCache_1() { return static_cast<int32_t>(offsetof(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_StaticFields, ___waitRealtimeCache_1)); }
	inline Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED * get_waitRealtimeCache_1() const { return ___waitRealtimeCache_1; }
	inline Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED ** get_address_of_waitRealtimeCache_1() { return &___waitRealtimeCache_1; }
	inline void set_waitRealtimeCache_1(Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED * value)
	{
		___waitRealtimeCache_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitRealtimeCache_1), (void*)value);
	}

	inline static int32_t get_offset_of_endOfFrame_2() { return static_cast<int32_t>(offsetof(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_StaticFields, ___endOfFrame_2)); }
	inline WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * get_endOfFrame_2() const { return ___endOfFrame_2; }
	inline WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 ** get_address_of_endOfFrame_2() { return &___endOfFrame_2; }
	inline void set_endOfFrame_2(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * value)
	{
		___endOfFrame_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endOfFrame_2), (void*)value);
	}

	inline static int32_t get_offset_of_fixedUpdate_3() { return static_cast<int32_t>(offsetof(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_StaticFields, ___fixedUpdate_3)); }
	inline WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * get_fixedUpdate_3() const { return ___fixedUpdate_3; }
	inline WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 ** get_address_of_fixedUpdate_3() { return &___fixedUpdate_3; }
	inline void set_fixedUpdate_3(WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * value)
	{
		___fixedUpdate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fixedUpdate_3), (void*)value);
	}
};


// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// DigitalSalmon.Sequence/<AfterFramesCoroutine>d__36
struct U3CAfterFramesCoroutineU3Ed__36_tBD83F07B0B995468AC2610793966D87D27B4B3B6  : public RuntimeObject
{
public:
	// System.Int32 DigitalSalmon.Sequence/<AfterFramesCoroutine>d__36::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DigitalSalmon.Sequence/<AfterFramesCoroutine>d__36::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 DigitalSalmon.Sequence/<AfterFramesCoroutine>d__36::numFrames
	int32_t ___numFrames_2;
	// System.Action DigitalSalmon.Sequence/<AfterFramesCoroutine>d__36::action
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action_3;
	// System.Int32 DigitalSalmon.Sequence/<AfterFramesCoroutine>d__36::<frameCount>5__2
	int32_t ___U3CframeCountU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAfterFramesCoroutineU3Ed__36_tBD83F07B0B995468AC2610793966D87D27B4B3B6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAfterFramesCoroutineU3Ed__36_tBD83F07B0B995468AC2610793966D87D27B4B3B6, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_numFrames_2() { return static_cast<int32_t>(offsetof(U3CAfterFramesCoroutineU3Ed__36_tBD83F07B0B995468AC2610793966D87D27B4B3B6, ___numFrames_2)); }
	inline int32_t get_numFrames_2() const { return ___numFrames_2; }
	inline int32_t* get_address_of_numFrames_2() { return &___numFrames_2; }
	inline void set_numFrames_2(int32_t value)
	{
		___numFrames_2 = value;
	}

	inline static int32_t get_offset_of_action_3() { return static_cast<int32_t>(offsetof(U3CAfterFramesCoroutineU3Ed__36_tBD83F07B0B995468AC2610793966D87D27B4B3B6, ___action_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_action_3() const { return ___action_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_action_3() { return &___action_3; }
	inline void set_action_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___action_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CframeCountU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CAfterFramesCoroutineU3Ed__36_tBD83F07B0B995468AC2610793966D87D27B4B3B6, ___U3CframeCountU3E5__2_4)); }
	inline int32_t get_U3CframeCountU3E5__2_4() const { return ___U3CframeCountU3E5__2_4; }
	inline int32_t* get_address_of_U3CframeCountU3E5__2_4() { return &___U3CframeCountU3E5__2_4; }
	inline void set_U3CframeCountU3E5__2_4(int32_t value)
	{
		___U3CframeCountU3E5__2_4 = value;
	}
};


// DigitalSalmon.Sequence/<AfterWaitCoroutine>d__37
struct U3CAfterWaitCoroutineU3Ed__37_t2BDAA5BDA5F4A8B0F9AB9BE54D3155F6FBE5F9D5  : public RuntimeObject
{
public:
	// System.Int32 DigitalSalmon.Sequence/<AfterWaitCoroutine>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DigitalSalmon.Sequence/<AfterWaitCoroutine>d__37::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.YieldInstruction DigitalSalmon.Sequence/<AfterWaitCoroutine>d__37::wait
	YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF * ___wait_2;
	// System.Action DigitalSalmon.Sequence/<AfterWaitCoroutine>d__37::action
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAfterWaitCoroutineU3Ed__37_t2BDAA5BDA5F4A8B0F9AB9BE54D3155F6FBE5F9D5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAfterWaitCoroutineU3Ed__37_t2BDAA5BDA5F4A8B0F9AB9BE54D3155F6FBE5F9D5, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_wait_2() { return static_cast<int32_t>(offsetof(U3CAfterWaitCoroutineU3Ed__37_t2BDAA5BDA5F4A8B0F9AB9BE54D3155F6FBE5F9D5, ___wait_2)); }
	inline YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF * get_wait_2() const { return ___wait_2; }
	inline YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF ** get_address_of_wait_2() { return &___wait_2; }
	inline void set_wait_2(YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF * value)
	{
		___wait_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wait_2), (void*)value);
	}

	inline static int32_t get_offset_of_action_3() { return static_cast<int32_t>(offsetof(U3CAfterWaitCoroutineU3Ed__37_t2BDAA5BDA5F4A8B0F9AB9BE54D3155F6FBE5F9D5, ___action_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_action_3() const { return ___action_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_action_3() { return &___action_3; }
	inline void set_action_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___action_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_3), (void*)value);
	}
};


// DigitalSalmon.Sequence/<DoCoroutine>d__31
struct U3CDoCoroutineU3Ed__31_tE81E9E0DB55A03FAE08A05AE0DE6312216BF4B4B  : public RuntimeObject
{
public:
	// System.Int32 DigitalSalmon.Sequence/<DoCoroutine>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DigitalSalmon.Sequence/<DoCoroutine>d__31::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Boolean DigitalSalmon.Sequence/<DoCoroutine>d__31::isRealtime
	bool ___isRealtime_2;
	// System.Single DigitalSalmon.Sequence/<DoCoroutine>d__31::delay
	float ___delay_3;
	// System.Action DigitalSalmon.Sequence/<DoCoroutine>d__31::action
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDoCoroutineU3Ed__31_tE81E9E0DB55A03FAE08A05AE0DE6312216BF4B4B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDoCoroutineU3Ed__31_tE81E9E0DB55A03FAE08A05AE0DE6312216BF4B4B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_isRealtime_2() { return static_cast<int32_t>(offsetof(U3CDoCoroutineU3Ed__31_tE81E9E0DB55A03FAE08A05AE0DE6312216BF4B4B, ___isRealtime_2)); }
	inline bool get_isRealtime_2() const { return ___isRealtime_2; }
	inline bool* get_address_of_isRealtime_2() { return &___isRealtime_2; }
	inline void set_isRealtime_2(bool value)
	{
		___isRealtime_2 = value;
	}

	inline static int32_t get_offset_of_delay_3() { return static_cast<int32_t>(offsetof(U3CDoCoroutineU3Ed__31_tE81E9E0DB55A03FAE08A05AE0DE6312216BF4B4B, ___delay_3)); }
	inline float get_delay_3() const { return ___delay_3; }
	inline float* get_address_of_delay_3() { return &___delay_3; }
	inline void set_delay_3(float value)
	{
		___delay_3 = value;
	}

	inline static int32_t get_offset_of_action_4() { return static_cast<int32_t>(offsetof(U3CDoCoroutineU3Ed__31_tE81E9E0DB55A03FAE08A05AE0DE6312216BF4B4B, ___action_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_action_4() const { return ___action_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_action_4() { return &___action_4; }
	inline void set_action_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___action_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_4), (void*)value);
	}
};


// DigitalSalmon.Sequence/<EachAfterWaitCoroutine>d__39
struct U3CEachAfterWaitCoroutineU3Ed__39_t6F70CB41A3911A942F6A6F590EE98CA137E116E8  : public RuntimeObject
{
public:
	// System.Int32 DigitalSalmon.Sequence/<EachAfterWaitCoroutine>d__39::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DigitalSalmon.Sequence/<EachAfterWaitCoroutine>d__39::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.YieldInstruction DigitalSalmon.Sequence/<EachAfterWaitCoroutine>d__39::wait
	YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF * ___wait_2;
	// System.Func`1<System.Boolean> DigitalSalmon.Sequence/<EachAfterWaitCoroutine>d__39::func
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___func_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEachAfterWaitCoroutineU3Ed__39_t6F70CB41A3911A942F6A6F590EE98CA137E116E8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEachAfterWaitCoroutineU3Ed__39_t6F70CB41A3911A942F6A6F590EE98CA137E116E8, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_wait_2() { return static_cast<int32_t>(offsetof(U3CEachAfterWaitCoroutineU3Ed__39_t6F70CB41A3911A942F6A6F590EE98CA137E116E8, ___wait_2)); }
	inline YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF * get_wait_2() const { return ___wait_2; }
	inline YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF ** get_address_of_wait_2() { return &___wait_2; }
	inline void set_wait_2(YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF * value)
	{
		___wait_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wait_2), (void*)value);
	}

	inline static int32_t get_offset_of_func_3() { return static_cast<int32_t>(offsetof(U3CEachAfterWaitCoroutineU3Ed__39_t6F70CB41A3911A942F6A6F590EE98CA137E116E8, ___func_3)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_func_3() const { return ___func_3; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_func_3() { return &___func_3; }
	inline void set_func_3(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___func_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___func_3), (void*)value);
	}
};


// DigitalSalmon.Sequence/<EachFrameCoroutine>d__38
struct U3CEachFrameCoroutineU3Ed__38_t272FADCBD79FDA8FE01938B645235E99E0D69791  : public RuntimeObject
{
public:
	// System.Int32 DigitalSalmon.Sequence/<EachFrameCoroutine>d__38::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DigitalSalmon.Sequence/<EachFrameCoroutine>d__38::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Func`1<System.Boolean> DigitalSalmon.Sequence/<EachFrameCoroutine>d__38::func
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___func_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEachFrameCoroutineU3Ed__38_t272FADCBD79FDA8FE01938B645235E99E0D69791, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEachFrameCoroutineU3Ed__38_t272FADCBD79FDA8FE01938B645235E99E0D69791, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_func_2() { return static_cast<int32_t>(offsetof(U3CEachFrameCoroutineU3Ed__38_t272FADCBD79FDA8FE01938B645235E99E0D69791, ___func_2)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_func_2() const { return ___func_2; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_func_2() { return &___func_2; }
	inline void set_func_2(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___func_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___func_2), (void*)value);
	}
};


// DigitalSalmon.Sequence/<QueueCoroutine>d__32
struct U3CQueueCoroutineU3Ed__32_t7962A48B641243173CA1E0B037FD7510E8B2EDC9  : public RuntimeObject
{
public:
	// System.Int32 DigitalSalmon.Sequence/<QueueCoroutine>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DigitalSalmon.Sequence/<QueueCoroutine>d__32::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// DigitalSalmon.Sequence DigitalSalmon.Sequence/<QueueCoroutine>d__32::<>4__this
	Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * ___U3CU3E4__this_2;
	// DigitalSalmon.Sequence/QueuedAction DigitalSalmon.Sequence/<QueueCoroutine>d__32::<queuedAction>5__2
	QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666 * ___U3CqueuedActionU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CQueueCoroutineU3Ed__32_t7962A48B641243173CA1E0B037FD7510E8B2EDC9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CQueueCoroutineU3Ed__32_t7962A48B641243173CA1E0B037FD7510E8B2EDC9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CQueueCoroutineU3Ed__32_t7962A48B641243173CA1E0B037FD7510E8B2EDC9, ___U3CU3E4__this_2)); }
	inline Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CqueuedActionU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CQueueCoroutineU3Ed__32_t7962A48B641243173CA1E0B037FD7510E8B2EDC9, ___U3CqueuedActionU3E5__2_3)); }
	inline QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666 * get_U3CqueuedActionU3E5__2_3() const { return ___U3CqueuedActionU3E5__2_3; }
	inline QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666 ** get_address_of_U3CqueuedActionU3E5__2_3() { return &___U3CqueuedActionU3E5__2_3; }
	inline void set_U3CqueuedActionU3E5__2_3(QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666 * value)
	{
		___U3CqueuedActionU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CqueuedActionU3E5__2_3), (void*)value);
	}
};


// DigitalSalmon.Sequence/<YieldCoroutineAndRemoveOnComplete>d__40
struct U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40_t1D55B22A8E0D2C6ED448B3CD7D3E2A041EE7767C  : public RuntimeObject
{
public:
	// System.Int32 DigitalSalmon.Sequence/<YieldCoroutineAndRemoveOnComplete>d__40::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DigitalSalmon.Sequence/<YieldCoroutineAndRemoveOnComplete>d__40::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Collections.IEnumerator DigitalSalmon.Sequence/<YieldCoroutineAndRemoveOnComplete>d__40::coroutine
	RuntimeObject* ___coroutine_2;
	// System.Collections.Generic.ICollection`1<System.Collections.IEnumerator> DigitalSalmon.Sequence/<YieldCoroutineAndRemoveOnComplete>d__40::cache
	RuntimeObject* ___cache_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40_t1D55B22A8E0D2C6ED448B3CD7D3E2A041EE7767C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40_t1D55B22A8E0D2C6ED448B3CD7D3E2A041EE7767C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_coroutine_2() { return static_cast<int32_t>(offsetof(U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40_t1D55B22A8E0D2C6ED448B3CD7D3E2A041EE7767C, ___coroutine_2)); }
	inline RuntimeObject* get_coroutine_2() const { return ___coroutine_2; }
	inline RuntimeObject** get_address_of_coroutine_2() { return &___coroutine_2; }
	inline void set_coroutine_2(RuntimeObject* value)
	{
		___coroutine_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coroutine_2), (void*)value);
	}

	inline static int32_t get_offset_of_cache_3() { return static_cast<int32_t>(offsetof(U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40_t1D55B22A8E0D2C6ED448B3CD7D3E2A041EE7767C, ___cache_3)); }
	inline RuntimeObject* get_cache_3() const { return ___cache_3; }
	inline RuntimeObject** get_address_of_cache_3() { return &___cache_3; }
	inline void set_cache_3(RuntimeObject* value)
	{
		___cache_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cache_3), (void*)value);
	}
};


// DigitalSalmon.Sequence/QueuedAction
struct QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666  : public RuntimeObject
{
public:
	// System.Action DigitalSalmon.Sequence/QueuedAction::<Action>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CActionU3Ek__BackingField_0;
	// System.Single DigitalSalmon.Sequence/QueuedAction::<Delay>k__BackingField
	float ___U3CDelayU3Ek__BackingField_1;
	// System.Boolean DigitalSalmon.Sequence/QueuedAction::<IsRealtime>k__BackingField
	bool ___U3CIsRealtimeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CActionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666, ___U3CActionU3Ek__BackingField_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CActionU3Ek__BackingField_0() const { return ___U3CActionU3Ek__BackingField_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CActionU3Ek__BackingField_0() { return &___U3CActionU3Ek__BackingField_0; }
	inline void set_U3CActionU3Ek__BackingField_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CActionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDelayU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666, ___U3CDelayU3Ek__BackingField_1)); }
	inline float get_U3CDelayU3Ek__BackingField_1() const { return ___U3CDelayU3Ek__BackingField_1; }
	inline float* get_address_of_U3CDelayU3Ek__BackingField_1() { return &___U3CDelayU3Ek__BackingField_1; }
	inline void set_U3CDelayU3Ek__BackingField_1(float value)
	{
		___U3CDelayU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CIsRealtimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666, ___U3CIsRealtimeU3Ek__BackingField_2)); }
	inline bool get_U3CIsRealtimeU3Ek__BackingField_2() const { return ___U3CIsRealtimeU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsRealtimeU3Ek__BackingField_2() { return &___U3CIsRealtimeU3Ek__BackingField_2; }
	inline void set_U3CIsRealtimeU3Ek__BackingField_2(bool value)
	{
		___U3CIsRealtimeU3Ek__BackingField_2 = value;
	}
};


// DigitalSalmon.UI.Style/GUI
struct GUI_t9BED55FB0D423764AC1E7EBB01B026E5BB955B07  : public RuntimeObject
{
public:

public:
};


// DigitalSalmon.UI.Style/Materials
struct Materials_t9D521DF8F29609271EF503A999A419A05504A3EB  : public RuntimeObject
{
public:

public:
};

struct Materials_t9D521DF8F29609271EF503A999A419A05504A3EB_StaticFields
{
public:
	// UnityEngine.Material DigitalSalmon.UI.Style/Materials::box
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___box_0;

public:
	inline static int32_t get_offset_of_box_0() { return static_cast<int32_t>(offsetof(Materials_t9D521DF8F29609271EF503A999A419A05504A3EB_StaticFields, ___box_0)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_box_0() const { return ___box_0; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_box_0() { return &___box_0; }
	inline void set_box_0(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___box_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___box_0), (void*)value);
	}
};


// DigitalSalmon.TextureUtilities/Scaling
struct Scaling_tB5BC7A9EAE3CADE3308D66CD654FB724594D0DD3  : public RuntimeObject
{
public:

public:
};


// DigitalSalmon.TextureUtilities/Scaling/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B  : public RuntimeObject
{
public:
	// DigitalSalmon.TextureUtilities/Scaling/ScaleSettings DigitalSalmon.TextureUtilities/Scaling/<>c__DisplayClass6_0::settings
	ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * ___settings_0;

public:
	inline static int32_t get_offset_of_settings_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B, ___settings_0)); }
	inline ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * get_settings_0() const { return ___settings_0; }
	inline ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE ** get_address_of_settings_0() { return &___settings_0; }
	inline void set_settings_0(ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * value)
	{
		___settings_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settings_0), (void*)value);
	}
};


// DigitalSalmon.TextureUtilities/Scaling/ScaleSettings
struct ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE  : public RuntimeObject
{
public:
	// UnityEngine.Color[] DigitalSalmon.TextureUtilities/Scaling/ScaleSettings::TexColors
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___TexColors_0;
	// UnityEngine.Color[] DigitalSalmon.TextureUtilities/Scaling/ScaleSettings::NewColors
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___NewColors_1;
	// System.Int32 DigitalSalmon.TextureUtilities/Scaling/ScaleSettings::OldWidth
	int32_t ___OldWidth_2;
	// System.Single DigitalSalmon.TextureUtilities/Scaling/ScaleSettings::RatioX
	float ___RatioX_3;
	// System.Single DigitalSalmon.TextureUtilities/Scaling/ScaleSettings::RatioY
	float ___RatioY_4;
	// System.Int32 DigitalSalmon.TextureUtilities/Scaling/ScaleSettings::NewWidth
	int32_t ___NewWidth_5;
	// System.Int32 DigitalSalmon.TextureUtilities/Scaling/ScaleSettings::FinishCount
	int32_t ___FinishCount_6;
	// System.Threading.Mutex DigitalSalmon.TextureUtilities/Scaling/ScaleSettings::Mutex
	Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * ___Mutex_7;

public:
	inline static int32_t get_offset_of_TexColors_0() { return static_cast<int32_t>(offsetof(ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE, ___TexColors_0)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get_TexColors_0() const { return ___TexColors_0; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of_TexColors_0() { return &___TexColors_0; }
	inline void set_TexColors_0(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		___TexColors_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TexColors_0), (void*)value);
	}

	inline static int32_t get_offset_of_NewColors_1() { return static_cast<int32_t>(offsetof(ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE, ___NewColors_1)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get_NewColors_1() const { return ___NewColors_1; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of_NewColors_1() { return &___NewColors_1; }
	inline void set_NewColors_1(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		___NewColors_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NewColors_1), (void*)value);
	}

	inline static int32_t get_offset_of_OldWidth_2() { return static_cast<int32_t>(offsetof(ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE, ___OldWidth_2)); }
	inline int32_t get_OldWidth_2() const { return ___OldWidth_2; }
	inline int32_t* get_address_of_OldWidth_2() { return &___OldWidth_2; }
	inline void set_OldWidth_2(int32_t value)
	{
		___OldWidth_2 = value;
	}

	inline static int32_t get_offset_of_RatioX_3() { return static_cast<int32_t>(offsetof(ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE, ___RatioX_3)); }
	inline float get_RatioX_3() const { return ___RatioX_3; }
	inline float* get_address_of_RatioX_3() { return &___RatioX_3; }
	inline void set_RatioX_3(float value)
	{
		___RatioX_3 = value;
	}

	inline static int32_t get_offset_of_RatioY_4() { return static_cast<int32_t>(offsetof(ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE, ___RatioY_4)); }
	inline float get_RatioY_4() const { return ___RatioY_4; }
	inline float* get_address_of_RatioY_4() { return &___RatioY_4; }
	inline void set_RatioY_4(float value)
	{
		___RatioY_4 = value;
	}

	inline static int32_t get_offset_of_NewWidth_5() { return static_cast<int32_t>(offsetof(ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE, ___NewWidth_5)); }
	inline int32_t get_NewWidth_5() const { return ___NewWidth_5; }
	inline int32_t* get_address_of_NewWidth_5() { return &___NewWidth_5; }
	inline void set_NewWidth_5(int32_t value)
	{
		___NewWidth_5 = value;
	}

	inline static int32_t get_offset_of_FinishCount_6() { return static_cast<int32_t>(offsetof(ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE, ___FinishCount_6)); }
	inline int32_t get_FinishCount_6() const { return ___FinishCount_6; }
	inline int32_t* get_address_of_FinishCount_6() { return &___FinishCount_6; }
	inline void set_FinishCount_6(int32_t value)
	{
		___FinishCount_6 = value;
	}

	inline static int32_t get_offset_of_Mutex_7() { return static_cast<int32_t>(offsetof(ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE, ___Mutex_7)); }
	inline Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * get_Mutex_7() const { return ___Mutex_7; }
	inline Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 ** get_address_of_Mutex_7() { return &___Mutex_7; }
	inline void set_Mutex_7(Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * value)
	{
		___Mutex_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Mutex_7), (void*)value);
	}
};


// DigitalSalmon.TextureUtilities/Scaling/ThreadData
struct ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973  : public RuntimeObject
{
public:
	// System.Int32 DigitalSalmon.TextureUtilities/Scaling/ThreadData::End
	int32_t ___End_0;
	// System.Int32 DigitalSalmon.TextureUtilities/Scaling/ThreadData::Start
	int32_t ___Start_1;

public:
	inline static int32_t get_offset_of_End_0() { return static_cast<int32_t>(offsetof(ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973, ___End_0)); }
	inline int32_t get_End_0() const { return ___End_0; }
	inline int32_t* get_address_of_End_0() { return &___End_0; }
	inline void set_End_0(int32_t value)
	{
		___End_0 = value;
	}

	inline static int32_t get_offset_of_Start_1() { return static_cast<int32_t>(offsetof(ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973, ___Start_1)); }
	inline int32_t get_Start_1() const { return ___Start_1; }
	inline int32_t* get_address_of_Start_1() { return &___Start_1; }
	inline void set_Start_1(int32_t value)
	{
		___Start_1 = value;
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<System.Collections.IEnumerator>
struct Enumerator_tD5F7C39CF5561E43F347E3F042285D01F27D7E67 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_tD5F7C39CF5561E43F347E3F042285D01F27D7E67, ____set_0)); }
	inline HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C * get__set_0() const { return ____set_0; }
	inline HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_tD5F7C39CF5561E43F347E3F042285D01F27D7E67, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_tD5F7C39CF5561E43F347E3F042285D01F27D7E67, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_tD5F7C39CF5561E43F347E3F042285D01F27D7E67, ____current_3)); }
	inline RuntimeObject* get__current_3() const { return ____current_3; }
	inline RuntimeObject** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject* value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____set_0)); }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * get__set_0() const { return ____set_0; }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____current_3)); }
	inline RuntimeObject * get__current_3() const { return ____current_3; }
	inline RuntimeObject ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// DigitalSalmon.PrefabSingleton
struct PrefabSingleton_t10EE2A2982BD2A1991A28A73CC79B3661390B724  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String DigitalSalmon.PrefabSingleton::<ResourcePath>k__BackingField
	String_t* ___U3CResourcePathU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CResourcePathU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PrefabSingleton_t10EE2A2982BD2A1991A28A73CC79B3661390B724, ___U3CResourcePathU3Ek__BackingField_0)); }
	inline String_t* get_U3CResourcePathU3Ek__BackingField_0() const { return ___U3CResourcePathU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CResourcePathU3Ek__BackingField_0() { return &___U3CResourcePathU3Ek__BackingField_0; }
	inline void set_U3CResourcePathU3Ek__BackingField_0(String_t* value)
	{
		___U3CResourcePathU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResourcePathU3Ek__BackingField_0), (void*)value);
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___internal_thread_6)); }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2Int
struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;

public:
	inline static int32_t get_offset_of_U3CwaitTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___U3CwaitTimeU3Ek__BackingField_0)); }
	inline float get_U3CwaitTimeU3Ek__BackingField_0() const { return ___U3CwaitTimeU3Ek__BackingField_0; }
	inline float* get_address_of_U3CwaitTimeU3Ek__BackingField_0() { return &___U3CwaitTimeU3Ek__BackingField_0; }
	inline void set_U3CwaitTimeU3Ek__BackingField_0(float value)
	{
		___U3CwaitTimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_WaitUntilTime_1() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___m_WaitUntilTime_1)); }
	inline float get_m_WaitUntilTime_1() const { return ___m_WaitUntilTime_1; }
	inline float* get_address_of_m_WaitUntilTime_1() { return &___m_WaitUntilTime_1; }
	inline void set_m_WaitUntilTime_1(float value)
	{
		___m_WaitUntilTime_1 = value;
	}
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=18
struct __StaticArrayInitTypeSizeU3D18_tE19618FF5EEFA22C2566F041FD11F71C394DDF88 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D18_tE19618FF5EEFA22C2566F041FD11F71C394DDF88__padding[18];
	};

public:
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t4B055B73A4446BBF7998103E56616167484797CA  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t4B055B73A4446BBF7998103E56616167484797CA_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=18 <PrivateImplementationDetails>::AEAB8CBF0F8D91747CD9D0B9512DF7A2F96DFAEA4D2FFEA89EF2654D47B721AF
	__StaticArrayInitTypeSizeU3D18_tE19618FF5EEFA22C2566F041FD11F71C394DDF88  ___AEAB8CBF0F8D91747CD9D0B9512DF7A2F96DFAEA4D2FFEA89EF2654D47B721AF_0;

public:
	inline static int32_t get_offset_of_AEAB8CBF0F8D91747CD9D0B9512DF7A2F96DFAEA4D2FFEA89EF2654D47B721AF_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4B055B73A4446BBF7998103E56616167484797CA_StaticFields, ___AEAB8CBF0F8D91747CD9D0B9512DF7A2F96DFAEA4D2FFEA89EF2654D47B721AF_0)); }
	inline __StaticArrayInitTypeSizeU3D18_tE19618FF5EEFA22C2566F041FD11F71C394DDF88  get_AEAB8CBF0F8D91747CD9D0B9512DF7A2F96DFAEA4D2FFEA89EF2654D47B721AF_0() const { return ___AEAB8CBF0F8D91747CD9D0B9512DF7A2F96DFAEA4D2FFEA89EF2654D47B721AF_0; }
	inline __StaticArrayInitTypeSizeU3D18_tE19618FF5EEFA22C2566F041FD11F71C394DDF88 * get_address_of_AEAB8CBF0F8D91747CD9D0B9512DF7A2F96DFAEA4D2FFEA89EF2654D47B721AF_0() { return &___AEAB8CBF0F8D91747CD9D0B9512DF7A2F96DFAEA4D2FFEA89EF2654D47B721AF_0; }
	inline void set_AEAB8CBF0F8D91747CD9D0B9512DF7A2F96DFAEA4D2FFEA89EF2654D47B721AF_0(__StaticArrayInitTypeSizeU3D18_tE19618FF5EEFA22C2566F041FD11F71C394DDF88  value)
	{
		___AEAB8CBF0F8D91747CD9D0B9512DF7A2F96DFAEA4D2FFEA89EF2654D47B721AF_0 = value;
	}
};


// DigitalSalmon.Axis3D
struct Axis3D_t854F2228EC0A93C48B24A2D94FCE5BEF8212DA87 
{
public:
	// System.Int32 DigitalSalmon.Axis3D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Axis3D_t854F2228EC0A93C48B24A2D94FCE5BEF8212DA87, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_LegacyContacts_6;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Impulse_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_RelativeVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Rigidbody_2)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rigidbody_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Collider_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContactCount_4() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ContactCount_4)); }
	inline int32_t get_m_ContactCount_4() const { return ___m_ContactCount_4; }
	inline int32_t* get_address_of_m_ContactCount_4() { return &___m_ContactCount_4; }
	inline void set_m_ContactCount_4(int32_t value)
	{
		___m_ContactCount_4 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_5() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ReusedContacts_5)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_ReusedContacts_5() const { return ___m_ReusedContacts_5; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_ReusedContacts_5() { return &___m_ReusedContacts_5; }
	inline void set_m_ReusedContacts_5(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_ReusedContacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_6() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_LegacyContacts_6)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_LegacyContacts_6() const { return ___m_LegacyContacts_6; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_LegacyContacts_6() { return &___m_LegacyContacts_6; }
	inline void set_m_LegacyContacts_6(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_LegacyContacts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};

// DigitalSalmon.Colours
struct Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2  : public RuntimeObject
{
public:

public:
};

struct Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields
{
public:
	// UnityEngine.Color DigitalSalmon.Colours::<LOGO_POSITIVE>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CLOGO_POSITIVEU3Ek__BackingField_0;
	// UnityEngine.Color DigitalSalmon.Colours::<LOGO_NEGATIVE>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CLOGO_NEGATIVEU3Ek__BackingField_1;
	// UnityEngine.Color DigitalSalmon.Colours::<BACKGROUND_DARK>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CBACKGROUND_DARKU3Ek__BackingField_2;
	// UnityEngine.Color DigitalSalmon.Colours::<BLACK>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CBLACKU3Ek__BackingField_3;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY001>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY001U3Ek__BackingField_4;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY002>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY002U3Ek__BackingField_5;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY003>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY003U3Ek__BackingField_6;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY005>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY005U3Ek__BackingField_7;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY008>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY008U3Ek__BackingField_8;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY01>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY01U3Ek__BackingField_9;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY02>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY02U3Ek__BackingField_10;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY03>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY03U3Ek__BackingField_11;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY04>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY04U3Ek__BackingField_12;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY05>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY05U3Ek__BackingField_13;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY06>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY06U3Ek__BackingField_14;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY07>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY07U3Ek__BackingField_15;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY08>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY08U3Ek__BackingField_16;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY09>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY09U3Ek__BackingField_17;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY10>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY10U3Ek__BackingField_18;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY11>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY11U3Ek__BackingField_19;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY12>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY12U3Ek__BackingField_20;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY13>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY13U3Ek__BackingField_21;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY14>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY14U3Ek__BackingField_22;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY15>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY15U3Ek__BackingField_23;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY16>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY16U3Ek__BackingField_24;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY17>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY17U3Ek__BackingField_25;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY18>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY18U3Ek__BackingField_26;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY19>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY19U3Ek__BackingField_27;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY20>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY20U3Ek__BackingField_28;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY22>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY22U3Ek__BackingField_29;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY24>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY24U3Ek__BackingField_30;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY26>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY26U3Ek__BackingField_31;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY28>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY28U3Ek__BackingField_32;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY30>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY30U3Ek__BackingField_33;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY35>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY35U3Ek__BackingField_34;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY40>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY40U3Ek__BackingField_35;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY45>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY45U3Ek__BackingField_36;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY50>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY50U3Ek__BackingField_37;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY55>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY55U3Ek__BackingField_38;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY60>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY60U3Ek__BackingField_39;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY65>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY65U3Ek__BackingField_40;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY70>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY70U3Ek__BackingField_41;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY75>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY75U3Ek__BackingField_42;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY80>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY80U3Ek__BackingField_43;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY85>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY85U3Ek__BackingField_44;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY90>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY90U3Ek__BackingField_45;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY95>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY95U3Ek__BackingField_46;
	// UnityEngine.Color DigitalSalmon.Colours::<GREY98>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CGREY98U3Ek__BackingField_47;
	// UnityEngine.Color DigitalSalmon.Colours::<WHITE>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CWHITEU3Ek__BackingField_48;
	// UnityEngine.Color DigitalSalmon.Colours::<BLACK_01>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CBLACK_01U3Ek__BackingField_49;
	// UnityEngine.Color DigitalSalmon.Colours::<BLACK_02>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CBLACK_02U3Ek__BackingField_50;
	// UnityEngine.Color DigitalSalmon.Colours::<BLACK_05>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CBLACK_05U3Ek__BackingField_51;
	// UnityEngine.Color DigitalSalmon.Colours::<BLACK_08>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CBLACK_08U3Ek__BackingField_52;
	// UnityEngine.Color DigitalSalmon.Colours::<BLACK_10>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CBLACK_10U3Ek__BackingField_53;
	// UnityEngine.Color DigitalSalmon.Colours::<BLACK_20>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CBLACK_20U3Ek__BackingField_54;
	// UnityEngine.Color DigitalSalmon.Colours::<BLACK_30>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CBLACK_30U3Ek__BackingField_55;
	// UnityEngine.Color DigitalSalmon.Colours::<BLACK_40>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CBLACK_40U3Ek__BackingField_56;
	// UnityEngine.Color DigitalSalmon.Colours::<BLACK_50>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CBLACK_50U3Ek__BackingField_57;
	// UnityEngine.Color DigitalSalmon.Colours::<BLACK_60>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CBLACK_60U3Ek__BackingField_58;
	// UnityEngine.Color DigitalSalmon.Colours::<BLACK_70>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CBLACK_70U3Ek__BackingField_59;
	// UnityEngine.Color DigitalSalmon.Colours::<BLACK_80>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CBLACK_80U3Ek__BackingField_60;
	// UnityEngine.Color DigitalSalmon.Colours::<BLACK_90>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CBLACK_90U3Ek__BackingField_61;
	// UnityEngine.Color DigitalSalmon.Colours::<BLACK_95>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CBLACK_95U3Ek__BackingField_62;
	// UnityEngine.Color DigitalSalmon.Colours::<BLACK_98>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CBLACK_98U3Ek__BackingField_63;
	// UnityEngine.Color DigitalSalmon.Colours::<WHITE_01>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CWHITE_01U3Ek__BackingField_64;
	// UnityEngine.Color DigitalSalmon.Colours::<WHITE_02>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CWHITE_02U3Ek__BackingField_65;
	// UnityEngine.Color DigitalSalmon.Colours::<WHITE_05>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CWHITE_05U3Ek__BackingField_66;
	// UnityEngine.Color DigitalSalmon.Colours::<WHITE_08>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CWHITE_08U3Ek__BackingField_67;
	// UnityEngine.Color DigitalSalmon.Colours::<WHITE_10>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CWHITE_10U3Ek__BackingField_68;
	// UnityEngine.Color DigitalSalmon.Colours::<WHITE_20>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CWHITE_20U3Ek__BackingField_69;
	// UnityEngine.Color DigitalSalmon.Colours::<WHITE_30>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CWHITE_30U3Ek__BackingField_70;
	// UnityEngine.Color DigitalSalmon.Colours::<WHITE_40>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CWHITE_40U3Ek__BackingField_71;
	// UnityEngine.Color DigitalSalmon.Colours::<WHITE_50>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CWHITE_50U3Ek__BackingField_72;
	// UnityEngine.Color DigitalSalmon.Colours::<WHITE_60>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CWHITE_60U3Ek__BackingField_73;
	// UnityEngine.Color DigitalSalmon.Colours::<WHITE_70>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CWHITE_70U3Ek__BackingField_74;
	// UnityEngine.Color DigitalSalmon.Colours::<WHITE_80>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CWHITE_80U3Ek__BackingField_75;
	// UnityEngine.Color DigitalSalmon.Colours::<WHITE_90>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CWHITE_90U3Ek__BackingField_76;
	// UnityEngine.Color DigitalSalmon.Colours::<WHITE_95>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CWHITE_95U3Ek__BackingField_77;
	// UnityEngine.Color DigitalSalmon.Colours::<WHITE_98>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CWHITE_98U3Ek__BackingField_78;
	// UnityEngine.Color DigitalSalmon.Colours::BLUE
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___BLUE_79;
	// UnityEngine.Color DigitalSalmon.Colours::LIGHT_BLUE
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___LIGHT_BLUE_80;
	// UnityEngine.Color DigitalSalmon.Colours::TEAL
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___TEAL_81;
	// UnityEngine.Color DigitalSalmon.Colours::TURQUOISE
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___TURQUOISE_82;
	// UnityEngine.Color DigitalSalmon.Colours::GREEN
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___GREEN_83;
	// UnityEngine.Color DigitalSalmon.Colours::PINK
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___PINK_84;
	// UnityEngine.Color DigitalSalmon.Colours::PURPLE
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___PURPLE_85;
	// UnityEngine.Color DigitalSalmon.Colours::SALMON
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___SALMON_86;
	// UnityEngine.Color DigitalSalmon.Colours::RED
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___RED_87;
	// UnityEngine.Color DigitalSalmon.Colours::ORANGE
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___ORANGE_88;
	// UnityEngine.Color DigitalSalmon.Colours::YELLOW
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___YELLOW_89;
	// UnityEngine.Color DigitalSalmon.Colours::LIME
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___LIME_90;
	// UnityEngine.Color DigitalSalmon.Colours::BLUE_STRONG
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___BLUE_STRONG_91;
	// UnityEngine.Color DigitalSalmon.Colours::BLUE_DULL
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___BLUE_DULL_92;
	// UnityEngine.Color DigitalSalmon.Colours::<BLUE_VIBRANT>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CBLUE_VIBRANTU3Ek__BackingField_93;
	// UnityEngine.Color DigitalSalmon.Colours::ERROR
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___ERROR_94;

public:
	inline static int32_t get_offset_of_U3CLOGO_POSITIVEU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CLOGO_POSITIVEU3Ek__BackingField_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CLOGO_POSITIVEU3Ek__BackingField_0() const { return ___U3CLOGO_POSITIVEU3Ek__BackingField_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CLOGO_POSITIVEU3Ek__BackingField_0() { return &___U3CLOGO_POSITIVEU3Ek__BackingField_0; }
	inline void set_U3CLOGO_POSITIVEU3Ek__BackingField_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CLOGO_POSITIVEU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CLOGO_NEGATIVEU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CLOGO_NEGATIVEU3Ek__BackingField_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CLOGO_NEGATIVEU3Ek__BackingField_1() const { return ___U3CLOGO_NEGATIVEU3Ek__BackingField_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CLOGO_NEGATIVEU3Ek__BackingField_1() { return &___U3CLOGO_NEGATIVEU3Ek__BackingField_1; }
	inline void set_U3CLOGO_NEGATIVEU3Ek__BackingField_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CLOGO_NEGATIVEU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CBACKGROUND_DARKU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CBACKGROUND_DARKU3Ek__BackingField_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CBACKGROUND_DARKU3Ek__BackingField_2() const { return ___U3CBACKGROUND_DARKU3Ek__BackingField_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CBACKGROUND_DARKU3Ek__BackingField_2() { return &___U3CBACKGROUND_DARKU3Ek__BackingField_2; }
	inline void set_U3CBACKGROUND_DARKU3Ek__BackingField_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CBACKGROUND_DARKU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CBLACKU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CBLACKU3Ek__BackingField_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CBLACKU3Ek__BackingField_3() const { return ___U3CBLACKU3Ek__BackingField_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CBLACKU3Ek__BackingField_3() { return &___U3CBLACKU3Ek__BackingField_3; }
	inline void set_U3CBLACKU3Ek__BackingField_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CBLACKU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CGREY001U3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY001U3Ek__BackingField_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY001U3Ek__BackingField_4() const { return ___U3CGREY001U3Ek__BackingField_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY001U3Ek__BackingField_4() { return &___U3CGREY001U3Ek__BackingField_4; }
	inline void set_U3CGREY001U3Ek__BackingField_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY001U3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CGREY002U3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY002U3Ek__BackingField_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY002U3Ek__BackingField_5() const { return ___U3CGREY002U3Ek__BackingField_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY002U3Ek__BackingField_5() { return &___U3CGREY002U3Ek__BackingField_5; }
	inline void set_U3CGREY002U3Ek__BackingField_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY002U3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CGREY003U3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY003U3Ek__BackingField_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY003U3Ek__BackingField_6() const { return ___U3CGREY003U3Ek__BackingField_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY003U3Ek__BackingField_6() { return &___U3CGREY003U3Ek__BackingField_6; }
	inline void set_U3CGREY003U3Ek__BackingField_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY003U3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CGREY005U3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY005U3Ek__BackingField_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY005U3Ek__BackingField_7() const { return ___U3CGREY005U3Ek__BackingField_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY005U3Ek__BackingField_7() { return &___U3CGREY005U3Ek__BackingField_7; }
	inline void set_U3CGREY005U3Ek__BackingField_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY005U3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CGREY008U3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY008U3Ek__BackingField_8)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY008U3Ek__BackingField_8() const { return ___U3CGREY008U3Ek__BackingField_8; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY008U3Ek__BackingField_8() { return &___U3CGREY008U3Ek__BackingField_8; }
	inline void set_U3CGREY008U3Ek__BackingField_8(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY008U3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CGREY01U3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY01U3Ek__BackingField_9)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY01U3Ek__BackingField_9() const { return ___U3CGREY01U3Ek__BackingField_9; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY01U3Ek__BackingField_9() { return &___U3CGREY01U3Ek__BackingField_9; }
	inline void set_U3CGREY01U3Ek__BackingField_9(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY01U3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CGREY02U3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY02U3Ek__BackingField_10)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY02U3Ek__BackingField_10() const { return ___U3CGREY02U3Ek__BackingField_10; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY02U3Ek__BackingField_10() { return &___U3CGREY02U3Ek__BackingField_10; }
	inline void set_U3CGREY02U3Ek__BackingField_10(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY02U3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CGREY03U3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY03U3Ek__BackingField_11)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY03U3Ek__BackingField_11() const { return ___U3CGREY03U3Ek__BackingField_11; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY03U3Ek__BackingField_11() { return &___U3CGREY03U3Ek__BackingField_11; }
	inline void set_U3CGREY03U3Ek__BackingField_11(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY03U3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CGREY04U3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY04U3Ek__BackingField_12)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY04U3Ek__BackingField_12() const { return ___U3CGREY04U3Ek__BackingField_12; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY04U3Ek__BackingField_12() { return &___U3CGREY04U3Ek__BackingField_12; }
	inline void set_U3CGREY04U3Ek__BackingField_12(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY04U3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CGREY05U3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY05U3Ek__BackingField_13)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY05U3Ek__BackingField_13() const { return ___U3CGREY05U3Ek__BackingField_13; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY05U3Ek__BackingField_13() { return &___U3CGREY05U3Ek__BackingField_13; }
	inline void set_U3CGREY05U3Ek__BackingField_13(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY05U3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CGREY06U3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY06U3Ek__BackingField_14)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY06U3Ek__BackingField_14() const { return ___U3CGREY06U3Ek__BackingField_14; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY06U3Ek__BackingField_14() { return &___U3CGREY06U3Ek__BackingField_14; }
	inline void set_U3CGREY06U3Ek__BackingField_14(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY06U3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CGREY07U3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY07U3Ek__BackingField_15)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY07U3Ek__BackingField_15() const { return ___U3CGREY07U3Ek__BackingField_15; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY07U3Ek__BackingField_15() { return &___U3CGREY07U3Ek__BackingField_15; }
	inline void set_U3CGREY07U3Ek__BackingField_15(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY07U3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CGREY08U3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY08U3Ek__BackingField_16)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY08U3Ek__BackingField_16() const { return ___U3CGREY08U3Ek__BackingField_16; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY08U3Ek__BackingField_16() { return &___U3CGREY08U3Ek__BackingField_16; }
	inline void set_U3CGREY08U3Ek__BackingField_16(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY08U3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CGREY09U3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY09U3Ek__BackingField_17)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY09U3Ek__BackingField_17() const { return ___U3CGREY09U3Ek__BackingField_17; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY09U3Ek__BackingField_17() { return &___U3CGREY09U3Ek__BackingField_17; }
	inline void set_U3CGREY09U3Ek__BackingField_17(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY09U3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CGREY10U3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY10U3Ek__BackingField_18)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY10U3Ek__BackingField_18() const { return ___U3CGREY10U3Ek__BackingField_18; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY10U3Ek__BackingField_18() { return &___U3CGREY10U3Ek__BackingField_18; }
	inline void set_U3CGREY10U3Ek__BackingField_18(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY10U3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CGREY11U3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY11U3Ek__BackingField_19)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY11U3Ek__BackingField_19() const { return ___U3CGREY11U3Ek__BackingField_19; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY11U3Ek__BackingField_19() { return &___U3CGREY11U3Ek__BackingField_19; }
	inline void set_U3CGREY11U3Ek__BackingField_19(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY11U3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CGREY12U3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY12U3Ek__BackingField_20)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY12U3Ek__BackingField_20() const { return ___U3CGREY12U3Ek__BackingField_20; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY12U3Ek__BackingField_20() { return &___U3CGREY12U3Ek__BackingField_20; }
	inline void set_U3CGREY12U3Ek__BackingField_20(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY12U3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CGREY13U3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY13U3Ek__BackingField_21)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY13U3Ek__BackingField_21() const { return ___U3CGREY13U3Ek__BackingField_21; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY13U3Ek__BackingField_21() { return &___U3CGREY13U3Ek__BackingField_21; }
	inline void set_U3CGREY13U3Ek__BackingField_21(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY13U3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CGREY14U3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY14U3Ek__BackingField_22)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY14U3Ek__BackingField_22() const { return ___U3CGREY14U3Ek__BackingField_22; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY14U3Ek__BackingField_22() { return &___U3CGREY14U3Ek__BackingField_22; }
	inline void set_U3CGREY14U3Ek__BackingField_22(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY14U3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CGREY15U3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY15U3Ek__BackingField_23)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY15U3Ek__BackingField_23() const { return ___U3CGREY15U3Ek__BackingField_23; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY15U3Ek__BackingField_23() { return &___U3CGREY15U3Ek__BackingField_23; }
	inline void set_U3CGREY15U3Ek__BackingField_23(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY15U3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CGREY16U3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY16U3Ek__BackingField_24)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY16U3Ek__BackingField_24() const { return ___U3CGREY16U3Ek__BackingField_24; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY16U3Ek__BackingField_24() { return &___U3CGREY16U3Ek__BackingField_24; }
	inline void set_U3CGREY16U3Ek__BackingField_24(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY16U3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CGREY17U3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY17U3Ek__BackingField_25)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY17U3Ek__BackingField_25() const { return ___U3CGREY17U3Ek__BackingField_25; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY17U3Ek__BackingField_25() { return &___U3CGREY17U3Ek__BackingField_25; }
	inline void set_U3CGREY17U3Ek__BackingField_25(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY17U3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CGREY18U3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY18U3Ek__BackingField_26)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY18U3Ek__BackingField_26() const { return ___U3CGREY18U3Ek__BackingField_26; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY18U3Ek__BackingField_26() { return &___U3CGREY18U3Ek__BackingField_26; }
	inline void set_U3CGREY18U3Ek__BackingField_26(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY18U3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CGREY19U3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY19U3Ek__BackingField_27)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY19U3Ek__BackingField_27() const { return ___U3CGREY19U3Ek__BackingField_27; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY19U3Ek__BackingField_27() { return &___U3CGREY19U3Ek__BackingField_27; }
	inline void set_U3CGREY19U3Ek__BackingField_27(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY19U3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CGREY20U3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY20U3Ek__BackingField_28)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY20U3Ek__BackingField_28() const { return ___U3CGREY20U3Ek__BackingField_28; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY20U3Ek__BackingField_28() { return &___U3CGREY20U3Ek__BackingField_28; }
	inline void set_U3CGREY20U3Ek__BackingField_28(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY20U3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CGREY22U3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY22U3Ek__BackingField_29)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY22U3Ek__BackingField_29() const { return ___U3CGREY22U3Ek__BackingField_29; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY22U3Ek__BackingField_29() { return &___U3CGREY22U3Ek__BackingField_29; }
	inline void set_U3CGREY22U3Ek__BackingField_29(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY22U3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CGREY24U3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY24U3Ek__BackingField_30)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY24U3Ek__BackingField_30() const { return ___U3CGREY24U3Ek__BackingField_30; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY24U3Ek__BackingField_30() { return &___U3CGREY24U3Ek__BackingField_30; }
	inline void set_U3CGREY24U3Ek__BackingField_30(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY24U3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CGREY26U3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY26U3Ek__BackingField_31)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY26U3Ek__BackingField_31() const { return ___U3CGREY26U3Ek__BackingField_31; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY26U3Ek__BackingField_31() { return &___U3CGREY26U3Ek__BackingField_31; }
	inline void set_U3CGREY26U3Ek__BackingField_31(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY26U3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CGREY28U3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY28U3Ek__BackingField_32)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY28U3Ek__BackingField_32() const { return ___U3CGREY28U3Ek__BackingField_32; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY28U3Ek__BackingField_32() { return &___U3CGREY28U3Ek__BackingField_32; }
	inline void set_U3CGREY28U3Ek__BackingField_32(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY28U3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CGREY30U3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY30U3Ek__BackingField_33)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY30U3Ek__BackingField_33() const { return ___U3CGREY30U3Ek__BackingField_33; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY30U3Ek__BackingField_33() { return &___U3CGREY30U3Ek__BackingField_33; }
	inline void set_U3CGREY30U3Ek__BackingField_33(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY30U3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CGREY35U3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY35U3Ek__BackingField_34)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY35U3Ek__BackingField_34() const { return ___U3CGREY35U3Ek__BackingField_34; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY35U3Ek__BackingField_34() { return &___U3CGREY35U3Ek__BackingField_34; }
	inline void set_U3CGREY35U3Ek__BackingField_34(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY35U3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CGREY40U3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY40U3Ek__BackingField_35)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY40U3Ek__BackingField_35() const { return ___U3CGREY40U3Ek__BackingField_35; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY40U3Ek__BackingField_35() { return &___U3CGREY40U3Ek__BackingField_35; }
	inline void set_U3CGREY40U3Ek__BackingField_35(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY40U3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CGREY45U3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY45U3Ek__BackingField_36)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY45U3Ek__BackingField_36() const { return ___U3CGREY45U3Ek__BackingField_36; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY45U3Ek__BackingField_36() { return &___U3CGREY45U3Ek__BackingField_36; }
	inline void set_U3CGREY45U3Ek__BackingField_36(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY45U3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CGREY50U3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY50U3Ek__BackingField_37)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY50U3Ek__BackingField_37() const { return ___U3CGREY50U3Ek__BackingField_37; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY50U3Ek__BackingField_37() { return &___U3CGREY50U3Ek__BackingField_37; }
	inline void set_U3CGREY50U3Ek__BackingField_37(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY50U3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_U3CGREY55U3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY55U3Ek__BackingField_38)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY55U3Ek__BackingField_38() const { return ___U3CGREY55U3Ek__BackingField_38; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY55U3Ek__BackingField_38() { return &___U3CGREY55U3Ek__BackingField_38; }
	inline void set_U3CGREY55U3Ek__BackingField_38(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY55U3Ek__BackingField_38 = value;
	}

	inline static int32_t get_offset_of_U3CGREY60U3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY60U3Ek__BackingField_39)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY60U3Ek__BackingField_39() const { return ___U3CGREY60U3Ek__BackingField_39; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY60U3Ek__BackingField_39() { return &___U3CGREY60U3Ek__BackingField_39; }
	inline void set_U3CGREY60U3Ek__BackingField_39(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY60U3Ek__BackingField_39 = value;
	}

	inline static int32_t get_offset_of_U3CGREY65U3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY65U3Ek__BackingField_40)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY65U3Ek__BackingField_40() const { return ___U3CGREY65U3Ek__BackingField_40; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY65U3Ek__BackingField_40() { return &___U3CGREY65U3Ek__BackingField_40; }
	inline void set_U3CGREY65U3Ek__BackingField_40(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY65U3Ek__BackingField_40 = value;
	}

	inline static int32_t get_offset_of_U3CGREY70U3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY70U3Ek__BackingField_41)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY70U3Ek__BackingField_41() const { return ___U3CGREY70U3Ek__BackingField_41; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY70U3Ek__BackingField_41() { return &___U3CGREY70U3Ek__BackingField_41; }
	inline void set_U3CGREY70U3Ek__BackingField_41(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY70U3Ek__BackingField_41 = value;
	}

	inline static int32_t get_offset_of_U3CGREY75U3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY75U3Ek__BackingField_42)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY75U3Ek__BackingField_42() const { return ___U3CGREY75U3Ek__BackingField_42; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY75U3Ek__BackingField_42() { return &___U3CGREY75U3Ek__BackingField_42; }
	inline void set_U3CGREY75U3Ek__BackingField_42(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY75U3Ek__BackingField_42 = value;
	}

	inline static int32_t get_offset_of_U3CGREY80U3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY80U3Ek__BackingField_43)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY80U3Ek__BackingField_43() const { return ___U3CGREY80U3Ek__BackingField_43; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY80U3Ek__BackingField_43() { return &___U3CGREY80U3Ek__BackingField_43; }
	inline void set_U3CGREY80U3Ek__BackingField_43(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY80U3Ek__BackingField_43 = value;
	}

	inline static int32_t get_offset_of_U3CGREY85U3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY85U3Ek__BackingField_44)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY85U3Ek__BackingField_44() const { return ___U3CGREY85U3Ek__BackingField_44; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY85U3Ek__BackingField_44() { return &___U3CGREY85U3Ek__BackingField_44; }
	inline void set_U3CGREY85U3Ek__BackingField_44(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY85U3Ek__BackingField_44 = value;
	}

	inline static int32_t get_offset_of_U3CGREY90U3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY90U3Ek__BackingField_45)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY90U3Ek__BackingField_45() const { return ___U3CGREY90U3Ek__BackingField_45; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY90U3Ek__BackingField_45() { return &___U3CGREY90U3Ek__BackingField_45; }
	inline void set_U3CGREY90U3Ek__BackingField_45(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY90U3Ek__BackingField_45 = value;
	}

	inline static int32_t get_offset_of_U3CGREY95U3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY95U3Ek__BackingField_46)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY95U3Ek__BackingField_46() const { return ___U3CGREY95U3Ek__BackingField_46; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY95U3Ek__BackingField_46() { return &___U3CGREY95U3Ek__BackingField_46; }
	inline void set_U3CGREY95U3Ek__BackingField_46(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY95U3Ek__BackingField_46 = value;
	}

	inline static int32_t get_offset_of_U3CGREY98U3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CGREY98U3Ek__BackingField_47)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CGREY98U3Ek__BackingField_47() const { return ___U3CGREY98U3Ek__BackingField_47; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CGREY98U3Ek__BackingField_47() { return &___U3CGREY98U3Ek__BackingField_47; }
	inline void set_U3CGREY98U3Ek__BackingField_47(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CGREY98U3Ek__BackingField_47 = value;
	}

	inline static int32_t get_offset_of_U3CWHITEU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CWHITEU3Ek__BackingField_48)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CWHITEU3Ek__BackingField_48() const { return ___U3CWHITEU3Ek__BackingField_48; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CWHITEU3Ek__BackingField_48() { return &___U3CWHITEU3Ek__BackingField_48; }
	inline void set_U3CWHITEU3Ek__BackingField_48(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CWHITEU3Ek__BackingField_48 = value;
	}

	inline static int32_t get_offset_of_U3CBLACK_01U3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CBLACK_01U3Ek__BackingField_49)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CBLACK_01U3Ek__BackingField_49() const { return ___U3CBLACK_01U3Ek__BackingField_49; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CBLACK_01U3Ek__BackingField_49() { return &___U3CBLACK_01U3Ek__BackingField_49; }
	inline void set_U3CBLACK_01U3Ek__BackingField_49(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CBLACK_01U3Ek__BackingField_49 = value;
	}

	inline static int32_t get_offset_of_U3CBLACK_02U3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CBLACK_02U3Ek__BackingField_50)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CBLACK_02U3Ek__BackingField_50() const { return ___U3CBLACK_02U3Ek__BackingField_50; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CBLACK_02U3Ek__BackingField_50() { return &___U3CBLACK_02U3Ek__BackingField_50; }
	inline void set_U3CBLACK_02U3Ek__BackingField_50(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CBLACK_02U3Ek__BackingField_50 = value;
	}

	inline static int32_t get_offset_of_U3CBLACK_05U3Ek__BackingField_51() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CBLACK_05U3Ek__BackingField_51)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CBLACK_05U3Ek__BackingField_51() const { return ___U3CBLACK_05U3Ek__BackingField_51; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CBLACK_05U3Ek__BackingField_51() { return &___U3CBLACK_05U3Ek__BackingField_51; }
	inline void set_U3CBLACK_05U3Ek__BackingField_51(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CBLACK_05U3Ek__BackingField_51 = value;
	}

	inline static int32_t get_offset_of_U3CBLACK_08U3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CBLACK_08U3Ek__BackingField_52)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CBLACK_08U3Ek__BackingField_52() const { return ___U3CBLACK_08U3Ek__BackingField_52; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CBLACK_08U3Ek__BackingField_52() { return &___U3CBLACK_08U3Ek__BackingField_52; }
	inline void set_U3CBLACK_08U3Ek__BackingField_52(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CBLACK_08U3Ek__BackingField_52 = value;
	}

	inline static int32_t get_offset_of_U3CBLACK_10U3Ek__BackingField_53() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CBLACK_10U3Ek__BackingField_53)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CBLACK_10U3Ek__BackingField_53() const { return ___U3CBLACK_10U3Ek__BackingField_53; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CBLACK_10U3Ek__BackingField_53() { return &___U3CBLACK_10U3Ek__BackingField_53; }
	inline void set_U3CBLACK_10U3Ek__BackingField_53(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CBLACK_10U3Ek__BackingField_53 = value;
	}

	inline static int32_t get_offset_of_U3CBLACK_20U3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CBLACK_20U3Ek__BackingField_54)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CBLACK_20U3Ek__BackingField_54() const { return ___U3CBLACK_20U3Ek__BackingField_54; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CBLACK_20U3Ek__BackingField_54() { return &___U3CBLACK_20U3Ek__BackingField_54; }
	inline void set_U3CBLACK_20U3Ek__BackingField_54(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CBLACK_20U3Ek__BackingField_54 = value;
	}

	inline static int32_t get_offset_of_U3CBLACK_30U3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CBLACK_30U3Ek__BackingField_55)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CBLACK_30U3Ek__BackingField_55() const { return ___U3CBLACK_30U3Ek__BackingField_55; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CBLACK_30U3Ek__BackingField_55() { return &___U3CBLACK_30U3Ek__BackingField_55; }
	inline void set_U3CBLACK_30U3Ek__BackingField_55(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CBLACK_30U3Ek__BackingField_55 = value;
	}

	inline static int32_t get_offset_of_U3CBLACK_40U3Ek__BackingField_56() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CBLACK_40U3Ek__BackingField_56)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CBLACK_40U3Ek__BackingField_56() const { return ___U3CBLACK_40U3Ek__BackingField_56; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CBLACK_40U3Ek__BackingField_56() { return &___U3CBLACK_40U3Ek__BackingField_56; }
	inline void set_U3CBLACK_40U3Ek__BackingField_56(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CBLACK_40U3Ek__BackingField_56 = value;
	}

	inline static int32_t get_offset_of_U3CBLACK_50U3Ek__BackingField_57() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CBLACK_50U3Ek__BackingField_57)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CBLACK_50U3Ek__BackingField_57() const { return ___U3CBLACK_50U3Ek__BackingField_57; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CBLACK_50U3Ek__BackingField_57() { return &___U3CBLACK_50U3Ek__BackingField_57; }
	inline void set_U3CBLACK_50U3Ek__BackingField_57(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CBLACK_50U3Ek__BackingField_57 = value;
	}

	inline static int32_t get_offset_of_U3CBLACK_60U3Ek__BackingField_58() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CBLACK_60U3Ek__BackingField_58)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CBLACK_60U3Ek__BackingField_58() const { return ___U3CBLACK_60U3Ek__BackingField_58; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CBLACK_60U3Ek__BackingField_58() { return &___U3CBLACK_60U3Ek__BackingField_58; }
	inline void set_U3CBLACK_60U3Ek__BackingField_58(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CBLACK_60U3Ek__BackingField_58 = value;
	}

	inline static int32_t get_offset_of_U3CBLACK_70U3Ek__BackingField_59() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CBLACK_70U3Ek__BackingField_59)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CBLACK_70U3Ek__BackingField_59() const { return ___U3CBLACK_70U3Ek__BackingField_59; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CBLACK_70U3Ek__BackingField_59() { return &___U3CBLACK_70U3Ek__BackingField_59; }
	inline void set_U3CBLACK_70U3Ek__BackingField_59(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CBLACK_70U3Ek__BackingField_59 = value;
	}

	inline static int32_t get_offset_of_U3CBLACK_80U3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CBLACK_80U3Ek__BackingField_60)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CBLACK_80U3Ek__BackingField_60() const { return ___U3CBLACK_80U3Ek__BackingField_60; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CBLACK_80U3Ek__BackingField_60() { return &___U3CBLACK_80U3Ek__BackingField_60; }
	inline void set_U3CBLACK_80U3Ek__BackingField_60(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CBLACK_80U3Ek__BackingField_60 = value;
	}

	inline static int32_t get_offset_of_U3CBLACK_90U3Ek__BackingField_61() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CBLACK_90U3Ek__BackingField_61)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CBLACK_90U3Ek__BackingField_61() const { return ___U3CBLACK_90U3Ek__BackingField_61; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CBLACK_90U3Ek__BackingField_61() { return &___U3CBLACK_90U3Ek__BackingField_61; }
	inline void set_U3CBLACK_90U3Ek__BackingField_61(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CBLACK_90U3Ek__BackingField_61 = value;
	}

	inline static int32_t get_offset_of_U3CBLACK_95U3Ek__BackingField_62() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CBLACK_95U3Ek__BackingField_62)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CBLACK_95U3Ek__BackingField_62() const { return ___U3CBLACK_95U3Ek__BackingField_62; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CBLACK_95U3Ek__BackingField_62() { return &___U3CBLACK_95U3Ek__BackingField_62; }
	inline void set_U3CBLACK_95U3Ek__BackingField_62(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CBLACK_95U3Ek__BackingField_62 = value;
	}

	inline static int32_t get_offset_of_U3CBLACK_98U3Ek__BackingField_63() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CBLACK_98U3Ek__BackingField_63)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CBLACK_98U3Ek__BackingField_63() const { return ___U3CBLACK_98U3Ek__BackingField_63; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CBLACK_98U3Ek__BackingField_63() { return &___U3CBLACK_98U3Ek__BackingField_63; }
	inline void set_U3CBLACK_98U3Ek__BackingField_63(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CBLACK_98U3Ek__BackingField_63 = value;
	}

	inline static int32_t get_offset_of_U3CWHITE_01U3Ek__BackingField_64() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CWHITE_01U3Ek__BackingField_64)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CWHITE_01U3Ek__BackingField_64() const { return ___U3CWHITE_01U3Ek__BackingField_64; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CWHITE_01U3Ek__BackingField_64() { return &___U3CWHITE_01U3Ek__BackingField_64; }
	inline void set_U3CWHITE_01U3Ek__BackingField_64(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CWHITE_01U3Ek__BackingField_64 = value;
	}

	inline static int32_t get_offset_of_U3CWHITE_02U3Ek__BackingField_65() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CWHITE_02U3Ek__BackingField_65)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CWHITE_02U3Ek__BackingField_65() const { return ___U3CWHITE_02U3Ek__BackingField_65; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CWHITE_02U3Ek__BackingField_65() { return &___U3CWHITE_02U3Ek__BackingField_65; }
	inline void set_U3CWHITE_02U3Ek__BackingField_65(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CWHITE_02U3Ek__BackingField_65 = value;
	}

	inline static int32_t get_offset_of_U3CWHITE_05U3Ek__BackingField_66() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CWHITE_05U3Ek__BackingField_66)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CWHITE_05U3Ek__BackingField_66() const { return ___U3CWHITE_05U3Ek__BackingField_66; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CWHITE_05U3Ek__BackingField_66() { return &___U3CWHITE_05U3Ek__BackingField_66; }
	inline void set_U3CWHITE_05U3Ek__BackingField_66(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CWHITE_05U3Ek__BackingField_66 = value;
	}

	inline static int32_t get_offset_of_U3CWHITE_08U3Ek__BackingField_67() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CWHITE_08U3Ek__BackingField_67)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CWHITE_08U3Ek__BackingField_67() const { return ___U3CWHITE_08U3Ek__BackingField_67; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CWHITE_08U3Ek__BackingField_67() { return &___U3CWHITE_08U3Ek__BackingField_67; }
	inline void set_U3CWHITE_08U3Ek__BackingField_67(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CWHITE_08U3Ek__BackingField_67 = value;
	}

	inline static int32_t get_offset_of_U3CWHITE_10U3Ek__BackingField_68() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CWHITE_10U3Ek__BackingField_68)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CWHITE_10U3Ek__BackingField_68() const { return ___U3CWHITE_10U3Ek__BackingField_68; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CWHITE_10U3Ek__BackingField_68() { return &___U3CWHITE_10U3Ek__BackingField_68; }
	inline void set_U3CWHITE_10U3Ek__BackingField_68(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CWHITE_10U3Ek__BackingField_68 = value;
	}

	inline static int32_t get_offset_of_U3CWHITE_20U3Ek__BackingField_69() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CWHITE_20U3Ek__BackingField_69)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CWHITE_20U3Ek__BackingField_69() const { return ___U3CWHITE_20U3Ek__BackingField_69; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CWHITE_20U3Ek__BackingField_69() { return &___U3CWHITE_20U3Ek__BackingField_69; }
	inline void set_U3CWHITE_20U3Ek__BackingField_69(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CWHITE_20U3Ek__BackingField_69 = value;
	}

	inline static int32_t get_offset_of_U3CWHITE_30U3Ek__BackingField_70() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CWHITE_30U3Ek__BackingField_70)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CWHITE_30U3Ek__BackingField_70() const { return ___U3CWHITE_30U3Ek__BackingField_70; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CWHITE_30U3Ek__BackingField_70() { return &___U3CWHITE_30U3Ek__BackingField_70; }
	inline void set_U3CWHITE_30U3Ek__BackingField_70(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CWHITE_30U3Ek__BackingField_70 = value;
	}

	inline static int32_t get_offset_of_U3CWHITE_40U3Ek__BackingField_71() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CWHITE_40U3Ek__BackingField_71)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CWHITE_40U3Ek__BackingField_71() const { return ___U3CWHITE_40U3Ek__BackingField_71; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CWHITE_40U3Ek__BackingField_71() { return &___U3CWHITE_40U3Ek__BackingField_71; }
	inline void set_U3CWHITE_40U3Ek__BackingField_71(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CWHITE_40U3Ek__BackingField_71 = value;
	}

	inline static int32_t get_offset_of_U3CWHITE_50U3Ek__BackingField_72() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CWHITE_50U3Ek__BackingField_72)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CWHITE_50U3Ek__BackingField_72() const { return ___U3CWHITE_50U3Ek__BackingField_72; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CWHITE_50U3Ek__BackingField_72() { return &___U3CWHITE_50U3Ek__BackingField_72; }
	inline void set_U3CWHITE_50U3Ek__BackingField_72(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CWHITE_50U3Ek__BackingField_72 = value;
	}

	inline static int32_t get_offset_of_U3CWHITE_60U3Ek__BackingField_73() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CWHITE_60U3Ek__BackingField_73)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CWHITE_60U3Ek__BackingField_73() const { return ___U3CWHITE_60U3Ek__BackingField_73; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CWHITE_60U3Ek__BackingField_73() { return &___U3CWHITE_60U3Ek__BackingField_73; }
	inline void set_U3CWHITE_60U3Ek__BackingField_73(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CWHITE_60U3Ek__BackingField_73 = value;
	}

	inline static int32_t get_offset_of_U3CWHITE_70U3Ek__BackingField_74() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CWHITE_70U3Ek__BackingField_74)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CWHITE_70U3Ek__BackingField_74() const { return ___U3CWHITE_70U3Ek__BackingField_74; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CWHITE_70U3Ek__BackingField_74() { return &___U3CWHITE_70U3Ek__BackingField_74; }
	inline void set_U3CWHITE_70U3Ek__BackingField_74(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CWHITE_70U3Ek__BackingField_74 = value;
	}

	inline static int32_t get_offset_of_U3CWHITE_80U3Ek__BackingField_75() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CWHITE_80U3Ek__BackingField_75)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CWHITE_80U3Ek__BackingField_75() const { return ___U3CWHITE_80U3Ek__BackingField_75; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CWHITE_80U3Ek__BackingField_75() { return &___U3CWHITE_80U3Ek__BackingField_75; }
	inline void set_U3CWHITE_80U3Ek__BackingField_75(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CWHITE_80U3Ek__BackingField_75 = value;
	}

	inline static int32_t get_offset_of_U3CWHITE_90U3Ek__BackingField_76() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CWHITE_90U3Ek__BackingField_76)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CWHITE_90U3Ek__BackingField_76() const { return ___U3CWHITE_90U3Ek__BackingField_76; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CWHITE_90U3Ek__BackingField_76() { return &___U3CWHITE_90U3Ek__BackingField_76; }
	inline void set_U3CWHITE_90U3Ek__BackingField_76(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CWHITE_90U3Ek__BackingField_76 = value;
	}

	inline static int32_t get_offset_of_U3CWHITE_95U3Ek__BackingField_77() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CWHITE_95U3Ek__BackingField_77)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CWHITE_95U3Ek__BackingField_77() const { return ___U3CWHITE_95U3Ek__BackingField_77; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CWHITE_95U3Ek__BackingField_77() { return &___U3CWHITE_95U3Ek__BackingField_77; }
	inline void set_U3CWHITE_95U3Ek__BackingField_77(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CWHITE_95U3Ek__BackingField_77 = value;
	}

	inline static int32_t get_offset_of_U3CWHITE_98U3Ek__BackingField_78() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CWHITE_98U3Ek__BackingField_78)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CWHITE_98U3Ek__BackingField_78() const { return ___U3CWHITE_98U3Ek__BackingField_78; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CWHITE_98U3Ek__BackingField_78() { return &___U3CWHITE_98U3Ek__BackingField_78; }
	inline void set_U3CWHITE_98U3Ek__BackingField_78(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CWHITE_98U3Ek__BackingField_78 = value;
	}

	inline static int32_t get_offset_of_BLUE_79() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___BLUE_79)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_BLUE_79() const { return ___BLUE_79; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_BLUE_79() { return &___BLUE_79; }
	inline void set_BLUE_79(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___BLUE_79 = value;
	}

	inline static int32_t get_offset_of_LIGHT_BLUE_80() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___LIGHT_BLUE_80)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_LIGHT_BLUE_80() const { return ___LIGHT_BLUE_80; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_LIGHT_BLUE_80() { return &___LIGHT_BLUE_80; }
	inline void set_LIGHT_BLUE_80(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___LIGHT_BLUE_80 = value;
	}

	inline static int32_t get_offset_of_TEAL_81() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___TEAL_81)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_TEAL_81() const { return ___TEAL_81; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_TEAL_81() { return &___TEAL_81; }
	inline void set_TEAL_81(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___TEAL_81 = value;
	}

	inline static int32_t get_offset_of_TURQUOISE_82() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___TURQUOISE_82)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_TURQUOISE_82() const { return ___TURQUOISE_82; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_TURQUOISE_82() { return &___TURQUOISE_82; }
	inline void set_TURQUOISE_82(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___TURQUOISE_82 = value;
	}

	inline static int32_t get_offset_of_GREEN_83() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___GREEN_83)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_GREEN_83() const { return ___GREEN_83; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_GREEN_83() { return &___GREEN_83; }
	inline void set_GREEN_83(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___GREEN_83 = value;
	}

	inline static int32_t get_offset_of_PINK_84() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___PINK_84)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_PINK_84() const { return ___PINK_84; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_PINK_84() { return &___PINK_84; }
	inline void set_PINK_84(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___PINK_84 = value;
	}

	inline static int32_t get_offset_of_PURPLE_85() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___PURPLE_85)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_PURPLE_85() const { return ___PURPLE_85; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_PURPLE_85() { return &___PURPLE_85; }
	inline void set_PURPLE_85(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___PURPLE_85 = value;
	}

	inline static int32_t get_offset_of_SALMON_86() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___SALMON_86)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_SALMON_86() const { return ___SALMON_86; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_SALMON_86() { return &___SALMON_86; }
	inline void set_SALMON_86(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___SALMON_86 = value;
	}

	inline static int32_t get_offset_of_RED_87() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___RED_87)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_RED_87() const { return ___RED_87; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_RED_87() { return &___RED_87; }
	inline void set_RED_87(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___RED_87 = value;
	}

	inline static int32_t get_offset_of_ORANGE_88() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___ORANGE_88)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_ORANGE_88() const { return ___ORANGE_88; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_ORANGE_88() { return &___ORANGE_88; }
	inline void set_ORANGE_88(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___ORANGE_88 = value;
	}

	inline static int32_t get_offset_of_YELLOW_89() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___YELLOW_89)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_YELLOW_89() const { return ___YELLOW_89; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_YELLOW_89() { return &___YELLOW_89; }
	inline void set_YELLOW_89(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___YELLOW_89 = value;
	}

	inline static int32_t get_offset_of_LIME_90() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___LIME_90)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_LIME_90() const { return ___LIME_90; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_LIME_90() { return &___LIME_90; }
	inline void set_LIME_90(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___LIME_90 = value;
	}

	inline static int32_t get_offset_of_BLUE_STRONG_91() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___BLUE_STRONG_91)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_BLUE_STRONG_91() const { return ___BLUE_STRONG_91; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_BLUE_STRONG_91() { return &___BLUE_STRONG_91; }
	inline void set_BLUE_STRONG_91(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___BLUE_STRONG_91 = value;
	}

	inline static int32_t get_offset_of_BLUE_DULL_92() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___BLUE_DULL_92)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_BLUE_DULL_92() const { return ___BLUE_DULL_92; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_BLUE_DULL_92() { return &___BLUE_DULL_92; }
	inline void set_BLUE_DULL_92(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___BLUE_DULL_92 = value;
	}

	inline static int32_t get_offset_of_U3CBLUE_VIBRANTU3Ek__BackingField_93() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___U3CBLUE_VIBRANTU3Ek__BackingField_93)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CBLUE_VIBRANTU3Ek__BackingField_93() const { return ___U3CBLUE_VIBRANTU3Ek__BackingField_93; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CBLUE_VIBRANTU3Ek__BackingField_93() { return &___U3CBLUE_VIBRANTU3Ek__BackingField_93; }
	inline void set_U3CBLUE_VIBRANTU3Ek__BackingField_93(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CBLUE_VIBRANTU3Ek__BackingField_93 = value;
	}

	inline static int32_t get_offset_of_ERROR_94() { return static_cast<int32_t>(offsetof(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields, ___ERROR_94)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_ERROR_94() const { return ___ERROR_94; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_ERROR_94() { return &___ERROR_94; }
	inline void set_ERROR_94(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___ERROR_94 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Event::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields
{
public:
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___s_Current_1;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___s_MasterEvent_2;

public:
	inline static int32_t get_offset_of_s_Current_1() { return static_cast<int32_t>(offsetof(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields, ___s_Current_1)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_s_Current_1() const { return ___s_Current_1; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_s_Current_1() { return &___s_Current_1; }
	inline void set_s_Current_1(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___s_Current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Current_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_MasterEvent_2() { return static_cast<int32_t>(offsetof(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields, ___s_MasterEvent_2)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_s_MasterEvent_2() const { return ___s_MasterEvent_2; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_s_MasterEvent_2() { return &___s_MasterEvent_2; }
	inline void set_s_MasterEvent_2(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___s_MasterEvent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_MasterEvent_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.FilterMode
struct FilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19 
{
public:
	// System.Int32 UnityEngine.FilterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.HideFlags
struct HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Space
struct Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// DigitalSalmon.Sequence/CancelledStatus
struct CancelledStatus_t36BB4F40883B65D4D8C27A81633266FD8156350C 
{
public:
	// System.Int32 DigitalSalmon.Sequence/CancelledStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CancelledStatus_t36BB4F40883B65D4D8C27A81633266FD8156350C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Motion
struct Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// System.Boolean UnityEngine.Motion::<isAnimatorMotion>k__BackingField
	bool ___U3CisAnimatorMotionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CisAnimatorMotionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67, ___U3CisAnimatorMotionU3Ek__BackingField_4)); }
	inline bool get_U3CisAnimatorMotionU3Ek__BackingField_4() const { return ___U3CisAnimatorMotionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CisAnimatorMotionU3Ek__BackingField_4() { return &___U3CisAnimatorMotionU3Ek__BackingField_4; }
	inline void set_U3CisAnimatorMotionU3Ek__BackingField_4(bool value)
	{
		___U3CisAnimatorMotionU3Ek__BackingField_4 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Threading.Mutex
struct Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};


// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC  : public MulticastDelegate_t
{
public:

public:
};


// DigitalSalmon.EventHandler`1<UnityEngine.Collider>
struct EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837  : public MulticastDelegate_t
{
public:

public:
};


// DigitalSalmon.EventHandler`1<DigitalSalmon.Sequence/CancelledStatus>
struct EventHandler_1_t857EE8F997B0D1D571982AE33FD7D888E99FB3CC  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Collider,System.Boolean>
struct Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AnimationClip
struct AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178  : public Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// DigitalSalmon.EventHandler
struct EventHandler_t9372478C2C0A8EACAEEA5736BBC676C0DAC750E1  : public MulticastDelegate_t
{
public:

public:
};


// DigitalSalmon.FloatEventHandler
struct FloatEventHandler_t7AECF385828E1C26E6E4EBE3E51D22E95F3BD3A3  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;

public:
	inline static int32_t get_offset_of_m_BakedIndex_4() { return static_cast<int32_t>(offsetof(Light_tA2F349FE839781469A0344CF6039B51512394275, ___m_BakedIndex_4)); }
	inline int32_t get_m_BakedIndex_4() const { return ___m_BakedIndex_4; }
	inline int32_t* get_address_of_m_BakedIndex_4() { return &___m_BakedIndex_4; }
	inline void set_m_BakedIndex_4(int32_t value)
	{
		___m_BakedIndex_4 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// DigitalSalmon.AnimatedTransformPreview
struct AnimatedTransformPreview_tC83BEE154460B1FEB099401AC7806FFEADF5B8C6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator DigitalSalmon.AnimatedTransformPreview::animAnimator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animAnimator_4;
	// UnityEngine.AnimationClip DigitalSalmon.AnimatedTransformPreview::clip
	AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___clip_5;
	// UnityEngine.Transform DigitalSalmon.AnimatedTransformPreview::previewTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___previewTransform_6;
	// System.Single DigitalSalmon.AnimatedTransformPreview::sampleDeltaTime
	float ___sampleDeltaTime_7;
	// System.Single DigitalSalmon.AnimatedTransformPreview::time
	float ___time_8;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> DigitalSalmon.AnimatedTransformPreview::positions
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___positions_9;

public:
	inline static int32_t get_offset_of_animAnimator_4() { return static_cast<int32_t>(offsetof(AnimatedTransformPreview_tC83BEE154460B1FEB099401AC7806FFEADF5B8C6, ___animAnimator_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animAnimator_4() const { return ___animAnimator_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animAnimator_4() { return &___animAnimator_4; }
	inline void set_animAnimator_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animAnimator_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animAnimator_4), (void*)value);
	}

	inline static int32_t get_offset_of_clip_5() { return static_cast<int32_t>(offsetof(AnimatedTransformPreview_tC83BEE154460B1FEB099401AC7806FFEADF5B8C6, ___clip_5)); }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * get_clip_5() const { return ___clip_5; }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 ** get_address_of_clip_5() { return &___clip_5; }
	inline void set_clip_5(AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * value)
	{
		___clip_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clip_5), (void*)value);
	}

	inline static int32_t get_offset_of_previewTransform_6() { return static_cast<int32_t>(offsetof(AnimatedTransformPreview_tC83BEE154460B1FEB099401AC7806FFEADF5B8C6, ___previewTransform_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_previewTransform_6() const { return ___previewTransform_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_previewTransform_6() { return &___previewTransform_6; }
	inline void set_previewTransform_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___previewTransform_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previewTransform_6), (void*)value);
	}

	inline static int32_t get_offset_of_sampleDeltaTime_7() { return static_cast<int32_t>(offsetof(AnimatedTransformPreview_tC83BEE154460B1FEB099401AC7806FFEADF5B8C6, ___sampleDeltaTime_7)); }
	inline float get_sampleDeltaTime_7() const { return ___sampleDeltaTime_7; }
	inline float* get_address_of_sampleDeltaTime_7() { return &___sampleDeltaTime_7; }
	inline void set_sampleDeltaTime_7(float value)
	{
		___sampleDeltaTime_7 = value;
	}

	inline static int32_t get_offset_of_time_8() { return static_cast<int32_t>(offsetof(AnimatedTransformPreview_tC83BEE154460B1FEB099401AC7806FFEADF5B8C6, ___time_8)); }
	inline float get_time_8() const { return ___time_8; }
	inline float* get_address_of_time_8() { return &___time_8; }
	inline void set_time_8(float value)
	{
		___time_8 = value;
	}

	inline static int32_t get_offset_of_positions_9() { return static_cast<int32_t>(offsetof(AnimatedTransformPreview_tC83BEE154460B1FEB099401AC7806FFEADF5B8C6, ___positions_9)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_positions_9() const { return ___positions_9; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_positions_9() { return &___positions_9; }
	inline void set_positions_9(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___positions_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positions_9), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// DigitalSalmon.BaseBehaviour
struct BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator DigitalSalmon.BaseBehaviour::_animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ____animator_4;
	// UnityEngine.AudioSource DigitalSalmon.BaseBehaviour::_audio
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ____audio_5;
	// UnityEngine.Camera DigitalSalmon.BaseBehaviour::_camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ____camera_6;
	// UnityEngine.Collider DigitalSalmon.BaseBehaviour::_collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ____collider_7;
	// UnityEngine.Collider2D DigitalSalmon.BaseBehaviour::_collider2D
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ____collider2D_8;
	// UnityEngine.Light DigitalSalmon.BaseBehaviour::_light
	Light_tA2F349FE839781469A0344CF6039B51512394275 * ____light_9;
	// UnityEngine.ParticleSystem DigitalSalmon.BaseBehaviour::_particleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ____particleSystem_10;
	// UnityEngine.Renderer DigitalSalmon.BaseBehaviour::_renderer
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ____renderer_11;
	// UnityEngine.Rigidbody DigitalSalmon.BaseBehaviour::_rigidBody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ____rigidBody_12;
	// UnityEngine.Rigidbody2D DigitalSalmon.BaseBehaviour::_rigidBody2D
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ____rigidBody2D_13;
	// DigitalSalmon.Sequence DigitalSalmon.BaseBehaviour::_sequence
	Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * ____sequence_14;
	// UnityEngine.Transform DigitalSalmon.BaseBehaviour::_transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____transform_15;
	// UnityEngine.RectTransform DigitalSalmon.BaseBehaviour::_rectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ____rectTransform_16;

public:
	inline static int32_t get_offset_of__animator_4() { return static_cast<int32_t>(offsetof(BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52, ____animator_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get__animator_4() const { return ____animator_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of__animator_4() { return &____animator_4; }
	inline void set__animator_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		____animator_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____animator_4), (void*)value);
	}

	inline static int32_t get_offset_of__audio_5() { return static_cast<int32_t>(offsetof(BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52, ____audio_5)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get__audio_5() const { return ____audio_5; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of__audio_5() { return &____audio_5; }
	inline void set__audio_5(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		____audio_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____audio_5), (void*)value);
	}

	inline static int32_t get_offset_of__camera_6() { return static_cast<int32_t>(offsetof(BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52, ____camera_6)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get__camera_6() const { return ____camera_6; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of__camera_6() { return &____camera_6; }
	inline void set__camera_6(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		____camera_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____camera_6), (void*)value);
	}

	inline static int32_t get_offset_of__collider_7() { return static_cast<int32_t>(offsetof(BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52, ____collider_7)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get__collider_7() const { return ____collider_7; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of__collider_7() { return &____collider_7; }
	inline void set__collider_7(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		____collider_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____collider_7), (void*)value);
	}

	inline static int32_t get_offset_of__collider2D_8() { return static_cast<int32_t>(offsetof(BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52, ____collider2D_8)); }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * get__collider2D_8() const { return ____collider2D_8; }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** get_address_of__collider2D_8() { return &____collider2D_8; }
	inline void set__collider2D_8(Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		____collider2D_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____collider2D_8), (void*)value);
	}

	inline static int32_t get_offset_of__light_9() { return static_cast<int32_t>(offsetof(BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52, ____light_9)); }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 * get__light_9() const { return ____light_9; }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 ** get_address_of__light_9() { return &____light_9; }
	inline void set__light_9(Light_tA2F349FE839781469A0344CF6039B51512394275 * value)
	{
		____light_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____light_9), (void*)value);
	}

	inline static int32_t get_offset_of__particleSystem_10() { return static_cast<int32_t>(offsetof(BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52, ____particleSystem_10)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get__particleSystem_10() const { return ____particleSystem_10; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of__particleSystem_10() { return &____particleSystem_10; }
	inline void set__particleSystem_10(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		____particleSystem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____particleSystem_10), (void*)value);
	}

	inline static int32_t get_offset_of__renderer_11() { return static_cast<int32_t>(offsetof(BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52, ____renderer_11)); }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * get__renderer_11() const { return ____renderer_11; }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** get_address_of__renderer_11() { return &____renderer_11; }
	inline void set__renderer_11(Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		____renderer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____renderer_11), (void*)value);
	}

	inline static int32_t get_offset_of__rigidBody_12() { return static_cast<int32_t>(offsetof(BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52, ____rigidBody_12)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get__rigidBody_12() const { return ____rigidBody_12; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of__rigidBody_12() { return &____rigidBody_12; }
	inline void set__rigidBody_12(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		____rigidBody_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rigidBody_12), (void*)value);
	}

	inline static int32_t get_offset_of__rigidBody2D_13() { return static_cast<int32_t>(offsetof(BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52, ____rigidBody2D_13)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get__rigidBody2D_13() const { return ____rigidBody2D_13; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of__rigidBody2D_13() { return &____rigidBody2D_13; }
	inline void set__rigidBody2D_13(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		____rigidBody2D_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rigidBody2D_13), (void*)value);
	}

	inline static int32_t get_offset_of__sequence_14() { return static_cast<int32_t>(offsetof(BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52, ____sequence_14)); }
	inline Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * get__sequence_14() const { return ____sequence_14; }
	inline Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C ** get_address_of__sequence_14() { return &____sequence_14; }
	inline void set__sequence_14(Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * value)
	{
		____sequence_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sequence_14), (void*)value);
	}

	inline static int32_t get_offset_of__transform_15() { return static_cast<int32_t>(offsetof(BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52, ____transform_15)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__transform_15() const { return ____transform_15; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__transform_15() { return &____transform_15; }
	inline void set__transform_15(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____transform_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____transform_15), (void*)value);
	}

	inline static int32_t get_offset_of__rectTransform_16() { return static_cast<int32_t>(offsetof(BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52, ____rectTransform_16)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get__rectTransform_16() const { return ____rectTransform_16; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of__rectTransform_16() { return &____rectTransform_16; }
	inline void set__rectTransform_16(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		____rectTransform_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rectTransform_16), (void*)value);
	}
};


// DigitalSalmon.Components
struct Components_t70C6642CD159E7A7F6475C89133D153D6FD46457  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> DigitalSalmon.Components::componentLookup
	Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * ___componentLookup_4;

public:
	inline static int32_t get_offset_of_componentLookup_4() { return static_cast<int32_t>(offsetof(Components_t70C6642CD159E7A7F6475C89133D153D6FD46457, ___componentLookup_4)); }
	inline Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * get_componentLookup_4() const { return ___componentLookup_4; }
	inline Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE ** get_address_of_componentLookup_4() { return &___componentLookup_4; }
	inline void set_componentLookup_4(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * value)
	{
		___componentLookup_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___componentLookup_4), (void*)value);
	}
};


// DigitalSalmon.ProtectedSingleton`1<DigitalSalmon.GlobalSequence>
struct ProtectedSingleton_1_tF02527107305CE73183909D91FA01B5A51435355  : public BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52
{
public:

public:
};

struct ProtectedSingleton_1_tF02527107305CE73183909D91FA01B5A51435355_StaticFields
{
public:
	// T DigitalSalmon.ProtectedSingleton`1::<Instance>k__BackingField
	GlobalSequence_t92F117568F74EF784CFDD426D3B06FD0AF3E8722 * ___U3CInstanceU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(ProtectedSingleton_1_tF02527107305CE73183909D91FA01B5A51435355_StaticFields, ___U3CInstanceU3Ek__BackingField_17)); }
	inline GlobalSequence_t92F117568F74EF784CFDD426D3B06FD0AF3E8722 * get_U3CInstanceU3Ek__BackingField_17() const { return ___U3CInstanceU3Ek__BackingField_17; }
	inline GlobalSequence_t92F117568F74EF784CFDD426D3B06FD0AF3E8722 ** get_address_of_U3CInstanceU3Ek__BackingField_17() { return &___U3CInstanceU3Ek__BackingField_17; }
	inline void set_U3CInstanceU3Ek__BackingField_17(GlobalSequence_t92F117568F74EF784CFDD426D3B06FD0AF3E8722 * value)
	{
		___U3CInstanceU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_17), (void*)value);
	}
};


// DigitalSalmon.Billboard
struct Billboard_tE50EBED70F65C0D04F78F44B69BD222194206C45  : public BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52
{
public:
	// System.Single DigitalSalmon.Billboard::zAngle
	float ___zAngle_17;
	// System.Boolean DigitalSalmon.Billboard::flip
	bool ___flip_18;
	// System.Boolean DigitalSalmon.Billboard::executeInEditMode
	bool ___executeInEditMode_19;
	// System.Boolean DigitalSalmon.Billboard::useMainCamera
	bool ___useMainCamera_20;

public:
	inline static int32_t get_offset_of_zAngle_17() { return static_cast<int32_t>(offsetof(Billboard_tE50EBED70F65C0D04F78F44B69BD222194206C45, ___zAngle_17)); }
	inline float get_zAngle_17() const { return ___zAngle_17; }
	inline float* get_address_of_zAngle_17() { return &___zAngle_17; }
	inline void set_zAngle_17(float value)
	{
		___zAngle_17 = value;
	}

	inline static int32_t get_offset_of_flip_18() { return static_cast<int32_t>(offsetof(Billboard_tE50EBED70F65C0D04F78F44B69BD222194206C45, ___flip_18)); }
	inline bool get_flip_18() const { return ___flip_18; }
	inline bool* get_address_of_flip_18() { return &___flip_18; }
	inline void set_flip_18(bool value)
	{
		___flip_18 = value;
	}

	inline static int32_t get_offset_of_executeInEditMode_19() { return static_cast<int32_t>(offsetof(Billboard_tE50EBED70F65C0D04F78F44B69BD222194206C45, ___executeInEditMode_19)); }
	inline bool get_executeInEditMode_19() const { return ___executeInEditMode_19; }
	inline bool* get_address_of_executeInEditMode_19() { return &___executeInEditMode_19; }
	inline void set_executeInEditMode_19(bool value)
	{
		___executeInEditMode_19 = value;
	}

	inline static int32_t get_offset_of_useMainCamera_20() { return static_cast<int32_t>(offsetof(Billboard_tE50EBED70F65C0D04F78F44B69BD222194206C45, ___useMainCamera_20)); }
	inline bool get_useMainCamera_20() const { return ___useMainCamera_20; }
	inline bool* get_address_of_useMainCamera_20() { return &___useMainCamera_20; }
	inline void set_useMainCamera_20(bool value)
	{
		___useMainCamera_20 = value;
	}
};


// DigitalSalmon.Fayte.ColliderBehaviour
struct ColliderBehaviour_t57531986DD4AF6CE6932F6730FCA26FAD8A10297  : public BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52
{
public:
	// DigitalSalmon.EventHandler`1<UnityEngine.Collider> DigitalSalmon.Fayte.ColliderBehaviour::ColliderEnter
	EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * ___ColliderEnter_17;
	// DigitalSalmon.EventHandler`1<UnityEngine.Collider> DigitalSalmon.Fayte.ColliderBehaviour::ColliderExit
	EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * ___ColliderExit_18;
	// System.Func`2<UnityEngine.Collider,System.Boolean> DigitalSalmon.Fayte.ColliderBehaviour::<ValidCheck>k__BackingField
	Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 * ___U3CValidCheckU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_ColliderEnter_17() { return static_cast<int32_t>(offsetof(ColliderBehaviour_t57531986DD4AF6CE6932F6730FCA26FAD8A10297, ___ColliderEnter_17)); }
	inline EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * get_ColliderEnter_17() const { return ___ColliderEnter_17; }
	inline EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 ** get_address_of_ColliderEnter_17() { return &___ColliderEnter_17; }
	inline void set_ColliderEnter_17(EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * value)
	{
		___ColliderEnter_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ColliderEnter_17), (void*)value);
	}

	inline static int32_t get_offset_of_ColliderExit_18() { return static_cast<int32_t>(offsetof(ColliderBehaviour_t57531986DD4AF6CE6932F6730FCA26FAD8A10297, ___ColliderExit_18)); }
	inline EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * get_ColliderExit_18() const { return ___ColliderExit_18; }
	inline EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 ** get_address_of_ColliderExit_18() { return &___ColliderExit_18; }
	inline void set_ColliderExit_18(EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * value)
	{
		___ColliderExit_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ColliderExit_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValidCheckU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(ColliderBehaviour_t57531986DD4AF6CE6932F6730FCA26FAD8A10297, ___U3CValidCheckU3Ek__BackingField_19)); }
	inline Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 * get_U3CValidCheckU3Ek__BackingField_19() const { return ___U3CValidCheckU3Ek__BackingField_19; }
	inline Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 ** get_address_of_U3CValidCheckU3Ek__BackingField_19() { return &___U3CValidCheckU3Ek__BackingField_19; }
	inline void set_U3CValidCheckU3Ek__BackingField_19(Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 * value)
	{
		___U3CValidCheckU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValidCheckU3Ek__BackingField_19), (void*)value);
	}
};


// DigitalSalmon.ConstantRotation
struct ConstantRotation_t1C3E31FFA3473A421331C6EDBEF2D25DECC4E743  : public BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52
{
public:
	// System.Single DigitalSalmon.ConstantRotation::degreesPerSecond
	float ___degreesPerSecond_17;
	// DigitalSalmon.Axis3D DigitalSalmon.ConstantRotation::rotationAxis
	int32_t ___rotationAxis_18;
	// System.Boolean DigitalSalmon.ConstantRotation::executeInEditMode
	bool ___executeInEditMode_19;

public:
	inline static int32_t get_offset_of_degreesPerSecond_17() { return static_cast<int32_t>(offsetof(ConstantRotation_t1C3E31FFA3473A421331C6EDBEF2D25DECC4E743, ___degreesPerSecond_17)); }
	inline float get_degreesPerSecond_17() const { return ___degreesPerSecond_17; }
	inline float* get_address_of_degreesPerSecond_17() { return &___degreesPerSecond_17; }
	inline void set_degreesPerSecond_17(float value)
	{
		___degreesPerSecond_17 = value;
	}

	inline static int32_t get_offset_of_rotationAxis_18() { return static_cast<int32_t>(offsetof(ConstantRotation_t1C3E31FFA3473A421331C6EDBEF2D25DECC4E743, ___rotationAxis_18)); }
	inline int32_t get_rotationAxis_18() const { return ___rotationAxis_18; }
	inline int32_t* get_address_of_rotationAxis_18() { return &___rotationAxis_18; }
	inline void set_rotationAxis_18(int32_t value)
	{
		___rotationAxis_18 = value;
	}

	inline static int32_t get_offset_of_executeInEditMode_19() { return static_cast<int32_t>(offsetof(ConstantRotation_t1C3E31FFA3473A421331C6EDBEF2D25DECC4E743, ___executeInEditMode_19)); }
	inline bool get_executeInEditMode_19() const { return ___executeInEditMode_19; }
	inline bool* get_address_of_executeInEditMode_19() { return &___executeInEditMode_19; }
	inline void set_executeInEditMode_19(bool value)
	{
		___executeInEditMode_19 = value;
	}
};


// DigitalSalmon.ForcedShadowBias
struct ForcedShadowBias_tDEE25748FFC8AF42B4FA0D8CA313221B629C8B30  : public BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52
{
public:
	// System.Single DigitalSalmon.ForcedShadowBias::shadowBias
	float ___shadowBias_17;
	// System.Single DigitalSalmon.ForcedShadowBias::shadowNormalBias
	float ___shadowNormalBias_18;

public:
	inline static int32_t get_offset_of_shadowBias_17() { return static_cast<int32_t>(offsetof(ForcedShadowBias_tDEE25748FFC8AF42B4FA0D8CA313221B629C8B30, ___shadowBias_17)); }
	inline float get_shadowBias_17() const { return ___shadowBias_17; }
	inline float* get_address_of_shadowBias_17() { return &___shadowBias_17; }
	inline void set_shadowBias_17(float value)
	{
		___shadowBias_17 = value;
	}

	inline static int32_t get_offset_of_shadowNormalBias_18() { return static_cast<int32_t>(offsetof(ForcedShadowBias_tDEE25748FFC8AF42B4FA0D8CA313221B629C8B30, ___shadowNormalBias_18)); }
	inline float get_shadowNormalBias_18() const { return ___shadowNormalBias_18; }
	inline float* get_address_of_shadowNormalBias_18() { return &___shadowNormalBias_18; }
	inline void set_shadowNormalBias_18(float value)
	{
		___shadowNormalBias_18 = value;
	}
};


// DigitalSalmon.SinPosition
struct SinPosition_t659F26724C9093675506B556B31458EE6BF6E609  : public BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52
{
public:
	// UnityEngine.Vector3 DigitalSalmon.SinPosition::amplitude
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___amplitude_17;
	// UnityEngine.Vector3 DigitalSalmon.SinPosition::frequency
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___frequency_18;
	// System.Boolean DigitalSalmon.SinPosition::randomPeriod
	bool ___randomPeriod_19;
	// System.Boolean DigitalSalmon.SinPosition::executeInEditor
	bool ___executeInEditor_20;
	// UnityEngine.Vector3 DigitalSalmon.SinPosition::initialPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initialPosition_21;
	// UnityEngine.Vector3 DigitalSalmon.SinPosition::offset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___offset_22;

public:
	inline static int32_t get_offset_of_amplitude_17() { return static_cast<int32_t>(offsetof(SinPosition_t659F26724C9093675506B556B31458EE6BF6E609, ___amplitude_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_amplitude_17() const { return ___amplitude_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_amplitude_17() { return &___amplitude_17; }
	inline void set_amplitude_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___amplitude_17 = value;
	}

	inline static int32_t get_offset_of_frequency_18() { return static_cast<int32_t>(offsetof(SinPosition_t659F26724C9093675506B556B31458EE6BF6E609, ___frequency_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_frequency_18() const { return ___frequency_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_frequency_18() { return &___frequency_18; }
	inline void set_frequency_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___frequency_18 = value;
	}

	inline static int32_t get_offset_of_randomPeriod_19() { return static_cast<int32_t>(offsetof(SinPosition_t659F26724C9093675506B556B31458EE6BF6E609, ___randomPeriod_19)); }
	inline bool get_randomPeriod_19() const { return ___randomPeriod_19; }
	inline bool* get_address_of_randomPeriod_19() { return &___randomPeriod_19; }
	inline void set_randomPeriod_19(bool value)
	{
		___randomPeriod_19 = value;
	}

	inline static int32_t get_offset_of_executeInEditor_20() { return static_cast<int32_t>(offsetof(SinPosition_t659F26724C9093675506B556B31458EE6BF6E609, ___executeInEditor_20)); }
	inline bool get_executeInEditor_20() const { return ___executeInEditor_20; }
	inline bool* get_address_of_executeInEditor_20() { return &___executeInEditor_20; }
	inline void set_executeInEditor_20(bool value)
	{
		___executeInEditor_20 = value;
	}

	inline static int32_t get_offset_of_initialPosition_21() { return static_cast<int32_t>(offsetof(SinPosition_t659F26724C9093675506B556B31458EE6BF6E609, ___initialPosition_21)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_initialPosition_21() const { return ___initialPosition_21; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_initialPosition_21() { return &___initialPosition_21; }
	inline void set_initialPosition_21(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___initialPosition_21 = value;
	}

	inline static int32_t get_offset_of_offset_22() { return static_cast<int32_t>(offsetof(SinPosition_t659F26724C9093675506B556B31458EE6BF6E609, ___offset_22)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_offset_22() const { return ___offset_22; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_offset_22() { return &___offset_22; }
	inline void set_offset_22(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___offset_22 = value;
	}
};


// DigitalSalmon.GlobalSequence
struct GlobalSequence_t92F117568F74EF784CFDD426D3B06FD0AF3E8722  : public ProtectedSingleton_1_tF02527107305CE73183909D91FA01B5A51435355
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  m_Items[1];

public:
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// T DigitalSalmon.BaseBehaviour::LocateComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * BaseBehaviour_LocateComponent_TisRuntimeObject_m07FA2DF47510B04178A9AE78093667B9C59F9249_gshared (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, RuntimeObject ** ___component0, const RuntimeMethod* method);
// !1 System.Func`2<System.Object,System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Func_2_Invoke_mC9A30EEF00507C36CC34A71B88397287E6906197_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___arg0, const RuntimeMethod* method);
// System.Void DigitalSalmon.EventHandlerExtensions::InvokeSafe<System.Object>(DigitalSalmon.EventHandler`1<TEventArgs>,TEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandlerExtensions_InvokeSafe_TisRuntimeObject_m9628BCC7C23ECE3E03270F97B846930FF5401654_gshared (EventHandler_1_tC385E366C81E9C40C76F061A6FB88075581A3BAB * ___self0, RuntimeObject * ___eventArgs1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// T DigitalSalmon.ProtectedSingleton`1<System.Object>::GetInstance(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ProtectedSingleton_1_GetInstance_m3860D81EB7D5FBB59F7EE372C4D0AF4658D17F19_gshared (RuntimeObject * ___template0, const RuntimeMethod* method);
// System.Void DigitalSalmon.ProtectedSingleton`1<System.Object>::OnInstanceCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtectedSingleton_1_OnInstanceCreated_mE530EA7547A7FB5ABDD3D1B1D9AF7EBB20E747EA_gshared (ProtectedSingleton_1_t459F59DA36286FF963A16A0692411D28D5965F17 * __this, const RuntimeMethod* method);
// System.Void DigitalSalmon.ProtectedSingleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtectedSingleton_1__ctor_mFA0657C5E84AFEB6188474353A47FCC827F3A7F6_gshared (ProtectedSingleton_1_t459F59DA36286FF963A16A0692411D28D5965F17 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void DigitalSalmon.EventHandlerExtensions::InvokeSafe<System.Int32Enum>(DigitalSalmon.EventHandler`1<TEventArgs>,TEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandlerExtensions_InvokeSafe_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_mE3B89736203E7E95F5B1E1FD3FEA4CAF4B01E8B5_gshared (EventHandler_1_t3658AA207E5B880CCB104CC54B4F25664F6B7D80 * ___self0, int32_t ___eventArgs1, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A  HashSet_1_GetEnumerator_m7B591DC586DE6ACF8918E1BC71FA731FB919603E_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD87CDEF3F60C047F21B9E6A48590E59D9D6621C9_gshared (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m8A225BA705CC2D5BA0A22FF58381EA1FDB37ED20_gshared (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_mF7FBC7E3AE9E541ED2D5E0000DA5A167A123067F_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m123D9273AFF968BD5C248D721870170B26FBEF6C_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Single,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mD5A3997B896491EDE26BF3BABF88264E240B6BA4_gshared (Dictionary_2_t28D6C5A32D32B52B1D79D88E28471D4EB8BDEC88 * __this, float ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Single,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mADF1649FD13A894AA1DB109B227536244AFEA286_gshared (Dictionary_2_t28D6C5A32D32B52B1D79D88E28471D4EB8BDEC88 * __this, float ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Single,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB82A49E3A535EEAA4E3610B4F42F3700D5323E11_gshared (Dictionary_2_t28D6C5A32D32B52B1D79D88E28471D4EB8BDEC88 * __this, float ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Single,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF610D5B0D3D1D10414D434A3E09629B35E95E014_gshared (Dictionary_2_t28D6C5A32D32B52B1D79D88E28471D4EB8BDEC88 * __this, const RuntimeMethod* method);
// !0 System.Func`1<System.Boolean>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567 (const RuntimeMethod* method);
// System.Boolean DigitalSalmon.AnimatedTransformPreview::get_AllowSample()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatedTransformPreview_get_AllowSample_m334BDF7769DC1A5E421E520E35FB6FFCADBB6E42 (AnimatedTransformPreview_tC83BEE154460B1FEB099401AC7806FFEADF5B8C6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationClip::SampleAnimation(UnityEngine.GameObject,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_SampleAnimation_mAE6FB426F2CC5ECC4AF43F4DA060DEF3EDC33852 (AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go0, float ___time1, const RuntimeMethod* method);
// UnityEngine.Color DigitalSalmon.Colours::get_WHITE_10()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Colours_get_WHITE_10_m5E625D08F89C0177546767E2D9195E406AB6303D_inline (const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void DigitalSalmon.AnimatedTransformPreview::DrawAnimTrail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedTransformPreview_DrawAnimTrail_mB95A85FC5223604E6EDD177B2282701A38BABA79 (AnimatedTransformPreview_tC83BEE154460B1FEB099401AC7806FFEADF5B8C6 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_gshared)(__this, method);
}
// System.Single UnityEngine.AnimationClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationClip_get_length_m7917C4C333DD8083A5395581652C227E0CECC82B (AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E (float ___f0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, int32_t, const RuntimeMethod*))List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// T DigitalSalmon.BaseBehaviour::LocateComponent<UnityEngine.Animator>(T&)
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * BaseBehaviour_LocateComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m49281D8D1DF9D00C8B432113DE361AAF59A0C404 (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** ___component0, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 *, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 **, const RuntimeMethod*))BaseBehaviour_LocateComponent_TisRuntimeObject_m07FA2DF47510B04178A9AE78093667B9C59F9249_gshared)(__this, ___component0, method);
}
// T DigitalSalmon.BaseBehaviour::LocateComponent<UnityEngine.RectTransform>(T&)
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * BaseBehaviour_LocateComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m3A7BC1C30AEEFB4B49C266900C077877CB9E7944 (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** ___component0, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 *, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 **, const RuntimeMethod*))BaseBehaviour_LocateComponent_TisRuntimeObject_m07FA2DF47510B04178A9AE78093667B9C59F9249_gshared)(__this, ___component0, method);
}
// T DigitalSalmon.BaseBehaviour::LocateComponent<UnityEngine.AudioSource>(T&)
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * BaseBehaviour_LocateComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mEE60CB0E27EADC3EAD6BB6F12C3E72AA2EBFC306 (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** ___component0, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 *, AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B **, const RuntimeMethod*))BaseBehaviour_LocateComponent_TisRuntimeObject_m07FA2DF47510B04178A9AE78093667B9C59F9249_gshared)(__this, ___component0, method);
}
// T DigitalSalmon.BaseBehaviour::LocateComponent<UnityEngine.Camera>(T&)
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * BaseBehaviour_LocateComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mBDFDDDD72A654A812EEBF0FC07CE6DC2BE34FC3C (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** ___component0, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 *, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C **, const RuntimeMethod*))BaseBehaviour_LocateComponent_TisRuntimeObject_m07FA2DF47510B04178A9AE78093667B9C59F9249_gshared)(__this, ___component0, method);
}
// T DigitalSalmon.BaseBehaviour::LocateComponent<UnityEngine.Collider>(T&)
inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * BaseBehaviour_LocateComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m5838E7B7BC903B068DD5693BD49411CB4CA7617E (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** ___component0, const RuntimeMethod* method)
{
	return ((  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * (*) (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 *, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 **, const RuntimeMethod*))BaseBehaviour_LocateComponent_TisRuntimeObject_m07FA2DF47510B04178A9AE78093667B9C59F9249_gshared)(__this, ___component0, method);
}
// T DigitalSalmon.BaseBehaviour::LocateComponent<UnityEngine.Collider2D>(T&)
inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * BaseBehaviour_LocateComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m05F28C4F4E083FE2AB22C955405B0646F1A80525 (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** ___component0, const RuntimeMethod* method)
{
	return ((  Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * (*) (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 *, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 **, const RuntimeMethod*))BaseBehaviour_LocateComponent_TisRuntimeObject_m07FA2DF47510B04178A9AE78093667B9C59F9249_gshared)(__this, ___component0, method);
}
// T DigitalSalmon.BaseBehaviour::LocateComponent<UnityEngine.Light>(T&)
inline Light_tA2F349FE839781469A0344CF6039B51512394275 * BaseBehaviour_LocateComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m82770ADE1F2C44B5E5E00CA6E1F9341514EE539E (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, Light_tA2F349FE839781469A0344CF6039B51512394275 ** ___component0, const RuntimeMethod* method)
{
	return ((  Light_tA2F349FE839781469A0344CF6039B51512394275 * (*) (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 *, Light_tA2F349FE839781469A0344CF6039B51512394275 **, const RuntimeMethod*))BaseBehaviour_LocateComponent_TisRuntimeObject_m07FA2DF47510B04178A9AE78093667B9C59F9249_gshared)(__this, ___component0, method);
}
// T DigitalSalmon.BaseBehaviour::LocateComponent<UnityEngine.ParticleSystem>(T&)
inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * BaseBehaviour_LocateComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m5DA99315E8A897D4B44247935C9022C46F827399 (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** ___component0, const RuntimeMethod* method)
{
	return ((  ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * (*) (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 *, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E **, const RuntimeMethod*))BaseBehaviour_LocateComponent_TisRuntimeObject_m07FA2DF47510B04178A9AE78093667B9C59F9249_gshared)(__this, ___component0, method);
}
// T DigitalSalmon.BaseBehaviour::LocateComponent<UnityEngine.Renderer>(T&)
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * BaseBehaviour_LocateComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m927C5DBBBCBC402CE3D070B5FDB9D4889619F3CB (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** ___component0, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 *, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C **, const RuntimeMethod*))BaseBehaviour_LocateComponent_TisRuntimeObject_m07FA2DF47510B04178A9AE78093667B9C59F9249_gshared)(__this, ___component0, method);
}
// T DigitalSalmon.BaseBehaviour::LocateComponent<UnityEngine.Rigidbody>(T&)
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * BaseBehaviour_LocateComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m609EC327A886D56FA65D0F368E74CF67F9A93559 (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** ___component0, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 *, Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A **, const RuntimeMethod*))BaseBehaviour_LocateComponent_TisRuntimeObject_m07FA2DF47510B04178A9AE78093667B9C59F9249_gshared)(__this, ___component0, method);
}
// T DigitalSalmon.BaseBehaviour::LocateComponent<UnityEngine.Rigidbody2D>(T&)
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * BaseBehaviour_LocateComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mB4597A7D5A1B9FADB5B7B6ADFF62AC5A3B6037EB (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** ___component0, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 *, Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 **, const RuntimeMethod*))BaseBehaviour_LocateComponent_TisRuntimeObject_m07FA2DF47510B04178A9AE78093667B9C59F9249_gshared)(__this, ___component0, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void DigitalSalmon.Sequence::.ctor(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence__ctor_mDD0D489EA7C9515DF2935A80E4AC97BC11ADEBC2 (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___monoBehaviour0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_current_m4E5A6D19F422F8DD2CFF4EE80C65B033F24C45D6 (const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Camera DigitalSalmon.Billboard::get_Camera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Billboard_get_Camera_m37B4E432AC757A027F5C401A5AE01CCBD06A9064 (Billboard_tE50EBED70F65C0D04F78F44B69BD222194206C45 * __this, const RuntimeMethod* method);
// UnityEngine.Transform DigitalSalmon.BaseBehaviour::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * BaseBehaviour_get_transform_m7FD02D01E8D916C8EB1E5FEB1A8BE4EFB8488AA0 (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_m6037828F5E8329B052D62472060274F9A3261ECA (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldUp1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m12614C5FABB1F4A9A6800EE65BBFDB433D6D804D (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis0, float ___angle1, int32_t ___relativeTo2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 DigitalSalmon.Extensions.Vector3Extensions::WithZ(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3Extensions_WithZ_mF7DF2AAE7C2EEA666EE031E2183CC1E644877DFC (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___self0, float ___z1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void DigitalSalmon.BaseBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseBehaviour__ctor_mCE0549FB5133CD6C17DF7D64E2D59E0238F2B3AD (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Func`2<UnityEngine.Collider,System.Boolean> DigitalSalmon.Fayte.ColliderBehaviour::get_ValidCheck()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 * ColliderBehaviour_get_ValidCheck_m6BA7638CF1C1CAAF0CB24BBD36E10B25C433E2C8_inline (ColliderBehaviour_t57531986DD4AF6CE6932F6730FCA26FAD8A10297 * __this, const RuntimeMethod* method);
// !1 System.Func`2<UnityEngine.Collider,System.Boolean>::Invoke(!0)
inline bool Func_2_Invoke_mADAFA7DAC444D5B3A69851F238A557D388D29678 (Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 *, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 *, const RuntimeMethod*))Func_2_Invoke_mC9A30EEF00507C36CC34A71B88397287E6906197_gshared)(__this, ___arg0, method);
}
// System.Void DigitalSalmon.EventHandlerExtensions::InvokeSafe<UnityEngine.Collider>(DigitalSalmon.EventHandler`1<TEventArgs>,TEventArgs)
inline void EventHandlerExtensions_InvokeSafe_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mC2107D6746C798BEC85C75ACB353813EF9FA03B8 (EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * ___self0, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___eventArgs1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 *, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 *, const RuntimeMethod*))EventHandlerExtensions_InvokeSafe_TisRuntimeObject_m9628BCC7C23ECE3E03270F97B846930FF5401654_gshared)(___self0, ___eventArgs1, method);
}
// UnityEngine.Collider UnityEngine.Collision::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * Collision_get_collider_m0AC4446E6B9168A0FB19DA376559C812E43779F8 (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * __this, const RuntimeMethod* method);
// System.Void DigitalSalmon.Fayte.ColliderBehaviour::set_ValidCheck(System.Func`2<UnityEngine.Collider,System.Boolean>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColliderBehaviour_set_ValidCheck_m783956FE032468FBAEB4DDC62EB3E3EC466E85D9_inline (ColliderBehaviour_t57531986DD4AF6CE6932F6730FCA26FAD8A10297 * __this, Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// UnityEngine.Color DigitalSalmon.Colours::Color(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541 (float ___v0, const RuntimeMethod* method);
// UnityEngine.Color DigitalSalmon.Colours::Color(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B (float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method);
// UnityEngine.Color DigitalSalmon.Colours::Color8(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Colours_Color8_m5886951EEF85F05DE8C6EFBA62ED2F31B37BF381 (int32_t ___r0, int32_t ___g1, int32_t ___b2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Object>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m9983D0130915B8182215B7C9B3D3A7D84FABB77F (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * __this, Type_t * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE *, Type_t *, RuntimeObject **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * Component_GetComponent_m4DE64B46F790BD785FDDDAD364E0364CDDE05BDB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Object>::Add(!0,!1)
inline void Dictionary_2_Add_m99062862FEE98206F053E41E6C6882126164CDC9 (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * __this, Type_t * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE *, Type_t *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Object>::.ctor()
inline void Dictionary_2__ctor_mEA9AEC3D1E0DD8B5AC3FA4CBAB6B18FE81AD1C62 (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// UnityEngine.Vector3 DigitalSalmon.Axis::ToVector(DigitalSalmon.Axis3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Axis_ToVector_m4D9F8667A059C1B94B38CD01EC38FFF982DCB900 (int32_t ___axis0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2AA745C4A796363462642A13251E8971D5C7F4DC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis0, float ___angle1, const RuntimeMethod* method);
// System.Void DigitalSalmon.EventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_Invoke_m81411B9347330C854A9EF54CEC06671F02AF66A2 (EventHandler_t9372478C2C0A8EACAEEA5736BBC676C0DAC750E1 * __this, const RuntimeMethod* method);
// UnityEngine.Light DigitalSalmon.BaseBehaviour::get_light()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Light_tA2F349FE839781469A0344CF6039B51512394275 * BaseBehaviour_get_light_m6178C4B6D750773CF84069DEFAB48C565F75BA52 (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Light::set_shadowNormalBias(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_shadowNormalBias_mB83F5944C03C3E4876C9A39B19364300ABE51DE2 (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Light::set_shadowBias(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_shadowBias_m2BECFEFF800EC5E96BD45886C739F15597DD1136 (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, float ___value0, const RuntimeMethod* method);
// T DigitalSalmon.ProtectedSingleton`1<DigitalSalmon.GlobalSequence>::GetInstance(T)
inline GlobalSequence_t92F117568F74EF784CFDD426D3B06FD0AF3E8722 * ProtectedSingleton_1_GetInstance_m390BB0F86549BAB8F31EE8A8324FAE9153BE8F33 (GlobalSequence_t92F117568F74EF784CFDD426D3B06FD0AF3E8722 * ___template0, const RuntimeMethod* method)
{
	return ((  GlobalSequence_t92F117568F74EF784CFDD426D3B06FD0AF3E8722 * (*) (GlobalSequence_t92F117568F74EF784CFDD426D3B06FD0AF3E8722 *, const RuntimeMethod*))ProtectedSingleton_1_GetInstance_m3860D81EB7D5FBB59F7EE372C4D0AF4658D17F19_gshared)(___template0, method);
}
// DigitalSalmon.GlobalSequence DigitalSalmon.GlobalSequence::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlobalSequence_t92F117568F74EF784CFDD426D3B06FD0AF3E8722 * GlobalSequence_get_Instance_m454FD26B6DFFF434BC1CF2CDF7702CC7160EABDB (const RuntimeMethod* method);
// DigitalSalmon.Sequence DigitalSalmon.BaseBehaviour::get_sequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * BaseBehaviour_get_sequence_m73027DACACA4C86FDE2A9E351AE61989AF3E1852 (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, const RuntimeMethod* method);
// DigitalSalmon.Sequence DigitalSalmon.Sequence::Do(System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * Sequence_Do_mBA3985CAB611908926993DEF999F7BA99A1EF6B4 (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, float ___delay0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action1, const RuntimeMethod* method);
// DigitalSalmon.Sequence DigitalSalmon.Sequence::DoRealtime(System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * Sequence_DoRealtime_m8D7B4C87026272CE2EC26108B0611C3CDB6F80E3 (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, float ___delay0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action1, const RuntimeMethod* method);
// DigitalSalmon.Sequence DigitalSalmon.Sequence::Coroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * Sequence_Coroutine_mB8DDAEC8F0FE32F0F7A2D31037B56F34F144F018 (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, RuntimeObject* ___coroutine0, const RuntimeMethod* method);
// DigitalSalmon.Sequence DigitalSalmon.Sequence::Queue(System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * Sequence_Queue_m5964E76D721970C0CAA50EEF4DB1C49835D6914F (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, float ___delay0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action1, const RuntimeMethod* method);
// DigitalSalmon.Sequence DigitalSalmon.Sequence::QueueRealtime(System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * Sequence_QueueRealtime_m5D32409D7B41098DAA19B43A778A95575099FB8F (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, float ___delay0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action1, const RuntimeMethod* method);
// DigitalSalmon.Sequence DigitalSalmon.Sequence::NextFrame(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * Sequence_NextFrame_mF63D4D1C3093CE1A33F7FEBA315ADC6187F70479 (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// DigitalSalmon.Sequence DigitalSalmon.Sequence::AfterFrames(System.Int32,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * Sequence_AfterFrames_mE21F27554044773F42212C53A4536D141ED9792A (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, int32_t ___numFrames0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action1, const RuntimeMethod* method);
// DigitalSalmon.Sequence DigitalSalmon.Sequence::EachFrame(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * Sequence_EachFrame_m2047769E66523195532F4925169980F99DCCBC00 (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___func0, const RuntimeMethod* method);
// DigitalSalmon.Sequence DigitalSalmon.Sequence::EndOfFrame(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * Sequence_EndOfFrame_m7CF45876BC073F16C6A4EF9CBDE8CAF939F6E56F (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// DigitalSalmon.Sequence DigitalSalmon.Sequence::EachEndOfFrame(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * Sequence_EachEndOfFrame_m40CA42B61362305BCC1B331BE2CAD373A2CFC89F (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___func0, const RuntimeMethod* method);
// DigitalSalmon.Sequence DigitalSalmon.Sequence::FixedUpdate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * Sequence_FixedUpdate_m5C6C69F5B9855FDAB12CEBB4797276DC3A2C4B67 (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// DigitalSalmon.Sequence DigitalSalmon.Sequence::EachFixedUpdate(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * Sequence_EachFixedUpdate_mBADC39B960862D17A2EC2FC80C447CB5CC4E2B3A (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___func0, const RuntimeMethod* method);
// System.Void DigitalSalmon.ProtectedSingleton`1<DigitalSalmon.GlobalSequence>::OnInstanceCreated()
inline void ProtectedSingleton_1_OnInstanceCreated_m677E5049551304633179142629CF5823E4C2D153 (ProtectedSingleton_1_tF02527107305CE73183909D91FA01B5A51435355 * __this, const RuntimeMethod* method)
{
	((  void (*) (ProtectedSingleton_1_tF02527107305CE73183909D91FA01B5A51435355 *, const RuntimeMethod*))ProtectedSingleton_1_OnInstanceCreated_mE530EA7547A7FB5ABDD3D1B1D9AF7EBB20E747EA_gshared)(__this, method);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void DigitalSalmon.ProtectedSingleton`1<DigitalSalmon.GlobalSequence>::.ctor()
inline void ProtectedSingleton_1__ctor_mE3B50849D3A09B6BFC5C8640C213A5D047FF65A2 (ProtectedSingleton_1_tF02527107305CE73183909D91FA01B5A51435355 * __this, const RuntimeMethod* method)
{
	((  void (*) (ProtectedSingleton_1_tF02527107305CE73183909D91FA01B5A51435355 *, const RuntimeMethod*))ProtectedSingleton_1__ctor_mFA0657C5E84AFEB6188474353A47FCC827F3A7F6_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Texture2D::GetPixel(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m667452FB4794C77D283037E096FE0DC0AEB311F3 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, bool ___linear4, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m4C6FE8C2798C39C20A14DAFC963C720D17F4F987 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___source0, int32_t ___destX1, int32_t ___destY2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05 (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Single DigitalSalmon.MathUtilities::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MathUtilities_Clamp01_m80F230322278F1ED62ED0D65763486B79A0F0EEC (float ___f0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void DigitalSalmon.Sequence::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_Cancel_mC30D7C7D85EDCC72FDF8A4425DD9A3CDEED7FF36 (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<DigitalSalmon.Sequence/QueuedAction>::get_Count()
inline int32_t Queue_1_get_Count_m275AD08D682AE39DC0DD7599659C49EAB4763D7C_inline (Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372 *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.HashSet`1<System.Collections.IEnumerator>::get_Count()
inline int32_t HashSet_1_get_Count_mACE52FFE184270C40991BE65351EE9D23B05CC9F_inline (HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C *, const RuntimeMethod*))HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Collections.IEnumerator>::.ctor()
inline void HashSet_1__ctor_m53E0AF4A624E161114A459D7D81DB3BA878997AF (HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C *, const RuntimeMethod*))HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<DigitalSalmon.Sequence/QueuedAction>::.ctor()
inline void Queue_1__ctor_m30DEF5F6B75AC33198783B71D021607709A03156 (Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372 *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void DigitalSalmon.Sequence::set_MonoBehaviour(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_set_MonoBehaviour_m17C6CF9F9FE3B1956EA7E1DC34D5080A006931D5 (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___value0, const RuntimeMethod* method);
// UnityEngine.MonoBehaviour DigitalSalmon.Sequence::get_MonoBehaviour()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * Sequence_get_MonoBehaviour_m3B3B407758498369A26AA8CB46018890CB73C1A4_inline (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.WaitForFixedUpdate DigitalSalmon.Wait::get_FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * Wait_get_FixedUpdate_m1BEF69CF709D57CB8B3758FC26E26C692B74722B (const RuntimeMethod* method);
// System.Collections.IEnumerator DigitalSalmon.Sequence::AfterWaitCoroutine(UnityEngine.YieldInstruction,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Sequence_AfterWaitCoroutine_m9E08455CADC2A374521E2DBAAADCAE49DB119BAE (YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF * ___wait0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action1, const RuntimeMethod* method);
// System.Collections.IEnumerator DigitalSalmon.Sequence::AfterFramesCoroutine(System.Int32,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Sequence_AfterFramesCoroutine_m38753C03534EFA81FA8F00C996FF51794B39EC26 (int32_t ___numFrames0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action1, const RuntimeMethod* method);
// UnityEngine.WaitForEndOfFrame DigitalSalmon.Wait::get_EndOfFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * Wait_get_EndOfFrame_m21D1FC50A6DBC28A2AE054268AA232847D0D15B1 (const RuntimeMethod* method);
// System.Collections.IEnumerator DigitalSalmon.Sequence::EachFrameCoroutine(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Sequence_EachFrameCoroutine_m0B0F8F3756B1EFCE2010D32262C0B290D48F8FF0 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___func0, const RuntimeMethod* method);
// System.Collections.IEnumerator DigitalSalmon.Sequence::EachAfterWaitCoroutine(UnityEngine.YieldInstruction,System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Sequence_EachAfterWaitCoroutine_m32F0F8D8F58152964B96EE3CAC89C750957051CE (YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF * ___wait0, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___func1, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void DigitalSalmon.Sequence::StartCachedCoroutine(System.Single,System.Action,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_StartCachedCoroutine_mD9EB3AF4DB6E1DC9ED51413EEFCDA8756D033F59 (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, float ___delay0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action1, bool ___isRealtime2, const RuntimeMethod* method);
// System.Void DigitalSalmon.Sequence::StartCachedCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_StartCachedCoroutine_m0393ABBC4093FF552FC07318A6496253F3FD79B0 (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, RuntimeObject* ___enumerator0, const RuntimeMethod* method);
// System.Void DigitalSalmon.Sequence::EnqueueAction(System.Single,System.Action,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_EnqueueAction_m577562ED6A73B240581A71749FD92F3758B96463 (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, float ___delay0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action1, bool ___isRealtime2, const RuntimeMethod* method);
// System.Boolean DigitalSalmon.Sequence::get_IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Sequence_get_IsRunning_mA7E61878985313CE987968C57DB0813F8B45E1C5 (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, const RuntimeMethod* method);
// System.Boolean DigitalSalmon.Sequence::get_IsActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Sequence_get_IsActiveAndEnabled_mB53FEDA8575CAD78C3951E66A91DCEB3A2B7E316 (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, const RuntimeMethod* method);
// System.Void DigitalSalmon.EventHandlerExtensions::InvokeSafe<DigitalSalmon.Sequence/CancelledStatus>(DigitalSalmon.EventHandler`1<TEventArgs>,TEventArgs)
inline void EventHandlerExtensions_InvokeSafe_TisCancelledStatus_t36BB4F40883B65D4D8C27A81633266FD8156350C_mBB340AACB31EEF344147C6C5E8ABF2E463EFFB6E (EventHandler_1_t857EE8F997B0D1D571982AE33FD7D888E99FB3CC * ___self0, int32_t ___eventArgs1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t857EE8F997B0D1D571982AE33FD7D888E99FB3CC *, int32_t, const RuntimeMethod*))EventHandlerExtensions_InvokeSafe_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_mE3B89736203E7E95F5B1E1FD3FEA4CAF4B01E8B5_gshared)(___self0, ___eventArgs1, method);
}
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.Collections.IEnumerator>::GetEnumerator()
inline Enumerator_tD5F7C39CF5561E43F347E3F042285D01F27D7E67  HashSet_1_GetEnumerator_m3F42B6E02632F37902929A4F2F313C8BF463CCE8 (HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD5F7C39CF5561E43F347E3F042285D01F27D7E67  (*) (HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C *, const RuntimeMethod*))HashSet_1_GetEnumerator_m7B591DC586DE6ACF8918E1BC71FA731FB919603E_gshared)(__this, method);
}
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.Collections.IEnumerator>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m7F663FE557E1C09EDB6B10A448B7D7E61FFAD03F_inline (Enumerator_tD5F7C39CF5561E43F347E3F042285D01F27D7E67 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tD5F7C39CF5561E43F347E3F042285D01F27D7E67 *, const RuntimeMethod*))Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m3AB89AE7770E06BDB33BF39104BE5C57DF90616B (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Collections.IEnumerator>::MoveNext()
inline bool Enumerator_MoveNext_m12C471E8A676412B48B13EF94BBA03369BA7A309 (Enumerator_tD5F7C39CF5561E43F347E3F042285D01F27D7E67 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD5F7C39CF5561E43F347E3F042285D01F27D7E67 *, const RuntimeMethod*))Enumerator_MoveNext_mD87CDEF3F60C047F21B9E6A48590E59D9D6621C9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Collections.IEnumerator>::Dispose()
inline void Enumerator_Dispose_mE3FC0A764716BE5F460A35515BE200CAC9F846F5 (Enumerator_tD5F7C39CF5561E43F347E3F042285D01F27D7E67 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD5F7C39CF5561E43F347E3F042285D01F27D7E67 *, const RuntimeMethod*))Enumerator_Dispose_m8A225BA705CC2D5BA0A22FF58381EA1FDB37ED20_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Collections.IEnumerator>::Clear()
inline void HashSet_1_Clear_m9B1954A25A5AD8CED217B8170A9E725EDF4CBC54 (HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C *, const RuntimeMethod*))HashSet_1_Clear_mF7FBC7E3AE9E541ED2D5E0000DA5A167A123067F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<DigitalSalmon.Sequence/QueuedAction>::Clear()
inline void Queue_1_Clear_m3847EEEB834C8A02908AAC62AAC5949D8FEF15CB (Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372 *, const RuntimeMethod*))Queue_1_Clear_m123D9273AFF968BD5C248D721870170B26FBEF6C_gshared)(__this, method);
}
// System.Void DigitalSalmon.Sequence/<DoCoroutine>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoCoroutineU3Ed__31__ctor_m45978C47D85322C7568EF54559257056FAE314E5 (U3CDoCoroutineU3Ed__31_tE81E9E0DB55A03FAE08A05AE0DE6312216BF4B4B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void DigitalSalmon.Sequence/<QueueCoroutine>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CQueueCoroutineU3Ed__32__ctor_m01F4D96BABC1AF1F4150882515EC93826BAF3006 (U3CQueueCoroutineU3Ed__32_t7962A48B641243173CA1E0B037FD7510E8B2EDC9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Collections.IEnumerator>::Add(!0)
inline bool HashSet_1_Add_mAF3378D7D4C73EE2B1A687E01500A0A371C6509C (HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C *, RuntimeObject*, const RuntimeMethod*))HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared)(__this, ___item0, method);
}
// System.Collections.IEnumerator DigitalSalmon.Sequence::YieldCoroutineAndRemoveOnComplete(System.Collections.IEnumerator,System.Collections.Generic.ICollection`1<System.Collections.IEnumerator>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Sequence_YieldCoroutineAndRemoveOnComplete_m17EA653B121960EE0B3C29C7E1483557C04CF7ED (RuntimeObject* ___coroutine0, RuntimeObject* ___cache1, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Collections.IEnumerator DigitalSalmon.Sequence::DoCoroutine(System.Single,System.Action,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Sequence_DoCoroutine_m02DBBFBE984499D09BD599EBBE6178A41F90403B (float ___delay0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action1, bool ___isRealtime2, const RuntimeMethod* method);
// System.Void DigitalSalmon.Sequence/QueuedAction::.ctor(System.Single,System.Action,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueuedAction__ctor_m773B88A33F7349AE5C7693FAB250AEA7F3D2901F (QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666 * __this, float ___delay0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action1, bool ___isRealtime2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<DigitalSalmon.Sequence/QueuedAction>::Enqueue(!0)
inline void Queue_1_Enqueue_mBD212FC75B5FA0543C7832B20A56B5B81ECAD697 (Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372 * __this, QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372 *, QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666 *, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// System.Collections.IEnumerator DigitalSalmon.Sequence::QueueCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Sequence_QueueCoroutine_mDEB66B749EF3EECC79033F39C89A6948996948BF (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, const RuntimeMethod* method);
// System.Void DigitalSalmon.Sequence/<AfterFramesCoroutine>d__36::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAfterFramesCoroutineU3Ed__36__ctor_m4F6835B677F81B9146C88624D6B72D612FBED033 (U3CAfterFramesCoroutineU3Ed__36_tBD83F07B0B995468AC2610793966D87D27B4B3B6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void DigitalSalmon.Sequence/<AfterWaitCoroutine>d__37::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAfterWaitCoroutineU3Ed__37__ctor_mB5D5EFB8FE0D5994D82325CB3F60C0398E1DE07D (U3CAfterWaitCoroutineU3Ed__37_t2BDAA5BDA5F4A8B0F9AB9BE54D3155F6FBE5F9D5 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void DigitalSalmon.Sequence/<EachFrameCoroutine>d__38::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEachFrameCoroutineU3Ed__38__ctor_mBFB9313F0161D8EFADA1F4B2FCAADC9E7652EA69 (U3CEachFrameCoroutineU3Ed__38_t272FADCBD79FDA8FE01938B645235E99E0D69791 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void DigitalSalmon.Sequence/<EachAfterWaitCoroutine>d__39::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEachAfterWaitCoroutineU3Ed__39__ctor_mB7BF4F0567C15A9C0319795D2116DA1B34F2CF1C (U3CEachAfterWaitCoroutineU3Ed__39_t6F70CB41A3911A942F6A6F590EE98CA137E116E8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void DigitalSalmon.Sequence/<YieldCoroutineAndRemoveOnComplete>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40__ctor_m8F7DBEB5A9863E4CCD190D46D067E7D3DE315DF6 (U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40_t1D55B22A8E0D2C6ED448B3CD7D3E2A041EE7767C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void DigitalSalmon.SinPosition::Initialise()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SinPosition_Initialise_m3E017C555879C94B00536B995446B21837682F24 (SinPosition_t659F26724C9093675506B556B31458EE6BF6E609 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 DigitalSalmon.SinPosition::GetAmplitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SinPosition_GetAmplitude_m3E2E314731561B1AAD8122C18FCC7999C72B8225 (SinPosition_t659F26724C9093675506B556B31458EE6BF6E609 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E (StringBuilder_t * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Char System.Char::ToUpper(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Char_ToUpper_m7BE77639C5F8EC99F56A729C0D26A684A85F0BC7 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Boolean System.Char::IsUpper(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsUpper_m72EAD892A02AD10D2050EA09BF3735DDE6921892 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Boolean DigitalSalmon.Extensions.GraphicsExtensions::IsReadable(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsExtensions_IsReadable_m8EBBE7877E9380E0057B248A8043DAB3DCC74580 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___self0, const RuntimeMethod* method);
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture2D_get_format_mCBCE13524A94042693822BDDE112990B25F4F8E4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// UnityEngine.TextureFormat DigitalSalmon.TextureUtilities::GetClonableFormat(UnityEngine.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureUtilities_GetClonableFormat_mB0A005D7DC0DE3088100C13B5412131F1DC61E84 (int32_t ___format0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method);
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___colors0, const RuntimeMethod* method);
// UnityEngine.FilterMode UnityEngine.Texture::get_filterMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture_get_filterMode_m66AAEC6C44B0A3A82477A27E5061AF6008501F9E (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 DigitalSalmon.Extensions.Vector2Extensions::Round(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2Extensions_Round_mCAED7A068386989F3456641D879AFD5E5CADD41B (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___self0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___increment1, const RuntimeMethod* method);
// System.Single DigitalSalmon.Extensions.FloatExtensions::Round(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatExtensions_Round_mD2733A64309165E6355AA180446EDF3623ACDF2E (float ___self0, float ___increment1, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForFixedUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForFixedUpdate__ctor_mB566493FB99A315BEF348791DE943A89E4B71F9C (WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Single,UnityEngine.WaitForSeconds>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m91DA06C3F9F01EE55EC97ADF02DFD54D6A542487 (Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706 * __this, float ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706 *, float, const RuntimeMethod*))Dictionary_2_ContainsKey_mD5A3997B896491EDE26BF3BABF88264E240B6BA4_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Single,UnityEngine.WaitForSeconds>::Add(!0,!1)
inline void Dictionary_2_Add_m8149C300FED5E97C3A96B5C917230A7BDE51B98B (Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706 * __this, float ___key0, WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706 *, float, WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *, const RuntimeMethod*))Dictionary_2_Add_mADF1649FD13A894AA1DB109B227536244AFEA286_gshared)(__this, ___key0, ___value1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Single,UnityEngine.WaitForSeconds>::get_Item(!0)
inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * Dictionary_2_get_Item_m68CD187169BB1C72C3BB6F50FFCA3D3C633F12A1 (Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706 * __this, float ___key0, const RuntimeMethod* method)
{
	return ((  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * (*) (Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706 *, float, const RuntimeMethod*))Dictionary_2_get_Item_mB82A49E3A535EEAA4E3610B4F42F3700D5323E11_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225 (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * __this, float ___time0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Single,UnityEngine.WaitForSecondsRealtime>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mA6BD87C09227CBB54FC5C8183A58BD306CF74121 (Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED * __this, float ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED *, float, const RuntimeMethod*))Dictionary_2_ContainsKey_mD5A3997B896491EDE26BF3BABF88264E240B6BA4_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Single,UnityEngine.WaitForSecondsRealtime>::Add(!0,!1)
inline void Dictionary_2_Add_m8DC4CB47916ACDFDD5EAA1D5721C8F5183FA978B (Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED * __this, float ___key0, WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED *, float, WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 *, const RuntimeMethod*))Dictionary_2_Add_mADF1649FD13A894AA1DB109B227536244AFEA286_gshared)(__this, ___key0, ___value1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Single,UnityEngine.WaitForSecondsRealtime>::get_Item(!0)
inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * Dictionary_2_get_Item_m4496A322B06369BF6E7D845A639DF2193AB1906F (Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED * __this, float ___key0, const RuntimeMethod* method)
{
	return ((  WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * (*) (Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED *, float, const RuntimeMethod*))Dictionary_2_get_Item_mB82A49E3A535EEAA4E3610B4F42F3700D5323E11_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Single,UnityEngine.WaitForSeconds>::.ctor()
inline void Dictionary_2__ctor_mE80249A2B292C01BE6F1918B88417F0F2E4109EB (Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706 *, const RuntimeMethod*))Dictionary_2__ctor_mF610D5B0D3D1D10414D434A3E09629B35E95E014_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Single,UnityEngine.WaitForSecondsRealtime>::.ctor()
inline void Dictionary_2__ctor_m822521978FF340FF63888FEAD9D39F61BDAB86E3 (Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED *, const RuntimeMethod*))Dictionary_2__ctor_mF610D5B0D3D1D10414D434A3E09629B35E95E014_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// UnityEngine.WaitForSecondsRealtime DigitalSalmon.Wait::SecondsRealtime(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * Wait_SecondsRealtime_m7510616DA3B48C4894D5CF16AB275F8966584A06 (float ___seconds0, bool ___caching1, const RuntimeMethod* method);
// UnityEngine.WaitForSeconds DigitalSalmon.Wait::Seconds(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * Wait_Seconds_m3F21808CA8804D7BC9C9AB1A915733B340D31720 (float ___seconds0, bool ___caching1, const RuntimeMethod* method);
// !0 System.Func`1<System.Boolean>::Invoke()
inline bool Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, const RuntimeMethod*))Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_gshared)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<DigitalSalmon.Sequence/QueuedAction>::Dequeue()
inline QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666 * Queue_1_Dequeue_mE335828E4881CDCC254C07E440FBAA3BC0423C8C (Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372 * __this, const RuntimeMethod* method)
{
	return ((  QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666 * (*) (Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372 *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// System.Boolean DigitalSalmon.Sequence/QueuedAction::get_IsRealtime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool QueuedAction_get_IsRealtime_m2CEF1B7B110991292575CF8C42AD32F30B9E9D6D_inline (QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666 * __this, const RuntimeMethod* method);
// System.Single DigitalSalmon.Sequence/QueuedAction::get_Delay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float QueuedAction_get_Delay_mED9073FCBB6A5033621DA00A0DEC7DF7D39C5B8E_inline (QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666 * __this, const RuntimeMethod* method);
// System.Action DigitalSalmon.Sequence/QueuedAction::get_Action()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * QueuedAction_get_Action_m271814B1D1FFFBCD5853F105BF09EA377A49E80D_inline (QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666 * __this, const RuntimeMethod* method);
// UnityEngine.Event UnityEngine.Event::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Event::get_alt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_get_alt_mD4B2211ADDF8B3C3BA262612EF482708C68AF9D9 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * Texture2D_get_whiteTexture_m4ED96995BA1D42F7D2823BD9D18023CFE3C680A0 (const RuntimeMethod* method);
// System.Void DigitalSalmon.UI.Style/GUI::Texture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Texture_m799B2694BC77335B11DA58573EE574F9A371F6C4 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___area0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___tint2, const RuntimeMethod* method);
// System.Boolean DigitalSalmon.UI.Style/GUI::get_Verbose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_get_Verbose_mA18293DA638BF056F149365529ECF6E8F7D7C0A9 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Event_get_mousePosition_m4D2A80BE0CF9A6D2CE8289C4815807493B3449A9 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Contains_m8438BA185AD95D6C50E7A2CF9DD30FBA044CE0B2 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point0, const RuntimeMethod* method);
// System.Void DigitalSalmon.UI.Style/GUI::VerboseOutline(UnityEngine.Rect,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_VerboseOutline_m0DEF5879F1D7B74E15900AB4C9E108039AC91DF6 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___area0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___outlineColor1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_clear_m9F8076CEFE7B8119A9903212DCBF2BFED114E97F (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// UnityEngine.Material DigitalSalmon.UI.Style/Materials::GetBox(UnityEngine.Color,UnityEngine.Color,UnityEngine.Vector2,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Materials_GetBox_mA7F4784B8A5A59864FC549DFB2CC9F91732A3953 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___baseColor0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___outlineColor1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___canvasSize2, float ___outlineThickness3, float ___radius4, float ___smoothing5, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_DrawTexture_m23BB2BAA877A74489C2A24FE82E698A3099503FF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___screenRect0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture1, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___mat2, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DrawTexture_mDD0221088900E3F53BA7B8A03B9E5CD2E6FDD0F8 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___image1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.GUI::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GUI_get_color_m61B524C99DD85A0DF405540C6E7453600E816FD5 (const RuntimeMethod* method);
// System.Void UnityEngine.GUI::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_color_m627E2716FD33EF327E38EE0048CE44FAD77AB87F (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void DigitalSalmon.UI.Style/GUI::Texture(UnityEngine.Rect,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Texture_m42903531FC92B8288024080F8F83A225C20A15BA (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___area0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture1, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value1, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void DigitalSalmon.TextureUtilities/Scaling::ThreadedScale(UnityEngine.Texture2D,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scaling_ThreadedScale_m3EE6BDEFE42D1E88C82C40EBFADB1926472D2132 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, int32_t ___newWidth1, int32_t ___newHeight2, bool ___useBilinear3, const RuntimeMethod* method);
// UnityEngine.Color DigitalSalmon.ColorUtilities::ULerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ColorUtilities_ULerp_m0D9F84BD0AB9A7EB104B4DDE68AA7A494E563F27 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void System.Threading.Mutex::ReleaseMutex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mutex_ReleaseMutex_mDF6C95C5F169F7345539CAECFA264A4D4687B190 (Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * __this, const RuntimeMethod* method);
// System.Void DigitalSalmon.TextureUtilities/Scaling/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mA985DB6F2F2B2CA84F0E29A90A6FC205EF63A29D (U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.SystemInfo::get_processorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_processorCount_mBAA6A01218CF7F03638A6016B6881466830FD0D5 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519 (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Void DigitalSalmon.TextureUtilities/Scaling/ScaleSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleSettings__ctor_m8818010F22D92CBD0F1E0C715EAC6F4BE2B195AD (ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * __this, const RuntimeMethod* method);
// System.Void System.Threading.Mutex::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mutex__ctor_mE64D51F0538989539F6C059AB7E247423B699BBE (Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * __this, bool ___initiallyOwned0, const RuntimeMethod* method);
// System.Void DigitalSalmon.TextureUtilities/Scaling/ThreadData::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadData__ctor_m7DE524139A5207015849111554D38536B0736B84 (ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973 * __this, int32_t ___s0, int32_t ___e1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158 (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Threading.ParameterizedThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterizedThreadStart__ctor_m6F49448AAE802068CE1DB1BE519962708DA871B0 (ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Thread::.ctor(System.Threading.ParameterizedThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m4E8C9D36164CFCFD65989CAE0F6456AC40BC4492 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516 * ___start0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Start(System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m11EE2B4E0C1BC8520655644C1C31C0CFFC23B5B7 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, RuntimeObject * ___parameter0, const RuntimeMethod* method);
// System.Void DigitalSalmon.TextureUtilities/Scaling/<>c__DisplayClass6_0::<ThreadedScale>g__Action|0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CThreadedScaleU3Eg__ActionU7C0_m45FA61DE3EBC48DC7941F76F4ED540A81E4F1E09 (U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B * __this, RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Void DigitalSalmon.TextureUtilities/Scaling/<>c__DisplayClass6_0::<ThreadedScale>g__Scale|1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CThreadedScaleU3Eg__ScaleU7C1_mC4C02B2C5A097F9D2A1A6B9024DB2922F02E066C (U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B * __this, RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC (int32_t ___millisecondsTimeout0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Texture2D::Resize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture2D_Resize_m3B472A6ED37D683DC4162504F6DCF42E1FA2195C (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void DigitalSalmon.TextureUtilities/Scaling::BilinearScale(System.Object,DigitalSalmon.TextureUtilities/Scaling/ScaleSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scaling_BilinearScale_m66953B2D6056EC2CB8C43BB857402B494C904417 (RuntimeObject * ___obj0, ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * ___settings1, const RuntimeMethod* method);
// System.Void DigitalSalmon.TextureUtilities/Scaling::PointScale(System.Object,DigitalSalmon.TextureUtilities/Scaling/ScaleSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scaling_PointScale_mF3C019176BB72C24D849B51968A3BC7B796B312F (RuntimeObject * ___obj0, ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * ___settings1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean DigitalSalmon.AnimatedTransformPreview::get_AllowSample()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatedTransformPreview_get_AllowSample_m334BDF7769DC1A5E421E520E35FB6FFCADBB6E42 (AnimatedTransformPreview_tC83BEE154460B1FEB099401AC7806FFEADF5B8C6 * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void DigitalSalmon.AnimatedTransformPreview::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedTransformPreview_Update_mC7B820D91E115BC834DDF9DFF16B6B5EA8B14853 (AnimatedTransformPreview_tC83BEE154460B1FEB099401AC7806FFEADF5B8C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = AnimatedTransformPreview_get_AllowSample_m334BDF7769DC1A5E421E520E35FB6FFCADBB6E42(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = __this->get_animAnimator_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_3 = __this->get_clip_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0026;
		}
	}

IL_0025:
	{
		return;
	}

IL_0026:
	{
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_5 = __this->get_clip_5();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6 = __this->get_animAnimator_4();
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		float L_8 = __this->get_time_8();
		NullCheck(L_5);
		AnimationClip_SampleAnimation_mAE6FB426F2CC5ECC4AF43F4DA060DEF3EDC33852(L_5, L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.AnimatedTransformPreview::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedTransformPreview_OnDrawGizmos_m33E54273278FB7F18D450EE339AB02F8256AC8B3 (AnimatedTransformPreview_tC83BEE154460B1FEB099401AC7806FFEADF5B8C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Colours_get_WHITE_10_m5E625D08F89C0177546767E2D9195E406AB6303D_inline(/*hidden argument*/NULL);
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_0, /*hidden argument*/NULL);
		AnimatedTransformPreview_DrawAnimTrail_mB95A85FC5223604E6EDD177B2282701A38BABA79(__this, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.AnimatedTransformPreview::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedTransformPreview_OnDrawGizmosSelected_mF981BC748206C594386A329C12C0541F29553380 (AnimatedTransformPreview_tC83BEE154460B1FEB099401AC7806FFEADF5B8C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->get_LIGHT_BLUE_80();
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_0, /*hidden argument*/NULL);
		AnimatedTransformPreview_DrawAnimTrail_mB95A85FC5223604E6EDD177B2282701A38BABA79(__this, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.AnimatedTransformPreview::DrawAnimTrail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedTransformPreview_DrawAnimTrail_mB95A85FC5223604E6EDD177B2282701A38BABA79 (AnimatedTransformPreview_tC83BEE154460B1FEB099401AC7806FFEADF5B8C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	{
		bool L_0;
		L_0 = AnimatedTransformPreview_get_AllowSample_m334BDF7769DC1A5E421E520E35FB6FFCADBB6E42(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = __this->get_animAnimator_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0033;
		}
	}
	{
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_3 = __this->get_clip_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0033;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_previewTransform_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0034;
		}
	}

IL_0033:
	{
		return;
	}

IL_0034:
	{
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_7 = __this->get_positions_9();
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_8 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_8, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		__this->set_positions_9(L_8);
	}

IL_0047:
	{
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_9 = __this->get_positions_9();
		NullCheck(L_9);
		List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702(L_9, /*hidden argument*/List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_10 = __this->get_clip_5();
		NullCheck(L_10);
		float L_11;
		L_11 = AnimationClip_get_length_m7917C4C333DD8083A5395581652C227E0CECC82B(L_10, /*hidden argument*/NULL);
		float L_12 = __this->get_sampleDeltaTime_7();
		int32_t L_13;
		L_13 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(((float)((float)L_11/(float)L_12)), /*hidden argument*/NULL);
		V_0 = L_13;
		V_1 = 0;
		goto IL_00b6;
	}

IL_006e:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_16 = __this->get_clip_5();
		NullCheck(L_16);
		float L_17;
		L_17 = AnimationClip_get_length_m7917C4C333DD8083A5395581652C227E0CECC82B(L_16, /*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_multiply((float)((float)((float)((float)((float)L_14))/(float)((float)((float)L_15)))), (float)L_17));
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_18 = __this->get_clip_5();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_19 = __this->get_animAnimator_4();
		NullCheck(L_19);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_19, /*hidden argument*/NULL);
		float L_21 = V_2;
		NullCheck(L_18);
		AnimationClip_SampleAnimation_mAE6FB426F2CC5ECC4AF43F4DA060DEF3EDC33852(L_18, L_20, L_21, /*hidden argument*/NULL);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_22 = __this->get_positions_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23 = __this->get_previewTransform_6();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_22, L_25, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_00b6:
	{
		int32_t L_27 = V_1;
		int32_t L_28 = V_0;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_006e;
		}
	}
	{
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_29 = __this->get_clip_5();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_30 = __this->get_animAnimator_4();
		NullCheck(L_30);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31;
		L_31 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_30, /*hidden argument*/NULL);
		float L_32 = __this->get_time_8();
		NullCheck(L_29);
		AnimationClip_SampleAnimation_mAE6FB426F2CC5ECC4AF43F4DA060DEF3EDC33852(L_29, L_31, L_32, /*hidden argument*/NULL);
		V_3 = 0;
		goto IL_00fd;
	}

IL_00da:
	{
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_33 = __this->get_positions_9();
		int32_t L_34 = V_3;
		NullCheck(L_33);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_33, L_34, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_36 = __this->get_positions_9();
		int32_t L_37 = V_3;
		NullCheck(L_36);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_36, ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1)), /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(L_35, L_38, /*hidden argument*/NULL);
		int32_t L_39 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00fd:
	{
		int32_t L_40 = V_3;
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_41 = __this->get_positions_9();
		NullCheck(L_41);
		int32_t L_42;
		L_42 = List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline(L_41, /*hidden argument*/List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)1)))))
		{
			goto IL_00da;
		}
	}
	{
		return;
	}
}
// System.Void DigitalSalmon.AnimatedTransformPreview::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedTransformPreview__ctor_m32C12C092563542BAC578FF37E7DDFAFA878FCCF (AnimatedTransformPreview_tC83BEE154460B1FEB099401AC7806FFEADF5B8C6 * __this, const RuntimeMethod* method)
{
	{
		__this->set_sampleDeltaTime_7((0.333000004f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 DigitalSalmon.Axis::ToVector(DigitalSalmon.Axis3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Axis_ToVector_m4D9F8667A059C1B94B38CD01EC38FFF982DCB900 (int32_t ___axis0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___axis0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_001a;
			}
			case 1:
			{
				goto IL_0020;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0026;
			}
		}
	}
	{
		goto IL_002c;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		return L_1;
	}

IL_0020:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		return L_2;
	}

IL_0026:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		return L_3;
	}

IL_002c:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Animator DigitalSalmon.BaseBehaviour::get_animator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * BaseBehaviour_get_animator_mC142860656F141FBEB9DC367022FC76CC152C064 (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseBehaviour_LocateComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m49281D8D1DF9D00C8B432113DE361AAF59A0C404_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** L_0 = __this->get_address_of__animator_4();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1;
		L_1 = BaseBehaviour_LocateComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m49281D8D1DF9D00C8B432113DE361AAF59A0C404(__this, (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 **)L_0, /*hidden argument*/BaseBehaviour_LocateComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m49281D8D1DF9D00C8B432113DE361AAF59A0C404_RuntimeMethod_var);
		return L_1;
	}
}
// UnityEngine.RectTransform DigitalSalmon.BaseBehaviour::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * BaseBehaviour_get_rectTransform_mB865152E1D5C212CA2A0EF81F07E6701F656E9A7 (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseBehaviour_LocateComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m3A7BC1C30AEEFB4B49C266900C077877CB9E7944_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** L_0 = __this->get_address_of__rectTransform_16();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1;
		L_1 = BaseBehaviour_LocateComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m3A7BC1C30AEEFB4B49C266900C077877CB9E7944(__this, (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 **)L_0, /*hidden argument*/BaseBehaviour_LocateComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m3A7BC1C30AEEFB4B49C266900C077877CB9E7944_RuntimeMethod_var);
		return L_1;
	}
}
// UnityEngine.AudioSource DigitalSalmon.BaseBehaviour::get_audio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * BaseBehaviour_get_audio_m507756944FF1D910C89D8A9C81938ACB7BC7560C (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseBehaviour_LocateComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mEE60CB0E27EADC3EAD6BB6F12C3E72AA2EBFC306_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** L_0 = __this->get_address_of__audio_5();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1;
		L_1 = BaseBehaviour_LocateComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mEE60CB0E27EADC3EAD6BB6F12C3E72AA2EBFC306(__this, (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B **)L_0, /*hidden argument*/BaseBehaviour_LocateComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mEE60CB0E27EADC3EAD6BB6F12C3E72AA2EBFC306_RuntimeMethod_var);
		return L_1;
	}
}
// UnityEngine.Camera DigitalSalmon.BaseBehaviour::get_camera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * BaseBehaviour_get_camera_m58ADA6B49264B661E8B4C6DD74E36763EC1ACBA0 (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseBehaviour_LocateComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mBDFDDDD72A654A812EEBF0FC07CE6DC2BE34FC3C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** L_0 = __this->get_address_of__camera_6();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = BaseBehaviour_LocateComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mBDFDDDD72A654A812EEBF0FC07CE6DC2BE34FC3C(__this, (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C **)L_0, /*hidden argument*/BaseBehaviour_LocateComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mBDFDDDD72A654A812EEBF0FC07CE6DC2BE34FC3C_RuntimeMethod_var);
		return L_1;
	}
}
// UnityEngine.Collider DigitalSalmon.BaseBehaviour::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * BaseBehaviour_get_collider_m8E9C93E0D14F98A87E9213E0286563D3D5AF869C (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseBehaviour_LocateComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m5838E7B7BC903B068DD5693BD49411CB4CA7617E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** L_0 = __this->get_address_of__collider_7();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_1;
		L_1 = BaseBehaviour_LocateComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m5838E7B7BC903B068DD5693BD49411CB4CA7617E(__this, (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 **)L_0, /*hidden argument*/BaseBehaviour_LocateComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m5838E7B7BC903B068DD5693BD49411CB4CA7617E_RuntimeMethod_var);
		return L_1;
	}
}
// UnityEngine.Collider2D DigitalSalmon.BaseBehaviour::get_collider2D()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * BaseBehaviour_get_collider2D_mF505ACF157F130726DD6D35AC71F4D697E10BDE5 (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseBehaviour_LocateComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m05F28C4F4E083FE2AB22C955405B0646F1A80525_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** L_0 = __this->get_address_of__collider2D_8();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_1;
		L_1 = BaseBehaviour_LocateComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m05F28C4F4E083FE2AB22C955405B0646F1A80525(__this, (Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 **)L_0, /*hidden argument*/BaseBehaviour_LocateComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m05F28C4F4E083FE2AB22C955405B0646F1A80525_RuntimeMethod_var);
		return L_1;
	}
}
// UnityEngine.Light DigitalSalmon.BaseBehaviour::get_light()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Light_tA2F349FE839781469A0344CF6039B51512394275 * BaseBehaviour_get_light_m6178C4B6D750773CF84069DEFAB48C565F75BA52 (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseBehaviour_LocateComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m82770ADE1F2C44B5E5E00CA6E1F9341514EE539E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Light_tA2F349FE839781469A0344CF6039B51512394275 ** L_0 = __this->get_address_of__light_9();
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_1;
		L_1 = BaseBehaviour_LocateComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m82770ADE1F2C44B5E5E00CA6E1F9341514EE539E(__this, (Light_tA2F349FE839781469A0344CF6039B51512394275 **)L_0, /*hidden argument*/BaseBehaviour_LocateComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m82770ADE1F2C44B5E5E00CA6E1F9341514EE539E_RuntimeMethod_var);
		return L_1;
	}
}
// UnityEngine.ParticleSystem DigitalSalmon.BaseBehaviour::get_particleSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * BaseBehaviour_get_particleSystem_m07C3CC618AD3D19AFC74B1FE05876938B7B602E9 (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseBehaviour_LocateComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m5DA99315E8A897D4B44247935C9022C46F827399_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** L_0 = __this->get_address_of__particleSystem_10();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_1;
		L_1 = BaseBehaviour_LocateComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m5DA99315E8A897D4B44247935C9022C46F827399(__this, (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E **)L_0, /*hidden argument*/BaseBehaviour_LocateComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m5DA99315E8A897D4B44247935C9022C46F827399_RuntimeMethod_var);
		return L_1;
	}
}
// UnityEngine.Renderer DigitalSalmon.BaseBehaviour::get_renderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * BaseBehaviour_get_renderer_m53C4E44C166D77E7E550DE61CC4E6BD8B8EF537F (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseBehaviour_LocateComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m927C5DBBBCBC402CE3D070B5FDB9D4889619F3CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** L_0 = __this->get_address_of__renderer_11();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_1;
		L_1 = BaseBehaviour_LocateComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m927C5DBBBCBC402CE3D070B5FDB9D4889619F3CB(__this, (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C **)L_0, /*hidden argument*/BaseBehaviour_LocateComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m927C5DBBBCBC402CE3D070B5FDB9D4889619F3CB_RuntimeMethod_var);
		return L_1;
	}
}
// UnityEngine.Rigidbody DigitalSalmon.BaseBehaviour::get_rigidbody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * BaseBehaviour_get_rigidbody_m59BE4ADA09F6AC10636D89B255C906763E0435C9 (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseBehaviour_LocateComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m609EC327A886D56FA65D0F368E74CF67F9A93559_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** L_0 = __this->get_address_of__rigidBody_12();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_1;
		L_1 = BaseBehaviour_LocateComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m609EC327A886D56FA65D0F368E74CF67F9A93559(__this, (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A **)L_0, /*hidden argument*/BaseBehaviour_LocateComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m609EC327A886D56FA65D0F368E74CF67F9A93559_RuntimeMethod_var);
		return L_1;
	}
}
// UnityEngine.Rigidbody2D DigitalSalmon.BaseBehaviour::get_rigidbody2D()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * BaseBehaviour_get_rigidbody2D_m65E469A88975D3189747E80CAAE7DB7107BA07BE (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseBehaviour_LocateComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mB4597A7D5A1B9FADB5B7B6ADFF62AC5A3B6037EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** L_0 = __this->get_address_of__rigidBody2D_13();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_1;
		L_1 = BaseBehaviour_LocateComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mB4597A7D5A1B9FADB5B7B6ADFF62AC5A3B6037EB(__this, (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 **)L_0, /*hidden argument*/BaseBehaviour_LocateComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mB4597A7D5A1B9FADB5B7B6ADFF62AC5A3B6037EB_RuntimeMethod_var);
		return L_1;
	}
}
// UnityEngine.Transform DigitalSalmon.BaseBehaviour::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * BaseBehaviour_get_transform_m7FD02D01E8D916C8EB1E5FEB1A8BE4EFB8488AA0 (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get__transform_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2;
		V_0 = L_3;
		__this->set__transform_15(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = V_0;
		return L_4;
	}

IL_001e:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get__transform_15();
		return L_5;
	}
}
// DigitalSalmon.Sequence DigitalSalmon.BaseBehaviour::get_sequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * BaseBehaviour_get_sequence_m73027DACACA4C86FDE2A9E351AE61989AF3E1852 (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * V_0 = NULL;
	Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * G_B2_0 = NULL;
	Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * G_B1_0 = NULL;
	{
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_0 = __this->get__sequence_14();
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_2;
		L_2 = VirtFuncInvoker0< MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * >::Invoke(5 /* UnityEngine.MonoBehaviour DigitalSalmon.BaseBehaviour::get_SequenceMonoBehaviour() */, __this);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_3 = (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C *)il2cpp_codegen_object_new(Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C_il2cpp_TypeInfo_var);
		Sequence__ctor_mDD0D489EA7C9515DF2935A80E4AC97BC11ADEBC2(L_3, L_2, /*hidden argument*/NULL);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_4 = L_3;
		V_0 = L_4;
		__this->set__sequence_14(L_4);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_001e:
	{
		return G_B2_0;
	}
}
// System.Boolean DigitalSalmon.BaseBehaviour::get_LocateComponentsInChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseBehaviour_get_LocateComponentsInChildren_mB07C76E8A2EB9638EEB1E070DF46E978A492DA66 (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// UnityEngine.MonoBehaviour DigitalSalmon.BaseBehaviour::get_SequenceMonoBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * BaseBehaviour_get_SequenceMonoBehaviour_mF26DC5DD49F887B97C08BBDECAFD9BE29FDBD820 (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, const RuntimeMethod* method)
{
	{
		return __this;
	}
}
// System.Void DigitalSalmon.BaseBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseBehaviour__ctor_mCE0549FB5133CD6C17DF7D64E2D59E0238F2B3AD (BaseBehaviour_t1345835C22119152D8D498B1FCDDC2F761C9EA52 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Camera DigitalSalmon.Billboard::get_Camera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Billboard_get_Camera_m37B4E432AC757A027F5C401A5AE01CCBD06A9064 (Billboard_tE50EBED70F65C0D04F78F44B69BD222194206C45 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_useMainCamera_20();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = Camera_get_current_m4E5A6D19F422F8DD2CFF4EE80C65B033F24C45D6(/*hidden argument*/NULL);
		return L_1;
	}

IL_000e:
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void DigitalSalmon.Billboard::OnWillRenderObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Billboard_OnWillRenderObject_mFEE73F10EDB08B0D753A7B6D81064D7D26B062D3 (Billboard_tE50EBED70F65C0D04F78F44B69BD222194206C45 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_executeInEditMode_19();
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		bool L_1;
		L_1 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}

IL_000f:
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Billboard_get_Camera_m37B4E432AC757A027F5C401A5AE01CCBD06A9064(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}

IL_001d:
	{
		return;
	}

IL_001e:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = BaseBehaviour_get_transform_m7FD02D01E8D916C8EB1E5FEB1A8BE4EFB8488AA0(__this, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5;
		L_5 = Billboard_get_Camera_m37B4E432AC757A027F5C401A5AE01CCBD06A9064(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_LookAt_m6037828F5E8329B052D62472060274F9A3261ECA(L_4, L_6, L_7, /*hidden argument*/NULL);
		bool L_8 = __this->get_flip_18();
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = BaseBehaviour_get_transform_m7FD02D01E8D916C8EB1E5FEB1A8BE4EFB8488AA0(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_Rotate_m12614C5FABB1F4A9A6800EE65BBFDB433D6D804D(L_9, L_10, (180.0f), 1, /*hidden argument*/NULL);
	}

IL_0057:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = BaseBehaviour_get_transform_m7FD02D01E8D916C8EB1E5FEB1A8BE4EFB8488AA0(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = BaseBehaviour_get_transform_m7FD02D01E8D916C8EB1E5FEB1A8BE4EFB8488AA0(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_12, /*hidden argument*/NULL);
		float L_14 = __this->get_zAngle_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3Extensions_WithZ_mF7DF2AAE7C2EEA666EE031E2183CC1E644877DFC(L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_11, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.Billboard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Billboard__ctor_mACDD6E36E2521B8C72B15F1F71D0A3826B4C5C3F (Billboard_tE50EBED70F65C0D04F78F44B69BD222194206C45 * __this, const RuntimeMethod* method)
{
	{
		BaseBehaviour__ctor_mCE0549FB5133CD6C17DF7D64E2D59E0238F2B3AD(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DigitalSalmon.Fayte.ColliderBehaviour::add_ColliderEnter(DigitalSalmon.EventHandler`1<UnityEngine.Collider>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderBehaviour_add_ColliderEnter_m67F9D463E43BA79096F115B53A8C0E233E50CAC8 (ColliderBehaviour_t57531986DD4AF6CE6932F6730FCA26FAD8A10297 * __this, EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * V_0 = NULL;
	EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * V_1 = NULL;
	EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * V_2 = NULL;
	{
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_0 = __this->get_ColliderEnter_17();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_2 = V_1;
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837_il2cpp_TypeInfo_var));
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 ** L_5 = __this->get_address_of_ColliderEnter_17();
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_6 = V_2;
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_7 = V_1;
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 *>((EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_9 = V_0;
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 *)L_9) == ((RuntimeObject*)(EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DigitalSalmon.Fayte.ColliderBehaviour::remove_ColliderEnter(DigitalSalmon.EventHandler`1<UnityEngine.Collider>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderBehaviour_remove_ColliderEnter_mCA1F589055661E1C982B4BDF49728621986C8ACA (ColliderBehaviour_t57531986DD4AF6CE6932F6730FCA26FAD8A10297 * __this, EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * V_0 = NULL;
	EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * V_1 = NULL;
	EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * V_2 = NULL;
	{
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_0 = __this->get_ColliderEnter_17();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_2 = V_1;
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837_il2cpp_TypeInfo_var));
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 ** L_5 = __this->get_address_of_ColliderEnter_17();
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_6 = V_2;
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_7 = V_1;
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 *>((EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_9 = V_0;
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 *)L_9) == ((RuntimeObject*)(EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DigitalSalmon.Fayte.ColliderBehaviour::add_ColliderExit(DigitalSalmon.EventHandler`1<UnityEngine.Collider>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderBehaviour_add_ColliderExit_m1DE17E759A467C92AFF0C9B8832768003CFFAE4A (ColliderBehaviour_t57531986DD4AF6CE6932F6730FCA26FAD8A10297 * __this, EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * V_0 = NULL;
	EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * V_1 = NULL;
	EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * V_2 = NULL;
	{
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_0 = __this->get_ColliderExit_18();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_2 = V_1;
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837_il2cpp_TypeInfo_var));
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 ** L_5 = __this->get_address_of_ColliderExit_18();
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_6 = V_2;
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_7 = V_1;
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 *>((EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_9 = V_0;
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 *)L_9) == ((RuntimeObject*)(EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DigitalSalmon.Fayte.ColliderBehaviour::remove_ColliderExit(DigitalSalmon.EventHandler`1<UnityEngine.Collider>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderBehaviour_remove_ColliderExit_m29C07F561C2829EEF1D277B602FCB237BA9579DC (ColliderBehaviour_t57531986DD4AF6CE6932F6730FCA26FAD8A10297 * __this, EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * V_0 = NULL;
	EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * V_1 = NULL;
	EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * V_2 = NULL;
	{
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_0 = __this->get_ColliderExit_18();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_2 = V_1;
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837_il2cpp_TypeInfo_var));
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 ** L_5 = __this->get_address_of_ColliderExit_18();
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_6 = V_2;
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_7 = V_1;
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 *>((EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_9 = V_0;
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 *)L_9) == ((RuntimeObject*)(EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Func`2<UnityEngine.Collider,System.Boolean> DigitalSalmon.Fayte.ColliderBehaviour::get_ValidCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 * ColliderBehaviour_get_ValidCheck_m6BA7638CF1C1CAAF0CB24BBD36E10B25C433E2C8 (ColliderBehaviour_t57531986DD4AF6CE6932F6730FCA26FAD8A10297 * __this, const RuntimeMethod* method)
{
	{
		Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 * L_0 = __this->get_U3CValidCheckU3Ek__BackingField_19();
		return L_0;
	}
}
// System.Void DigitalSalmon.Fayte.ColliderBehaviour::set_ValidCheck(System.Func`2<UnityEngine.Collider,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderBehaviour_set_ValidCheck_m783956FE032468FBAEB4DDC62EB3E3EC466E85D9 (ColliderBehaviour_t57531986DD4AF6CE6932F6730FCA26FAD8A10297 * __this, Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 * ___value0, const RuntimeMethod* method)
{
	{
		Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 * L_0 = ___value0;
		__this->set_U3CValidCheckU3Ek__BackingField_19(L_0);
		return;
	}
}
// System.Void DigitalSalmon.Fayte.ColliderBehaviour::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderBehaviour_OnTriggerEnter_mDC9FDE6EAF505C12C9D521B1EBAAB53B122C027E (ColliderBehaviour_t57531986DD4AF6CE6932F6730FCA26FAD8A10297 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandlerExtensions_InvokeSafe_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mC2107D6746C798BEC85C75ACB353813EF9FA03B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_mADAFA7DAC444D5B3A69851F238A557D388D29678_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 * L_0;
		L_0 = ColliderBehaviour_get_ValidCheck_m6BA7638CF1C1CAAF0CB24BBD36E10B25C433E2C8_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 * L_1;
		L_1 = ColliderBehaviour_get_ValidCheck_m6BA7638CF1C1CAAF0CB24BBD36E10B25C433E2C8_inline(__this, /*hidden argument*/NULL);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_2 = ___col0;
		NullCheck(L_1);
		bool L_3;
		L_3 = Func_2_Invoke_mADAFA7DAC444D5B3A69851F238A557D388D29678(L_1, L_2, /*hidden argument*/Func_2_Invoke_mADAFA7DAC444D5B3A69851F238A557D388D29678_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_4 = __this->get_ColliderEnter_17();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_5 = ___col0;
		EventHandlerExtensions_InvokeSafe_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mC2107D6746C798BEC85C75ACB353813EF9FA03B8(L_4, L_5, /*hidden argument*/EventHandlerExtensions_InvokeSafe_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mC2107D6746C798BEC85C75ACB353813EF9FA03B8_RuntimeMethod_var);
		return;
	}
}
// System.Void DigitalSalmon.Fayte.ColliderBehaviour::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderBehaviour_OnTriggerExit_m6ED73926054A9E533445847E9FE7EB52ECD00BF5 (ColliderBehaviour_t57531986DD4AF6CE6932F6730FCA26FAD8A10297 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandlerExtensions_InvokeSafe_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mC2107D6746C798BEC85C75ACB353813EF9FA03B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_mADAFA7DAC444D5B3A69851F238A557D388D29678_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 * L_0;
		L_0 = ColliderBehaviour_get_ValidCheck_m6BA7638CF1C1CAAF0CB24BBD36E10B25C433E2C8_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 * L_1;
		L_1 = ColliderBehaviour_get_ValidCheck_m6BA7638CF1C1CAAF0CB24BBD36E10B25C433E2C8_inline(__this, /*hidden argument*/NULL);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_2 = ___col0;
		NullCheck(L_1);
		bool L_3;
		L_3 = Func_2_Invoke_mADAFA7DAC444D5B3A69851F238A557D388D29678(L_1, L_2, /*hidden argument*/Func_2_Invoke_mADAFA7DAC444D5B3A69851F238A557D388D29678_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_4 = __this->get_ColliderExit_18();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_5 = ___col0;
		EventHandlerExtensions_InvokeSafe_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mC2107D6746C798BEC85C75ACB353813EF9FA03B8(L_4, L_5, /*hidden argument*/EventHandlerExtensions_InvokeSafe_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mC2107D6746C798BEC85C75ACB353813EF9FA03B8_RuntimeMethod_var);
		return;
	}
}
// System.Void DigitalSalmon.Fayte.ColliderBehaviour::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderBehaviour_OnCollisionEnter_m339A4C5FB902901052C74BC77E06058D56D53F19 (ColliderBehaviour_t57531986DD4AF6CE6932F6730FCA26FAD8A10297 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandlerExtensions_InvokeSafe_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mC2107D6746C798BEC85C75ACB353813EF9FA03B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_mADAFA7DAC444D5B3A69851F238A557D388D29678_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 * L_0;
		L_0 = ColliderBehaviour_get_ValidCheck_m6BA7638CF1C1CAAF0CB24BBD36E10B25C433E2C8_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 * L_1;
		L_1 = ColliderBehaviour_get_ValidCheck_m6BA7638CF1C1CAAF0CB24BBD36E10B25C433E2C8_inline(__this, /*hidden argument*/NULL);
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_2 = ___collision0;
		NullCheck(L_2);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_3;
		L_3 = Collision_get_collider_m0AC4446E6B9168A0FB19DA376559C812E43779F8(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = Func_2_Invoke_mADAFA7DAC444D5B3A69851F238A557D388D29678(L_1, L_3, /*hidden argument*/Func_2_Invoke_mADAFA7DAC444D5B3A69851F238A557D388D29678_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_5 = __this->get_ColliderEnter_17();
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_6 = ___collision0;
		NullCheck(L_6);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_7;
		L_7 = Collision_get_collider_m0AC4446E6B9168A0FB19DA376559C812E43779F8(L_6, /*hidden argument*/NULL);
		EventHandlerExtensions_InvokeSafe_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mC2107D6746C798BEC85C75ACB353813EF9FA03B8(L_5, L_7, /*hidden argument*/EventHandlerExtensions_InvokeSafe_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mC2107D6746C798BEC85C75ACB353813EF9FA03B8_RuntimeMethod_var);
		return;
	}
}
// System.Void DigitalSalmon.Fayte.ColliderBehaviour::OnCollisionExit(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderBehaviour_OnCollisionExit_mE0A43CB36118E7EB3218051C6EF8EC5BCD561243 (ColliderBehaviour_t57531986DD4AF6CE6932F6730FCA26FAD8A10297 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandlerExtensions_InvokeSafe_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mC2107D6746C798BEC85C75ACB353813EF9FA03B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_mADAFA7DAC444D5B3A69851F238A557D388D29678_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 * L_0;
		L_0 = ColliderBehaviour_get_ValidCheck_m6BA7638CF1C1CAAF0CB24BBD36E10B25C433E2C8_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 * L_1;
		L_1 = ColliderBehaviour_get_ValidCheck_m6BA7638CF1C1CAAF0CB24BBD36E10B25C433E2C8_inline(__this, /*hidden argument*/NULL);
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_2 = ___collision0;
		NullCheck(L_2);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_3;
		L_3 = Collision_get_collider_m0AC4446E6B9168A0FB19DA376559C812E43779F8(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = Func_2_Invoke_mADAFA7DAC444D5B3A69851F238A557D388D29678(L_1, L_3, /*hidden argument*/Func_2_Invoke_mADAFA7DAC444D5B3A69851F238A557D388D29678_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		EventHandler_1_tF44B41F6C734091AEBA5B3460090831A55517837 * L_5 = __this->get_ColliderExit_18();
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_6 = ___collision0;
		NullCheck(L_6);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_7;
		L_7 = Collision_get_collider_m0AC4446E6B9168A0FB19DA376559C812E43779F8(L_6, /*hidden argument*/NULL);
		EventHandlerExtensions_InvokeSafe_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mC2107D6746C798BEC85C75ACB353813EF9FA03B8(L_5, L_7, /*hidden argument*/EventHandlerExtensions_InvokeSafe_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mC2107D6746C798BEC85C75ACB353813EF9FA03B8_RuntimeMethod_var);
		return;
	}
}
// System.Void DigitalSalmon.Fayte.ColliderBehaviour::Construct(System.Func`2<UnityEngine.Collider,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderBehaviour_Construct_mB90DF4CDF6CA04CB7AEE695B73BC3F9357B2C253 (ColliderBehaviour_t57531986DD4AF6CE6932F6730FCA26FAD8A10297 * __this, Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 * ___validCheck0, const RuntimeMethod* method)
{
	{
		Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 * L_0 = ___validCheck0;
		ColliderBehaviour_set_ValidCheck_m783956FE032468FBAEB4DDC62EB3E3EC466E85D9_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.Fayte.ColliderBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderBehaviour__ctor_m5A0855C41007DA629027789D7B0BCE53136C5A40 (ColliderBehaviour_t57531986DD4AF6CE6932F6730FCA26FAD8A10297 * __this, const RuntimeMethod* method)
{
	{
		BaseBehaviour__ctor_mCE0549FB5133CD6C17DF7D64E2D59E0238F2B3AD(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Color DigitalSalmon.Extensions.ColorExtensions::WithAlpha(UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ColorExtensions_WithAlpha_m19C95E251C2981F063C84C52B707C06B3F5111B6 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___self0, float ___alpha1, const RuntimeMethod* method)
{
	{
		float L_0 = ___alpha1;
		(&___self0)->set_a_3(L_0);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ___self0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Color DigitalSalmon.ColorUtilities::ULerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ColorUtilities_ULerp_m0D9F84BD0AB9A7EB104B4DDE68AA7A494E563F27 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, float ___t2, const RuntimeMethod* method)
{
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___a0;
		float L_1 = L_0.get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___b1;
		float L_3 = L_2.get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = ___a0;
		float L_5 = L_4.get_r_0();
		float L_6 = ___t2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = ___a0;
		float L_8 = L_7.get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9 = ___b1;
		float L_10 = L_9.get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11 = ___a0;
		float L_12 = L_11.get_g_1();
		float L_13 = ___t2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14 = ___a0;
		float L_15 = L_14.get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16 = ___b1;
		float L_17 = L_16.get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18 = ___a0;
		float L_19 = L_18.get_b_2();
		float L_20 = ___t2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_21 = ___a0;
		float L_22 = L_21.get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_23 = ___b1;
		float L_24 = L_23.get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_25 = ___a0;
		float L_26 = L_25.get_a_3();
		float L_27 = ___t2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_28), ((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_5)), (float)L_6)))), ((float)il2cpp_codegen_add((float)L_8, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_10, (float)L_12)), (float)L_13)))), ((float)il2cpp_codegen_add((float)L_15, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_17, (float)L_19)), (float)L_20)))), ((float)il2cpp_codegen_add((float)L_22, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_24, (float)L_26)), (float)L_27)))), /*hidden argument*/NULL);
		return L_28;
	}
}
// System.Void DigitalSalmon.ColorUtilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorUtilities__cctor_mC97DC0278601827F0741EC4E82C0CDA79B0D5D68 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorUtilities_t487D68EDAAC238FDD2B4B3F21DE949CD75C3C244_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t4B055B73A4446BBF7998103E56616167484797CA____AEAB8CBF0F8D91747CD9D0B9512DF7A2F96DFAEA4D2FFEA89EF2654D47B721AF_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t4B055B73A4446BBF7998103E56616167484797CA____AEAB8CBF0F8D91747CD9D0B9512DF7A2F96DFAEA4D2FFEA89EF2654D47B721AF_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((ColorUtilities_t487D68EDAAC238FDD2B4B3F21DE949CD75C3C244_StaticFields*)il2cpp_codegen_static_fields_for(ColorUtilities_t487D68EDAAC238FDD2B4B3F21DE949CD75C3C244_il2cpp_TypeInfo_var))->set_TRIM_RGB_START_0(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Color DigitalSalmon.Colours::get_GREY05()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Colours_get_GREY05_m9E7F4679BA453AD46E1F8F00A9270B5ECE34F653 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->get_U3CGREY05U3Ek__BackingField_13();
		return L_0;
	}
}
// UnityEngine.Color DigitalSalmon.Colours::get_GREY15()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Colours_get_GREY15_m97821CB0EA8EAF059EC86321DD5F9E2ACEC22706 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->get_U3CGREY15U3Ek__BackingField_23();
		return L_0;
	}
}
// UnityEngine.Color DigitalSalmon.Colours::get_GREY20()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Colours_get_GREY20_m41FAFAED8078C7A1B4D28D0AF0C1EF88A656007D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->get_U3CGREY20U3Ek__BackingField_28();
		return L_0;
	}
}
// UnityEngine.Color DigitalSalmon.Colours::get_GREY30()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Colours_get_GREY30_mE0467E1C4D4EA69CA50736026F19818EAB98228B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->get_U3CGREY30U3Ek__BackingField_33();
		return L_0;
	}
}
// UnityEngine.Color DigitalSalmon.Colours::get_GREY55()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Colours_get_GREY55_m942C23114DFC8B1380CAE9D629CDD6A8106E1919 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->get_U3CGREY55U3Ek__BackingField_38();
		return L_0;
	}
}
// UnityEngine.Color DigitalSalmon.Colours::get_GREY60()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Colours_get_GREY60_m514467352986C23F91296A0DC0FC8921EDD73870 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->get_U3CGREY60U3Ek__BackingField_39();
		return L_0;
	}
}
// UnityEngine.Color DigitalSalmon.Colours::get_GREY70()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Colours_get_GREY70_m42AA2502C74ECB161216F13C3C2A8DE46776F8AB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->get_U3CGREY70U3Ek__BackingField_41();
		return L_0;
	}
}
// UnityEngine.Color DigitalSalmon.Colours::get_GREY75()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Colours_get_GREY75_m22010D55DF568D60C5222EB012B0E7EFFE0148ED (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->get_U3CGREY75U3Ek__BackingField_42();
		return L_0;
	}
}
// UnityEngine.Color DigitalSalmon.Colours::get_GREY80()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Colours_get_GREY80_mD237F00DEB63C9A23BAA940DC9CA53CA6B7B3B6D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->get_U3CGREY80U3Ek__BackingField_43();
		return L_0;
	}
}
// UnityEngine.Color DigitalSalmon.Colours::get_GREY95()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Colours_get_GREY95_m8B866C7EF45B3CF151CDCF32288E30139ACFE4B6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->get_U3CGREY95U3Ek__BackingField_46();
		return L_0;
	}
}
// UnityEngine.Color DigitalSalmon.Colours::get_WHITE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Colours_get_WHITE_m45D414A73FCD08B4A24EA6316D8C749FB623BF8E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->get_U3CWHITEU3Ek__BackingField_48();
		return L_0;
	}
}
// UnityEngine.Color DigitalSalmon.Colours::get_BLACK_50()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Colours_get_BLACK_50_m49066FC903CDDEBEAC1F248D127EC0A112B11674 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->get_U3CBLACK_50U3Ek__BackingField_57();
		return L_0;
	}
}
// UnityEngine.Color DigitalSalmon.Colours::get_BLACK_60()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Colours_get_BLACK_60_m04E30BCBA98A8C916D7B80ABBDBA93F4A2B1D205 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->get_U3CBLACK_60U3Ek__BackingField_58();
		return L_0;
	}
}
// UnityEngine.Color DigitalSalmon.Colours::get_BLACK_70()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Colours_get_BLACK_70_m6DEC6C349E1E5B9C0715C48AD1D79F6F7621513F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->get_U3CBLACK_70U3Ek__BackingField_59();
		return L_0;
	}
}
// UnityEngine.Color DigitalSalmon.Colours::get_BLACK_80()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Colours_get_BLACK_80_m11303CA0571AA6512AB192DCCE83E5736515C512 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->get_U3CBLACK_80U3Ek__BackingField_60();
		return L_0;
	}
}
// UnityEngine.Color DigitalSalmon.Colours::get_WHITE_10()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Colours_get_WHITE_10_m5E625D08F89C0177546767E2D9195E406AB6303D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->get_U3CWHITE_10U3Ek__BackingField_68();
		return L_0;
	}
}
// UnityEngine.Color DigitalSalmon.Colours::Color8(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Colours_Color8_m5886951EEF85F05DE8C6EFBA62ED2F31B37BF381 (int32_t ___r0, int32_t ___g1, int32_t ___b2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___r0;
		int32_t L_1 = ___g1;
		int32_t L_2 = ___b2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_3), ((float)((float)((float)((float)L_0))/(float)(255.0f))), ((float)((float)((float)((float)L_1))/(float)(255.0f))), ((float)((float)((float)((float)L_2))/(float)(255.0f))), (1.0f), /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Color DigitalSalmon.Colours::Color(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B (float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method)
{
	{
		float L_0 = ___r0;
		float L_1 = ___g1;
		float L_2 = ___b2;
		float L_3 = ___a3;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_4), ((float)((float)L_0/(float)(100.0f))), ((float)((float)L_1/(float)(100.0f))), ((float)((float)L_2/(float)(100.0f))), ((float)((float)L_3/(float)(100.0f))), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Color DigitalSalmon.Colours::Color(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541 (float ___v0, const RuntimeMethod* method)
{
	{
		float L_0 = ___v0;
		float L_1 = ___v0;
		float L_2 = ___v0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_3), ((float)((float)L_0/(float)(100.0f))), ((float)((float)L_1/(float)(100.0f))), ((float)((float)L_2/(float)(100.0f))), (1.0f), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void DigitalSalmon.Colours::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Colours__cctor_m4F8BB9464172CC368B6D7AC455A23C9D84A1E563 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((1.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CLOGO_POSITIVEU3Ek__BackingField_0(L_0);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((0.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CLOGO_NEGATIVEU3Ek__BackingField_1(L_1);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((0.0352941193f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CBACKGROUND_DARKU3Ek__BackingField_2(L_2);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((0.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CBLACKU3Ek__BackingField_3(L_3);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((0.100000001f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY001U3Ek__BackingField_4(L_4);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((0.200000003f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY002U3Ek__BackingField_5(L_5);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((0.300000012f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY003U3Ek__BackingField_6(L_6);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7;
		L_7 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((0.5f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY005U3Ek__BackingField_7(L_7);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		L_8 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((0.800000012f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY008U3Ek__BackingField_8(L_8);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9;
		L_9 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((1.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY01U3Ek__BackingField_9(L_9);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		L_10 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((2.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY02U3Ek__BackingField_10(L_10);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		L_11 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((3.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY03U3Ek__BackingField_11(L_11);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((4.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY04U3Ek__BackingField_12(L_12);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		L_13 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((5.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY05U3Ek__BackingField_13(L_13);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14;
		L_14 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((6.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY06U3Ek__BackingField_14(L_14);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15;
		L_15 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((7.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY07U3Ek__BackingField_15(L_15);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16;
		L_16 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((8.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY08U3Ek__BackingField_16(L_16);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17;
		L_17 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((9.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY09U3Ek__BackingField_17(L_17);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18;
		L_18 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((10.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY10U3Ek__BackingField_18(L_18);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_19;
		L_19 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((11.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY11U3Ek__BackingField_19(L_19);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20;
		L_20 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((12.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY12U3Ek__BackingField_20(L_20);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_21;
		L_21 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((13.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY13U3Ek__BackingField_21(L_21);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_22;
		L_22 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((14.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY14U3Ek__BackingField_22(L_22);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_23;
		L_23 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((15.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY15U3Ek__BackingField_23(L_23);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_24;
		L_24 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((16.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY16U3Ek__BackingField_24(L_24);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_25;
		L_25 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((17.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY17U3Ek__BackingField_25(L_25);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_26;
		L_26 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((18.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY18U3Ek__BackingField_26(L_26);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_27;
		L_27 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((19.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY19U3Ek__BackingField_27(L_27);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_28;
		L_28 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((20.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY20U3Ek__BackingField_28(L_28);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_29;
		L_29 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((22.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY22U3Ek__BackingField_29(L_29);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30;
		L_30 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((24.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY24U3Ek__BackingField_30(L_30);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_31;
		L_31 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((26.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY26U3Ek__BackingField_31(L_31);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_32;
		L_32 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((28.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY28U3Ek__BackingField_32(L_32);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_33;
		L_33 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((30.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY30U3Ek__BackingField_33(L_33);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_34;
		L_34 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((35.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY35U3Ek__BackingField_34(L_34);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_35;
		L_35 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((40.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY40U3Ek__BackingField_35(L_35);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_36;
		L_36 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((45.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY45U3Ek__BackingField_36(L_36);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_37;
		L_37 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((50.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY50U3Ek__BackingField_37(L_37);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_38;
		L_38 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((55.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY55U3Ek__BackingField_38(L_38);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_39;
		L_39 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((60.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY60U3Ek__BackingField_39(L_39);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_40;
		L_40 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((65.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY65U3Ek__BackingField_40(L_40);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_41;
		L_41 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((70.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY70U3Ek__BackingField_41(L_41);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_42;
		L_42 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((75.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY75U3Ek__BackingField_42(L_42);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_43;
		L_43 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((80.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY80U3Ek__BackingField_43(L_43);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_44;
		L_44 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((85.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY85U3Ek__BackingField_44(L_44);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_45;
		L_45 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((90.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY90U3Ek__BackingField_45(L_45);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_46;
		L_46 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((95.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY95U3Ek__BackingField_46(L_46);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_47;
		L_47 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((98.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CGREY98U3Ek__BackingField_47(L_47);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_48;
		L_48 = Colours_Color_m52D67D0D3AA0945DDCD393C232ECB3A890B67541((100.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CWHITEU3Ek__BackingField_48(L_48);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_49;
		L_49 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CBLACK_01U3Ek__BackingField_49(L_49);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_50;
		L_50 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((0.0f), (0.0f), (0.0f), (2.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CBLACK_02U3Ek__BackingField_50(L_50);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_51;
		L_51 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((0.0f), (0.0f), (0.0f), (5.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CBLACK_05U3Ek__BackingField_51(L_51);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_52;
		L_52 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((0.0f), (0.0f), (0.0f), (8.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CBLACK_08U3Ek__BackingField_52(L_52);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_53;
		L_53 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((0.0f), (0.0f), (0.0f), (10.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CBLACK_10U3Ek__BackingField_53(L_53);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_54;
		L_54 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((0.0f), (0.0f), (0.0f), (20.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CBLACK_20U3Ek__BackingField_54(L_54);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_55;
		L_55 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((0.0f), (0.0f), (0.0f), (30.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CBLACK_30U3Ek__BackingField_55(L_55);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_56;
		L_56 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((0.0f), (0.0f), (0.0f), (40.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CBLACK_40U3Ek__BackingField_56(L_56);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_57;
		L_57 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((0.0f), (0.0f), (0.0f), (50.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CBLACK_50U3Ek__BackingField_57(L_57);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_58;
		L_58 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((0.0f), (0.0f), (0.0f), (60.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CBLACK_60U3Ek__BackingField_58(L_58);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_59;
		L_59 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((0.0f), (0.0f), (0.0f), (70.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CBLACK_70U3Ek__BackingField_59(L_59);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_60;
		L_60 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((0.0f), (0.0f), (0.0f), (80.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CBLACK_80U3Ek__BackingField_60(L_60);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_61;
		L_61 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((0.0f), (0.0f), (0.0f), (90.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CBLACK_90U3Ek__BackingField_61(L_61);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_62;
		L_62 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((0.0f), (0.0f), (0.0f), (95.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CBLACK_95U3Ek__BackingField_62(L_62);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_63;
		L_63 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((0.0f), (0.0f), (0.0f), (98.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CBLACK_98U3Ek__BackingField_63(L_63);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_64;
		L_64 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((100.0f), (100.0f), (100.0f), (1.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CWHITE_01U3Ek__BackingField_64(L_64);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_65;
		L_65 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((100.0f), (100.0f), (100.0f), (2.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CWHITE_02U3Ek__BackingField_65(L_65);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_66;
		L_66 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((100.0f), (100.0f), (100.0f), (5.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CWHITE_05U3Ek__BackingField_66(L_66);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_67;
		L_67 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((100.0f), (100.0f), (100.0f), (8.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CWHITE_08U3Ek__BackingField_67(L_67);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_68;
		L_68 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((100.0f), (100.0f), (100.0f), (10.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CWHITE_10U3Ek__BackingField_68(L_68);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_69;
		L_69 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((100.0f), (100.0f), (100.0f), (20.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CWHITE_20U3Ek__BackingField_69(L_69);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_70;
		L_70 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((100.0f), (100.0f), (100.0f), (30.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CWHITE_30U3Ek__BackingField_70(L_70);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_71;
		L_71 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((100.0f), (100.0f), (100.0f), (40.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CWHITE_40U3Ek__BackingField_71(L_71);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_72;
		L_72 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((100.0f), (100.0f), (100.0f), (50.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CWHITE_50U3Ek__BackingField_72(L_72);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_73;
		L_73 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((100.0f), (100.0f), (100.0f), (60.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CWHITE_60U3Ek__BackingField_73(L_73);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_74;
		L_74 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((100.0f), (100.0f), (100.0f), (70.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CWHITE_70U3Ek__BackingField_74(L_74);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_75;
		L_75 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((100.0f), (100.0f), (100.0f), (80.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CWHITE_80U3Ek__BackingField_75(L_75);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_76;
		L_76 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((100.0f), (100.0f), (100.0f), (90.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CWHITE_90U3Ek__BackingField_76(L_76);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_77;
		L_77 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((100.0f), (100.0f), (100.0f), (95.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CWHITE_95U3Ek__BackingField_77(L_77);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_78;
		L_78 = Colours_Color_m1C43D6B9C4CCD7ED90B1EAB590EB09ED4F5AED3B((100.0f), (100.0f), (100.0f), (98.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CWHITE_98U3Ek__BackingField_78(L_78);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_79;
		memset((&L_79), 0, sizeof(L_79));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_79), (0.149000004f), (0.469999999f), (0.949000001f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_BLUE_79(L_79);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_80;
		memset((&L_80), 0, sizeof(L_80));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_80), (0.43900001f), (0.662f), (1.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_LIGHT_BLUE_80(L_80);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_81;
		memset((&L_81), 0, sizeof(L_81));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_81), (0.0f), (0.681999981f), (1.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_TEAL_81(L_81);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_82;
		memset((&L_82), 0, sizeof(L_82));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_82), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_TURQUOISE_82(L_82);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_83;
		memset((&L_83), 0, sizeof(L_83));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_83), (0.0199999996f), (0.921000004f), (0.192000002f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_GREEN_83(L_83);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_84;
		memset((&L_84), 0, sizeof(L_84));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_84), (1.0f), (0.0f), (0.375999987f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_PINK_84(L_84);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_85;
		memset((&L_85), 0, sizeof(L_85));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_85), (0.298000008f), (0.149000004f), (0.949000001f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_PURPLE_85(L_85);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_86;
		memset((&L_86), 0, sizeof(L_86));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_86), (0.949000001f), (0.149000004f), (0.317000002f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_SALMON_86(L_86);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_87;
		memset((&L_87), 0, sizeof(L_87));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_87), (0.949000001f), (0.149000004f), (0.149000004f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_RED_87(L_87);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_88;
		memset((&L_88), 0, sizeof(L_88));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_88), (0.949000001f), (0.298000008f), (0.149000004f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_ORANGE_88(L_88);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_89;
		memset((&L_89), 0, sizeof(L_89));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_89), (0.949000001f), (0.882000029f), (0.149000004f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_YELLOW_89(L_89);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_90;
		memset((&L_90), 0, sizeof(L_90));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_90), (0.202999994f), (0.949000001f), (0.149000004f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_LIME_90(L_90);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_91;
		memset((&L_91), 0, sizeof(L_91));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_91), (0.112999998f), (0.442999989f), (0.984000027f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_BLUE_STRONG_91(L_91);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_92;
		memset((&L_92), 0, sizeof(L_92));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_92), (0.128999993f), (0.351999998f), (0.717000008f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_BLUE_DULL_92(L_92);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_93;
		L_93 = Colours_Color8_m5886951EEF85F05DE8C6EFBA62ED2F31B37BF381(4, ((int32_t)97), ((int32_t)201), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_U3CBLUE_VIBRANTU3Ek__BackingField_93(L_93);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_94;
		memset((&L_94), 0, sizeof(L_94));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_94), (0.980000019f), (0.400000006f), (0.449999988f), /*hidden argument*/NULL);
		((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->set_ERROR_94(L_94);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean DigitalSalmon.Components::TryGet(System.Type,UnityEngine.Component&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Components_TryGet_m152D19E3E88A0EE23B7FA85AFDF137C41EF30100 (Components_t70C6642CD159E7A7F6475C89133D153D6FD46457 * __this, Type_t * ___type0, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 ** ___component1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m99062862FEE98206F053E41E6C6882126164CDC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m9983D0130915B8182215B7C9B3D3A7D84FABB77F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * L_0 = __this->get_componentLookup_4();
		Type_t * L_1 = ___type0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m9983D0130915B8182215B7C9B3D3A7D84FABB77F(L_0, L_1, (RuntimeObject **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m9983D0130915B8182215B7C9B3D3A7D84FABB77F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 ** L_3 = ___component1;
		RuntimeObject * L_4 = V_0;
		*((RuntimeObject **)L_3) = (RuntimeObject *)((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)CastclassClass((RuntimeObject*)L_4, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)(RuntimeObject *)((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)CastclassClass((RuntimeObject*)L_4, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684_il2cpp_TypeInfo_var)));
		return (bool)1;
	}

IL_001a:
	{
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 ** L_5 = ___component1;
		Type_t * L_6 = ___type0;
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_7;
		L_7 = Component_GetComponent_m4DE64B46F790BD785FDDDAD364E0364CDDE05BDB(__this, L_6, /*hidden argument*/NULL);
		*((RuntimeObject **)L_5) = (RuntimeObject *)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_5, (void*)(RuntimeObject *)L_7);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 ** L_8 = ___component1;
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_9 = *((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_002f;
		}
	}
	{
		return (bool)0;
	}

IL_002f:
	{
		Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * L_11 = __this->get_componentLookup_4();
		Type_t * L_12 = ___type0;
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 ** L_13 = ___component1;
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_14 = *((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)L_13);
		NullCheck(L_11);
		Dictionary_2_Add_m99062862FEE98206F053E41E6C6882126164CDC9(L_11, L_12, L_14, /*hidden argument*/Dictionary_2_Add_m99062862FEE98206F053E41E6C6882126164CDC9_RuntimeMethod_var);
		return (bool)1;
	}
}
// System.Void DigitalSalmon.Components::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Components__ctor_mDDC49A8997D08FD4CCD9758F22E600BD7963EFC2 (Components_t70C6642CD159E7A7F6475C89133D153D6FD46457 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mEA9AEC3D1E0DD8B5AC3FA4CBAB6B18FE81AD1C62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * L_0 = (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE *)il2cpp_codegen_object_new(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mEA9AEC3D1E0DD8B5AC3FA4CBAB6B18FE81AD1C62(L_0, /*hidden argument*/Dictionary_2__ctor_mEA9AEC3D1E0DD8B5AC3FA4CBAB6B18FE81AD1C62_RuntimeMethod_var);
		__this->set_componentLookup_4(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DigitalSalmon.ConstantRotation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstantRotation_Update_m1F93230D691A9BD11159B15142F4363803BE9B30 (ConstantRotation_t1C3E31FFA3473A421331C6EDBEF2D25DECC4E743 * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->get_executeInEditMode_19();
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = BaseBehaviour_get_transform_m7FD02D01E8D916C8EB1E5FEB1A8BE4EFB8488AA0(__this, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_rotationAxis_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Axis_ToVector_m4D9F8667A059C1B94B38CD01EC38FFF982DCB900(L_3, /*hidden argument*/NULL);
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_6 = __this->get_degreesPerSecond_17();
		NullCheck(L_2);
		Transform_Rotate_m2AA745C4A796363462642A13251E8971D5C7F4DC(L_2, L_4, ((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.ConstantRotation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstantRotation__ctor_m6FEBE773D7ED6DC0BF5E081968B79F07D26C0B83 (ConstantRotation_t1C3E31FFA3473A421331C6EDBEF2D25DECC4E743 * __this, const RuntimeMethod* method)
{
	{
		BaseBehaviour__ctor_mCE0549FB5133CD6C17DF7D64E2D59E0238F2B3AD(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single DigitalSalmon.Easing::QuadEaseInOut(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_QuadEaseInOut_mCAC0C506F5E843309A3D70A20F1F13C171FB8F2D (float ___t0, float ___b1, float ___c2, float ___d3, const RuntimeMethod* method)
{
	{
		float L_0 = ___t0;
		float L_1 = ___d3;
		float L_2 = ((float)((float)L_0/(float)((float)((float)L_1/(float)(2.0f)))));
		___t0 = L_2;
		if ((!(((float)L_2) < ((float)(1.0f)))))
		{
			goto IL_0021;
		}
	}
	{
		float L_3 = ___c2;
		float L_4 = ___t0;
		float L_5 = ___t0;
		float L_6 = ___b1;
		return ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_3/(float)(2.0f))), (float)L_4)), (float)L_5)), (float)L_6));
	}

IL_0021:
	{
		float L_7 = ___c2;
		float L_8 = ___t0;
		float L_9 = ((float)il2cpp_codegen_subtract((float)L_8, (float)(1.0f)));
		___t0 = L_9;
		float L_10 = ___t0;
		float L_11 = ___b1;
		return ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)((float)((-L_7))/(float)(2.0f))), (float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_9, (float)((float)il2cpp_codegen_subtract((float)L_10, (float)(2.0f))))), (float)(1.0f))))), (float)L_11));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_EventHandler_t9372478C2C0A8EACAEEA5736BBC676C0DAC750E1 (EventHandler_t9372478C2C0A8EACAEEA5736BBC676C0DAC750E1 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void DigitalSalmon.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m962510865AC8163463DBEFA5847437723D069D8A (EventHandler_t9372478C2C0A8EACAEEA5736BBC676C0DAC750E1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void DigitalSalmon.EventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_Invoke_m81411B9347330C854A9EF54CEC06671F02AF66A2 (EventHandler_t9372478C2C0A8EACAEEA5736BBC676C0DAC750E1 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult DigitalSalmon.EventHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EventHandler_BeginInvoke_m5E474D720BF6F61E5ACA84A56F0F4254FD2DE5BE (EventHandler_t9372478C2C0A8EACAEEA5736BBC676C0DAC750E1 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void DigitalSalmon.EventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_EndInvoke_m19C2D40456E6AF89798E9640F52BFE9C4AD60FF3 (EventHandler_t9372478C2C0A8EACAEEA5736BBC676C0DAC750E1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DigitalSalmon.EventHandlerExtensions::InvokeSafe(DigitalSalmon.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandlerExtensions_InvokeSafe_mFEEACC44FE24EF3B025943F1FCBB49C69F2732B6 (EventHandler_t9372478C2C0A8EACAEEA5736BBC676C0DAC750E1 * ___self0, const RuntimeMethod* method)
{
	{
		EventHandler_t9372478C2C0A8EACAEEA5736BBC676C0DAC750E1 * L_0 = ___self0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		EventHandler_t9372478C2C0A8EACAEEA5736BBC676C0DAC750E1 * L_1 = ___self0;
		NullCheck(L_1);
		EventHandler_Invoke_m81411B9347330C854A9EF54CEC06671F02AF66A2(L_1, /*hidden argument*/NULL);
	}

IL_0009:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FloatEventHandler_t7AECF385828E1C26E6E4EBE3E51D22E95F3BD3A3 (FloatEventHandler_t7AECF385828E1C26E6E4EBE3E51D22E95F3BD3A3 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___value0);

}
// System.Void DigitalSalmon.FloatEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatEventHandler__ctor_mE6EB6E3954E25693794A5D1AEF7197F26218337E (FloatEventHandler_t7AECF385828E1C26E6E4EBE3E51D22E95F3BD3A3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void DigitalSalmon.FloatEventHandler::Invoke(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatEventHandler_Invoke_mEBC7BD73AA481DCE3AF981ACFD9B0C73E5942AAF (FloatEventHandler_t7AECF385828E1C26E6E4EBE3E51D22E95F3BD3A3 * __this, float ___value0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___value0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___value0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< float >::Invoke(targetMethod, targetThis, ___value0);
					else
						GenericVirtActionInvoker1< float >::Invoke(targetMethod, targetThis, ___value0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___value0);
					else
						VirtActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___value0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___value0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult DigitalSalmon.FloatEventHandler::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FloatEventHandler_BeginInvoke_m7E75353C52476864AF254753715CD78A4F4D7803 (FloatEventHandler_t7AECF385828E1C26E6E4EBE3E51D22E95F3BD3A3 * __this, float ___value0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___value0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void DigitalSalmon.FloatEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatEventHandler_EndInvoke_m7F36615D9A3538B2782699DAC0B24E0F4EECCF1D (FloatEventHandler_t7AECF385828E1C26E6E4EBE3E51D22E95F3BD3A3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single DigitalSalmon.Extensions.FloatExtensions::Round(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatExtensions_Round_mD2733A64309165E6355AA180446EDF3623ACDF2E (float ___self0, float ___increment1, const RuntimeMethod* method)
{
	{
		float L_0 = ___increment1;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_000a;
		}
	}
	{
		float L_1 = ___self0;
		return L_1;
	}

IL_000a:
	{
		float L_2 = ___self0;
		float L_3 = ___increment1;
		float L_4;
		L_4 = bankers_roundf(((float)((float)L_2/(float)L_3)));
		float L_5 = ___increment1;
		return ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DigitalSalmon.ForcedShadowBias::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForcedShadowBias_Update_m2B45A561BA72C6E12D5CEF8E9252482F9E218C65 (ForcedShadowBias_tDEE25748FFC8AF42B4FA0D8CA313221B629C8B30 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_0;
		L_0 = BaseBehaviour_get_light_m6178C4B6D750773CF84069DEFAB48C565F75BA52(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_2;
		L_2 = BaseBehaviour_get_light_m6178C4B6D750773CF84069DEFAB48C565F75BA52(__this, /*hidden argument*/NULL);
		float L_3 = __this->get_shadowNormalBias_18();
		NullCheck(L_2);
		Light_set_shadowNormalBias_mB83F5944C03C3E4876C9A39B19364300ABE51DE2(L_2, L_3, /*hidden argument*/NULL);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_4;
		L_4 = BaseBehaviour_get_light_m6178C4B6D750773CF84069DEFAB48C565F75BA52(__this, /*hidden argument*/NULL);
		float L_5 = __this->get_shadowBias_17();
		NullCheck(L_4);
		Light_set_shadowBias_m2BECFEFF800EC5E96BD45886C739F15597DD1136(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.ForcedShadowBias::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForcedShadowBias__ctor_m176271AC396DD395A260125A54362CF0A8D273A1 (ForcedShadowBias_tDEE25748FFC8AF42B4FA0D8CA313221B629C8B30 * __this, const RuntimeMethod* method)
{
	{
		__this->set_shadowBias_17((0.00999999978f));
		__this->set_shadowNormalBias_18((0.00999999978f));
		BaseBehaviour__ctor_mCE0549FB5133CD6C17DF7D64E2D59E0238F2B3AD(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// DigitalSalmon.GlobalSequence DigitalSalmon.GlobalSequence::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlobalSequence_t92F117568F74EF784CFDD426D3B06FD0AF3E8722 * GlobalSequence_get_Instance_m454FD26B6DFFF434BC1CF2CDF7702CC7160EABDB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtectedSingleton_1_GetInstance_m390BB0F86549BAB8F31EE8A8324FAE9153BE8F33_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GlobalSequence_t92F117568F74EF784CFDD426D3B06FD0AF3E8722 * L_0;
		L_0 = ProtectedSingleton_1_GetInstance_m390BB0F86549BAB8F31EE8A8324FAE9153BE8F33((GlobalSequence_t92F117568F74EF784CFDD426D3B06FD0AF3E8722 *)NULL, /*hidden argument*/ProtectedSingleton_1_GetInstance_m390BB0F86549BAB8F31EE8A8324FAE9153BE8F33_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void DigitalSalmon.GlobalSequence::Do(System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalSequence_Do_m6366E8C87168EE5E4A3FDC80CD317C4E5930973D (float ___delay0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action1, const RuntimeMethod* method)
{
	{
		GlobalSequence_t92F117568F74EF784CFDD426D3B06FD0AF3E8722 * L_0;
		L_0 = GlobalSequence_get_Instance_m454FD26B6DFFF434BC1CF2CDF7702CC7160EABDB(/*hidden argument*/NULL);
		NullCheck(L_0);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_1;
		L_1 = BaseBehaviour_get_sequence_m73027DACACA4C86FDE2A9E351AE61989AF3E1852(L_0, /*hidden argument*/NULL);
		float L_2 = ___delay0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___action1;
		NullCheck(L_1);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_4;
		L_4 = Sequence_Do_mBA3985CAB611908926993DEF999F7BA99A1EF6B4(L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.GlobalSequence::DoRealtime(System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalSequence_DoRealtime_m92B3C28CB6AD0200EF2B704E17809527E6C350A0 (float ___delay0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action1, const RuntimeMethod* method)
{
	{
		GlobalSequence_t92F117568F74EF784CFDD426D3B06FD0AF3E8722 * L_0;
		L_0 = GlobalSequence_get_Instance_m454FD26B6DFFF434BC1CF2CDF7702CC7160EABDB(/*hidden argument*/NULL);
		NullCheck(L_0);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_1;
		L_1 = BaseBehaviour_get_sequence_m73027DACACA4C86FDE2A9E351AE61989AF3E1852(L_0, /*hidden argument*/NULL);
		float L_2 = ___delay0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___action1;
		NullCheck(L_1);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_4;
		L_4 = Sequence_DoRealtime_m8D7B4C87026272CE2EC26108B0611C3CDB6F80E3(L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.GlobalSequence::Coroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalSequence_Coroutine_mCB6225532C88EE2FAA8EFDB5D3AE9E40EF4D042E (RuntimeObject* ___coroutine0, const RuntimeMethod* method)
{
	{
		GlobalSequence_t92F117568F74EF784CFDD426D3B06FD0AF3E8722 * L_0;
		L_0 = GlobalSequence_get_Instance_m454FD26B6DFFF434BC1CF2CDF7702CC7160EABDB(/*hidden argument*/NULL);
		NullCheck(L_0);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_1;
		L_1 = BaseBehaviour_get_sequence_m73027DACACA4C86FDE2A9E351AE61989AF3E1852(L_0, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___coroutine0;
		NullCheck(L_1);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_3;
		L_3 = Sequence_Coroutine_mB8DDAEC8F0FE32F0F7A2D31037B56F34F144F018(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.GlobalSequence::Queue(System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalSequence_Queue_mB9CA3ECD1842A151FC67249FF28C49E567642DBC (float ___delay0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action1, const RuntimeMethod* method)
{
	{
		GlobalSequence_t92F117568F74EF784CFDD426D3B06FD0AF3E8722 * L_0;
		L_0 = GlobalSequence_get_Instance_m454FD26B6DFFF434BC1CF2CDF7702CC7160EABDB(/*hidden argument*/NULL);
		NullCheck(L_0);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_1;
		L_1 = BaseBehaviour_get_sequence_m73027DACACA4C86FDE2A9E351AE61989AF3E1852(L_0, /*hidden argument*/NULL);
		float L_2 = ___delay0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___action1;
		NullCheck(L_1);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_4;
		L_4 = Sequence_Queue_m5964E76D721970C0CAA50EEF4DB1C49835D6914F(L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.GlobalSequence::QueueRealtime(System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalSequence_QueueRealtime_m98BA67C4CB8C0D601D3AD9EB57D6D10CE923DD9A (float ___delay0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action1, const RuntimeMethod* method)
{
	{
		GlobalSequence_t92F117568F74EF784CFDD426D3B06FD0AF3E8722 * L_0;
		L_0 = GlobalSequence_get_Instance_m454FD26B6DFFF434BC1CF2CDF7702CC7160EABDB(/*hidden argument*/NULL);
		NullCheck(L_0);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_1;
		L_1 = BaseBehaviour_get_sequence_m73027DACACA4C86FDE2A9E351AE61989AF3E1852(L_0, /*hidden argument*/NULL);
		float L_2 = ___delay0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___action1;
		NullCheck(L_1);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_4;
		L_4 = Sequence_QueueRealtime_m5D32409D7B41098DAA19B43A778A95575099FB8F(L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.GlobalSequence::NextFrame(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalSequence_NextFrame_m0517AE2744C05F09356A79EC593BB2D887DBEB6B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	{
		GlobalSequence_t92F117568F74EF784CFDD426D3B06FD0AF3E8722 * L_0;
		L_0 = GlobalSequence_get_Instance_m454FD26B6DFFF434BC1CF2CDF7702CC7160EABDB(/*hidden argument*/NULL);
		NullCheck(L_0);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_1;
		L_1 = BaseBehaviour_get_sequence_m73027DACACA4C86FDE2A9E351AE61989AF3E1852(L_0, /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = ___action0;
		NullCheck(L_1);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_3;
		L_3 = Sequence_NextFrame_mF63D4D1C3093CE1A33F7FEBA315ADC6187F70479(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.GlobalSequence::AfterFrames(System.Int32,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalSequence_AfterFrames_m25DD6FE8CA861A3F9AEC330510BADE5C30951D71 (int32_t ___numFrames0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action1, const RuntimeMethod* method)
{
	{
		GlobalSequence_t92F117568F74EF784CFDD426D3B06FD0AF3E8722 * L_0;
		L_0 = GlobalSequence_get_Instance_m454FD26B6DFFF434BC1CF2CDF7702CC7160EABDB(/*hidden argument*/NULL);
		NullCheck(L_0);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_1;
		L_1 = BaseBehaviour_get_sequence_m73027DACACA4C86FDE2A9E351AE61989AF3E1852(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___numFrames0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___action1;
		NullCheck(L_1);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_4;
		L_4 = Sequence_AfterFrames_mE21F27554044773F42212C53A4536D141ED9792A(L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.GlobalSequence::EachFrame(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalSequence_EachFrame_m57B6A461E6B0C16011A5186A21511E9F9CDDB979 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___func0, const RuntimeMethod* method)
{
	{
		GlobalSequence_t92F117568F74EF784CFDD426D3B06FD0AF3E8722 * L_0;
		L_0 = GlobalSequence_get_Instance_m454FD26B6DFFF434BC1CF2CDF7702CC7160EABDB(/*hidden argument*/NULL);
		NullCheck(L_0);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_1;
		L_1 = BaseBehaviour_get_sequence_m73027DACACA4C86FDE2A9E351AE61989AF3E1852(L_0, /*hidden argument*/NULL);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_2 = ___func0;
		NullCheck(L_1);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_3;
		L_3 = Sequence_EachFrame_m2047769E66523195532F4925169980F99DCCBC00(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.GlobalSequence::EndOfFrame(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalSequence_EndOfFrame_m10F26A6B3F93DC0DDEF202FE7F06ED53B7F63578 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	{
		GlobalSequence_t92F117568F74EF784CFDD426D3B06FD0AF3E8722 * L_0;
		L_0 = GlobalSequence_get_Instance_m454FD26B6DFFF434BC1CF2CDF7702CC7160EABDB(/*hidden argument*/NULL);
		NullCheck(L_0);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_1;
		L_1 = BaseBehaviour_get_sequence_m73027DACACA4C86FDE2A9E351AE61989AF3E1852(L_0, /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = ___action0;
		NullCheck(L_1);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_3;
		L_3 = Sequence_EndOfFrame_m7CF45876BC073F16C6A4EF9CBDE8CAF939F6E56F(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.GlobalSequence::EachEndOfFrame(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalSequence_EachEndOfFrame_m31DF3EC8AC7F94B54F90EEC75B50AA87C11ACF63 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___func0, const RuntimeMethod* method)
{
	{
		GlobalSequence_t92F117568F74EF784CFDD426D3B06FD0AF3E8722 * L_0;
		L_0 = GlobalSequence_get_Instance_m454FD26B6DFFF434BC1CF2CDF7702CC7160EABDB(/*hidden argument*/NULL);
		NullCheck(L_0);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_1;
		L_1 = BaseBehaviour_get_sequence_m73027DACACA4C86FDE2A9E351AE61989AF3E1852(L_0, /*hidden argument*/NULL);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_2 = ___func0;
		NullCheck(L_1);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_3;
		L_3 = Sequence_EachEndOfFrame_m40CA42B61362305BCC1B331BE2CAD373A2CFC89F(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.GlobalSequence::FixedUpdate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalSequence_FixedUpdate_m6027BC9EC06AE839FEF83F37DDF864C099FBE78F (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	{
		GlobalSequence_t92F117568F74EF784CFDD426D3B06FD0AF3E8722 * L_0;
		L_0 = GlobalSequence_get_Instance_m454FD26B6DFFF434BC1CF2CDF7702CC7160EABDB(/*hidden argument*/NULL);
		NullCheck(L_0);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_1;
		L_1 = BaseBehaviour_get_sequence_m73027DACACA4C86FDE2A9E351AE61989AF3E1852(L_0, /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = ___action0;
		NullCheck(L_1);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_3;
		L_3 = Sequence_FixedUpdate_m5C6C69F5B9855FDAB12CEBB4797276DC3A2C4B67(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.GlobalSequence::EachFixedUpdate(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalSequence_EachFixedUpdate_m811CEBF90B041300C9CBFF1CA961C49A05130457 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___func0, const RuntimeMethod* method)
{
	{
		GlobalSequence_t92F117568F74EF784CFDD426D3B06FD0AF3E8722 * L_0;
		L_0 = GlobalSequence_get_Instance_m454FD26B6DFFF434BC1CF2CDF7702CC7160EABDB(/*hidden argument*/NULL);
		NullCheck(L_0);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_1;
		L_1 = BaseBehaviour_get_sequence_m73027DACACA4C86FDE2A9E351AE61989AF3E1852(L_0, /*hidden argument*/NULL);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_2 = ___func0;
		NullCheck(L_1);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_3;
		L_3 = Sequence_EachFixedUpdate_mBADC39B960862D17A2EC2FC80C447CB5CC4E2B3A(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.GlobalSequence::OnInstanceCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalSequence_OnInstanceCreated_mF380291B3EEE3C4E056F61B6283931F841144A20 (GlobalSequence_t92F117568F74EF784CFDD426D3B06FD0AF3E8722 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtectedSingleton_1_OnInstanceCreated_m677E5049551304633179142629CF5823E4C2D153_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ProtectedSingleton_1_OnInstanceCreated_m677E5049551304633179142629CF5823E4C2D153(__this, /*hidden argument*/ProtectedSingleton_1_OnInstanceCreated_m677E5049551304633179142629CF5823E4C2D153_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_0, ((int32_t)61), /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.GlobalSequence::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalSequence__ctor_mFC2B2E38DF6C0DB67507EAF0CF2C8EB8015B2E1F (GlobalSequence_t92F117568F74EF784CFDD426D3B06FD0AF3E8722 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtectedSingleton_1__ctor_mE3B50849D3A09B6BFC5C8640C213A5D047FF65A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ProtectedSingleton_1__ctor_mE3B50849D3A09B6BFC5C8640C213A5D047FF65A2(__this, /*hidden argument*/ProtectedSingleton_1__ctor_mE3B50849D3A09B6BFC5C8640C213A5D047FF65A2_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean DigitalSalmon.Extensions.GraphicsExtensions::IsReadable(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsExtensions_IsReadable_m8EBBE7877E9380E0057B248A8043DAB3DCC74580 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___self0, const RuntimeMethod* method)
{
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___self0;
		NullCheck(L_0);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022(L_0, 0, 0, /*hidden argument*/NULL);
		V_0 = (bool)1;
		goto IL_0012;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000d;
		}
		throw e;
	}

CATCH_000d:
	{ // begin catch(System.Object)
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0012;
	} // end catch (depth: 1)

IL_0012:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector2Int DigitalSalmon.Extensions.GraphicsExtensions::Size(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  GraphicsExtensions_Size_m2A895F23E622D2AA6ADBB5218723F70833E02AF4 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___self0, const RuntimeMethod* method)
{
	{
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_0 = ___self0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_2 = ___self0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Texture2D DigitalSalmon.Extensions.GraphicsExtensions::ToTexture2D(UnityEngine.RenderTexture,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * GraphicsExtensions_ToTexture2D_mD71CB644A4FF1193DE446222859B9368DD160878 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___renderTexture0, bool ___mipmap1, bool ___linear2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_0 = NULL;
	{
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = ___renderTexture0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2 = ___renderTexture0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		bool L_4 = ___mipmap1;
		bool L_5 = ___linear2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m667452FB4794C77D283037E096FE0DC0AEB311F3(L_6, L_1, L_3, 4, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_7 = ___renderTexture0;
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_7, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_8 = V_0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_9);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_11);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_13), (0.0f), (0.0f), ((float)((float)L_10)), ((float)((float)L_12)), /*hidden argument*/NULL);
		NullCheck(L_8);
		Texture2D_ReadPixels_m4C6FE8C2798C39C20A14DAFC963C720D17F4F987(L_8, L_13, 0, 0, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_14 = V_0;
		NullCheck(L_14);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_14, /*hidden argument*/NULL);
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)NULL, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_15 = V_0;
		return L_15;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DigitalSalmon.Extensions.LinqExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinqExtensions__cctor_m6158359A7FECBD2E6E2B133FBB2BFE4444C9A56B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinqExtensions_t7ED552D4D1887621651BBC9825FEE24A2C42DA05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_0, /*hidden argument*/NULL);
		((LinqExtensions_t7ED552D4D1887621651BBC9825FEE24A2C42DA05_StaticFields*)il2cpp_codegen_static_fields_for(LinqExtensions_t7ED552D4D1887621651BBC9825FEE24A2C42DA05_il2cpp_TypeInfo_var))->set_shuffleRandom_0(L_0);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_1 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_1, /*hidden argument*/NULL);
		((LinqExtensions_t7ED552D4D1887621651BBC9825FEE24A2C42DA05_StaticFields*)il2cpp_codegen_static_fields_for(LinqExtensions_t7ED552D4D1887621651BBC9825FEE24A2C42DA05_il2cpp_TypeInfo_var))->set_weightedElementRandom_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single DigitalSalmon.MathUtilities::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MathUtilities_Clamp01_m80F230322278F1ED62ED0D65763486B79A0F0EEC (float ___f0, const RuntimeMethod* method)
{
	{
		float L_0 = ___f0;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector2 DigitalSalmon.MathUtilities::Clamp01(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  MathUtilities_Clamp01_m0DA67458343F1BA71AA7E6D3C379398C996CCFCC (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		float L_2;
		L_2 = MathUtilities_Clamp01_m80F230322278F1ED62ED0D65763486B79A0F0EEC(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___v0;
		float L_4 = L_3.get_y_1();
		float L_5;
		L_5 = MathUtilities_Clamp01_m80F230322278F1ED62ED0D65763486B79A0F0EEC(L_4, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 DigitalSalmon.MathUtilities::EquirectangularProjection(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MathUtilities_EquirectangularProjection_mE18C05FA40D4C1CB1848B73B1384F0EA83D9EBA3 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___inputVector0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___inputVector0;
		float L_1 = L_0.get_y_1();
		(&___inputVector0)->set_y_1(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_1)));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___inputVector0;
		float L_3 = L_2.get_x_0();
		float L_4;
		L_4 = sinf(((float)il2cpp_codegen_multiply((float)L_3, (float)(6.28318548f))));
		float L_5;
		L_5 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616((0.0f), (1.0f), ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_4, (float)(-1.0f))), (float)(1.0f)))/(float)(2.0f))), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___inputVector0;
		float L_7 = L_6.get_y_1();
		float L_8;
		L_8 = cosf(((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_add((float)L_7, (float)(0.5f)))/(float)(2.0f))), (float)(6.28318548f))));
		V_0 = ((float)il2cpp_codegen_add((float)L_8, (float)(1.0f)));
		float L_9 = V_0;
		float L_10;
		L_10 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_5, (0.5f), L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = ___inputVector0;
		float L_12 = L_11.get_x_0();
		float L_13;
		L_13 = sinf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_12, (float)(0.25f))), (float)(6.28318548f))));
		float L_14;
		L_14 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616((0.0f), (1.0f), ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_13, (float)(-1.0f))), (float)(1.0f)))/(float)(2.0f))), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = ___inputVector0;
		float L_16 = L_15.get_y_1();
		float L_17;
		L_17 = cosf(((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_add((float)L_16, (float)(0.5f)))/(float)(2.0f))), (float)(6.28318548f))));
		V_2 = ((float)il2cpp_codegen_add((float)L_17, (float)(1.0f)));
		float L_18 = V_2;
		float L_19;
		L_19 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_14, (0.5f), L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20 = ___inputVector0;
		float L_21 = L_20.get_y_1();
		float L_22;
		L_22 = cosf(((float)il2cpp_codegen_multiply((float)((float)((float)L_21/(float)(2.0f))), (float)(6.28318548f))));
		V_4 = ((float)((float)((float)il2cpp_codegen_add((float)L_22, (float)(1.0f)))/(float)(2.0f)));
		float L_23 = V_1;
		float L_24 = V_4;
		float L_25 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_26), ((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_23)), ((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_24)), ((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_25)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_27), (1.0f), (-1.0f), (-1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_26, L_27, /*hidden argument*/NULL);
		V_5 = L_28;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_5;
		float L_30 = L_29.get_z_4();
		(&V_5)->set_z_4(((-L_30)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_5), /*hidden argument*/NULL);
		return L_31;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String DigitalSalmon.PrefabSingleton::get_ResourcePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PrefabSingleton_get_ResourcePath_mED3366B4FD6311E88BE3DB0280FE8F63199748A8 (PrefabSingleton_t10EE2A2982BD2A1991A28A73CC79B3661390B724 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CResourcePathU3Ek__BackingField_0();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.MonoBehaviour DigitalSalmon.Sequence::get_MonoBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * Sequence_get_MonoBehaviour_m3B3B407758498369A26AA8CB46018890CB73C1A4 (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_0 = __this->get__monoBehaviour_1();
		return L_0;
	}
}
// System.Void DigitalSalmon.Sequence::set_MonoBehaviour(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_set_MonoBehaviour_m17C6CF9F9FE3B1956EA7E1DC34D5080A006931D5 (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___value0, const RuntimeMethod* method)
{
	{
		Sequence_Cancel_mC30D7C7D85EDCC72FDF8A4425DD9A3CDEED7FF36(__this, /*hidden argument*/NULL);
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_0 = ___value0;
		__this->set__monoBehaviour_1(L_0);
		return;
	}
}
// System.Boolean DigitalSalmon.Sequence::get_IsActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Sequence_get_IsActiveAndEnabled_mB53FEDA8575CAD78C3951E66A91DCEB3A2B7E316 (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_0 = __this->get__monoBehaviour_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_2 = __this->get__monoBehaviour_1();
		NullCheck(L_2);
		bool L_3;
		L_3 = Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
// System.Boolean DigitalSalmon.Sequence::get_IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Sequence_get_IsRunning_mA7E61878985313CE987968C57DB0813F8B45E1C5 (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_mACE52FFE184270C40991BE65351EE9D23B05CC9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m275AD08D682AE39DC0DD7599659C49EAB4763D7C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372 * L_0 = __this->get_actionQueue_3();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Queue_1_get_Count_m275AD08D682AE39DC0DD7599659C49EAB4763D7C_inline(L_0, /*hidden argument*/Queue_1_get_Count_m275AD08D682AE39DC0DD7599659C49EAB4763D7C_RuntimeMethod_var);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C * L_2 = __this->get_coroutines_2();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = HashSet_1_get_Count_mACE52FFE184270C40991BE65351EE9D23B05CC9F_inline(L_2, /*hidden argument*/HashSet_1_get_Count_mACE52FFE184270C40991BE65351EE9D23B05CC9F_RuntimeMethod_var);
		return (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
	}

IL_001d:
	{
		return (bool)1;
	}
}
// System.Void DigitalSalmon.Sequence::.ctor(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence__ctor_mDD0D489EA7C9515DF2935A80E4AC97BC11ADEBC2 (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___monoBehaviour0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m53E0AF4A624E161114A459D7D81DB3BA878997AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m30DEF5F6B75AC33198783B71D021607709A03156_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04E5ED47C85E5B29B7642E38377606724F5D0299);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C * L_0 = (HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C *)il2cpp_codegen_object_new(HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m53E0AF4A624E161114A459D7D81DB3BA878997AF(L_0, /*hidden argument*/HashSet_1__ctor_m53E0AF4A624E161114A459D7D81DB3BA878997AF_RuntimeMethod_var);
		__this->set_coroutines_2(L_0);
		Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372 * L_1 = (Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372 *)il2cpp_codegen_object_new(Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372_il2cpp_TypeInfo_var);
		Queue_1__ctor_m30DEF5F6B75AC33198783B71D021607709A03156(L_1, /*hidden argument*/Queue_1__ctor_m30DEF5F6B75AC33198783B71D021607709A03156_RuntimeMethod_var);
		__this->set_actionQueue_3(L_1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_2 = ___monoBehaviour0;
		Sequence_set_MonoBehaviour_m17C6CF9F9FE3B1956EA7E1DC34D5080A006931D5(__this, L_2, /*hidden argument*/NULL);
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_3;
		L_3 = Sequence_get_MonoBehaviour_m3B3B407758498369A26AA8CB46018890CB73C1A4_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral04E5ED47C85E5B29B7642E38377606724F5D0299, /*hidden argument*/NULL);
	}

IL_003b:
	{
		return;
	}
}
// DigitalSalmon.Sequence DigitalSalmon.Sequence::FixedUpdate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * Sequence_FixedUpdate_m5C6C69F5B9855FDAB12CEBB4797276DC3A2C4B67 (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___action0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return __this;
	}

IL_0005:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var);
		WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * L_1;
		L_1 = Wait_get_FixedUpdate_m1BEF69CF709D57CB8B3758FC26E26C692B74722B(/*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = ___action0;
		RuntimeObject* L_3;
		L_3 = Sequence_AfterWaitCoroutine_m9E08455CADC2A374521E2DBAAADCAE49DB119BAE(L_1, L_2, /*hidden argument*/NULL);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_4;
		L_4 = Sequence_Coroutine_mB8DDAEC8F0FE32F0F7A2D31037B56F34F144F018(__this, L_3, /*hidden argument*/NULL);
		return __this;
	}
}
// DigitalSalmon.Sequence DigitalSalmon.Sequence::NextFrame(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * Sequence_NextFrame_mF63D4D1C3093CE1A33F7FEBA315ADC6187F70479 (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___action0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return __this;
	}

IL_0005:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___action0;
		RuntimeObject* L_2;
		L_2 = Sequence_AfterFramesCoroutine_m38753C03534EFA81FA8F00C996FF51794B39EC26(1, L_1, /*hidden argument*/NULL);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_3;
		L_3 = Sequence_Coroutine_mB8DDAEC8F0FE32F0F7A2D31037B56F34F144F018(__this, L_2, /*hidden argument*/NULL);
		return __this;
	}
}
// DigitalSalmon.Sequence DigitalSalmon.Sequence::AfterFrames(System.Int32,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * Sequence_AfterFrames_mE21F27554044773F42212C53A4536D141ED9792A (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, int32_t ___numFrames0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action1, const RuntimeMethod* method)
{
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___action1;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return __this;
	}

IL_0005:
	{
		int32_t L_1 = ___numFrames0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = ___action1;
		RuntimeObject* L_3;
		L_3 = Sequence_AfterFramesCoroutine_m38753C03534EFA81FA8F00C996FF51794B39EC26(L_1, L_2, /*hidden argument*/NULL);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_4;
		L_4 = Sequence_Coroutine_mB8DDAEC8F0FE32F0F7A2D31037B56F34F144F018(__this, L_3, /*hidden argument*/NULL);
		return __this;
	}
}
// DigitalSalmon.Sequence DigitalSalmon.Sequence::EndOfFrame(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * Sequence_EndOfFrame_m7CF45876BC073F16C6A4EF9CBDE8CAF939F6E56F (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___action0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return __this;
	}

IL_0005:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_1;
		L_1 = Wait_get_EndOfFrame_m21D1FC50A6DBC28A2AE054268AA232847D0D15B1(/*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = ___action0;
		RuntimeObject* L_3;
		L_3 = Sequence_AfterWaitCoroutine_m9E08455CADC2A374521E2DBAAADCAE49DB119BAE(L_1, L_2, /*hidden argument*/NULL);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_4;
		L_4 = Sequence_Coroutine_mB8DDAEC8F0FE32F0F7A2D31037B56F34F144F018(__this, L_3, /*hidden argument*/NULL);
		return __this;
	}
}
// DigitalSalmon.Sequence DigitalSalmon.Sequence::EachFrame(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * Sequence_EachFrame_m2047769E66523195532F4925169980F99DCCBC00 (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___func0, const RuntimeMethod* method)
{
	{
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_0 = ___func0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return __this;
	}

IL_0005:
	{
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_1 = ___func0;
		RuntimeObject* L_2;
		L_2 = Sequence_EachFrameCoroutine_m0B0F8F3756B1EFCE2010D32262C0B290D48F8FF0(L_1, /*hidden argument*/NULL);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_3;
		L_3 = Sequence_Coroutine_mB8DDAEC8F0FE32F0F7A2D31037B56F34F144F018(__this, L_2, /*hidden argument*/NULL);
		return __this;
	}
}
// DigitalSalmon.Sequence DigitalSalmon.Sequence::EachEndOfFrame(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * Sequence_EachEndOfFrame_m40CA42B61362305BCC1B331BE2CAD373A2CFC89F (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___func0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_0 = ___func0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return __this;
	}

IL_0005:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_1;
		L_1 = Wait_get_EndOfFrame_m21D1FC50A6DBC28A2AE054268AA232847D0D15B1(/*hidden argument*/NULL);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_2 = ___func0;
		RuntimeObject* L_3;
		L_3 = Sequence_EachAfterWaitCoroutine_m32F0F8D8F58152964B96EE3CAC89C750957051CE(L_1, L_2, /*hidden argument*/NULL);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_4;
		L_4 = Sequence_Coroutine_mB8DDAEC8F0FE32F0F7A2D31037B56F34F144F018(__this, L_3, /*hidden argument*/NULL);
		return __this;
	}
}
// DigitalSalmon.Sequence DigitalSalmon.Sequence::EachFixedUpdate(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * Sequence_EachFixedUpdate_mBADC39B960862D17A2EC2FC80C447CB5CC4E2B3A (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___func0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_0 = ___func0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return __this;
	}

IL_0005:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var);
		WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * L_1;
		L_1 = Wait_get_FixedUpdate_m1BEF69CF709D57CB8B3758FC26E26C692B74722B(/*hidden argument*/NULL);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_2 = ___func0;
		RuntimeObject* L_3;
		L_3 = Sequence_EachAfterWaitCoroutine_m32F0F8D8F58152964B96EE3CAC89C750957051CE(L_1, L_2, /*hidden argument*/NULL);
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_4;
		L_4 = Sequence_Coroutine_mB8DDAEC8F0FE32F0F7A2D31037B56F34F144F018(__this, L_3, /*hidden argument*/NULL);
		return __this;
	}
}
// DigitalSalmon.Sequence DigitalSalmon.Sequence::Do(System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * Sequence_Do_mBA3985CAB611908926993DEF999F7BA99A1EF6B4 (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, float ___delay0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action1, const RuntimeMethod* method)
{
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___action1;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return __this;
	}

IL_0005:
	{
		float L_1 = ___delay0;
		if ((!(((float)L_1) <= ((float)(0.0f)))))
		{
			goto IL_0015;
		}
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = ___action1;
		NullCheck(L_2);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_2, /*hidden argument*/NULL);
		return __this;
	}

IL_0015:
	{
		float L_3 = ___delay0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = ___action1;
		Sequence_StartCachedCoroutine_mD9EB3AF4DB6E1DC9ED51413EEFCDA8756D033F59(__this, L_3, L_4, (bool)0, /*hidden argument*/NULL);
		return __this;
	}
}
// DigitalSalmon.Sequence DigitalSalmon.Sequence::DoRealtime(System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * Sequence_DoRealtime_m8D7B4C87026272CE2EC26108B0611C3CDB6F80E3 (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, float ___delay0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action1, const RuntimeMethod* method)
{
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___action1;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return __this;
	}

IL_0005:
	{
		float L_1 = ___delay0;
		if ((!(((float)L_1) <= ((float)(0.0f)))))
		{
			goto IL_0015;
		}
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = ___action1;
		NullCheck(L_2);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_2, /*hidden argument*/NULL);
		return __this;
	}

IL_0015:
	{
		float L_3 = ___delay0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = ___action1;
		Sequence_StartCachedCoroutine_mD9EB3AF4DB6E1DC9ED51413EEFCDA8756D033F59(__this, L_3, L_4, (bool)1, /*hidden argument*/NULL);
		return __this;
	}
}
// DigitalSalmon.Sequence DigitalSalmon.Sequence::Coroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * Sequence_Coroutine_mB8DDAEC8F0FE32F0F7A2D31037B56F34F144F018 (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, RuntimeObject* ___coroutine0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___coroutine0;
		Sequence_StartCachedCoroutine_m0393ABBC4093FF552FC07318A6496253F3FD79B0(__this, L_0, /*hidden argument*/NULL);
		return __this;
	}
}
// DigitalSalmon.Sequence DigitalSalmon.Sequence::Queue(System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * Sequence_Queue_m5964E76D721970C0CAA50EEF4DB1C49835D6914F (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, float ___delay0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action1, const RuntimeMethod* method)
{
	{
		float L_0 = ___delay0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___action1;
		Sequence_EnqueueAction_m577562ED6A73B240581A71749FD92F3758B96463(__this, L_0, L_1, (bool)0, /*hidden argument*/NULL);
		return __this;
	}
}
// DigitalSalmon.Sequence DigitalSalmon.Sequence::QueueRealtime(System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * Sequence_QueueRealtime_m5D32409D7B41098DAA19B43A778A95575099FB8F (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, float ___delay0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action1, const RuntimeMethod* method)
{
	{
		float L_0 = ___delay0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___action1;
		Sequence_EnqueueAction_m577562ED6A73B240581A71749FD92F3758B96463(__this, L_0, L_1, (bool)1, /*hidden argument*/NULL);
		return __this;
	}
}
// System.Void DigitalSalmon.Sequence::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_Cancel_mC30D7C7D85EDCC72FDF8A4425DD9A3CDEED7FF36 (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE3FC0A764716BE5F460A35515BE200CAC9F846F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m12C471E8A676412B48B13EF94BBA03369BA7A309_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7F663FE557E1C09EDB6B10A448B7D7E61FFAD03F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandlerExtensions_InvokeSafe_TisCancelledStatus_t36BB4F40883B65D4D8C27A81633266FD8156350C_mBB340AACB31EEF344147C6C5E8ABF2E463EFFB6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Clear_m9B1954A25A5AD8CED217B8170A9E725EDF4CBC54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m3F42B6E02632F37902929A4F2F313C8BF463CCE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_m3847EEEB834C8A02908AAC62AAC5949D8FEF15CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD5F7C39CF5561E43F347E3F042285D01F27D7E67  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		bool L_0;
		L_0 = Sequence_get_IsRunning_mA7E61878985313CE987968C57DB0813F8B45E1C5(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1;
		L_1 = Sequence_get_IsActiveAndEnabled_mB53FEDA8575CAD78C3951E66A91DCEB3A2B7E316(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001d;
		}
	}

IL_0010:
	{
		EventHandler_1_t857EE8F997B0D1D571982AE33FD7D888E99FB3CC * L_2 = __this->get_Cancelled_0();
		EventHandlerExtensions_InvokeSafe_TisCancelledStatus_t36BB4F40883B65D4D8C27A81633266FD8156350C_mBB340AACB31EEF344147C6C5E8ABF2E463EFFB6E(L_2, 0, /*hidden argument*/EventHandlerExtensions_InvokeSafe_TisCancelledStatus_t36BB4F40883B65D4D8C27A81633266FD8156350C_mBB340AACB31EEF344147C6C5E8ABF2E463EFFB6E_RuntimeMethod_var);
		return;
	}

IL_001d:
	{
		HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C * L_3 = __this->get_coroutines_2();
		NullCheck(L_3);
		Enumerator_tD5F7C39CF5561E43F347E3F042285D01F27D7E67  L_4;
		L_4 = HashSet_1_GetEnumerator_m3F42B6E02632F37902929A4F2F313C8BF463CCE8(L_3, /*hidden argument*/HashSet_1_GetEnumerator_m3F42B6E02632F37902929A4F2F313C8BF463CCE8_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0042;
		}

IL_002b:
		{
			RuntimeObject* L_5;
			L_5 = Enumerator_get_Current_m7F663FE557E1C09EDB6B10A448B7D7E61FFAD03F_inline((Enumerator_tD5F7C39CF5561E43F347E3F042285D01F27D7E67 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m7F663FE557E1C09EDB6B10A448B7D7E61FFAD03F_RuntimeMethod_var);
			V_1 = L_5;
			RuntimeObject* L_6 = V_1;
			if (!L_6)
			{
				goto IL_0042;
			}
		}

IL_0036:
		{
			MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_7 = __this->get__monoBehaviour_1();
			RuntimeObject* L_8 = V_1;
			NullCheck(L_7);
			MonoBehaviour_StopCoroutine_m3AB89AE7770E06BDB33BF39104BE5C57DF90616B(L_7, L_8, /*hidden argument*/NULL);
		}

IL_0042:
		{
			bool L_9;
			L_9 = Enumerator_MoveNext_m12C471E8A676412B48B13EF94BBA03369BA7A309((Enumerator_tD5F7C39CF5561E43F347E3F042285D01F27D7E67 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m12C471E8A676412B48B13EF94BBA03369BA7A309_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_002b;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_004d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004d;
	}

FINALLY_004d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mE3FC0A764716BE5F460A35515BE200CAC9F846F5((Enumerator_tD5F7C39CF5561E43F347E3F042285D01F27D7E67 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mE3FC0A764716BE5F460A35515BE200CAC9F846F5_RuntimeMethod_var);
		IL2CPP_END_FINALLY(77)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(77)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
	}

IL_005b:
	{
		HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C * L_10 = __this->get_coroutines_2();
		NullCheck(L_10);
		HashSet_1_Clear_m9B1954A25A5AD8CED217B8170A9E725EDF4CBC54(L_10, /*hidden argument*/HashSet_1_Clear_m9B1954A25A5AD8CED217B8170A9E725EDF4CBC54_RuntimeMethod_var);
		__this->set_actionQueueCoroutine_4((RuntimeObject*)NULL);
		Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372 * L_11 = __this->get_actionQueue_3();
		NullCheck(L_11);
		Queue_1_Clear_m3847EEEB834C8A02908AAC62AAC5949D8FEF15CB(L_11, /*hidden argument*/Queue_1_Clear_m3847EEEB834C8A02908AAC62AAC5949D8FEF15CB_RuntimeMethod_var);
		EventHandler_1_t857EE8F997B0D1D571982AE33FD7D888E99FB3CC * L_12 = __this->get_Cancelled_0();
		EventHandlerExtensions_InvokeSafe_TisCancelledStatus_t36BB4F40883B65D4D8C27A81633266FD8156350C_mBB340AACB31EEF344147C6C5E8ABF2E463EFFB6E(L_12, 1, /*hidden argument*/EventHandlerExtensions_InvokeSafe_TisCancelledStatus_t36BB4F40883B65D4D8C27A81633266FD8156350C_mBB340AACB31EEF344147C6C5E8ABF2E463EFFB6E_RuntimeMethod_var);
		return;
	}
}
// System.Collections.IEnumerator DigitalSalmon.Sequence::DoCoroutine(System.Single,System.Action,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Sequence_DoCoroutine_m02DBBFBE984499D09BD599EBBE6178A41F90403B (float ___delay0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action1, bool ___isRealtime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDoCoroutineU3Ed__31_tE81E9E0DB55A03FAE08A05AE0DE6312216BF4B4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDoCoroutineU3Ed__31_tE81E9E0DB55A03FAE08A05AE0DE6312216BF4B4B * L_0 = (U3CDoCoroutineU3Ed__31_tE81E9E0DB55A03FAE08A05AE0DE6312216BF4B4B *)il2cpp_codegen_object_new(U3CDoCoroutineU3Ed__31_tE81E9E0DB55A03FAE08A05AE0DE6312216BF4B4B_il2cpp_TypeInfo_var);
		U3CDoCoroutineU3Ed__31__ctor_m45978C47D85322C7568EF54559257056FAE314E5(L_0, 0, /*hidden argument*/NULL);
		U3CDoCoroutineU3Ed__31_tE81E9E0DB55A03FAE08A05AE0DE6312216BF4B4B * L_1 = L_0;
		float L_2 = ___delay0;
		NullCheck(L_1);
		L_1->set_delay_3(L_2);
		U3CDoCoroutineU3Ed__31_tE81E9E0DB55A03FAE08A05AE0DE6312216BF4B4B * L_3 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = ___action1;
		NullCheck(L_3);
		L_3->set_action_4(L_4);
		U3CDoCoroutineU3Ed__31_tE81E9E0DB55A03FAE08A05AE0DE6312216BF4B4B * L_5 = L_3;
		bool L_6 = ___isRealtime2;
		NullCheck(L_5);
		L_5->set_isRealtime_2(L_6);
		return L_5;
	}
}
// System.Collections.IEnumerator DigitalSalmon.Sequence::QueueCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Sequence_QueueCoroutine_mDEB66B749EF3EECC79033F39C89A6948996948BF (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CQueueCoroutineU3Ed__32_t7962A48B641243173CA1E0B037FD7510E8B2EDC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CQueueCoroutineU3Ed__32_t7962A48B641243173CA1E0B037FD7510E8B2EDC9 * L_0 = (U3CQueueCoroutineU3Ed__32_t7962A48B641243173CA1E0B037FD7510E8B2EDC9 *)il2cpp_codegen_object_new(U3CQueueCoroutineU3Ed__32_t7962A48B641243173CA1E0B037FD7510E8B2EDC9_il2cpp_TypeInfo_var);
		U3CQueueCoroutineU3Ed__32__ctor_m01F4D96BABC1AF1F4150882515EC93826BAF3006(L_0, 0, /*hidden argument*/NULL);
		U3CQueueCoroutineU3Ed__32_t7962A48B641243173CA1E0B037FD7510E8B2EDC9 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void DigitalSalmon.Sequence::StartCachedCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_StartCachedCoroutine_m0393ABBC4093FF552FC07318A6496253F3FD79B0 (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, RuntimeObject* ___enumerator0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mAF3378D7D4C73EE2B1A687E01500A0A371C6509C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Sequence_get_IsActiveAndEnabled_mB53FEDA8575CAD78C3951E66A91DCEB3A2B7E316(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C * L_1 = __this->get_coroutines_2();
		RuntimeObject* L_2 = ___enumerator0;
		NullCheck(L_1);
		bool L_3;
		L_3 = HashSet_1_Add_mAF3378D7D4C73EE2B1A687E01500A0A371C6509C(L_1, L_2, /*hidden argument*/HashSet_1_Add_mAF3378D7D4C73EE2B1A687E01500A0A371C6509C_RuntimeMethod_var);
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_4;
		L_4 = Sequence_get_MonoBehaviour_m3B3B407758498369A26AA8CB46018890CB73C1A4_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_5 = ___enumerator0;
		HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C * L_6 = __this->get_coroutines_2();
		RuntimeObject* L_7;
		L_7 = Sequence_YieldCoroutineAndRemoveOnComplete_m17EA653B121960EE0B3C29C7E1483557C04CF7ED(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_8;
		L_8 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_4, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.Sequence::StartCachedCoroutine(System.Single,System.Action,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_StartCachedCoroutine_mD9EB3AF4DB6E1DC9ED51413EEFCDA8756D033F59 (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, float ___delay0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action1, bool ___isRealtime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mAF3378D7D4C73EE2B1A687E01500A0A371C6509C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		bool L_0;
		L_0 = Sequence_get_IsActiveAndEnabled_mB53FEDA8575CAD78C3951E66A91DCEB3A2B7E316(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		float L_1 = ___delay0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = ___action1;
		bool L_3 = ___isRealtime2;
		RuntimeObject* L_4;
		L_4 = Sequence_DoCoroutine_m02DBBFBE984499D09BD599EBBE6178A41F90403B(L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C * L_5 = __this->get_coroutines_2();
		RuntimeObject* L_6 = V_0;
		NullCheck(L_5);
		bool L_7;
		L_7 = HashSet_1_Add_mAF3378D7D4C73EE2B1A687E01500A0A371C6509C(L_5, L_6, /*hidden argument*/HashSet_1_Add_mAF3378D7D4C73EE2B1A687E01500A0A371C6509C_RuntimeMethod_var);
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_8;
		L_8 = Sequence_get_MonoBehaviour_m3B3B407758498369A26AA8CB46018890CB73C1A4_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_9 = V_0;
		HashSet_1_t2197AB0305DAE470313DDAEC665842D50967E62C * L_10 = __this->get_coroutines_2();
		RuntimeObject* L_11;
		L_11 = Sequence_YieldCoroutineAndRemoveOnComplete_m17EA653B121960EE0B3C29C7E1483557C04CF7ED(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_12;
		L_12 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_8, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.Sequence::EnqueueAction(System.Single,System.Action,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_EnqueueAction_m577562ED6A73B240581A71749FD92F3758B96463 (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, float ___delay0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action1, bool ___isRealtime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mBD212FC75B5FA0543C7832B20A56B5B81ECAD697_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m275AD08D682AE39DC0DD7599659C49EAB4763D7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___action1;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		float L_1 = ___delay0;
		if ((!(((float)L_1) <= ((float)(0.0f)))))
		{
			goto IL_0028;
		}
	}
	{
		Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372 * L_2 = __this->get_actionQueue_3();
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372 * L_3 = __this->get_actionQueue_3();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Queue_1_get_Count_m275AD08D682AE39DC0DD7599659C49EAB4763D7C_inline(L_3, /*hidden argument*/Queue_1_get_Count_m275AD08D682AE39DC0DD7599659C49EAB4763D7C_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0028;
		}
	}

IL_0021:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = ___action1;
		NullCheck(L_5);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_5, /*hidden argument*/NULL);
		return;
	}

IL_0028:
	{
		Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372 * L_6 = __this->get_actionQueue_3();
		float L_7 = ___delay0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = ___action1;
		bool L_9 = ___isRealtime2;
		QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666 * L_10 = (QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666 *)il2cpp_codegen_object_new(QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666_il2cpp_TypeInfo_var);
		QueuedAction__ctor_m773B88A33F7349AE5C7693FAB250AEA7F3D2901F(L_10, L_7, L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		Queue_1_Enqueue_mBD212FC75B5FA0543C7832B20A56B5B81ECAD697(L_6, L_10, /*hidden argument*/Queue_1_Enqueue_mBD212FC75B5FA0543C7832B20A56B5B81ECAD697_RuntimeMethod_var);
		RuntimeObject* L_11 = __this->get_actionQueueCoroutine_4();
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		return;
	}

IL_0044:
	{
		RuntimeObject* L_12;
		L_12 = Sequence_QueueCoroutine_mDEB66B749EF3EECC79033F39C89A6948996948BF(__this, /*hidden argument*/NULL);
		__this->set_actionQueueCoroutine_4(L_12);
		RuntimeObject* L_13 = __this->get_actionQueueCoroutine_4();
		Sequence_StartCachedCoroutine_m0393ABBC4093FF552FC07318A6496253F3FD79B0(__this, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator DigitalSalmon.Sequence::AfterFramesCoroutine(System.Int32,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Sequence_AfterFramesCoroutine_m38753C03534EFA81FA8F00C996FF51794B39EC26 (int32_t ___numFrames0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAfterFramesCoroutineU3Ed__36_tBD83F07B0B995468AC2610793966D87D27B4B3B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAfterFramesCoroutineU3Ed__36_tBD83F07B0B995468AC2610793966D87D27B4B3B6 * L_0 = (U3CAfterFramesCoroutineU3Ed__36_tBD83F07B0B995468AC2610793966D87D27B4B3B6 *)il2cpp_codegen_object_new(U3CAfterFramesCoroutineU3Ed__36_tBD83F07B0B995468AC2610793966D87D27B4B3B6_il2cpp_TypeInfo_var);
		U3CAfterFramesCoroutineU3Ed__36__ctor_m4F6835B677F81B9146C88624D6B72D612FBED033(L_0, 0, /*hidden argument*/NULL);
		U3CAfterFramesCoroutineU3Ed__36_tBD83F07B0B995468AC2610793966D87D27B4B3B6 * L_1 = L_0;
		int32_t L_2 = ___numFrames0;
		NullCheck(L_1);
		L_1->set_numFrames_2(L_2);
		U3CAfterFramesCoroutineU3Ed__36_tBD83F07B0B995468AC2610793966D87D27B4B3B6 * L_3 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = ___action1;
		NullCheck(L_3);
		L_3->set_action_3(L_4);
		return L_3;
	}
}
// System.Collections.IEnumerator DigitalSalmon.Sequence::AfterWaitCoroutine(UnityEngine.YieldInstruction,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Sequence_AfterWaitCoroutine_m9E08455CADC2A374521E2DBAAADCAE49DB119BAE (YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF * ___wait0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAfterWaitCoroutineU3Ed__37_t2BDAA5BDA5F4A8B0F9AB9BE54D3155F6FBE5F9D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAfterWaitCoroutineU3Ed__37_t2BDAA5BDA5F4A8B0F9AB9BE54D3155F6FBE5F9D5 * L_0 = (U3CAfterWaitCoroutineU3Ed__37_t2BDAA5BDA5F4A8B0F9AB9BE54D3155F6FBE5F9D5 *)il2cpp_codegen_object_new(U3CAfterWaitCoroutineU3Ed__37_t2BDAA5BDA5F4A8B0F9AB9BE54D3155F6FBE5F9D5_il2cpp_TypeInfo_var);
		U3CAfterWaitCoroutineU3Ed__37__ctor_mB5D5EFB8FE0D5994D82325CB3F60C0398E1DE07D(L_0, 0, /*hidden argument*/NULL);
		U3CAfterWaitCoroutineU3Ed__37_t2BDAA5BDA5F4A8B0F9AB9BE54D3155F6FBE5F9D5 * L_1 = L_0;
		YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF * L_2 = ___wait0;
		NullCheck(L_1);
		L_1->set_wait_2(L_2);
		U3CAfterWaitCoroutineU3Ed__37_t2BDAA5BDA5F4A8B0F9AB9BE54D3155F6FBE5F9D5 * L_3 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = ___action1;
		NullCheck(L_3);
		L_3->set_action_3(L_4);
		return L_3;
	}
}
// System.Collections.IEnumerator DigitalSalmon.Sequence::EachFrameCoroutine(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Sequence_EachFrameCoroutine_m0B0F8F3756B1EFCE2010D32262C0B290D48F8FF0 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___func0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEachFrameCoroutineU3Ed__38_t272FADCBD79FDA8FE01938B645235E99E0D69791_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEachFrameCoroutineU3Ed__38_t272FADCBD79FDA8FE01938B645235E99E0D69791 * L_0 = (U3CEachFrameCoroutineU3Ed__38_t272FADCBD79FDA8FE01938B645235E99E0D69791 *)il2cpp_codegen_object_new(U3CEachFrameCoroutineU3Ed__38_t272FADCBD79FDA8FE01938B645235E99E0D69791_il2cpp_TypeInfo_var);
		U3CEachFrameCoroutineU3Ed__38__ctor_mBFB9313F0161D8EFADA1F4B2FCAADC9E7652EA69(L_0, 0, /*hidden argument*/NULL);
		U3CEachFrameCoroutineU3Ed__38_t272FADCBD79FDA8FE01938B645235E99E0D69791 * L_1 = L_0;
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_2 = ___func0;
		NullCheck(L_1);
		L_1->set_func_2(L_2);
		return L_1;
	}
}
// System.Collections.IEnumerator DigitalSalmon.Sequence::EachAfterWaitCoroutine(UnityEngine.YieldInstruction,System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Sequence_EachAfterWaitCoroutine_m32F0F8D8F58152964B96EE3CAC89C750957051CE (YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF * ___wait0, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___func1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEachAfterWaitCoroutineU3Ed__39_t6F70CB41A3911A942F6A6F590EE98CA137E116E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEachAfterWaitCoroutineU3Ed__39_t6F70CB41A3911A942F6A6F590EE98CA137E116E8 * L_0 = (U3CEachAfterWaitCoroutineU3Ed__39_t6F70CB41A3911A942F6A6F590EE98CA137E116E8 *)il2cpp_codegen_object_new(U3CEachAfterWaitCoroutineU3Ed__39_t6F70CB41A3911A942F6A6F590EE98CA137E116E8_il2cpp_TypeInfo_var);
		U3CEachAfterWaitCoroutineU3Ed__39__ctor_mB7BF4F0567C15A9C0319795D2116DA1B34F2CF1C(L_0, 0, /*hidden argument*/NULL);
		U3CEachAfterWaitCoroutineU3Ed__39_t6F70CB41A3911A942F6A6F590EE98CA137E116E8 * L_1 = L_0;
		YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF * L_2 = ___wait0;
		NullCheck(L_1);
		L_1->set_wait_2(L_2);
		U3CEachAfterWaitCoroutineU3Ed__39_t6F70CB41A3911A942F6A6F590EE98CA137E116E8 * L_3 = L_1;
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_4 = ___func1;
		NullCheck(L_3);
		L_3->set_func_3(L_4);
		return L_3;
	}
}
// System.Collections.IEnumerator DigitalSalmon.Sequence::YieldCoroutineAndRemoveOnComplete(System.Collections.IEnumerator,System.Collections.Generic.ICollection`1<System.Collections.IEnumerator>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Sequence_YieldCoroutineAndRemoveOnComplete_m17EA653B121960EE0B3C29C7E1483557C04CF7ED (RuntimeObject* ___coroutine0, RuntimeObject* ___cache1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40_t1D55B22A8E0D2C6ED448B3CD7D3E2A041EE7767C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40_t1D55B22A8E0D2C6ED448B3CD7D3E2A041EE7767C * L_0 = (U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40_t1D55B22A8E0D2C6ED448B3CD7D3E2A041EE7767C *)il2cpp_codegen_object_new(U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40_t1D55B22A8E0D2C6ED448B3CD7D3E2A041EE7767C_il2cpp_TypeInfo_var);
		U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40__ctor_m8F7DBEB5A9863E4CCD190D46D067E7D3DE315DF6(L_0, 0, /*hidden argument*/NULL);
		U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40_t1D55B22A8E0D2C6ED448B3CD7D3E2A041EE7767C * L_1 = L_0;
		RuntimeObject* L_2 = ___coroutine0;
		NullCheck(L_1);
		L_1->set_coroutine_2(L_2);
		U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40_t1D55B22A8E0D2C6ED448B3CD7D3E2A041EE7767C * L_3 = L_1;
		RuntimeObject* L_4 = ___cache1;
		NullCheck(L_3);
		L_3->set_cache_3(L_4);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DigitalSalmon.SinPosition::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SinPosition_Awake_mB07B61F079E6B071D3AF580FE24DC7263A8FB535 (SinPosition_t659F26724C9093675506B556B31458EE6BF6E609 * __this, const RuntimeMethod* method)
{
	{
		SinPosition_Initialise_m3E017C555879C94B00536B995446B21837682F24(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.SinPosition::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SinPosition_Update_mF6278B4C751A720B2903871E7973FEFFCEB4A53F (SinPosition_t659F26724C9093675506B556B31458EE6BF6E609 * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->get_executeInEditor_20();
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = BaseBehaviour_get_transform_m7FD02D01E8D916C8EB1E5FEB1A8BE4EFB8488AA0(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_initialPosition_21();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = SinPosition_GetAmplitude_m3E2E314731561B1AAD8122C18FCC7999C72B8225(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_2, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.SinPosition::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SinPosition_OnValidate_mD3FF5D61E2587A244FB6075ABA6421DF1BBFDC9A (SinPosition_t659F26724C9093675506B556B31458EE6BF6E609 * __this, const RuntimeMethod* method)
{
	{
		SinPosition_Initialise_m3E017C555879C94B00536B995446B21837682F24(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.SinPosition::Initialise()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SinPosition_Initialise_m3E017C555879C94B00536B995446B21837682F24 (SinPosition_t659F26724C9093675506B556B31458EE6BF6E609 * __this, const RuntimeMethod* method)
{
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = BaseBehaviour_get_transform_m7FD02D01E8D916C8EB1E5FEB1A8BE4EFB8488AA0(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_0, /*hidden argument*/NULL);
		__this->set_initialPosition_21(L_1);
		bool L_2 = __this->get_randomPeriod_19();
		if (!L_2)
		{
			goto IL_0045;
		}
	}
	{
		float L_3;
		L_3 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		float L_4;
		L_4 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		float L_5;
		L_5 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_3, (float)(10.0f))), ((float)il2cpp_codegen_multiply((float)L_4, (float)(10.0f))), ((float)il2cpp_codegen_multiply((float)L_5, (float)(10.0f))), /*hidden argument*/NULL);
		__this->set_offset_22(L_6);
	}

IL_0045:
	{
		return;
	}
}
// UnityEngine.Vector3 DigitalSalmon.SinPosition::GetAmplitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SinPosition_GetAmplitude_m3E2E314731561B1AAD8122C18FCC7999C72B8225 (SinPosition_t659F26724C9093675506B556B31458EE6BF6E609 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = __this->get_address_of_offset_22();
		float L_2 = L_1->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = __this->get_address_of_frequency_18();
		float L_4 = L_3->get_x_2();
		float L_5;
		L_5 = sinf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_0, (float)L_2)), (float)L_4)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_6 = __this->get_address_of_amplitude_17();
		float L_7 = L_6->get_x_2();
		float L_8;
		L_8 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = __this->get_address_of_offset_22();
		float L_10 = L_9->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = __this->get_address_of_frequency_18();
		float L_12 = L_11->get_y_3();
		float L_13;
		L_13 = sinf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_8, (float)L_10)), (float)L_12)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_14 = __this->get_address_of_amplitude_17();
		float L_15 = L_14->get_y_3();
		V_0 = ((float)il2cpp_codegen_multiply((float)L_13, (float)L_15));
		float L_16;
		L_16 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_17 = __this->get_address_of_offset_22();
		float L_18 = L_17->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_19 = __this->get_address_of_frequency_18();
		float L_20 = L_19->get_z_4();
		float L_21;
		L_21 = sinf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_16, (float)L_18)), (float)L_20)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_22 = __this->get_address_of_amplitude_17();
		float L_23 = L_22->get_z_4();
		V_1 = ((float)il2cpp_codegen_multiply((float)L_21, (float)L_23));
		float L_24 = V_0;
		float L_25 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_26), ((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)), L_24, L_25, /*hidden argument*/NULL);
		return L_26;
	}
}
// System.Void DigitalSalmon.SinPosition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SinPosition__ctor_mABE42FA5E9A48D582CE4F2D7A29F848B22379903 (SinPosition_t659F26724C9093675506B556B31458EE6BF6E609 * __this, const RuntimeMethod* method)
{
	{
		BaseBehaviour__ctor_mCE0549FB5133CD6C17DF7D64E2D59E0238F2B3AD(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String DigitalSalmon.Extensions.StringExtensions::CamelToTitleCase(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringExtensions_CamelToTitleCase_mF60A021EF55EDA91EB102C8F8E72E6495E81AD9E (String_t* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		String_t* L_0 = ___input0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		StringBuilder_t * L_3 = V_0;
		String_t* L_4 = ___input0;
		NullCheck(L_4);
		Il2CppChar L_5;
		L_5 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_4, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		Il2CppChar L_6;
		L_6 = Char_ToUpper_m7BE77639C5F8EC99F56A729C0D26A684A85F0BC7(L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		StringBuilder_t * L_7;
		L_7 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_3, L_6, /*hidden argument*/NULL);
		V_1 = 1;
		goto IL_0048;
	}

IL_0023:
	{
		String_t* L_8 = ___input0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		Il2CppChar L_10;
		L_10 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_8, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		Il2CppChar L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Char_IsUpper_m72EAD892A02AD10D2050EA09BF3735DDE6921892(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_003c;
		}
	}
	{
		StringBuilder_t * L_13 = V_0;
		NullCheck(L_13);
		StringBuilder_t * L_14;
		L_14 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_13, ((int32_t)32), /*hidden argument*/NULL);
	}

IL_003c:
	{
		StringBuilder_t * L_15 = V_0;
		Il2CppChar L_16 = V_2;
		NullCheck(L_15);
		StringBuilder_t * L_17;
		L_17 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_15, L_16, /*hidden argument*/NULL);
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0048:
	{
		int32_t L_19 = V_1;
		String_t* L_20 = ___input0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_20, /*hidden argument*/NULL);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0023;
		}
	}
	{
		StringBuilder_t * L_22 = V_0;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		return L_23;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Texture2D DigitalSalmon.TextureUtilities::CloneTexture(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureUtilities_CloneTexture_m03CBEC201476EDAB2E0F9CBC57B3EFCBC73BF075 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___texture0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ___texture0;
		bool L_3;
		L_3 = GraphicsExtensions_IsReadable_m8EBBE7877E9380E0057B248A8043DAB3DCC74580(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
	}

IL_0013:
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = ___texture0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Texture2D_get_format_mCBCE13524A94042693822BDDE112990B25F4F8E4(L_4, /*hidden argument*/NULL);
		int32_t L_6;
		L_6 = TextureUtilities_GetClonableFormat_mB0A005D7DC0DE3088100C13B5412131F1DC61E84(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = ___texture0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_7);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_9 = ___texture0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_9);
		int32_t L_11 = V_0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_12 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092(L_12, L_8, L_10, L_11, (bool)0, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_13 = L_12;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_14 = ___texture0;
		NullCheck(L_14);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_15;
		L_15 = Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F(L_13, L_15, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_16 = L_13;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_17 = ___texture0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = Texture_get_filterMode_m66AAEC6C44B0A3A82477A27E5061AF6008501F9E(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0(L_16, L_18, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_19 = L_16;
		NullCheck(L_19);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_19, /*hidden argument*/NULL);
		return L_19;
	}
}
// UnityEngine.TextureFormat DigitalSalmon.TextureUtilities::GetClonableFormat(UnityEngine.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureUtilities_GetClonableFormat_mB0A005D7DC0DE3088100C13B5412131F1DC61E84 (int32_t ___format0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___format0;
		if ((((int32_t)L_0) == ((int32_t)5)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_1 = ___format0;
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = ___format0;
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = ___format0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_4 = ___format0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)18))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_5 = ___format0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)20))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_6 = ___format0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)19))))
		{
			goto IL_0021;
		}
	}
	{
		return (int32_t)(4);
	}

IL_0021:
	{
		int32_t L_7 = ___format0;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector2 DigitalSalmon.Extensions.Vector2Extensions::Round(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2Extensions_Round_m34E58966717D8267F6AB831D73220C77E963A60B (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___self0, float ___increment1, const RuntimeMethod* method)
{
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___self0;
		float L_1 = ___increment1;
		float L_2 = ___increment1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_3), L_1, L_2, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2Extensions_Round_mCAED7A068386989F3456641D879AFD5E5CADD41B(L_0, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 DigitalSalmon.Extensions.Vector2Extensions::Round(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2Extensions_Round_mCAED7A068386989F3456641D879AFD5E5CADD41B (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___self0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___increment1, const RuntimeMethod* method)
{
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___self0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___increment1;
		float L_3 = L_2.get_x_0();
		float L_4;
		L_4 = FloatExtensions_Round_mD2733A64309165E6355AA180446EDF3623ACDF2E(L_1, L_3, /*hidden argument*/NULL);
		(&___self0)->set_x_0(L_4);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ___self0;
		float L_6 = L_5.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = ___increment1;
		float L_8 = L_7.get_y_1();
		float L_9;
		L_9 = FloatExtensions_Round_mD2733A64309165E6355AA180446EDF3623ACDF2E(L_6, L_8, /*hidden argument*/NULL);
		(&___self0)->set_y_1(L_9);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = ___self0;
		return L_10;
	}
}
// UnityEngine.Vector2 DigitalSalmon.Extensions.Vector2Extensions::WithX(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2Extensions_WithX_m483A6926C0EC3BF7528609E80A300045AACF89F7 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___self0, float ___x1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___self0;
		float L_2 = L_1.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_3), L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Vector2 DigitalSalmon.Extensions.Vector2Extensions::WithY(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2Extensions_WithY_mE4ACC680376CC40F9F9B234BEB4A46E38B86AA00 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___self0, float ___y1, const RuntimeMethod* method)
{
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___self0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___y1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_3), L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 DigitalSalmon.Extensions.Vector3Extensions::WithX(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3Extensions_WithX_mEE4814C0A5283DE554554F94D37B76D218397977 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___self0, float ___x1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___self0;
		float L_2 = L_1.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___self0;
		float L_4 = L_3.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), L_0, L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Vector3 DigitalSalmon.Extensions.Vector3Extensions::WithY(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3Extensions_WithY_m4900753F022C4FC442D8ADF74AC6F30E22B4C38B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___self0, float ___y1, const RuntimeMethod* method)
{
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___self0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___y1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___self0;
		float L_4 = L_3.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), L_1, L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Vector3 DigitalSalmon.Extensions.Vector3Extensions::WithZ(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3Extensions_WithZ_mF7DF2AAE7C2EEA666EE031E2183CC1E644877DFC (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___self0, float ___z1, const RuntimeMethod* method)
{
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___self0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___self0;
		float L_3 = L_2.get_y_3();
		float L_4 = ___z1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), L_1, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.WaitForEndOfFrame DigitalSalmon.Wait::get_EndOfFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * Wait_get_EndOfFrame_m21D1FC50A6DBC28A2AE054268AA232847D0D15B1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * G_B2_0 = NULL;
	WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_0 = ((Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_StaticFields*)il2cpp_codegen_static_fields_for(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var))->get_endOfFrame_2();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_2 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_2, /*hidden argument*/NULL);
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var);
		((Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_StaticFields*)il2cpp_codegen_static_fields_for(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var))->set_endOfFrame_2(L_3);
		G_B2_0 = L_3;
	}

IL_0014:
	{
		return G_B2_0;
	}
}
// UnityEngine.WaitForFixedUpdate DigitalSalmon.Wait::get_FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * Wait_get_FixedUpdate_m1BEF69CF709D57CB8B3758FC26E26C692B74722B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * G_B2_0 = NULL;
	WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var);
		WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * L_0 = ((Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_StaticFields*)il2cpp_codegen_static_fields_for(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var))->get_fixedUpdate_3();
		WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * L_2 = (WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 *)il2cpp_codegen_object_new(WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5_il2cpp_TypeInfo_var);
		WaitForFixedUpdate__ctor_mB566493FB99A315BEF348791DE943A89E4B71F9C(L_2, /*hidden argument*/NULL);
		WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var);
		((Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_StaticFields*)il2cpp_codegen_static_fields_for(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var))->set_fixedUpdate_3(L_3);
		G_B2_0 = L_3;
	}

IL_0014:
	{
		return G_B2_0;
	}
}
// UnityEngine.WaitForSeconds DigitalSalmon.Wait::Seconds(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * Wait_Seconds_m3F21808CA8804D7BC9C9AB1A915733B340D31720 (float ___seconds0, bool ___caching1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m8149C300FED5E97C3A96B5C917230A7BDE51B98B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m91DA06C3F9F01EE55EC97ADF02DFD54D6A542487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m68CD187169BB1C72C3BB6F50FFCA3D3C633F12A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___caching1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		float L_1 = ___seconds0;
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_2 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var);
		Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706 * L_3 = ((Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_StaticFields*)il2cpp_codegen_static_fields_for(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var))->get_waitCache_0();
		float L_4 = ___seconds0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_m91DA06C3F9F01EE55EC97ADF02DFD54D6A542487(L_3, L_4, /*hidden argument*/Dictionary_2_ContainsKey_m91DA06C3F9F01EE55EC97ADF02DFD54D6A542487_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var);
		Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706 * L_6 = ((Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_StaticFields*)il2cpp_codegen_static_fields_for(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var))->get_waitCache_0();
		float L_7 = ___seconds0;
		float L_8 = ___seconds0;
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_9 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_9, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		Dictionary_2_Add_m8149C300FED5E97C3A96B5C917230A7BDE51B98B(L_6, L_7, L_9, /*hidden argument*/Dictionary_2_Add_m8149C300FED5E97C3A96B5C917230A7BDE51B98B_RuntimeMethod_var);
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var);
		Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706 * L_10 = ((Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_StaticFields*)il2cpp_codegen_static_fields_for(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var))->get_waitCache_0();
		float L_11 = ___seconds0;
		NullCheck(L_10);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_12;
		L_12 = Dictionary_2_get_Item_m68CD187169BB1C72C3BB6F50FFCA3D3C633F12A1(L_10, L_11, /*hidden argument*/Dictionary_2_get_Item_m68CD187169BB1C72C3BB6F50FFCA3D3C633F12A1_RuntimeMethod_var);
		return L_12;
	}
}
// UnityEngine.WaitForSecondsRealtime DigitalSalmon.Wait::SecondsRealtime(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * Wait_SecondsRealtime_m7510616DA3B48C4894D5CF16AB275F8966584A06 (float ___seconds0, bool ___caching1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m8DC4CB47916ACDFDD5EAA1D5721C8F5183FA978B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mA6BD87C09227CBB54FC5C8183A58BD306CF74121_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m4496A322B06369BF6E7D845A639DF2193AB1906F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___caching1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		float L_1 = ___seconds0;
		WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * L_2 = (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 *)il2cpp_codegen_object_new(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var);
		Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED * L_3 = ((Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_StaticFields*)il2cpp_codegen_static_fields_for(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var))->get_waitRealtimeCache_1();
		float L_4 = ___seconds0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_mA6BD87C09227CBB54FC5C8183A58BD306CF74121(L_3, L_4, /*hidden argument*/Dictionary_2_ContainsKey_mA6BD87C09227CBB54FC5C8183A58BD306CF74121_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var);
		Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED * L_6 = ((Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_StaticFields*)il2cpp_codegen_static_fields_for(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var))->get_waitRealtimeCache_1();
		float L_7 = ___seconds0;
		float L_8 = ___seconds0;
		WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * L_9 = (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 *)il2cpp_codegen_object_new(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225(L_9, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		Dictionary_2_Add_m8DC4CB47916ACDFDD5EAA1D5721C8F5183FA978B(L_6, L_7, L_9, /*hidden argument*/Dictionary_2_Add_m8DC4CB47916ACDFDD5EAA1D5721C8F5183FA978B_RuntimeMethod_var);
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var);
		Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED * L_10 = ((Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_StaticFields*)il2cpp_codegen_static_fields_for(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var))->get_waitRealtimeCache_1();
		float L_11 = ___seconds0;
		NullCheck(L_10);
		WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * L_12;
		L_12 = Dictionary_2_get_Item_m4496A322B06369BF6E7D845A639DF2193AB1906F(L_10, L_11, /*hidden argument*/Dictionary_2_get_Item_m4496A322B06369BF6E7D845A639DF2193AB1906F_RuntimeMethod_var);
		return L_12;
	}
}
// System.Void DigitalSalmon.Wait::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wait__cctor_mFF4A3D782E0FCC77BFC289215E33272D2FA75C0A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m822521978FF340FF63888FEAD9D39F61BDAB86E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE80249A2B292C01BE6F1918B88417F0F2E4109EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706 * L_0 = (Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706 *)il2cpp_codegen_object_new(Dictionary_2_t6087BCE27F9F14FFE79BBE69F5CB5117F02E2706_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mE80249A2B292C01BE6F1918B88417F0F2E4109EB(L_0, /*hidden argument*/Dictionary_2__ctor_mE80249A2B292C01BE6F1918B88417F0F2E4109EB_RuntimeMethod_var);
		((Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_StaticFields*)il2cpp_codegen_static_fields_for(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var))->set_waitCache_0(L_0);
		Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED * L_1 = (Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED *)il2cpp_codegen_object_new(Dictionary_2_t7B53B26A068272F819C3A8B25FA958C46D856EED_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m822521978FF340FF63888FEAD9D39F61BDAB86E3(L_1, /*hidden argument*/Dictionary_2__ctor_m822521978FF340FF63888FEAD9D39F61BDAB86E3_RuntimeMethod_var);
		((Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_StaticFields*)il2cpp_codegen_static_fields_for(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var))->set_waitRealtimeCache_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DigitalSalmon.Sequence/<AfterFramesCoroutine>d__36::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAfterFramesCoroutineU3Ed__36__ctor_m4F6835B677F81B9146C88624D6B72D612FBED033 (U3CAfterFramesCoroutineU3Ed__36_tBD83F07B0B995468AC2610793966D87D27B4B3B6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DigitalSalmon.Sequence/<AfterFramesCoroutine>d__36::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAfterFramesCoroutineU3Ed__36_System_IDisposable_Dispose_m5B573102C5AD9CE4DF6AF266874CF8D32A7ED612 (U3CAfterFramesCoroutineU3Ed__36_tBD83F07B0B995468AC2610793966D87D27B4B3B6 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DigitalSalmon.Sequence/<AfterFramesCoroutine>d__36::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAfterFramesCoroutineU3Ed__36_MoveNext_mEE9E80339FBB2177B22A68A9B81301DE22C4B62A (U3CAfterFramesCoroutineU3Ed__36_tBD83F07B0B995468AC2610793966D87D27B4B3B6 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0040;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		__this->set_U3CframeCountU3E5__2_4(0);
		goto IL_0047;
	}

IL_0020:
	{
		int32_t L_3 = __this->get_U3CframeCountU3E5__2_4();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		int32_t L_4 = V_1;
		__this->set_U3CframeCountU3E5__2_4(L_4);
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0040:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0047:
	{
		int32_t L_5 = __this->get_U3CframeCountU3E5__2_4();
		int32_t L_6 = __this->get_numFrames_2();
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0020;
		}
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = __this->get_action_3();
		NullCheck(L_7);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_7, /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Object DigitalSalmon.Sequence/<AfterFramesCoroutine>d__36::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAfterFramesCoroutineU3Ed__36_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m434189D6500659CCB5FA443F2829E97542E96EAA (U3CAfterFramesCoroutineU3Ed__36_tBD83F07B0B995468AC2610793966D87D27B4B3B6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DigitalSalmon.Sequence/<AfterFramesCoroutine>d__36::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAfterFramesCoroutineU3Ed__36_System_Collections_IEnumerator_Reset_m3B82CC7452AA189EADDEEB3D1AF2CBAEBC5774B8 (U3CAfterFramesCoroutineU3Ed__36_tBD83F07B0B995468AC2610793966D87D27B4B3B6 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAfterFramesCoroutineU3Ed__36_System_Collections_IEnumerator_Reset_m3B82CC7452AA189EADDEEB3D1AF2CBAEBC5774B8_RuntimeMethod_var)));
	}
}
// System.Object DigitalSalmon.Sequence/<AfterFramesCoroutine>d__36::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAfterFramesCoroutineU3Ed__36_System_Collections_IEnumerator_get_Current_mE75C78EBD88A26AC6B451514EB38E3B60057A5E3 (U3CAfterFramesCoroutineU3Ed__36_tBD83F07B0B995468AC2610793966D87D27B4B3B6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DigitalSalmon.Sequence/<AfterWaitCoroutine>d__37::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAfterWaitCoroutineU3Ed__37__ctor_mB5D5EFB8FE0D5994D82325CB3F60C0398E1DE07D (U3CAfterWaitCoroutineU3Ed__37_t2BDAA5BDA5F4A8B0F9AB9BE54D3155F6FBE5F9D5 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DigitalSalmon.Sequence/<AfterWaitCoroutine>d__37::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAfterWaitCoroutineU3Ed__37_System_IDisposable_Dispose_m72724AEE22C9F86EA103BD4CD5DFE79A06261A12 (U3CAfterWaitCoroutineU3Ed__37_t2BDAA5BDA5F4A8B0F9AB9BE54D3155F6FBE5F9D5 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DigitalSalmon.Sequence/<AfterWaitCoroutine>d__37::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAfterWaitCoroutineU3Ed__37_MoveNext_mB1557434812440AC38A8548C05B1D8E8DFA3D735 (U3CAfterWaitCoroutineU3Ed__37_t2BDAA5BDA5F4A8B0F9AB9BE54D3155F6FBE5F9D5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF * L_3 = __this->get_wait_2();
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_002c:
	{
		__this->set_U3CU3E1__state_0((-1));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = __this->get_action_3();
		NullCheck(L_4);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_4, /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Object DigitalSalmon.Sequence/<AfterWaitCoroutine>d__37::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAfterWaitCoroutineU3Ed__37_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7962A42A71F36EF8FBADC675D712FB9FDD9EF9FF (U3CAfterWaitCoroutineU3Ed__37_t2BDAA5BDA5F4A8B0F9AB9BE54D3155F6FBE5F9D5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DigitalSalmon.Sequence/<AfterWaitCoroutine>d__37::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAfterWaitCoroutineU3Ed__37_System_Collections_IEnumerator_Reset_m836F675B17E84034EE9B538C06A05CE6431A6C4A (U3CAfterWaitCoroutineU3Ed__37_t2BDAA5BDA5F4A8B0F9AB9BE54D3155F6FBE5F9D5 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAfterWaitCoroutineU3Ed__37_System_Collections_IEnumerator_Reset_m836F675B17E84034EE9B538C06A05CE6431A6C4A_RuntimeMethod_var)));
	}
}
// System.Object DigitalSalmon.Sequence/<AfterWaitCoroutine>d__37::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAfterWaitCoroutineU3Ed__37_System_Collections_IEnumerator_get_Current_mF3E585FA959C4676E18E0F83E1CE084B276DB59F (U3CAfterWaitCoroutineU3Ed__37_t2BDAA5BDA5F4A8B0F9AB9BE54D3155F6FBE5F9D5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DigitalSalmon.Sequence/<DoCoroutine>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoCoroutineU3Ed__31__ctor_m45978C47D85322C7568EF54559257056FAE314E5 (U3CDoCoroutineU3Ed__31_tE81E9E0DB55A03FAE08A05AE0DE6312216BF4B4B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DigitalSalmon.Sequence/<DoCoroutine>d__31::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoCoroutineU3Ed__31_System_IDisposable_Dispose_m05650306436B066458F68A5281FC33D19FEB29BF (U3CDoCoroutineU3Ed__31_tE81E9E0DB55A03FAE08A05AE0DE6312216BF4B4B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DigitalSalmon.Sequence/<DoCoroutine>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDoCoroutineU3Ed__31_MoveNext_m45BF5C4789F2DF2AF89972C55412DFF5E05465AE (U3CDoCoroutineU3Ed__31_tE81E9E0DB55A03FAE08A05AE0DE6312216BF4B4B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0045;
			}
			case 2:
			{
				goto IL_0069;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		bool L_2 = __this->get_isRealtime_2();
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		float L_3 = __this->get_delay_3();
		IL2CPP_RUNTIME_CLASS_INIT(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * L_4;
		L_4 = Wait_SecondsRealtime_m7510616DA3B48C4894D5CF16AB275F8966584A06(L_3, (bool)1, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0045:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0070;
	}

IL_004e:
	{
		float L_5 = __this->get_delay_3();
		IL2CPP_RUNTIME_CLASS_INIT(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6;
		L_6 = Wait_Seconds_m3F21808CA8804D7BC9C9AB1A915733B340D31720(L_5, (bool)1, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0069:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0070:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = __this->get_action_4();
		NullCheck(L_7);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_7, /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Object DigitalSalmon.Sequence/<DoCoroutine>d__31::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDoCoroutineU3Ed__31_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m909E659A3B9F10F20281FFDC3326F2878F997D02 (U3CDoCoroutineU3Ed__31_tE81E9E0DB55A03FAE08A05AE0DE6312216BF4B4B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DigitalSalmon.Sequence/<DoCoroutine>d__31::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoCoroutineU3Ed__31_System_Collections_IEnumerator_Reset_mCEE1E44A8E33CA9687189BBC8417D6212B23E981 (U3CDoCoroutineU3Ed__31_tE81E9E0DB55A03FAE08A05AE0DE6312216BF4B4B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDoCoroutineU3Ed__31_System_Collections_IEnumerator_Reset_mCEE1E44A8E33CA9687189BBC8417D6212B23E981_RuntimeMethod_var)));
	}
}
// System.Object DigitalSalmon.Sequence/<DoCoroutine>d__31::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDoCoroutineU3Ed__31_System_Collections_IEnumerator_get_Current_mB8C74D125B80E77856B6AE511DF9C1E9267E26FA (U3CDoCoroutineU3Ed__31_tE81E9E0DB55A03FAE08A05AE0DE6312216BF4B4B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DigitalSalmon.Sequence/<EachAfterWaitCoroutine>d__39::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEachAfterWaitCoroutineU3Ed__39__ctor_mB7BF4F0567C15A9C0319795D2116DA1B34F2CF1C (U3CEachAfterWaitCoroutineU3Ed__39_t6F70CB41A3911A942F6A6F590EE98CA137E116E8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DigitalSalmon.Sequence/<EachAfterWaitCoroutine>d__39::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEachAfterWaitCoroutineU3Ed__39_System_IDisposable_Dispose_mF00688608681ACA42A1D2F02D70201DA5C7B0098 (U3CEachAfterWaitCoroutineU3Ed__39_t6F70CB41A3911A942F6A6F590EE98CA137E116E8 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DigitalSalmon.Sequence/<EachAfterWaitCoroutine>d__39::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEachAfterWaitCoroutineU3Ed__39_MoveNext_m7F10CBCDA2741243C6AE0940FED2730109A33958 (U3CEachAfterWaitCoroutineU3Ed__39_t6F70CB41A3911A942F6A6F590EE98CA137E116E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0017:
	{
		YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF * L_3 = __this->get_wait_2();
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_002c:
	{
		__this->set_U3CU3E1__state_0((-1));
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_4 = __this->get_func_3();
		NullCheck(L_4);
		bool L_5;
		L_5 = Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4(L_4, /*hidden argument*/Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0017;
		}
	}
	{
		return (bool)0;
	}
}
// System.Object DigitalSalmon.Sequence/<EachAfterWaitCoroutine>d__39::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEachAfterWaitCoroutineU3Ed__39_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3AC8B4634119EF4DC4515681212798107B3431F1 (U3CEachAfterWaitCoroutineU3Ed__39_t6F70CB41A3911A942F6A6F590EE98CA137E116E8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DigitalSalmon.Sequence/<EachAfterWaitCoroutine>d__39::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEachAfterWaitCoroutineU3Ed__39_System_Collections_IEnumerator_Reset_m4FFBFCA683E879F4E6FE5C4743F2908A39CF9D00 (U3CEachAfterWaitCoroutineU3Ed__39_t6F70CB41A3911A942F6A6F590EE98CA137E116E8 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEachAfterWaitCoroutineU3Ed__39_System_Collections_IEnumerator_Reset_m4FFBFCA683E879F4E6FE5C4743F2908A39CF9D00_RuntimeMethod_var)));
	}
}
// System.Object DigitalSalmon.Sequence/<EachAfterWaitCoroutine>d__39::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEachAfterWaitCoroutineU3Ed__39_System_Collections_IEnumerator_get_Current_m7E1A4D77E47E6BBDA7187375C400532A0D77869A (U3CEachAfterWaitCoroutineU3Ed__39_t6F70CB41A3911A942F6A6F590EE98CA137E116E8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DigitalSalmon.Sequence/<EachFrameCoroutine>d__38::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEachFrameCoroutineU3Ed__38__ctor_mBFB9313F0161D8EFADA1F4B2FCAADC9E7652EA69 (U3CEachFrameCoroutineU3Ed__38_t272FADCBD79FDA8FE01938B645235E99E0D69791 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DigitalSalmon.Sequence/<EachFrameCoroutine>d__38::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEachFrameCoroutineU3Ed__38_System_IDisposable_Dispose_m60636FECAAF301E7094501CA30514090008AAB6F (U3CEachFrameCoroutineU3Ed__38_t272FADCBD79FDA8FE01938B645235E99E0D69791 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DigitalSalmon.Sequence/<EachFrameCoroutine>d__38::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEachFrameCoroutineU3Ed__38_MoveNext_mED080F1205934195E8F57F016CC815F62108AE04 (U3CEachFrameCoroutineU3Ed__38_t272FADCBD79FDA8FE01938B645235E99E0D69791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0036;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0017:
	{
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_3 = __this->get_func_2();
		NullCheck(L_3);
		bool L_4;
		L_4 = Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4(L_3, /*hidden argument*/Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0036:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0017;
	}
}
// System.Object DigitalSalmon.Sequence/<EachFrameCoroutine>d__38::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEachFrameCoroutineU3Ed__38_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD3FF3FB7D2B3DCD1B0FB2CADF3BABD8C54047BF3 (U3CEachFrameCoroutineU3Ed__38_t272FADCBD79FDA8FE01938B645235E99E0D69791 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DigitalSalmon.Sequence/<EachFrameCoroutine>d__38::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEachFrameCoroutineU3Ed__38_System_Collections_IEnumerator_Reset_mFF5FB42382BFA633A6B216B3F9DFB7D54ABFAE96 (U3CEachFrameCoroutineU3Ed__38_t272FADCBD79FDA8FE01938B645235E99E0D69791 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEachFrameCoroutineU3Ed__38_System_Collections_IEnumerator_Reset_mFF5FB42382BFA633A6B216B3F9DFB7D54ABFAE96_RuntimeMethod_var)));
	}
}
// System.Object DigitalSalmon.Sequence/<EachFrameCoroutine>d__38::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEachFrameCoroutineU3Ed__38_System_Collections_IEnumerator_get_Current_m8455EF69A720894AE9DACA6D40F731443B1BE2DA (U3CEachFrameCoroutineU3Ed__38_t272FADCBD79FDA8FE01938B645235E99E0D69791 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DigitalSalmon.Sequence/<QueueCoroutine>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CQueueCoroutineU3Ed__32__ctor_m01F4D96BABC1AF1F4150882515EC93826BAF3006 (U3CQueueCoroutineU3Ed__32_t7962A48B641243173CA1E0B037FD7510E8B2EDC9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DigitalSalmon.Sequence/<QueueCoroutine>d__32::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CQueueCoroutineU3Ed__32_System_IDisposable_Dispose_mEC49660D48AB52A8745DE63EA83261F1FBA2FD5E (U3CQueueCoroutineU3Ed__32_t7962A48B641243173CA1E0B037FD7510E8B2EDC9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DigitalSalmon.Sequence/<QueueCoroutine>d__32::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CQueueCoroutineU3Ed__32_MoveNext_m83247FED73224B5E40F56A012CD718061A0ECFEC (U3CQueueCoroutineU3Ed__32_t7962A48B641243173CA1E0B037FD7510E8B2EDC9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mE335828E4881CDCC254C07E440FBAA3BC0423C8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m275AD08D682AE39DC0DD7599659C49EAB4763D7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_006c;
			}
			case 2:
			{
				goto IL_0095;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_00b3;
	}

IL_002e:
	{
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_3 = V_1;
		NullCheck(L_3);
		Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372 * L_4 = L_3->get_actionQueue_3();
		NullCheck(L_4);
		QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666 * L_5;
		L_5 = Queue_1_Dequeue_mE335828E4881CDCC254C07E440FBAA3BC0423C8C(L_4, /*hidden argument*/Queue_1_Dequeue_mE335828E4881CDCC254C07E440FBAA3BC0423C8C_RuntimeMethod_var);
		__this->set_U3CqueuedActionU3E5__2_3(L_5);
		QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666 * L_6 = __this->get_U3CqueuedActionU3E5__2_3();
		NullCheck(L_6);
		bool L_7;
		L_7 = QueuedAction_get_IsRealtime_m2CEF1B7B110991292575CF8C42AD32F30B9E9D6D_inline(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666 * L_8 = __this->get_U3CqueuedActionU3E5__2_3();
		NullCheck(L_8);
		float L_9;
		L_9 = QueuedAction_get_Delay_mED9073FCBB6A5033621DA00A0DEC7DF7D39C5B8E_inline(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * L_10;
		L_10 = Wait_SecondsRealtime_m7510616DA3B48C4894D5CF16AB275F8966584A06(L_9, (bool)1, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_006c:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_009c;
	}

IL_0075:
	{
		QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666 * L_11 = __this->get_U3CqueuedActionU3E5__2_3();
		NullCheck(L_11);
		float L_12;
		L_12 = QueuedAction_get_Delay_mED9073FCBB6A5033621DA00A0DEC7DF7D39C5B8E_inline(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Wait_tB06CB7DD8D8A555189BC0F8325661F1B72102600_il2cpp_TypeInfo_var);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_13;
		L_13 = Wait_Seconds_m3F21808CA8804D7BC9C9AB1A915733B340D31720(L_12, (bool)1, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_13);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0095:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_009c:
	{
		QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666 * L_14 = __this->get_U3CqueuedActionU3E5__2_3();
		NullCheck(L_14);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_15;
		L_15 = QueuedAction_get_Action_m271814B1D1FFFBCD5853F105BF09EA377A49E80D_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_15, /*hidden argument*/NULL);
		__this->set_U3CqueuedActionU3E5__2_3((QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666 *)NULL);
	}

IL_00b3:
	{
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_16 = V_1;
		NullCheck(L_16);
		Queue_1_tB5CCA1E413B3C48F4E238C326E7E6AAA93F87372 * L_17 = L_16->get_actionQueue_3();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = Queue_1_get_Count_m275AD08D682AE39DC0DD7599659C49EAB4763D7C_inline(L_17, /*hidden argument*/Queue_1_get_Count_m275AD08D682AE39DC0DD7599659C49EAB4763D7C_RuntimeMethod_var);
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * L_19 = V_1;
		NullCheck(L_19);
		L_19->set_actionQueueCoroutine_4((RuntimeObject*)NULL);
		return (bool)0;
	}
}
// System.Object DigitalSalmon.Sequence/<QueueCoroutine>d__32::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CQueueCoroutineU3Ed__32_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m34B5BFFF71D68BB6DACFB2657F644487B5C811FA (U3CQueueCoroutineU3Ed__32_t7962A48B641243173CA1E0B037FD7510E8B2EDC9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DigitalSalmon.Sequence/<QueueCoroutine>d__32::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CQueueCoroutineU3Ed__32_System_Collections_IEnumerator_Reset_m3DF106229C7F7EEF7F2464C2BDF949B1A46E66C2 (U3CQueueCoroutineU3Ed__32_t7962A48B641243173CA1E0B037FD7510E8B2EDC9 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CQueueCoroutineU3Ed__32_System_Collections_IEnumerator_Reset_m3DF106229C7F7EEF7F2464C2BDF949B1A46E66C2_RuntimeMethod_var)));
	}
}
// System.Object DigitalSalmon.Sequence/<QueueCoroutine>d__32::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CQueueCoroutineU3Ed__32_System_Collections_IEnumerator_get_Current_mDB71ADF066E6240B3A31C7CE60F2212562473C40 (U3CQueueCoroutineU3Ed__32_t7962A48B641243173CA1E0B037FD7510E8B2EDC9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DigitalSalmon.Sequence/<YieldCoroutineAndRemoveOnComplete>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40__ctor_m8F7DBEB5A9863E4CCD190D46D067E7D3DE315DF6 (U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40_t1D55B22A8E0D2C6ED448B3CD7D3E2A041EE7767C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DigitalSalmon.Sequence/<YieldCoroutineAndRemoveOnComplete>d__40::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40_System_IDisposable_Dispose_mB8C9F717179C7FF4720A9B8F59B767E3D05DAC38 (U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40_t1D55B22A8E0D2C6ED448B3CD7D3E2A041EE7767C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DigitalSalmon.Sequence/<YieldCoroutineAndRemoveOnComplete>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40_MoveNext_mA89A869FA943B3E9DCB06B8660F3F94AC76D294F (U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40_t1D55B22A8E0D2C6ED448B3CD7D3E2A041EE7767C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t2D9DA7D62617DF526D7073426EA1CDE114C0043E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_3 = __this->get_coroutine_2();
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_002c:
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_4 = __this->get_cache_3();
		RuntimeObject* L_5 = __this->get_coroutine_2();
		NullCheck(L_4);
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.IEnumerator>::Contains(!0) */, ICollection_1_t2D9DA7D62617DF526D7073426EA1CDE114C0043E_il2cpp_TypeInfo_var, L_4, L_5);
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_7 = __this->get_cache_3();
		RuntimeObject* L_8 = __this->get_coroutine_2();
		NullCheck(L_7);
		bool L_9;
		L_9 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(6 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.IEnumerator>::Remove(!0) */, ICollection_1_t2D9DA7D62617DF526D7073426EA1CDE114C0043E_il2cpp_TypeInfo_var, L_7, L_8);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Object DigitalSalmon.Sequence/<YieldCoroutineAndRemoveOnComplete>d__40::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m619CC1F08EC766AF8A77F60038D3EBD91DE42EAD (U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40_t1D55B22A8E0D2C6ED448B3CD7D3E2A041EE7767C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DigitalSalmon.Sequence/<YieldCoroutineAndRemoveOnComplete>d__40::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40_System_Collections_IEnumerator_Reset_m986EF202F86291760B65DD06921FF222E6085E48 (U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40_t1D55B22A8E0D2C6ED448B3CD7D3E2A041EE7767C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40_System_Collections_IEnumerator_Reset_m986EF202F86291760B65DD06921FF222E6085E48_RuntimeMethod_var)));
	}
}
// System.Object DigitalSalmon.Sequence/<YieldCoroutineAndRemoveOnComplete>d__40::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40_System_Collections_IEnumerator_get_Current_mCF35B900A61A82648DFAD587273B2006E7990039 (U3CYieldCoroutineAndRemoveOnCompleteU3Ed__40_t1D55B22A8E0D2C6ED448B3CD7D3E2A041EE7767C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Action DigitalSalmon.Sequence/QueuedAction::get_Action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * QueuedAction_get_Action_m271814B1D1FFFBCD5853F105BF09EA377A49E80D (QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666 * __this, const RuntimeMethod* method)
{
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_U3CActionU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Single DigitalSalmon.Sequence/QueuedAction::get_Delay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float QueuedAction_get_Delay_mED9073FCBB6A5033621DA00A0DEC7DF7D39C5B8E (QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CDelayU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Boolean DigitalSalmon.Sequence/QueuedAction::get_IsRealtime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QueuedAction_get_IsRealtime_m2CEF1B7B110991292575CF8C42AD32F30B9E9D6D (QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsRealtimeU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void DigitalSalmon.Sequence/QueuedAction::.ctor(System.Single,System.Action,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueuedAction__ctor_m773B88A33F7349AE5C7693FAB250AEA7F3D2901F (QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666 * __this, float ___delay0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action1, bool ___isRealtime2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		float L_0 = ___delay0;
		__this->set_U3CDelayU3Ek__BackingField_1(L_0);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___action1;
		__this->set_U3CActionU3Ek__BackingField_0(L_1);
		bool L_2 = ___isRealtime2;
		__this->set_U3CIsRealtimeU3Ek__BackingField_2(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean DigitalSalmon.UI.Style/GUI::get_Verbose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_get_Verbose_mA18293DA638BF056F149365529ECF6E8F7D7C0A9 (const RuntimeMethod* method)
{
	{
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_0;
		L_0 = Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = Event_get_alt_mD4B2211ADDF8B3C3BA262612EF482708C68AF9D9(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DigitalSalmon.UI.Style/GUI::Box(UnityEngine.Rect,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Box_m101D26BA6F53E1C2FB1889192B94858E78DD38DC (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___area0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_0 = ___area0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_1;
		L_1 = Texture2D_get_whiteTexture_m4ED96995BA1D42F7D2823BD9D18023CFE3C680A0(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___color1;
		GUI_Texture_m799B2694BC77335B11DA58573EE574F9A371F6C4(L_0, L_1, L_2, /*hidden argument*/NULL);
		bool L_3;
		L_3 = GUI_get_Verbose_mA18293DA638BF056F149365529ECF6E8F7D7C0A9(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_4;
		L_4 = Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443(/*hidden argument*/NULL);
		NullCheck(L_4);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Event_get_mousePosition_m4D2A80BE0CF9A6D2CE8289C4815807493B3449A9(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = Rect_Contains_m8438BA185AD95D6C50E7A2CF9DD30FBA044CE0B2((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___area0), L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_7 = ___area0;
		IL2CPP_RUNTIME_CLASS_INIT(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8 = ((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->get_BLUE_79();
		GUI_VerboseOutline_m0DEF5879F1D7B74E15900AB4C9E108039AC91DF6(L_7, L_8, /*hidden argument*/NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void DigitalSalmon.UI.Style/GUI::VerboseOutline(UnityEngine.Rect,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_VerboseOutline_m0DEF5879F1D7B74E15900AB4C9E108039AC91DF6 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___area0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___outlineColor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_0 = ___area0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_1;
		L_1 = Texture2D_get_whiteTexture_m4ED96995BA1D42F7D2823BD9D18023CFE3C680A0(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = Color_get_clear_m9F8076CEFE7B8119A9903212DCBF2BFED114E97F(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = ___outlineColor1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___area0), /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5;
		L_5 = Materials_GetBox_mA7F4784B8A5A59864FC549DFB2CC9F91732A3953(L_2, L_3, L_4, (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_DrawTexture_m23BB2BAA877A74489C2A24FE82E698A3099503FF(L_0, L_1, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.UI.Style/GUI::Texture(UnityEngine.Rect,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Texture_m42903531FC92B8288024080F8F83A225C20A15BA (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___area0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = GUI_get_Verbose_mA18293DA638BF056F149365529ECF6E8F7D7C0A9(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_1;
		L_1 = Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443(/*hidden argument*/NULL);
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Event_get_mousePosition_m4D2A80BE0CF9A6D2CE8289C4815807493B3449A9(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = Rect_Contains_m8438BA185AD95D6C50E7A2CF9DD30FBA044CE0B2((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___area0), L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_4 = ___area0;
		IL2CPP_RUNTIME_CLASS_INIT(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = ((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->get_PINK_84();
		GUI_VerboseOutline_m0DEF5879F1D7B74E15900AB4C9E108039AC91DF6(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0025:
	{
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_6 = ___texture1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		return;
	}

IL_002f:
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_8 = ___area0;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_9 = ___texture1;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_DrawTexture_mDD0221088900E3F53BA7B8A03B9E5CD2E6FDD0F8(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.UI.Style/GUI::Texture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Texture_m799B2694BC77335B11DA58573EE574F9A371F6C4 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___area0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___tint2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = GUI_get_color_m61B524C99DD85A0DF405540C6E7453600E816FD5(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ___tint2;
		GUI_set_color_m627E2716FD33EF327E38EE0048CE44FAD77AB87F(L_1, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2 = ___area0;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_3 = ___texture1;
		GUI_Texture_m42903531FC92B8288024080F8F83A225C20A15BA(L_2, L_3, /*hidden argument*/NULL);
		GUI_set_color_m627E2716FD33EF327E38EE0048CE44FAD77AB87F(L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Material DigitalSalmon.UI.Style/Materials::GetBox(UnityEngine.Color,UnityEngine.Color,UnityEngine.Vector2,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Materials_GetBox_mA7F4784B8A5A59864FC549DFB2CC9F91732A3953 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___baseColor0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___outlineColor1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___canvasSize2, float ___outlineThickness3, float ___radius4, float ___smoothing5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Materials_t9D521DF8F29609271EF503A999A419A05504A3EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B84CD2555DA2BA3EC3AB6F02075635F47001E22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51282E2AAC09AC6EDBC2C1C237C0183F97FEE379);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral890C5DA4DDD10267972A8686CFBA344E99DE784E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC84CB0F3694FE2EB26A9C6EFE977D259200530F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = ((Materials_t9D521DF8F29609271EF503A999A419A05504A3EB_StaticFields*)il2cpp_codegen_static_fields_for(Materials_t9D521DF8F29609271EF503A999A419A05504A3EB_il2cpp_TypeInfo_var))->get_box_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_2;
		L_2 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(_stringLiteral3B84CD2555DA2BA3EC3AB6F02075635F47001E22, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_3, L_2, /*hidden argument*/NULL);
		((Materials_t9D521DF8F29609271EF503A999A419A05504A3EB_StaticFields*)il2cpp_codegen_static_fields_for(Materials_t9D521DF8F29609271EF503A999A419A05504A3EB_il2cpp_TypeInfo_var))->set_box_0(L_3);
	}

IL_0021:
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = ((Materials_t9D521DF8F29609271EF503A999A419A05504A3EB_StaticFields*)il2cpp_codegen_static_fields_for(Materials_t9D521DF8F29609271EF503A999A419A05504A3EB_il2cpp_TypeInfo_var))->get_box_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = ___baseColor0;
		NullCheck(L_4);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_4, _stringLiteral51282E2AAC09AC6EDBC2C1C237C0183F97FEE379, L_5, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6 = ((Materials_t9D521DF8F29609271EF503A999A419A05504A3EB_StaticFields*)il2cpp_codegen_static_fields_for(Materials_t9D521DF8F29609271EF503A999A419A05504A3EB_il2cpp_TypeInfo_var))->get_box_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = ___outlineColor1;
		NullCheck(L_6);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_6, _stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C, L_7, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8 = ((Materials_t9D521DF8F29609271EF503A999A419A05504A3EB_StaticFields*)il2cpp_codegen_static_fields_for(Materials_t9D521DF8F29609271EF503A999A419A05504A3EB_il2cpp_TypeInfo_var))->get_box_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = ___canvasSize2;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_10;
		L_10 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_8, _stringLiteralC84CB0F3694FE2EB26A9C6EFE977D259200530F0, L_10, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = ((Materials_t9D521DF8F29609271EF503A999A419A05504A3EB_StaticFields*)il2cpp_codegen_static_fields_for(Materials_t9D521DF8F29609271EF503A999A419A05504A3EB_il2cpp_TypeInfo_var))->get_box_0();
		float L_12 = ___outlineThickness3;
		float L_13 = ___radius4;
		float L_14 = ___smoothing5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), L_12, L_13, L_14, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_16;
		L_16 = Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB(L_15, /*hidden argument*/NULL);
		NullCheck(L_11);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_11, _stringLiteral890C5DA4DDD10267972A8686CFBA344E99DE784E, L_16, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_17 = ((Materials_t9D521DF8F29609271EF503A999A419A05504A3EB_StaticFields*)il2cpp_codegen_static_fields_for(Materials_t9D521DF8F29609271EF503A999A419A05504A3EB_il2cpp_TypeInfo_var))->get_box_0();
		return L_17;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DigitalSalmon.TextureUtilities/Scaling::Bilinear(UnityEngine.Texture2D,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scaling_Bilinear_mB0A9FB5F0CEA880FC0B715A9AD92950226955149 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, int32_t ___newWidth1, int32_t ___newHeight2, const RuntimeMethod* method)
{
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___tex0;
		bool L_1;
		L_1 = GraphicsExtensions_IsReadable_m8EBBE7877E9380E0057B248A8043DAB3DCC74580(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ___tex0;
		int32_t L_3 = ___newWidth1;
		int32_t L_4 = ___newHeight2;
		Scaling_ThreadedScale_m3EE6BDEFE42D1E88C82C40EBFADB1926472D2132(L_2, L_3, L_4, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.TextureUtilities/Scaling::BilinearScale(System.Object,DigitalSalmon.TextureUtilities/Scaling/ScaleSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scaling_BilinearScale_m66953B2D6056EC2CB8C43BB857402B494C904417 (RuntimeObject * ___obj0, ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * ___settings1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorUtilities_t487D68EDAAC238FDD2B4B3F21DE949CD75C3C244_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973 *)CastclassClass((RuntimeObject*)L_0, ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973_il2cpp_TypeInfo_var));
		ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973 * L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->get_Start_1();
		V_1 = L_2;
		goto IL_00f4;
	}

IL_0013:
	{
		int32_t L_3 = V_1;
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_4 = ___settings1;
		NullCheck(L_4);
		float L_5 = L_4->get_RatioY_4();
		float L_6;
		L_6 = floorf(((float)il2cpp_codegen_multiply((float)((float)((float)L_3)), (float)L_5)));
		V_2 = ((int32_t)((int32_t)L_6));
		int32_t L_7 = V_2;
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_8 = ___settings1;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_OldWidth_2();
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)L_9));
		int32_t L_10 = V_2;
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_11 = ___settings1;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_OldWidth_2();
		V_4 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)), (int32_t)L_12));
		int32_t L_13 = V_1;
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_14 = ___settings1;
		NullCheck(L_14);
		int32_t L_15 = L_14->get_NewWidth_5();
		V_5 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)L_15));
		V_6 = 0;
		goto IL_00e3;
	}

IL_004a:
	{
		int32_t L_16 = V_6;
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_17 = ___settings1;
		NullCheck(L_17);
		float L_18 = L_17->get_RatioX_3();
		float L_19;
		L_19 = floorf(((float)il2cpp_codegen_multiply((float)((float)((float)L_16)), (float)L_18)));
		V_7 = ((int32_t)((int32_t)L_19));
		int32_t L_20 = V_6;
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_21 = ___settings1;
		NullCheck(L_21);
		float L_22 = L_21->get_RatioX_3();
		int32_t L_23 = V_7;
		V_8 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_20)), (float)L_22)), (float)((float)((float)L_23))));
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_24 = ___settings1;
		NullCheck(L_24);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_25 = L_24->get_NewColors_1();
		int32_t L_26 = V_5;
		int32_t L_27 = V_6;
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_28 = ___settings1;
		NullCheck(L_28);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_29 = L_28->get_TexColors_0();
		int32_t L_30 = V_3;
		int32_t L_31 = V_7;
		NullCheck(L_29);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)L_31));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_34 = ___settings1;
		NullCheck(L_34);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_35 = L_34->get_TexColors_0();
		int32_t L_36 = V_3;
		int32_t L_37 = V_7;
		NullCheck(L_35);
		int32_t L_38 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)L_37)), (int32_t)1));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_39 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		float L_40 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(ColorUtilities_t487D68EDAAC238FDD2B4B3F21DE949CD75C3C244_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_41;
		L_41 = ColorUtilities_ULerp_m0D9F84BD0AB9A7EB104B4DDE68AA7A494E563F27(L_33, L_39, L_40, /*hidden argument*/NULL);
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_42 = ___settings1;
		NullCheck(L_42);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_43 = L_42->get_TexColors_0();
		int32_t L_44 = V_4;
		int32_t L_45 = V_7;
		NullCheck(L_43);
		int32_t L_46 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)L_45));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_47 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_48 = ___settings1;
		NullCheck(L_48);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_49 = L_48->get_TexColors_0();
		int32_t L_50 = V_4;
		int32_t L_51 = V_7;
		NullCheck(L_49);
		int32_t L_52 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)L_51)), (int32_t)1));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_53 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		float L_54 = V_8;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_55;
		L_55 = ColorUtilities_ULerp_m0D9F84BD0AB9A7EB104B4DDE68AA7A494E563F27(L_47, L_53, L_54, /*hidden argument*/NULL);
		int32_t L_56 = V_1;
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_57 = ___settings1;
		NullCheck(L_57);
		float L_58 = L_57->get_RatioY_4();
		int32_t L_59 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_60;
		L_60 = ColorUtilities_ULerp_m0D9F84BD0AB9A7EB104B4DDE68AA7A494E563F27(L_41, L_55, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_56)), (float)L_58)), (float)((float)((float)L_59)))), /*hidden argument*/NULL);
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_27))), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_60);
		int32_t L_61 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
	}

IL_00e3:
	{
		int32_t L_62 = V_6;
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_63 = ___settings1;
		NullCheck(L_63);
		int32_t L_64 = L_63->get_NewWidth_5();
		if ((((int32_t)L_62) < ((int32_t)L_64)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_65 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
	}

IL_00f4:
	{
		int32_t L_66 = V_1;
		ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973 * L_67 = V_0;
		NullCheck(L_67);
		int32_t L_68 = L_67->get_End_0();
		if ((((int32_t)L_66) < ((int32_t)L_68)))
		{
			goto IL_0013;
		}
	}
	{
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_69 = ___settings1;
		NullCheck(L_69);
		Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * L_70 = L_69->get_Mutex_7();
		NullCheck(L_70);
		bool L_71;
		L_71 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_70);
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_72 = ___settings1;
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_73 = L_72;
		NullCheck(L_73);
		int32_t L_74 = L_73->get_FinishCount_6();
		NullCheck(L_73);
		L_73->set_FinishCount_6(((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1)));
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_75 = ___settings1;
		NullCheck(L_75);
		Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * L_76 = L_75->get_Mutex_7();
		NullCheck(L_76);
		Mutex_ReleaseMutex_mDF6C95C5F169F7345539CAECFA264A4D4687B190(L_76, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.TextureUtilities/Scaling::PointScale(System.Object,DigitalSalmon.TextureUtilities/Scaling/ScaleSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scaling_PointScale_mF3C019176BB72C24D849B51968A3BC7B796B312F (RuntimeObject * ___obj0, ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * ___settings1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973 *)CastclassClass((RuntimeObject*)L_0, ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973_il2cpp_TypeInfo_var));
		ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973 * L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->get_Start_1();
		V_1 = L_2;
		goto IL_006c;
	}

IL_0010:
	{
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_3 = ___settings1;
		NullCheck(L_3);
		float L_4 = L_3->get_RatioY_4();
		int32_t L_5 = V_1;
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_6 = ___settings1;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_OldWidth_2();
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_4, (float)((float)((float)L_5)))))), (int32_t)L_7));
		int32_t L_8 = V_1;
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_9 = ___settings1;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_NewWidth_5();
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)L_10));
		V_4 = 0;
		goto IL_005e;
	}

IL_0030:
	{
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_11 = ___settings1;
		NullCheck(L_11);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_12 = L_11->get_NewColors_1();
		int32_t L_13 = V_3;
		int32_t L_14 = V_4;
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_15 = ___settings1;
		NullCheck(L_15);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_16 = L_15->get_TexColors_0();
		int32_t L_17 = V_2;
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_18 = ___settings1;
		NullCheck(L_18);
		float L_19 = L_18->get_RatioX_3();
		int32_t L_20 = V_4;
		NullCheck(L_16);
		int32_t L_21 = ((int32_t)((int32_t)((float)il2cpp_codegen_add((float)((float)((float)L_17)), (float)((float)il2cpp_codegen_multiply((float)L_19, (float)((float)((float)L_20))))))));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_22 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14))), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_22);
		int32_t L_23 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_005e:
	{
		int32_t L_24 = V_4;
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_25 = ___settings1;
		NullCheck(L_25);
		int32_t L_26 = L_25->get_NewWidth_5();
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_006c:
	{
		int32_t L_28 = V_1;
		ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973 * L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = L_29->get_End_0();
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_0010;
		}
	}
	{
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_31 = ___settings1;
		NullCheck(L_31);
		Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * L_32 = L_31->get_Mutex_7();
		NullCheck(L_32);
		bool L_33;
		L_33 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_32);
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_34 = ___settings1;
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_35 = L_34;
		NullCheck(L_35);
		int32_t L_36 = L_35->get_FinishCount_6();
		NullCheck(L_35);
		L_35->set_FinishCount_6(((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1)));
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_37 = ___settings1;
		NullCheck(L_37);
		Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * L_38 = L_37->get_Mutex_7();
		NullCheck(L_38);
		Mutex_ReleaseMutex_mDF6C95C5F169F7345539CAECFA264A4D4687B190(L_38, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.TextureUtilities/Scaling::ThreadedScale(UnityEngine.Texture2D,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scaling_ThreadedScale_m3EE6BDEFE42D1E88C82C40EBFADB1926472D2132 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, int32_t ___newWidth1, int32_t ___newHeight2, bool ___useBilinear3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CThreadedScaleU3Eg__ActionU7C0_m45FA61DE3EBC48DC7941F76F4ED540A81E4F1E09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CThreadedScaleU3Eg__ScaleU7C1_mC4C02B2C5A097F9D2A1A6B9024DB2922F02E066C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973 * V_4 = NULL;
	ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973 * V_5 = NULL;
	ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * G_B4_0 = NULL;
	ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * G_B4_1 = NULL;
	U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B * G_B4_2 = NULL;
	ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * G_B3_0 = NULL;
	ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * G_B3_1 = NULL;
	U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B * G_B3_2 = NULL;
	float G_B5_0 = 0.0f;
	ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * G_B5_1 = NULL;
	ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * G_B5_2 = NULL;
	U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B * G_B5_3 = NULL;
	ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * G_B7_0 = NULL;
	ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * G_B7_1 = NULL;
	U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B * G_B7_2 = NULL;
	ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * G_B6_0 = NULL;
	ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * G_B6_1 = NULL;
	U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B * G_B6_2 = NULL;
	float G_B8_0 = 0.0f;
	ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * G_B8_1 = NULL;
	ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * G_B8_2 = NULL;
	U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B * G_B8_3 = NULL;
	ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516 * G_B13_0 = NULL;
	{
		U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B * L_0 = (U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass6_0__ctor_mA985DB6F2F2B2CA84F0E29A90A6FC205EF63A29D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_1 = ___tex0;
		bool L_2;
		L_2 = GraphicsExtensions_IsReadable_m8EBBE7877E9380E0057B248A8043DAB3DCC74580(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		int32_t L_3;
		L_3 = SystemInfo_get_processorCount_mBAA6A01218CF7F03638A6016B6881466830FD0D5(/*hidden argument*/NULL);
		int32_t L_4 = ___newHeight2;
		int32_t L_5;
		L_5 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = ___newHeight2;
		int32_t L_7 = V_1;
		V_2 = ((int32_t)((int32_t)L_6/(int32_t)L_7));
		U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B * L_8 = V_0;
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_9 = (ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE *)il2cpp_codegen_object_new(ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE_il2cpp_TypeInfo_var);
		ScaleSettings__ctor_m8818010F22D92CBD0F1E0C715EAC6F4BE2B195AD(L_9, /*hidden argument*/NULL);
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_10 = L_9;
		NullCheck(L_10);
		L_10->set_FinishCount_6(0);
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_11 = L_10;
		Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * L_12 = (Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 *)il2cpp_codegen_object_new(Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5_il2cpp_TypeInfo_var);
		Mutex__ctor_mE64D51F0538989539F6C059AB7E247423B699BBE(L_12, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_11);
		L_11->set_Mutex_7(L_12);
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_13 = L_11;
		int32_t L_14 = ___newWidth1;
		int32_t L_15 = ___newHeight2;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_16 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)L_15)));
		NullCheck(L_13);
		L_13->set_NewColors_1(L_16);
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_17 = L_13;
		bool L_18 = ___useBilinear3;
		G_B3_0 = L_17;
		G_B3_1 = L_17;
		G_B3_2 = L_8;
		if (L_18)
		{
			G_B4_0 = L_17;
			G_B4_1 = L_17;
			G_B4_2 = L_8;
			goto IL_0056;
		}
	}
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_19 = ___tex0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_19);
		int32_t L_21 = ___newWidth1;
		G_B5_0 = ((float)((float)((float)((float)L_20))/(float)((float)((float)L_21))));
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		goto IL_0068;
	}

IL_0056:
	{
		int32_t L_22 = ___newWidth1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_23 = ___tex0;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_23);
		G_B5_0 = ((float)((float)(1.0f)/(float)((float)((float)((float)((float)L_22))/(float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1))))))));
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
	}

IL_0068:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_RatioX_3(G_B5_0);
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_25 = G_B5_2;
		bool L_26 = ___useBilinear3;
		G_B6_0 = L_25;
		G_B6_1 = L_25;
		G_B6_2 = G_B5_3;
		if (L_26)
		{
			G_B7_0 = L_25;
			G_B7_1 = L_25;
			G_B7_2 = G_B5_3;
			goto IL_007d;
		}
	}
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_27 = ___tex0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_27);
		int32_t L_29 = ___newHeight2;
		G_B8_0 = ((float)((float)((float)((float)L_28))/(float)((float)((float)L_29))));
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		G_B8_3 = G_B6_2;
		goto IL_008f;
	}

IL_007d:
	{
		int32_t L_30 = ___newHeight2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_31 = ___tex0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_31);
		G_B8_0 = ((float)((float)(1.0f)/(float)((float)((float)((float)((float)L_30))/(float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)1))))))));
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
		G_B8_3 = G_B7_2;
	}

IL_008f:
	{
		NullCheck(G_B8_1);
		G_B8_1->set_RatioY_4(G_B8_0);
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_33 = G_B8_2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_34 = ___tex0;
		NullCheck(L_34);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_35;
		L_35 = Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699(L_34, /*hidden argument*/NULL);
		NullCheck(L_33);
		L_33->set_TexColors_0(L_35);
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_36 = L_33;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_37 = ___tex0;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_37);
		NullCheck(L_36);
		L_36->set_OldWidth_2(L_38);
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_39 = L_36;
		int32_t L_40 = ___newWidth1;
		NullCheck(L_39);
		L_39->set_NewWidth_5(L_40);
		NullCheck(G_B8_3);
		G_B8_3->set_settings_0(L_39);
		int32_t L_41 = V_1;
		if ((((int32_t)L_41) <= ((int32_t)1)))
		{
			goto IL_0153;
		}
	}
	{
		V_3 = 0;
		goto IL_0115;
	}

IL_00c3:
	{
		int32_t L_42 = V_2;
		int32_t L_43 = V_3;
		int32_t L_44 = V_2;
		int32_t L_45 = V_3;
		ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973 * L_46 = (ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973 *)il2cpp_codegen_object_new(ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973_il2cpp_TypeInfo_var);
		ThreadData__ctor_m7DE524139A5207015849111554D38536B0736B84(L_46, ((int32_t)il2cpp_codegen_multiply((int32_t)L_42, (int32_t)L_43)), ((int32_t)il2cpp_codegen_multiply((int32_t)L_44, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1)))), /*hidden argument*/NULL);
		V_4 = L_46;
		bool L_47 = ___useBilinear3;
		if (L_47)
		{
			goto IL_00ee;
		}
	}
	{
		U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B * L_48 = V_0;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_49 = (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)il2cpp_codegen_object_new(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158(L_49, L_48, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass6_0_U3CThreadedScaleU3Eg__ScaleU7C1_mC4C02B2C5A097F9D2A1A6B9024DB2922F02E066C_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516 * L_50 = (ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516 *)il2cpp_codegen_object_new(ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516_il2cpp_TypeInfo_var);
		ParameterizedThreadStart__ctor_m6F49448AAE802068CE1DB1BE519962708DA871B0(L_50, L_49, (intptr_t)((intptr_t)Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var), /*hidden argument*/NULL);
		G_B13_0 = L_50;
		goto IL_0105;
	}

IL_00ee:
	{
		U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B * L_51 = V_0;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_52 = (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)il2cpp_codegen_object_new(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158(L_52, L_51, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass6_0_U3CThreadedScaleU3Eg__ActionU7C0_m45FA61DE3EBC48DC7941F76F4ED540A81E4F1E09_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516 * L_53 = (ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516 *)il2cpp_codegen_object_new(ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516_il2cpp_TypeInfo_var);
		ParameterizedThreadStart__ctor_m6F49448AAE802068CE1DB1BE519962708DA871B0(L_53, L_52, (intptr_t)((intptr_t)Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var), /*hidden argument*/NULL);
		G_B13_0 = L_53;
	}

IL_0105:
	{
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_54 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		Thread__ctor_m4E8C9D36164CFCFD65989CAE0F6456AC40BC4492(L_54, G_B13_0, /*hidden argument*/NULL);
		ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973 * L_55 = V_4;
		NullCheck(L_54);
		Thread_Start_m11EE2B4E0C1BC8520655644C1C31C0CFFC23B5B7(L_54, L_55, /*hidden argument*/NULL);
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_0115:
	{
		int32_t L_57 = V_3;
		int32_t L_58 = V_1;
		if ((((int32_t)L_57) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_58, (int32_t)1)))))
		{
			goto IL_00c3;
		}
	}
	{
		int32_t L_59 = V_2;
		int32_t L_60 = V_3;
		int32_t L_61 = ___newHeight2;
		ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973 * L_62 = (ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973 *)il2cpp_codegen_object_new(ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973_il2cpp_TypeInfo_var);
		ThreadData__ctor_m7DE524139A5207015849111554D38536B0736B84(L_62, ((int32_t)il2cpp_codegen_multiply((int32_t)L_59, (int32_t)L_60)), L_61, /*hidden argument*/NULL);
		V_4 = L_62;
		bool L_63 = ___useBilinear3;
		if (!L_63)
		{
			goto IL_0133;
		}
	}
	{
		U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B * L_64 = V_0;
		ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973 * L_65 = V_4;
		NullCheck(L_64);
		U3CU3Ec__DisplayClass6_0_U3CThreadedScaleU3Eg__ActionU7C0_m45FA61DE3EBC48DC7941F76F4ED540A81E4F1E09(L_64, L_65, /*hidden argument*/NULL);
		goto IL_0143;
	}

IL_0133:
	{
		U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B * L_66 = V_0;
		ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973 * L_67 = V_4;
		NullCheck(L_66);
		U3CU3Ec__DisplayClass6_0_U3CThreadedScaleU3Eg__ScaleU7C1_mC4C02B2C5A097F9D2A1A6B9024DB2922F02E066C(L_66, L_67, /*hidden argument*/NULL);
		goto IL_0143;
	}

IL_013d:
	{
		Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC(1, /*hidden argument*/NULL);
	}

IL_0143:
	{
		U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B * L_68 = V_0;
		NullCheck(L_68);
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_69 = L_68->get_settings_0();
		NullCheck(L_69);
		int32_t L_70 = L_69->get_FinishCount_6();
		int32_t L_71 = V_1;
		if ((((int32_t)L_70) < ((int32_t)L_71)))
		{
			goto IL_013d;
		}
	}
	{
		goto IL_0171;
	}

IL_0153:
	{
		int32_t L_72 = ___newHeight2;
		ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973 * L_73 = (ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973 *)il2cpp_codegen_object_new(ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973_il2cpp_TypeInfo_var);
		ThreadData__ctor_m7DE524139A5207015849111554D38536B0736B84(L_73, 0, L_72, /*hidden argument*/NULL);
		V_5 = L_73;
		bool L_74 = ___useBilinear3;
		if (!L_74)
		{
			goto IL_0169;
		}
	}
	{
		U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B * L_75 = V_0;
		ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973 * L_76 = V_5;
		NullCheck(L_75);
		U3CU3Ec__DisplayClass6_0_U3CThreadedScaleU3Eg__ActionU7C0_m45FA61DE3EBC48DC7941F76F4ED540A81E4F1E09(L_75, L_76, /*hidden argument*/NULL);
		goto IL_0171;
	}

IL_0169:
	{
		U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B * L_77 = V_0;
		ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973 * L_78 = V_5;
		NullCheck(L_77);
		U3CU3Ec__DisplayClass6_0_U3CThreadedScaleU3Eg__ScaleU7C1_mC4C02B2C5A097F9D2A1A6B9024DB2922F02E066C(L_77, L_78, /*hidden argument*/NULL);
	}

IL_0171:
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_79 = ___tex0;
		int32_t L_80 = ___newWidth1;
		int32_t L_81 = ___newHeight2;
		NullCheck(L_79);
		bool L_82;
		L_82 = Texture2D_Resize_m3B472A6ED37D683DC4162504F6DCF42E1FA2195C(L_79, L_80, L_81, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_83 = ___tex0;
		U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B * L_84 = V_0;
		NullCheck(L_84);
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_85 = L_84->get_settings_0();
		NullCheck(L_85);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_86 = L_85->get_NewColors_1();
		NullCheck(L_83);
		Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F(L_83, L_86, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_87 = ___tex0;
		NullCheck(L_87);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_87, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DigitalSalmon.TextureUtilities/Scaling/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mA985DB6F2F2B2CA84F0E29A90A6FC205EF63A29D (U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.TextureUtilities/Scaling/<>c__DisplayClass6_0::<ThreadedScale>g__Action|0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CThreadedScaleU3Eg__ActionU7C0_m45FA61DE3EBC48DC7941F76F4ED540A81E4F1E09 (U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___o0;
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_1 = __this->get_settings_0();
		Scaling_BilinearScale_m66953B2D6056EC2CB8C43BB857402B494C904417(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DigitalSalmon.TextureUtilities/Scaling/<>c__DisplayClass6_0::<ThreadedScale>g__Scale|1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CThreadedScaleU3Eg__ScaleU7C1_mC4C02B2C5A097F9D2A1A6B9024DB2922F02E066C (U3CU3Ec__DisplayClass6_0_t3ACB7C07ECFA6033D5A0F2AFD581FAD90BA7678B * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___o0;
		ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * L_1 = __this->get_settings_0();
		Scaling_PointScale_mF3C019176BB72C24D849B51968A3BC7B796B312F(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DigitalSalmon.TextureUtilities/Scaling/ScaleSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleSettings__ctor_m8818010F22D92CBD0F1E0C715EAC6F4BE2B195AD (ScaleSettings_t47A6D06F8C515BBFFEC18D6696F6D677E86918EE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DigitalSalmon.TextureUtilities/Scaling/ThreadData::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadData__ctor_m7DE524139A5207015849111554D38536B0736B84 (ThreadData_tC5759003E01A15F37CE027DA85B25A19607FB973 * __this, int32_t ___s0, int32_t ___e1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___s0;
		__this->set_Start_1(L_0);
		int32_t L_1 = ___e1;
		__this->set_End_0(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Colours_get_WHITE_10_m5E625D08F89C0177546767E2D9195E406AB6303D_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ((Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_StaticFields*)il2cpp_codegen_static_fields_for(Colours_t7C2073AAEC8499DD659D40AB2A9DDDE78CDCEDC2_il2cpp_TypeInfo_var))->get_U3CWHITE_10U3Ek__BackingField_68();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 * ColliderBehaviour_get_ValidCheck_m6BA7638CF1C1CAAF0CB24BBD36E10B25C433E2C8_inline (ColliderBehaviour_t57531986DD4AF6CE6932F6730FCA26FAD8A10297 * __this, const RuntimeMethod* method)
{
	{
		Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 * L_0 = __this->get_U3CValidCheckU3Ek__BackingField_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColliderBehaviour_set_ValidCheck_m783956FE032468FBAEB4DDC62EB3E3EC466E85D9_inline (ColliderBehaviour_t57531986DD4AF6CE6932F6730FCA26FAD8A10297 * __this, Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 * ___value0, const RuntimeMethod* method)
{
	{
		Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 * L_0 = ___value0;
		__this->set_U3CValidCheckU3Ek__BackingField_19(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___x0;
		__this->set_m_X_0(L_0);
		int32_t L_1 = ___y1;
		__this->set_m_Y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * Sequence_get_MonoBehaviour_m3B3B407758498369A26AA8CB46018890CB73C1A4_inline (Sequence_t19B80336FBA3636397F01671A304E5DED74DD08C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_0 = __this->get__monoBehaviour_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool QueuedAction_get_IsRealtime_m2CEF1B7B110991292575CF8C42AD32F30B9E9D6D_inline (QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsRealtimeU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float QueuedAction_get_Delay_mED9073FCBB6A5033621DA00A0DEC7DF7D39C5B8E_inline (QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CDelayU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * QueuedAction_get_Action_m271814B1D1FFFBCD5853F105BF09EA377A49E80D_inline (QueuedAction_tDE0F6C1FC0BE91D6EEF20A52E5D7D11A26257666 * __this, const RuntimeMethod* method)
{
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_U3CActionU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_2, (int32_t)L_3);
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__count_9();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__current_3();
		return (RuntimeObject *)L_0;
	}
}
