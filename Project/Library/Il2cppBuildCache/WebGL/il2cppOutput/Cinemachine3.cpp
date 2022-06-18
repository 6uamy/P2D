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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Action`1<UnityEngine.Playables.PlayableDirector>
struct Action_1_tEFFD33105460921F68C4261E79791D397C76CB1B;
// System.Comparison`1<Cinemachine.CinemachineComponentBase>
struct Comparison_1_t8DC08F98CD3C24E12C6401F69228710B0EF5C073;
// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension>
struct List_1_t13875FE3163CFA961C09134FFAA2E0903229691A;
// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable>
struct List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009;
// System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheCurve/Item>
struct List_1_tC1537C8DF457B7721EAA10465942441865A779E5;
// System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>
struct List_1_tAED568015081230FCEC357C56CB10520C53903F7;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Cinemachine.CinemachineComponentBase[]
struct CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Cinemachine.CinemachineCore/Stage[]
struct StageU5BU5D_t605193BD653BA57911AFE8A2D01B1D799F7BB949;
// Cinemachine.TargetPositionCache/CacheCurve/Item[]
struct ItemU5BU5D_t1108E169C548FBD6E94B6418A98483F93C2FB3E8;
// Cinemachine.TargetPositionCache/CacheEntry/RecordingItem[]
struct RecordingItemU5BU5D_t519137B584A64E57F8188DDEE96C7A40220E40F5;
// UnityEngine.Animation
struct Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// Cinemachine.CinemachineBrain
struct CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83;
// Cinemachine.CinemachineComponentBase
struct CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D;
// Cinemachine.CinemachineVirtualCamera
struct CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C;
// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Cinemachine.ICinemachineTargetGroup
struct ICinemachineTargetGroup_t1A8D13688535CFE851EE667877C439AC8D1D38CC;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.Playables.PlayableDirector
struct PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38;
// UnityEngine.UI.RawImage
struct RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Cinemachine.CinemachineBrain/VcamActivatedEvent
struct VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296;
// Cinemachine.CinemachineStoryboard/CanvasInfo
struct CanvasInfo_t70219CA4ECC7F2DFE94082AD8E227EC478E0D728;
// Cinemachine.CinemachineVirtualCamera/<>c
struct U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD;
// Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate
struct CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19;
// Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate
struct DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28;
// Cinemachine.NoiseSettings/NoiseParams
struct NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74;
// Cinemachine.TargetPositionCache/CacheCurve
struct CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10;
// Cinemachine.TargetPositionCache/CacheEntry
struct CacheEntry_tC683B96A4235FEB735629D760FF9E5954610DAC6;
// Cinemachine.UpdateTracker/UpdateStatus
struct UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B;
// Cinemachine.CinemachineTriggerAction/ActionSettings/TriggerEvent
struct TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B;

IL2CPP_EXTERN_C RuntimeClass* Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tAED568015081230FCEC357C56CB10520C53903F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC1537C8DF457B7721EAA10465942441865A779E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_m92B9ADEC5AE6A5FB55D702AD0410469739EF307C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5_m06107BAD0F98AB92EEDD9CC81DCFDDAB29D7A27B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38_m3D32B48A597D5DB9C11F87B94BB4C0853DA88686_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m82E31B8E4FAD858C374B87C26416A623CB116DC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAE25CC388FC2D88F7ECD58678578FD5C2C903F66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mFE47C3DDAD2ADBAC7AB3AB8E4F1A9B78CEBF0DE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m56838B2A12DB31FC32841390BF3570FB1FF85C7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0A87900FEA9DBA7FC77FFDD29AA466E938168B94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m786B3FBB5FFA2F06FB278182CEA118E62A2DA334_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9514D8319A9C37531733E4D2D7B2A5E920822635_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE8F7A4717F2AFBB314903A66709DBC4E3A6299D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8D9BE2D904E61F226686ABCD759CFCC1506F6079_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8FE58202E8C53418E70622C8ED2B388429124FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m17F257BBEC37D95D8195C0C91654445D1079DC7F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74;;
struct NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_com;
struct NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_com;;
struct NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_pinvoke;
struct NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_pinvoke;;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com;;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke;;

struct CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ItemU5BU5D_t1108E169C548FBD6E94B6418A98483F93C2FB3E8;
struct RecordingItemU5BU5D_t519137B584A64E57F8188DDEE96C7A40220E40F5;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheCurve/Item>
struct List_1_tC1537C8DF457B7721EAA10465942441865A779E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ItemU5BU5D_t1108E169C548FBD6E94B6418A98483F93C2FB3E8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC1537C8DF457B7721EAA10465942441865A779E5, ____items_1)); }
	inline ItemU5BU5D_t1108E169C548FBD6E94B6418A98483F93C2FB3E8* get__items_1() const { return ____items_1; }
	inline ItemU5BU5D_t1108E169C548FBD6E94B6418A98483F93C2FB3E8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ItemU5BU5D_t1108E169C548FBD6E94B6418A98483F93C2FB3E8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC1537C8DF457B7721EAA10465942441865A779E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC1537C8DF457B7721EAA10465942441865A779E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC1537C8DF457B7721EAA10465942441865A779E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC1537C8DF457B7721EAA10465942441865A779E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ItemU5BU5D_t1108E169C548FBD6E94B6418A98483F93C2FB3E8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC1537C8DF457B7721EAA10465942441865A779E5_StaticFields, ____emptyArray_5)); }
	inline ItemU5BU5D_t1108E169C548FBD6E94B6418A98483F93C2FB3E8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ItemU5BU5D_t1108E169C548FBD6E94B6418A98483F93C2FB3E8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ItemU5BU5D_t1108E169C548FBD6E94B6418A98483F93C2FB3E8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>
struct List_1_tAED568015081230FCEC357C56CB10520C53903F7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RecordingItemU5BU5D_t519137B584A64E57F8188DDEE96C7A40220E40F5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tAED568015081230FCEC357C56CB10520C53903F7, ____items_1)); }
	inline RecordingItemU5BU5D_t519137B584A64E57F8188DDEE96C7A40220E40F5* get__items_1() const { return ____items_1; }
	inline RecordingItemU5BU5D_t519137B584A64E57F8188DDEE96C7A40220E40F5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RecordingItemU5BU5D_t519137B584A64E57F8188DDEE96C7A40220E40F5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tAED568015081230FCEC357C56CB10520C53903F7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tAED568015081230FCEC357C56CB10520C53903F7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tAED568015081230FCEC357C56CB10520C53903F7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tAED568015081230FCEC357C56CB10520C53903F7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RecordingItemU5BU5D_t519137B584A64E57F8188DDEE96C7A40220E40F5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tAED568015081230FCEC357C56CB10520C53903F7_StaticFields, ____emptyArray_5)); }
	inline RecordingItemU5BU5D_t519137B584A64E57F8188DDEE96C7A40220E40F5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RecordingItemU5BU5D_t519137B584A64E57F8188DDEE96C7A40220E40F5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RecordingItemU5BU5D_t519137B584A64E57F8188DDEE96C7A40220E40F5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
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

// Cinemachine.CinemachineStoryboard/CanvasInfo
struct CanvasInfo_t70219CA4ECC7F2DFE94082AD8E227EC478E0D728  : public RuntimeObject
{
public:
	// UnityEngine.GameObject Cinemachine.CinemachineStoryboard/CanvasInfo::mCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mCanvas_0;
	// Cinemachine.CinemachineBrain Cinemachine.CinemachineStoryboard/CanvasInfo::mCanvasParent
	CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * ___mCanvasParent_1;
	// UnityEngine.RectTransform Cinemachine.CinemachineStoryboard/CanvasInfo::mViewport
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___mViewport_2;
	// UnityEngine.UI.RawImage Cinemachine.CinemachineStoryboard/CanvasInfo::mRawImage
	RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * ___mRawImage_3;

public:
	inline static int32_t get_offset_of_mCanvas_0() { return static_cast<int32_t>(offsetof(CanvasInfo_t70219CA4ECC7F2DFE94082AD8E227EC478E0D728, ___mCanvas_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mCanvas_0() const { return ___mCanvas_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mCanvas_0() { return &___mCanvas_0; }
	inline void set_mCanvas_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mCanvas_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCanvas_0), (void*)value);
	}

	inline static int32_t get_offset_of_mCanvasParent_1() { return static_cast<int32_t>(offsetof(CanvasInfo_t70219CA4ECC7F2DFE94082AD8E227EC478E0D728, ___mCanvasParent_1)); }
	inline CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * get_mCanvasParent_1() const { return ___mCanvasParent_1; }
	inline CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 ** get_address_of_mCanvasParent_1() { return &___mCanvasParent_1; }
	inline void set_mCanvasParent_1(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * value)
	{
		___mCanvasParent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCanvasParent_1), (void*)value);
	}

	inline static int32_t get_offset_of_mViewport_2() { return static_cast<int32_t>(offsetof(CanvasInfo_t70219CA4ECC7F2DFE94082AD8E227EC478E0D728, ___mViewport_2)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_mViewport_2() const { return ___mViewport_2; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_mViewport_2() { return &___mViewport_2; }
	inline void set_mViewport_2(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___mViewport_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mViewport_2), (void*)value);
	}

	inline static int32_t get_offset_of_mRawImage_3() { return static_cast<int32_t>(offsetof(CanvasInfo_t70219CA4ECC7F2DFE94082AD8E227EC478E0D728, ___mRawImage_3)); }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * get_mRawImage_3() const { return ___mRawImage_3; }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A ** get_address_of_mRawImage_3() { return &___mRawImage_3; }
	inline void set_mRawImage_3(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * value)
	{
		___mRawImage_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRawImage_3), (void*)value);
	}
};


// Cinemachine.CinemachineVirtualCamera/<>c
struct U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD_StaticFields
{
public:
	// Cinemachine.CinemachineVirtualCamera/<>c Cinemachine.CinemachineVirtualCamera/<>c::<>9
	U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD * ___U3CU3E9_0;
	// System.Comparison`1<Cinemachine.CinemachineComponentBase> Cinemachine.CinemachineVirtualCamera/<>c::<>9__41_0
	Comparison_1_t8DC08F98CD3C24E12C6401F69228710B0EF5C073 * ___U3CU3E9__41_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__41_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD_StaticFields, ___U3CU3E9__41_0_1)); }
	inline Comparison_1_t8DC08F98CD3C24E12C6401F69228710B0EF5C073 * get_U3CU3E9__41_0_1() const { return ___U3CU3E9__41_0_1; }
	inline Comparison_1_t8DC08F98CD3C24E12C6401F69228710B0EF5C073 ** get_address_of_U3CU3E9__41_0_1() { return &___U3CU3E9__41_0_1; }
	inline void set_U3CU3E9__41_0_1(Comparison_1_t8DC08F98CD3C24E12C6401F69228710B0EF5C073 * value)
	{
		___U3CU3E9__41_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__41_0_1), (void*)value);
	}
};


// Cinemachine.TargetPositionCache/CacheCurve
struct CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10  : public RuntimeObject
{
public:
	// System.Single Cinemachine.TargetPositionCache/CacheCurve::StartTime
	float ___StartTime_0;
	// System.Single Cinemachine.TargetPositionCache/CacheCurve::StepSize
	float ___StepSize_1;
	// System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheCurve/Item> Cinemachine.TargetPositionCache/CacheCurve::m_Cache
	List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * ___m_Cache_2;

public:
	inline static int32_t get_offset_of_StartTime_0() { return static_cast<int32_t>(offsetof(CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10, ___StartTime_0)); }
	inline float get_StartTime_0() const { return ___StartTime_0; }
	inline float* get_address_of_StartTime_0() { return &___StartTime_0; }
	inline void set_StartTime_0(float value)
	{
		___StartTime_0 = value;
	}

	inline static int32_t get_offset_of_StepSize_1() { return static_cast<int32_t>(offsetof(CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10, ___StepSize_1)); }
	inline float get_StepSize_1() const { return ___StepSize_1; }
	inline float* get_address_of_StepSize_1() { return &___StepSize_1; }
	inline void set_StepSize_1(float value)
	{
		___StepSize_1 = value;
	}

	inline static int32_t get_offset_of_m_Cache_2() { return static_cast<int32_t>(offsetof(CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10, ___m_Cache_2)); }
	inline List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * get_m_Cache_2() const { return ___m_Cache_2; }
	inline List_1_tC1537C8DF457B7721EAA10465942441865A779E5 ** get_address_of_m_Cache_2() { return &___m_Cache_2; }
	inline void set_m_Cache_2(List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * value)
	{
		___m_Cache_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Cache_2), (void*)value);
	}
};


// Cinemachine.TargetPositionCache/CacheEntry
struct CacheEntry_tC683B96A4235FEB735629D760FF9E5954610DAC6  : public RuntimeObject
{
public:
	// Cinemachine.TargetPositionCache/CacheCurve Cinemachine.TargetPositionCache/CacheEntry::Curve
	CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * ___Curve_0;
	// System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem> Cinemachine.TargetPositionCache/CacheEntry::RawItems
	List_1_tAED568015081230FCEC357C56CB10520C53903F7 * ___RawItems_1;

public:
	inline static int32_t get_offset_of_Curve_0() { return static_cast<int32_t>(offsetof(CacheEntry_tC683B96A4235FEB735629D760FF9E5954610DAC6, ___Curve_0)); }
	inline CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * get_Curve_0() const { return ___Curve_0; }
	inline CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 ** get_address_of_Curve_0() { return &___Curve_0; }
	inline void set_Curve_0(CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * value)
	{
		___Curve_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Curve_0), (void*)value);
	}

	inline static int32_t get_offset_of_RawItems_1() { return static_cast<int32_t>(offsetof(CacheEntry_tC683B96A4235FEB735629D760FF9E5954610DAC6, ___RawItems_1)); }
	inline List_1_tAED568015081230FCEC357C56CB10520C53903F7 * get_RawItems_1() const { return ___RawItems_1; }
	inline List_1_tAED568015081230FCEC357C56CB10520C53903F7 ** get_address_of_RawItems_1() { return &___RawItems_1; }
	inline void set_RawItems_1(List_1_tAED568015081230FCEC357C56CB10520C53903F7 * value)
	{
		___RawItems_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RawItems_1), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<Cinemachine.ICinemachineCamera,Cinemachine.ICinemachineCamera>
struct UnityEvent_2_tD4CC87D8825EB6B7B2ECA5E32AC86234B78DAC02  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_tD4CC87D8825EB6B7B2ECA5E32AC86234B78DAC02, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
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


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
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


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
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


// Cinemachine.CameraState/CustomBlendable
struct CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B 
{
public:
	// UnityEngine.Object Cinemachine.CameraState/CustomBlendable::m_Custom
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___m_Custom_0;
	// System.Single Cinemachine.CameraState/CustomBlendable::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_Custom_0() { return static_cast<int32_t>(offsetof(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B, ___m_Custom_0)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_m_Custom_0() const { return ___m_Custom_0; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_m_Custom_0() { return &___m_Custom_0; }
	inline void set_m_Custom_0(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___m_Custom_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Custom_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};


// Cinemachine.CinemachineStateDrivenCamera/HashPair
struct HashPair_t09807509C741E786E249DC2F717CDA8E6BD80790 
{
public:
	// System.Int32 Cinemachine.CinemachineStateDrivenCamera/HashPair::parentHash
	int32_t ___parentHash_0;
	// System.Int32 Cinemachine.CinemachineStateDrivenCamera/HashPair::hash
	int32_t ___hash_1;

public:
	inline static int32_t get_offset_of_parentHash_0() { return static_cast<int32_t>(offsetof(HashPair_t09807509C741E786E249DC2F717CDA8E6BD80790, ___parentHash_0)); }
	inline int32_t get_parentHash_0() const { return ___parentHash_0; }
	inline int32_t* get_address_of_parentHash_0() { return &___parentHash_0; }
	inline void set_parentHash_0(int32_t value)
	{
		___parentHash_0 = value;
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(HashPair_t09807509C741E786E249DC2F717CDA8E6BD80790, ___hash_1)); }
	inline int32_t get_hash_1() const { return ___hash_1; }
	inline int32_t* get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(int32_t value)
	{
		___hash_1 = value;
	}
};


// Cinemachine.CinemachineStateDrivenCamera/Instruction
struct Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF 
{
public:
	// System.Int32 Cinemachine.CinemachineStateDrivenCamera/Instruction::m_FullHash
	int32_t ___m_FullHash_0;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineStateDrivenCamera/Instruction::m_VirtualCamera
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___m_VirtualCamera_1;
	// System.Single Cinemachine.CinemachineStateDrivenCamera/Instruction::m_ActivateAfter
	float ___m_ActivateAfter_2;
	// System.Single Cinemachine.CinemachineStateDrivenCamera/Instruction::m_MinDuration
	float ___m_MinDuration_3;

public:
	inline static int32_t get_offset_of_m_FullHash_0() { return static_cast<int32_t>(offsetof(Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF, ___m_FullHash_0)); }
	inline int32_t get_m_FullHash_0() const { return ___m_FullHash_0; }
	inline int32_t* get_address_of_m_FullHash_0() { return &___m_FullHash_0; }
	inline void set_m_FullHash_0(int32_t value)
	{
		___m_FullHash_0 = value;
	}

