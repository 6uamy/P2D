﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Func`2<System.Byte[],System.Byte[]>
struct Func_2_tA6029660173C1ADC5C0AA4FA8F0DBC64BF97B683;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Collections.Generic.IEnumerable`1<System.Byte[]>
struct IEnumerable_1_t9B09E145338E5053E03FE6190E5D1262CF40AA35;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_t87C38B0EE9F1DE9AFC8F366EEAE5D497C061B4E1;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF;
// System.Collections.Generic.List`1<Nethereum.RLP.IRLPElement>
struct List_1_t6F3D6F77A101A97D1A5DC7D4CD3E7739BAD0C3B8;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Nethereum.RLP.IRLPElement[]
struct IRLPElementU5BU5D_t2E74B5CAD520ECA0714871CCBF11070F4B5B29FF;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Nethereum.RLP.IRLPElement
struct IRLPElement_tC90CEA4BD23C6E2530377CB34156C9CBA4913D20;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Nethereum.RLP.RLP
struct RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64;
// Nethereum.RLP.RLPCollection
struct RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA;
// Nethereum.RLP.RLPItem
struct RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429;
// Nethereum.RLP.RLPStringFormatter
struct RLPStringFormatter_t28CF54C938D95492CB4EC815F634A39CA15F3F3D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tA6029660173C1ADC5C0AA4FA8F0DBC64BF97B683_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRLPElement_tC90CEA4BD23C6E2530377CB34156C9CBA4913D20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6F3D6F77A101A97D1A5DC7D4CD3E7739BAD0C3B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4A93D7BBDC8CA9F19676F72DC234545AA41CF9CC;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral9E22D0F7A2F97DEE1B8F2A283E739C3B4560BA62;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m7A94EF9E1AE7D822BB6DD9EF50C106C3D8D9C54C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Reverse_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m41876E4876C765E5B1C7BF3D513B25006675B770_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_TisByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_mE92BD3BD8560A83180411588DA1495E4575390D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_mD4847AB65D57F96B49C3A687F685A1D593A10C2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m5B7AF9E58031B16D99774DC0E0C6D179985A083C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mAADAE7D729DA24D985DB0A4B803E5047B53D04DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mEE3A264EA4352D0C16E53201335BB812629BAADE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8196DA7B81F812202DB8521F5AE2EAD9C1A4377C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m0B8BCFB15D3B9361BA55525E79701EFC85E3B911_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5A70E7CF801E7EF2BB8123012AA1E2A6F9C907DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mE03D5A19A29D0F2D85487458BD6BC22769F3D8FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_m181CEDD9EBF190E7DA8FE6C75C842B20FB87BE18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mA08128A0A69B255E658942497548F085BEB36074_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m126B99A931757B74D1CFC5711550AE84BFC17998_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC74F8340E150B8F9520188937677421C55AF5C05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1667AACAC2BBB533E01219BAF70DFA59378BC908_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RLPStringFormatter_Format_mECD8D95C8B72A2C09B4A82C4934E1ECC948297EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RLP_Decode_mFC376E253E7FA75D45C23C6E23BFE63362D061EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RLP_EncodeElement_mC5B71719FB385709D3E669C582D9C2E4DB38587A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t0D8BD706A1DDFDFF6F3D1087967B8E05FCBC6C09 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE, ____items_1)); }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* get__items_1() const { return ____items_1; }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_StaticFields, ____emptyArray_5)); }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Byte>
struct List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____items_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__items_1() const { return ____items_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_StaticFields, ____emptyArray_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Nethereum.RLP.IRLPElement>
struct List_1_t6F3D6F77A101A97D1A5DC7D4CD3E7739BAD0C3B8  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IRLPElementU5BU5D_t2E74B5CAD520ECA0714871CCBF11070F4B5B29FF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6F3D6F77A101A97D1A5DC7D4CD3E7739BAD0C3B8, ____items_1)); }
	inline IRLPElementU5BU5D_t2E74B5CAD520ECA0714871CCBF11070F4B5B29FF* get__items_1() const { return ____items_1; }
	inline IRLPElementU5BU5D_t2E74B5CAD520ECA0714871CCBF11070F4B5B29FF** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IRLPElementU5BU5D_t2E74B5CAD520ECA0714871CCBF11070F4B5B29FF* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6F3D6F77A101A97D1A5DC7D4CD3E7739BAD0C3B8, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6F3D6F77A101A97D1A5DC7D4CD3E7739BAD0C3B8, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6F3D6F77A101A97D1A5DC7D4CD3E7739BAD0C3B8, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6F3D6F77A101A97D1A5DC7D4CD3E7739BAD0C3B8_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IRLPElementU5BU5D_t2E74B5CAD520ECA0714871CCBF11070F4B5B29FF* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6F3D6F77A101A97D1A5DC7D4CD3E7739BAD0C3B8_StaticFields, ____emptyArray_5)); }
	inline IRLPElementU5BU5D_t2E74B5CAD520ECA0714871CCBF11070F4B5B29FF* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IRLPElementU5BU5D_t2E74B5CAD520ECA0714871CCBF11070F4B5B29FF** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IRLPElementU5BU5D_t2E74B5CAD520ECA0714871CCBF11070F4B5B29FF* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.BitConverter
struct BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654  : public RuntimeObject
{
public:

public:
};

struct BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields
{
public:
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_0;

public:
	inline static int32_t get_offset_of_IsLittleEndian_0() { return static_cast<int32_t>(offsetof(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields, ___IsLittleEndian_0)); }
	inline bool get_IsLittleEndian_0() const { return ___IsLittleEndian_0; }
	inline bool* get_address_of_IsLittleEndian_0() { return &___IsLittleEndian_0; }
	inline void set_IsLittleEndian_0(bool value)
	{
		___IsLittleEndian_0 = value;
	}
};


// Nethereum.RLP.ConvertorForRLPEncodingExtensions
struct ConvertorForRLPEncodingExtensions_tBDB3DC55C028791684FC60C5CF18E21B027B4834  : public RuntimeObject
{
public:

public:
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// Nethereum.RLP.RLP
struct RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64  : public RuntimeObject
{
public:

public:
};

struct RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_StaticFields
{
public:
	// System.Byte[] Nethereum.RLP.RLP::EMPTY_BYTE_ARRAY
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___EMPTY_BYTE_ARRAY_5;
	// System.Byte[] Nethereum.RLP.RLP::ZERO_BYTE_ARRAY
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ZERO_BYTE_ARRAY_6;

public:
	inline static int32_t get_offset_of_EMPTY_BYTE_ARRAY_5() { return static_cast<int32_t>(offsetof(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_StaticFields, ___EMPTY_BYTE_ARRAY_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_EMPTY_BYTE_ARRAY_5() const { return ___EMPTY_BYTE_ARRAY_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_EMPTY_BYTE_ARRAY_5() { return &___EMPTY_BYTE_ARRAY_5; }
	inline void set_EMPTY_BYTE_ARRAY_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___EMPTY_BYTE_ARRAY_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EMPTY_BYTE_ARRAY_5), (void*)value);
	}

	inline static int32_t get_offset_of_ZERO_BYTE_ARRAY_6() { return static_cast<int32_t>(offsetof(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_StaticFields, ___ZERO_BYTE_ARRAY_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_ZERO_BYTE_ARRAY_6() const { return ___ZERO_BYTE_ARRAY_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_ZERO_BYTE_ARRAY_6() { return &___ZERO_BYTE_ARRAY_6; }
	inline void set_ZERO_BYTE_ARRAY_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___ZERO_BYTE_ARRAY_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ZERO_BYTE_ARRAY_6), (void*)value);
	}
};


// Nethereum.RLP.RLPItem
struct RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429  : public RuntimeObject
{
public:
	// System.Byte[] Nethereum.RLP.RLPItem::_rlpData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____rlpData_0;

public:
	inline static int32_t get_offset_of__rlpData_0() { return static_cast<int32_t>(offsetof(RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429, ____rlpData_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__rlpData_0() const { return ____rlpData_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__rlpData_0() { return &____rlpData_0; }
	inline void set__rlpData_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____rlpData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rlpData_0), (void*)value);
	}
};


// Nethereum.RLP.RLPStringFormatter
struct RLPStringFormatter_t28CF54C938D95492CB4EC815F634A39CA15F3F3D  : public RuntimeObject
{
public:

public:
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

// System.Collections.Generic.List`1/Enumerator<Nethereum.RLP.IRLPElement>
struct Enumerator_t42F42E9A1A3BF1F6EEEEF57B0651294932B714DB 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6F3D6F77A101A97D1A5DC7D4CD3E7739BAD0C3B8 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t42F42E9A1A3BF1F6EEEEF57B0651294932B714DB, ___list_0)); }
	inline List_1_t6F3D6F77A101A97D1A5DC7D4CD3E7739BAD0C3B8 * get_list_0() const { return ___list_0; }
	inline List_1_t6F3D6F77A101A97D1A5DC7D4CD3E7739BAD0C3B8 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6F3D6F77A101A97D1A5DC7D4CD3E7739BAD0C3B8 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t42F42E9A1A3BF1F6EEEEF57B0651294932B714DB, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t42F42E9A1A3BF1F6EEEEF57B0651294932B714DB, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t42F42E9A1A3BF1F6EEEEF57B0651294932B714DB, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Numerics.BigInteger
struct BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 
{
public:
	// System.Int32 System.Numerics.BigInteger::_sign
	int32_t ____sign_0;
	// System.UInt32[] System.Numerics.BigInteger::_bits
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____bits_1;

public:
	inline static int32_t get_offset_of__sign_0() { return static_cast<int32_t>(offsetof(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2, ____sign_0)); }
	inline int32_t get__sign_0() const { return ____sign_0; }
	inline int32_t* get_address_of__sign_0() { return &____sign_0; }
	inline void set__sign_0(int32_t value)
	{
		____sign_0 = value;
	}

