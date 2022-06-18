#include "pch-cpp.hpp"

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

// System.Func`2<System.Byte,System.Object>
struct Func_2_t6CFB329C57DAD97E6C197314ACB816899E0740EF;
// System.Func`2<System.Byte,System.String>
struct Func_2_t0ABEB1C940A11C62B1E03D6FBE71DE363BFF715A;
// Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>
struct HexRPCType_1_t071A5D5CD88D695FE303DC72328903D298589FAF;
// Nethereum.Hex.HexTypes.HexRPCType`1<System.Object>
struct HexRPCType_1_t00BF0589EBC41B004798863912266C131279A1BF;
// Nethereum.Hex.HexTypes.HexRPCType`1<System.String>
struct HexRPCType_1_tB31D46C826C558D22B05D27FDFDD8FC6162C6715;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_t87C38B0EE9F1DE9AFC8F366EEAE5D497C061B4E1;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// Nethereum.Hex.HexConvertors.IHexConvertor`1<System.Numerics.BigInteger>
struct IHexConvertor_1_t794B7D393FC8A699DB3E43617E8DCF1FC80ACCCF;
// Nethereum.Hex.HexConvertors.IHexConvertor`1<System.Object>
struct IHexConvertor_1_t9760F84B578A7F768837EF041E21E7C4C8F029A2;
// Nethereum.Hex.HexConvertors.IHexConvertor`1<System.String>
struct IHexConvertor_1_tD4EFB9D99B26F0C30AFF3D0AEFE7456B6AA064B6;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
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
// System.FormatException
struct FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// Nethereum.Hex.HexTypes.HexBigInteger
struct HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81;
// Nethereum.Hex.HexConvertors.HexBigIntegerBigEndianConvertor
struct HexBigIntegerBigEndianConvertor_t1129B2D756F8F2AC58C24DF897F7ED389E3C53B5;
// Nethereum.Hex.HexTypes.HexTypeFactory
struct HexTypeFactory_tD36FCB9939B5DCF6F2374DEDC995D04272B9C301;
// Nethereum.Hex.HexTypes.HexUTF8String
struct HexUTF8String_t8F8CA765EB9C387022D257B75724F1BA52A17703;
// Nethereum.Hex.HexConvertors.HexUTF8StringConvertor
struct HexUTF8StringConvertor_tB0762EA7B8FD488EB73F8F9B244E373916B0D49F;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions/<>c
struct U3CU3Ec_tBDC07123AA01164CD96BF24083AD9F3470DF2236;

IL2CPP_EXTERN_C RuntimeClass* BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t0ABEB1C940A11C62B1E03D6FBE71DE363BFF715A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HexBigIntegerBigEndianConvertor_t1129B2D756F8F2AC58C24DF897F7ED389E3C53B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HexUTF8StringConvertor_tB0762EA7B8FD488EB73F8F9B244E373916B0D49F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HexUTF8String_t8F8CA765EB9C387022D257B75724F1BA52A17703_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tBDC07123AA01164CD96BF24083AD9F3470DF2236_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral14EDE195912AFD586B3C9D6841D4786E35B50299;
IL2CPP_EXTERN_C String_t* _stringLiteral347BB4CBF7CC52D07091977DE184B410FFDDD5B7;
IL2CPP_EXTERN_C String_t* _stringLiteral4BCF4B50E72B7CCD6AD748E8D2FDCADBF49961A8;
IL2CPP_EXTERN_C String_t* _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89;
IL2CPP_EXTERN_C String_t* _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260;
IL2CPP_EXTERN_C String_t* _stringLiteral70C6D80A1C9DC0AE77AA63E1DC135F76ED9B37E0;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Reverse_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m41876E4876C765E5B1C7BF3D513B25006675B770_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisString_t_mFC8A0FC62793E5C3738812BE1FA8DEF3C1231364_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m5B7AF9E58031B16D99774DC0E0C6D179985A083C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m0A11F88F2CFACBFD6EBD1FAC1D27F64D833918F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HexBigIntegerConvertorExtensions_ToHex_m723FC6571908547B92EE7298EB9E3F72FB29794C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HexByteConvertorExtensions_FromCharacterToByte_m516F63CAC8C32F42BD44E07D16BD59C99B8D4AA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HexByteConvertorExtensions_HexToByteArray_m89881F7CBE549A55575CCCB4E1C254E2D2E81B89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HexRPCType_1__ctor_m28BC883F88A31912A803D81C7807D9838497FF1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HexRPCType_1__ctor_m97FB570F0983C40524A7F98908EA5138048528B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HexRPCType_1__ctor_m9B9976F2E952650796151465BFF35A705DB44A07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HexRPCType_1__ctor_mE87A3D52226B9DD31D3F9A964EA37BAB21CF9611_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HexRPCType_1_get_Value_m9EBE99746FD588B10FEE49599A7F68819CC0AAF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HexRPCType_1_set_HexValue_mF18BFB4EFD1BED79759B14F24996FEABCC887806_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_m181CEDD9EBF190E7DA8FE6C75C842B20FB87BE18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToHexU3Eb__1_0_m65C1ED2217EDBD3B7147E067658BF2A0147EBADE_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t403C4B47CBE6DAC5C30235F49DFCF79105BD97C3 
{
public:

public:
};


// System.Object