	inline static int32_t get_offset_of_m_VirtualCamera_1() { return static_cast<int32_t>(offsetof(Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF, ___m_VirtualCamera_1)); }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * get_m_VirtualCamera_1() const { return ___m_VirtualCamera_1; }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** get_address_of_m_VirtualCamera_1() { return &___m_VirtualCamera_1; }
	inline void set_m_VirtualCamera_1(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		___m_VirtualCamera_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VirtualCamera_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActivateAfter_2() { return static_cast<int32_t>(offsetof(Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF, ___m_ActivateAfter_2)); }
	inline float get_m_ActivateAfter_2() const { return ___m_ActivateAfter_2; }
	inline float* get_address_of_m_ActivateAfter_2() { return &___m_ActivateAfter_2; }
	inline void set_m_ActivateAfter_2(float value)
	{
		___m_ActivateAfter_2 = value;
	}

	inline static int32_t get_offset_of_m_MinDuration_3() { return static_cast<int32_t>(offsetof(Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF, ___m_MinDuration_3)); }
	inline float get_m_MinDuration_3() const { return ___m_MinDuration_3; }
	inline float* get_address_of_m_MinDuration_3() { return &___m_MinDuration_3; }
	inline void set_m_MinDuration_3(float value)
	{
		___m_MinDuration_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CinemachineStateDrivenCamera/Instruction
struct Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF_marshaled_pinvoke
{
	int32_t ___m_FullHash_0;
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___m_VirtualCamera_1;
	float ___m_ActivateAfter_2;
	float ___m_MinDuration_3;
};
// Native definition for COM marshalling of Cinemachine.CinemachineStateDrivenCamera/Instruction
struct Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF_marshaled_com
{
	int32_t ___m_FullHash_0;
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___m_VirtualCamera_1;
	float ___m_ActivateAfter_2;
	float ___m_MinDuration_3;
};

// Cinemachine.CinemachineStateDrivenCamera/ParentHash
struct ParentHash_tBD10D628B7916DE4607702F7E7DC6C872D847036 
{
public:
	// System.Int32 Cinemachine.CinemachineStateDrivenCamera/ParentHash::m_Hash
	int32_t ___m_Hash_0;
	// System.Int32 Cinemachine.CinemachineStateDrivenCamera/ParentHash::m_ParentHash
	int32_t ___m_ParentHash_1;

public:
	inline static int32_t get_offset_of_m_Hash_0() { return static_cast<int32_t>(offsetof(ParentHash_tBD10D628B7916DE4607702F7E7DC6C872D847036, ___m_Hash_0)); }
	inline int32_t get_m_Hash_0() const { return ___m_Hash_0; }
	inline int32_t* get_address_of_m_Hash_0() { return &___m_Hash_0; }
	inline void set_m_Hash_0(int32_t value)
	{
		___m_Hash_0 = value;
	}

	inline static int32_t get_offset_of_m_ParentHash_1() { return static_cast<int32_t>(offsetof(ParentHash_tBD10D628B7916DE4607702F7E7DC6C872D847036, ___m_ParentHash_1)); }
	inline int32_t get_m_ParentHash_1() const { return ___m_ParentHash_1; }
	inline int32_t* get_address_of_m_ParentHash_1() { return &___m_ParentHash_1; }
	inline void set_m_ParentHash_1(int32_t value)
	{
		___m_ParentHash_1 = value;
	}
};


// Cinemachine.CinemachineTargetGroup/Target
struct Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B 
{
public:
	// UnityEngine.Transform Cinemachine.CinemachineTargetGroup/Target::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_0;
	// System.Single Cinemachine.CinemachineTargetGroup/Target::weight
	float ___weight_1;
	// System.Single Cinemachine.CinemachineTargetGroup/Target::radius
	float ___radius_2;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B, ___target_0)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_0() const { return ___target_0; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}

	inline static int32_t get_offset_of_weight_1() { return static_cast<int32_t>(offsetof(Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B, ___weight_1)); }
	inline float get_weight_1() const { return ___weight_1; }
	inline float* get_address_of_weight_1() { return &___weight_1; }
	inline void set_weight_1(float value)
	{
		___weight_1 = value;
	}

	inline static int32_t get_offset_of_radius_2() { return static_cast<int32_t>(offsetof(Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B, ___radius_2)); }
	inline float get_radius_2() const { return ___radius_2; }
	inline float* get_address_of_radius_2() { return &___radius_2; }
	inline void set_radius_2(float value)
	{
		___radius_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CinemachineTargetGroup/Target
struct Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B_marshaled_pinvoke
{
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_0;
	float ___weight_1;
	float ___radius_2;
};
// Native definition for COM marshalling of Cinemachine.CinemachineTargetGroup/Target
struct Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B_marshaled_com
{
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_0;
	float ___weight_1;
	float ___radius_2;
};

// Cinemachine.CinemachineTrackedDolly/AutoDolly
struct AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D 
{
public:
	// System.Boolean Cinemachine.CinemachineTrackedDolly/AutoDolly::m_Enabled
	bool ___m_Enabled_0;
	// System.Single Cinemachine.CinemachineTrackedDolly/AutoDolly::m_PositionOffset
	float ___m_PositionOffset_1;
	// System.Int32 Cinemachine.CinemachineTrackedDolly/AutoDolly::m_SearchRadius
	int32_t ___m_SearchRadius_2;
	// System.Int32 Cinemachine.CinemachineTrackedDolly/AutoDolly::m_SearchResolution
	int32_t ___m_SearchResolution_3;

public:
	inline static int32_t get_offset_of_m_Enabled_0() { return static_cast<int32_t>(offsetof(AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D, ___m_Enabled_0)); }
	inline bool get_m_Enabled_0() const { return ___m_Enabled_0; }
	inline bool* get_address_of_m_Enabled_0() { return &___m_Enabled_0; }
	inline void set_m_Enabled_0(bool value)
	{
		___m_Enabled_0 = value;
	}

	inline static int32_t get_offset_of_m_PositionOffset_1() { return static_cast<int32_t>(offsetof(AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D, ___m_PositionOffset_1)); }
	inline float get_m_PositionOffset_1() const { return ___m_PositionOffset_1; }
	inline float* get_address_of_m_PositionOffset_1() { return &___m_PositionOffset_1; }
	inline void set_m_PositionOffset_1(float value)
	{
		___m_PositionOffset_1 = value;
	}

	inline static int32_t get_offset_of_m_SearchRadius_2() { return static_cast<int32_t>(offsetof(AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D, ___m_SearchRadius_2)); }
	inline int32_t get_m_SearchRadius_2() const { return ___m_SearchRadius_2; }
	inline int32_t* get_address_of_m_SearchRadius_2() { return &___m_SearchRadius_2; }
	inline void set_m_SearchRadius_2(int32_t value)
	{
		___m_SearchRadius_2 = value;
	}

	inline static int32_t get_offset_of_m_SearchResolution_3() { return static_cast<int32_t>(offsetof(AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D, ___m_SearchResolution_3)); }
	inline int32_t get_m_SearchResolution_3() const { return ___m_SearchResolution_3; }
	inline int32_t* get_address_of_m_SearchResolution_3() { return &___m_SearchResolution_3; }
	inline void set_m_SearchResolution_3(int32_t value)
	{
		___m_SearchResolution_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CinemachineTrackedDolly/AutoDolly
struct AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D_marshaled_pinvoke
{
	int32_t ___m_Enabled_0;
	float ___m_PositionOffset_1;
	int32_t ___m_SearchRadius_2;
	int32_t ___m_SearchResolution_3;
};
// Native definition for COM marshalling of Cinemachine.CinemachineTrackedDolly/AutoDolly
struct AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D_marshaled_com
{
	int32_t ___m_Enabled_0;
	float ___m_PositionOffset_1;
	int32_t ___m_SearchRadius_2;
	int32_t ___m_SearchResolution_3;
};

// Cinemachine.NoiseSettings/NoiseParams
struct NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74 
{
public:
	// System.Single Cinemachine.NoiseSettings/NoiseParams::Frequency
	float ___Frequency_0;
	// System.Single Cinemachine.NoiseSettings/NoiseParams::Amplitude
	float ___Amplitude_1;
	// System.Boolean Cinemachine.NoiseSettings/NoiseParams::Constant
	bool ___Constant_2;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74, ___Frequency_0)); }
	inline float get_Frequency_0() const { return ___Frequency_0; }
	inline float* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(float value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_Amplitude_1() { return static_cast<int32_t>(offsetof(NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74, ___Amplitude_1)); }
	inline float get_Amplitude_1() const { return ___Amplitude_1; }
	inline float* get_address_of_Amplitude_1() { return &___Amplitude_1; }
	inline void set_Amplitude_1(float value)
	{
		___Amplitude_1 = value;
	}

	inline static int32_t get_offset_of_Constant_2() { return static_cast<int32_t>(offsetof(NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74, ___Constant_2)); }
	inline bool get_Constant_2() const { return ___Constant_2; }
	inline bool* get_address_of_Constant_2() { return &___Constant_2; }
	inline void set_Constant_2(bool value)
	{
		___Constant_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.NoiseSettings/NoiseParams
struct NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_pinvoke
{
	float ___Frequency_0;
	float ___Amplitude_1;
	int32_t ___Constant_2;
};
// Native definition for COM marshalling of Cinemachine.NoiseSettings/NoiseParams
struct NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_com
{
	float ___Frequency_0;
	float ___Amplitude_1;
	int32_t ___Constant_2;
};

// Cinemachine.TargetPositionCache/TimeRange
struct TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C 
{
public:
	// System.Single Cinemachine.TargetPositionCache/TimeRange::Start
	float ___Start_0;
	// System.Single Cinemachine.TargetPositionCache/TimeRange::End
	float ___End_1;

public:
	inline static int32_t get_offset_of_Start_0() { return static_cast<int32_t>(offsetof(TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C, ___Start_0)); }
	inline float get_Start_0() const { return ___Start_0; }
	inline float* get_address_of_Start_0() { return &___Start_0; }
	inline void set_Start_0(float value)
	{
		___Start_0 = value;
	}

	inline static int32_t get_offset_of_End_1() { return static_cast<int32_t>(offsetof(TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C, ___End_1)); }
	inline float get_End_1() const { return ___End_1; }
	inline float* get_address_of_End_1() { return &___End_1; }
	inline void set_End_1(float value)
	{
		___End_1 = value;
	}
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

// Cinemachine.LensSettings
struct LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA 
{
public:
	// System.Single Cinemachine.LensSettings::FieldOfView
	float ___FieldOfView_1;
	// System.Single Cinemachine.LensSettings::OrthographicSize
	float ___OrthographicSize_2;
	// System.Single Cinemachine.LensSettings::NearClipPlane
	float ___NearClipPlane_3;
	// System.Single Cinemachine.LensSettings::FarClipPlane
	float ___FarClipPlane_4;
	// System.Single Cinemachine.LensSettings::Dutch
	float ___Dutch_5;
	// System.Boolean Cinemachine.LensSettings::<Orthographic>k__BackingField
	bool ___U3COrthographicU3Ek__BackingField_6;
	// UnityEngine.Vector2 Cinemachine.LensSettings::<SensorSize>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CSensorSizeU3Ek__BackingField_7;
	// System.Boolean Cinemachine.LensSettings::<IsPhysicalCamera>k__BackingField
	bool ___U3CIsPhysicalCameraU3Ek__BackingField_8;
	// UnityEngine.Vector2 Cinemachine.LensSettings::LensShift
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___LensShift_9;

public:
	inline static int32_t get_offset_of_FieldOfView_1() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___FieldOfView_1)); }
	inline float get_FieldOfView_1() const { return ___FieldOfView_1; }
	inline float* get_address_of_FieldOfView_1() { return &___FieldOfView_1; }
	inline void set_FieldOfView_1(float value)
	{
		___FieldOfView_1 = value;
	}

	inline static int32_t get_offset_of_OrthographicSize_2() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___OrthographicSize_2)); }
	inline float get_OrthographicSize_2() const { return ___OrthographicSize_2; }
	inline float* get_address_of_OrthographicSize_2() { return &___OrthographicSize_2; }
	inline void set_OrthographicSize_2(float value)
	{
		___OrthographicSize_2 = value;
	}

	inline static int32_t get_offset_of_NearClipPlane_3() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___NearClipPlane_3)); }
	inline float get_NearClipPlane_3() const { return ___NearClipPlane_3; }
	inline float* get_address_of_NearClipPlane_3() { return &___NearClipPlane_3; }
	inline void set_NearClipPlane_3(float value)
	{
		___NearClipPlane_3 = value;
	}

	inline static int32_t get_offset_of_FarClipPlane_4() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___FarClipPlane_4)); }
	inline float get_FarClipPlane_4() const { return ___FarClipPlane_4; }
	inline float* get_address_of_FarClipPlane_4() { return &___FarClipPlane_4; }
	inline void set_FarClipPlane_4(float value)
	{
		___FarClipPlane_4 = value;
	}

	inline static int32_t get_offset_of_Dutch_5() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___Dutch_5)); }
	inline float get_Dutch_5() const { return ___Dutch_5; }
	inline float* get_address_of_Dutch_5() { return &___Dutch_5; }
	inline void set_Dutch_5(float value)
	{
		___Dutch_5 = value;
	}

	inline static int32_t get_offset_of_U3COrthographicU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___U3COrthographicU3Ek__BackingField_6)); }
	inline bool get_U3COrthographicU3Ek__BackingField_6() const { return ___U3COrthographicU3Ek__BackingField_6; }
	inline bool* get_address_of_U3COrthographicU3Ek__BackingField_6() { return &___U3COrthographicU3Ek__BackingField_6; }
	inline void set_U3COrthographicU3Ek__BackingField_6(bool value)
	{
		___U3COrthographicU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CSensorSizeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___U3CSensorSizeU3Ek__BackingField_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CSensorSizeU3Ek__BackingField_7() const { return ___U3CSensorSizeU3Ek__BackingField_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CSensorSizeU3Ek__BackingField_7() { return &___U3CSensorSizeU3Ek__BackingField_7; }
	inline void set_U3CSensorSizeU3Ek__BackingField_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CSensorSizeU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsPhysicalCameraU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___U3CIsPhysicalCameraU3Ek__BackingField_8)); }
	inline bool get_U3CIsPhysicalCameraU3Ek__BackingField_8() const { return ___U3CIsPhysicalCameraU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsPhysicalCameraU3Ek__BackingField_8() { return &___U3CIsPhysicalCameraU3Ek__BackingField_8; }
	inline void set_U3CIsPhysicalCameraU3Ek__BackingField_8(bool value)
	{
		___U3CIsPhysicalCameraU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_LensShift_9() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___LensShift_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_LensShift_9() const { return ___LensShift_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_LensShift_9() { return &___LensShift_9; }
	inline void set_LensShift_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___LensShift_9 = value;
	}
};

struct LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_StaticFields
{
public:
	// Cinemachine.LensSettings Cinemachine.LensSettings::Default
	LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_StaticFields, ___Default_0)); }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  get_Default_0() const { return ___Default_0; }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  value)
	{
		___Default_0 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.LensSettings
struct LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_marshaled_pinvoke
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___U3COrthographicU3Ek__BackingField_6;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CSensorSizeU3Ek__BackingField_7;
	int32_t ___U3CIsPhysicalCameraU3Ek__BackingField_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___LensShift_9;
};
// Native definition for COM marshalling of Cinemachine.LensSettings
struct LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_marshaled_com
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___U3COrthographicU3Ek__BackingField_6;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CSensorSizeU3Ek__BackingField_7;
	int32_t ___U3CIsPhysicalCameraU3Ek__BackingField_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___LensShift_9;
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