	inline static int32_t get_offset_of__bits_1() { return static_cast<int32_t>(offsetof(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2, ____bits_1)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__bits_1() const { return ____bits_1; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__bits_1() { return &____bits_1; }
	inline void set__bits_1(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____bits_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bits_1), (void*)value);
	}
};

struct BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_StaticFields
{
public:
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnMinInt
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___s_bnMinInt_2;
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnOneInt
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___s_bnOneInt_3;
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnZeroInt
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___s_bnZeroInt_4;
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnMinusOneInt
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___s_bnMinusOneInt_5;
	// System.Byte[] System.Numerics.BigInteger::s_success
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___s_success_6;

public:
	inline static int32_t get_offset_of_s_bnMinInt_2() { return static_cast<int32_t>(offsetof(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_StaticFields, ___s_bnMinInt_2)); }
	inline BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  get_s_bnMinInt_2() const { return ___s_bnMinInt_2; }
	inline BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 * get_address_of_s_bnMinInt_2() { return &___s_bnMinInt_2; }
	inline void set_s_bnMinInt_2(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  value)
	{
		___s_bnMinInt_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_bnMinInt_2))->____bits_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_s_bnOneInt_3() { return static_cast<int32_t>(offsetof(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_StaticFields, ___s_bnOneInt_3)); }
	inline BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  get_s_bnOneInt_3() const { return ___s_bnOneInt_3; }
	inline BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 * get_address_of_s_bnOneInt_3() { return &___s_bnOneInt_3; }
	inline void set_s_bnOneInt_3(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  value)
	{
		___s_bnOneInt_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_bnOneInt_3))->____bits_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_s_bnZeroInt_4() { return static_cast<int32_t>(offsetof(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_StaticFields, ___s_bnZeroInt_4)); }
	inline BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  get_s_bnZeroInt_4() const { return ___s_bnZeroInt_4; }
	inline BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 * get_address_of_s_bnZeroInt_4() { return &___s_bnZeroInt_4; }
	inline void set_s_bnZeroInt_4(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  value)
	{
		___s_bnZeroInt_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_bnZeroInt_4))->____bits_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_s_bnMinusOneInt_5() { return static_cast<int32_t>(offsetof(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_StaticFields, ___s_bnMinusOneInt_5)); }
	inline BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  get_s_bnMinusOneInt_5() const { return ___s_bnMinusOneInt_5; }
	inline BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 * get_address_of_s_bnMinusOneInt_5() { return &___s_bnMinusOneInt_5; }
	inline void set_s_bnMinusOneInt_5(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  value)
	{
		___s_bnMinusOneInt_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_bnMinusOneInt_5))->____bits_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_s_success_6() { return static_cast<int32_t>(offsetof(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_StaticFields, ___s_success_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_s_success_6() const { return ___s_success_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_s_success_6() { return &___s_success_6; }
	inline void set_s_success_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___s_success_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_success_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Numerics.BigInteger
struct BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_marshaled_pinvoke
{
	int32_t ____sign_0;
	Il2CppSafeArray/*NONE*/* ____bits_1;
};
// Native definition for COM marshalling of System.Numerics.BigInteger
struct BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_marshaled_com
{
	int32_t ____sign_0;
	Il2CppSafeArray/*NONE*/* ____bits_1;
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// Nethereum.RLP.RLPCollection
struct RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA  : public List_1_t6F3D6F77A101A97D1A5DC7D4CD3E7739BAD0C3B8
{
public:
	// System.Byte[] Nethereum.RLP.RLPCollection::<RLPData>k__BackingField
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CRLPDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CRLPDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA, ___U3CRLPDataU3Ek__BackingField_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CRLPDataU3Ek__BackingField_6() const { return ___U3CRLPDataU3Ek__BackingField_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CRLPDataU3Ek__BackingField_6() { return &___U3CRLPDataU3Ek__BackingField_6; }
	inline void set_U3CRLPDataU3Ek__BackingField_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CRLPDataU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRLPDataU3Ek__BackingField_6), (void*)value);
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

// System.Func`2<System.Byte[],System.Byte[]>
struct Func_2_tA6029660173C1ADC5C0AA4FA8F0DBC64BF97B683  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* m_Items[1];

public:
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Byte>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * Enumerable_ToList_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m5B7AF9E58031B16D99774DC0E0C6D179985A083C_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::Insert(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m181CEDD9EBF190E7DA8FE6C75C842B20FB87BE18_gshared (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, int32_t ___index0, uint8_t ___item1, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Byte>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E_gshared (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Reverse<System.Byte>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Reverse_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m41876E4876C765E5B1C7BF3D513B25006675B770_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Byte>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778_gshared (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_gshared (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, uint8_t ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Contains<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m7A94EF9E1AE7D822BB6DD9EF50C106C3D8D9C54C_gshared (RuntimeObject* ___source0, int32_t ___value1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);

// System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  BigInteger_op_Implicit_m9806E7B722243D69545EE09318A5DC364ACBC652 (int32_t ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Byte>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * Enumerable_ToList_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m5B7AF9E58031B16D99774DC0E0C6D179985A083C (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m5B7AF9E58031B16D99774DC0E0C6D179985A083C_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte>::Insert(System.Int32,!0)
inline void List_1_Insert_m181CEDD9EBF190E7DA8FE6C75C842B20FB87BE18 (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, int32_t ___index0, uint8_t ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *, int32_t, uint8_t, const RuntimeMethod*))List_1_Insert_m181CEDD9EBF190E7DA8FE6C75C842B20FB87BE18_gshared)(__this, ___index0, ___item1, method);
}
// !0[] System.Collections.Generic.List`1<System.Byte>::ToArray()
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *, const RuntimeMethod*))List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Reverse<System.Byte>(System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Reverse_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m41876E4876C765E5B1C7BF3D513B25006675B770 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Reverse_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m41876E4876C765E5B1C7BF3D513B25006675B770_gshared)(___source0, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.Byte>(System.Collections.Generic.IEnumerable`1<!!0>)
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4_gshared)(___source0, method);
}
// System.Void System.Numerics.BigInteger::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mE86998DE086542EC44032A9A6F3978C08DB8DC1D (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method);
// System.Byte[] System.Numerics.BigInteger::ToByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BigInteger_ToByteArray_mE55CBE13ADA8E09AFE2D10FF9AD2F373E4000B7B (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 * __this, const RuntimeMethod* method);
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesFromNumber(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ConvertorForRLPEncodingExtensions_ToBytesFromNumber_m67EB986DA04BBE139A47E9DF2728B4C83F541B5F (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39 (int32_t ___value0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_m4BCB9C5EF4286885A640995E44AB52E5F629E3C7 (int64_t ___value0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
inline void List_1__ctor_mC74F8340E150B8F9520188937677421C55AF5C05 (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesForRLPEncoding(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mA36CDEE758FB9959B7915791B376D78C981D6F12 (String_t* ___str0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(!0)
inline void List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904 (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0[] System.Collections.Generic.List`1<System.Byte[]>::ToArray()
inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* List_1_ToArray_mA08128A0A69B255E658942497548F085BEB36074 (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* (*) (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Numerics.BigInteger Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBigIntegerFromRLPDecoded(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_m43E59BB35F574B255795565879C62E48ADD56334 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method);
// System.Int32 System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_op_Explicit_m1914E9F2188F67F4A904260CF995121BFCF51BFA (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, const RuntimeMethod* method);
// System.Int64 System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BigInteger_op_Explicit_m0B2B8DBEEE3847FA247D38807E14314D65952ABF (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, const RuntimeMethod* method);
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::TrimZeroBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ConvertorForRLPEncodingExtensions_TrimZeroBytes_mA4FA751BFC3F28A3BA3BD0CB2642253B5DEB61DD (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
inline void List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778 (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *, const RuntimeMethod*))List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(!0)
inline void List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, uint8_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *, uint8_t, const RuntimeMethod*))List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_gshared)(__this, ___item0, method);
}
// System.Void System.Array::Reverse(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_mB87373AFAC1DBE600CAA60B79A985DD09555BF7D (RuntimeArray * ___array0, const RuntimeMethod* method);
// System.Int32 System.BitConverter::ToInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitConverter_ToInt32_m09562D0C66673FA4883600754E82F22CAFED8892 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Void Nethereum.RLP.RLPCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPCollection__ctor_mA9686FDEE84F898AB91B3EB2F42D7535F719648B (RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * __this, const RuntimeMethod* method);
// System.Void Nethereum.RLP.RLP::Decode(System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32,Nethereum.RLP.RLPCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLP_Decode_mFC376E253E7FA75D45C23C6E23BFE63362D061EB (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData0, int32_t ___level1, int32_t ___startPosition2, int32_t ___endPosition3, int32_t ___levelToIndex4, RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * ___rlpCollection5, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Nethereum.RLP.IRLPElement>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m1667AACAC2BBB533E01219BAF70DFA59378BC908_inline (List_1_t6F3D6F77A101A97D1A5DC7D4CD3E7739BAD0C3B8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t6F3D6F77A101A97D1A5DC7D4CD3E7739BAD0C3B8 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Boolean Nethereum.RLP.RLP::IsListBiggerThan55Bytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsListBiggerThan55Bytes_mF0592C771EDF822ECFC90517B0D334CC4869D900 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method);
// System.Int32 Nethereum.RLP.RLP::ProcessListBiggerThan55Bytes(System.Byte[],System.Int32,System.Int32,Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessListBiggerThan55Bytes_mFA5EA83ADF4A8F22AFA9617423F2A388616B5E22 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData0, int32_t ___level1, int32_t ___levelToIndex2, RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * ___rlpCollection3, int32_t ___currentPosition4, const RuntimeMethod* method);
// System.Boolean Nethereum.RLP.RLP::IsListLessThan55Bytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsListLessThan55Bytes_mCC035D3AE4B379C7A02C179EB8F5374A21EDC6CB (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method);
// System.Int32 Nethereum.RLP.RLP::ProcessListLessThan55Bytes(System.Byte[],System.Int32,System.Int32,Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessListLessThan55Bytes_m59A0F76BE58A3545F57AA936BE67D810CD8E0C0A (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData0, int32_t ___level1, int32_t ___levelToIndex2, RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * ___rlpCollection3, int32_t ___currentPosition4, const RuntimeMethod* method);
// System.Boolean Nethereum.RLP.RLP::IsItemBiggerThan55Bytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsItemBiggerThan55Bytes_m8FE6491B1973B76DC06CFB4AED58E6CFB9E4D95D (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method);
// System.Int32 Nethereum.RLP.RLP::ProcessItemBiggerThan55Bytes(System.Byte[],Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessItemBiggerThan55Bytes_m2C0A0646AC0BDDFBE262EAF311BBFB800A46BE50 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData0, RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * ___rlpCollection1, int32_t ___currentPosition2, const RuntimeMethod* method);
// System.Boolean Nethereum.RLP.RLP::IsItemLessThan55Bytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsItemLessThan55Bytes_mB7D20897518CA70FFAF0A31317E4A8470EB657C8 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method);
// System.Int32 Nethereum.RLP.RLP::ProcessItemLessThan55Bytes(System.Byte[],Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessItemLessThan55Bytes_mFC18443310CF5C92207283627FDF43268534E6BC (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData0, RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * ___rlpCollection1, int32_t ___currentPosition2, const RuntimeMethod* method);
// System.Boolean Nethereum.RLP.RLP::IsNullItem(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsNullItem_m880BE1320F19630E2F3E7B5C26C2515D72BC1B78 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method);
// System.Int32 Nethereum.RLP.RLP::ProcessNullItem(Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessNullItem_m381303F33DEA703A1F2537F88CFDAA46430CD38F (RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * ___rlpCollection0, int32_t ___currentPosition1, const RuntimeMethod* method);
// System.Boolean Nethereum.RLP.RLP::IsSigleByteItem(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsSigleByteItem_mE0EEC55E2AD96967E723C41D15B14F90F4B60B49 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method);
// System.Int32 Nethereum.RLP.RLP::ProcessSingleByteItem(System.Byte[],Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessSingleByteItem_mF1F27BD0357AF92117B6A439335EB1F7AE564741 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData0, RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * ___rlpCollection1, int32_t ___currentPosition2, const RuntimeMethod* method);
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::ToHex(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_ToHex_m1CC2B1935D1783A24DBC1122253E7C313B6B2900 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, bool ___prefix1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080 (Exception_t * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Nethereum.RLP.RLPItem::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPItem__ctor_m9618C61022095A7A702C078B0EE6F04ACD6CD126 (RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___rlpData0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Nethereum.RLP.IRLPElement>::Add(!0)
inline void List_1_Add_m5A70E7CF801E7EF2BB8123012AA1E2A6F9C907DE (List_1_t6F3D6F77A101A97D1A5DC7D4CD3E7739BAD0C3B8 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6F3D6F77A101A97D1A5DC7D4CD3E7739BAD0C3B8 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 Nethereum.RLP.RLP::CalculateLength(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_CalculateLength_mBA83D612720D96B4ED570832C1027343ECEA8D02 (int32_t ___lengthOfLength0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData1, int32_t ___pos2, const RuntimeMethod* method);
// System.Void Nethereum.RLP.RLPCollection::set_RLPData(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RLPCollection_set_RLPData_m4DA9D169A3963D65B6B31ACB8646531F740F9899_inline (RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method);
// System.Boolean Nethereum.RLP.RLP::IsNullOrZeroArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsNullOrZeroArray_mA2A70A115E00F57EC3AB2B22D962A6CD5EAFE27D (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, const RuntimeMethod* method);
// System.Boolean Nethereum.RLP.RLP::IsSingleZero(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsSingleZero_mE0C0CA38BCB4392BD2634FDC568E528CEB475534 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Byte[],System.Byte[]>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m0B8BCFB15D3B9361BA55525E79701EFC85E3B911 (Func_2_tA6029660173C1ADC5C0AA4FA8F0DBC64BF97B683 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tA6029660173C1ADC5C0AA4FA8F0DBC64BF97B683 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Byte[],System.Byte[]>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_TisByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_mE92BD3BD8560A83180411588DA1495E4575390D7 (RuntimeObject* ___source0, Func_2_tA6029660173C1ADC5C0AA4FA8F0DBC64BF97B683 * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tA6029660173C1ADC5C0AA4FA8F0DBC64BF97B683 *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared)(___source0, ___selector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.Byte[]>(System.Collections.Generic.IEnumerable`1<!!0>)
inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* Enumerable_ToArray_TisByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_mD4847AB65D57F96B49C3A687F685A1D593A10C2F (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared)(___source0, method);
}
// System.Byte[] Nethereum.RLP.RLP::EncodeList(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* RLP_EncodeList_mFB3D358226CB2F5DF6811E894B73FDCAB10518C8 (ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ___items0, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Contains<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>,!!0)
inline bool Enumerable_Contains_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m7A94EF9E1AE7D822BB6DD9EF50C106C3D8D9C54C (RuntimeObject* ___source0, int32_t ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Contains_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m7A94EF9E1AE7D822BB6DD9EF50C106C3D8D9C54C_gshared)(___source0, ___value1, method);
}
// System.Byte[] Nethereum.RLP.RLP::EncodeElement(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* RLP_EncodeElement_mC5B71719FB385709D3E669C582D9C2E4DB38587A (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___srcData0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Nethereum.RLP.IRLPElement>::.ctor()
inline void List_1__ctor_m126B99A931757B74D1CFC5711550AE84BFC17998 (List_1_t6F3D6F77A101A97D1A5DC7D4CD3E7739BAD0C3B8 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6F3D6F77A101A97D1A5DC7D4CD3E7739BAD0C3B8 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Byte[] Nethereum.RLP.RLPItem::GetRLPData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* RLPItem_GetRLPData_mE2FD927A04C5F14762ADAD9C7FC878469A4D3637 (RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429 * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Nethereum.RLP.IRLPElement>::GetEnumerator()
inline Enumerator_t42F42E9A1A3BF1F6EEEEF57B0651294932B714DB  List_1_GetEnumerator_mE03D5A19A29D0F2D85487458BD6BC22769F3D8FA (List_1_t6F3D6F77A101A97D1A5DC7D4CD3E7739BAD0C3B8 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t42F42E9A1A3BF1F6EEEEF57B0651294932B714DB  (*) (List_1_t6F3D6F77A101A97D1A5DC7D4CD3E7739BAD0C3B8 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Nethereum.RLP.IRLPElement>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m8196DA7B81F812202DB8521F5AE2EAD9C1A4377C_inline (Enumerator_t42F42E9A1A3BF1F6EEEEF57B0651294932B714DB * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t42F42E9A1A3BF1F6EEEEF57B0651294932B714DB *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.String Nethereum.RLP.RLPStringFormatter::Format(Nethereum.RLP.IRLPElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RLPStringFormatter_Format_mECD8D95C8B72A2C09B4A82C4934E1ECC948297EC (RuntimeObject* ___element0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Nethereum.RLP.IRLPElement>::MoveNext()
inline bool Enumerator_MoveNext_mEE3A264EA4352D0C16E53201335BB812629BAADE (Enumerator_t42F42E9A1A3BF1F6EEEEF57B0651294932B714DB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t42F42E9A1A3BF1F6EEEEF57B0651294932B714DB *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Nethereum.RLP.IRLPElement>::Dispose()
inline void Enumerator_Dispose_mAADAE7D729DA24D985DB0A4B803E5047B53D04DB (Enumerator_t42F42E9A1A3BF1F6EEEEF57B0651294932B714DB * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t42F42E9A1A3BF1F6EEEEF57B0651294932B714DB *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
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
// System.Numerics.BigInteger Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBigIntegerFromRLPDecoded(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_m43E59BB35F574B255795565879C62E48ADD56334 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Reverse_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m41876E4876C765E5B1C7BF3D513B25006675B770_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m5B7AF9E58031B16D99774DC0E0C6D179985A083C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_m181CEDD9EBF190E7DA8FE6C75C842B20FB87BE18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_1;
		L_1 = BigInteger_op_Implicit_m9806E7B722243D69545EE09318A5DC364ACBC652(0, /*hidden argument*/NULL);
		return L_1;
	}

IL_000a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		bool L_2 = ((BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bytes0;
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_4;
		L_4 = Enumerable_ToList_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m5B7AF9E58031B16D99774DC0E0C6D179985A083C((RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/Enumerable_ToList_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m5B7AF9E58031B16D99774DC0E0C6D179985A083C_RuntimeMethod_var);
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_5 = L_4;
		List_1_Insert_m181CEDD9EBF190E7DA8FE6C75C842B20FB87BE18(L_5, 0, (uint8_t)0, /*hidden argument*/List_1_Insert_m181CEDD9EBF190E7DA8FE6C75C842B20FB87BE18_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6;
		L_6 = List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E(L_5, /*hidden argument*/List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E_RuntimeMethod_var);
		RuntimeObject* L_7;
		L_7 = Enumerable_Reverse_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m41876E4876C765E5B1C7BF3D513B25006675B770((RuntimeObject*)(RuntimeObject*)L_6, /*hidden argument*/Enumerable_Reverse_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m41876E4876C765E5B1C7BF3D513B25006675B770_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4(L_7, /*hidden argument*/Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4_RuntimeMethod_var);
		___bytes0 = L_8;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___bytes0;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_10;
		memset((&L_10), 0, sizeof(L_10));
		BigInteger__ctor_mE86998DE086542EC44032A9A6F3978C08DB8DC1D((&L_10), L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0037:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = ___bytes0;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_12;
		memset((&L_12), 0, sizeof(L_12));
		BigInteger__ctor_mE86998DE086542EC44032A9A6F3978C08DB8DC1D((&L_12), L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesForRLPEncoding(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mC21AC2710A7D71B94C81D8ACAAAE89398BC7EE1E (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___bigInteger0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = BigInteger_ToByteArray_mE55CBE13ADA8E09AFE2D10FF9AD2F373E4000B7B((BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 *)(&___bigInteger0), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = ConvertorForRLPEncodingExtensions_ToBytesFromNumber_m67EB986DA04BBE139A47E9DF2728B4C83F541B5F(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesForRLPEncoding(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mA5BAD61E1F0047AD09F816D0DA251A0E415EB9CA (int32_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39(L_0, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = ConvertorForRLPEncodingExtensions_ToBytesFromNumber_m67EB986DA04BBE139A47E9DF2728B4C83F541B5F(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesForRLPEncoding(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_m118DBAFD9F811C9E086E99FA7D38808D3FA47677 (int64_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = BitConverter_GetBytes_m4BCB9C5EF4286885A640995E44AB52E5F629E3C7(L_0, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = ConvertorForRLPEncodingExtensions_ToBytesFromNumber_m67EB986DA04BBE139A47E9DF2728B4C83F541B5F(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesForRLPEncoding(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mA36CDEE758FB9959B7915791B376D78C981D6F12 (String_t* ___str0, const RuntimeMethod* method)
{
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		String_t* L_1 = ___str0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Byte[][] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesForRLPEncoding(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_m26542C18787AE67314D8E3D5CB5985F405854B5D (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___strings0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mA08128A0A69B255E658942497548F085BEB36074_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC74F8340E150B8F9520188937677421C55AF5C05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * V_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_0 = (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *)il2cpp_codegen_object_new(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_il2cpp_TypeInfo_var);
		List_1__ctor_mC74F8340E150B8F9520188937677421C55AF5C05(L_0, /*hidden argument*/List_1__ctor_mC74F8340E150B8F9520188937677421C55AF5C05_RuntimeMethod_var);
		V_0 = L_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = ___strings0;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0020;
	}

IL_000c:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = V_1;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_6 = V_0;
		String_t* L_7 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mA36CDEE758FB9959B7915791B376D78C981D6F12(L_7, /*hidden argument*/NULL);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_6, L_8, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_10 = V_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = V_1;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000c;
		}
	}
	{
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_12 = V_0;
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_13;
		L_13 = List_1_ToArray_mA08128A0A69B255E658942497548F085BEB36074(L_12, /*hidden argument*/List_1_ToArray_mA08128A0A69B255E658942497548F085BEB36074_RuntimeMethod_var);
		return L_13;
	}
}
// System.Int32 Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToIntFromRLPDecoded(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConvertorForRLPEncodingExtensions_ToIntFromRLPDecoded_m39758C7A00E63DCFCC05F16E3A0360D92CFBFA6D (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_1;
		L_1 = ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_m43E59BB35F574B255795565879C62E48ADD56334(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = BigInteger_op_Explicit_m1914E9F2188F67F4A904260CF995121BFCF51BFA(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int64 Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToLongFromRLPDecoded(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ConvertorForRLPEncodingExtensions_ToLongFromRLPDecoded_mBF680DAB63B7504D35595D6677E5810920A3958D (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_1;
		L_1 = ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_m43E59BB35F574B255795565879C62E48ADD56334(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		int64_t L_2;
		L_2 = BigInteger_op_Explicit_m0B2B8DBEEE3847FA247D38807E14314D65952ABF(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToStringFromRLPDecoded(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConvertorForRLPEncodingExtensions_ToStringFromRLPDecoded_m2D335B5784DBAF16EE726BF83D43A5BA7F6ACBD5 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0009:
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_1;
		L_1 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___bytes0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bytes0;
		String_t* L_4;
		L_4 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_1, L_2, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))));
		return L_4;
	}
}
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesFromNumber(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ConvertorForRLPEncodingExtensions_ToBytesFromNumber_m67EB986DA04BBE139A47E9DF2728B4C83F541B5F (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Reverse_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m41876E4876C765E5B1C7BF3D513B25006675B770_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		RuntimeObject* L_2;
		L_2 = Enumerable_Reverse_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m41876E4876C765E5B1C7BF3D513B25006675B770((RuntimeObject*)(RuntimeObject*)L_1, /*hidden argument*/Enumerable_Reverse_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m41876E4876C765E5B1C7BF3D513B25006675B770_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3;
		L_3 = Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4(L_2, /*hidden argument*/Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4_RuntimeMethod_var);
		___bytes0 = L_3;
	}

IL_0014:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bytes0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5;
		L_5 = ConvertorForRLPEncodingExtensions_TrimZeroBytes_mA4FA751BFC3F28A3BA3BD0CB2642253B5DEB61DD(L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::TrimZeroBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ConvertorForRLPEncodingExtensions_TrimZeroBytes_mA4FA751BFC3F28A3BA3BD0CB2642253B5DEB61DD (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_0 = (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)il2cpp_codegen_object_new(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_il2cpp_TypeInfo_var);
		List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778(L_0, /*hidden argument*/List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = (bool)1;
		V_2 = 0;
		goto IL_0023;
	}

IL_000c:
	{
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___bytes0;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		if (!L_5)
		{
			goto IL_001f;
		}
	}

IL_0014:
	{
		V_1 = (bool)0;
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_6 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___bytes0;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED(L_6, L_10, /*hidden argument*/List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_RuntimeMethod_var);
	}

IL_001f:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_12 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = ___bytes0;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_000c;
		}
	}
	{
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_14 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15;
		L_15 = List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E(L_14, /*hidden argument*/List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E_RuntimeMethod_var);
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
// System.Int32 Nethereum.RLP.RLP::ByteArrayToInt(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ByteArrayToInt_m68C26192F9A8C41FA93D96605D7291EF67DE8012 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		Array_Reverse_mB87373AFAC1DBE600CAA60B79A985DD09555BF7D((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___bytes0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = BitConverter_ToInt32_m09562D0C66673FA4883600754E82F22CAFED8892(L_2, 0, /*hidden argument*/NULL);
		return L_3;
	}
}
// Nethereum.RLP.IRLPElement Nethereum.RLP.RLP::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RLP_Decode_mE53F58C30F8646CE63D6A1E30B3E9DEE1448920D (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1667AACAC2BBB533E01219BAF70DFA59378BC908_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * V_0 = NULL;
	{
		RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_0 = (RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA *)il2cpp_codegen_object_new(RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA_il2cpp_TypeInfo_var);
		RLPCollection__ctor_mA9686FDEE84F898AB91B3EB2F42D7535F719648B(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___msgData0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___msgData0;
		RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
		RLP_Decode_mFC376E253E7FA75D45C23C6E23BFE63362D061EB(L_1, 0, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), 1, L_3, /*hidden argument*/NULL);
		RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_4 = V_0;
		RuntimeObject* L_5;
		L_5 = List_1_get_Item_m1667AACAC2BBB533E01219BAF70DFA59378BC908_inline(L_4, 0, /*hidden argument*/List_1_get_Item_m1667AACAC2BBB533E01219BAF70DFA59378BC908_RuntimeMethod_var);
		return L_5;
	}
}
// Nethereum.RLP.IRLPElement Nethereum.RLP.RLP::DecodeCollection(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RLP_DecodeCollection_m5550DC796EEB963E459380F14FBA263572EFC81C (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * V_0 = NULL;
	{
		RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_0 = (RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA *)il2cpp_codegen_object_new(RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA_il2cpp_TypeInfo_var);
		RLPCollection__ctor_mA9686FDEE84F898AB91B3EB2F42D7535F719648B(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___msgData0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___msgData0;
		RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
		RLP_Decode_mFC376E253E7FA75D45C23C6E23BFE63362D061EB(L_1, 0, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), 1, L_3, /*hidden argument*/NULL);
		RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_4 = V_0;
		return L_4;
	}
}
// System.Void Nethereum.RLP.RLP::Decode(System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32,Nethereum.RLP.RLPCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLP_Decode_mFC376E253E7FA75D45C23C6E23BFE63362D061EB (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData0, int32_t ___level1, int32_t ___startPosition2, int32_t ___endPosition3, int32_t ___levelToIndex4, RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * ___rlpCollection5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___msgData0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___msgData0;
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0008;
		}
	}

IL_0007:
	{
		return;
	}

IL_0008:
	{
		int32_t L_2 = ___endPosition3;
		int32_t L_3 = ___startPosition2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)));
		V_0 = L_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___msgData0;
		int32_t L_6 = ___startPosition2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_5, L_6, (RuntimeArray *)(RuntimeArray *)L_7, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))), /*hidden argument*/NULL);
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_9 = ___startPosition2;
			V_1 = L_9;
			goto IL_00a5;
		}

IL_0024:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ___msgData0;
			int32_t L_11 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
			bool L_12;
			L_12 = RLP_IsListBiggerThan55Bytes_mF0592C771EDF822ECFC90517B0D334CC4869D900(L_10, L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_003c;
			}
		}

IL_002d:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = ___msgData0;
			int32_t L_14 = ___level1;
			int32_t L_15 = ___levelToIndex4;
			RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_16 = ___rlpCollection5;
			int32_t L_17 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
			int32_t L_18;
			L_18 = RLP_ProcessListBiggerThan55Bytes_mFA5EA83ADF4A8F22AFA9617423F2A388616B5E22(L_13, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
			V_1 = L_18;
			goto IL_00a5;
		}

IL_003c:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = ___msgData0;
			int32_t L_20 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
			bool L_21;
			L_21 = RLP_IsListLessThan55Bytes_mCC035D3AE4B379C7A02C179EB8F5374A21EDC6CB(L_19, L_20, /*hidden argument*/NULL);
			if (!L_21)
			{
				goto IL_0054;
			}
		}

IL_0045:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = ___msgData0;
			int32_t L_23 = ___level1;
			int32_t L_24 = ___levelToIndex4;
			RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_25 = ___rlpCollection5;
			int32_t L_26 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
			int32_t L_27;
			L_27 = RLP_ProcessListLessThan55Bytes_m59A0F76BE58A3545F57AA936BE67D810CD8E0C0A(L_22, L_23, L_24, L_25, L_26, /*hidden argument*/NULL);
			V_1 = L_27;
			goto IL_00a5;
		}

IL_0054:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = ___msgData0;
			int32_t L_29 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
			bool L_30;
			L_30 = RLP_IsItemBiggerThan55Bytes_m8FE6491B1973B76DC06CFB4AED58E6CFB9E4D95D(L_28, L_29, /*hidden argument*/NULL);
			if (!L_30)
			{
				goto IL_0069;
			}
		}

IL_005d:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = ___msgData0;
			RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_32 = ___rlpCollection5;
			int32_t L_33 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
			int32_t L_34;
			L_34 = RLP_ProcessItemBiggerThan55Bytes_m2C0A0646AC0BDDFBE262EAF311BBFB800A46BE50(L_31, L_32, L_33, /*hidden argument*/NULL);
			V_1 = L_34;
			goto IL_00a5;
		}

IL_0069:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35 = ___msgData0;
			int32_t L_36 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
			bool L_37;
			L_37 = RLP_IsItemLessThan55Bytes_mB7D20897518CA70FFAF0A31317E4A8470EB657C8(L_35, L_36, /*hidden argument*/NULL);
			if (!L_37)
			{
				goto IL_007e;
			}
		}

IL_0072:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = ___msgData0;
			RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_39 = ___rlpCollection5;
			int32_t L_40 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
			int32_t L_41;
			L_41 = RLP_ProcessItemLessThan55Bytes_mFC18443310CF5C92207283627FDF43268534E6BC(L_38, L_39, L_40, /*hidden argument*/NULL);
			V_1 = L_41;
			goto IL_00a5;
		}

IL_007e:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_42 = ___msgData0;
			int32_t L_43 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
			bool L_44;
			L_44 = RLP_IsNullItem_m880BE1320F19630E2F3E7B5C26C2515D72BC1B78(L_42, L_43, /*hidden argument*/NULL);
			if (!L_44)
			{
				goto IL_0092;
			}
		}

IL_0087:
		{
			RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_45 = ___rlpCollection5;
			int32_t L_46 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
			int32_t L_47;
			L_47 = RLP_ProcessNullItem_m381303F33DEA703A1F2537F88CFDAA46430CD38F(L_45, L_46, /*hidden argument*/NULL);
			V_1 = L_47;
			goto IL_00a5;
		}

IL_0092:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_48 = ___msgData0;
			int32_t L_49 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
			bool L_50;
			L_50 = RLP_IsSigleByteItem_mE0EEC55E2AD96967E723C41D15B14F90F4B60B49(L_48, L_49, /*hidden argument*/NULL);
			if (!L_50)
			{
				goto IL_00a5;
			}
		}

IL_009b:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_51 = ___msgData0;
			RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_52 = ___rlpCollection5;
			int32_t L_53 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
			int32_t L_54;
			L_54 = RLP_ProcessSingleByteItem_mF1F27BD0357AF92117B6A439335EB1F7AE564741(L_51, L_52, L_53, /*hidden argument*/NULL);
			V_1 = L_54;
		}

IL_00a5:
		{
			int32_t L_55 = V_1;
			int32_t L_56 = ___endPosition3;
			if ((((int32_t)L_55) < ((int32_t)L_56)))
			{
				goto IL_0024;
			}
		}

IL_00ac:
		{
			goto IL_00c7;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ae;
		}
		throw e;
	}

CATCH_00ae:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_57 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var)));
		String_t* L_58;
		L_58 = HexByteConvertorExtensions_ToHex_m1CC2B1935D1783A24DBC1122253E7C313B6B2900(L_57, (bool)0, /*hidden argument*/NULL);
		String_t* L_59;
		L_59 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4A93D7BBDC8CA9F19676F72DC234545AA41CF9CC)), L_58, /*hidden argument*/NULL);
		Exception_t * L_60 = V_2;
		Exception_t * L_61 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080(L_61, L_59, L_60, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_61, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RLP_Decode_mFC376E253E7FA75D45C23C6E23BFE63362D061EB_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_00c7:
	{
		return;
	}
}
// System.Boolean Nethereum.RLP.RLP::IsListBiggerThan55Bytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsListBiggerThan55Bytes_mF0592C771EDF822ECFC90517B0D334CC4869D900 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition1;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return (bool)((((int32_t)L_3) > ((int32_t)((int32_t)247)))? 1 : 0);
	}
}
// System.Boolean Nethereum.RLP.RLP::IsListLessThan55Bytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsListLessThan55Bytes_mCC035D3AE4B379C7A02C179EB8F5374A21EDC6CB (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition1;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		if ((((int32_t)L_3) < ((int32_t)((int32_t)192))))
		{
			goto IL_0018;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___msgData0;
		int32_t L_5 = ___currentPosition1;
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		return (bool)((((int32_t)((((int32_t)L_7) > ((int32_t)((int32_t)247)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0018:
	{
		return (bool)0;
	}
}
// System.Boolean Nethereum.RLP.RLP::IsItemBiggerThan55Bytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsItemBiggerThan55Bytes_m8FE6491B1973B76DC06CFB4AED58E6CFB9E4D95D (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition1;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)183))))
		{
			goto IL_0015;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___msgData0;
		int32_t L_5 = ___currentPosition1;
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		return (bool)((((int32_t)L_7) < ((int32_t)((int32_t)192)))? 1 : 0);
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Boolean Nethereum.RLP.RLP::IsItemLessThan55Bytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsItemLessThan55Bytes_mB7D20897518CA70FFAF0A31317E4A8470EB657C8 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition1;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)128))))
		{
			goto IL_0018;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___msgData0;
		int32_t L_5 = ___currentPosition1;
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		return (bool)((((int32_t)((((int32_t)L_7) > ((int32_t)((int32_t)183)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0018:
	{
		return (bool)0;
	}
}
// System.Boolean Nethereum.RLP.RLP::IsNullItem(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsNullItem_m880BE1320F19630E2F3E7B5C26C2515D72BC1B78 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition1;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return (bool)((((int32_t)L_3) == ((int32_t)((int32_t)128)))? 1 : 0);
	}
}
// System.Boolean Nethereum.RLP.RLP::IsSigleByteItem(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsSigleByteItem_mE0EEC55E2AD96967E723C41D15B14F90F4B60B49 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition1;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return (bool)((((int32_t)L_3) < ((int32_t)((int32_t)128)))? 1 : 0);
	}
}
// System.Int32 Nethereum.RLP.RLP::ProcessSingleByteItem(System.Byte[],Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessSingleByteItem_mF1F27BD0357AF92117B6A439335EB1F7AE564741 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData0, RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * ___rlpCollection1, int32_t ___currentPosition2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5A70E7CF801E7EF2BB8123012AA1E2A6F9C907DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429 * V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___msgData0;
		int32_t L_3 = ___currentPosition2;
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_5);
		RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429 * L_6 = (RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429 *)il2cpp_codegen_object_new(RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429_il2cpp_TypeInfo_var);
		RLPItem__ctor_m9618C61022095A7A702C078B0EE6F04ACD6CD126(L_6, L_1, /*hidden argument*/NULL);
		V_0 = L_6;
		RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_7 = ___rlpCollection1;
		RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429 * L_8 = V_0;
		List_1_Add_m5A70E7CF801E7EF2BB8123012AA1E2A6F9C907DE(L_7, L_8, /*hidden argument*/List_1_Add_m5A70E7CF801E7EF2BB8123012AA1E2A6F9C907DE_RuntimeMethod_var);
		int32_t L_9 = ___currentPosition2;
		___currentPosition2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		int32_t L_10 = ___currentPosition2;
		return L_10;
	}
}
// System.Int32 Nethereum.RLP.RLP::ProcessNullItem(Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessNullItem_m381303F33DEA703A1F2537F88CFDAA46430CD38F (RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * ___rlpCollection0, int32_t ___currentPosition1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5A70E7CF801E7EF2BB8123012AA1E2A6F9C907DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ((RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_StaticFields*)il2cpp_codegen_static_fields_for(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var))->get_EMPTY_BYTE_ARRAY_5();
		RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429 * L_1 = (RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429 *)il2cpp_codegen_object_new(RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429_il2cpp_TypeInfo_var);
		RLPItem__ctor_m9618C61022095A7A702C078B0EE6F04ACD6CD126(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_2 = ___rlpCollection0;
		RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429 * L_3 = V_0;
		List_1_Add_m5A70E7CF801E7EF2BB8123012AA1E2A6F9C907DE(L_2, L_3, /*hidden argument*/List_1_Add_m5A70E7CF801E7EF2BB8123012AA1E2A6F9C907DE_RuntimeMethod_var);
		int32_t L_4 = ___currentPosition1;
		___currentPosition1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		int32_t L_5 = ___currentPosition1;
		return L_5;
	}
}
// System.Int32 Nethereum.RLP.RLP::ProcessItemLessThan55Bytes(System.Byte[],Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessItemLessThan55Bytes_mFC18443310CF5C92207283627FDF43268534E6BC (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData0, RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * ___rlpCollection1, int32_t ___currentPosition2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5A70E7CF801E7EF2BB8123012AA1E2A6F9C907DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429 * V_3 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition2;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)128)))));
		uint8_t L_4 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___msgData0;
		int32_t L_7 = ___currentPosition2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_1;
		uint8_t L_9 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_6, ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)), (RuntimeArray *)(RuntimeArray *)L_8, 0, L_9, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)2);
		V_2 = L_10;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = ___msgData0;
		int32_t L_12 = ___currentPosition2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_2;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_11, L_12, (RuntimeArray *)(RuntimeArray *)L_13, 0, 2, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = V_1;
		RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429 * L_15 = (RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429 *)il2cpp_codegen_object_new(RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429_il2cpp_TypeInfo_var);
		RLPItem__ctor_m9618C61022095A7A702C078B0EE6F04ACD6CD126(L_15, L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_16 = ___rlpCollection1;
		RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429 * L_17 = V_3;
		List_1_Add_m5A70E7CF801E7EF2BB8123012AA1E2A6F9C907DE(L_16, L_17, /*hidden argument*/List_1_Add_m5A70E7CF801E7EF2BB8123012AA1E2A6F9C907DE_RuntimeMethod_var);
		int32_t L_18 = ___currentPosition2;
		uint8_t L_19 = V_0;
		___currentPosition2 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)L_19))));
		int32_t L_20 = ___currentPosition2;
		return L_20;
	}
}
// System.Int32 Nethereum.RLP.RLP::ProcessItemBiggerThan55Bytes(System.Byte[],Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessItemBiggerThan55Bytes_m2C0A0646AC0BDDFBE262EAF311BBFB800A46BE50 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData0, RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * ___rlpCollection1, int32_t ___currentPosition2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5A70E7CF801E7EF2BB8123012AA1E2A6F9C907DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429 * V_4 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition2;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)183)))));
		uint8_t L_4 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___msgData0;
		int32_t L_6 = ___currentPosition2;
		IL2CPP_RUNTIME_CLASS_INIT(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = RLP_CalculateLength_mBA83D612720D96B4ED570832C1027343ECEA8D02(L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		int32_t L_8 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_2 = L_9;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ___msgData0;
		int32_t L_11 = ___currentPosition2;
		uint8_t L_12 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_2;
		int32_t L_14 = V_1;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_10, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12)), (int32_t)1)), (RuntimeArray *)(RuntimeArray *)L_13, 0, L_14, /*hidden argument*/NULL);
		uint8_t L_15 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)));
		V_3 = L_16;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = ___msgData0;
		int32_t L_18 = ___currentPosition2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = V_3;
		uint8_t L_20 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_17, L_18, (RuntimeArray *)(RuntimeArray *)L_19, 0, ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = V_2;
		RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429 * L_22 = (RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429 *)il2cpp_codegen_object_new(RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429_il2cpp_TypeInfo_var);
		RLPItem__ctor_m9618C61022095A7A702C078B0EE6F04ACD6CD126(L_22, L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_23 = ___rlpCollection1;
		RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429 * L_24 = V_4;
		List_1_Add_m5A70E7CF801E7EF2BB8123012AA1E2A6F9C907DE(L_23, L_24, /*hidden argument*/List_1_Add_m5A70E7CF801E7EF2BB8123012AA1E2A6F9C907DE_RuntimeMethod_var);
		int32_t L_25 = ___currentPosition2;
		uint8_t L_26 = V_0;
		int32_t L_27 = V_1;
		___currentPosition2 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_27)), (int32_t)1))));
		int32_t L_28 = ___currentPosition2;
		return L_28;
	}
}
// System.Int32 Nethereum.RLP.RLP::ProcessListLessThan55Bytes(System.Byte[],System.Int32,System.Int32,Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessListLessThan55Bytes_m59A0F76BE58A3545F57AA936BE67D810CD8E0C0A (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData0, int32_t ___level1, int32_t ___levelToIndex2, RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * ___rlpCollection3, int32_t ___currentPosition4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5A70E7CF801E7EF2BB8123012AA1E2A6F9C907DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * V_2 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition4;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)192)));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		int32_t L_5 = L_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		V_1 = L_6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___msgData0;
		int32_t L_8 = ___currentPosition4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_1;
		int32_t L_10 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_7, L_8, (RuntimeArray *)(RuntimeArray *)L_9, 0, L_10, /*hidden argument*/NULL);
		RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_11 = (RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA *)il2cpp_codegen_object_new(RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA_il2cpp_TypeInfo_var);
		RLPCollection__ctor_mA9686FDEE84F898AB91B3EB2F42D7535F719648B(L_11, /*hidden argument*/NULL);
		RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_12 = L_11;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_1;
		RLPCollection_set_RLPData_m4DA9D169A3963D65B6B31ACB8646531F740F9899_inline(L_12, L_13, /*hidden argument*/NULL);
		V_2 = L_12;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = ___msgData0;
		int32_t L_15 = ___level1;
		int32_t L_16 = ___currentPosition4;
		int32_t L_17 = ___currentPosition4;
		int32_t L_18 = V_0;
		int32_t L_19 = ___levelToIndex2;
		RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_20 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
		RLP_Decode_mFC376E253E7FA75D45C23C6E23BFE63362D061EB(L_14, ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18)), L_19, L_20, /*hidden argument*/NULL);
	}

