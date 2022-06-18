#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Reflection.AssemblyFileVersionAttribute
struct AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F;
// System.Reflection.AssemblyInformationalVersionAttribute
struct AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0;
// System.Reflection.AssemblyMetadataAttribute
struct AssemblyMetadataAttribute_tC11B256960EB0C004D873A8822B5F84C5590455F;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// System.String
struct String_t;
// System.Runtime.Versioning.TargetFrameworkAttribute
struct TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
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

// System.Reflection.AssemblyFileVersionAttribute
struct AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyFileVersionAttribute::_version
	String_t* ____version_0;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F, ____version_0)); }
	inline String_t* get__version_0() const { return ____version_0; }
	inline String_t** get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(String_t* value)
	{
		____version_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____version_0), (void*)value);
	}
};


// System.Reflection.AssemblyInformationalVersionAttribute
struct AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyInformationalVersionAttribute::m_informationalVersion
	String_t* ___m_informationalVersion_0;

public:
	inline static int32_t get_offset_of_m_informationalVersion_0() { return static_cast<int32_t>(offsetof(AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0, ___m_informationalVersion_0)); }
	inline String_t* get_m_informationalVersion_0() const { return ___m_informationalVersion_0; }
	inline String_t** get_address_of_m_informationalVersion_0() { return &___m_informationalVersion_0; }
	inline void set_m_informationalVersion_0(String_t* value)
	{
		___m_informationalVersion_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_informationalVersion_0), (void*)value);
	}
};


// System.Reflection.AssemblyMetadataAttribute
struct AssemblyMetadataAttribute_tC11B256960EB0C004D873A8822B5F84C5590455F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyMetadataAttribute::m_key
	String_t* ___m_key_0;
	// System.String System.Reflection.AssemblyMetadataAttribute::m_value
	String_t* ___m_value_1;

public:
	inline static int32_t get_offset_of_m_key_0() { return static_cast<int32_t>(offsetof(AssemblyMetadataAttribute_tC11B256960EB0C004D873A8822B5F84C5590455F, ___m_key_0)); }
	inline String_t* get_m_key_0() const { return ___m_key_0; }
	inline String_t** get_address_of_m_key_0() { return &___m_key_0; }
	inline void set_m_key_0(String_t* value)
	{
		___m_key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_key_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_value_1() { return static_cast<int32_t>(offsetof(AssemblyMetadataAttribute_tC11B256960EB0C004D873A8822B5F84C5590455F, ___m_value_1)); }
	inline String_t* get_m_value_1() const { return ___m_value_1; }
	inline String_t** get_address_of_m_value_1() { return &___m_value_1; }
	inline void set_m_value_1(String_t* value)
	{
		___m_value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_value_1), (void*)value);
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


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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

// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// System.Runtime.Versioning.TargetFrameworkAttribute
struct TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Runtime.Versioning.TargetFrameworkAttribute::_frameworkName
	String_t* ____frameworkName_0;
	// System.String System.Runtime.Versioning.TargetFrameworkAttribute::_frameworkDisplayName
	String_t* ____frameworkDisplayName_1;