// Cinemachine.CameraState/BlendHintValue
struct BlendHintValue_t7E87A2F98F21271FE108514B78A38754BEBE94F4 
{
public:
	// System.Int32 Cinemachine.CameraState/BlendHintValue::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlendHintValue_t7E87A2F98F21271FE108514B78A38754BEBE94F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineBrain/VcamActivatedEvent
struct VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296  : public UnityEvent_2_tD4CC87D8825EB6B7B2ECA5E32AC86234B78DAC02
{
public:

public:
};


// Cinemachine.CinemachineCore/Stage
struct Stage_t9554C4B330D6E1FC747961284AC5B84778D8FC0D 
{
public:
	// System.Int32 Cinemachine.CinemachineCore/Stage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Stage_t9554C4B330D6E1FC747961284AC5B84778D8FC0D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachinePathBase/PositionUnits
struct PositionUnits_tACEF8F12129BC22E9629CCF24E0142ABE8514EAA 
{
public:
	// System.Int32 Cinemachine.CinemachinePathBase/PositionUnits::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PositionUnits_tACEF8F12129BC22E9629CCF24E0142ABE8514EAA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineSmoothPath/Waypoint
struct Waypoint_t2E24ECCFEA6F4D368CD2C992EA38915CD3438A54 
{
public:
	// UnityEngine.Vector3 Cinemachine.CinemachineSmoothPath/Waypoint::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// System.Single Cinemachine.CinemachineSmoothPath/Waypoint::roll
	float ___roll_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Waypoint_t2E24ECCFEA6F4D368CD2C992EA38915CD3438A54, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_roll_1() { return static_cast<int32_t>(offsetof(Waypoint_t2E24ECCFEA6F4D368CD2C992EA38915CD3438A54, ___roll_1)); }
	inline float get_roll_1() const { return ___roll_1; }
	inline float* get_address_of_roll_1() { return &___roll_1; }
	inline void set_roll_1(float value)
	{
		___roll_1 = value;
	}
};


// Cinemachine.CinemachineStoryboard/FillStrategy
struct FillStrategy_t64D64AAB40BD0C071679510281437912BACDE55E 
{
public:
	// System.Int32 Cinemachine.CinemachineStoryboard/FillStrategy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillStrategy_t64D64AAB40BD0C071679510281437912BACDE55E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineTargetGroup/PositionMode
struct PositionMode_t32E29A6C3380A3D4CCCB9A50E97C0FE09B87766D 
{
public:
	// System.Int32 Cinemachine.CinemachineTargetGroup/PositionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PositionMode_t32E29A6C3380A3D4CCCB9A50E97C0FE09B87766D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineTargetGroup/RotationMode
struct RotationMode_t8654A62CA54FADB9F5A5F3CC756D186FDB3853DF 
{
public:
	// System.Int32 Cinemachine.CinemachineTargetGroup/RotationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RotationMode_t8654A62CA54FADB9F5A5F3CC756D186FDB3853DF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineTargetGroup/UpdateMethod
struct UpdateMethod_tF4277584632456B0A5AF2D38BE3026311E1DE250 
{
public:
	// System.Int32 Cinemachine.CinemachineTargetGroup/UpdateMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateMethod_tF4277584632456B0A5AF2D38BE3026311E1DE250, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineTrackedDolly/CameraUpMode
struct CameraUpMode_tF118724ABBF5BDA380A857A77DB5BD11C858D038 
{
public:
	// System.Int32 Cinemachine.CinemachineTrackedDolly/CameraUpMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraUpMode_tF118724ABBF5BDA380A857A77DB5BD11C858D038, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineTransposer/AngularDampingMode
struct AngularDampingMode_t7862BE26F11C587BCA89310C44F6BC89D2F9C33A 
{
public:
	// System.Int32 Cinemachine.CinemachineTransposer/AngularDampingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AngularDampingMode_t7862BE26F11C587BCA89310C44F6BC89D2F9C33A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineTransposer/BindingMode
struct BindingMode_tAE1CC7E6A8544E38A9E5D96BF5B0171B038AE196 
{
public:
	// System.Int32 Cinemachine.CinemachineTransposer/BindingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingMode_tAE1CC7E6A8544E38A9E5D96BF5B0171B038AE196, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineVirtualCameraBase/BlendHint
struct BlendHint_t9B1FFA41B35EC74367AB4D7A1AE2A4D1FE29B7CE 
{
public:
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase/BlendHint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlendHint_t9B1FFA41B35EC74367AB4D7A1AE2A4D1FE29B7CE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineVirtualCameraBase/StandbyUpdateMode
struct StandbyUpdateMode_t60D677E92B072D6B19C7F69C3DD753EB3457F3A5 
{
public:
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase/StandbyUpdateMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StandbyUpdateMode_t60D677E92B072D6B19C7F69C3DD753EB3457F3A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.DocumentationSortingAttribute/Level
struct Level_t58A8CCDD92B93E24A101D11B3F0CC06808D58BBD 
{
public:
	// System.Int32 Cinemachine.DocumentationSortingAttribute/Level::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Level_t58A8CCDD92B93E24A101D11B3F0CC06808D58BBD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.Utility.HeadingTracker/Item
struct Item_tFFE692E039CD7B3C69EF589F573073CBC3B78B6C 
{
public:
	// UnityEngine.Vector3 Cinemachine.Utility.HeadingTracker/Item::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_0;
	// System.Single Cinemachine.Utility.HeadingTracker/Item::weight
	float ___weight_1;
	// System.Single Cinemachine.Utility.HeadingTracker/Item::time
	float ___time_2;

public:
	inline static int32_t get_offset_of_velocity_0() { return static_cast<int32_t>(offsetof(Item_tFFE692E039CD7B3C69EF589F573073CBC3B78B6C, ___velocity_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_0() const { return ___velocity_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_0() { return &___velocity_0; }
	inline void set_velocity_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_0 = value;
	}

	inline static int32_t get_offset_of_weight_1() { return static_cast<int32_t>(offsetof(Item_tFFE692E039CD7B3C69EF589F573073CBC3B78B6C, ___weight_1)); }
	inline float get_weight_1() const { return ___weight_1; }
	inline float* get_address_of_weight_1() { return &___weight_1; }
	inline void set_weight_1(float value)
	{
		___weight_1 = value;
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(Item_tFFE692E039CD7B3C69EF589F573073CBC3B78B6C, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}
};


// Cinemachine.NoiseSettings/TransformNoiseParams
struct TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9 
{
public:
	// Cinemachine.NoiseSettings/NoiseParams Cinemachine.NoiseSettings/TransformNoiseParams::X
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  ___X_0;
	// Cinemachine.NoiseSettings/NoiseParams Cinemachine.NoiseSettings/TransformNoiseParams::Y
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  ___Y_1;
	// Cinemachine.NoiseSettings/NoiseParams Cinemachine.NoiseSettings/TransformNoiseParams::Z
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  ___Z_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9, ___X_0)); }
	inline NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  get_X_0() const { return ___X_0; }
	inline NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74 * get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9, ___Y_1)); }
	inline NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  get_Y_1() const { return ___Y_1; }
	inline NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74 * get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9, ___Z_2)); }
	inline NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  get_Z_2() const { return ___Z_2; }
	inline NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74 * get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  value)
	{
		___Z_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.NoiseSettings/TransformNoiseParams
struct TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9_marshaled_pinvoke
{
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_pinvoke ___X_0;
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_pinvoke ___Y_1;
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_pinvoke ___Z_2;
};
// Native definition for COM marshalling of Cinemachine.NoiseSettings/TransformNoiseParams
struct TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9_marshaled_com
{
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_com ___X_0;
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_com ___Y_1;
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_com ___Z_2;
};

// Cinemachine.TargetPositionCache/Mode
struct Mode_t0E8223D47B28BF57DC054FEE24CEDEA6E67BFD0E 
{
public:
	// System.Int32 Cinemachine.TargetPositionCache/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t0E8223D47B28BF57DC054FEE24CEDEA6E67BFD0E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.UpdateTracker/UpdateClock
struct UpdateClock_tAC77FB482A65400E9526AB615FCFB2D7936F4BF4 
{
public:
	// System.Int32 Cinemachine.UpdateTracker/UpdateClock::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateClock_tAC77FB482A65400E9526AB615FCFB2D7936F4BF4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineImpulseManager/ImpulseEvent/DirectionMode
struct DirectionMode_tEAFCEDA22D8DA3C413D53421BA03A1FA4522594B 
{
public:
	// System.Int32 Cinemachine.CinemachineImpulseManager/ImpulseEvent/DirectionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DirectionMode_tEAFCEDA22D8DA3C413D53421BA03A1FA4522594B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineImpulseManager/ImpulseEvent/DissipationMode
struct DissipationMode_t074A13150A88E7F7AE19FB05A8EE8D21BCDE186F 
{
public:
	// System.Int32 Cinemachine.CinemachineImpulseManager/ImpulseEvent/DissipationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DissipationMode_t074A13150A88E7F7AE19FB05A8EE8D21BCDE186F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineOrbitalTransposer/Heading/HeadingDefinition
struct HeadingDefinition_tEF350573F75F64F0AED93E50690DBDBA99343122 
{
public:
	// System.Int32 Cinemachine.CinemachineOrbitalTransposer/Heading/HeadingDefinition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HeadingDefinition_tEF350573F75F64F0AED93E50690DBDBA99343122, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineTriggerAction/ActionSettings/Mode
struct Mode_tBCEED1F0072367C4C796DE014C5B33B0FC0B9A41 
{
public:
	// System.Int32 Cinemachine.CinemachineTriggerAction/ActionSettings/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_tBCEED1F0072367C4C796DE014C5B33B0FC0B9A41, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineTriggerAction/ActionSettings/TimeMode
struct TimeMode_t008A84386C0EFF10B63D7D1232CE5D799B972179 
{
public:
	// System.Int32 Cinemachine.CinemachineTriggerAction/ActionSettings/TimeMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimeMode_t008A84386C0EFF10B63D7D1232CE5D799B972179, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineTriggerAction/ActionSettings/TriggerEvent
struct TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// Cinemachine.TargetPositionCache/CacheCurve/Item
struct Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B 
{
public:
	// UnityEngine.Vector3 Cinemachine.TargetPositionCache/CacheCurve/Item::Pos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Pos_0;
	// UnityEngine.Quaternion Cinemachine.TargetPositionCache/CacheCurve/Item::Rot
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___Rot_1;

public:
	inline static int32_t get_offset_of_Pos_0() { return static_cast<int32_t>(offsetof(Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B, ___Pos_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Pos_0() const { return ___Pos_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Pos_0() { return &___Pos_0; }
	inline void set_Pos_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Pos_0 = value;
	}

	inline static int32_t get_offset_of_Rot_1() { return static_cast<int32_t>(offsetof(Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B, ___Rot_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_Rot_1() const { return ___Rot_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_Rot_1() { return &___Rot_1; }
	inline void set_Rot_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___Rot_1 = value;
	}
};


// Cinemachine.CameraState
struct CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601 
{
public:
	// Cinemachine.LensSettings Cinemachine.CameraState::<Lens>k__BackingField
	LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  ___U3CLensU3Ek__BackingField_0;
	// UnityEngine.Vector3 Cinemachine.CameraState::<ReferenceUp>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceUpU3Ek__BackingField_1;
	// UnityEngine.Vector3 Cinemachine.CameraState::<ReferenceLookAt>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceLookAtU3Ek__BackingField_2;
	// UnityEngine.Vector3 Cinemachine.CameraState::<RawPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CRawPositionU3Ek__BackingField_4;
	// UnityEngine.Quaternion Cinemachine.CameraState::<RawOrientation>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CRawOrientationU3Ek__BackingField_5;
	// UnityEngine.Vector3 Cinemachine.CameraState::<PositionDampingBypass>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionDampingBypassU3Ek__BackingField_6;
	// System.Single Cinemachine.CameraState::<ShotQuality>k__BackingField
	float ___U3CShotQualityU3Ek__BackingField_7;
	// UnityEngine.Vector3 Cinemachine.CameraState::<PositionCorrection>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionCorrectionU3Ek__BackingField_8;
	// UnityEngine.Quaternion Cinemachine.CameraState::<OrientationCorrection>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3COrientationCorrectionU3Ek__BackingField_9;
	// Cinemachine.CameraState/BlendHintValue Cinemachine.CameraState::<BlendHint>k__BackingField
	int32_t ___U3CBlendHintU3Ek__BackingField_10;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom0
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom0_11;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom1
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom1_12;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom2
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom2_13;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom3
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom3_14;
	// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable> Cinemachine.CameraState::m_CustomOverflow
	List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 * ___m_CustomOverflow_15;
	// System.Int32 Cinemachine.CameraState::<NumCustomBlendables>k__BackingField
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CLensU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CLensU3Ek__BackingField_0)); }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  get_U3CLensU3Ek__BackingField_0() const { return ___U3CLensU3Ek__BackingField_0; }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * get_address_of_U3CLensU3Ek__BackingField_0() { return &___U3CLensU3Ek__BackingField_0; }
	inline void set_U3CLensU3Ek__BackingField_0(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  value)
	{
		___U3CLensU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CReferenceUpU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CReferenceUpU3Ek__BackingField_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CReferenceUpU3Ek__BackingField_1() const { return ___U3CReferenceUpU3Ek__BackingField_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CReferenceUpU3Ek__BackingField_1() { return &___U3CReferenceUpU3Ek__BackingField_1; }
	inline void set_U3CReferenceUpU3Ek__BackingField_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CReferenceUpU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CReferenceLookAtU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CReferenceLookAtU3Ek__BackingField_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CReferenceLookAtU3Ek__BackingField_2() const { return ___U3CReferenceLookAtU3Ek__BackingField_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CReferenceLookAtU3Ek__BackingField_2() { return &___U3CReferenceLookAtU3Ek__BackingField_2; }
	inline void set_U3CReferenceLookAtU3Ek__BackingField_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CReferenceLookAtU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CRawPositionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CRawPositionU3Ek__BackingField_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CRawPositionU3Ek__BackingField_4() const { return ___U3CRawPositionU3Ek__BackingField_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CRawPositionU3Ek__BackingField_4() { return &___U3CRawPositionU3Ek__BackingField_4; }
	inline void set_U3CRawPositionU3Ek__BackingField_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CRawPositionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CRawOrientationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CRawOrientationU3Ek__BackingField_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CRawOrientationU3Ek__BackingField_5() const { return ___U3CRawOrientationU3Ek__BackingField_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CRawOrientationU3Ek__BackingField_5() { return &___U3CRawOrientationU3Ek__BackingField_5; }
	inline void set_U3CRawOrientationU3Ek__BackingField_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CRawOrientationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CPositionDampingBypassU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CPositionDampingBypassU3Ek__BackingField_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CPositionDampingBypassU3Ek__BackingField_6() const { return ___U3CPositionDampingBypassU3Ek__BackingField_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CPositionDampingBypassU3Ek__BackingField_6() { return &___U3CPositionDampingBypassU3Ek__BackingField_6; }
	inline void set_U3CPositionDampingBypassU3Ek__BackingField_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CPositionDampingBypassU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CShotQualityU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CShotQualityU3Ek__BackingField_7)); }
	inline float get_U3CShotQualityU3Ek__BackingField_7() const { return ___U3CShotQualityU3Ek__BackingField_7; }
	inline float* get_address_of_U3CShotQualityU3Ek__BackingField_7() { return &___U3CShotQualityU3Ek__BackingField_7; }
	inline void set_U3CShotQualityU3Ek__BackingField_7(float value)
	{
		___U3CShotQualityU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CPositionCorrectionU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CPositionCorrectionU3Ek__BackingField_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CPositionCorrectionU3Ek__BackingField_8() const { return ___U3CPositionCorrectionU3Ek__BackingField_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CPositionCorrectionU3Ek__BackingField_8() { return &___U3CPositionCorrectionU3Ek__BackingField_8; }
	inline void set_U3CPositionCorrectionU3Ek__BackingField_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CPositionCorrectionU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3COrientationCorrectionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3COrientationCorrectionU3Ek__BackingField_9)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3COrientationCorrectionU3Ek__BackingField_9() const { return ___U3COrientationCorrectionU3Ek__BackingField_9; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3COrientationCorrectionU3Ek__BackingField_9() { return &___U3COrientationCorrectionU3Ek__BackingField_9; }
	inline void set_U3COrientationCorrectionU3Ek__BackingField_9(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3COrientationCorrectionU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CBlendHintU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CBlendHintU3Ek__BackingField_10)); }
	inline int32_t get_U3CBlendHintU3Ek__BackingField_10() const { return ___U3CBlendHintU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CBlendHintU3Ek__BackingField_10() { return &___U3CBlendHintU3Ek__BackingField_10; }
	inline void set_U3CBlendHintU3Ek__BackingField_10(int32_t value)
	{
		___U3CBlendHintU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_mCustom0_11() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___mCustom0_11)); }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  get_mCustom0_11() const { return ___mCustom0_11; }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B * get_address_of_mCustom0_11() { return &___mCustom0_11; }
	inline void set_mCustom0_11(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  value)
	{
		___mCustom0_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom0_11))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom1_12() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___mCustom1_12)); }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  get_mCustom1_12() const { return ___mCustom1_12; }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B * get_address_of_mCustom1_12() { return &___mCustom1_12; }
	inline void set_mCustom1_12(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  value)
	{
		___mCustom1_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom1_12))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom2_13() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___mCustom2_13)); }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  get_mCustom2_13() const { return ___mCustom2_13; }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B * get_address_of_mCustom2_13() { return &___mCustom2_13; }
	inline void set_mCustom2_13(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  value)
	{
		___mCustom2_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom2_13))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom3_14() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___mCustom3_14)); }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  get_mCustom3_14() const { return ___mCustom3_14; }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B * get_address_of_mCustom3_14() { return &___mCustom3_14; }
	inline void set_mCustom3_14(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  value)
	{
		___mCustom3_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom3_14))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_CustomOverflow_15() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___m_CustomOverflow_15)); }
	inline List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 * get_m_CustomOverflow_15() const { return ___m_CustomOverflow_15; }
	inline List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 ** get_address_of_m_CustomOverflow_15() { return &___m_CustomOverflow_15; }
	inline void set_m_CustomOverflow_15(List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 * value)
	{
		___m_CustomOverflow_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomOverflow_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNumCustomBlendablesU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CNumCustomBlendablesU3Ek__BackingField_16)); }
	inline int32_t get_U3CNumCustomBlendablesU3Ek__BackingField_16() const { return ___U3CNumCustomBlendablesU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CNumCustomBlendablesU3Ek__BackingField_16() { return &___U3CNumCustomBlendablesU3Ek__BackingField_16; }
	inline void set_U3CNumCustomBlendablesU3Ek__BackingField_16(int32_t value)
	{
		___U3CNumCustomBlendablesU3Ek__BackingField_16 = value;
	}
};

struct CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601_StaticFields
{
public:
	// UnityEngine.Vector3 Cinemachine.CameraState::kNoPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___kNoPoint_3;

public:
	inline static int32_t get_offset_of_kNoPoint_3() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601_StaticFields, ___kNoPoint_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_kNoPoint_3() const { return ___kNoPoint_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_kNoPoint_3() { return &___kNoPoint_3; }
	inline void set_kNoPoint_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___kNoPoint_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CameraState
struct CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601_marshaled_pinvoke
{
	LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_marshaled_pinvoke ___U3CLensU3Ek__BackingField_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceUpU3Ek__BackingField_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceLookAtU3Ek__BackingField_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CRawPositionU3Ek__BackingField_4;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CRawOrientationU3Ek__BackingField_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionDampingBypassU3Ek__BackingField_6;
	float ___U3CShotQualityU3Ek__BackingField_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionCorrectionU3Ek__BackingField_8;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3COrientationCorrectionU3Ek__BackingField_9;
	int32_t ___U3CBlendHintU3Ek__BackingField_10;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom0_11;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom1_12;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom2_13;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom3_14;
	List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 * ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};
// Native definition for COM marshalling of Cinemachine.CameraState
struct CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601_marshaled_com
{
	LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_marshaled_com ___U3CLensU3Ek__BackingField_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceUpU3Ek__BackingField_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceLookAtU3Ek__BackingField_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CRawPositionU3Ek__BackingField_4;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CRawOrientationU3Ek__BackingField_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionDampingBypassU3Ek__BackingField_6;
	float ___U3CShotQualityU3Ek__BackingField_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionCorrectionU3Ek__BackingField_8;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3COrientationCorrectionU3Ek__BackingField_9;
	int32_t ___U3CBlendHintU3Ek__BackingField_10;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom0_11;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom1_12;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom2_13;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom3_14;
	List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 * ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
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

// Cinemachine.CinemachineTriggerAction/ActionSettings
struct ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6 
{
public:
	// Cinemachine.CinemachineTriggerAction/ActionSettings/Mode Cinemachine.CinemachineTriggerAction/ActionSettings::m_Action
	int32_t ___m_Action_0;
	// UnityEngine.Object Cinemachine.CinemachineTriggerAction/ActionSettings::m_Target
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___m_Target_1;
	// System.Int32 Cinemachine.CinemachineTriggerAction/ActionSettings::m_BoostAmount
	int32_t ___m_BoostAmount_2;
	// System.Single Cinemachine.CinemachineTriggerAction/ActionSettings::m_StartTime
	float ___m_StartTime_3;
	// Cinemachine.CinemachineTriggerAction/ActionSettings/TimeMode Cinemachine.CinemachineTriggerAction/ActionSettings::m_Mode
	int32_t ___m_Mode_4;
	// Cinemachine.CinemachineTriggerAction/ActionSettings/TriggerEvent Cinemachine.CinemachineTriggerAction/ActionSettings::m_Event
	TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B * ___m_Event_5;

public:
	inline static int32_t get_offset_of_m_Action_0() { return static_cast<int32_t>(offsetof(ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6, ___m_Action_0)); }
	inline int32_t get_m_Action_0() const { return ___m_Action_0; }
	inline int32_t* get_address_of_m_Action_0() { return &___m_Action_0; }
	inline void set_m_Action_0(int32_t value)
	{
		___m_Action_0 = value;
	}

	inline static int32_t get_offset_of_m_Target_1() { return static_cast<int32_t>(offsetof(ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6, ___m_Target_1)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_m_Target_1() const { return ___m_Target_1; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_m_Target_1() { return &___m_Target_1; }
	inline void set_m_Target_1(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___m_Target_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_BoostAmount_2() { return static_cast<int32_t>(offsetof(ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6, ___m_BoostAmount_2)); }
	inline int32_t get_m_BoostAmount_2() const { return ___m_BoostAmount_2; }
	inline int32_t* get_address_of_m_BoostAmount_2() { return &___m_BoostAmount_2; }
	inline void set_m_BoostAmount_2(int32_t value)
	{
		___m_BoostAmount_2 = value;
	}

	inline static int32_t get_offset_of_m_StartTime_3() { return static_cast<int32_t>(offsetof(ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6, ___m_StartTime_3)); }
	inline float get_m_StartTime_3() const { return ___m_StartTime_3; }
	inline float* get_address_of_m_StartTime_3() { return &___m_StartTime_3; }
	inline void set_m_StartTime_3(float value)
	{
		___m_StartTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Mode_4() { return static_cast<int32_t>(offsetof(ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6, ___m_Mode_4)); }
	inline int32_t get_m_Mode_4() const { return ___m_Mode_4; }
	inline int32_t* get_address_of_m_Mode_4() { return &___m_Mode_4; }
	inline void set_m_Mode_4(int32_t value)
	{
		___m_Mode_4 = value;
	}

	inline static int32_t get_offset_of_m_Event_5() { return static_cast<int32_t>(offsetof(ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6, ___m_Event_5)); }
	inline TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B * get_m_Event_5() const { return ___m_Event_5; }
	inline TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B ** get_address_of_m_Event_5() { return &___m_Event_5; }
	inline void set_m_Event_5(TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B * value)
	{
		___m_Event_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Event_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CinemachineTriggerAction/ActionSettings
struct ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6_marshaled_pinvoke
{
	int32_t ___m_Action_0;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke ___m_Target_1;
	int32_t ___m_BoostAmount_2;
	float ___m_StartTime_3;
	int32_t ___m_Mode_4;
	TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B * ___m_Event_5;
};
// Native definition for COM marshalling of Cinemachine.CinemachineTriggerAction/ActionSettings
struct ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6_marshaled_com
{
	int32_t ___m_Action_0;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com* ___m_Target_1;
	int32_t ___m_BoostAmount_2;
	float ___m_StartTime_3;
	int32_t ___m_Mode_4;
	TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B * ___m_Event_5;
};

// Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C 
{
public:
	// Cinemachine.CinemachineVirtualCameraBase/BlendHint Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_BlendHint
	int32_t ___m_BlendHint_0;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_InheritPosition
	bool ___m_InheritPosition_1;
	// Cinemachine.CinemachineBrain/VcamActivatedEvent Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_OnCameraLive
	VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * ___m_OnCameraLive_2;

public:
	inline static int32_t get_offset_of_m_BlendHint_0() { return static_cast<int32_t>(offsetof(TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C, ___m_BlendHint_0)); }
	inline int32_t get_m_BlendHint_0() const { return ___m_BlendHint_0; }
	inline int32_t* get_address_of_m_BlendHint_0() { return &___m_BlendHint_0; }
	inline void set_m_BlendHint_0(int32_t value)
	{
		___m_BlendHint_0 = value;
	}

	inline static int32_t get_offset_of_m_InheritPosition_1() { return static_cast<int32_t>(offsetof(TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C, ___m_InheritPosition_1)); }
	inline bool get_m_InheritPosition_1() const { return ___m_InheritPosition_1; }
	inline bool* get_address_of_m_InheritPosition_1() { return &___m_InheritPosition_1; }
	inline void set_m_InheritPosition_1(bool value)
	{
		___m_InheritPosition_1 = value;
	}

	inline static int32_t get_offset_of_m_OnCameraLive_2() { return static_cast<int32_t>(offsetof(TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C, ___m_OnCameraLive_2)); }
	inline VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * get_m_OnCameraLive_2() const { return ___m_OnCameraLive_2; }
	inline VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 ** get_address_of_m_OnCameraLive_2() { return &___m_OnCameraLive_2; }
	inline void set_m_OnCameraLive_2(VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * value)
	{
		___m_OnCameraLive_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCameraLive_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshaled_pinvoke
{
	int32_t ___m_BlendHint_0;
	int32_t ___m_InheritPosition_1;
	VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * ___m_OnCameraLive_2;
};
// Native definition for COM marshalling of Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshaled_com
{
	int32_t ___m_BlendHint_0;
	int32_t ___m_InheritPosition_1;
	VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * ___m_OnCameraLive_2;
};

// Cinemachine.UpdateTracker/UpdateStatus
struct UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B  : public RuntimeObject
{
public:
	// System.Int32 Cinemachine.UpdateTracker/UpdateStatus::windowStart
	int32_t ___windowStart_1;
	// System.Int32 Cinemachine.UpdateTracker/UpdateStatus::numWindowLateUpdateMoves
	int32_t ___numWindowLateUpdateMoves_2;
	// System.Int32 Cinemachine.UpdateTracker/UpdateStatus::numWindowFixedUpdateMoves
	int32_t ___numWindowFixedUpdateMoves_3;
	// System.Int32 Cinemachine.UpdateTracker/UpdateStatus::numWindows
	int32_t ___numWindows_4;
	// System.Int32 Cinemachine.UpdateTracker/UpdateStatus::lastFrameUpdated
	int32_t ___lastFrameUpdated_5;
	// UnityEngine.Matrix4x4 Cinemachine.UpdateTracker/UpdateStatus::lastPos
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___lastPos_6;
	// Cinemachine.UpdateTracker/UpdateClock Cinemachine.UpdateTracker/UpdateStatus::<PreferredUpdate>k__BackingField
	int32_t ___U3CPreferredUpdateU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_windowStart_1() { return static_cast<int32_t>(offsetof(UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B, ___windowStart_1)); }
	inline int32_t get_windowStart_1() const { return ___windowStart_1; }
	inline int32_t* get_address_of_windowStart_1() { return &___windowStart_1; }
	inline void set_windowStart_1(int32_t value)
	{
		___windowStart_1 = value;
	}

	inline static int32_t get_offset_of_numWindowLateUpdateMoves_2() { return static_cast<int32_t>(offsetof(UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B, ___numWindowLateUpdateMoves_2)); }
	inline int32_t get_numWindowLateUpdateMoves_2() const { return ___numWindowLateUpdateMoves_2; }
	inline int32_t* get_address_of_numWindowLateUpdateMoves_2() { return &___numWindowLateUpdateMoves_2; }
	inline void set_numWindowLateUpdateMoves_2(int32_t value)
	{
		___numWindowLateUpdateMoves_2 = value;
	}

	inline static int32_t get_offset_of_numWindowFixedUpdateMoves_3() { return static_cast<int32_t>(offsetof(UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B, ___numWindowFixedUpdateMoves_3)); }
	inline int32_t get_numWindowFixedUpdateMoves_3() const { return ___numWindowFixedUpdateMoves_3; }
	inline int32_t* get_address_of_numWindowFixedUpdateMoves_3() { return &___numWindowFixedUpdateMoves_3; }
	inline void set_numWindowFixedUpdateMoves_3(int32_t value)
	{
		___numWindowFixedUpdateMoves_3 = value;
	}

	inline static int32_t get_offset_of_numWindows_4() { return static_cast<int32_t>(offsetof(UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B, ___numWindows_4)); }
	inline int32_t get_numWindows_4() const { return ___numWindows_4; }
	inline int32_t* get_address_of_numWindows_4() { return &___numWindows_4; }
	inline void set_numWindows_4(int32_t value)
	{
		___numWindows_4 = value;
	}

	inline static int32_t get_offset_of_lastFrameUpdated_5() { return static_cast<int32_t>(offsetof(UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B, ___lastFrameUpdated_5)); }
	inline int32_t get_lastFrameUpdated_5() const { return ___lastFrameUpdated_5; }
	inline int32_t* get_address_of_lastFrameUpdated_5() { return &___lastFrameUpdated_5; }
	inline void set_lastFrameUpdated_5(int32_t value)
	{
		___lastFrameUpdated_5 = value;
	}

	inline static int32_t get_offset_of_lastPos_6() { return static_cast<int32_t>(offsetof(UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B, ___lastPos_6)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_lastPos_6() const { return ___lastPos_6; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_lastPos_6() { return &___lastPos_6; }
	inline void set_lastPos_6(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___lastPos_6 = value;
	}

	inline static int32_t get_offset_of_U3CPreferredUpdateU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B, ___U3CPreferredUpdateU3Ek__BackingField_7)); }
	inline int32_t get_U3CPreferredUpdateU3Ek__BackingField_7() const { return ___U3CPreferredUpdateU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CPreferredUpdateU3Ek__BackingField_7() { return &___U3CPreferredUpdateU3Ek__BackingField_7; }
	inline void set_U3CPreferredUpdateU3Ek__BackingField_7(int32_t value)
	{
		___U3CPreferredUpdateU3Ek__BackingField_7 = value;
	}
};


// Cinemachine.TargetPositionCache/CacheEntry/RecordingItem
struct RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB 
{
public:
	// System.Single Cinemachine.TargetPositionCache/CacheEntry/RecordingItem::Time
	float ___Time_0;
	// System.Boolean Cinemachine.TargetPositionCache/CacheEntry/RecordingItem::IsCut
	bool ___IsCut_1;
	// Cinemachine.TargetPositionCache/CacheCurve/Item Cinemachine.TargetPositionCache/CacheEntry/RecordingItem::Item
	Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___Item_2;

public:
	inline static int32_t get_offset_of_Time_0() { return static_cast<int32_t>(offsetof(RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB, ___Time_0)); }
	inline float get_Time_0() const { return ___Time_0; }
	inline float* get_address_of_Time_0() { return &___Time_0; }
	inline void set_Time_0(float value)
	{
		___Time_0 = value;
	}

	inline static int32_t get_offset_of_IsCut_1() { return static_cast<int32_t>(offsetof(RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB, ___IsCut_1)); }
	inline bool get_IsCut_1() const { return ___IsCut_1; }
	inline bool* get_address_of_IsCut_1() { return &___IsCut_1; }
	inline void set_IsCut_1(bool value)
	{
		___IsCut_1 = value;
	}

	inline static int32_t get_offset_of_Item_2() { return static_cast<int32_t>(offsetof(RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB, ___Item_2)); }
	inline Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  get_Item_2() const { return ___Item_2; }
	inline Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B * get_address_of_Item_2() { return &___Item_2; }
	inline void set_Item_2(Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  value)
	{
		___Item_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.TargetPositionCache/CacheEntry/RecordingItem
struct RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshaled_pinvoke
{
	float ___Time_0;
	int32_t ___IsCut_1;
	Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___Item_2;
};
// Native definition for COM marshalling of Cinemachine.TargetPositionCache/CacheEntry/RecordingItem
struct RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshaled_com
{
	float ___Time_0;
	int32_t ___IsCut_1;
	Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___Item_2;
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


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate
struct CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19  : public MulticastDelegate_t
{
public:

public:
};


// Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate
struct DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Animation
struct Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Playables.PlayableDirector
struct PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::played
	Action_1_tEFFD33105460921F68C4261E79791D397C76CB1B * ___played_4;
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::paused
	Action_1_tEFFD33105460921F68C4261E79791D397C76CB1B * ___paused_5;
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::stopped
	Action_1_tEFFD33105460921F68C4261E79791D397C76CB1B * ___stopped_6;

public:
	inline static int32_t get_offset_of_played_4() { return static_cast<int32_t>(offsetof(PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38, ___played_4)); }
	inline Action_1_tEFFD33105460921F68C4261E79791D397C76CB1B * get_played_4() const { return ___played_4; }
	inline Action_1_tEFFD33105460921F68C4261E79791D397C76CB1B ** get_address_of_played_4() { return &___played_4; }
	inline void set_played_4(Action_1_tEFFD33105460921F68C4261E79791D397C76CB1B * value)
	{
		___played_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___played_4), (void*)value);
	}

	inline static int32_t get_offset_of_paused_5() { return static_cast<int32_t>(offsetof(PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38, ___paused_5)); }
	inline Action_1_tEFFD33105460921F68C4261E79791D397C76CB1B * get_paused_5() const { return ___paused_5; }
	inline Action_1_tEFFD33105460921F68C4261E79791D397C76CB1B ** get_address_of_paused_5() { return &___paused_5; }
	inline void set_paused_5(Action_1_tEFFD33105460921F68C4261E79791D397C76CB1B * value)
	{
		___paused_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paused_5), (void*)value);
	}

	inline static int32_t get_offset_of_stopped_6() { return static_cast<int32_t>(offsetof(PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38, ___stopped_6)); }
	inline Action_1_tEFFD33105460921F68C4261E79791D397C76CB1B * get_stopped_6() const { return ___stopped_6; }
	inline Action_1_tEFFD33105460921F68C4261E79791D397C76CB1B ** get_address_of_stopped_6() { return &___stopped_6; }
	inline void set_stopped_6(Action_1_tEFFD33105460921F68C4261E79791D397C76CB1B * value)
	{
		___stopped_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stopped_6), (void*)value);
	}
};


// Cinemachine.CinemachineComponentBase
struct CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineComponentBase::m_vcamOwner
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___m_vcamOwner_5;
	// UnityEngine.Transform Cinemachine.CinemachineComponentBase::mCachedFollowTarget
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___mCachedFollowTarget_6;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineComponentBase::mCachedFollowTargetVcam
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___mCachedFollowTargetVcam_7;
	// Cinemachine.ICinemachineTargetGroup Cinemachine.CinemachineComponentBase::mCachedFollowTargetGroup
	RuntimeObject* ___mCachedFollowTargetGroup_8;
	// UnityEngine.Transform Cinemachine.CinemachineComponentBase::mCachedLookAtTarget
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___mCachedLookAtTarget_9;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineComponentBase::mCachedLookAtTargetVcam
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___mCachedLookAtTargetVcam_10;
	// Cinemachine.ICinemachineTargetGroup Cinemachine.CinemachineComponentBase::mCachedLookAtTargetGroup
	RuntimeObject* ___mCachedLookAtTargetGroup_11;

public:
	inline static int32_t get_offset_of_m_vcamOwner_5() { return static_cast<int32_t>(offsetof(CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D, ___m_vcamOwner_5)); }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * get_m_vcamOwner_5() const { return ___m_vcamOwner_5; }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** get_address_of_m_vcamOwner_5() { return &___m_vcamOwner_5; }
	inline void set_m_vcamOwner_5(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		___m_vcamOwner_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_vcamOwner_5), (void*)value);
	}

	inline static int32_t get_offset_of_mCachedFollowTarget_6() { return static_cast<int32_t>(offsetof(CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D, ___mCachedFollowTarget_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_mCachedFollowTarget_6() const { return ___mCachedFollowTarget_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_mCachedFollowTarget_6() { return &___mCachedFollowTarget_6; }
	inline void set_mCachedFollowTarget_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___mCachedFollowTarget_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCachedFollowTarget_6), (void*)value);
	}

	inline static int32_t get_offset_of_mCachedFollowTargetVcam_7() { return static_cast<int32_t>(offsetof(CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D, ___mCachedFollowTargetVcam_7)); }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * get_mCachedFollowTargetVcam_7() const { return ___mCachedFollowTargetVcam_7; }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** get_address_of_mCachedFollowTargetVcam_7() { return &___mCachedFollowTargetVcam_7; }
	inline void set_mCachedFollowTargetVcam_7(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		___mCachedFollowTargetVcam_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCachedFollowTargetVcam_7), (void*)value);
	}

	inline static int32_t get_offset_of_mCachedFollowTargetGroup_8() { return static_cast<int32_t>(offsetof(CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D, ___mCachedFollowTargetGroup_8)); }
	inline RuntimeObject* get_mCachedFollowTargetGroup_8() const { return ___mCachedFollowTargetGroup_8; }
	inline RuntimeObject** get_address_of_mCachedFollowTargetGroup_8() { return &___mCachedFollowTargetGroup_8; }
	inline void set_mCachedFollowTargetGroup_8(RuntimeObject* value)
	{
		___mCachedFollowTargetGroup_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCachedFollowTargetGroup_8), (void*)value);
	}

	inline static int32_t get_offset_of_mCachedLookAtTarget_9() { return static_cast<int32_t>(offsetof(CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D, ___mCachedLookAtTarget_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_mCachedLookAtTarget_9() const { return ___mCachedLookAtTarget_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_mCachedLookAtTarget_9() { return &___mCachedLookAtTarget_9; }
	inline void set_mCachedLookAtTarget_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___mCachedLookAtTarget_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCachedLookAtTarget_9), (void*)value);
	}

	inline static int32_t get_offset_of_mCachedLookAtTargetVcam_10() { return static_cast<int32_t>(offsetof(CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D, ___mCachedLookAtTargetVcam_10)); }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * get_mCachedLookAtTargetVcam_10() const { return ___mCachedLookAtTargetVcam_10; }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** get_address_of_mCachedLookAtTargetVcam_10() { return &___mCachedLookAtTargetVcam_10; }
	inline void set_mCachedLookAtTargetVcam_10(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		___mCachedLookAtTargetVcam_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCachedLookAtTargetVcam_10), (void*)value);
	}

	inline static int32_t get_offset_of_mCachedLookAtTargetGroup_11() { return static_cast<int32_t>(offsetof(CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D, ___mCachedLookAtTargetGroup_11)); }
	inline RuntimeObject* get_mCachedLookAtTargetGroup_11() const { return ___mCachedLookAtTargetGroup_11; }
	inline RuntimeObject** get_address_of_mCachedLookAtTargetGroup_11() { return &___mCachedLookAtTargetGroup_11; }
	inline void set_mCachedLookAtTargetGroup_11(RuntimeObject* value)
	{
		___mCachedLookAtTargetGroup_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCachedLookAtTargetGroup_11), (void*)value);
	}
};


// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String[] Cinemachine.CinemachineVirtualCameraBase::m_ExcludedPropertiesInInspector
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_ExcludedPropertiesInInspector_4;
	// Cinemachine.CinemachineCore/Stage[] Cinemachine.CinemachineVirtualCameraBase::m_LockStageInInspector
	StageU5BU5D_t605193BD653BA57911AFE8A2D01B1D799F7BB949* ___m_LockStageInInspector_5;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ValidatingStreamVersion
	int32_t ___m_ValidatingStreamVersion_6;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_OnValidateCalled
	bool ___m_OnValidateCalled_7;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_StreamingVersion
	int32_t ___m_StreamingVersion_8;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_Priority
	int32_t ___m_Priority_9;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::<FollowTargetAttachment>k__BackingField
	float ___U3CFollowTargetAttachmentU3Ek__BackingField_10;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::<LookAtTargetAttachment>k__BackingField
	float ___U3CLookAtTargetAttachmentU3Ek__BackingField_11;
	// Cinemachine.CinemachineVirtualCameraBase/StandbyUpdateMode Cinemachine.CinemachineVirtualCameraBase::m_StandbyUpdate
	int32_t ___m_StandbyUpdate_12;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension> Cinemachine.CinemachineVirtualCameraBase::mExtensions
	List_1_t13875FE3163CFA961C09134FFAA2E0903229691A * ___mExtensions_13;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<PreviousStateIsValid>k__BackingField
	bool ___U3CPreviousStateIsValidU3Ek__BackingField_14;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_WasStarted
	bool ___m_WasStarted_15;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::mSlaveStatusUpdated
	bool ___mSlaveStatusUpdated_16;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_parentVcam
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___m_parentVcam_17;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_QueuePriority
	int32_t ___m_QueuePriority_18;

public:
	inline static int32_t get_offset_of_m_ExcludedPropertiesInInspector_4() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_ExcludedPropertiesInInspector_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_ExcludedPropertiesInInspector_4() const { return ___m_ExcludedPropertiesInInspector_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_ExcludedPropertiesInInspector_4() { return &___m_ExcludedPropertiesInInspector_4; }
	inline void set_m_ExcludedPropertiesInInspector_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_ExcludedPropertiesInInspector_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExcludedPropertiesInInspector_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_LockStageInInspector_5() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_LockStageInInspector_5)); }
	inline StageU5BU5D_t605193BD653BA57911AFE8A2D01B1D799F7BB949* get_m_LockStageInInspector_5() const { return ___m_LockStageInInspector_5; }
	inline StageU5BU5D_t605193BD653BA57911AFE8A2D01B1D799F7BB949** get_address_of_m_LockStageInInspector_5() { return &___m_LockStageInInspector_5; }
	inline void set_m_LockStageInInspector_5(StageU5BU5D_t605193BD653BA57911AFE8A2D01B1D799F7BB949* value)
	{
		___m_LockStageInInspector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LockStageInInspector_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ValidatingStreamVersion_6() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_ValidatingStreamVersion_6)); }
	inline int32_t get_m_ValidatingStreamVersion_6() const { return ___m_ValidatingStreamVersion_6; }
	inline int32_t* get_address_of_m_ValidatingStreamVersion_6() { return &___m_ValidatingStreamVersion_6; }
	inline void set_m_ValidatingStreamVersion_6(int32_t value)
	{
		___m_ValidatingStreamVersion_6 = value;
	}

	inline static int32_t get_offset_of_m_OnValidateCalled_7() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_OnValidateCalled_7)); }
	inline bool get_m_OnValidateCalled_7() const { return ___m_OnValidateCalled_7; }
	inline bool* get_address_of_m_OnValidateCalled_7() { return &___m_OnValidateCalled_7; }
	inline void set_m_OnValidateCalled_7(bool value)
	{
		___m_OnValidateCalled_7 = value;
	}

	inline static int32_t get_offset_of_m_StreamingVersion_8() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_StreamingVersion_8)); }
	inline int32_t get_m_StreamingVersion_8() const { return ___m_StreamingVersion_8; }
	inline int32_t* get_address_of_m_StreamingVersion_8() { return &___m_StreamingVersion_8; }
	inline void set_m_StreamingVersion_8(int32_t value)
	{
		___m_StreamingVersion_8 = value;
	}

	inline static int32_t get_offset_of_m_Priority_9() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_Priority_9)); }
	inline int32_t get_m_Priority_9() const { return ___m_Priority_9; }
	inline int32_t* get_address_of_m_Priority_9() { return &___m_Priority_9; }
	inline void set_m_Priority_9(int32_t value)
	{
		___m_Priority_9 = value;
	}

	inline static int32_t get_offset_of_U3CFollowTargetAttachmentU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___U3CFollowTargetAttachmentU3Ek__BackingField_10)); }
	inline float get_U3CFollowTargetAttachmentU3Ek__BackingField_10() const { return ___U3CFollowTargetAttachmentU3Ek__BackingField_10; }
	inline float* get_address_of_U3CFollowTargetAttachmentU3Ek__BackingField_10() { return &___U3CFollowTargetAttachmentU3Ek__BackingField_10; }
	inline void set_U3CFollowTargetAttachmentU3Ek__BackingField_10(float value)
	{
		___U3CFollowTargetAttachmentU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CLookAtTargetAttachmentU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___U3CLookAtTargetAttachmentU3Ek__BackingField_11)); }
	inline float get_U3CLookAtTargetAttachmentU3Ek__BackingField_11() const { return ___U3CLookAtTargetAttachmentU3Ek__BackingField_11; }
	inline float* get_address_of_U3CLookAtTargetAttachmentU3Ek__BackingField_11() { return &___U3CLookAtTargetAttachmentU3Ek__BackingField_11; }
	inline void set_U3CLookAtTargetAttachmentU3Ek__BackingField_11(float value)
	{
		___U3CLookAtTargetAttachmentU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_m_StandbyUpdate_12() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_StandbyUpdate_12)); }
	inline int32_t get_m_StandbyUpdate_12() const { return ___m_StandbyUpdate_12; }
	inline int32_t* get_address_of_m_StandbyUpdate_12() { return &___m_StandbyUpdate_12; }
	inline void set_m_StandbyUpdate_12(int32_t value)
	{
		___m_StandbyUpdate_12 = value;
	}

	inline static int32_t get_offset_of_mExtensions_13() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___mExtensions_13)); }
	inline List_1_t13875FE3163CFA961C09134FFAA2E0903229691A * get_mExtensions_13() const { return ___mExtensions_13; }
	inline List_1_t13875FE3163CFA961C09134FFAA2E0903229691A ** get_address_of_mExtensions_13() { return &___mExtensions_13; }
	inline void set_mExtensions_13(List_1_t13875FE3163CFA961C09134FFAA2E0903229691A * value)
	{
		___mExtensions_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mExtensions_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPreviousStateIsValidU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___U3CPreviousStateIsValidU3Ek__BackingField_14)); }
	inline bool get_U3CPreviousStateIsValidU3Ek__BackingField_14() const { return ___U3CPreviousStateIsValidU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CPreviousStateIsValidU3Ek__BackingField_14() { return &___U3CPreviousStateIsValidU3Ek__BackingField_14; }
	inline void set_U3CPreviousStateIsValidU3Ek__BackingField_14(bool value)
	{
		___U3CPreviousStateIsValidU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_WasStarted_15() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_WasStarted_15)); }
	inline bool get_m_WasStarted_15() const { return ___m_WasStarted_15; }
	inline bool* get_address_of_m_WasStarted_15() { return &___m_WasStarted_15; }
	inline void set_m_WasStarted_15(bool value)
	{
		___m_WasStarted_15 = value;
	}

	inline static int32_t get_offset_of_mSlaveStatusUpdated_16() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___mSlaveStatusUpdated_16)); }
	inline bool get_mSlaveStatusUpdated_16() const { return ___mSlaveStatusUpdated_16; }
	inline bool* get_address_of_mSlaveStatusUpdated_16() { return &___mSlaveStatusUpdated_16; }
	inline void set_mSlaveStatusUpdated_16(bool value)
	{
		___mSlaveStatusUpdated_16 = value;
	}

	inline static int32_t get_offset_of_m_parentVcam_17() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_parentVcam_17)); }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * get_m_parentVcam_17() const { return ___m_parentVcam_17; }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** get_address_of_m_parentVcam_17() { return &___m_parentVcam_17; }
	inline void set_m_parentVcam_17(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		___m_parentVcam_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parentVcam_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_QueuePriority_18() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_QueuePriority_18)); }
	inline int32_t get_m_QueuePriority_18() const { return ___m_QueuePriority_18; }
	inline int32_t* get_address_of_m_QueuePriority_18() { return &___m_QueuePriority_18; }
	inline void set_m_QueuePriority_18(int32_t value)
	{
		___m_QueuePriority_18 = value;
	}
};