IL_0045:
	{
		RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_21 = ___rlpCollection3;
		RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_22 = V_2;
		List_1_Add_m5A70E7CF801E7EF2BB8123012AA1E2A6F9C907DE(L_21, L_22, /*hidden argument*/List_1_Add_m5A70E7CF801E7EF2BB8123012AA1E2A6F9C907DE_RuntimeMethod_var);
		int32_t L_23 = ___currentPosition4;
		int32_t L_24 = V_0;
		___currentPosition4 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)L_24));
		int32_t L_25 = ___currentPosition4;
		return L_25;
	}
}
// System.Int32 Nethereum.RLP.RLP::ProcessListBiggerThan55Bytes(System.Byte[],System.Int32,System.Int32,Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessListBiggerThan55Bytes_mFA5EA83ADF4A8F22AFA9617423F2A388616B5E22 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData0, int32_t ___level1, int32_t ___levelToIndex2, RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * ___rlpCollection3, int32_t ___currentPosition4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5A70E7CF801E7EF2BB8123012AA1E2A6F9C907DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * V_4 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition4;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)247)))));
		uint8_t L_4 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___msgData0;
		int32_t L_6 = ___currentPosition4;
		IL2CPP_RUNTIME_CLASS_INIT(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = RLP_CalculateLength_mBA83D612720D96B4ED570832C1027343ECEA8D02(L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		uint8_t L_8 = V_0;
		int32_t L_9 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)), (int32_t)1));
		int32_t L_10 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_10);
		V_3 = L_11;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___msgData0;
		int32_t L_13 = ___currentPosition4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = V_3;
		int32_t L_15 = V_2;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_12, L_13, (RuntimeArray *)(RuntimeArray *)L_14, 0, L_15, /*hidden argument*/NULL);
		RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_16 = (RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA *)il2cpp_codegen_object_new(RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA_il2cpp_TypeInfo_var);
		RLPCollection__ctor_mA9686FDEE84F898AB91B3EB2F42D7535F719648B(L_16, /*hidden argument*/NULL);
		RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_17 = L_16;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = V_3;
		RLPCollection_set_RLPData_m4DA9D169A3963D65B6B31ACB8646531F740F9899_inline(L_17, L_18, /*hidden argument*/NULL);
		V_4 = L_17;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = ___msgData0;
		int32_t L_20 = ___level1;
		int32_t L_21 = ___currentPosition4;
		uint8_t L_22 = V_0;
		int32_t L_23 = ___currentPosition4;
		int32_t L_24 = V_2;
		int32_t L_25 = ___levelToIndex2;
		RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_26 = V_4;
		RLP_Decode_mFC376E253E7FA75D45C23C6E23BFE63362D061EB(L_19, ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)L_22)), (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)L_24)), L_25, L_26, /*hidden argument*/NULL);
		RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_27 = ___rlpCollection3;
		RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_28 = V_4;
		List_1_Add_m5A70E7CF801E7EF2BB8123012AA1E2A6F9C907DE(L_27, L_28, /*hidden argument*/List_1_Add_m5A70E7CF801E7EF2BB8123012AA1E2A6F9C907DE_RuntimeMethod_var);
		int32_t L_29 = ___currentPosition4;
		int32_t L_30 = V_2;
		___currentPosition4 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_30));
		int32_t L_31 = ___currentPosition4;
		return L_31;
	}
}
// Nethereum.RLP.IRLPElement Nethereum.RLP.RLP::DecodeFirstElement(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RLP_DecodeFirstElement_m587A8E1F5157C612A26680D27F759EE9BFCE2143 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData0, int32_t ___startPos1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1667AACAC2BBB533E01219BAF70DFA59378BC908_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * V_0 = NULL;
	{
		RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_0 = (RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA *)il2cpp_codegen_object_new(RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA_il2cpp_TypeInfo_var);
		RLPCollection__ctor_mA9686FDEE84F898AB91B3EB2F42D7535F719648B(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___msgData0;
		int32_t L_2 = ___startPos1;
		int32_t L_3 = ___startPos1;
		RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
		RLP_Decode_mFC376E253E7FA75D45C23C6E23BFE63362D061EB(L_1, 0, L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), 1, L_4, /*hidden argument*/NULL);
		RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_5 = V_0;
		RuntimeObject* L_6;
		L_6 = List_1_get_Item_m1667AACAC2BBB533E01219BAF70DFA59378BC908_inline(L_5, 0, /*hidden argument*/List_1_get_Item_m1667AACAC2BBB533E01219BAF70DFA59378BC908_RuntimeMethod_var);
		return L_6;
	}
}
// System.Byte[] Nethereum.RLP.RLP::EncodeByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* RLP_EncodeByte_m1684EB4DD0793D072E0C75E49C42C63496A488AB (uint8_t ___singleByte0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = ___singleByte0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = L_1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)128));
		return L_2;
	}