// Nethereum.Hex.HexTypes.HexRPCType`1<System.String>
struct HexRPCType_1_tB31D46C826C558D22B05D27FDFDD8FC6162C6715  : public RuntimeObject
{
public:
	// Nethereum.Hex.HexConvertors.IHexConvertor`1<T> Nethereum.Hex.HexTypes.HexRPCType`1::convertor
	RuntimeObject* ___convertor_0;
	// System.String Nethereum.Hex.HexTypes.HexRPCType`1::hexValue
	String_t* ___hexValue_1;
	// T Nethereum.Hex.HexTypes.HexRPCType`1::value
	String_t* ___value_2;
	// System.Object Nethereum.Hex.HexTypes.HexRPCType`1::lockingObject
	RuntimeObject * ___lockingObject_3;
	// System.Boolean Nethereum.Hex.HexTypes.HexRPCType`1::needsInitialisingValue
	bool ___needsInitialisingValue_4;

public:
	inline static int32_t get_offset_of_convertor_0() { return static_cast<int32_t>(offsetof(HexRPCType_1_tB31D46C826C558D22B05D27FDFDD8FC6162C6715, ___convertor_0)); }
	inline RuntimeObject* get_convertor_0() const { return ___convertor_0; }
	inline RuntimeObject** get_address_of_convertor_0() { return &___convertor_0; }
	inline void set_convertor_0(RuntimeObject* value)
	{
		___convertor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___convertor_0), (void*)value);
	}

	inline static int32_t get_offset_of_hexValue_1() { return static_cast<int32_t>(offsetof(HexRPCType_1_tB31D46C826C558D22B05D27FDFDD8FC6162C6715, ___hexValue_1)); }
	inline String_t* get_hexValue_1() const { return ___hexValue_1; }
	inline String_t** get_address_of_hexValue_1() { return &___hexValue_1; }
	inline void set_hexValue_1(String_t* value)
	{
		___hexValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hexValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(HexRPCType_1_tB31D46C826C558D22B05D27FDFDD8FC6162C6715, ___value_2)); }
	inline String_t* get_value_2() const { return ___value_2; }
	inline String_t** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(String_t* value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_2), (void*)value);
	}

	inline static int32_t get_offset_of_lockingObject_3() { return static_cast<int32_t>(offsetof(HexRPCType_1_tB31D46C826C558D22B05D27FDFDD8FC6162C6715, ___lockingObject_3)); }
	inline RuntimeObject * get_lockingObject_3() const { return ___lockingObject_3; }
	inline RuntimeObject ** get_address_of_lockingObject_3() { return &___lockingObject_3; }
	inline void set_lockingObject_3(RuntimeObject * value)
	{
		___lockingObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lockingObject_3), (void*)value);
	}

	inline static int32_t get_offset_of_needsInitialisingValue_4() { return static_cast<int32_t>(offsetof(HexRPCType_1_tB31D46C826C558D22B05D27FDFDD8FC6162C6715, ___needsInitialisingValue_4)); }
	inline bool get_needsInitialisingValue_4() const { return ___needsInitialisingValue_4; }
	inline bool* get_address_of_needsInitialisingValue_4() { return &___needsInitialisingValue_4; }
	inline void set_needsInitialisingValue_4(bool value)
	{
		___needsInitialisingValue_4 = value;
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


// Nethereum.Hex.HexConvertors.HexBigIntegerBigEndianConvertor
struct HexBigIntegerBigEndianConvertor_t1129B2D756F8F2AC58C24DF897F7ED389E3C53B5  : public RuntimeObject
{
public:

public:
};


// Nethereum.Hex.HexConvertors.Extensions.HexBigIntegerConvertorExtensions
struct HexBigIntegerConvertorExtensions_t5476AE44889F9F369AB48E594EA6B426FCFFA3DA  : public RuntimeObject
{
public:

public:
};


// Nethereum.Hex.HexTypes.HexBigIntegerNumberExtensions
struct HexBigIntegerNumberExtensions_t62C3C1622C6AB61510E3C871393BBDBC3170E04B  : public RuntimeObject
{
public:

public:
};


// Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions
struct HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D  : public RuntimeObject
{
public:

public:
};

struct HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_StaticFields
{
public:
	// System.Byte[] Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::Empty
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_StaticFields, ___Empty_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Empty_0() const { return ___Empty_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// Nethereum.Hex.HexConvertors.Extensions.HexStringUTF8ConvertorExtensions
struct HexStringUTF8ConvertorExtensions_t663FB265BB3A08F6A3DB573E540A796A81C9710A  : public RuntimeObject
{
public:

public:
};


// Nethereum.Hex.HexTypes.HexTypeFactory
struct HexTypeFactory_tD36FCB9939B5DCF6F2374DEDC995D04272B9C301  : public RuntimeObject
{
public:

public:
};


// Nethereum.Hex.HexConvertors.HexUTF8StringConvertor
struct HexUTF8StringConvertor_tB0762EA7B8FD488EB73F8F9B244E373916B0D49F  : public RuntimeObject
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

// Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions/<>c
struct U3CU3Ec_tBDC07123AA01164CD96BF24083AD9F3470DF2236  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tBDC07123AA01164CD96BF24083AD9F3470DF2236_StaticFields
{
public:
	// Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions/<>c Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions/<>c::<>9
	U3CU3Ec_tBDC07123AA01164CD96BF24083AD9F3470DF2236 * ___U3CU3E9_0;
	// System.Func`2<System.Byte,System.String> Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions/<>c::<>9__1_0
	Func_2_t0ABEB1C940A11C62B1E03D6FBE71DE363BFF715A * ___U3CU3E9__1_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBDC07123AA01164CD96BF24083AD9F3470DF2236_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tBDC07123AA01164CD96BF24083AD9F3470DF2236 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tBDC07123AA01164CD96BF24083AD9F3470DF2236 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tBDC07123AA01164CD96BF24083AD9F3470DF2236 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBDC07123AA01164CD96BF24083AD9F3470DF2236_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_2_t0ABEB1C940A11C62B1E03D6FBE71DE363BFF715A * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_2_t0ABEB1C940A11C62B1E03D6FBE71DE363BFF715A ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_2_t0ABEB1C940A11C62B1E03D6FBE71DE363BFF715A * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_0_1), (void*)value);
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

// Nethereum.Hex.HexTypes.HexUTF8String
struct HexUTF8String_t8F8CA765EB9C387022D257B75724F1BA52A17703  : public HexRPCType_1_tB31D46C826C558D22B05D27FDFDD8FC6162C6715
{
public:

public:
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


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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


// Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>
struct HexRPCType_1_t071A5D5CD88D695FE303DC72328903D298589FAF  : public RuntimeObject
{
public:
	// Nethereum.Hex.HexConvertors.IHexConvertor`1<T> Nethereum.Hex.HexTypes.HexRPCType`1::convertor
	RuntimeObject* ___convertor_0;
	// System.String Nethereum.Hex.HexTypes.HexRPCType`1::hexValue
	String_t* ___hexValue_1;
	// T Nethereum.Hex.HexTypes.HexRPCType`1::value
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value_2;
	// System.Object Nethereum.Hex.HexTypes.HexRPCType`1::lockingObject
	RuntimeObject * ___lockingObject_3;
	// System.Boolean Nethereum.Hex.HexTypes.HexRPCType`1::needsInitialisingValue
	bool ___needsInitialisingValue_4;

public:
	inline static int32_t get_offset_of_convertor_0() { return static_cast<int32_t>(offsetof(HexRPCType_1_t071A5D5CD88D695FE303DC72328903D298589FAF, ___convertor_0)); }
	inline RuntimeObject* get_convertor_0() const { return ___convertor_0; }
	inline RuntimeObject** get_address_of_convertor_0() { return &___convertor_0; }
	inline void set_convertor_0(RuntimeObject* value)
	{
		___convertor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___convertor_0), (void*)value);
	}

	inline static int32_t get_offset_of_hexValue_1() { return static_cast<int32_t>(offsetof(HexRPCType_1_t071A5D5CD88D695FE303DC72328903D298589FAF, ___hexValue_1)); }
	inline String_t* get_hexValue_1() const { return ___hexValue_1; }
	inline String_t** get_address_of_hexValue_1() { return &___hexValue_1; }
	inline void set_hexValue_1(String_t* value)
	{
		___hexValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hexValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(HexRPCType_1_t071A5D5CD88D695FE303DC72328903D298589FAF, ___value_2)); }
	inline BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  get_value_2() const { return ___value_2; }
	inline BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 * get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_2))->____bits_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_lockingObject_3() { return static_cast<int32_t>(offsetof(HexRPCType_1_t071A5D5CD88D695FE303DC72328903D298589FAF, ___lockingObject_3)); }
	inline RuntimeObject * get_lockingObject_3() const { return ___lockingObject_3; }
	inline RuntimeObject ** get_address_of_lockingObject_3() { return &___lockingObject_3; }
	inline void set_lockingObject_3(RuntimeObject * value)
	{
		___lockingObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lockingObject_3), (void*)value);
	}

	inline static int32_t get_offset_of_needsInitialisingValue_4() { return static_cast<int32_t>(offsetof(HexRPCType_1_t071A5D5CD88D695FE303DC72328903D298589FAF, ___needsInitialisingValue_4)); }
	inline bool get_needsInitialisingValue_4() const { return ___needsInitialisingValue_4; }
	inline bool* get_address_of_needsInitialisingValue_4() { return &___needsInitialisingValue_4; }
	inline void set_needsInitialisingValue_4(bool value)
	{
		___needsInitialisingValue_4 = value;
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

// System.StringComparison
struct StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Nethereum.Hex.HexTypes.HexBigInteger
struct HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81  : public HexRPCType_1_t071A5D5CD88D695FE303DC72328903D298589FAF
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Func`2<System.Byte,System.String>
struct Func_2_t0ABEB1C940A11C62B1E03D6FBE71DE363BFF715A  : public MulticastDelegate_t
{
public:

public:
};


// System.FormatException
struct FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// System.Void Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::.ctor(Nethereum.Hex.HexConvertors.IHexConvertor`1<T>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexRPCType_1__ctor_m97FB570F0983C40524A7F98908EA5138048528B0_gshared (HexRPCType_1_t071A5D5CD88D695FE303DC72328903D298589FAF * __this, RuntimeObject* ___convertor0, String_t* ___hexValue1, const RuntimeMethod* method);
// System.Void Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::.ctor(T,Nethereum.Hex.HexConvertors.IHexConvertor`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexRPCType_1__ctor_m9B9976F2E952650796151465BFF35A705DB44A07_gshared (HexRPCType_1_t071A5D5CD88D695FE303DC72328903D298589FAF * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, RuntimeObject* ___convertor1, const RuntimeMethod* method);
// T Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  HexRPCType_1_get_Value_m9EBE99746FD588B10FEE49599A7F68819CC0AAF9_gshared (HexRPCType_1_t071A5D5CD88D695FE303DC72328903D298589FAF * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Reverse<System.Byte>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Reverse_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m41876E4876C765E5B1C7BF3D513B25006675B770_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Byte>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Byte>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * Enumerable_ToList_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m5B7AF9E58031B16D99774DC0E0C6D179985A083C_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::Insert(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m181CEDD9EBF190E7DA8FE6C75C842B20FB87BE18_gshared (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, int32_t ___index0, uint8_t ___item1, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Byte>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E_gshared (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Byte,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m3F2AD5F1C0CE9B75653984A2DA836CAE1291EDF9_gshared (Func_2_t6CFB329C57DAD97E6C197314ACB816899E0740EF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Byte,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisRuntimeObject_m7FC061D4A6AEB6093CA1143F013390716BBFBF51_gshared (RuntimeObject* ___source0, Func_2_t6CFB329C57DAD97E6C197314ACB816899E0740EF * ___selector1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void Nethereum.Hex.HexTypes.HexRPCType`1<System.Object>::.ctor(Nethereum.Hex.HexConvertors.IHexConvertor`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexRPCType_1__ctor_m127564868FD176B48700357BF20DD30923FA0360_gshared (HexRPCType_1_t00BF0589EBC41B004798863912266C131279A1BF * __this, RuntimeObject* ___convertor0, const RuntimeMethod* method);
// System.Void Nethereum.Hex.HexTypes.HexRPCType`1<System.Object>::.ctor(T,Nethereum.Hex.HexConvertors.IHexConvertor`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexRPCType_1__ctor_mBE20BEA197D551868DA4A14F838594A53D8B9D1B_gshared (HexRPCType_1_t00BF0589EBC41B004798863912266C131279A1BF * __this, RuntimeObject * ___value0, RuntimeObject* ___convertor1, const RuntimeMethod* method);
// System.Void Nethereum.Hex.HexTypes.HexRPCType`1<System.Object>::set_HexValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexRPCType_1_set_HexValue_mF3D526FC4C2222C401AF2C73E99C3AE755665C5B_gshared (HexRPCType_1_t00BF0589EBC41B004798863912266C131279A1BF * __this, String_t* ___value0, const RuntimeMethod* method);

// System.Void Nethereum.Hex.HexConvertors.HexBigIntegerBigEndianConvertor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexBigIntegerBigEndianConvertor__ctor_m52B010EF2B7075E3A34548653AE709C2468D33BB (HexBigIntegerBigEndianConvertor_t1129B2D756F8F2AC58C24DF897F7ED389E3C53B5 * __this, const RuntimeMethod* method);
// System.Void Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::.ctor(Nethereum.Hex.HexConvertors.IHexConvertor`1<T>,System.String)
inline void HexRPCType_1__ctor_m97FB570F0983C40524A7F98908EA5138048528B0 (HexRPCType_1_t071A5D5CD88D695FE303DC72328903D298589FAF * __this, RuntimeObject* ___convertor0, String_t* ___hexValue1, const RuntimeMethod* method)
{
	((  void (*) (HexRPCType_1_t071A5D5CD88D695FE303DC72328903D298589FAF *, RuntimeObject*, String_t*, const RuntimeMethod*))HexRPCType_1__ctor_m97FB570F0983C40524A7F98908EA5138048528B0_gshared)(__this, ___convertor0, ___hexValue1, method);
}
// System.Void Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::.ctor(T,Nethereum.Hex.HexConvertors.IHexConvertor`1<T>)
inline void HexRPCType_1__ctor_m9B9976F2E952650796151465BFF35A705DB44A07 (HexRPCType_1_t071A5D5CD88D695FE303DC72328903D298589FAF * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, RuntimeObject* ___convertor1, const RuntimeMethod* method)
{
	((  void (*) (HexRPCType_1_t071A5D5CD88D695FE303DC72328903D298589FAF *, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 , RuntimeObject*, const RuntimeMethod*))HexRPCType_1__ctor_m9B9976F2E952650796151465BFF35A705DB44A07_gshared)(__this, ___value0, ___convertor1, method);
}
// T Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::get_Value()
inline BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  HexRPCType_1_get_Value_m9EBE99746FD588B10FEE49599A7F68819CC0AAF9 (HexRPCType_1_t071A5D5CD88D695FE303DC72328903D298589FAF * __this, const RuntimeMethod* method)
{
	return ((  BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  (*) (HexRPCType_1_t071A5D5CD88D695FE303DC72328903D298589FAF *, const RuntimeMethod*))HexRPCType_1_get_Value_m9EBE99746FD588B10FEE49599A7F68819CC0AAF9_gshared)(__this, method);
}
// System.String System.Numerics.BigInteger::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m880DFDBDB71DB04DE20363C7EC1D81C70C124505 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 * __this, const RuntimeMethod* method);
// System.String Nethereum.Hex.HexConvertors.Extensions.HexBigIntegerConvertorExtensions::ToHex(System.Numerics.BigInteger,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexBigIntegerConvertorExtensions_ToHex_m723FC6571908547B92EE7298EB9E3F72FB29794C (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, bool ___littleEndian1, bool ___compact2, const RuntimeMethod* method);
// System.Numerics.BigInteger Nethereum.Hex.HexConvertors.Extensions.HexBigIntegerConvertorExtensions::HexToBigInteger(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  HexBigIntegerConvertorExtensions_HexToBigInteger_m4F9CEC692C859EB75C38E5B0FD225315310F59FA (String_t* ___hex0, bool ___isHexLittleEndian1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Byte[] System.Numerics.BigInteger::ToByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BigInteger_ToByteArray_mE55CBE13ADA8E09AFE2D10FF9AD2F373E4000B7B (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 * __this, const RuntimeMethod* method);
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
// System.Int32 System.Numerics.BigInteger::get_Sign()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_get_Sign_mB7A2E5A1C237EB3532F5AA6C13511B696B3EA660 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.Numerics.BigInteger::op_Equality(System.Numerics.BigInteger,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_m4F14B17595D7A750250AAB6BEC37E35417171993 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___left0, int64_t ___right1, const RuntimeMethod* method);
// System.Byte[] Nethereum.Hex.HexConvertors.Extensions.HexBigIntegerConvertorExtensions::ToByteArray(System.Numerics.BigInteger,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* HexBigIntegerConvertorExtensions_ToByteArray_m75F6BD77317F767286F3AC1645B38E912C05088B (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, bool ___littleEndian1, const RuntimeMethod* method);
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::ToHexCompact(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_ToHexCompact_mCD2ADE7A8A6FB4291A7197C6130CFA9AA19974BE (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::ToHex(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_ToHex_m1CC2B1935D1783A24DBC1122253E7C313B6B2900 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, bool ___prefix1, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  BigInteger_op_Implicit_m9806E7B722243D69545EE09318A5DC364ACBC652 (int32_t ___value0, const RuntimeMethod* method);
// System.Byte[] Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::HexToByteArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* HexByteConvertorExtensions_HexToByteArray_m89881F7CBE549A55575CCCB4E1C254E2D2E81B89 (String_t* ___value0, const RuntimeMethod* method);
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
// System.Void System.Numerics.BigInteger::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mE86998DE086542EC44032A9A6F3978C08DB8DC1D (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method);
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  BigInteger_op_Implicit_mFB175F06ED1BC9163CECF7C8523470E5F4DC2F9D (uint64_t ___value0, const RuntimeMethod* method);
// System.Void Nethereum.Hex.HexTypes.HexBigInteger::.ctor(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexBigInteger__ctor_mA95BF63C2036F3C4DC9B0568DB316D983565C9DD (HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, const RuntimeMethod* method);
// System.UInt64 System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t BigInteger_op_Explicit_m481EE272BCCA64CCCF7A78E7C4CF6E314D52E8BA (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Byte,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m0A11F88F2CFACBFD6EBD1FAC1D27F64D833918F5 (Func_2_t0ABEB1C940A11C62B1E03D6FBE71DE363BFF715A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t0ABEB1C940A11C62B1E03D6FBE71DE363BFF715A *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m3F2AD5F1C0CE9B75653984A2DA836CAE1291EDF9_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Byte,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisString_t_mFC8A0FC62793E5C3738812BE1FA8DEF3C1231364 (RuntimeObject* ___source0, Func_2_t0ABEB1C940A11C62B1E03D6FBE71DE363BFF715A * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t0ABEB1C940A11C62B1E03D6FBE71DE363BFF715A *, const RuntimeMethod*))Enumerable_Select_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisRuntimeObject_m7FC061D4A6AEB6093CA1143F013390716BBFBF51_gshared)(___source0, ___selector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared)(___source0, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::RemoveHexPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_RemoveHexPrefix_m9802B6BB32BC6F49DA47744E8B56C03EB64B2D4F (String_t* ___value0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::EnsureHexPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_EnsureHexPrefix_mD4A30715678BF7C9B3CC086AC6B12DC505B9DA1A (String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5 (String_t* ___a0, String_t* ___b1, int32_t ___comparisonType2, const RuntimeMethod* method);
// System.Boolean Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::HasHexPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HexByteConvertorExtensions_HasHexPrefix_mB768A6CE3C3D530AA73FBBB4C2BA7D727C9DC27A (String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::TrimStart(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimStart_m02B916CA047749DD55A03278F4A96FBA62C8935A (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___trimChars0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mEA750A0572C706249CDD826681741B7DD733381E (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.Byte Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::FromCharacterToByte(System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t HexByteConvertorExtensions_FromCharacterToByte_m516F63CAC8C32F42BD44E07D16BD59C99B8D4AA6 (Il2CppChar ___character0, int32_t ___index1, int32_t ___shift2, const RuntimeMethod* method);
// System.Byte[] Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::HexToByteArrayInternal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* HexByteConvertorExtensions_HexToByteArrayInternal_m5AA43F2E8F28688C38A5DD11F020BBEFEC93EF7B (String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.FormatException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mF8CFF64B9AB9A6B4AD5B33FC72E6EA7F6631FD51 (FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void System.FormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mB8F9A26F985EF9A6C0C082F7D70CFDF2DBDBB23B (FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Void Nethereum.Hex.HexConvertors.HexUTF8StringConvertor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexUTF8StringConvertor__ctor_m651C953CB5614EC9B503315D6F0663917BF20D16 (HexUTF8StringConvertor_tB0762EA7B8FD488EB73F8F9B244E373916B0D49F * __this, const RuntimeMethod* method);
// System.Void Nethereum.Hex.HexTypes.HexRPCType`1<System.String>::.ctor(Nethereum.Hex.HexConvertors.IHexConvertor`1<T>)
inline void HexRPCType_1__ctor_mE87A3D52226B9DD31D3F9A964EA37BAB21CF9611 (HexRPCType_1_tB31D46C826C558D22B05D27FDFDD8FC6162C6715 * __this, RuntimeObject* ___convertor0, const RuntimeMethod* method)
{
	((  void (*) (HexRPCType_1_tB31D46C826C558D22B05D27FDFDD8FC6162C6715 *, RuntimeObject*, const RuntimeMethod*))HexRPCType_1__ctor_m127564868FD176B48700357BF20DD30923FA0360_gshared)(__this, ___convertor0, method);
}
// System.Void Nethereum.Hex.HexTypes.HexRPCType`1<System.String>::.ctor(T,Nethereum.Hex.HexConvertors.IHexConvertor`1<T>)
inline void HexRPCType_1__ctor_m28BC883F88A31912A803D81C7807D9838497FF1E (HexRPCType_1_tB31D46C826C558D22B05D27FDFDD8FC6162C6715 * __this, String_t* ___value0, RuntimeObject* ___convertor1, const RuntimeMethod* method)
{
	((  void (*) (HexRPCType_1_tB31D46C826C558D22B05D27FDFDD8FC6162C6715 *, String_t*, RuntimeObject*, const RuntimeMethod*))HexRPCType_1__ctor_mBE20BEA197D551868DA4A14F838594A53D8B9D1B_gshared)(__this, ___value0, ___convertor1, method);
}
// System.Void Nethereum.Hex.HexTypes.HexUTF8String::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexUTF8String__ctor_mF4163AC6CE09616E10F9D4C48735169DBDC31DFB (HexUTF8String_t8F8CA765EB9C387022D257B75724F1BA52A17703 * __this, const RuntimeMethod* method);
// System.Void Nethereum.Hex.HexTypes.HexRPCType`1<System.String>::set_HexValue(System.String)
inline void HexRPCType_1_set_HexValue_mF18BFB4EFD1BED79759B14F24996FEABCC887806 (HexRPCType_1_tB31D46C826C558D22B05D27FDFDD8FC6162C6715 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (HexRPCType_1_tB31D46C826C558D22B05D27FDFDD8FC6162C6715 *, String_t*, const RuntimeMethod*))HexRPCType_1_set_HexValue_mF3D526FC4C2222C401AF2C73E99C3AE755665C5B_gshared)(__this, ___value0, method);
}
// System.String Nethereum.Hex.HexConvertors.Extensions.HexStringUTF8ConvertorExtensions::ToHexUTF8(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexStringUTF8ConvertorExtensions_ToHexUTF8_mD596BE80E86116956018FB14BD0E71B4CDCDADBE (String_t* ___value0, const RuntimeMethod* method);
// System.String Nethereum.Hex.HexConvertors.Extensions.HexStringUTF8ConvertorExtensions::HexToUTF8String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexStringUTF8ConvertorExtensions_HexToUTF8String_m4EE453D026A9D0561729CC087F3CEE0822841423 (String_t* ___hex0, const RuntimeMethod* method);
// System.Void Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4AB2A8498B50A2AE6CA490D013087999D49614A6 (U3CU3Ec_tBDC07123AA01164CD96BF24083AD9F3470DF2236 * __this, const RuntimeMethod* method);
// System.String System.Byte::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_mABEF6F24915951FF4A4D87B389D8418B2638178C (uint8_t* __this, String_t* ___format0, const RuntimeMethod* method);
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
// System.Void Nethereum.Hex.HexTypes.HexBigInteger::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexBigInteger__ctor_mBAFEC8E04FA8C0CF068A17ED53ED80F563AF11B2 (HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * __this, String_t* ___hex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexBigIntegerBigEndianConvertor_t1129B2D756F8F2AC58C24DF897F7ED389E3C53B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexRPCType_1__ctor_m97FB570F0983C40524A7F98908EA5138048528B0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HexBigIntegerBigEndianConvertor_t1129B2D756F8F2AC58C24DF897F7ED389E3C53B5 * L_0 = (HexBigIntegerBigEndianConvertor_t1129B2D756F8F2AC58C24DF897F7ED389E3C53B5 *)il2cpp_codegen_object_new(HexBigIntegerBigEndianConvertor_t1129B2D756F8F2AC58C24DF897F7ED389E3C53B5_il2cpp_TypeInfo_var);
		HexBigIntegerBigEndianConvertor__ctor_m52B010EF2B7075E3A34548653AE709C2468D33BB(L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___hex0;
		HexRPCType_1__ctor_m97FB570F0983C40524A7F98908EA5138048528B0(__this, L_0, L_1, /*hidden argument*/HexRPCType_1__ctor_m97FB570F0983C40524A7F98908EA5138048528B0_RuntimeMethod_var);
		return;
	}
}
// System.Void Nethereum.Hex.HexTypes.HexBigInteger::.ctor(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexBigInteger__ctor_mA95BF63C2036F3C4DC9B0568DB316D983565C9DD (HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexBigIntegerBigEndianConvertor_t1129B2D756F8F2AC58C24DF897F7ED389E3C53B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexRPCType_1__ctor_m9B9976F2E952650796151465BFF35A705DB44A07_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0 = ___value0;
		HexBigIntegerBigEndianConvertor_t1129B2D756F8F2AC58C24DF897F7ED389E3C53B5 * L_1 = (HexBigIntegerBigEndianConvertor_t1129B2D756F8F2AC58C24DF897F7ED389E3C53B5 *)il2cpp_codegen_object_new(HexBigIntegerBigEndianConvertor_t1129B2D756F8F2AC58C24DF897F7ED389E3C53B5_il2cpp_TypeInfo_var);
		HexBigIntegerBigEndianConvertor__ctor_m52B010EF2B7075E3A34548653AE709C2468D33BB(L_1, /*hidden argument*/NULL);
		HexRPCType_1__ctor_m9B9976F2E952650796151465BFF35A705DB44A07(__this, L_0, L_1, /*hidden argument*/HexRPCType_1__ctor_m9B9976F2E952650796151465BFF35A705DB44A07_RuntimeMethod_var);
		return;
	}
}
// System.String Nethereum.Hex.HexTypes.HexBigInteger::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexBigInteger_ToString_m7602AC0DF39F18E5788CA7D7EBC1F24CA14C16ED (HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexRPCType_1_get_Value_m9EBE99746FD588B10FEE49599A7F68819CC0AAF9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0;
		L_0 = HexRPCType_1_get_Value_m9EBE99746FD588B10FEE49599A7F68819CC0AAF9(__this, /*hidden argument*/HexRPCType_1_get_Value_m9EBE99746FD588B10FEE49599A7F68819CC0AAF9_RuntimeMethod_var);
		V_0 = L_0;
		String_t* L_1;
		L_1 = BigInteger_ToString_m880DFDBDB71DB04DE20363C7EC1D81C70C124505((BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 *)(&V_0), /*hidden argument*/NULL);
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
// System.String Nethereum.Hex.HexConvertors.HexBigIntegerBigEndianConvertor::ConvertToHex(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexBigIntegerBigEndianConvertor_ConvertToHex_mBB9036EC75EFB617DF3439A973FC83A93B4DCBE1 (HexBigIntegerBigEndianConvertor_t1129B2D756F8F2AC58C24DF897F7ED389E3C53B5 * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___newValue0, const RuntimeMethod* method)
{
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0 = ___newValue0;
		String_t* L_1;
		L_1 = HexBigIntegerConvertorExtensions_ToHex_m723FC6571908547B92EE7298EB9E3F72FB29794C(L_0, (bool)0, (bool)1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Numerics.BigInteger Nethereum.Hex.HexConvertors.HexBigIntegerBigEndianConvertor::ConvertFromHex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  HexBigIntegerBigEndianConvertor_ConvertFromHex_mC711D6E8FE226D7541D77AE0F24B5591899AD87D (HexBigIntegerBigEndianConvertor_t1129B2D756F8F2AC58C24DF897F7ED389E3C53B5 * __this, String_t* ___hex0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___hex0;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_1;
		L_1 = HexBigIntegerConvertorExtensions_HexToBigInteger_m4F9CEC692C859EB75C38E5B0FD225315310F59FA(L_0, (bool)0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Nethereum.Hex.HexConvertors.HexBigIntegerBigEndianConvertor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexBigIntegerBigEndianConvertor__ctor_m52B010EF2B7075E3A34548653AE709C2468D33BB (HexBigIntegerBigEndianConvertor_t1129B2D756F8F2AC58C24DF897F7ED389E3C53B5 * __this, const RuntimeMethod* method)
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
// System.Byte[] Nethereum.Hex.HexConvertors.Extensions.HexBigIntegerConvertorExtensions::ToByteArray(System.Numerics.BigInteger,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* HexBigIntegerConvertorExtensions_ToByteArray_m75F6BD77317F767286F3AC1645B38E912C05088B (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, bool ___littleEndian1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Reverse_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m41876E4876C765E5B1C7BF3D513B25006675B770_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
		bool L_1 = ___littleEndian1;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001c;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = BigInteger_ToByteArray_mE55CBE13ADA8E09AFE2D10FF9AD2F373E4000B7B((BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 *)(&___value0), /*hidden argument*/NULL);
		RuntimeObject* L_3;
		L_3 = Enumerable_Reverse_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m41876E4876C765E5B1C7BF3D513B25006675B770((RuntimeObject*)(RuntimeObject*)L_2, /*hidden argument*/Enumerable_Reverse_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m41876E4876C765E5B1C7BF3D513B25006675B770_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4(L_3, /*hidden argument*/Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4_RuntimeMethod_var);
		V_0 = L_4;
		goto IL_0029;
	}

IL_001c:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5;
		L_5 = BigInteger_ToByteArray_mE55CBE13ADA8E09AFE2D10FF9AD2F373E4000B7B((BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 *)(&___value0), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6;
		L_6 = Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4((RuntimeObject*)(RuntimeObject*)L_5, /*hidden argument*/Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4_RuntimeMethod_var);
		V_0 = L_6;
	}

IL_0029:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
		return L_7;
	}
}
// System.String Nethereum.Hex.HexConvertors.Extensions.HexBigIntegerConvertorExtensions::ToHex(System.Numerics.BigInteger,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexBigIntegerConvertorExtensions_ToHex_m723FC6571908547B92EE7298EB9E3F72FB29794C (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, bool ___littleEndian1, bool ___compact2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BCF4B50E72B7CCD6AD748E8D2FDCADBF49961A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		int32_t L_0;
		L_0 = BigInteger_get_Sign_mB7A2E5A1C237EB3532F5AA6C13511B696B3EA660((BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 *)(&___value0), /*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		Exception_t * L_1 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral14EDE195912AFD586B3C9D6841D4786E35B50299)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HexBigIntegerConvertorExtensions_ToHex_m723FC6571908547B92EE7298EB9E3F72FB29794C_RuntimeMethod_var)));
	}

IL_0015:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_2 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BigInteger_op_Equality_m4F14B17595D7A750250AAB6BEC37E35417171993(L_2, ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		return _stringLiteral4BCF4B50E72B7CCD6AD748E8D2FDCADBF49961A8;
	}

IL_0025:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_4 = ___value0;
		bool L_5 = ___littleEndian1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6;
		L_6 = HexBigIntegerConvertorExtensions_ToByteArray_m75F6BD77317F767286F3AC1645B38E912C05088B(L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		bool L_7 = ___compact2;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = HexByteConvertorExtensions_ToHexCompact_mCD2ADE7A8A6FB4291A7197C6130CFA9AA19974BE(L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0041:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		String_t* L_12;
		L_12 = HexByteConvertorExtensions_ToHex_m1CC2B1935D1783A24DBC1122253E7C313B6B2900(L_11, (bool)0, /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Numerics.BigInteger Nethereum.Hex.HexConvertors.Extensions.HexBigIntegerConvertorExtensions::HexToBigInteger(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  HexBigIntegerConvertorExtensions_HexToBigInteger_m4F9CEC692C859EB75C38E5B0FD225315310F59FA (String_t* ___hex0, bool ___isHexLittleEndian1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Reverse_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m41876E4876C765E5B1C7BF3D513B25006675B770_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m5B7AF9E58031B16D99774DC0E0C6D179985A083C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_m181CEDD9EBF190E7DA8FE6C75C842B20FB87BE18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BCF4B50E72B7CCD6AD748E8D2FDCADBF49961A8);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		String_t* L_0 = ___hex0;
		bool L_1;
		L_1 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, _stringLiteral4BCF4B50E72B7CCD6AD748E8D2FDCADBF49961A8, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_2;
		L_2 = BigInteger_op_Implicit_m9806E7B722243D69545EE09318A5DC364ACBC652(0, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		String_t* L_3 = ___hex0;
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = HexByteConvertorExtensions_HexToByteArray_m89881F7CBE549A55575CCCB4E1C254E2D2E81B89(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		bool L_5 = ((BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
		bool L_6 = ___isHexLittleEndian1;
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_0041;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_8;
		L_8 = Enumerable_ToList_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m5B7AF9E58031B16D99774DC0E0C6D179985A083C((RuntimeObject*)(RuntimeObject*)L_7, /*hidden argument*/Enumerable_ToList_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m5B7AF9E58031B16D99774DC0E0C6D179985A083C_RuntimeMethod_var);
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_9 = L_8;
		List_1_Insert_m181CEDD9EBF190E7DA8FE6C75C842B20FB87BE18(L_9, 0, (uint8_t)0, /*hidden argument*/List_1_Insert_m181CEDD9EBF190E7DA8FE6C75C842B20FB87BE18_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10;
		L_10 = List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E(L_9, /*hidden argument*/List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E_RuntimeMethod_var);
		RuntimeObject* L_11;
		L_11 = Enumerable_Reverse_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m41876E4876C765E5B1C7BF3D513B25006675B770((RuntimeObject*)(RuntimeObject*)L_10, /*hidden argument*/Enumerable_Reverse_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m41876E4876C765E5B1C7BF3D513B25006675B770_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12;
		L_12 = Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4(L_11, /*hidden argument*/Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4_RuntimeMethod_var);
		V_0 = L_12;
	}

IL_0041:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_0;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_14;
		memset((&L_14), 0, sizeof(L_14));
		BigInteger__ctor_mE86998DE086542EC44032A9A6F3978C08DB8DC1D((&L_14), L_13, /*hidden argument*/NULL);
		return L_14;
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
// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.Hex.HexTypes.HexBigIntegerNumberExtensions::ToHexBigInteger(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * HexBigIntegerNumberExtensions_ToHexBigInteger_mBC943918278AFCC7404D94C5C5A1A950443AD726 (uint64_t ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0 = ___val0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_1;
		L_1 = BigInteger_op_Implicit_mFB175F06ED1BC9163CECF7C8523470E5F4DC2F9D(L_0, /*hidden argument*/NULL);
		HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * L_2 = (HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 *)il2cpp_codegen_object_new(HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81_il2cpp_TypeInfo_var);
		HexBigInteger__ctor_mA95BF63C2036F3C4DC9B0568DB316D983565C9DD(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.Hex.HexTypes.HexBigIntegerNumberExtensions::ToHexBigInteger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * HexBigIntegerNumberExtensions_ToHexBigInteger_m4629BA9E5AD61AB318F1F718F74A2EA1F277E638 (int32_t ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___val0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_1;
		L_1 = BigInteger_op_Implicit_m9806E7B722243D69545EE09318A5DC364ACBC652(L_0, /*hidden argument*/NULL);
		HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * L_2 = (HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 *)il2cpp_codegen_object_new(HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81_il2cpp_TypeInfo_var);
		HexBigInteger__ctor_mA95BF63C2036F3C4DC9B0568DB316D983565C9DD(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.Hex.HexTypes.HexBigIntegerNumberExtensions::ToHexBigInteger(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * HexBigIntegerNumberExtensions_ToHexBigInteger_mDBDDA22584672DA33D233A2A32693F847A4EF957 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0 = ___val0;
		HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * L_1 = (HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 *)il2cpp_codegen_object_new(HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81_il2cpp_TypeInfo_var);
		HexBigInteger__ctor_mA95BF63C2036F3C4DC9B0568DB316D983565C9DD(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.UInt64 Nethereum.Hex.HexTypes.HexBigIntegerNumberExtensions::ToUlong(Nethereum.Hex.HexTypes.HexBigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t HexBigIntegerNumberExtensions_ToUlong_mC8C7A43ED91DD9F95C32208F45F2446D53D31872 (HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexRPCType_1_get_Value_m9EBE99746FD588B10FEE49599A7F68819CC0AAF9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * L_0 = ___val0;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_1;
		L_1 = HexRPCType_1_get_Value_m9EBE99746FD588B10FEE49599A7F68819CC0AAF9(L_0, /*hidden argument*/HexRPCType_1_get_Value_m9EBE99746FD588B10FEE49599A7F68819CC0AAF9_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = BigInteger_op_Explicit_m481EE272BCCA64CCCF7A78E7C4CF6E314D52E8BA(L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::ToHex(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_ToHex_m1CC2B1935D1783A24DBC1122253E7C313B6B2900 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, bool ___prefix1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisString_t_mFC8A0FC62793E5C3738812BE1FA8DEF3C1231364_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m0A11F88F2CFACBFD6EBD1FAC1D27F64D833918F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t0ABEB1C940A11C62B1E03D6FBE71DE363BFF715A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToHexU3Eb__1_0_m65C1ED2217EDBD3B7147E067658BF2A0147EBADE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBDC07123AA01164CD96BF24083AD9F3470DF2236_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	Func_2_t0ABEB1C940A11C62B1E03D6FBE71DE363BFF715A * G_B5_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B5_1 = NULL;
	String_t* G_B5_2 = NULL;
	Func_2_t0ABEB1C940A11C62B1E03D6FBE71DE363BFF715A * G_B4_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	{
		bool L_0 = ___prefix1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_000f;
	}

IL_000a:
	{
		G_B3_0 = _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89;
	}

IL_000f:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tBDC07123AA01164CD96BF24083AD9F3470DF2236_il2cpp_TypeInfo_var);
		Func_2_t0ABEB1C940A11C62B1E03D6FBE71DE363BFF715A * L_2 = ((U3CU3Ec_tBDC07123AA01164CD96BF24083AD9F3470DF2236_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDC07123AA01164CD96BF24083AD9F3470DF2236_il2cpp_TypeInfo_var))->get_U3CU3E9__1_0_1();
		Func_2_t0ABEB1C940A11C62B1E03D6FBE71DE363BFF715A * L_3 = L_2;
		G_B4_0 = L_3;
		G_B4_1 = L_1;
		G_B4_2 = G_B3_0;
		if (L_3)
		{
			G_B5_0 = L_3;
			G_B5_1 = L_1;
			G_B5_2 = G_B3_0;
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tBDC07123AA01164CD96BF24083AD9F3470DF2236_il2cpp_TypeInfo_var);
		U3CU3Ec_tBDC07123AA01164CD96BF24083AD9F3470DF2236 * L_4 = ((U3CU3Ec_tBDC07123AA01164CD96BF24083AD9F3470DF2236_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDC07123AA01164CD96BF24083AD9F3470DF2236_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t0ABEB1C940A11C62B1E03D6FBE71DE363BFF715A * L_5 = (Func_2_t0ABEB1C940A11C62B1E03D6FBE71DE363BFF715A *)il2cpp_codegen_object_new(Func_2_t0ABEB1C940A11C62B1E03D6FBE71DE363BFF715A_il2cpp_TypeInfo_var);
		Func_2__ctor_m0A11F88F2CFACBFD6EBD1FAC1D27F64D833918F5(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CToHexU3Eb__1_0_m65C1ED2217EDBD3B7147E067658BF2A0147EBADE_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m0A11F88F2CFACBFD6EBD1FAC1D27F64D833918F5_RuntimeMethod_var);
		Func_2_t0ABEB1C940A11C62B1E03D6FBE71DE363BFF715A * L_6 = L_5;
		((U3CU3Ec_tBDC07123AA01164CD96BF24083AD9F3470DF2236_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDC07123AA01164CD96BF24083AD9F3470DF2236_il2cpp_TypeInfo_var))->set_U3CU3E9__1_0_1(L_6);
		G_B5_0 = L_6;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
	}

IL_002f:
	{
		RuntimeObject* L_7;
		L_7 = Enumerable_Select_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisString_t_mFC8A0FC62793E5C3738812BE1FA8DEF3C1231364((RuntimeObject*)(RuntimeObject*)G_B5_1, G_B5_0, /*hidden argument*/Enumerable_Select_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisString_t_mFC8A0FC62793E5C3738812BE1FA8DEF3C1231364_RuntimeMethod_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8;
		L_8 = Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582(L_7, /*hidden argument*/Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var);
		String_t* L_9;
		L_9 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B5_2, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Boolean Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::HasHexPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HexByteConvertorExtensions_HasHexPrefix_mB768A6CE3C3D530AA73FBBB4C2BA7D727C9DC27A (String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_0, _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::IsHex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HexByteConvertorExtensions_IsHex_mD8D4FF9339B8C8922A3640426B61E8FA0BB30404 (String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t G_B9_0 = 0;
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = HexByteConvertorExtensions_RemoveHexPrefix_m9802B6BB32BC6F49DA47744E8B56C03EB64B2D4F(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0042;
	}

IL_000b:
	{
		String_t* L_2 = V_0;
		int32_t L_3 = V_1;
		Il2CppChar L_4;
		L_4 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		Il2CppChar L_5 = V_2;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)48))))
		{
			goto IL_001d;
		}
	}
	{
		Il2CppChar L_6 = V_2;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0039;
		}
	}

IL_001d:
	{
		Il2CppChar L_7 = V_2;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)97))))
		{
			goto IL_0027;
		}
	}
	{
		Il2CppChar L_8 = V_2;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)102))))
		{
			goto IL_0039;
		}
	}

IL_0027:
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)65))))
		{
			goto IL_0036;
		}
	}
	{
		Il2CppChar L_10 = V_2;
		G_B9_0 = ((((int32_t)((((int32_t)L_10) > ((int32_t)((int32_t)70)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003a;
	}

IL_0036:
	{
		G_B9_0 = 0;
		goto IL_003a;
	}

IL_0039:
	{
		G_B9_0 = 1;
	}

IL_003a:
	{
		if (G_B9_0)
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_003e:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0042:
	{
		int32_t L_12 = V_1;
		String_t* L_13 = V_0;
		int32_t L_14;
		L_14 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}
}
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::RemoveHexPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_RemoveHexPrefix_m9802B6BB32BC6F49DA47744E8B56C03EB64B2D4F (String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	{
		String_t* L_0 = ___value0;
		String_t* L_1 = ___value0;
		bool L_2;
		L_2 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_1, _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		if (L_2)
		{
			G_B2_0 = L_0;
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 2;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		String_t* L_3;
		L_3 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::IsTheSameHex(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HexByteConvertorExtensions_IsTheSameHex_m969C0759C755976EAF26EC7B95BAD9FAE3045B6A (String_t* ___first0, String_t* ___second1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___first0;
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = HexByteConvertorExtensions_EnsureHexPrefix_mD4A30715678BF7C9B3CC086AC6B12DC505B9DA1A(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___second1;
		String_t* L_4;
		L_4 = HexByteConvertorExtensions_EnsureHexPrefix_mD4A30715678BF7C9B3CC086AC6B12DC505B9DA1A(L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5(L_2, L_5, 4, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::EnsureHexPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_EnsureHexPrefix_mD4A30715678BF7C9B3CC086AC6B12DC505B9DA1A (String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0005:
	{
		String_t* L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = HexByteConvertorExtensions_HasHexPrefix_mB768A6CE3C3D530AA73FBBB4C2BA7D727C9DC27A(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_3 = ___value0;
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0019:
	{
		String_t* L_5 = ___value0;
		return L_5;
	}
}
// System.String[] Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::EnsureHexPrefix(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* HexByteConvertorExtensions_EnsureHexPrefix_m23497A1A56E0DA2CFA792708C90F17942C353FC6 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___values0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = ___values0;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0016;
	}

IL_0009:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = HexByteConvertorExtensions_EnsureHexPrefix_mD4A30715678BF7C9B3CC086AC6B12DC505B9DA1A(L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0016:
	{
		int32_t L_8 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0009;
		}
	}

IL_001c:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = ___values0;
		return L_10;
	}
}
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::ToHexCompact(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_ToHexCompact_mCD2ADE7A8A6FB4291A7197C6130CFA9AA19974BE (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = HexByteConvertorExtensions_ToHex_m1CC2B1935D1783A24DBC1122253E7C313B6B2900(L_0, (bool)0, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = L_2;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)48));
		String_t* L_4;
		L_4 = String_TrimStart_m02B916CA047749DD55A03278F4A96FBA62C8935A(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Byte[] Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::HexToByteArrayInternal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* HexByteConvertorExtensions_HexToByteArrayInternal_m5AA43F2E8F28688C38A5DD11F020BBEFEC93EF7B (String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint8_t V_6 = 0x0;
	uint8_t V_7 = 0x0;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	{
		V_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ((HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_StaticFields*)il2cpp_codegen_static_fields_for(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var))->get_Empty_0();
		V_0 = L_2;
		goto IL_00b4;
	}

IL_0015:
	{
		String_t* L_3 = ___value0;
		int32_t L_4;
		L_4 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___value0;
		bool L_6;
		L_6 = String_StartsWith_mEA750A0572C706249CDD826681741B7DD733381E(L_5, _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89, 4, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		if (L_6)
		{
			G_B4_0 = L_4;
			goto IL_002c;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 2;
		G_B5_1 = G_B4_0;
	}

IL_002d:
	{
		V_1 = G_B5_0;
		int32_t L_7 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)G_B5_1, (int32_t)L_7));
		V_3 = (bool)0;
		int32_t L_8 = V_2;
		if (!((int32_t)((int32_t)L_8%(int32_t)2)))
		{
			goto IL_003e;
		}
	}
	{
		V_3 = (bool)1;
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_003e:
	{
		int32_t L_10 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)L_10/(int32_t)2)));
		V_0 = L_11;
		V_4 = 0;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0068;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_0;
		int32_t L_14 = V_4;
		int32_t L_15 = L_14;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		String_t* L_16 = ___value0;
		int32_t L_17 = V_1;
		Il2CppChar L_18;
		L_18 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_16, L_17, /*hidden argument*/NULL);
		int32_t L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		uint8_t L_20;
		L_20 = HexByteConvertorExtensions_FromCharacterToByte_m516F63CAC8C32F42BD44E07D16BD59C99B8D4AA6(L_18, L_19, 0, /*hidden argument*/NULL);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (uint8_t)L_20);
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0068:
	{
		int32_t L_22 = V_1;
		V_5 = L_22;
		goto IL_00aa;
	}

IL_006d:
	{
		String_t* L_23 = ___value0;
		int32_t L_24 = V_5;
		Il2CppChar L_25;
		L_25 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_23, L_24, /*hidden argument*/NULL);
		int32_t L_26 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		uint8_t L_27;
		L_27 = HexByteConvertorExtensions_FromCharacterToByte_m516F63CAC8C32F42BD44E07D16BD59C99B8D4AA6(L_25, L_26, 4, /*hidden argument*/NULL);
		V_6 = L_27;
		String_t* L_28 = ___value0;
		int32_t L_29 = V_5;
		Il2CppChar L_30;
		L_30 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_28, ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1)), /*hidden argument*/NULL);
		int32_t L_31 = V_5;
		uint8_t L_32;
		L_32 = HexByteConvertorExtensions_FromCharacterToByte_m516F63CAC8C32F42BD44E07D16BD59C99B8D4AA6(L_30, ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1)), 0, /*hidden argument*/NULL);
		V_7 = L_32;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33 = V_0;
		int32_t L_34 = V_4;
		int32_t L_35 = L_34;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		uint8_t L_36 = V_6;
		uint8_t L_37 = V_7;
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_36|(int32_t)L_37)))));
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)2));
	}