// Cinemachine.CinemachineVirtualCamera
struct CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C  : public CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5
{
public:
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_LookAt
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_LookAt_19;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_Follow
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Follow_20;
	// Cinemachine.LensSettings Cinemachine.CinemachineVirtualCamera::m_Lens
	LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  ___m_Lens_21;
	// Cinemachine.CinemachineVirtualCameraBase/TransitionParams Cinemachine.CinemachineVirtualCamera::m_Transitions
	TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C  ___m_Transitions_22;
	// Cinemachine.CinemachineVirtualCameraBase/BlendHint Cinemachine.CinemachineVirtualCamera::m_LegacyBlendHint
	int32_t ___m_LegacyBlendHint_23;
	// System.Boolean Cinemachine.CinemachineVirtualCamera::<UserIsDragging>k__BackingField
	bool ___U3CUserIsDraggingU3Ek__BackingField_27;
	// Cinemachine.CameraState Cinemachine.CinemachineVirtualCamera::m_State
	CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  ___m_State_28;
	// Cinemachine.CinemachineComponentBase[] Cinemachine.CinemachineVirtualCamera::m_ComponentPipeline
	CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC* ___m_ComponentPipeline_29;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_ComponentOwner
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_ComponentOwner_30;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::mCachedLookAtTarget
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___mCachedLookAtTarget_31;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCamera::mCachedLookAtTargetVcam
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___mCachedLookAtTargetVcam_32;

public:
	inline static int32_t get_offset_of_m_LookAt_19() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_LookAt_19)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_LookAt_19() const { return ___m_LookAt_19; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_LookAt_19() { return &___m_LookAt_19; }
	inline void set_m_LookAt_19(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_LookAt_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LookAt_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Follow_20() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_Follow_20)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_Follow_20() const { return ___m_Follow_20; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_Follow_20() { return &___m_Follow_20; }
	inline void set_m_Follow_20(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_Follow_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Follow_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_Lens_21() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_Lens_21)); }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  get_m_Lens_21() const { return ___m_Lens_21; }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * get_address_of_m_Lens_21() { return &___m_Lens_21; }
	inline void set_m_Lens_21(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  value)
	{
		___m_Lens_21 = value;
	}

	inline static int32_t get_offset_of_m_Transitions_22() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_Transitions_22)); }
	inline TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C  get_m_Transitions_22() const { return ___m_Transitions_22; }
	inline TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C * get_address_of_m_Transitions_22() { return &___m_Transitions_22; }
	inline void set_m_Transitions_22(TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C  value)
	{
		___m_Transitions_22 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Transitions_22))->___m_OnCameraLive_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_LegacyBlendHint_23() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_LegacyBlendHint_23)); }
	inline int32_t get_m_LegacyBlendHint_23() const { return ___m_LegacyBlendHint_23; }
	inline int32_t* get_address_of_m_LegacyBlendHint_23() { return &___m_LegacyBlendHint_23; }
	inline void set_m_LegacyBlendHint_23(int32_t value)
	{
		___m_LegacyBlendHint_23 = value;
	}

	inline static int32_t get_offset_of_U3CUserIsDraggingU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___U3CUserIsDraggingU3Ek__BackingField_27)); }
	inline bool get_U3CUserIsDraggingU3Ek__BackingField_27() const { return ___U3CUserIsDraggingU3Ek__BackingField_27; }
	inline bool* get_address_of_U3CUserIsDraggingU3Ek__BackingField_27() { return &___U3CUserIsDraggingU3Ek__BackingField_27; }
	inline void set_U3CUserIsDraggingU3Ek__BackingField_27(bool value)
	{
		___U3CUserIsDraggingU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_m_State_28() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_State_28)); }
	inline CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  get_m_State_28() const { return ___m_State_28; }
	inline CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601 * get_address_of_m_State_28() { return &___m_State_28; }
	inline void set_m_State_28(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  value)
	{
		___m_State_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_28))->___mCustom0_11))->___m_Custom_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_28))->___mCustom1_12))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_28))->___mCustom2_13))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_28))->___mCustom3_14))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_State_28))->___m_CustomOverflow_15), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_ComponentPipeline_29() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_ComponentPipeline_29)); }
	inline CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC* get_m_ComponentPipeline_29() const { return ___m_ComponentPipeline_29; }
	inline CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC** get_address_of_m_ComponentPipeline_29() { return &___m_ComponentPipeline_29; }
	inline void set_m_ComponentPipeline_29(CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC* value)
	{
		___m_ComponentPipeline_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ComponentPipeline_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_ComponentOwner_30() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_ComponentOwner_30)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_ComponentOwner_30() const { return ___m_ComponentOwner_30; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_ComponentOwner_30() { return &___m_ComponentOwner_30; }
	inline void set_m_ComponentOwner_30(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_ComponentOwner_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ComponentOwner_30), (void*)value);
	}

	inline static int32_t get_offset_of_mCachedLookAtTarget_31() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___mCachedLookAtTarget_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_mCachedLookAtTarget_31() const { return ___mCachedLookAtTarget_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_mCachedLookAtTarget_31() { return &___mCachedLookAtTarget_31; }
	inline void set_mCachedLookAtTarget_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___mCachedLookAtTarget_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCachedLookAtTarget_31), (void*)value);
	}

	inline static int32_t get_offset_of_mCachedLookAtTargetVcam_32() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___mCachedLookAtTargetVcam_32)); }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * get_mCachedLookAtTargetVcam_32() const { return ___mCachedLookAtTargetVcam_32; }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** get_address_of_mCachedLookAtTargetVcam_32() { return &___mCachedLookAtTargetVcam_32; }
	inline void set_mCachedLookAtTargetVcam_32(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		___mCachedLookAtTargetVcam_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCachedLookAtTargetVcam_32), (void*)value);
	}
};

struct CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C_StaticFields
{
public:
	// Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate Cinemachine.CinemachineVirtualCamera::CreatePipelineOverride
	CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19 * ___CreatePipelineOverride_25;
	// Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate Cinemachine.CinemachineVirtualCamera::DestroyPipelineOverride
	DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28 * ___DestroyPipelineOverride_26;

public:
	inline static int32_t get_offset_of_CreatePipelineOverride_25() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C_StaticFields, ___CreatePipelineOverride_25)); }
	inline CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19 * get_CreatePipelineOverride_25() const { return ___CreatePipelineOverride_25; }
	inline CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19 ** get_address_of_CreatePipelineOverride_25() { return &___CreatePipelineOverride_25; }
	inline void set_CreatePipelineOverride_25(CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19 * value)
	{
		___CreatePipelineOverride_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CreatePipelineOverride_25), (void*)value);
	}

	inline static int32_t get_offset_of_DestroyPipelineOverride_26() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C_StaticFields, ___DestroyPipelineOverride_26)); }
	inline DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28 * get_DestroyPipelineOverride_26() const { return ___DestroyPipelineOverride_26; }
	inline DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28 ** get_address_of_DestroyPipelineOverride_26() { return &___DestroyPipelineOverride_26; }
	inline void set_DestroyPipelineOverride_26(DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28 * value)
	{
		___DestroyPipelineOverride_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DestroyPipelineOverride_26), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Cinemachine.CinemachineComponentBase[]
struct CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D * m_Items[1];

public:
	inline CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// Cinemachine.TargetPositionCache/CacheCurve/Item[]
struct ItemU5BU5D_t1108E169C548FBD6E94B6418A98483F93C2FB3E8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  m_Items[1];

public:
	inline Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  value)
	{
		m_Items[index] = value;
	}
};
// Cinemachine.TargetPositionCache/CacheEntry/RecordingItem[]
struct RecordingItemU5BU5D_t519137B584A64E57F8188DDEE96C7A40220E40F5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  m_Items[1];

public:
	inline RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  value)
	{
		m_Items[index] = value;
	}
};

IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_pinvoke(const Object_tF2F3778131EFF286AF62B7B013A170F95A91571A& unmarshaled, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_pinvoke_back(const Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke& marshaled, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A& unmarshaled);
IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_pinvoke_cleanup(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_com(const Object_tF2F3778131EFF286AF62B7B013A170F95A91571A& unmarshaled, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_com_back(const Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com& marshaled, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A& unmarshaled);
IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_com_cleanup(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com& marshaled);
IL2CPP_EXTERN_C void NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke(const NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74& unmarshaled, NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke_back(const NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_pinvoke& marshaled, NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74& unmarshaled);
IL2CPP_EXTERN_C void NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke_cleanup(NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com(const NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74& unmarshaled, NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_com& marshaled);
IL2CPP_EXTERN_C void NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com_back(const NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_com& marshaled, NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74& unmarshaled);
IL2CPP_EXTERN_C void NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com_cleanup(NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_com& marshaled);

// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheCurve/Item>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE8F7A4717F2AFBB314903A66709DBC4E3A6299D4_gshared_inline (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheCurve/Item>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0A87900FEA9DBA7FC77FFDD29AA466E938168B94_gshared (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheCurve/Item>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAE25CC388FC2D88F7ECD58678578FD5C2C903F66_gshared (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * __this, Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheCurve/Item>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  List_1_get_Item_m8FE58202E8C53418E70622C8ED2B388429124FE8_gshared_inline (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9514D8319A9C37531733E4D2D7B2A5E920822635_gshared_inline (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  List_1_get_Item_m8D9BE2D904E61F226686ABCD759CFCC1506F6079_gshared_inline (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m82E31B8E4FAD858C374B87C26416A623CB116DC2_gshared (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m56838B2A12DB31FC32841390BF3570FB1FF85C7F_gshared (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m17F257BBEC37D95D8195C0C91654445D1079DC7F_gshared (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, int32_t ___index0, RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mFE47C3DDAD2ADBAC7AB3AB8E4F1A9B78CEBF0DE6_gshared (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m786B3FBB5FFA2F06FB278182CEA118E62A2DA334_gshared (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// UnityEngine.Vector4 Cinemachine.CinemachineSmoothPath/Waypoint::get_AsVector4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Waypoint_get_AsVector4_m9CB420052E5FB5EA1681133222C5EB982BEA6BAC (Waypoint_t2E24ECCFEA6F4D368CD2C992EA38915CD3438A54 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineStateDrivenCamera/ParentHash::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentHash__ctor_mFD2F0C557399C8A6C3798E3CDC0EB58B5E82A094 (ParentHash_tBD10D628B7916DE4607702F7E7DC6C872D847036 * __this, int32_t ___h0, int32_t ___p1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineTrackedDolly/AutoDolly::.ctor(System.Boolean,System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoDolly__ctor_mB22E90A64C6D9D0F6C0F6FE794446F2867E76793 (AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D * __this, bool ___enabled0, float ___positionOffset1, int32_t ___searchRadius2, int32_t ___stepsPerSegment3, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineTriggerAction/ActionSettings/TriggerEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerEvent__ctor_m1B0E4D0D8DD5D925A7B5F502DECF073FBA41C266 (TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B * __this, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineTriggerAction/ActionSettings::.ctor(Cinemachine.CinemachineTriggerAction/ActionSettings/Mode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionSettings__ctor_mD581917562ECC8295F6278BA5AD001705F8E9035 (ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6 * __this, int32_t ___action0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Cinemachine.CinemachineVirtualCameraBase>()
inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * GameObject_GetComponent_TisCinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5_m06107BAD0F98AB92EEDD9CC81DCFDDAB29D7A27B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Int32 Cinemachine.CinemachineVirtualCameraBase::get_Priority()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CinemachineVirtualCameraBase_get_Priority_m56656A6C1F3F6EDABE61AC85E1BA8C638B470310_inline (CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * __this, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineVirtualCameraBase::set_Priority(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CinemachineVirtualCameraBase_set_Priority_m6C180B742F19E669D648B6D1BE4D9D9C5824962B_inline (CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineVirtualCameraBase::MoveToTopOfPrioritySubqueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineVirtualCameraBase_MoveToTopOfPrioritySubqueue_m1C3187B5E5F52FA2D2924CD3443435BCA449B631 (CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Playables.PlayableDirector>()
inline PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * GameObject_GetComponent_TisPlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38_m3D32B48A597D5DB9C11F87B94BB4C0853DA88686 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Double UnityEngine.Playables.PlayableDirector::get_duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableDirector_get_duration_m82E33D83BB84CFB367B98BDE1F927B10BBDA7B3E (PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * __this, const RuntimeMethod* method);
// System.Double UnityEngine.Playables.PlayableDirector::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableDirector_get_time_m6E6BEDB6E9FF4A8CD48F73FB64F353B5787E735F (PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableDirector::set_time(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableDirector_set_time_m1F9C316C3EDC9EB58D381C1F2520499125C1365A (PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * __this, double ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableDirector::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableDirector_Play_m13D31AD720EEE25E93A21394B225EA10300C47C4 (PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animation>()
inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_m92B9ADEC5AE6A5FB55D702AD0410469739EF307C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Animation::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m5588607899B9B866117A1477C696076F161BA3D4 (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableDirector::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableDirector_Stop_m4C9FCBB20CDD4BF75DF910F3BE713251D9548C96 (PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_Stop_m06283FD9F64A3B05A2A248AE2B86C7F88D479DE9 (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineTriggerAction/ActionSettings::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionSettings_Invoke_mF3E35400963944A72FD025FEF8052413056DC716 (ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6 * __this, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineVirtualCamera/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFB7EABDE6BB8BDE667A9786AC0176017ADEC9AF3 (U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519 (float ___x0, float ___y1, const RuntimeMethod* method);
// System.Single Cinemachine.NoiseSettings/NoiseParams::GetValueAt(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NoiseParams_GetValueAt_mA2C1E6FA7AE9AB3FC9A51024E0D474E5C8596610 (NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74 * __this, float ___time0, float ___timeOffset1, const RuntimeMethod* method);
// UnityEngine.Vector3 Cinemachine.NoiseSettings/TransformNoiseParams::GetValueAt(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformNoiseParams_GetValueAt_m89FDF2289D147DC0B617426E76A78402474770CD (TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9 * __this, float ___time0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___timeOffsets1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheCurve/Item>::get_Count()
inline int32_t List_1_get_Count_mE8F7A4717F2AFBB314903A66709DBC4E3A6299D4_inline (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 *, const RuntimeMethod*))List_1_get_Count_mE8F7A4717F2AFBB314903A66709DBC4E3A6299D4_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F (float ___f0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheCurve/Item>::.ctor(System.Int32)
inline void List_1__ctor_m0A87900FEA9DBA7FC77FFDD29AA466E938168B94 (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 *, int32_t, const RuntimeMethod*))List_1__ctor_m0A87900FEA9DBA7FC77FFDD29AA466E938168B94_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheCurve/Item>::Add(!0)
inline void List_1_Add_mAE25CC388FC2D88F7ECD58678578FD5C2C903F66 (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * __this, Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 *, Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B , const RuntimeMethod*))List_1_Add_mAE25CC388FC2D88F7ECD58678578FD5C2C903F66_gshared)(__this, ___item0, method);
}
// System.Void Cinemachine.TargetPositionCache/CacheCurve::Add(Cinemachine.TargetPositionCache/CacheCurve/Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheCurve_Add_m325C65AD39FDFBC91F4D5624B8BF7C5560B36DFF (CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * __this, Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheCurve/Item>::get_Item(System.Int32)
inline Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  List_1_get_Item_m8FE58202E8C53418E70622C8ED2B388429124FE8_inline (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  (*) (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 *, int32_t, const RuntimeMethod*))List_1_get_Item_m8FE58202E8C53418E70622C8ED2B388429124FE8_gshared_inline)(__this, ___index0, method);
}
// Cinemachine.TargetPositionCache/CacheCurve/Item Cinemachine.TargetPositionCache/CacheCurve/Item::Lerp(Cinemachine.TargetPositionCache/CacheCurve/Item,Cinemachine.TargetPositionCache/CacheCurve/Item,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  Item_Lerp_m729C3CBFCA75B42CC2799D491DEF4C17C53602DC (Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___a0, Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___b1, float ___t2, const RuntimeMethod* method);
// Cinemachine.TargetPositionCache/CacheCurve/Item Cinemachine.TargetPositionCache/CacheCurve/Item::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  Item_get_Empty_m2209C3BE792AABD138C9A597718D01D2FF089CB3 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E (float ___f0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>::get_Count()
inline int32_t List_1_get_Count_m9514D8319A9C37531733E4D2D7B2A5E920822635_inline (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tAED568015081230FCEC357C56CB10520C53903F7 *, const RuntimeMethod*))List_1_get_Count_m9514D8319A9C37531733E4D2D7B2A5E920822635_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>::get_Item(System.Int32)
inline RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  List_1_get_Item_m8D9BE2D904E61F226686ABCD759CFCC1506F6079_inline (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  (*) (List_1_tAED568015081230FCEC357C56CB10520C53903F7 *, int32_t, const RuntimeMethod*))List_1_get_Item_m8D9BE2D904E61F226686ABCD759CFCC1506F6079_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>::Add(!0)
inline void List_1_Add_m82E31B8E4FAD858C374B87C26416A623CB116DC2 (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAED568015081230FCEC357C56CB10520C53903F7 *, RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB , const RuntimeMethod*))List_1_Add_m82E31B8E4FAD858C374B87C26416A623CB116DC2_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m56838B2A12DB31FC32841390BF3570FB1FF85C7F (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAED568015081230FCEC357C56CB10520C53903F7 *, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m56838B2A12DB31FC32841390BF3570FB1FF85C7F_gshared)(__this, ___index0, ___count1, method);
}
// System.Void System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m17F257BBEC37D95D8195C0C91654445D1079DC7F (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, int32_t ___index0, RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAED568015081230FCEC357C56CB10520C53903F7 *, int32_t, RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB , const RuntimeMethod*))List_1_set_Item_m17F257BBEC37D95D8195C0C91654445D1079DC7F_gshared)(__this, ___index0, ___value1, method);
}
// System.Void Cinemachine.TargetPositionCache/CacheCurve::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheCurve__ctor_m9126DDC2FF162438BEF34E60AD524A2BD74E09D8 (CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * __this, float ___startTime0, float ___endTime1, float ___stepSize2, const RuntimeMethod* method);
// System.Void Cinemachine.TargetPositionCache/CacheCurve::AddUntil(Cinemachine.TargetPositionCache/CacheCurve/Item,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheCurve_AddUntil_m3613245687496AC0DC18F1EB9A6328E3F8AA203F (CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * __this, Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___item0, float ___time1, bool ___isCut2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>::Clear()
inline void List_1_Clear_mFE47C3DDAD2ADBAC7AB3AB8E4F1A9B78CEBF0DE6 (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAED568015081230FCEC357C56CB10520C53903F7 *, const RuntimeMethod*))List_1_Clear_mFE47C3DDAD2ADBAC7AB3AB8E4F1A9B78CEBF0DE6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>::.ctor()
inline void List_1__ctor_m786B3FBB5FFA2F06FB278182CEA118E62A2DA334 (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAED568015081230FCEC357C56CB10520C53903F7 *, const RuntimeMethod*))List_1__ctor_m786B3FBB5FFA2F06FB278182CEA118E62A2DA334_gshared)(__this, method);
}
// System.Boolean Cinemachine.TargetPositionCache/TimeRange::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeRange_get_IsEmpty_m0EBE2CFDA395E03444770956D336B17D2CC676D0 (TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C * __this, const RuntimeMethod* method);
// System.Boolean Cinemachine.TargetPositionCache/TimeRange::Contains(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeRange_Contains_m2FE15B3333F2883C0580220A5D3FDE954533A8FA (TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C * __this, float ___time0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void Cinemachine.TargetPositionCache/TimeRange::Include(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeRange_Include_m98B368672B3FAD811027079C3EA8236914D3729E (TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C * __this, float ___time0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0 (const RuntimeMethod* method);
// System.Void Cinemachine.UpdateTracker/UpdateStatus::set_PreferredUpdate(Cinemachine.UpdateTracker/UpdateClock)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UpdateStatus_set_PreferredUpdate_m0D163727BB4C16214C9A22D74656ED09CEF6C929_inline (UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Matrix4x4::op_Equality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Matrix4x4_op_Equality_mFCC23863C7DB90A5FEFA5F1D9ECD511D21E8C846 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___lhs0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___rhs1, const RuntimeMethod* method);
// Cinemachine.UpdateTracker/UpdateClock Cinemachine.UpdateTracker/UpdateStatus::get_PreferredUpdate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UpdateStatus_get_PreferredUpdate_mF6224BC9B52B95B06ECD82F3CCDAC7B0994B9B6F_inline (UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::LerpUnclamped(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_LerpUnclamped_m7096F8833FE606F7DB0E39E42D4C6FD1438CF73F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::SlerpUnclamped(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_SlerpUnclamped_m654DA9A5B418C2E18B2794BC0CE92E52DF96151F (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
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
// UnityEngine.Vector4 Cinemachine.CinemachineSmoothPath/Waypoint::get_AsVector4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Waypoint_get_AsVector4_m9CB420052E5FB5EA1681133222C5EB982BEA6BAC (Waypoint_t2E24ECCFEA6F4D368CD2C992EA38915CD3438A54 * __this, const RuntimeMethod* method)
{
	{
		// get { return new Vector4(position.x, position.y, position.z, roll); }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = __this->get_address_of_position_0();
		float L_1 = L_0->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_2 = __this->get_address_of_position_0();
		float L_3 = L_2->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_position_0();
		float L_5 = L_4->get_z_4();
		float L_6 = __this->get_roll_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_7), L_1, L_3, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Waypoint_get_AsVector4_m9CB420052E5FB5EA1681133222C5EB982BEA6BAC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Waypoint_t2E24ECCFEA6F4D368CD2C992EA38915CD3438A54 * _thisAdjusted = reinterpret_cast<Waypoint_t2E24ECCFEA6F4D368CD2C992EA38915CD3438A54 *>(__this + _offset);
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  _returnValue;
	_returnValue = Waypoint_get_AsVector4_m9CB420052E5FB5EA1681133222C5EB982BEA6BAC(_thisAdjusted, method);
	return _returnValue;
}
// Cinemachine.CinemachineSmoothPath/Waypoint Cinemachine.CinemachineSmoothPath/Waypoint::FromVector4(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Waypoint_t2E24ECCFEA6F4D368CD2C992EA38915CD3438A54  Waypoint_FromVector4_m1F859E37CBC871BC98DC89550A1C6B264E46FB2A (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___v0, const RuntimeMethod* method)
{
	Waypoint_t2E24ECCFEA6F4D368CD2C992EA38915CD3438A54  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Waypoint wp = new Waypoint();
		il2cpp_codegen_initobj((&V_0), sizeof(Waypoint_t2E24ECCFEA6F4D368CD2C992EA38915CD3438A54 ));
		// wp.position = new Vector3(v[0], v[1], v[2]);
		float L_0;
		L_0 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___v0), 0, /*hidden argument*/NULL);
		float L_1;
		L_1 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___v0), 1, /*hidden argument*/NULL);
		float L_2;
		L_2 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___v0), 2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		(&V_0)->set_position_0(L_3);
		// wp.roll = v[3];
		float L_4;
		L_4 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___v0), 3, /*hidden argument*/NULL);
		(&V_0)->set_roll_1(L_4);
		// return wp;
		Waypoint_t2E24ECCFEA6F4D368CD2C992EA38915CD3438A54  L_5 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Cinemachine.CinemachineStateDrivenCamera/Instruction
IL2CPP_EXTERN_C void Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF_marshal_pinvoke(const Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF& unmarshaled, Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_VirtualCamera_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_VirtualCamera' of type 'Instruction': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_VirtualCamera_1Exception, NULL);
}
IL2CPP_EXTERN_C void Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF_marshal_pinvoke_back(const Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF_marshaled_pinvoke& marshaled, Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF& unmarshaled)
{
	Exception_t* ___m_VirtualCamera_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_VirtualCamera' of type 'Instruction': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_VirtualCamera_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineStateDrivenCamera/Instruction
IL2CPP_EXTERN_C void Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF_marshal_pinvoke_cleanup(Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Cinemachine.CinemachineStateDrivenCamera/Instruction
IL2CPP_EXTERN_C void Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF_marshal_com(const Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF& unmarshaled, Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF_marshaled_com& marshaled)
{
	Exception_t* ___m_VirtualCamera_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_VirtualCamera' of type 'Instruction': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_VirtualCamera_1Exception, NULL);
}
IL2CPP_EXTERN_C void Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF_marshal_com_back(const Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF_marshaled_com& marshaled, Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF& unmarshaled)
{
	Exception_t* ___m_VirtualCamera_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_VirtualCamera' of type 'Instruction': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_VirtualCamera_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineStateDrivenCamera/Instruction
IL2CPP_EXTERN_C void Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF_marshal_com_cleanup(Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cinemachine.CinemachineStateDrivenCamera/ParentHash::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentHash__ctor_mFD2F0C557399C8A6C3798E3CDC0EB58B5E82A094 (ParentHash_tBD10D628B7916DE4607702F7E7DC6C872D847036 * __this, int32_t ___h0, int32_t ___p1, const RuntimeMethod* method)
{
	{
		// public ParentHash(int h, int p) { m_Hash = h; m_ParentHash = p; }
		int32_t L_0 = ___h0;
		__this->set_m_Hash_0(L_0);
		// public ParentHash(int h, int p) { m_Hash = h; m_ParentHash = p; }
		int32_t L_1 = ___p1;
		__this->set_m_ParentHash_1(L_1);
		// public ParentHash(int h, int p) { m_Hash = h; m_ParentHash = p; }
		return;
	}
}
IL2CPP_EXTERN_C  void ParentHash__ctor_mFD2F0C557399C8A6C3798E3CDC0EB58B5E82A094_AdjustorThunk (RuntimeObject * __this, int32_t ___h0, int32_t ___p1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ParentHash_tBD10D628B7916DE4607702F7E7DC6C872D847036 * _thisAdjusted = reinterpret_cast<ParentHash_tBD10D628B7916DE4607702F7E7DC6C872D847036 *>(__this + _offset);
	ParentHash__ctor_mFD2F0C557399C8A6C3798E3CDC0EB58B5E82A094(_thisAdjusted, ___h0, ___p1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cinemachine.CinemachineStoryboard/CanvasInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasInfo__ctor_mD8E59D1746FD1DC9B497D9668DE2FACB016738DE (CanvasInfo_t70219CA4ECC7F2DFE94082AD8E227EC478E0D728 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Cinemachine.CinemachineTargetGroup/Target
IL2CPP_EXTERN_C void Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B_marshal_pinvoke(const Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B& unmarshaled, Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B_marshaled_pinvoke& marshaled)
{
	Exception_t* ___target_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'target' of type 'Target': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___target_0Exception, NULL);
}
IL2CPP_EXTERN_C void Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B_marshal_pinvoke_back(const Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B_marshaled_pinvoke& marshaled, Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B& unmarshaled)
{
	Exception_t* ___target_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'target' of type 'Target': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___target_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineTargetGroup/Target
IL2CPP_EXTERN_C void Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B_marshal_pinvoke_cleanup(Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Cinemachine.CinemachineTargetGroup/Target
IL2CPP_EXTERN_C void Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B_marshal_com(const Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B& unmarshaled, Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B_marshaled_com& marshaled)
{
	Exception_t* ___target_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'target' of type 'Target': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___target_0Exception, NULL);
}
IL2CPP_EXTERN_C void Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B_marshal_com_back(const Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B_marshaled_com& marshaled, Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B& unmarshaled)
{
	Exception_t* ___target_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'target' of type 'Target': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___target_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineTargetGroup/Target
IL2CPP_EXTERN_C void Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B_marshal_com_cleanup(Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B_marshaled_com& marshaled)
{
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
// Conversion methods for marshalling of: Cinemachine.CinemachineTrackedDolly/AutoDolly
IL2CPP_EXTERN_C void AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D_marshal_pinvoke(const AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D& unmarshaled, AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Enabled_0 = static_cast<int32_t>(unmarshaled.get_m_Enabled_0());
	marshaled.___m_PositionOffset_1 = unmarshaled.get_m_PositionOffset_1();
	marshaled.___m_SearchRadius_2 = unmarshaled.get_m_SearchRadius_2();
	marshaled.___m_SearchResolution_3 = unmarshaled.get_m_SearchResolution_3();
}
IL2CPP_EXTERN_C void AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D_marshal_pinvoke_back(const AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D_marshaled_pinvoke& marshaled, AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D& unmarshaled)
{
	bool unmarshaled_m_Enabled_temp_0 = false;
	unmarshaled_m_Enabled_temp_0 = static_cast<bool>(marshaled.___m_Enabled_0);
	unmarshaled.set_m_Enabled_0(unmarshaled_m_Enabled_temp_0);
	float unmarshaled_m_PositionOffset_temp_1 = 0.0f;
	unmarshaled_m_PositionOffset_temp_1 = marshaled.___m_PositionOffset_1;
	unmarshaled.set_m_PositionOffset_1(unmarshaled_m_PositionOffset_temp_1);
	int32_t unmarshaled_m_SearchRadius_temp_2 = 0;
	unmarshaled_m_SearchRadius_temp_2 = marshaled.___m_SearchRadius_2;
	unmarshaled.set_m_SearchRadius_2(unmarshaled_m_SearchRadius_temp_2);
	int32_t unmarshaled_m_SearchResolution_temp_3 = 0;
	unmarshaled_m_SearchResolution_temp_3 = marshaled.___m_SearchResolution_3;
	unmarshaled.set_m_SearchResolution_3(unmarshaled_m_SearchResolution_temp_3);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineTrackedDolly/AutoDolly
IL2CPP_EXTERN_C void AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D_marshal_pinvoke_cleanup(AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Cinemachine.CinemachineTrackedDolly/AutoDolly
IL2CPP_EXTERN_C void AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D_marshal_com(const AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D& unmarshaled, AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D_marshaled_com& marshaled)
{
	marshaled.___m_Enabled_0 = static_cast<int32_t>(unmarshaled.get_m_Enabled_0());
	marshaled.___m_PositionOffset_1 = unmarshaled.get_m_PositionOffset_1();
	marshaled.___m_SearchRadius_2 = unmarshaled.get_m_SearchRadius_2();
	marshaled.___m_SearchResolution_3 = unmarshaled.get_m_SearchResolution_3();
}
IL2CPP_EXTERN_C void AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D_marshal_com_back(const AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D_marshaled_com& marshaled, AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D& unmarshaled)
{
	bool unmarshaled_m_Enabled_temp_0 = false;
	unmarshaled_m_Enabled_temp_0 = static_cast<bool>(marshaled.___m_Enabled_0);
	unmarshaled.set_m_Enabled_0(unmarshaled_m_Enabled_temp_0);
	float unmarshaled_m_PositionOffset_temp_1 = 0.0f;
	unmarshaled_m_PositionOffset_temp_1 = marshaled.___m_PositionOffset_1;
	unmarshaled.set_m_PositionOffset_1(unmarshaled_m_PositionOffset_temp_1);
	int32_t unmarshaled_m_SearchRadius_temp_2 = 0;
	unmarshaled_m_SearchRadius_temp_2 = marshaled.___m_SearchRadius_2;
	unmarshaled.set_m_SearchRadius_2(unmarshaled_m_SearchRadius_temp_2);
	int32_t unmarshaled_m_SearchResolution_temp_3 = 0;
	unmarshaled_m_SearchResolution_temp_3 = marshaled.___m_SearchResolution_3;
	unmarshaled.set_m_SearchResolution_3(unmarshaled_m_SearchResolution_temp_3);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineTrackedDolly/AutoDolly
IL2CPP_EXTERN_C void AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D_marshal_com_cleanup(AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D_marshaled_com& marshaled)
{
}
// System.Void Cinemachine.CinemachineTrackedDolly/AutoDolly::.ctor(System.Boolean,System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoDolly__ctor_mB22E90A64C6D9D0F6C0F6FE794446F2867E76793 (AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D * __this, bool ___enabled0, float ___positionOffset1, int32_t ___searchRadius2, int32_t ___stepsPerSegment3, const RuntimeMethod* method)
{
	{
		// m_Enabled = enabled;
		bool L_0 = ___enabled0;
		__this->set_m_Enabled_0(L_0);
		// m_PositionOffset = positionOffset;
		float L_1 = ___positionOffset1;
		__this->set_m_PositionOffset_1(L_1);
		// m_SearchRadius = searchRadius;
		int32_t L_2 = ___searchRadius2;
		__this->set_m_SearchRadius_2(L_2);
		// m_SearchResolution = stepsPerSegment;
		int32_t L_3 = ___stepsPerSegment3;
		__this->set_m_SearchResolution_3(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AutoDolly__ctor_mB22E90A64C6D9D0F6C0F6FE794446F2867E76793_AdjustorThunk (RuntimeObject * __this, bool ___enabled0, float ___positionOffset1, int32_t ___searchRadius2, int32_t ___stepsPerSegment3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D * _thisAdjusted = reinterpret_cast<AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D *>(__this + _offset);
	AutoDolly__ctor_mB22E90A64C6D9D0F6C0F6FE794446F2867E76793(_thisAdjusted, ___enabled0, ___positionOffset1, ___searchRadius2, ___stepsPerSegment3, method);
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


// Conversion methods for marshalling of: Cinemachine.CinemachineTriggerAction/ActionSettings
IL2CPP_EXTERN_C void ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6_marshal_pinvoke(const ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6& unmarshaled, ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Event_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Event' of type 'ActionSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Event_5Exception, NULL);
}
IL2CPP_EXTERN_C void ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6_marshal_pinvoke_back(const ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6_marshaled_pinvoke& marshaled, ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6& unmarshaled)
{
	Exception_t* ___m_Event_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Event' of type 'ActionSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Event_5Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineTriggerAction/ActionSettings
IL2CPP_EXTERN_C void ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6_marshal_pinvoke_cleanup(ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Cinemachine.CinemachineTriggerAction/ActionSettings
IL2CPP_EXTERN_C void ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6_marshal_com(const ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6& unmarshaled, ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6_marshaled_com& marshaled)
{
	Exception_t* ___m_Event_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Event' of type 'ActionSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Event_5Exception, NULL);
}
IL2CPP_EXTERN_C void ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6_marshal_com_back(const ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6_marshaled_com& marshaled, ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6& unmarshaled)
{
	Exception_t* ___m_Event_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Event' of type 'ActionSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Event_5Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineTriggerAction/ActionSettings
IL2CPP_EXTERN_C void ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6_marshal_com_cleanup(ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6_marshaled_com& marshaled)
{
}
// System.Void Cinemachine.CinemachineTriggerAction/ActionSettings::.ctor(Cinemachine.CinemachineTriggerAction/ActionSettings/Mode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionSettings__ctor_mD581917562ECC8295F6278BA5AD001705F8E9035 (ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6 * __this, int32_t ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Action = action;
		int32_t L_0 = ___action0;
		__this->set_m_Action_0(L_0);
		// m_Target = null;
		__this->set_m_Target_1((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL);
		// m_BoostAmount = 0;
		__this->set_m_BoostAmount_2(0);
		// m_StartTime = 0;
		__this->set_m_StartTime_3((0.0f));
		// m_Mode = TimeMode.FromStart;
		__this->set_m_Mode_4(0);
		// m_Event = new TriggerEvent();
		TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B * L_1 = (TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B *)il2cpp_codegen_object_new(TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B_il2cpp_TypeInfo_var);
		TriggerEvent__ctor_m1B0E4D0D8DD5D925A7B5F502DECF073FBA41C266(L_1, /*hidden argument*/NULL);
		__this->set_m_Event_5(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ActionSettings__ctor_mD581917562ECC8295F6278BA5AD001705F8E9035_AdjustorThunk (RuntimeObject * __this, int32_t ___action0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6 * _thisAdjusted = reinterpret_cast<ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6 *>(__this + _offset);
	ActionSettings__ctor_mD581917562ECC8295F6278BA5AD001705F8E9035(_thisAdjusted, ___action0, method);
}
// System.Void Cinemachine.CinemachineTriggerAction/ActionSettings::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionSettings_Invoke_mF3E35400963944A72FD025FEF8052413056DC716 (ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_m92B9ADEC5AE6A5FB55D702AD0410469739EF307C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5_m06107BAD0F98AB92EEDD9CC81DCFDDAB29D7A27B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38_m3D32B48A597D5DB9C11F87B94BB4C0853DA88686_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * V_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * V_2 = NULL;
	int32_t V_3 = 0;
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * V_4 = NULL;
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * V_5 = NULL;
	PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * V_6 = NULL;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	int32_t V_10 = 0;
	Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * V_11 = NULL;
	PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * V_12 = NULL;
	Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * V_13 = NULL;
	{
		// UnityEngine.Object currentTarget = m_Target;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0 = __this->get_m_Target_1();
		V_0 = L_0;
		// if (currentTarget != null)
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_01fd;
		}
	}
	{
		// GameObject targetGameObject = currentTarget as GameObject;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_3 = V_0;
		V_1 = ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_3, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var));
		// Behaviour targetBehaviour = currentTarget as Behaviour;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_4 = V_0;
		V_2 = ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)IsInstClass((RuntimeObject*)L_4, Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9_il2cpp_TypeInfo_var));
		// if (targetBehaviour != null)
		Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * L_5 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		// targetGameObject = targetBehaviour.gameObject;
		Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * L_7 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
	}

IL_0031:
	{
		// switch (m_Action)
		int32_t L_9 = __this->get_m_Action_0();
		V_3 = L_9;
		int32_t L_10 = V_3;
		switch (L_10)
		{
			case 0:
			{
				goto IL_01fd;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_0098;
			}
			case 3:
			{
				goto IL_00cc;
			}
			case 4:
			{
				goto IL_00e4;
			}
			case 5:
			{
				goto IL_00fc;
			}
			case 6:
			{
				goto IL_0114;
			}
			case 7:
			{
				goto IL_01c9;
			}
		}
	}
	{
		goto IL_01fd;
	}

IL_0063:
	{
		// CinemachineVirtualCameraBase vcam
		//     = targetGameObject.GetComponent<CinemachineVirtualCameraBase>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = V_1;
		CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * L_12;
		L_12 = GameObject_GetComponent_TisCinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5_m06107BAD0F98AB92EEDD9CC81DCFDDAB29D7A27B(L_11, /*hidden argument*/GameObject_GetComponent_TisCinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5_m06107BAD0F98AB92EEDD9CC81DCFDDAB29D7A27B_RuntimeMethod_var);
		V_4 = L_12;
		// if (vcam != null)
		CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * L_13 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_01fd;
		}
	}
	{
		// vcam.Priority += m_BoostAmount;
		CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * L_15 = V_4;
		CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * L_16 = L_15;
		int32_t L_17;
		L_17 = CinemachineVirtualCameraBase_get_Priority_m56656A6C1F3F6EDABE61AC85E1BA8C638B470310_inline(L_16, /*hidden argument*/NULL);
		int32_t L_18 = __this->get_m_BoostAmount_2();
		CinemachineVirtualCameraBase_set_Priority_m6C180B742F19E669D648B6D1BE4D9D9C5824962B_inline(L_16, ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18)), /*hidden argument*/NULL);
		// vcam.MoveToTopOfPrioritySubqueue();
		CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * L_19 = V_4;
		CinemachineVirtualCameraBase_MoveToTopOfPrioritySubqueue_m1C3187B5E5F52FA2D2924CD3443435BCA449B631(L_19, /*hidden argument*/NULL);
		// break;
		goto IL_01fd;
	}

IL_0098:
	{
		// if (targetGameObject != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_20, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_01fd;
		}
	}
	{
		// targetGameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = V_1;
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_22, (bool)1, /*hidden argument*/NULL);
		// CinemachineVirtualCameraBase vcam
		//     = targetGameObject.GetComponent<CinemachineVirtualCameraBase>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = V_1;
		CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * L_24;
		L_24 = GameObject_GetComponent_TisCinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5_m06107BAD0F98AB92EEDD9CC81DCFDDAB29D7A27B(L_23, /*hidden argument*/GameObject_GetComponent_TisCinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5_m06107BAD0F98AB92EEDD9CC81DCFDDAB29D7A27B_RuntimeMethod_var);
		V_5 = L_24;
		// if (vcam != null)
		CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * L_25 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_25, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_01fd;
		}
	}
	{
		// vcam.MoveToTopOfPrioritySubqueue();
		CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * L_27 = V_5;
		CinemachineVirtualCameraBase_MoveToTopOfPrioritySubqueue_m1C3187B5E5F52FA2D2924CD3443435BCA449B631(L_27, /*hidden argument*/NULL);
		// break;
		goto IL_01fd;
	}

IL_00cc:
	{
		// if (targetGameObject != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_28, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_01fd;
		}
	}
	{
		// targetGameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = V_1;
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_30, (bool)0, /*hidden argument*/NULL);
		// break;
		goto IL_01fd;
	}

IL_00e4:
	{
		// if (targetBehaviour != null)
		Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * L_31 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_31, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_01fd;
		}
	}
	{
		// targetBehaviour.enabled = true;
		Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * L_33 = V_2;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_33, (bool)1, /*hidden argument*/NULL);
		// break;
		goto IL_01fd;
	}

IL_00fc:
	{
		// if (targetBehaviour != null)
		Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * L_34 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_34, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_01fd;
		}
	}
	{
		// targetBehaviour.enabled = false;
		Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * L_36 = V_2;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_36, (bool)0, /*hidden argument*/NULL);
		// break;
		goto IL_01fd;
	}

IL_0114:
	{
		// PlayableDirector playable
		//     = targetGameObject.GetComponent<PlayableDirector>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = V_1;
		PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * L_38;
		L_38 = GameObject_GetComponent_TisPlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38_m3D32B48A597D5DB9C11F87B94BB4C0853DA88686(L_37, /*hidden argument*/GameObject_GetComponent_TisPlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38_m3D32B48A597D5DB9C11F87B94BB4C0853DA88686_RuntimeMethod_var);
		V_6 = L_38;
		// if (playable != null)
		PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * L_39 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_39, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_01ad;
		}
	}
	{
		// double startTime = 0;
		V_7 = (0.0);
		// double duration = playable.duration;
		PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * L_41 = V_6;
		double L_42;
		L_42 = PlayableDirector_get_duration_m82E33D83BB84CFB367B98BDE1F927B10BBDA7B3E(L_41, /*hidden argument*/NULL);
		V_8 = L_42;
		// double current = playable.time;
		PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * L_43 = V_6;
		double L_44;
		L_44 = PlayableDirector_get_time_m6E6BEDB6E9FF4A8CD48F73FB64F353B5787E735F(L_43, /*hidden argument*/NULL);
		V_9 = L_44;
		// switch (m_Mode)
		int32_t L_45 = __this->get_m_Mode_4();
		V_10 = L_45;
		int32_t L_46 = V_10;
		switch (L_46)
		{
			case 0:
			{
				goto IL_0165;
			}
			case 1:
			{
				goto IL_0173;
			}
			case 2:
			{
				goto IL_0181;
			}
			case 3:
			{
				goto IL_018f;
			}
		}
	}

IL_0165:
	{
		// startTime += m_StartTime;
		double L_47 = V_7;
		float L_48 = __this->get_m_StartTime_3();
		V_7 = ((double)il2cpp_codegen_add((double)L_47, (double)((double)((double)L_48))));
		// break;
		goto IL_019b;
	}

IL_0173:
	{
		// startTime = duration - m_StartTime;
		double L_49 = V_8;
		float L_50 = __this->get_m_StartTime_3();
		V_7 = ((double)il2cpp_codegen_subtract((double)L_49, (double)((double)((double)L_50))));
		// break;
		goto IL_019b;
	}

IL_0181:
	{
		// startTime = current - m_StartTime;
		double L_51 = V_9;
		float L_52 = __this->get_m_StartTime_3();
		V_7 = ((double)il2cpp_codegen_subtract((double)L_51, (double)((double)((double)L_52))));
		// break;
		goto IL_019b;
	}

IL_018f:
	{
		// startTime = current + m_StartTime;
		double L_53 = V_9;
		float L_54 = __this->get_m_StartTime_3();
		V_7 = ((double)il2cpp_codegen_add((double)L_53, (double)((double)((double)L_54))));
	}

IL_019b:
	{
		// playable.time = startTime;
		PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * L_55 = V_6;
		double L_56 = V_7;
		PlayableDirector_set_time_m1F9C316C3EDC9EB58D381C1F2520499125C1365A(L_55, L_56, /*hidden argument*/NULL);
		// playable.Play();
		PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * L_57 = V_6;
		PlayableDirector_Play_m13D31AD720EEE25E93A21394B225EA10300C47C4(L_57, /*hidden argument*/NULL);
		// }
		goto IL_01fd;
	}

IL_01ad:
	{
		// Animation ani = targetGameObject.GetComponent<Animation>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58 = V_1;
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_59;
		L_59 = GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_m92B9ADEC5AE6A5FB55D702AD0410469739EF307C(L_58, /*hidden argument*/GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_m92B9ADEC5AE6A5FB55D702AD0410469739EF307C_RuntimeMethod_var);
		V_11 = L_59;
		// if (ani != null)
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_60 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_60, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_01fd;
		}
	}
	{
		// ani.Play();
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_62 = V_11;
		bool L_63;
		L_63 = Animation_Play_m5588607899B9B866117A1477C696076F161BA3D4(L_62, /*hidden argument*/NULL);
		// break;
		goto IL_01fd;
	}