IL_0012:
	{
		uint8_t L_3 = ___singleByte0;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)127))))
		{
			goto IL_0022;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = L_4;
		uint8_t L_6 = ___singleByte0;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_6);
		return L_5;
	}

IL_0022:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = L_7;
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)129));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = L_8;
		uint8_t L_10 = ___singleByte0;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_10);
		return L_9;
	}
}
// System.Byte[] Nethereum.RLP.RLP::EncodeElement(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* RLP_EncodeElement_mC5B71719FB385709D3E669C582D9C2E4DB38587A (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___srcData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_4 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_5 = NULL;
	int32_t V_6 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___srcData0;
		IL2CPP_RUNTIME_CLASS_INIT(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = RLP_IsNullOrZeroArray_mA2A70A115E00F57EC3AB2B22D962A6CD5EAFE27D(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = L_2;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)128));
		return L_3;
	}

IL_0017:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___srcData0;
		IL2CPP_RUNTIME_CLASS_INIT(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = RLP_IsSingleZero_mE0C0CA38BCB4392BD2634FDC568E528CEB475534(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___srcData0;
		return L_6;
	}

IL_0021:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___srcData0;
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_0033;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ___srcData0;
		int32_t L_9 = 0;
		uint8_t L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0033;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = ___srcData0;
		return L_11;
	}