IL_00aa:
	{
		int32_t L_39 = V_5;
		String_t* L_40 = ___value0;
		int32_t L_41;
		L_41 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_40, /*hidden argument*/NULL);
		if ((((int32_t)L_39) < ((int32_t)L_41)))
		{
			goto IL_006d;
		}
	}

IL_00b4:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_42 = V_0;
		return L_42;
	}
}
// System.Byte[] Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::HexToByteArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* HexByteConvertorExtensions_HexToByteArray_m89881F7CBE549A55575CCCB4E1C254E2D2E81B89 (String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = HexByteConvertorExtensions_HexToByteArrayInternal_m5AA43F2E8F28688C38A5DD11F020BBEFEC93EF7B(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_001c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{ // begin catch(System.FormatException)
		V_1 = ((FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 *)IL2CPP_GET_ACTIVE_EXCEPTION(FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 *));
		String_t* L_2 = ___value0;
		String_t* L_3;
		L_3 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral347BB4CBF7CC52D07091977DE184B410FFDDD5B7)), L_2, /*hidden argument*/NULL);
		FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * L_4 = V_1;
		FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * L_5 = (FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var)));
		FormatException__ctor_mF8CFF64B9AB9A6B4AD5B33FC72E6EA7F6631FD51(L_5, L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HexByteConvertorExtensions_HexToByteArray_m89881F7CBE549A55575CCCB4E1C254E2D2E81B89_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_001c:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_0;
		return L_6;
	}
}
// System.Byte Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::FromCharacterToByte(System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t HexByteConvertorExtensions_FromCharacterToByte_m516F63CAC8C32F42BD44E07D16BD59C99B8D4AA6 (Il2CppChar ___character0, int32_t ___index1, int32_t ___shift2, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		Il2CppChar L_0 = ___character0;
		V_0 = (uint8_t)((int32_t)((uint8_t)L_0));
		uint8_t L_1 = V_0;
		if ((((int32_t)((int32_t)64)) >= ((int32_t)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		uint8_t L_2 = V_0;
		if ((((int32_t)((int32_t)71)) > ((int32_t)L_2)))
		{
			goto IL_0017;
		}
	}

IL_000d:
	{
		uint8_t L_3 = V_0;
		if ((((int32_t)((int32_t)96)) >= ((int32_t)L_3)))
		{
			goto IL_0047;
		}
	}
	{
		uint8_t L_4 = V_0;
		if ((((int32_t)((int32_t)103)) <= ((int32_t)L_4)))
		{
			goto IL_0047;
		}
	}

IL_0017:
	{
		uint8_t L_5 = V_0;
		if ((!(((uint32_t)((int32_t)64)) == ((uint32_t)((int32_t)((int32_t)((int32_t)64)&(int32_t)L_5))))))
		{
			goto IL_007a;
		}
	}
	{
		uint8_t L_6 = V_0;
		if ((!(((uint32_t)((int32_t)32)) == ((uint32_t)((int32_t)((int32_t)((int32_t)32)&(int32_t)L_6))))))
		{
			goto IL_0037;
		}
	}
	{
		uint8_t L_7 = V_0;
		int32_t L_8 = ___shift2;
		V_0 = (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)((int32_t)10))), (int32_t)((int32_t)97)))<<(int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)31)))))));
		goto IL_007a;
	}