public:
	inline static int32_t get_offset_of__frameworkName_0() { return static_cast<int32_t>(offsetof(TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517, ____frameworkName_0)); }
	inline String_t* get__frameworkName_0() const { return ____frameworkName_0; }
	inline String_t** get_address_of__frameworkName_0() { return &____frameworkName_0; }
	inline void set__frameworkName_0(String_t* value)
	{
		____frameworkName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____frameworkName_0), (void*)value);
	}

	inline static int32_t get_offset_of__frameworkDisplayName_1() { return static_cast<int32_t>(offsetof(TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517, ____frameworkDisplayName_1)); }
	inline String_t* get__frameworkDisplayName_1() const { return ____frameworkDisplayName_1; }
	inline String_t** get_address_of__frameworkDisplayName_1() { return &____frameworkDisplayName_1; }
	inline void set__frameworkDisplayName_1(String_t* value)
	{
		____frameworkDisplayName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____frameworkDisplayName_1), (void*)value);
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


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Reflection.AssemblyFileVersionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyFileVersionAttribute__ctor_mF855AEBC51CB72F4FF913499256741AE57B0F13D (AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F * __this, String_t* ___version0, const RuntimeMethod* method);
// System.Void System.Runtime.Versioning.TargetFrameworkAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetFrameworkAttribute__ctor_m0F8E5550F9199AC44F2CBCCD3E968EC26731187D (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * __this, String_t* ___frameworkName0, const RuntimeMethod* method);
// System.Void System.Runtime.Versioning.TargetFrameworkAttribute::set_FrameworkDisplayName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TargetFrameworkAttribute_set_FrameworkDisplayName_mB89F1A63CB77A414AF46D5695B37CD520EAB52AB_inline (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyInformationalVersionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyInformationalVersionAttribute__ctor_m9BF349D8F980B0ABAB2A6312E422915285FA1678 (AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0 * __this, String_t* ___informationalVersion0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyMetadataAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyMetadataAttribute__ctor_m5A4B63DCD1CCB566C877C0CFCD9FE0BBDD249529 (AssemblyMetadataAttribute_tC11B256960EB0C004D873A8822B5F84C5590455F * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
static void Nethereum_Model_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F * tmp = (AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F *)cache->attributes[0];
		AssemblyFileVersionAttribute__ctor_mF855AEBC51CB72F4FF913499256741AE57B0F13D(tmp, il2cpp_codegen_string_new_wrapper("\x34\x2E\x30\x2E\x30"), NULL);
	}
	{
		TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * tmp = (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 *)cache->attributes[1];
		TargetFrameworkAttribute__ctor_m0F8E5550F9199AC44F2CBCCD3E968EC26731187D(tmp, il2cpp_codegen_string_new_wrapper("\x2E\x4E\x45\x54\x46\x72\x61\x6D\x65\x77\x6F\x72\x6B\x2C\x56\x65\x72\x73\x69\x6F\x6E\x3D\x76\x34\x2E\x37\x2E\x32"), NULL);
		TargetFrameworkAttribute_set_FrameworkDisplayName_mB89F1A63CB77A414AF46D5695B37CD520EAB52AB_inline(tmp, il2cpp_codegen_string_new_wrapper("\x2E\x4E\x45\x54\x20\x46\x72\x61\x6D\x65\x77\x6F\x72\x6B\x20\x34\x2E\x37\x2E\x32"), NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[2];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 2LL, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[3];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[4];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0 * tmp = (AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0 *)cache->attributes[5];
		AssemblyInformationalVersionAttribute__ctor_m9BF349D8F980B0ABAB2A6312E422915285FA1678(tmp, il2cpp_codegen_string_new_wrapper("\x34\x2E\x30\x2E\x33\x2B\x62\x35\x39\x37\x65\x37\x64\x34\x64\x31\x36\x66\x32\x62\x39\x39\x64\x61\x61\x64\x32\x33\x61\x63\x63\x35\x65\x31\x63\x39\x34\x63\x36\x65\x36\x65\x35\x61\x38\x64"), NULL);
	}
	{
		AssemblyMetadataAttribute_tC11B256960EB0C004D873A8822B5F84C5590455F * tmp = (AssemblyMetadataAttribute_tC11B256960EB0C004D873A8822B5F84C5590455F *)cache->attributes[6];
		AssemblyMetadataAttribute__ctor_m5A4B63DCD1CCB566C877C0CFCD9FE0BBDD249529(tmp, il2cpp_codegen_string_new_wrapper("\x52\x65\x70\x6F\x73\x69\x74\x6F\x72\x79\x55\x72\x6C"), il2cpp_codegen_string_new_wrapper("\x68\x74\x74\x70\x73\x3A\x2F\x2F\x67\x69\x74\x68\x75\x62\x2E\x63\x6F\x6D\x2F\x4E\x65\x74\x68\x65\x72\x65\x75\x6D\x2F\x4E\x65\x74\x68\x65\x72\x65\x75\x6D"), NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CParentHashU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CUnclesHashU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CCoinbaseU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CStateRootU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CTransactionsHashU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CReceiptHashU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CBlockNumberU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CLogsBloomU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CDifficultyU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CTimestampU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CGasLimitU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CGasUsedU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CMixHashU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CExtraDataU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CNonceU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CBaseFeeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_ParentHash_mE62BA6B52A125CD1957E02B27132DC6AA1C9EC90(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_ParentHash_m080ED6ED7FA1C2EEB992958DC3809421AF828D47(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_UnclesHash_mE342454FBBBB165398C6D84687E1CB3F5879F40B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_UnclesHash_mCA7D33B51B5E405EE4D757ECD1B442C215BA80FA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_Coinbase_m836000B5C0354E4B52FBFEBE3FC73ED0E0C28990(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_Coinbase_m66DBB970D83797C10D03E14B680C2EDC17953963(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_StateRoot_mAD5951DB6B325FA903041334062CA4F7DAE64D5A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_StateRoot_m63DD6F6F6CBAF393D49EF7A36C2B36E3881DD226(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_TransactionsHash_mF8A3F8EF2E6713F68AB33BC664B1F46CA304B3C9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_TransactionsHash_mB1CDCEDBD260FB6A99D52F37A497378F11A2F20F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_ReceiptHash_m5A6EB57F3E85A84FBFF5CD340848B51A15502B9F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_ReceiptHash_mBC6FB5C360D86C4BBC0EE05610A2FEA06E1D0FE4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_BlockNumber_mF91B4743336D1E4A1A07EC2F3BA7DAAC6A6A566D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_BlockNumber_m77924925DC61420576FB2AFB277CA3E4305F25E0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_LogsBloom_m139BBAFDE78B89732AA1E343336559619CB5A4DF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_LogsBloom_m398162D4864330CE0DD71A48D41907A710AE56F4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_Difficulty_mD440457AA3C9BA0B4FD9636FC54E0F25AFF25562(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_Difficulty_mD47C4C261F30692B99095267DCD38BCA26D0A45F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_Timestamp_m71CDAD0756DABA8F57DCC81C06035BA9593885D6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_Timestamp_m6072D4BF9051304DA4360F785AECF6C79451E49B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_GasLimit_m98113EBD591B0A72592034E3CACD189D7900D47C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_GasLimit_m4ED6818B3A9DB38DC80DF539A2E54076776EDDBD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_GasUsed_m01C98F341247CF16E85848813E69A8A92D1226F5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_GasUsed_mC1F0E717B8336CBFDF4AD752ECD01341691DD022(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_MixHash_m8C7A739C9B3F5E1D92A5EFE055F8E119BB156046(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_MixHash_m74978CD2C75D69AA5E305416D3438C362708592B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_ExtraData_mFF792F92EFE5A53CA11CB2972513E25E4010C2AE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_ExtraData_m8BC507BBC0C1994B9DB65CC89F640C12FCD4C3F4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_Nonce_m4DAB3F6FA4CCB40A0A03B19BD82DBC13B54EA53D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_Nonce_m18C10FA1E3C1CCD941B4FB93D18220C83979A0CF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_BaseFee_m2ACF843FDDEC2ABA4BF63011D0B6AFAB56A107B4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_BaseFee_mE4E1D23906CDD2822A656A84F14EF2AF2088E8E5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeaderEncoder_t7F29060ECD0D5C092F6B9B3BD053EDDFB7A5CA3B_CustomAttributesCacheGenerator_U3CCurrentU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BlockHeaderEncoder_t7F29060ECD0D5C092F6B9B3BD053EDDFB7A5CA3B_CustomAttributesCacheGenerator_BlockHeaderEncoder_get_Current_mE04B078D3D4058DE1AFAAB03966D5C26BF6FD692(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DefaultValues_t34DFBCB519CBB301F37042A1EC2DE6079B3F4C53_CustomAttributesCacheGenerator_U3CCurrentU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_Nethereum_Model_AttributeGenerators[];
const CustomAttributesCacheGenerator g_Nethereum_Model_AttributeGenerators[52] = 
{
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CParentHashU3Ek__BackingField,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CUnclesHashU3Ek__BackingField,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CCoinbaseU3Ek__BackingField,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CStateRootU3Ek__BackingField,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CTransactionsHashU3Ek__BackingField,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CReceiptHashU3Ek__BackingField,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CBlockNumberU3Ek__BackingField,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CLogsBloomU3Ek__BackingField,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CDifficultyU3Ek__BackingField,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CTimestampU3Ek__BackingField,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CGasLimitU3Ek__BackingField,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CGasUsedU3Ek__BackingField,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CMixHashU3Ek__BackingField,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CExtraDataU3Ek__BackingField,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CNonceU3Ek__BackingField,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_U3CBaseFeeU3Ek__BackingField,
	BlockHeaderEncoder_t7F29060ECD0D5C092F6B9B3BD053EDDFB7A5CA3B_CustomAttributesCacheGenerator_U3CCurrentU3Ek__BackingField,
	DefaultValues_t34DFBCB519CBB301F37042A1EC2DE6079B3F4C53_CustomAttributesCacheGenerator_U3CCurrentU3Ek__BackingField,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_ParentHash_mE62BA6B52A125CD1957E02B27132DC6AA1C9EC90,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_ParentHash_m080ED6ED7FA1C2EEB992958DC3809421AF828D47,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_UnclesHash_mE342454FBBBB165398C6D84687E1CB3F5879F40B,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_UnclesHash_mCA7D33B51B5E405EE4D757ECD1B442C215BA80FA,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_Coinbase_m836000B5C0354E4B52FBFEBE3FC73ED0E0C28990,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_Coinbase_m66DBB970D83797C10D03E14B680C2EDC17953963,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_StateRoot_mAD5951DB6B325FA903041334062CA4F7DAE64D5A,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_StateRoot_m63DD6F6F6CBAF393D49EF7A36C2B36E3881DD226,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_TransactionsHash_mF8A3F8EF2E6713F68AB33BC664B1F46CA304B3C9,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_TransactionsHash_mB1CDCEDBD260FB6A99D52F37A497378F11A2F20F,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_ReceiptHash_m5A6EB57F3E85A84FBFF5CD340848B51A15502B9F,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_ReceiptHash_mBC6FB5C360D86C4BBC0EE05610A2FEA06E1D0FE4,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_BlockNumber_mF91B4743336D1E4A1A07EC2F3BA7DAAC6A6A566D,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_BlockNumber_m77924925DC61420576FB2AFB277CA3E4305F25E0,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_LogsBloom_m139BBAFDE78B89732AA1E343336559619CB5A4DF,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_LogsBloom_m398162D4864330CE0DD71A48D41907A710AE56F4,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_Difficulty_mD440457AA3C9BA0B4FD9636FC54E0F25AFF25562,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_Difficulty_mD47C4C261F30692B99095267DCD38BCA26D0A45F,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_Timestamp_m71CDAD0756DABA8F57DCC81C06035BA9593885D6,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_Timestamp_m6072D4BF9051304DA4360F785AECF6C79451E49B,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_GasLimit_m98113EBD591B0A72592034E3CACD189D7900D47C,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_GasLimit_m4ED6818B3A9DB38DC80DF539A2E54076776EDDBD,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_GasUsed_m01C98F341247CF16E85848813E69A8A92D1226F5,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_GasUsed_mC1F0E717B8336CBFDF4AD752ECD01341691DD022,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_MixHash_m8C7A739C9B3F5E1D92A5EFE055F8E119BB156046,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_MixHash_m74978CD2C75D69AA5E305416D3438C362708592B,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_ExtraData_mFF792F92EFE5A53CA11CB2972513E25E4010C2AE,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_ExtraData_m8BC507BBC0C1994B9DB65CC89F640C12FCD4C3F4,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_Nonce_m4DAB3F6FA4CCB40A0A03B19BD82DBC13B54EA53D,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_Nonce_m18C10FA1E3C1CCD941B4FB93D18220C83979A0CF,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_get_BaseFee_m2ACF843FDDEC2ABA4BF63011D0B6AFAB56A107B4,
	BlockHeader_t003D8C6D359DA32FB1F71D458A3CA71613611308_CustomAttributesCacheGenerator_BlockHeader_set_BaseFee_mE4E1D23906CDD2822A656A84F14EF2AF2088E8E5,
	BlockHeaderEncoder_t7F29060ECD0D5C092F6B9B3BD053EDDFB7A5CA3B_CustomAttributesCacheGenerator_BlockHeaderEncoder_get_Current_mE04B078D3D4058DE1AFAAB03966D5C26BF6FD692,
	Nethereum_Model_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TargetFrameworkAttribute_set_FrameworkDisplayName_mB89F1A63CB77A414AF46D5695B37CD520EAB52AB_inline (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__frameworkDisplayName_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