IL_0033:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___srcData0;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))) >= ((int32_t)((int32_t)56))))
		{
			goto IL_0062;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = ___srcData0;
		V_0 = (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)128), (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = ___srcData0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))), (int32_t)1)));
		V_1 = L_15;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = ___srcData0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = ___srcData0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_16, 0, (RuntimeArray *)(RuntimeArray *)L_17, 1, ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = V_1;
		uint8_t L_20 = V_0;
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_20);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = V_1;
		return L_21;
	}

IL_0062:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = ___srcData0;
		V_2 = ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)));
		V_3 = (uint8_t)0;
		goto IL_0073;
	}

IL_006a:
	{
		uint8_t L_23 = V_3;
		V_3 = (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1))));
		int32_t L_24 = V_2;
		V_2 = ((int32_t)((int32_t)L_24>>(int32_t)8));
	}

IL_0073:
	{
		int32_t L_25 = V_2;
		if (L_25)
		{
			goto IL_006a;
		}
	}
	{
		uint8_t L_26 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_26);
		V_4 = L_27;
		V_6 = 0;
		goto IL_009e;
	}

IL_0083:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = V_4;
		uint8_t L_29 = V_3;
		int32_t L_30 = V_6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = ___srcData0;
		int32_t L_32 = V_6;
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1)), (int32_t)L_30))), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))>>(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)8, (int32_t)L_32))&(int32_t)((int32_t)31))))))));
		int32_t L_33 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_009e:
	{
		int32_t L_34 = V_6;
		uint8_t L_35 = V_3;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0083;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36 = ___srcData0;
		uint8_t L_37 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length))), (int32_t)1)), (int32_t)L_37)));
		V_5 = L_38;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_39 = ___srcData0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_40 = V_5;
		uint8_t L_41 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_42 = ___srcData0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_39, 0, (RuntimeArray *)(RuntimeArray *)L_40, ((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)L_41)), ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length))), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_43 = V_5;
		uint8_t L_44 = V_3;
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)183), (int32_t)L_44)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_45 = V_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_46 = V_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_47 = V_4;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_45, 0, (RuntimeArray *)(RuntimeArray *)L_46, 1, ((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length))), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_48 = V_5;
		return L_48;
	}
}
// System.Byte[] Nethereum.RLP.RLP::EncodeDataItemsAsElementOrListAndCombineAsList(System.Byte[][],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* RLP_EncodeDataItemsAsElementOrListAndCombineAsList_mB36AE31FECCA2CEAFA714C330F866B2B5C082659 (ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ___dataItems0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___indexOfListDataItems1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m7A94EF9E1AE7D822BB6DD9EF50C106C3D8D9C54C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_TisByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_mE92BD3BD8560A83180411588DA1495E4575390D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_mD4847AB65D57F96B49C3A687F685A1D593A10C2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m0B8BCFB15D3B9361BA55525E79701EFC85E3B911_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA6029660173C1ADC5C0AA4FA8F0DBC64BF97B683_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mA08128A0A69B255E658942497548F085BEB36074_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC74F8340E150B8F9520188937677421C55AF5C05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_EncodeElement_mC5B71719FB385709D3E669C582D9C2E4DB38587A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___indexOfListDataItems1;
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_1 = ___dataItems0;
		Func_2_tA6029660173C1ADC5C0AA4FA8F0DBC64BF97B683 * L_2 = (Func_2_tA6029660173C1ADC5C0AA4FA8F0DBC64BF97B683 *)il2cpp_codegen_object_new(Func_2_tA6029660173C1ADC5C0AA4FA8F0DBC64BF97B683_il2cpp_TypeInfo_var);
		Func_2__ctor_m0B8BCFB15D3B9361BA55525E79701EFC85E3B911(L_2, NULL, (intptr_t)((intptr_t)RLP_EncodeElement_mC5B71719FB385709D3E669C582D9C2E4DB38587A_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m0B8BCFB15D3B9361BA55525E79701EFC85E3B911_RuntimeMethod_var);
		RuntimeObject* L_3;
		L_3 = Enumerable_Select_TisByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_TisByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_mE92BD3BD8560A83180411588DA1495E4575390D7((RuntimeObject*)(RuntimeObject*)L_1, L_2, /*hidden argument*/Enumerable_Select_TisByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_TisByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_mE92BD3BD8560A83180411588DA1495E4575390D7_RuntimeMethod_var);
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_4;
		L_4 = Enumerable_ToArray_TisByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_mD4847AB65D57F96B49C3A687F685A1D593A10C2F(L_3, /*hidden argument*/Enumerable_ToArray_TisByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_mD4847AB65D57F96B49C3A687F685A1D593A10C2F_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5;
		L_5 = RLP_EncodeList_mFB3D358226CB2F5DF6811E894B73FDCAB10518C8(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0020:
	{
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_6 = (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *)il2cpp_codegen_object_new(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_il2cpp_TypeInfo_var);
		List_1__ctor_mC74F8340E150B8F9520188937677421C55AF5C05(L_6, /*hidden argument*/List_1__ctor_mC74F8340E150B8F9520188937677421C55AF5C05_RuntimeMethod_var);
		V_0 = L_6;
		V_1 = 0;
		goto IL_0060;
	}

IL_002a:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = ___indexOfListDataItems1;
		int32_t L_8 = V_1;
		bool L_9;
		L_9 = Enumerable_Contains_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m7A94EF9E1AE7D822BB6DD9EF50C106C3D8D9C54C((RuntimeObject*)(RuntimeObject*)L_7, L_8, /*hidden argument*/Enumerable_Contains_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m7A94EF9E1AE7D822BB6DD9EF50C106C3D8D9C54C_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_10 = ___dataItems0;
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_2 = L_13;
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_14 = V_0;
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_15 = (ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D*)(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D*)SZArrayNew(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_16 = L_15;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = V_2;
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_17);
		IL2CPP_RUNTIME_CLASS_INIT(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18;
		L_18 = RLP_EncodeList_mFB3D358226CB2F5DF6811E894B73FDCAB10518C8(L_16, /*hidden argument*/NULL);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_14, L_18, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		goto IL_005c;
	}

IL_004e:
	{
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_19 = V_0;
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_20 = ___dataItems0;
		int32_t L_21 = V_1;
		int32_t L_22 = L_21;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		IL2CPP_RUNTIME_CLASS_INIT(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24;
		L_24 = RLP_EncodeElement_mC5B71719FB385709D3E669C582D9C2E4DB38587A(L_23, /*hidden argument*/NULL);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_19, L_24, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
	}

IL_005c:
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0060:
	{
		int32_t L_26 = V_1;
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_27 = ___dataItems0;
		if ((((int32_t)L_26) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))))
		{
			goto IL_002a;
		}
	}
	{
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_28 = V_0;
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_29;
		L_29 = List_1_ToArray_mA08128A0A69B255E658942497548F085BEB36074(L_28, /*hidden argument*/List_1_ToArray_mA08128A0A69B255E658942497548F085BEB36074_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30;
		L_30 = RLP_EncodeList_mFB3D358226CB2F5DF6811E894B73FDCAB10518C8(L_29, /*hidden argument*/NULL);
		return L_30;
	}
}
// System.Byte[] Nethereum.RLP.RLP::EncodeList(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* RLP_EncodeList_mFB3D358226CB2F5DF6811E894B73FDCAB10518C8 (ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ___items0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint8_t V_5 = 0x0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_6 = NULL;
	int32_t V_7 = 0;
	ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* V_8 = NULL;
	int32_t V_9 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_10 = NULL;
	{
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_0 = ___items0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_1 = ___items0;
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_2 = ___items0;
		int32_t L_3 = 0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		if (L_4)
		{
			goto IL_001d;
		}
	}

IL_000e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = L_5;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)192));
		return L_6;
	}