IL_0037:
	{
		uint8_t L_9 = V_0;
		int32_t L_10 = ___shift2;
		V_0 = (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)((int32_t)10))), (int32_t)((int32_t)65)))<<(int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)31)))))));
		goto IL_007a;
	}

IL_0047:
	{
		uint8_t L_11 = V_0;
		if ((((int32_t)((int32_t)41)) >= ((int32_t)L_11)))
		{
			goto IL_005e;
		}
	}
	{
		uint8_t L_12 = V_0;
		if ((((int32_t)((int32_t)64)) <= ((int32_t)L_12)))
		{
			goto IL_005e;
		}
	}
	{
		uint8_t L_13 = V_0;
		int32_t L_14 = ___shift2;
		V_0 = (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)((int32_t)48)))<<(int32_t)((int32_t)((int32_t)L_14&(int32_t)((int32_t)31)))))));
		goto IL_007a;
	}

IL_005e:
	{
		Il2CppChar L_15 = ___character0;
		Il2CppChar L_16 = L_15;
		RuntimeObject * L_17 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)), &L_16);
		int32_t L_18 = ___index1;
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_19);
		String_t* L_21;
		L_21 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral70C6D80A1C9DC0AE77AA63E1DC135F76ED9B37E0)), L_17, L_20, /*hidden argument*/NULL);
		FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * L_22 = (FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var)));
		FormatException__ctor_mB8F9A26F985EF9A6C0C082F7D70CFDF2DBDBB23B(L_22, L_21, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HexByteConvertorExtensions_FromCharacterToByte_m516F63CAC8C32F42BD44E07D16BD59C99B8D4AA6_RuntimeMethod_var)));
	}