IL_01c9:
	{
		// PlayableDirector playable
		//     = targetGameObject.GetComponent<PlayableDirector>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_64 = V_1;
		PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * L_65;
		L_65 = GameObject_GetComponent_TisPlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38_m3D32B48A597D5DB9C11F87B94BB4C0853DA88686(L_64, /*hidden argument*/GameObject_GetComponent_TisPlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38_m3D32B48A597D5DB9C11F87B94BB4C0853DA88686_RuntimeMethod_var);
		V_12 = L_65;
		// if (playable != null)
		PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * L_66 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_67;
		L_67 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_66, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_67)
		{
			goto IL_01e4;
		}
	}
	{
		// playable.Stop();
		PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * L_68 = V_12;
		PlayableDirector_Stop_m4C9FCBB20CDD4BF75DF910F3BE713251D9548C96(L_68, /*hidden argument*/NULL);
		goto IL_01fd;
	}

IL_01e4:
	{
		// Animation ani = targetGameObject.GetComponent<Animation>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_69 = V_1;
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_70;
		L_70 = GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_m92B9ADEC5AE6A5FB55D702AD0410469739EF307C(L_69, /*hidden argument*/GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_m92B9ADEC5AE6A5FB55D702AD0410469739EF307C_RuntimeMethod_var);
		V_13 = L_70;
		// if (ani != null)
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_71 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_72;
		L_72 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_71, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_72)
		{
			goto IL_01fd;
		}
	}
	{
		// ani.Stop();
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_73 = V_13;
		Animation_Stop_m06283FD9F64A3B05A2A248AE2B86C7F88D479DE9(L_73, /*hidden argument*/NULL);
	}

IL_01fd:
	{
		// m_Event.Invoke();
		TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B * L_74 = __this->get_m_Event_5();
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_74, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ActionSettings_Invoke_mF3E35400963944A72FD025FEF8052413056DC716_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6 * _thisAdjusted = reinterpret_cast<ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6 *>(__this + _offset);
	ActionSettings_Invoke_mF3E35400963944A72FD025FEF8052413056DC716(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cinemachine.CinemachineVirtualCamera/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m575A5E831C9D536CC3AF82E75EBEE29E76D43C89 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD * L_0 = (U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD *)il2cpp_codegen_object_new(U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mFB7EABDE6BB8BDE667A9786AC0176017ADEC9AF3(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Cinemachine.CinemachineVirtualCamera/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFB7EABDE6BB8BDE667A9786AC0176017ADEC9AF3 (U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Cinemachine.CinemachineVirtualCamera/<>c::<UpdateComponentPipeline>b__41_0(Cinemachine.CinemachineComponentBase,Cinemachine.CinemachineComponentBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CUpdateComponentPipelineU3Eb__41_0_mCE45F92D28AB75075C2C97D20DBDAF56CB6D1FA3 (U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD * __this, CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D * ___c10, CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D * ___c21, const RuntimeMethod* method)
{
	{
		// list.Sort((c1, c2) => (int)c1.Stage - (int)c2.Stage);
		CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D * L_0 = ___c10;
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(6 /* Cinemachine.CinemachineCore/Stage Cinemachine.CinemachineComponentBase::get_Stage() */, L_0);
		CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D * L_2 = ___c21;
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* Cinemachine.CinemachineCore/Stage Cinemachine.CinemachineComponentBase::get_Stage() */, L_2);
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_3));
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
// System.Void Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatePipelineDelegate__ctor_mF51B89DEB4EAE7A714B49CA9BF703B8541D419A0 (CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate::Invoke(Cinemachine.CinemachineVirtualCamera,System.String,Cinemachine.CinemachineComponentBase[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * CreatePipelineDelegate_Invoke_mF25FE1D09EC7FB09C0E0EDF766B2A19BF31080E5 (CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19 * __this, CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * ___vcam0, String_t* ___name1, CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC* ___copyFrom2, const RuntimeMethod* method)
{
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * result = NULL;
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
			if (___parameterCount == 3)
			{
				// open
				typedef Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*FunctionPointerType) (CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C *, String_t*, CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___vcam0, ___name1, ___copyFrom2, targetMethod);
			}
			else
			{
				// closed
				typedef Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*FunctionPointerType) (void*, CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C *, String_t*, CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___vcam0, ___name1, ___copyFrom2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, String_t*, CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC* >::Invoke(targetMethod, ___vcam0, ___name1, ___copyFrom2);
					else
						result = GenericVirtFuncInvoker2< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, String_t*, CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC* >::Invoke(targetMethod, ___vcam0, ___name1, ___copyFrom2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, String_t*, CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___vcam0, ___name1, ___copyFrom2);
					else
						result = VirtFuncInvoker2< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, String_t*, CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___vcam0, ___name1, ___copyFrom2);
				}
			}
			else
			{
				typedef Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*FunctionPointerType) (CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C *, String_t*, CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___vcam0, ___name1, ___copyFrom2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C *, String_t*, CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC* >::Invoke(targetMethod, targetThis, ___vcam0, ___name1, ___copyFrom2);
					else
						result = GenericVirtFuncInvoker3< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C *, String_t*, CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC* >::Invoke(targetMethod, targetThis, ___vcam0, ___name1, ___copyFrom2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C *, String_t*, CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___vcam0, ___name1, ___copyFrom2);
					else
						result = VirtFuncInvoker3< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C *, String_t*, CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___vcam0, ___name1, ___copyFrom2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*FunctionPointerType) (CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C *, String_t*, CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___vcam0, ___name1, ___copyFrom2, targetMethod);
				}
				else
				{
					typedef Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*FunctionPointerType) (void*, CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C *, String_t*, CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___vcam0, ___name1, ___copyFrom2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate::BeginInvoke(Cinemachine.CinemachineVirtualCamera,System.String,Cinemachine.CinemachineComponentBase[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CreatePipelineDelegate_BeginInvoke_m354E9436E905807B4CCD0ACB6528D067E014E638 (CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19 * __this, CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * ___vcam0, String_t* ___name1, CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC* ___copyFrom2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___vcam0;
	__d_args[1] = ___name1;
	__d_args[2] = ___copyFrom2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * CreatePipelineDelegate_EndInvoke_m038BA53E61623D2190CBCCD6649F230C29CE89F0 (CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyPipelineDelegate__ctor_m3D90BC04CC0ADE49A4EE6503D20E7AB776F7A6AA (DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate::Invoke(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyPipelineDelegate_Invoke_m900F828AF1A5259B1D8606DB45BD14D4CB3274E1 (DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pipeline0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___pipeline0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___pipeline0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___pipeline0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___pipeline0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___pipeline0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___pipeline0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___pipeline0, targetMethod);
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
						GenericInterfaceActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(targetMethod, targetThis, ___pipeline0);
					else
						GenericVirtActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(targetMethod, targetThis, ___pipeline0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pipeline0);
					else
						VirtActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pipeline0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___pipeline0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___pipeline0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DestroyPipelineDelegate_BeginInvoke_m5E9E8B1CCB62A8EA334567CE88741B5356DE062B (DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pipeline0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___pipeline0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyPipelineDelegate_EndInvoke_mD018624F272E6D61432DF250DFCDAD7DC2B53BBB (DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: Cinemachine.CinemachineVirtualCameraBase/TransitionParams
IL2CPP_EXTERN_C void TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshal_pinvoke(const TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C& unmarshaled, TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_OnCameraLive_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_OnCameraLive' of type 'TransitionParams': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_OnCameraLive_2Exception, NULL);
}
IL2CPP_EXTERN_C void TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshal_pinvoke_back(const TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshaled_pinvoke& marshaled, TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C& unmarshaled)
{
	Exception_t* ___m_OnCameraLive_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_OnCameraLive' of type 'TransitionParams': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_OnCameraLive_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineVirtualCameraBase/TransitionParams
IL2CPP_EXTERN_C void TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshal_pinvoke_cleanup(TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Cinemachine.CinemachineVirtualCameraBase/TransitionParams
IL2CPP_EXTERN_C void TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshal_com(const TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C& unmarshaled, TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshaled_com& marshaled)
{
	Exception_t* ___m_OnCameraLive_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_OnCameraLive' of type 'TransitionParams': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_OnCameraLive_2Exception, NULL);
}
IL2CPP_EXTERN_C void TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshal_com_back(const TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshaled_com& marshaled, TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C& unmarshaled)
{
	Exception_t* ___m_OnCameraLive_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_OnCameraLive' of type 'TransitionParams': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_OnCameraLive_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineVirtualCameraBase/TransitionParams
IL2CPP_EXTERN_C void TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshal_com_cleanup(TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshaled_com& marshaled)
{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Cinemachine.NoiseSettings/NoiseParams
IL2CPP_EXTERN_C void NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke(const NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74& unmarshaled, NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_pinvoke& marshaled)
{
	marshaled.___Frequency_0 = unmarshaled.get_Frequency_0();
	marshaled.___Amplitude_1 = unmarshaled.get_Amplitude_1();
	marshaled.___Constant_2 = static_cast<int32_t>(unmarshaled.get_Constant_2());
}
IL2CPP_EXTERN_C void NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke_back(const NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_pinvoke& marshaled, NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74& unmarshaled)
{
	float unmarshaled_Frequency_temp_0 = 0.0f;
	unmarshaled_Frequency_temp_0 = marshaled.___Frequency_0;
	unmarshaled.set_Frequency_0(unmarshaled_Frequency_temp_0);
	float unmarshaled_Amplitude_temp_1 = 0.0f;
	unmarshaled_Amplitude_temp_1 = marshaled.___Amplitude_1;
	unmarshaled.set_Amplitude_1(unmarshaled_Amplitude_temp_1);
	bool unmarshaled_Constant_temp_2 = false;
	unmarshaled_Constant_temp_2 = static_cast<bool>(marshaled.___Constant_2);
	unmarshaled.set_Constant_2(unmarshaled_Constant_temp_2);
}
// Conversion method for clean up from marshalling of: Cinemachine.NoiseSettings/NoiseParams
IL2CPP_EXTERN_C void NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke_cleanup(NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Cinemachine.NoiseSettings/NoiseParams
IL2CPP_EXTERN_C void NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com(const NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74& unmarshaled, NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_com& marshaled)
{
	marshaled.___Frequency_0 = unmarshaled.get_Frequency_0();
	marshaled.___Amplitude_1 = unmarshaled.get_Amplitude_1();
	marshaled.___Constant_2 = static_cast<int32_t>(unmarshaled.get_Constant_2());
}
IL2CPP_EXTERN_C void NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com_back(const NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_com& marshaled, NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74& unmarshaled)
{
	float unmarshaled_Frequency_temp_0 = 0.0f;
	unmarshaled_Frequency_temp_0 = marshaled.___Frequency_0;
	unmarshaled.set_Frequency_0(unmarshaled_Frequency_temp_0);
	float unmarshaled_Amplitude_temp_1 = 0.0f;
	unmarshaled_Amplitude_temp_1 = marshaled.___Amplitude_1;
	unmarshaled.set_Amplitude_1(unmarshaled_Amplitude_temp_1);
	bool unmarshaled_Constant_temp_2 = false;
	unmarshaled_Constant_temp_2 = static_cast<bool>(marshaled.___Constant_2);
	unmarshaled.set_Constant_2(unmarshaled_Constant_temp_2);
}
// Conversion method for clean up from marshalling of: Cinemachine.NoiseSettings/NoiseParams
IL2CPP_EXTERN_C void NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com_cleanup(NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_com& marshaled)
{
}
// System.Single Cinemachine.NoiseSettings/NoiseParams::GetValueAt(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NoiseParams_GetValueAt_mA2C1E6FA7AE9AB3FC9A51024E0D474E5C8596610 (NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74 * __this, float ___time0, float ___timeOffset1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float t = (Frequency * time) + timeOffset;
		float L_0 = __this->get_Frequency_0();
		float L_1 = ___time0;
		float L_2 = ___timeOffset1;
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)L_2));
		// if (Constant)
		bool L_3 = __this->get_Constant_2();
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// return  Mathf.Cos(t * 2 * Mathf.PI) * Amplitude * 0.5f;
		float L_4 = V_0;
		float L_5;
		L_5 = cosf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_4, (float)(2.0f))), (float)(3.14159274f))));
		float L_6 = __this->get_Amplitude_1();
		return ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)), (float)(0.5f)));
	}

IL_0033:
	{
		// return (Mathf.PerlinNoise(t, 0f) - 0.5f) * Amplitude;
		float L_7 = V_0;
		float L_8;
		L_8 = Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519(L_7, (0.0f), /*hidden argument*/NULL);
		float L_9 = __this->get_Amplitude_1();
		return ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_8, (float)(0.5f))), (float)L_9));
	}
}
IL2CPP_EXTERN_C  float NoiseParams_GetValueAt_mA2C1E6FA7AE9AB3FC9A51024E0D474E5C8596610_AdjustorThunk (RuntimeObject * __this, float ___time0, float ___timeOffset1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74 * _thisAdjusted = reinterpret_cast<NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74 *>(__this + _offset);
	float _returnValue;
	_returnValue = NoiseParams_GetValueAt_mA2C1E6FA7AE9AB3FC9A51024E0D474E5C8596610(_thisAdjusted, ___time0, ___timeOffset1, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif






// Conversion methods for marshalling of: Cinemachine.NoiseSettings/TransformNoiseParams
IL2CPP_EXTERN_C void TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9_marshal_pinvoke(const TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9& unmarshaled, TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9_marshaled_pinvoke& marshaled)
{
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke(unmarshaled.get_X_0(), marshaled.___X_0);
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke(unmarshaled.get_Y_1(), marshaled.___Y_1);
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke(unmarshaled.get_Z_2(), marshaled.___Z_2);
}
IL2CPP_EXTERN_C void TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9_marshal_pinvoke_back(const TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9_marshaled_pinvoke& marshaled, TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9& unmarshaled)
{
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  unmarshaled_X_temp_0;
	memset((&unmarshaled_X_temp_0), 0, sizeof(unmarshaled_X_temp_0));
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke_back(marshaled.___X_0, unmarshaled_X_temp_0);
	unmarshaled.set_X_0(unmarshaled_X_temp_0);
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  unmarshaled_Y_temp_1;
	memset((&unmarshaled_Y_temp_1), 0, sizeof(unmarshaled_Y_temp_1));
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke_back(marshaled.___Y_1, unmarshaled_Y_temp_1);
	unmarshaled.set_Y_1(unmarshaled_Y_temp_1);
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  unmarshaled_Z_temp_2;
	memset((&unmarshaled_Z_temp_2), 0, sizeof(unmarshaled_Z_temp_2));
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke_back(marshaled.___Z_2, unmarshaled_Z_temp_2);
	unmarshaled.set_Z_2(unmarshaled_Z_temp_2);
}
// Conversion method for clean up from marshalling of: Cinemachine.NoiseSettings/TransformNoiseParams
IL2CPP_EXTERN_C void TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9_marshal_pinvoke_cleanup(TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9_marshaled_pinvoke& marshaled)
{
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke_cleanup(marshaled.___X_0);
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke_cleanup(marshaled.___Y_1);
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke_cleanup(marshaled.___Z_2);
}






// Conversion methods for marshalling of: Cinemachine.NoiseSettings/TransformNoiseParams
IL2CPP_EXTERN_C void TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9_marshal_com(const TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9& unmarshaled, TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9_marshaled_com& marshaled)
{
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com(unmarshaled.get_X_0(), marshaled.___X_0);
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com(unmarshaled.get_Y_1(), marshaled.___Y_1);
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com(unmarshaled.get_Z_2(), marshaled.___Z_2);
}
IL2CPP_EXTERN_C void TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9_marshal_com_back(const TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9_marshaled_com& marshaled, TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9& unmarshaled)
{
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  unmarshaled_X_temp_0;
	memset((&unmarshaled_X_temp_0), 0, sizeof(unmarshaled_X_temp_0));
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com_back(marshaled.___X_0, unmarshaled_X_temp_0);
	unmarshaled.set_X_0(unmarshaled_X_temp_0);
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  unmarshaled_Y_temp_1;
	memset((&unmarshaled_Y_temp_1), 0, sizeof(unmarshaled_Y_temp_1));
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com_back(marshaled.___Y_1, unmarshaled_Y_temp_1);
	unmarshaled.set_Y_1(unmarshaled_Y_temp_1);
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  unmarshaled_Z_temp_2;
	memset((&unmarshaled_Z_temp_2), 0, sizeof(unmarshaled_Z_temp_2));
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com_back(marshaled.___Z_2, unmarshaled_Z_temp_2);
	unmarshaled.set_Z_2(unmarshaled_Z_temp_2);
}
// Conversion method for clean up from marshalling of: Cinemachine.NoiseSettings/TransformNoiseParams
IL2CPP_EXTERN_C void TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9_marshal_com_cleanup(TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9_marshaled_com& marshaled)
{
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com_cleanup(marshaled.___X_0);
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com_cleanup(marshaled.___Y_1);
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com_cleanup(marshaled.___Z_2);
}
// UnityEngine.Vector3 Cinemachine.NoiseSettings/TransformNoiseParams::GetValueAt(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformNoiseParams_GetValueAt_m89FDF2289D147DC0B617426E76A78402474770CD (TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9 * __this, float ___time0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___timeOffsets1, const RuntimeMethod* method)
{
	{
		// return new Vector3(
		//     X.GetValueAt(time, timeOffsets.x),
		//     Y.GetValueAt(time, timeOffsets.y),
		//     Z.GetValueAt(time, timeOffsets.z));
		NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74 * L_0 = __this->get_address_of_X_0();
		float L_1 = ___time0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___timeOffsets1;
		float L_3 = L_2.get_x_2();
		float L_4;
		L_4 = NoiseParams_GetValueAt_mA2C1E6FA7AE9AB3FC9A51024E0D474E5C8596610((NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74 *)L_0, L_1, L_3, /*hidden argument*/NULL);
		NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74 * L_5 = __this->get_address_of_Y_1();
		float L_6 = ___time0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___timeOffsets1;
		float L_8 = L_7.get_y_3();
		float L_9;
		L_9 = NoiseParams_GetValueAt_mA2C1E6FA7AE9AB3FC9A51024E0D474E5C8596610((NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74 *)L_5, L_6, L_8, /*hidden argument*/NULL);
		NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74 * L_10 = __this->get_address_of_Z_2();
		float L_11 = ___time0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = ___timeOffsets1;
		float L_13 = L_12.get_z_4();
		float L_14;
		L_14 = NoiseParams_GetValueAt_mA2C1E6FA7AE9AB3FC9A51024E0D474E5C8596610((NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74 *)L_10, L_11, L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), L_4, L_9, L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformNoiseParams_GetValueAt_m89FDF2289D147DC0B617426E76A78402474770CD_AdjustorThunk (RuntimeObject * __this, float ___time0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___timeOffsets1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9 * _thisAdjusted = reinterpret_cast<TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9 *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = TransformNoiseParams_GetValueAt_m89FDF2289D147DC0B617426E76A78402474770CD(_thisAdjusted, ___time0, ___timeOffsets1, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Cinemachine.TargetPositionCache/CacheCurve::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CacheCurve_get_Count_m7BE1AE49E310A7185E449EF27D9715404DB58F4D (CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE8F7A4717F2AFBB314903A66709DBC4E3A6299D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Count => m_Cache.Count;
		List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * L_0 = __this->get_m_Cache_2();
		int32_t L_1;
		L_1 = List_1_get_Count_mE8F7A4717F2AFBB314903A66709DBC4E3A6299D4_inline(L_0, /*hidden argument*/List_1_get_Count_mE8F7A4717F2AFBB314903A66709DBC4E3A6299D4_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Cinemachine.TargetPositionCache/CacheCurve::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheCurve__ctor_m9126DDC2FF162438BEF34E60AD524A2BD74E09D8 (CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * __this, float ___startTime0, float ___endTime1, float ___stepSize2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0A87900FEA9DBA7FC77FFDD29AA466E938168B94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC1537C8DF457B7721EAA10465942441865A779E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public CacheCurve(float startTime, float endTime, float stepSize)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// StepSize = stepSize;
		float L_0 = ___stepSize2;
		__this->set_StepSize_1(L_0);
		// StartTime = startTime;
		float L_1 = ___startTime0;
		__this->set_StartTime_0(L_1);
		// m_Cache = new List<Item>(Mathf.CeilToInt((StepSize * 0.5f + endTime - startTime) / StepSize));
		float L_2 = __this->get_StepSize_1();
		float L_3 = ___endTime1;
		float L_4 = ___startTime0;
		float L_5 = __this->get_StepSize_1();
		int32_t L_6;
		L_6 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_2, (float)(0.5f))), (float)L_3)), (float)L_4))/(float)L_5)), /*hidden argument*/NULL);
		List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * L_7 = (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 *)il2cpp_codegen_object_new(List_1_tC1537C8DF457B7721EAA10465942441865A779E5_il2cpp_TypeInfo_var);
		List_1__ctor_m0A87900FEA9DBA7FC77FFDD29AA466E938168B94(L_7, L_6, /*hidden argument*/List_1__ctor_m0A87900FEA9DBA7FC77FFDD29AA466E938168B94_RuntimeMethod_var);
		__this->set_m_Cache_2(L_7);
		// }
		return;
	}
}
// System.Void Cinemachine.TargetPositionCache/CacheCurve::Add(Cinemachine.TargetPositionCache/CacheCurve/Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheCurve_Add_m325C65AD39FDFBC91F4D5624B8BF7C5560B36DFF (CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * __this, Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE25CC388FC2D88F7ECD58678578FD5C2C903F66_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Add(Item item) => m_Cache.Add(item);
		List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * L_0 = __this->get_m_Cache_2();
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_1 = ___item0;
		List_1_Add_mAE25CC388FC2D88F7ECD58678578FD5C2C903F66(L_0, L_1, /*hidden argument*/List_1_Add_mAE25CC388FC2D88F7ECD58678578FD5C2C903F66_RuntimeMethod_var);
		return;
	}
}
// System.Void Cinemachine.TargetPositionCache/CacheCurve::AddUntil(Cinemachine.TargetPositionCache/CacheCurve/Item,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheCurve_AddUntil_m3613245687496AC0DC18F1EB9A6328E3F8AA203F (CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * __this, Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___item0, float ___time1, bool ___isCut2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE8F7A4717F2AFBB314903A66709DBC4E3A6299D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8FE58202E8C53418E70622C8ED2B388429124FE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	{
		// var prevIndex = m_Cache.Count - 1;
		List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * L_0 = __this->get_m_Cache_2();
		int32_t L_1;
		L_1 = List_1_get_Count_mE8F7A4717F2AFBB314903A66709DBC4E3A6299D4_inline(L_0, /*hidden argument*/List_1_get_Count_mE8F7A4717F2AFBB314903A66709DBC4E3A6299D4_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		// var prevTime = prevIndex * StepSize;
		int32_t L_2 = V_0;
		float L_3 = __this->get_StepSize_1();
		V_1 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_2)), (float)L_3));
		// var timeRange = time - StartTime - prevTime;
		float L_4 = ___time1;
		float L_5 = __this->get_StartTime_0();
		float L_6 = V_1;
		V_2 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)), (float)L_6));
		// if (isCut)
		bool L_7 = ___isCut2;
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		// for (float t = StepSize; t <= timeRange; t += StepSize)
		float L_8 = __this->get_StepSize_1();
		V_3 = L_8;
		goto IL_003f;
	}