IL_001d:
	{
		V_0 = 0;
		V_3 = 0;
		goto IL_002f;
	}

IL_0023:
	{
		int32_t L_7 = V_0;
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_8 = ___items0;
		int32_t L_9 = V_3;
		int32_t L_10 = L_9;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))));
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002f:
	{
		int32_t L_13 = V_3;
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_14 = ___items0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)56))))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_16 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)L_16)));
		V_1 = L_17;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = V_1;
		int32_t L_19 = V_0;
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)192), (int32_t)L_19)))));
		V_2 = 1;
		goto IL_00cc;
	}

IL_0052:
	{
		int32_t L_20 = V_0;
		V_4 = L_20;
		V_5 = (uint8_t)0;
		goto IL_0067;
	}

IL_005a:
	{
		uint8_t L_21 = V_5;
		V_5 = (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1))));
		int32_t L_22 = V_4;
		V_4 = ((int32_t)((int32_t)L_22>>(int32_t)8));
	}

IL_0067:
	{
		int32_t L_23 = V_4;
		if (L_23)
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_24 = V_0;
		V_4 = L_24;
		uint8_t L_25 = V_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_25);
		V_6 = L_26;
		V_7 = 0;
		goto IL_0097;
	}

IL_007c:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = V_6;
		uint8_t L_28 = V_5;
		int32_t L_29 = V_7;
		int32_t L_30 = V_4;
		int32_t L_31 = V_7;
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1)), (int32_t)L_29))), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_30>>(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)8, (int32_t)L_31))&(int32_t)((int32_t)31))))))));
		int32_t L_32 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_0097:
	{
		int32_t L_33 = V_7;
		uint8_t L_34 = V_5;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_007c;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35 = V_6;
		int32_t L_36 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_37 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))), (int32_t)L_36)));
		V_1 = L_37;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = V_1;
		uint8_t L_39 = V_5;
		(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)247), (int32_t)L_39)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_40 = V_6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_41 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_42 = V_6;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_40, 0, (RuntimeArray *)(RuntimeArray *)L_41, 1, ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length))), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_43 = V_6;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length))), (int32_t)1));
	}