IL_007a:
	{
		uint8_t L_23 = V_0;
		return L_23;
	}
}
// System.Void Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexByteConvertorExtensions__cctor_m935D84E69C8A6AF9A0EAF1E069579EAEF7FD2728 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)0);
		((HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_StaticFields*)il2cpp_codegen_static_fields_for(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var))->set_Empty_0(L_0);
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
// System.String Nethereum.Hex.HexConvertors.Extensions.HexStringUTF8ConvertorExtensions::ToHexUTF8(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexStringUTF8ConvertorExtensions_ToHexUTF8_mD596BE80E86116956018FB14BD0E71B4CDCDADBE (String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		s_Il2CppMethodInitialized = true;
	}
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		String_t* L_1 = ___value0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = HexByteConvertorExtensions_ToHex_m1CC2B1935D1783A24DBC1122253E7C313B6B2900(L_2, (bool)0, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String Nethereum.Hex.HexConvertors.Extensions.HexStringUTF8ConvertorExtensions::HexToUTF8String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexStringUTF8ConvertorExtensions_HexToUTF8String_m4EE453D026A9D0561729CC087F3CEE0822841423 (String_t* ___hex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		String_t* L_0 = ___hex0;
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = HexByteConvertorExtensions_HexToByteArray_m89881F7CBE549A55575CCCB4E1C254E2D2E81B89(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_2;
		L_2 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		String_t* L_5;
		L_5 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))));
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
// System.Void Nethereum.Hex.HexTypes.HexTypeFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexTypeFactory__ctor_mB45AB3EE56175753A22B2A649C1F5D9775BC9C7F (HexTypeFactory_tD36FCB9939B5DCF6F2374DEDC995D04272B9C301 * __this, const RuntimeMethod* method)
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
// System.Void Nethereum.Hex.HexTypes.HexUTF8String::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexUTF8String__ctor_mF4163AC6CE09616E10F9D4C48735169DBDC31DFB (HexUTF8String_t8F8CA765EB9C387022D257B75724F1BA52A17703 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexRPCType_1__ctor_mE87A3D52226B9DD31D3F9A964EA37BAB21CF9611_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexUTF8StringConvertor_tB0762EA7B8FD488EB73F8F9B244E373916B0D49F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HexUTF8StringConvertor_tB0762EA7B8FD488EB73F8F9B244E373916B0D49F * L_0 = (HexUTF8StringConvertor_tB0762EA7B8FD488EB73F8F9B244E373916B0D49F *)il2cpp_codegen_object_new(HexUTF8StringConvertor_tB0762EA7B8FD488EB73F8F9B244E373916B0D49F_il2cpp_TypeInfo_var);
		HexUTF8StringConvertor__ctor_m651C953CB5614EC9B503315D6F0663917BF20D16(L_0, /*hidden argument*/NULL);
		HexRPCType_1__ctor_mE87A3D52226B9DD31D3F9A964EA37BAB21CF9611(__this, L_0, /*hidden argument*/HexRPCType_1__ctor_mE87A3D52226B9DD31D3F9A964EA37BAB21CF9611_RuntimeMethod_var);
		return;
	}
}
// System.Void Nethereum.Hex.HexTypes.HexUTF8String::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexUTF8String__ctor_m65479112DFA89DE1D1F7160BE4BCF6A36ABE73C4 (HexUTF8String_t8F8CA765EB9C387022D257B75724F1BA52A17703 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexRPCType_1__ctor_m28BC883F88A31912A803D81C7807D9838497FF1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexUTF8StringConvertor_tB0762EA7B8FD488EB73F8F9B244E373916B0D49F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		HexUTF8StringConvertor_tB0762EA7B8FD488EB73F8F9B244E373916B0D49F * L_1 = (HexUTF8StringConvertor_tB0762EA7B8FD488EB73F8F9B244E373916B0D49F *)il2cpp_codegen_object_new(HexUTF8StringConvertor_tB0762EA7B8FD488EB73F8F9B244E373916B0D49F_il2cpp_TypeInfo_var);
		HexUTF8StringConvertor__ctor_m651C953CB5614EC9B503315D6F0663917BF20D16(L_1, /*hidden argument*/NULL);
		HexRPCType_1__ctor_m28BC883F88A31912A803D81C7807D9838497FF1E(__this, L_0, L_1, /*hidden argument*/HexRPCType_1__ctor_m28BC883F88A31912A803D81C7807D9838497FF1E_RuntimeMethod_var);
		return;
	}
}
// Nethereum.Hex.HexTypes.HexUTF8String Nethereum.Hex.HexTypes.HexUTF8String::CreateFromHex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HexUTF8String_t8F8CA765EB9C387022D257B75724F1BA52A17703 * HexUTF8String_CreateFromHex_m7D311F43B084E6B0E9B7D85BD2757C7870DCD6DF (String_t* ___hex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexRPCType_1_set_HexValue_mF18BFB4EFD1BED79759B14F24996FEABCC887806_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexUTF8String_t8F8CA765EB9C387022D257B75724F1BA52A17703_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HexUTF8String_t8F8CA765EB9C387022D257B75724F1BA52A17703 * L_0 = (HexUTF8String_t8F8CA765EB9C387022D257B75724F1BA52A17703 *)il2cpp_codegen_object_new(HexUTF8String_t8F8CA765EB9C387022D257B75724F1BA52A17703_il2cpp_TypeInfo_var);
		HexUTF8String__ctor_mF4163AC6CE09616E10F9D4C48735169DBDC31DFB(L_0, /*hidden argument*/NULL);
		HexUTF8String_t8F8CA765EB9C387022D257B75724F1BA52A17703 * L_1 = L_0;
		String_t* L_2 = ___hex0;
		HexRPCType_1_set_HexValue_mF18BFB4EFD1BED79759B14F24996FEABCC887806(L_1, L_2, /*hidden argument*/HexRPCType_1_set_HexValue_mF18BFB4EFD1BED79759B14F24996FEABCC887806_RuntimeMethod_var);
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
// System.String Nethereum.Hex.HexConvertors.HexUTF8StringConvertor::ConvertToHex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexUTF8StringConvertor_ConvertToHex_mA6E78AD16993A5BF0A29AF5B01AA9E6ED2606B10 (HexUTF8StringConvertor_tB0762EA7B8FD488EB73F8F9B244E373916B0D49F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		String_t* L_1;
		L_1 = HexStringUTF8ConvertorExtensions_ToHexUTF8_mD596BE80E86116956018FB14BD0E71B4CDCDADBE(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Nethereum.Hex.HexConvertors.HexUTF8StringConvertor::ConvertFromHex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexUTF8StringConvertor_ConvertFromHex_m98EAACE8567BD451CF6AD2D86D6A963A3C068D90 (HexUTF8StringConvertor_tB0762EA7B8FD488EB73F8F9B244E373916B0D49F * __this, String_t* ___hex0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___hex0;
		String_t* L_1;
		L_1 = HexStringUTF8ConvertorExtensions_HexToUTF8String_m4EE453D026A9D0561729CC087F3CEE0822841423(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Nethereum.Hex.HexConvertors.HexUTF8StringConvertor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexUTF8StringConvertor__ctor_m651C953CB5614EC9B503315D6F0663917BF20D16 (HexUTF8StringConvertor_tB0762EA7B8FD488EB73F8F9B244E373916B0D49F * __this, const RuntimeMethod* method)
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
// System.Void Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3B406550ADF5E98C4CAE40C72E285599C3351B47 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBDC07123AA01164CD96BF24083AD9F3470DF2236_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBDC07123AA01164CD96BF24083AD9F3470DF2236 * L_0 = (U3CU3Ec_tBDC07123AA01164CD96BF24083AD9F3470DF2236 *)il2cpp_codegen_object_new(U3CU3Ec_tBDC07123AA01164CD96BF24083AD9F3470DF2236_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m4AB2A8498B50A2AE6CA490D013087999D49614A6(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tBDC07123AA01164CD96BF24083AD9F3470DF2236_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDC07123AA01164CD96BF24083AD9F3470DF2236_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4AB2A8498B50A2AE6CA490D013087999D49614A6 (U3CU3Ec_tBDC07123AA01164CD96BF24083AD9F3470DF2236 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions/<>c::<ToHex>b__1_0(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToHexU3Eb__1_0_m65C1ED2217EDBD3B7147E067658BF2A0147EBADE (U3CU3Ec_tBDC07123AA01164CD96BF24083AD9F3470DF2236 * __this, uint8_t ___b0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = Byte_ToString_mABEF6F24915951FF4A4D87B389D8418B2638178C((uint8_t*)(&___b0), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