IL_002f:
	{
		// Add(item);
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_9 = ___item0;
		CacheCurve_Add_m325C65AD39FDFBC91F4D5624B8BF7C5560B36DFF(__this, L_9, /*hidden argument*/NULL);
		// for (float t = StepSize; t <= timeRange; t += StepSize)
		float L_10 = V_3;
		float L_11 = __this->get_StepSize_1();
		V_3 = ((float)il2cpp_codegen_add((float)L_10, (float)L_11));
	}

IL_003f:
	{
		// for (float t = StepSize; t <= timeRange; t += StepSize)
		float L_12 = V_3;
		float L_13 = V_2;
		if ((((float)L_12) <= ((float)L_13)))
		{
			goto IL_002f;
		}
	}
	{
		return;
	}

IL_0044:
	{
		// var prev = m_Cache[prevIndex];
		List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * L_14 = __this->get_m_Cache_2();
		int32_t L_15 = V_0;
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_16;
		L_16 = List_1_get_Item_m8FE58202E8C53418E70622C8ED2B388429124FE8_inline(L_14, L_15, /*hidden argument*/List_1_get_Item_m8FE58202E8C53418E70622C8ED2B388429124FE8_RuntimeMethod_var);
		V_4 = L_16;
		// for (float t = StepSize; t <= timeRange; t += StepSize)
		float L_17 = __this->get_StepSize_1();
		V_5 = L_17;
		goto IL_0079;
	}

IL_005c:
	{
		// Add(Item.Lerp(prev, item, t / timeRange));
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_18 = V_4;
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_19 = ___item0;
		float L_20 = V_5;
		float L_21 = V_2;
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_22;
		L_22 = Item_Lerp_m729C3CBFCA75B42CC2799D491DEF4C17C53602DC(L_18, L_19, ((float)((float)L_20/(float)L_21)), /*hidden argument*/NULL);
		CacheCurve_Add_m325C65AD39FDFBC91F4D5624B8BF7C5560B36DFF(__this, L_22, /*hidden argument*/NULL);
		// for (float t = StepSize; t <= timeRange; t += StepSize)
		float L_23 = V_5;
		float L_24 = __this->get_StepSize_1();
		V_5 = ((float)il2cpp_codegen_add((float)L_23, (float)L_24));
	}

IL_0079:
	{
		// for (float t = StepSize; t <= timeRange; t += StepSize)
		float L_25 = V_5;
		float L_26 = V_2;
		if ((((float)L_25) <= ((float)L_26)))
		{
			goto IL_005c;
		}
	}
	{
		// }
		return;
	}
}
// Cinemachine.TargetPositionCache/CacheCurve/Item Cinemachine.TargetPositionCache/CacheCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  CacheCurve_Evaluate_m9D2DF73C6C1AF43179910C16C2249A6205429938 (CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * __this, float ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE8F7A4717F2AFBB314903A66709DBC4E3A6299D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8FE58202E8C53418E70622C8ED2B388429124FE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var numItems = m_Cache.Count;
		List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * L_0 = __this->get_m_Cache_2();
		int32_t L_1;
		L_1 = List_1_get_Count_mE8F7A4717F2AFBB314903A66709DBC4E3A6299D4_inline(L_0, /*hidden argument*/List_1_get_Count_mE8F7A4717F2AFBB314903A66709DBC4E3A6299D4_RuntimeMethod_var);
		V_0 = L_1;
		// if (numItems == 0)
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return Item.Empty;
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_3;
		L_3 = Item_get_Empty_m2209C3BE792AABD138C9A597718D01D2FF089CB3(/*hidden argument*/NULL);
		return L_3;
	}

IL_0015:
	{
		// var s = time - StartTime;
		float L_4 = ___time0;
		float L_5 = __this->get_StartTime_0();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_4, (float)L_5));
		// var index = Mathf.Clamp(Mathf.FloorToInt(s / StepSize), 0, numItems - 1);
		float L_6 = V_1;
		float L_7 = __this->get_StepSize_1();
		int32_t L_8;
		L_8 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(((float)((float)L_6/(float)L_7)), /*hidden argument*/NULL);
		int32_t L_9 = V_0;
		int32_t L_10;
		L_10 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_8, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_10;
		// var v = m_Cache[index];
		List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * L_11 = __this->get_m_Cache_2();
		int32_t L_12 = V_2;
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_13;
		L_13 = List_1_get_Item_m8FE58202E8C53418E70622C8ED2B388429124FE8_inline(L_11, L_12, /*hidden argument*/List_1_get_Item_m8FE58202E8C53418E70622C8ED2B388429124FE8_RuntimeMethod_var);
		V_3 = L_13;
		// if (index == numItems - 1)
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1))))))
		{
			goto IL_004a;
		}
	}
	{
		// return v;
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_16 = V_3;
		return L_16;
	}

IL_004a:
	{
		// return Item.Lerp(v, m_Cache[index + 1], (s - index * StepSize) / StepSize);
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_17 = V_3;
		List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * L_18 = __this->get_m_Cache_2();
		int32_t L_19 = V_2;
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_20;
		L_20 = List_1_get_Item_m8FE58202E8C53418E70622C8ED2B388429124FE8_inline(L_18, ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)), /*hidden argument*/List_1_get_Item_m8FE58202E8C53418E70622C8ED2B388429124FE8_RuntimeMethod_var);
		float L_21 = V_1;
		int32_t L_22 = V_2;
		float L_23 = __this->get_StepSize_1();
		float L_24 = __this->get_StepSize_1();
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_25;
		L_25 = Item_Lerp_m729C3CBFCA75B42CC2799D491DEF4C17C53602DC(L_17, L_20, ((float)((float)((float)il2cpp_codegen_subtract((float)L_21, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_22)), (float)L_23))))/(float)L_24)), /*hidden argument*/NULL);
		return L_25;
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
// System.Void Cinemachine.TargetPositionCache/CacheEntry::AddRawItem(System.Single,System.Boolean,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheEntry_AddRawItem_m56ADB9D380E62201025B3F4B752CDD4E90970B49 (CacheEntry_tC683B96A4235FEB735629D760FF9E5954610DAC6 * __this, float ___time0, bool ___isCut1, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m82E31B8E4FAD858C374B87C26416A623CB116DC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m56838B2A12DB31FC32841390BF3570FB1FF85C7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9514D8319A9C37531733E4D2D7B2A5E920822635_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8D9BE2D904E61F226686ABCD759CFCC1506F6079_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m17F257BBEC37D95D8195C0C91654445D1079DC7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	{
		// var endTime = time - CacheStepSize;
		float L_0 = ___time0;
		V_0 = ((float)il2cpp_codegen_subtract((float)L_0, (float)(0.0166666675f)));
		// var maxItem = RawItems.Count - 1;
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_1 = __this->get_RawItems_1();
		int32_t L_2;
		L_2 = List_1_get_Count_m9514D8319A9C37531733E4D2D7B2A5E920822635_inline(L_1, /*hidden argument*/List_1_get_Count_m9514D8319A9C37531733E4D2D7B2A5E920822635_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		// var lastToKeep = maxItem;
		int32_t L_3 = V_1;
		V_2 = L_3;
		goto IL_001e;
	}

IL_001a:
	{
		// --lastToKeep;
		int32_t L_4 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
	}

IL_001e:
	{
		// while (lastToKeep >= 0 && RawItems[lastToKeep].Time > endTime)
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_6 = __this->get_RawItems_1();
		int32_t L_7 = V_2;
		RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  L_8;
		L_8 = List_1_get_Item_m8D9BE2D904E61F226686ABCD759CFCC1506F6079_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m8D9BE2D904E61F226686ABCD759CFCC1506F6079_RuntimeMethod_var);
		float L_9 = L_8.get_Time_0();
		float L_10 = V_0;
		if ((((float)L_9) > ((float)L_10)))
		{
			goto IL_001a;
		}
	}

IL_0036:
	{
		// if (lastToKeep == maxItem)
		int32_t L_11 = V_2;
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_008a;
		}
	}
	{
		// RawItems.Add(new RecordingItem
		// {
		//     Time = time,
		//     IsCut = isCut,
		//     Item = new CacheCurve.Item { Pos = target.position, Rot = target.rotation }
		// });
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_13 = __this->get_RawItems_1();
		il2cpp_codegen_initobj((&V_3), sizeof(RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB ));
		float L_14 = ___time0;
		(&V_3)->set_Time_0(L_14);
		bool L_15 = ___isCut1;
		(&V_3)->set_IsCut_1(L_15);
		il2cpp_codegen_initobj((&V_4), sizeof(Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B ));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = ___target2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		(&V_4)->set_Pos_0(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = ___target2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19;
		L_19 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_18, /*hidden argument*/NULL);
		(&V_4)->set_Rot_1(L_19);
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_20 = V_4;
		(&V_3)->set_Item_2(L_20);
		RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  L_21 = V_3;
		List_1_Add_m82E31B8E4FAD858C374B87C26416A623CB116DC2(L_13, L_21, /*hidden argument*/List_1_Add_m82E31B8E4FAD858C374B87C26416A623CB116DC2_RuntimeMethod_var);
		// }
		return;
	}

IL_008a:
	{
		// var trimStart = lastToKeep + 2;
		int32_t L_22 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)2));
		// if (trimStart <= maxItem)
		int32_t L_23 = V_5;
		int32_t L_24 = V_1;
		if ((((int32_t)L_23) > ((int32_t)L_24)))
		{
			goto IL_00af;
		}
	}
	{
		// RawItems.RemoveRange(trimStart, RawItems.Count - trimStart);
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_25 = __this->get_RawItems_1();
		int32_t L_26 = V_5;
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_27 = __this->get_RawItems_1();
		int32_t L_28;
		L_28 = List_1_get_Count_m9514D8319A9C37531733E4D2D7B2A5E920822635_inline(L_27, /*hidden argument*/List_1_get_Count_m9514D8319A9C37531733E4D2D7B2A5E920822635_RuntimeMethod_var);
		int32_t L_29 = V_5;
		List_1_RemoveRange_m56838B2A12DB31FC32841390BF3570FB1FF85C7F(L_25, L_26, ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)L_29)), /*hidden argument*/List_1_RemoveRange_m56838B2A12DB31FC32841390BF3570FB1FF85C7F_RuntimeMethod_var);
	}