IL_00cc:
	{
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_44 = ___items0;
		V_8 = L_44;
		V_9 = 0;
		goto IL_00f6;
	}

IL_00d4:
	{
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_45 = V_8;
		int32_t L_46 = V_9;
		int32_t L_47 = L_46;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_48 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_47));
		V_10 = L_48;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_49 = V_10;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_50 = V_1;
		int32_t L_51 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_52 = V_10;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_49, 0, (RuntimeArray *)(RuntimeArray *)L_50, L_51, ((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length))), /*hidden argument*/NULL);
		int32_t L_53 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_54 = V_10;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length)))));
		int32_t L_55 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
	}

IL_00f6:
	{
		int32_t L_56 = V_9;
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_57 = V_8;
		if ((((int32_t)L_56) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_57)->max_length))))))
		{
			goto IL_00d4;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_58 = V_1;
		return L_58;
	}
}
// System.Boolean Nethereum.RLP.RLP::IsNullOrZeroArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsNullOrZeroArray_mA2A70A115E00F57EC3AB2B22D962A6CD5EAFE27D (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___array0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___array0;
		return (bool)((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
	}

IL_0009:
	{
		return (bool)1;
	}
}
// System.Boolean Nethereum.RLP.RLP::IsSingleZero(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsSingleZero_mE0C0CA38BCB4392BD2634FDC568E528CEB475534 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___array0;
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_000d;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___array0;
		int32_t L_2 = 0;
		uint8_t L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_000d:
	{
		return (bool)0;
	}
}
// System.Int32 Nethereum.RLP.RLP::CalculateLength(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_CalculateLength_mBA83D612720D96B4ED570832C1027343ECEA8D02 (int32_t ___lengthOfLength0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___msgData1, int32_t ___pos2, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___lengthOfLength0;
		V_0 = (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1))));
		V_1 = 0;
		V_2 = 1;
		goto IL_0023;
	}