IL_00af:
	{
		// RawItems[lastToKeep + 1] = new RecordingItem
		// {
		//     Time = time,
		//     IsCut = isCut,
		//     Item = new CacheCurve.Item { Pos = target.position, Rot = target.rotation }
		// };
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_30 = __this->get_RawItems_1();
		int32_t L_31 = V_2;
		il2cpp_codegen_initobj((&V_3), sizeof(RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB ));
		float L_32 = ___time0;
		(&V_3)->set_Time_0(L_32);
		bool L_33 = ___isCut1;
		(&V_3)->set_IsCut_1(L_33);
		il2cpp_codegen_initobj((&V_4), sizeof(Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B ));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34 = ___target2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_34, /*hidden argument*/NULL);
		(&V_4)->set_Pos_0(L_35);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36 = ___target2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_37;
		L_37 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_36, /*hidden argument*/NULL);
		(&V_4)->set_Rot_1(L_37);
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_38 = V_4;
		(&V_3)->set_Item_2(L_38);
		RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  L_39 = V_3;
		List_1_set_Item_m17F257BBEC37D95D8195C0C91654445D1079DC7F(L_30, ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1)), L_39, /*hidden argument*/List_1_set_Item_m17F257BBEC37D95D8195C0C91654445D1079DC7F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Cinemachine.TargetPositionCache/CacheEntry::CreateCurves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheEntry_CreateCurves_m3C30DAF286804CB56B42102406ACE0BF891292EA (CacheEntry_tC683B96A4235FEB735629D760FF9E5954610DAC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mFE47C3DDAD2ADBAC7AB3AB8E4F1A9B78CEBF0DE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9514D8319A9C37531733E4D2D7B2A5E920822635_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8D9BE2D904E61F226686ABCD759CFCC1506F6079_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	float G_B3_0 = 0.0f;
	float G_B6_0 = 0.0f;
	CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * G_B8_0 = NULL;
	CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * G_B7_0 = NULL;
	Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * G_B9_1 = NULL;
	{
		// int maxItem = RawItems.Count - 1;
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_0 = __this->get_RawItems_1();
		int32_t L_1;
		L_1 = List_1_get_Count_m9514D8319A9C37531733E4D2D7B2A5E920822635_inline(L_0, /*hidden argument*/List_1_get_Count_m9514D8319A9C37531733E4D2D7B2A5E920822635_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		// float startTime = maxItem < 0 ? 0 : RawItems[0].Time;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_3 = __this->get_RawItems_1();
		RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  L_4;
		L_4 = List_1_get_Item_m8D9BE2D904E61F226686ABCD759CFCC1506F6079_inline(L_3, 0, /*hidden argument*/List_1_get_Item_m8D9BE2D904E61F226686ABCD759CFCC1506F6079_RuntimeMethod_var);
		float L_5 = L_4.get_Time_0();
		G_B3_0 = L_5;
		goto IL_002a;
	}

IL_0025:
	{
		G_B3_0 = (0.0f);
	}

IL_002a:
	{
		V_1 = G_B3_0;
		// float endTime = maxItem < 0 ? 0 : RawItems[maxItem].Time;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_7 = __this->get_RawItems_1();
		int32_t L_8 = V_0;
		RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  L_9;
		L_9 = List_1_get_Item_m8D9BE2D904E61F226686ABCD759CFCC1506F6079_inline(L_7, L_8, /*hidden argument*/List_1_get_Item_m8D9BE2D904E61F226686ABCD759CFCC1506F6079_RuntimeMethod_var);
		float L_10 = L_9.get_Time_0();
		G_B6_0 = L_10;
		goto IL_0047;
	}

IL_0042:
	{
		G_B6_0 = (0.0f);
	}

IL_0047:
	{
		V_2 = G_B6_0;
		// Curve = new CacheCurve(startTime, endTime, CacheStepSize);
		float L_11 = V_1;
		float L_12 = V_2;
		CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * L_13 = (CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 *)il2cpp_codegen_object_new(CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10_il2cpp_TypeInfo_var);
		CacheCurve__ctor_m9126DDC2FF162438BEF34E60AD524A2BD74E09D8(L_13, L_11, L_12, (0.0166666675f), /*hidden argument*/NULL);
		__this->set_Curve_0(L_13);
		// Curve.Add(maxItem < 0 ? CacheCurve.Item.Empty : RawItems[0].Item);
		CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * L_14 = __this->get_Curve_0();
		int32_t L_15 = V_0;
		G_B7_0 = L_14;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			G_B8_0 = L_14;
			goto IL_0077;
		}
	}
	{
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_16 = __this->get_RawItems_1();
		RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  L_17;
		L_17 = List_1_get_Item_m8D9BE2D904E61F226686ABCD759CFCC1506F6079_inline(L_16, 0, /*hidden argument*/List_1_get_Item_m8D9BE2D904E61F226686ABCD759CFCC1506F6079_RuntimeMethod_var);
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_18 = L_17.get_Item_2();
		G_B9_0 = L_18;
		G_B9_1 = G_B7_0;
		goto IL_007c;
	}

IL_0077:
	{
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_19;
		L_19 = Item_get_Empty_m2209C3BE792AABD138C9A597718D01D2FF089CB3(/*hidden argument*/NULL);
		G_B9_0 = L_19;
		G_B9_1 = G_B8_0;
	}

IL_007c:
	{
		CacheCurve_Add_m325C65AD39FDFBC91F4D5624B8BF7C5560B36DFF(G_B9_1, G_B9_0, /*hidden argument*/NULL);
		// for (int i = 1; i <= maxItem; ++i)
		V_3 = 1;
		goto IL_00c7;
	}

IL_0085:
	{
		// Curve.AddUntil(RawItems[i].Item, RawItems[i].Time, RawItems[i].IsCut);
		CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * L_20 = __this->get_Curve_0();
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_21 = __this->get_RawItems_1();
		int32_t L_22 = V_3;
		RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  L_23;
		L_23 = List_1_get_Item_m8D9BE2D904E61F226686ABCD759CFCC1506F6079_inline(L_21, L_22, /*hidden argument*/List_1_get_Item_m8D9BE2D904E61F226686ABCD759CFCC1506F6079_RuntimeMethod_var);
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_24 = L_23.get_Item_2();
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_25 = __this->get_RawItems_1();
		int32_t L_26 = V_3;
		RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  L_27;
		L_27 = List_1_get_Item_m8D9BE2D904E61F226686ABCD759CFCC1506F6079_inline(L_25, L_26, /*hidden argument*/List_1_get_Item_m8D9BE2D904E61F226686ABCD759CFCC1506F6079_RuntimeMethod_var);
		float L_28 = L_27.get_Time_0();
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_29 = __this->get_RawItems_1();
		int32_t L_30 = V_3;
		RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  L_31;
		L_31 = List_1_get_Item_m8D9BE2D904E61F226686ABCD759CFCC1506F6079_inline(L_29, L_30, /*hidden argument*/List_1_get_Item_m8D9BE2D904E61F226686ABCD759CFCC1506F6079_RuntimeMethod_var);
		bool L_32 = L_31.get_IsCut_1();
		CacheCurve_AddUntil_m3613245687496AC0DC18F1EB9A6328E3F8AA203F(L_20, L_24, L_28, L_32, /*hidden argument*/NULL);
		// for (int i = 1; i <= maxItem; ++i)
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00c7:
	{
		// for (int i = 1; i <= maxItem; ++i)
		int32_t L_34 = V_3;
		int32_t L_35 = V_0;
		if ((((int32_t)L_34) <= ((int32_t)L_35)))
		{
			goto IL_0085;
		}
	}
	{
		// RawItems.Clear();
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_36 = __this->get_RawItems_1();
		List_1_Clear_mFE47C3DDAD2ADBAC7AB3AB8E4F1A9B78CEBF0DE6(L_36, /*hidden argument*/List_1_Clear_mFE47C3DDAD2ADBAC7AB3AB8E4F1A9B78CEBF0DE6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Cinemachine.TargetPositionCache/CacheEntry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheEntry__ctor_mF5B26181E6FBFC00701BC6A362BEA3416815FD2B (CacheEntry_tC683B96A4235FEB735629D760FF9E5954610DAC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m786B3FBB5FFA2F06FB278182CEA118E62A2DA334_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAED568015081230FCEC357C56CB10520C53903F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<RecordingItem> RawItems = new List<RecordingItem>();
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_0 = (List_1_tAED568015081230FCEC357C56CB10520C53903F7 *)il2cpp_codegen_object_new(List_1_tAED568015081230FCEC357C56CB10520C53903F7_il2cpp_TypeInfo_var);
		List_1__ctor_m786B3FBB5FFA2F06FB278182CEA118E62A2DA334(L_0, /*hidden argument*/List_1__ctor_m786B3FBB5FFA2F06FB278182CEA118E62A2DA334_RuntimeMethod_var);
		__this->set_RawItems_1(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Cinemachine.TargetPositionCache/TimeRange::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeRange_get_IsEmpty_m0EBE2CFDA395E03444770956D336B17D2CC676D0 (TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C * __this, const RuntimeMethod* method)
{
	{
		// public bool IsEmpty => End < Start;
		float L_0 = __this->get_End_1();
		float L_1 = __this->get_Start_0();
		return (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool TimeRange_get_IsEmpty_m0EBE2CFDA395E03444770956D336B17D2CC676D0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C * _thisAdjusted = reinterpret_cast<TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C *>(__this + _offset);
	bool _returnValue;
	_returnValue = TimeRange_get_IsEmpty_m0EBE2CFDA395E03444770956D336B17D2CC676D0(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Cinemachine.TargetPositionCache/TimeRange::Contains(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeRange_Contains_m2FE15B3333F2883C0580220A5D3FDE954533A8FA (TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C * __this, float ___time0, const RuntimeMethod* method)
{
	{
		// public bool Contains(float time) => time >= Start && time <= End;
		float L_0 = ___time0;
		float L_1 = __this->get_Start_0();
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0016;
		}
	}
	{
		float L_2 = ___time0;
		float L_3 = __this->get_End_1();
		return (bool)((((int32_t)((!(((float)L_2) <= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool TimeRange_Contains_m2FE15B3333F2883C0580220A5D3FDE954533A8FA_AdjustorThunk (RuntimeObject * __this, float ___time0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C * _thisAdjusted = reinterpret_cast<TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C *>(__this + _offset);
	bool _returnValue;
	_returnValue = TimeRange_Contains_m2FE15B3333F2883C0580220A5D3FDE954533A8FA(_thisAdjusted, ___time0, method);
	return _returnValue;
}
// Cinemachine.TargetPositionCache/TimeRange Cinemachine.TargetPositionCache/TimeRange::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C  TimeRange_get_Empty_m273B20F7E14B9A0670F209E17316EC4EBDD7D053 (const RuntimeMethod* method)
{
	TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// { get => new TimeRange { Start = float.MaxValue, End = float.MinValue }; }
		il2cpp_codegen_initobj((&V_0), sizeof(TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C ));
		(&V_0)->set_Start_0(((std::numeric_limits<float>::max)()));
		(&V_0)->set_End_1((-(std::numeric_limits<float>::max)()));
		TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C  L_0 = V_0;
		return L_0;
	}
}
// System.Void Cinemachine.TargetPositionCache/TimeRange::Include(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeRange_Include_m98B368672B3FAD811027079C3EA8236914D3729E (TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C * __this, float ___time0, const RuntimeMethod* method)
{
	{
		// Start = Mathf.Min(Start, time);
		float L_0 = __this->get_Start_0();
		float L_1 = ___time0;
		float L_2;
		L_2 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_0, L_1, /*hidden argument*/NULL);
		__this->set_Start_0(L_2);
		// End = Mathf.Max(End, time);
		float L_3 = __this->get_End_1();
		float L_4 = ___time0;
		float L_5;
		L_5 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_3, L_4, /*hidden argument*/NULL);
		__this->set_End_1(L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TimeRange_Include_m98B368672B3FAD811027079C3EA8236914D3729E_AdjustorThunk (RuntimeObject * __this, float ___time0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C * _thisAdjusted = reinterpret_cast<TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C *>(__this + _offset);
	TimeRange_Include_m98B368672B3FAD811027079C3EA8236914D3729E(_thisAdjusted, ___time0, method);
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
// Cinemachine.UpdateTracker/UpdateClock Cinemachine.UpdateTracker/UpdateStatus::get_PreferredUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UpdateStatus_get_PreferredUpdate_mF6224BC9B52B95B06ECD82F3CCDAC7B0994B9B6F (UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * __this, const RuntimeMethod* method)
{
	{
		// public UpdateClock PreferredUpdate { get; private set; }
		int32_t L_0 = __this->get_U3CPreferredUpdateU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Cinemachine.UpdateTracker/UpdateStatus::set_PreferredUpdate(Cinemachine.UpdateTracker/UpdateClock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateStatus_set_PreferredUpdate_m0D163727BB4C16214C9A22D74656ED09CEF6C929 (UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public UpdateClock PreferredUpdate { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CPreferredUpdateU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Void Cinemachine.UpdateTracker/UpdateStatus::.ctor(System.Int32,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateStatus__ctor_mDEAE275BFECF3D63AE2A93D74EABACD19FA21724 (UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * __this, int32_t ___currentFrame0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___pos1, const RuntimeMethod* method)
{
	{
		// public UpdateStatus(int currentFrame, Matrix4x4 pos)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// windowStart = currentFrame;
		int32_t L_0 = ___currentFrame0;
		__this->set_windowStart_1(L_0);
		// lastFrameUpdated = Time.frameCount;
		int32_t L_1;
		L_1 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0(/*hidden argument*/NULL);
		__this->set_lastFrameUpdated_5(L_1);
		// PreferredUpdate = UpdateClock.Late;
		UpdateStatus_set_PreferredUpdate_m0D163727BB4C16214C9A22D74656ED09CEF6C929_inline(__this, 1, /*hidden argument*/NULL);
		// lastPos = pos;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_2 = ___pos1;
		__this->set_lastPos_6(L_2);
		// }
		return;
	}
}
// System.Void Cinemachine.UpdateTracker/UpdateStatus::OnUpdate(System.Int32,Cinemachine.UpdateTracker/UpdateClock,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateStatus_OnUpdate_m22DED61941774ECFB0119BAAE3BD2C164D39D521 (UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * __this, int32_t ___currentFrame0, int32_t ___currentClock1, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___pos2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * G_B15_0 = NULL;
	UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * G_B14_0 = NULL;
	int32_t G_B16_0 = 0;
	UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * G_B16_1 = NULL;
	UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * G_B18_0 = NULL;
	UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * G_B19_1 = NULL;
	{
		// if (lastPos == pos)
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0 = __this->get_lastPos_6();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_1 = ___pos2;
		bool L_2;
		L_2 = Matrix4x4_op_Equality_mFCC23863C7DB90A5FEFA5F1D9ECD511D21E8C846(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (currentClock == UpdateClock.Late)
		int32_t L_3 = ___currentClock1;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0023;
		}
	}
	{
		// ++numWindowLateUpdateMoves;
		int32_t L_4 = __this->get_numWindowLateUpdateMoves_2();
		__this->set_numWindowLateUpdateMoves_2(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		goto IL_003a;
	}

IL_0023:
	{
		// else if (lastFrameUpdated != currentFrame) // only count 1 per rendered frame
		int32_t L_5 = __this->get_lastFrameUpdated_5();
		int32_t L_6 = ___currentFrame0;
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_003a;
		}
	}
	{
		// ++numWindowFixedUpdateMoves;
		int32_t L_7 = __this->get_numWindowFixedUpdateMoves_3();
		__this->set_numWindowFixedUpdateMoves_3(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
	}

IL_003a:
	{
		// lastPos = pos;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_8 = ___pos2;
		__this->set_lastPos_6(L_8);
		// if (numWindowFixedUpdateMoves > 3 && numWindowLateUpdateMoves < numWindowFixedUpdateMoves / 3)
		int32_t L_9 = __this->get_numWindowFixedUpdateMoves_3();
		if ((((int32_t)L_9) <= ((int32_t)3)))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_10 = __this->get_numWindowLateUpdateMoves_2();
		int32_t L_11 = __this->get_numWindowFixedUpdateMoves_3();
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)((int32_t)L_11/(int32_t)3)))))
		{
			goto IL_005e;
		}
	}
	{
		// choice = UpdateClock.Fixed;
		V_0 = 0;
		goto IL_0060;
	}

IL_005e:
	{
		// choice =  UpdateClock.Late;
		V_0 = 1;
	}

IL_0060:
	{
		// if (numWindows == 0)
		int32_t L_12 = __this->get_numWindows_4();
		if (L_12)
		{
			goto IL_006f;
		}
	}
	{
		// PreferredUpdate = choice;
		int32_t L_13 = V_0;
		UpdateStatus_set_PreferredUpdate_m0D163727BB4C16214C9A22D74656ED09CEF6C929_inline(__this, L_13, /*hidden argument*/NULL);
	}

IL_006f:
	{
		// if (windowStart + kWindowSize <= currentFrame)
		int32_t L_14 = __this->get_windowStart_1();
		int32_t L_15 = ___currentFrame0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)((int32_t)30)))) > ((int32_t)L_15)))
		{
			goto IL_00bc;
		}
	}
	{
		// PreferredUpdate = choice;
		int32_t L_16 = V_0;
		UpdateStatus_set_PreferredUpdate_m0D163727BB4C16214C9A22D74656ED09CEF6C929_inline(__this, L_16, /*hidden argument*/NULL);
		// ++numWindows;
		int32_t L_17 = __this->get_numWindows_4();
		__this->set_numWindows_4(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)));
		// windowStart = currentFrame;
		int32_t L_18 = ___currentFrame0;
		__this->set_windowStart_1(L_18);
		// numWindowLateUpdateMoves = (PreferredUpdate == UpdateClock.Late) ? 1 : 0;
		int32_t L_19;
		L_19 = UpdateStatus_get_PreferredUpdate_mF6224BC9B52B95B06ECD82F3CCDAC7B0994B9B6F_inline(__this, /*hidden argument*/NULL);
		G_B14_0 = __this;
		if ((((int32_t)L_19) == ((int32_t)1)))
		{
			G_B15_0 = __this;
			goto IL_00a4;
		}
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_0;
		goto IL_00a5;
	}

IL_00a4:
	{
		G_B16_0 = 1;
		G_B16_1 = G_B15_0;
	}

IL_00a5:
	{
		G_B16_1->set_numWindowLateUpdateMoves_2(G_B16_0);
		// numWindowFixedUpdateMoves = (PreferredUpdate == UpdateClock.Fixed) ? 1 : 0;
		int32_t L_20;
		L_20 = UpdateStatus_get_PreferredUpdate_mF6224BC9B52B95B06ECD82F3CCDAC7B0994B9B6F_inline(__this, /*hidden argument*/NULL);
		G_B17_0 = __this;
		if (!L_20)
		{
			G_B18_0 = __this;
			goto IL_00b6;
		}
	}
	{
		G_B19_0 = 0;
		G_B19_1 = G_B17_0;
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B19_0 = 1;
		G_B19_1 = G_B18_0;
	}

IL_00b7:
	{
		G_B19_1->set_numWindowFixedUpdateMoves_3(G_B19_0);
	}

IL_00bc:
	{
		// }
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
// System.Void Cinemachine.CinemachineTriggerAction/ActionSettings/TriggerEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerEvent__ctor_m1B0E4D0D8DD5D925A7B5F502DECF073FBA41C266 (TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B * __this, const RuntimeMethod* method)
{
	{
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(__this, /*hidden argument*/NULL);
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
// Cinemachine.TargetPositionCache/CacheCurve/Item Cinemachine.TargetPositionCache/CacheCurve/Item::Lerp(Cinemachine.TargetPositionCache/CacheCurve/Item,Cinemachine.TargetPositionCache/CacheCurve/Item,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  Item_Lerp_m729C3CBFCA75B42CC2799D491DEF4C17C53602DC (Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___a0, Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___b1, float ___t2, const RuntimeMethod* method)
{
	Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Item
		// {
		//     Pos = Vector3.LerpUnclamped(a.Pos, b.Pos, t),
		//     Rot = Quaternion.SlerpUnclamped(a.Rot, b.Rot, t)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B ));
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_0 = ___a0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = L_0.get_Pos_0();
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_2 = ___b1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = L_2.get_Pos_0();
		float L_4 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_LerpUnclamped_m7096F8833FE606F7DB0E39E42D4C6FD1438CF73F_inline(L_1, L_3, L_4, /*hidden argument*/NULL);
		(&V_0)->set_Pos_0(L_5);
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_6 = ___a0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7 = L_6.get_Rot_1();
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_8 = ___b1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9 = L_8.get_Rot_1();
		float L_10 = ___t2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Quaternion_SlerpUnclamped_m654DA9A5B418C2E18B2794BC0CE92E52DF96151F(L_7, L_9, L_10, /*hidden argument*/NULL);
		(&V_0)->set_Rot_1(L_11);
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_12 = V_0;
		return L_12;
	}
}
// Cinemachine.TargetPositionCache/CacheCurve/Item Cinemachine.TargetPositionCache/CacheCurve/Item::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  Item_get_Empty_m2209C3BE792AABD138C9A597718D01D2FF089CB3 (const RuntimeMethod* method)
{
	Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static Item Empty => new Item { Rot = Quaternion.identity };
		il2cpp_codegen_initobj((&V_0), sizeof(Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B ));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0;
		L_0 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		(&V_0)->set_Rot_1(L_0);
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_1 = V_0;
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
// Conversion methods for marshalling of: Cinemachine.TargetPositionCache/CacheEntry/RecordingItem
IL2CPP_EXTERN_C void RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshal_pinvoke(const RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB& unmarshaled, RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshaled_pinvoke& marshaled)
{
	marshaled.___Time_0 = unmarshaled.get_Time_0();
	marshaled.___IsCut_1 = static_cast<int32_t>(unmarshaled.get_IsCut_1());
	marshaled.___Item_2 = unmarshaled.get_Item_2();
}
IL2CPP_EXTERN_C void RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshal_pinvoke_back(const RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshaled_pinvoke& marshaled, RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB& unmarshaled)
{
	float unmarshaled_Time_temp_0 = 0.0f;
	unmarshaled_Time_temp_0 = marshaled.___Time_0;
	unmarshaled.set_Time_0(unmarshaled_Time_temp_0);
	bool unmarshaled_IsCut_temp_1 = false;
	unmarshaled_IsCut_temp_1 = static_cast<bool>(marshaled.___IsCut_1);
	unmarshaled.set_IsCut_1(unmarshaled_IsCut_temp_1);
	Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  unmarshaled_Item_temp_2;
	memset((&unmarshaled_Item_temp_2), 0, sizeof(unmarshaled_Item_temp_2));
	unmarshaled_Item_temp_2 = marshaled.___Item_2;
	unmarshaled.set_Item_2(unmarshaled_Item_temp_2);
}
// Conversion method for clean up from marshalling of: Cinemachine.TargetPositionCache/CacheEntry/RecordingItem
IL2CPP_EXTERN_C void RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshal_pinvoke_cleanup(RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Cinemachine.TargetPositionCache/CacheEntry/RecordingItem
IL2CPP_EXTERN_C void RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshal_com(const RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB& unmarshaled, RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshaled_com& marshaled)
{
	marshaled.___Time_0 = unmarshaled.get_Time_0();
	marshaled.___IsCut_1 = static_cast<int32_t>(unmarshaled.get_IsCut_1());
	marshaled.___Item_2 = unmarshaled.get_Item_2();
}
IL2CPP_EXTERN_C void RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshal_com_back(const RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshaled_com& marshaled, RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB& unmarshaled)
{
	float unmarshaled_Time_temp_0 = 0.0f;
	unmarshaled_Time_temp_0 = marshaled.___Time_0;
	unmarshaled.set_Time_0(unmarshaled_Time_temp_0);
	bool unmarshaled_IsCut_temp_1 = false;
	unmarshaled_IsCut_temp_1 = static_cast<bool>(marshaled.___IsCut_1);
	unmarshaled.set_IsCut_1(unmarshaled_IsCut_temp_1);
	Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  unmarshaled_Item_temp_2;
	memset((&unmarshaled_Item_temp_2), 0, sizeof(unmarshaled_Item_temp_2));
	unmarshaled_Item_temp_2 = marshaled.___Item_2;
	unmarshaled.set_Item_2(unmarshaled_Item_temp_2);
}
// Conversion method for clean up from marshalling of: Cinemachine.TargetPositionCache/CacheEntry/RecordingItem
IL2CPP_EXTERN_C void RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshal_com_cleanup(RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CinemachineVirtualCameraBase_get_Priority_m56656A6C1F3F6EDABE61AC85E1BA8C638B470310_inline (CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * __this, const RuntimeMethod* method)
{
	{
		// public int Priority { get { return m_Priority; } set { m_Priority = value; } }
		int32_t L_0 = __this->get_m_Priority_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CinemachineVirtualCameraBase_set_Priority_m6C180B742F19E669D648B6D1BE4D9D9C5824962B_inline (CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Priority { get { return m_Priority; } set { m_Priority = value; } }
		int32_t L_0 = ___value0;
		__this->set_m_Priority_9(L_0);
		// public int Priority { get { return m_Priority; } set { m_Priority = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UpdateStatus_set_PreferredUpdate_m0D163727BB4C16214C9A22D74656ED09CEF6C929_inline (UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public UpdateClock PreferredUpdate { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CPreferredUpdateU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UpdateStatus_get_PreferredUpdate_mF6224BC9B52B95B06ECD82F3CCDAC7B0994B9B6F_inline (UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * __this, const RuntimeMethod* method)
{
	{
		// public UpdateClock PreferredUpdate { get; private set; }
		int32_t L_0 = __this->get_U3CPreferredUpdateU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_LerpUnclamped_m7096F8833FE606F7DB0E39E42D4C6FD1438CF73F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_x_2();
		float L_6 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___a0;
		float L_8 = L_7.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___b1;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___a0;
		float L_12 = L_11.get_y_3();
		float L_13 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = ___a0;
		float L_15 = L_14.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___b1;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___a0;
		float L_19 = L_18.get_z_4();
		float L_20 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_21), ((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_5)), (float)L_6)))), ((float)il2cpp_codegen_add((float)L_8, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_10, (float)L_12)), (float)L_13)))), ((float)il2cpp_codegen_add((float)L_15, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_17, (float)L_19)), (float)L_20)))), /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_004b;
	}

IL_004b:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_0;
		return L_22;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE8F7A4717F2AFBB314903A66709DBC4E3A6299D4_gshared_inline (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  List_1_get_Item_m8FE58202E8C53418E70622C8ED2B388429124FE8_gshared_inline (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ItemU5BU5D_t1108E169C548FBD6E94B6418A98483F93C2FB3E8* L_2 = (ItemU5BU5D_t1108E169C548FBD6E94B6418A98483F93C2FB3E8*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ItemU5BU5D_t1108E169C548FBD6E94B6418A98483F93C2FB3E8*)L_2, (int32_t)L_3);
		return (Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9514D8319A9C37531733E4D2D7B2A5E920822635_gshared_inline (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  List_1_get_Item_m8D9BE2D904E61F226686ABCD759CFCC1506F6079_gshared_inline (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		RecordingItemU5BU5D_t519137B584A64E57F8188DDEE96C7A40220E40F5* L_2 = (RecordingItemU5BU5D_t519137B584A64E57F8188DDEE96C7A40220E40F5*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((RecordingItemU5BU5D_t519137B584A64E57F8188DDEE96C7A40220E40F5*)L_2, (int32_t)L_3);
		return (RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB )L_4;
	}
}