IL_000b:
	{
		int32_t L_1 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___msgData1;
		int32_t L_3 = ___pos2;
		int32_t L_4 = V_2;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4));
		uint8_t L_6 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		uint8_t L_7 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)((int32_t)L_6<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)8, (int32_t)L_7))&(int32_t)((int32_t)31)))))));
		uint8_t L_8 = V_0;
		V_0 = (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1))));
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_10 = V_2;
		int32_t L_11 = ___lengthOfLength0;
		if ((((int32_t)L_10) <= ((int32_t)L_11)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_12 = V_1;
		return L_12;
	}
}
// System.Void Nethereum.RLP.RLP::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLP__ctor_m77BF5A267153C7978FDCD1FC56CFAC4FD4C57073 (RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.RLP.RLP::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLP__cctor_mE3EBD4C8330490C25AF0BBD065EEBC87A076C1FD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)0);
		((RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_StaticFields*)il2cpp_codegen_static_fields_for(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var))->set_EMPTY_BYTE_ARRAY_5(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		((RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_StaticFields*)il2cpp_codegen_static_fields_for(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var))->set_ZERO_BYTE_ARRAY_6(L_1);
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
// System.Byte[] Nethereum.RLP.RLPCollection::get_RLPData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* RLPCollection_get_RLPData_mE6196A729E1153662E55E672C37780F887FFD7D9 (RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_U3CRLPDataU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Nethereum.RLP.RLPCollection::set_RLPData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPCollection_set_RLPData_m4DA9D169A3963D65B6B31ACB8646531F740F9899 (RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___value0;
		__this->set_U3CRLPDataU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void Nethereum.RLP.RLPCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPCollection__ctor_mA9686FDEE84F898AB91B3EB2F42D7535F719648B (RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m126B99A931757B74D1CFC5711550AE84BFC17998_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6F3D6F77A101A97D1A5DC7D4CD3E7739BAD0C3B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t6F3D6F77A101A97D1A5DC7D4CD3E7739BAD0C3B8_il2cpp_TypeInfo_var);
		List_1__ctor_m126B99A931757B74D1CFC5711550AE84BFC17998(__this, /*hidden argument*/List_1__ctor_m126B99A931757B74D1CFC5711550AE84BFC17998_RuntimeMethod_var);
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
// System.Void Nethereum.RLP.RLPItem::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPItem__ctor_m9618C61022095A7A702C078B0EE6F04ACD6CD126 (RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___rlpData0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___rlpData0;
		__this->set__rlpData_0(L_0);
		return;
	}
}
// System.Byte[] Nethereum.RLP.RLPItem::get_RLPData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* RLPItem_get_RLPData_m554C61CE3E4551EDE8EF361BE275E54546750091 (RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = RLPItem_GetRLPData_mE2FD927A04C5F14762ADAD9C7FC878469A4D3637(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Byte[] Nethereum.RLP.RLPItem::GetRLPData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* RLPItem_GetRLPData_mE2FD927A04C5F14762ADAD9C7FC878469A4D3637 (RLPItem_t68A87D436093F462AF4AE85133C10B0E57B7D429 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__rlpData_0();
		if (!(((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0010;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get__rlpData_0();
		return L_1;
	}

IL_0010:
	{
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
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
// System.String Nethereum.RLP.RLPStringFormatter::Format(Nethereum.RLP.IRLPElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RLPStringFormatter_Format_mECD8D95C8B72A2C09B4A82C4934E1ECC948297EC (RuntimeObject* ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mAADAE7D729DA24D985DB0A4B803E5047B53D04DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mEE3A264EA4352D0C16E53201335BB812629BAADE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8196DA7B81F812202DB8521F5AE2EAD9C1A4377C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRLPElement_tC90CEA4BD23C6E2530377CB34156C9CBA4913D20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE03D5A19A29D0F2D85487458BD6BC22769F3D8FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * V_1 = NULL;
	Enumerator_t42F42E9A1A3BF1F6EEEEF57B0651294932B714DB  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___element0;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9E22D0F7A2F97DEE1B8F2A283E739C3B4560BA62)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RLPStringFormatter_Format_mECD8D95C8B72A2C09B4A82C4934E1ECC948297EC_RuntimeMethod_var)));
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___element0;
		V_1 = ((RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA *)IsInstClass((RuntimeObject*)L_3, RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA_il2cpp_TypeInfo_var));
		RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0067;
		}
	}
	{
		StringBuilder_t * L_5 = V_0;
		StringBuilder_t * L_6;
		L_6 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_5, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, /*hidden argument*/NULL);
		RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * L_7 = V_1;
		Enumerator_t42F42E9A1A3BF1F6EEEEF57B0651294932B714DB  L_8;
		L_8 = List_1_GetEnumerator_mE03D5A19A29D0F2D85487458BD6BC22769F3D8FA(L_7, /*hidden argument*/List_1_GetEnumerator_mE03D5A19A29D0F2D85487458BD6BC22769F3D8FA_RuntimeMethod_var);
		V_2 = L_8;
	}

IL_0031:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_0033:
		{
			RuntimeObject* L_9;
			L_9 = Enumerator_get_Current_m8196DA7B81F812202DB8521F5AE2EAD9C1A4377C_inline((Enumerator_t42F42E9A1A3BF1F6EEEEF57B0651294932B714DB *)(&V_2), /*hidden argument*/Enumerator_get_Current_m8196DA7B81F812202DB8521F5AE2EAD9C1A4377C_RuntimeMethod_var);
			String_t* L_10;
			L_10 = RLPStringFormatter_Format_mECD8D95C8B72A2C09B4A82C4934E1ECC948297EC(L_9, /*hidden argument*/NULL);
		}

IL_0040:
		{
			bool L_11;
			L_11 = Enumerator_MoveNext_mEE3A264EA4352D0C16E53201335BB812629BAADE((Enumerator_t42F42E9A1A3BF1F6EEEEF57B0651294932B714DB *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mEE3A264EA4352D0C16E53201335BB812629BAADE_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0033;
			}
		}

IL_0049:
		{
			IL2CPP_LEAVE(0x59, FINALLY_004b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004b;
	}

FINALLY_004b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mAADAE7D729DA24D985DB0A4B803E5047B53D04DB((Enumerator_t42F42E9A1A3BF1F6EEEEF57B0651294932B714DB *)(&V_2), /*hidden argument*/Enumerator_Dispose_mAADAE7D729DA24D985DB0A4B803E5047B53D04DB_RuntimeMethod_var);
		IL2CPP_END_FINALLY(75)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(75)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x59, IL_0059)
	}

IL_0059:
	{
		StringBuilder_t * L_12 = V_0;
		StringBuilder_t * L_13;
		L_13 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_12, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, /*hidden argument*/NULL);
		goto IL_0084;
	}

IL_0067:
	{
		StringBuilder_t * L_14 = V_0;
		RuntimeObject* L_15 = ___element0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16;
		L_16 = InterfaceFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tC90CEA4BD23C6E2530377CB34156C9CBA4913D20_il2cpp_TypeInfo_var, L_15);
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		String_t* L_17;
		L_17 = HexByteConvertorExtensions_ToHex_m1CC2B1935D1783A24DBC1122253E7C313B6B2900(L_16, (bool)0, /*hidden argument*/NULL);
		String_t* L_18;
		L_18 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_17, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
		StringBuilder_t * L_19;
		L_19 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_14, L_18, /*hidden argument*/NULL);
	}

IL_0084:
	{
		StringBuilder_t * L_20 = V_0;
		String_t* L_21;
		L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		return L_21;
	}
}
// System.Void Nethereum.RLP.RLPStringFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPStringFormatter__ctor_m2A3BA3F7042E7927231314F89B72F41E29931E19 (RLPStringFormatter_t28CF54C938D95492CB4EC815F634A39CA15F3F3D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RLPCollection_set_RLPData_m4DA9D169A3963D65B6B31ACB8646531F740F9899_inline (RLPCollection_tB857D4FF129E23899DF750716485732F1F7B56EA * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___value0;
		__this->set_U3CRLPDataU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
