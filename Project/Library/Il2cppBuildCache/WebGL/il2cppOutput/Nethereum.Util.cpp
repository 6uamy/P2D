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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.String,System.String>
struct Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_t87C38B0EE9F1DE9AFC8F366EEAE5D497C061B4E1;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t9C161AD4E982EC01062A5E052662E7862A7874F4;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IList`1<System.Byte>
struct IList_1_t15467A9C40BD12CE17BE6FF409B2EF0FDD26B9D6;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
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
// System.UInt64[]
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2;
// Nethereum.Util.AddressEqualityComparer
struct AddressEqualityComparer_t9409215AB76B3968FF863550202D5ABAD43F77B7;
// Nethereum.Util.AddressUtil
struct AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// Nethereum.Util.Keccak.Arrays
struct Arrays_t66BAE77D7ABC0C080187CCFE4F2A76E0E98923AB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Numerics.BigInteger
struct BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
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
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// Nethereum.Util.Keccak.KeccakDigest
struct KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// Nethereum.Util.Keccak.Pack
struct Pack_tAE7EFB312364DB2DC46CEAF35B6AF3D2720AAA20;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// Nethereum.Util.Sha3Keccack
struct Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// Nethereum.Util.UniqueAddressList
struct UniqueAddressList_tE01D38ECFC83415C2890244A5288A9BA97EDC91F;
// Nethereum.Util.UniqueTransactionHashList
struct UniqueTransactionHashList_t4DBBEA98788DA8DBC88F83B0DBF21E41E8CCFAA9;
// Nethereum.Util.UnitConversion
struct UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Nethereum.Util.WaitStrategy
struct WaitStrategy_tDE169ADE167BB4E8CEC8EA35D3F1E691E45056EA;
// Nethereum.Util.ByteUtil/<MergeToEnum>d__5
struct U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3;
// Nethereum.Util.Sha3Keccack/<>c
struct U3CU3Ec_tCE6734CCDEDBDAD7F5EE1DA448A4474E8EDA50CD;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* AddressEqualityComparer_t9409215AB76B3968FF863550202D5ABAD43F77B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteUtil_t1C81DF755C6BB949215BBA2CFECA9CA653079742_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t5AB6E9D20BDB8A993042228A58C871DF8C3BCE87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t15467A9C40BD12CE17BE6FF409B2EF0FDD26B9D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NumberFormatting_t1FFF8188E1145A1FBC6E1BBFFEC03E8C682C2FDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCE6734CCDEDBDAD7F5EE1DA448A4474E8EDA50CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitStrategy_tDE169ADE167BB4E8CEC8EA35D3F1E691E45056EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t4E869C76FF5B8C50A2B8DF414F1B6427710CD156____8ACC0527215D58BB38BEB1E9BF85D16BB40F1F003901B05B87B735B444A65A93_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0ABFB20F7CF83967C5F8BFF72CA9763D6E250813;
IL2CPP_EXTERN_C String_t* _stringLiteral1649B6362D7BFE5B47AD5B0E3FF1C23199A234E7;
IL2CPP_EXTERN_C String_t* _stringLiteral2560015662CF4CE1FBB0C239EE33C0A6BD267C34;
IL2CPP_EXTERN_C String_t* _stringLiteral270800C8217B39CD8DD46ECDEE95E004E4567FFF;
IL2CPP_EXTERN_C String_t* _stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58;
IL2CPP_EXTERN_C String_t* _stringLiteral316F631FB9C4C420C2E74898E8868021F9B7C1EA;
IL2CPP_EXTERN_C String_t* _stringLiteral323B50F239A0CEA841D1CDB6FD827C73F3DA7D58;
IL2CPP_EXTERN_C String_t* _stringLiteral3C7A831A0474AE58A1A511C0AE679EA6ACAF323B;
IL2CPP_EXTERN_C String_t* _stringLiteral3C9F9624DF9F1C2E14A0850FDC6F9D35C3C2A698;
IL2CPP_EXTERN_C String_t* _stringLiteral3F415B51C76CFB7B00EE1C2F2DA3E8CFA2269CCA;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4BCF4B50E72B7CCD6AD748E8D2FDCADBF49961A8;
IL2CPP_EXTERN_C String_t* _stringLiteral53CE3854A381FE03C65D949A33C2E1D7DBA02CB4;
IL2CPP_EXTERN_C String_t* _stringLiteral56C9B652878395853110609B8408AB9C094B096A;
IL2CPP_EXTERN_C String_t* _stringLiteral571B8015AB310D000C937E6BB40186AA60B9C5C1;
IL2CPP_EXTERN_C String_t* _stringLiteral586421FA97056FDB29C92DF11FC45E50039AF58C;
IL2CPP_EXTERN_C String_t* _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89;
IL2CPP_EXTERN_C String_t* _stringLiteral5C6ACA12AB5C4ED3715E2E25B85413958933E3B9;
IL2CPP_EXTERN_C String_t* _stringLiteral5DF190B25B11B1AAEE1A438E606FA8F0FF446A82;
IL2CPP_EXTERN_C String_t* _stringLiteral61E72265B771E2ABEC223E49644B77AF40CFA993;
IL2CPP_EXTERN_C String_t* _stringLiteral6926C85E0B22B5E154849BA94F95B911D0F467AB;
IL2CPP_EXTERN_C String_t* _stringLiteral6B6E99AB68D2834E2BA881EA585508AE3BB8972B;
IL2CPP_EXTERN_C String_t* _stringLiteral717DA9E2386BEADCFFB33AE09B063FCD2EE1A657;
IL2CPP_EXTERN_C String_t* _stringLiteral71A4D286D674B387825473A6BF68FA0177EAEC37;
IL2CPP_EXTERN_C String_t* _stringLiteral7405068459969E65A509A575D3072180AB440CC4;
IL2CPP_EXTERN_C String_t* _stringLiteral75024B19E3B0D929FB55D9F58FB9F2BD92238C9A;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral8739AB73E27D444291AAFE563DFBA8832AD5D722;
IL2CPP_EXTERN_C String_t* _stringLiteral88ABBDEE731F56D989C298F52912B7B0D27D0D84;
IL2CPP_EXTERN_C String_t* _stringLiteral8A577A5A6848BEDC7A1DBA1211A06E627EEF0057;
IL2CPP_EXTERN_C String_t* _stringLiteral8C92FC7F604169F6F4A63083970753C014EAD040;
IL2CPP_EXTERN_C String_t* _stringLiteral91E1282FC8690BBC1CB33A6803C9119053A51DC8;
IL2CPP_EXTERN_C String_t* _stringLiteralA597E6496EE5F8DA5EADFABF86D203733ED956DE;
IL2CPP_EXTERN_C String_t* _stringLiteralA5D5402405EA46FA1359EF38E2451145DB09D1C5;
IL2CPP_EXTERN_C String_t* _stringLiteralA8E3A14BFED9F7D70EFB2C59F8DBAC2A52180062;
IL2CPP_EXTERN_C String_t* _stringLiteralACAF4A98A03BA8AD4CA372A00B3EB1821B13D668;
IL2CPP_EXTERN_C String_t* _stringLiteralACEB01644E7A4BCEFA0B7FD13C917DA74C936C31;
IL2CPP_EXTERN_C String_t* _stringLiteralBAEC6E601313282A8AE2E7B3C417AEA2E90DCA0F;
IL2CPP_EXTERN_C String_t* _stringLiteralBB012E8AECF9960218AEA1A96AFE93090316B3B1;
IL2CPP_EXTERN_C String_t* _stringLiteralBB2E8EBB9651B779E1B875B8AE46782B488FCAC0;
IL2CPP_EXTERN_C String_t* _stringLiteralC16CB3EB65A1DCE6FA520BCB808F4F0EA90A7826;
IL2CPP_EXTERN_C String_t* _stringLiteralC4BDB973AE821DEA70F0495195EF17C3A498E945;
IL2CPP_EXTERN_C String_t* _stringLiteralC4C4969CA68A212C57B6FC1FBAE5AEBACB547E07;
IL2CPP_EXTERN_C String_t* _stringLiteralCF15E6AB986C6E1A6B9D665510A803EB2245E941;
IL2CPP_EXTERN_C String_t* _stringLiteralCF5B5845107C1302EDC696A0C7AAAC4FA03151F4;
IL2CPP_EXTERN_C String_t* _stringLiteralD039C76F6BA3380896DFB0DA8F26D45B1448F44F;
IL2CPP_EXTERN_C String_t* _stringLiteralD0B955404E183709B5C731BFCF31085857DE0EC3;
IL2CPP_EXTERN_C String_t* _stringLiteralD25163422D668F498B77BBE8BE47AAF95218DD82;
IL2CPP_EXTERN_C String_t* _stringLiteralD8EBAE0CA29F1E4B2E6A074E9AAC922CD634B94F;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC400987E5EE16841C02DE14AE43EB578A7FEAC0;
IL2CPP_EXTERN_C String_t* _stringLiteralDD1E96489DC4F60E6AB0135A5F5CDE79341D8BF7;
IL2CPP_EXTERN_C String_t* _stringLiteralDEFDD99707701302B4F3A4CE68BC9EB2926D7283;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralE9C4E5E72379B27F0B701202AF0659F326997B6A;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF8E3475A2DDD8A338B5687E45B80510D26142DC9;
IL2CPP_EXTERN_C String_t* _stringLiteralFD451BA3258011EFA8F90EAEAE0E7B8F26D35641;
IL2CPP_EXTERN_C String_t* _stringLiteralFEDCF3D670BF4512049C2F6AC15B2EEA5E718BFD;
IL2CPP_EXTERN_C const RuntimeMethod* Arrays_GetLength_m524DFD49D77F51FAFC37B21D9073D96FA5947F6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigDecimal_CompareTo_mD37074ABBEB821CBF16169B0D213DED12DE2249D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigDecimal_RoundAwayFromZero_m68815B693ADF250535A598A8CB48ADABABC7A1AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigDecimal_ToString_m361D14BD3AD9EE2FC3555D315D36603ACCCE36AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigIntegerExtensions_ParseInvariant_m592624DF089E0CCCC230B09EC21DBAB20F0521C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ContractUtils_CalcualteCreate2AddressMinimalProxy_m7AA90B92D423A3DADD1E4DB49F84051B6587EF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ContractUtils_CalculateContractAddress_mF9DDA4A280A2BDD2725BC33BB817BA3C91C72CDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ContractUtils_CalculateCreate2Address_m981D92B33DECBE5FE61E147578921645D9364953_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Last_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m9F92DBD5EE0199F0455C57068B329302242829C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisString_t_TisString_t_m5E54BE921E960B9AB33FE013CF7ECB8D1CF24A1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Skip_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m721399F0C4B56708F77FDDCA0EE095C7EF536DBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Take_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m08963734D06A0556262EC9BAC908CEFB4E70D9A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FormattingExtensions_ToStringInvariant_TisBigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_mCF63EDD8B1F432D0135B8F14E9087AA9F4680F45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FormattingExtensions_ToStringInvariant_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_mAB4AA93D38048BC4E2F818F04480E92B96CC4E4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m22403E6E9EC24A3D8103D29D9D66B5EEEA0AC69E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m2D141B160C366DB0A2B24DA4A97CC8653C77800E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeccakDigest_AbsorbBits_m196587E484DD502CD41C99C581558092E02E0F97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeccakDigest_Absorb_mA2ED5609453836ED978BC338681A5991B705B8AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeccakDigest_InitSponge_m922FF7D21C50C3B17C8EAB8996850B63EAB6A818_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeccakDigest_Init_mE3E6B4779325C7FA688DFAD676F0A20F76EB3188_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Reverse_m6831BF781D297021CA38E9D1453910098A54E617_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NumberFormatting_FormatFixed_m3DCB89B4D0761DFDA6A10F092F417B6D429DFB27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMergeToEnumU3Ed__5_System_Collections_IEnumerator_Reset_mF0A71703D6DE8B5631DCDACC9AFD53BE70E7B9B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCalculateHashFromHexU3Eb__4_0_m07AA2FEAE74B77FB7B6714AC7B9ED354F5CB1B34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnitConversion_GetEthUnitValue_m0B304BFA61D20FA7005D29B3794C6B5F1BC6930F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnitConversion_TryValidateUnitValue_mCB42935B94684527E8E38D616AD33AF2D196BDF1_RuntimeMethod_var;
struct BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2;;
struct BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_marshaled_com;
struct BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_marshaled_com;;
struct BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_marshaled_pinvoke;
struct BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_marshaled_pinvoke;;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D;
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t59086BA6CA892CDD0072BDA2257E5784FDFC21F1 
{
public:

public:
};


// System.Object


// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D* ____slots_8;
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
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____slots_8)); }
	inline SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
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


// Nethereum.Util.AddressEqualityComparer
struct AddressEqualityComparer_t9409215AB76B3968FF863550202D5ABAD43F77B7  : public RuntimeObject
{
public:

public:
};


// Nethereum.Util.AddressExtensions
struct AddressExtensions_tEF232A362481A644F9A65EF6E9711CFE58672718  : public RuntimeObject
{
public:

public:
};


// Nethereum.Util.AddressUtil
struct AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202  : public RuntimeObject
{
public:

public:
};

struct AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202_StaticFields
{
public:
	// Nethereum.Util.AddressUtil Nethereum.Util.AddressUtil::_current
	AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * ____current_0;

public:
	inline static int32_t get_offset_of__current_0() { return static_cast<int32_t>(offsetof(AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202_StaticFields, ____current_0)); }
	inline AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * get__current_0() const { return ____current_0; }
	inline AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 ** get_address_of__current_0() { return &____current_0; }
	inline void set__current_0(AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * value)
	{
		____current_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Nethereum.Util.Keccak.Arrays
struct Arrays_t66BAE77D7ABC0C080187CCFE4F2A76E0E98923AB  : public RuntimeObject
{
public:

public:
};


// Nethereum.Util.BigDecimalFormatter
struct BigDecimalFormatter_t7F5F1D4FEF0DEB051143CBC6DE92515B9B6BF99A  : public RuntimeObject
{
public:

public:
};


// Nethereum.Util.BigIntegerExtensions
struct BigIntegerExtensions_t3DD8E2103F97965C15104BE8DA5ADF8293683615  : public RuntimeObject
{
public:

public:
};


// Nethereum.Util.ByteUtil
struct ByteUtil_t1C81DF755C6BB949215BBA2CFECA9CA653079742  : public RuntimeObject
{
public:

public:
};

struct ByteUtil_t1C81DF755C6BB949215BBA2CFECA9CA653079742_StaticFields
{
public:
	// System.Byte[] Nethereum.Util.ByteUtil::EMPTY_BYTE_ARRAY
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___EMPTY_BYTE_ARRAY_0;
	// System.Byte[] Nethereum.Util.ByteUtil::ZERO_BYTE_ARRAY
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ZERO_BYTE_ARRAY_1;

public:
	inline static int32_t get_offset_of_EMPTY_BYTE_ARRAY_0() { return static_cast<int32_t>(offsetof(ByteUtil_t1C81DF755C6BB949215BBA2CFECA9CA653079742_StaticFields, ___EMPTY_BYTE_ARRAY_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_EMPTY_BYTE_ARRAY_0() const { return ___EMPTY_BYTE_ARRAY_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_EMPTY_BYTE_ARRAY_0() { return &___EMPTY_BYTE_ARRAY_0; }
	inline void set_EMPTY_BYTE_ARRAY_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___EMPTY_BYTE_ARRAY_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EMPTY_BYTE_ARRAY_0), (void*)value);
	}

	inline static int32_t get_offset_of_ZERO_BYTE_ARRAY_1() { return static_cast<int32_t>(offsetof(ByteUtil_t1C81DF755C6BB949215BBA2CFECA9CA653079742_StaticFields, ___ZERO_BYTE_ARRAY_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_ZERO_BYTE_ARRAY_1() const { return ___ZERO_BYTE_ARRAY_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_ZERO_BYTE_ARRAY_1() { return &___ZERO_BYTE_ARRAY_1; }
	inline void set_ZERO_BYTE_ARRAY_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___ZERO_BYTE_ARRAY_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ZERO_BYTE_ARRAY_1), (void*)value);
	}
};


// Nethereum.Util.ContractUtils
struct ContractUtils_t85E2E43B44F0F028591DE5F25C0E4A26963CB8C4  : public RuntimeObject
{
public:

public:
};


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
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


// Nethereum.Util.FormattingExtensions
struct FormattingExtensions_tEBF95B06286B45C06D372AF6B7CBBDB6746E7D5D  : public RuntimeObject
{
public:

public:
};


// Nethereum.Util.Keccak.KeccakDigest
struct KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B  : public RuntimeObject
{
public:
	// System.UInt64[] Nethereum.Util.Keccak.KeccakDigest::state
	UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___state_3;
	// System.Byte[] Nethereum.Util.Keccak.KeccakDigest::dataQueue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___dataQueue_4;
	// System.Int32 Nethereum.Util.Keccak.KeccakDigest::rate
	int32_t ___rate_5;
	// System.Int32 Nethereum.Util.Keccak.KeccakDigest::bitsInQueue
	int32_t ___bitsInQueue_6;
	// System.Int32 Nethereum.Util.Keccak.KeccakDigest::fixedOutputLength
	int32_t ___fixedOutputLength_7;
	// System.Boolean Nethereum.Util.Keccak.KeccakDigest::squeezing
	bool ___squeezing_8;
	// System.Int32 Nethereum.Util.Keccak.KeccakDigest::bitsAvailableForSqueezing
	int32_t ___bitsAvailableForSqueezing_9;

public:
	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B, ___state_3)); }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* get_state_3() const { return ___state_3; }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2** get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* value)
	{
		___state_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_3), (void*)value);
	}

	inline static int32_t get_offset_of_dataQueue_4() { return static_cast<int32_t>(offsetof(KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B, ___dataQueue_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_dataQueue_4() const { return ___dataQueue_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_dataQueue_4() { return &___dataQueue_4; }
	inline void set_dataQueue_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___dataQueue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataQueue_4), (void*)value);
	}

	inline static int32_t get_offset_of_rate_5() { return static_cast<int32_t>(offsetof(KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B, ___rate_5)); }
	inline int32_t get_rate_5() const { return ___rate_5; }
	inline int32_t* get_address_of_rate_5() { return &___rate_5; }
	inline void set_rate_5(int32_t value)
	{
		___rate_5 = value;
	}

	inline static int32_t get_offset_of_bitsInQueue_6() { return static_cast<int32_t>(offsetof(KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B, ___bitsInQueue_6)); }
	inline int32_t get_bitsInQueue_6() const { return ___bitsInQueue_6; }
	inline int32_t* get_address_of_bitsInQueue_6() { return &___bitsInQueue_6; }
	inline void set_bitsInQueue_6(int32_t value)
	{
		___bitsInQueue_6 = value;
	}

	inline static int32_t get_offset_of_fixedOutputLength_7() { return static_cast<int32_t>(offsetof(KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B, ___fixedOutputLength_7)); }
	inline int32_t get_fixedOutputLength_7() const { return ___fixedOutputLength_7; }
	inline int32_t* get_address_of_fixedOutputLength_7() { return &___fixedOutputLength_7; }
	inline void set_fixedOutputLength_7(int32_t value)
	{
		___fixedOutputLength_7 = value;
	}

	inline static int32_t get_offset_of_squeezing_8() { return static_cast<int32_t>(offsetof(KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B, ___squeezing_8)); }
	inline bool get_squeezing_8() const { return ___squeezing_8; }
	inline bool* get_address_of_squeezing_8() { return &___squeezing_8; }
	inline void set_squeezing_8(bool value)
	{
		___squeezing_8 = value;
	}

	inline static int32_t get_offset_of_bitsAvailableForSqueezing_9() { return static_cast<int32_t>(offsetof(KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B, ___bitsAvailableForSqueezing_9)); }
	inline int32_t get_bitsAvailableForSqueezing_9() const { return ___bitsAvailableForSqueezing_9; }
	inline int32_t* get_address_of_bitsAvailableForSqueezing_9() { return &___bitsAvailableForSqueezing_9; }
	inline void set_bitsAvailableForSqueezing_9(int32_t value)
	{
		___bitsAvailableForSqueezing_9 = value;
	}
};

struct KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_StaticFields
{
public:
	// System.UInt64[] Nethereum.Util.Keccak.KeccakDigest::KeccakRoundConstants
	UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___KeccakRoundConstants_0;
	// System.Int32[] Nethereum.Util.Keccak.KeccakDigest::KeccakRhoOffsets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___KeccakRhoOffsets_1;
	// System.Int32 Nethereum.Util.Keccak.KeccakDigest::STATE_LENGTH
	int32_t ___STATE_LENGTH_2;

public:
	inline static int32_t get_offset_of_KeccakRoundConstants_0() { return static_cast<int32_t>(offsetof(KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_StaticFields, ___KeccakRoundConstants_0)); }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* get_KeccakRoundConstants_0() const { return ___KeccakRoundConstants_0; }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2** get_address_of_KeccakRoundConstants_0() { return &___KeccakRoundConstants_0; }
	inline void set_KeccakRoundConstants_0(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* value)
	{
		___KeccakRoundConstants_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeccakRoundConstants_0), (void*)value);
	}

	inline static int32_t get_offset_of_KeccakRhoOffsets_1() { return static_cast<int32_t>(offsetof(KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_StaticFields, ___KeccakRhoOffsets_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_KeccakRhoOffsets_1() const { return ___KeccakRhoOffsets_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_KeccakRhoOffsets_1() { return &___KeccakRhoOffsets_1; }
	inline void set_KeccakRhoOffsets_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___KeccakRhoOffsets_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeccakRhoOffsets_1), (void*)value);
	}

	inline static int32_t get_offset_of_STATE_LENGTH_2() { return static_cast<int32_t>(offsetof(KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_StaticFields, ___STATE_LENGTH_2)); }
	inline int32_t get_STATE_LENGTH_2() const { return ___STATE_LENGTH_2; }
	inline int32_t* get_address_of_STATE_LENGTH_2() { return &___STATE_LENGTH_2; }
	inline void set_STATE_LENGTH_2(int32_t value)
	{
		___STATE_LENGTH_2 = value;
	}
};


// Nethereum.Util.NumberFormatting
struct NumberFormatting_t1FFF8188E1145A1FBC6E1BBFFEC03E8C682C2FDC  : public RuntimeObject
{
public:

public:
};

struct NumberFormatting_t1FFF8188E1145A1FBC6E1BBFFEC03E8C682C2FDC_StaticFields
{
public:
	// System.String[] Nethereum.Util.NumberFormatting::s_posCurrencyFormats
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___s_posCurrencyFormats_0;
	// System.String[] Nethereum.Util.NumberFormatting::s_negCurrencyFormats
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___s_negCurrencyFormats_1;

public:
	inline static int32_t get_offset_of_s_posCurrencyFormats_0() { return static_cast<int32_t>(offsetof(NumberFormatting_t1FFF8188E1145A1FBC6E1BBFFEC03E8C682C2FDC_StaticFields, ___s_posCurrencyFormats_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_s_posCurrencyFormats_0() const { return ___s_posCurrencyFormats_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_s_posCurrencyFormats_0() { return &___s_posCurrencyFormats_0; }
	inline void set_s_posCurrencyFormats_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___s_posCurrencyFormats_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_posCurrencyFormats_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_negCurrencyFormats_1() { return static_cast<int32_t>(offsetof(NumberFormatting_t1FFF8188E1145A1FBC6E1BBFFEC03E8C682C2FDC_StaticFields, ___s_negCurrencyFormats_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_s_negCurrencyFormats_1() const { return ___s_negCurrencyFormats_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_s_negCurrencyFormats_1() { return &___s_negCurrencyFormats_1; }
	inline void set_s_negCurrencyFormats_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___s_negCurrencyFormats_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_negCurrencyFormats_1), (void*)value);
	}
};


// Nethereum.Util.Keccak.Pack
struct Pack_tAE7EFB312364DB2DC46CEAF35B6AF3D2720AAA20  : public RuntimeObject
{
public:

public:
};


// Nethereum.Util.PredicateBuilder
struct PredicateBuilder_tDDFB689DACB65FAEF3F32ABF749F6E655B25E082  : public RuntimeObject
{
public:

public:
};


// Nethereum.Util.Sha3Keccack
struct Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0  : public RuntimeObject
{
public:

public:
};

struct Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0_StaticFields
{
public:
	// Nethereum.Util.Sha3Keccack Nethereum.Util.Sha3Keccack::<Current>k__BackingField
	Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0 * ___U3CCurrentU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CCurrentU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0_StaticFields, ___U3CCurrentU3Ek__BackingField_0)); }
	inline Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0 * get_U3CCurrentU3Ek__BackingField_0() const { return ___U3CCurrentU3Ek__BackingField_0; }
	inline Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0 ** get_address_of_U3CCurrentU3Ek__BackingField_0() { return &___U3CCurrentU3Ek__BackingField_0; }
	inline void set_U3CCurrentU3Ek__BackingField_0(Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0 * value)
	{
		___U3CCurrentU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentU3Ek__BackingField_0), (void*)value);
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


// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields
{
public:
	// System.StringComparer System.StringComparer::_invariantCulture
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____invariantCulture_0;
	// System.StringComparer System.StringComparer::_invariantCultureIgnoreCase
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____invariantCultureIgnoreCase_1;
	// System.StringComparer System.StringComparer::_ordinal
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____ordinal_2;
	// System.StringComparer System.StringComparer::_ordinalIgnoreCase
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____ordinalIgnoreCase_3;

public:
	inline static int32_t get_offset_of__invariantCulture_0() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____invariantCulture_0)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__invariantCulture_0() const { return ____invariantCulture_0; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__invariantCulture_0() { return &____invariantCulture_0; }
	inline void set__invariantCulture_0(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____invariantCulture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCulture_0), (void*)value);
	}

	inline static int32_t get_offset_of__invariantCultureIgnoreCase_1() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____invariantCultureIgnoreCase_1)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__invariantCultureIgnoreCase_1() const { return ____invariantCultureIgnoreCase_1; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__invariantCultureIgnoreCase_1() { return &____invariantCultureIgnoreCase_1; }
	inline void set__invariantCultureIgnoreCase_1(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____invariantCultureIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCultureIgnoreCase_1), (void*)value);
	}

	inline static int32_t get_offset_of__ordinal_2() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____ordinal_2)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__ordinal_2() const { return ____ordinal_2; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__ordinal_2() { return &____ordinal_2; }
	inline void set__ordinal_2(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____ordinal_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinal_2), (void*)value);
	}

	inline static int32_t get_offset_of__ordinalIgnoreCase_3() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____ordinalIgnoreCase_3)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__ordinalIgnoreCase_3() const { return ____ordinalIgnoreCase_3; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__ordinalIgnoreCase_3() { return &____ordinalIgnoreCase_3; }
	inline void set__ordinalIgnoreCase_3(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____ordinalIgnoreCase_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinalIgnoreCase_3), (void*)value);
	}
};


// Nethereum.Util.TransactionUtils
struct TransactionUtils_t7ACE21A844B3C156AFCB33F45ADA813083ABF9F2  : public RuntimeObject
{
public:

public:
};


// Nethereum.Util.UnitConversion
struct UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7  : public RuntimeObject
{
public:

public:
};

struct UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7_StaticFields
{
public:
	// Nethereum.Util.UnitConversion Nethereum.Util.UnitConversion::_convert
	UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * ____convert_0;

public:
	inline static int32_t get_offset_of__convert_0() { return static_cast<int32_t>(offsetof(UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7_StaticFields, ____convert_0)); }
	inline UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * get__convert_0() const { return ____convert_0; }
	inline UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 ** get_address_of__convert_0() { return &____convert_0; }
	inline void set__convert_0(UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * value)
	{
		____convert_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____convert_0), (void*)value);
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

// Nethereum.Util.WaitStrategy
struct WaitStrategy_tDE169ADE167BB4E8CEC8EA35D3F1E691E45056EA  : public RuntimeObject
{
public:

public:
};

struct WaitStrategy_tDE169ADE167BB4E8CEC8EA35D3F1E691E45056EA_StaticFields
{
public:
	// System.Int32[] Nethereum.Util.WaitStrategy::WaitIntervals
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___WaitIntervals_0;

public:
	inline static int32_t get_offset_of_WaitIntervals_0() { return static_cast<int32_t>(offsetof(WaitStrategy_tDE169ADE167BB4E8CEC8EA35D3F1E691E45056EA_StaticFields, ___WaitIntervals_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_WaitIntervals_0() const { return ___WaitIntervals_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_WaitIntervals_0() { return &___WaitIntervals_0; }
	inline void set_WaitIntervals_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___WaitIntervals_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WaitIntervals_0), (void*)value);
	}
};


// Nethereum.Util.ByteUtil/<MergeToEnum>d__5
struct U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3  : public RuntimeObject
{
public:
	// System.Int32 Nethereum.Util.ByteUtil/<MergeToEnum>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Byte Nethereum.Util.ByteUtil/<MergeToEnum>d__5::<>2__current
	uint8_t ___U3CU3E2__current_1;
	// System.Int32 Nethereum.Util.ByteUtil/<MergeToEnum>d__5::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Byte[][] Nethereum.Util.ByteUtil/<MergeToEnum>d__5::arrays
	ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ___arrays_3;
	// System.Byte[][] Nethereum.Util.ByteUtil/<MergeToEnum>d__5::<>3__arrays
	ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ___U3CU3E3__arrays_4;
	// System.Byte[][] Nethereum.Util.ByteUtil/<MergeToEnum>d__5::<>7__wrap1
	ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ___U3CU3E7__wrap1_5;
	// System.Int32 Nethereum.Util.ByteUtil/<MergeToEnum>d__5::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_6;
	// System.Byte[] Nethereum.Util.ByteUtil/<MergeToEnum>d__5::<>7__wrap3
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CU3E7__wrap3_7;
	// System.Int32 Nethereum.Util.ByteUtil/<MergeToEnum>d__5::<>7__wrap4
	int32_t ___U3CU3E7__wrap4_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3, ___U3CU3E2__current_1)); }
	inline uint8_t get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline uint8_t* get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(uint8_t value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_arrays_3() { return static_cast<int32_t>(offsetof(U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3, ___arrays_3)); }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* get_arrays_3() const { return ___arrays_3; }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D** get_address_of_arrays_3() { return &___arrays_3; }
	inline void set_arrays_3(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* value)
	{
		___arrays_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arrays_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__arrays_4() { return static_cast<int32_t>(offsetof(U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3, ___U3CU3E3__arrays_4)); }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* get_U3CU3E3__arrays_4() const { return ___U3CU3E3__arrays_4; }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D** get_address_of_U3CU3E3__arrays_4() { return &___U3CU3E3__arrays_4; }
	inline void set_U3CU3E3__arrays_4(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* value)
	{
		___U3CU3E3__arrays_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__arrays_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_5() { return static_cast<int32_t>(offsetof(U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3, ___U3CU3E7__wrap1_5)); }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* get_U3CU3E7__wrap1_5() const { return ___U3CU3E7__wrap1_5; }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D** get_address_of_U3CU3E7__wrap1_5() { return &___U3CU3E7__wrap1_5; }
	inline void set_U3CU3E7__wrap1_5(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* value)
	{
		___U3CU3E7__wrap1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_6() { return static_cast<int32_t>(offsetof(U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3, ___U3CU3E7__wrap2_6)); }
	inline int32_t get_U3CU3E7__wrap2_6() const { return ___U3CU3E7__wrap2_6; }
	inline int32_t* get_address_of_U3CU3E7__wrap2_6() { return &___U3CU3E7__wrap2_6; }
	inline void set_U3CU3E7__wrap2_6(int32_t value)
	{
		___U3CU3E7__wrap2_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap3_7() { return static_cast<int32_t>(offsetof(U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3, ___U3CU3E7__wrap3_7)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CU3E7__wrap3_7() const { return ___U3CU3E7__wrap3_7; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CU3E7__wrap3_7() { return &___U3CU3E7__wrap3_7; }
	inline void set_U3CU3E7__wrap3_7(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CU3E7__wrap3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap3_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap4_8() { return static_cast<int32_t>(offsetof(U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3, ___U3CU3E7__wrap4_8)); }
	inline int32_t get_U3CU3E7__wrap4_8() const { return ___U3CU3E7__wrap4_8; }
	inline int32_t* get_address_of_U3CU3E7__wrap4_8() { return &___U3CU3E7__wrap4_8; }
	inline void set_U3CU3E7__wrap4_8(int32_t value)
	{
		___U3CU3E7__wrap4_8 = value;
	}
};


// Nethereum.Util.Sha3Keccack/<>c
struct U3CU3Ec_tCE6734CCDEDBDAD7F5EE1DA448A4474E8EDA50CD  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tCE6734CCDEDBDAD7F5EE1DA448A4474E8EDA50CD_StaticFields
{
public:
	// Nethereum.Util.Sha3Keccack/<>c Nethereum.Util.Sha3Keccack/<>c::<>9
	U3CU3Ec_tCE6734CCDEDBDAD7F5EE1DA448A4474E8EDA50CD * ___U3CU3E9_0;
	// System.Func`2<System.String,System.String> Nethereum.Util.Sha3Keccack/<>c::<>9__4_0
	Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * ___U3CU3E9__4_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCE6734CCDEDBDAD7F5EE1DA448A4474E8EDA50CD_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCE6734CCDEDBDAD7F5EE1DA448A4474E8EDA50CD * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCE6734CCDEDBDAD7F5EE1DA448A4474E8EDA50CD ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCE6734CCDEDBDAD7F5EE1DA448A4474E8EDA50CD * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCE6734CCDEDBDAD7F5EE1DA448A4474E8EDA50CD_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
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


// System.Decimal
struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
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

// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
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


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
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


// Nethereum.Util.UniqueAddressList
struct UniqueAddressList_tE01D38ECFC83415C2890244A5288A9BA97EDC91F  : public HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229
{
public:

public:
};


// Nethereum.Util.UniqueTransactionHashList
struct UniqueTransactionHashList_t4DBBEA98788DA8DBC88F83B0DBF21E41E8CCFAA9  : public HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229
{
public:

public:
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_tAB886CF465940D7E79802D45B479888E5CA56345 
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
		uint8_t __StaticArrayInitTypeSizeU3D20_tAB886CF465940D7E79802D45B479888E5CA56345__padding[20];
	};

public:
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t4E869C76FF5B8C50A2B8DF414F1B6427710CD156  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t4E869C76FF5B8C50A2B8DF414F1B6427710CD156_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::8ACC0527215D58BB38BEB1E9BF85D16BB40F1F003901B05B87B735B444A65A93
	__StaticArrayInitTypeSizeU3D20_tAB886CF465940D7E79802D45B479888E5CA56345  ___8ACC0527215D58BB38BEB1E9BF85D16BB40F1F003901B05B87B735B444A65A93_0;

public:
	inline static int32_t get_offset_of_U38ACC0527215D58BB38BEB1E9BF85D16BB40F1F003901B05B87B735B444A65A93_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4E869C76FF5B8C50A2B8DF414F1B6427710CD156_StaticFields, ___8ACC0527215D58BB38BEB1E9BF85D16BB40F1F003901B05B87B735B444A65A93_0)); }
	inline __StaticArrayInitTypeSizeU3D20_tAB886CF465940D7E79802D45B479888E5CA56345  get_U38ACC0527215D58BB38BEB1E9BF85D16BB40F1F003901B05B87B735B444A65A93_0() const { return ___8ACC0527215D58BB38BEB1E9BF85D16BB40F1F003901B05B87B735B444A65A93_0; }
	inline __StaticArrayInitTypeSizeU3D20_tAB886CF465940D7E79802D45B479888E5CA56345 * get_address_of_U38ACC0527215D58BB38BEB1E9BF85D16BB40F1F003901B05B87B735B444A65A93_0() { return &___8ACC0527215D58BB38BEB1E9BF85D16BB40F1F003901B05B87B735B444A65A93_0; }
	inline void set_U38ACC0527215D58BB38BEB1E9BF85D16BB40F1F003901B05B87B735B444A65A93_0(__StaticArrayInitTypeSizeU3D20_tAB886CF465940D7E79802D45B479888E5CA56345  value)
	{
		___8ACC0527215D58BB38BEB1E9BF85D16BB40F1F003901B05B87B735B444A65A93_0 = value;
	}
};


// Nethereum.Util.BigDecimal
struct BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 
{
public:
	// System.Numerics.BigInteger Nethereum.Util.BigDecimal::<Mantissa>k__BackingField
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___U3CMantissaU3Ek__BackingField_1;
	// System.Int32 Nethereum.Util.BigDecimal::<Exponent>k__BackingField
	int32_t ___U3CExponentU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CMantissaU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177, ___U3CMantissaU3Ek__BackingField_1)); }
	inline BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  get_U3CMantissaU3Ek__BackingField_1() const { return ___U3CMantissaU3Ek__BackingField_1; }
	inline BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 * get_address_of_U3CMantissaU3Ek__BackingField_1() { return &___U3CMantissaU3Ek__BackingField_1; }
	inline void set_U3CMantissaU3Ek__BackingField_1(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  value)
	{
		___U3CMantissaU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CMantissaU3Ek__BackingField_1))->____bits_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CExponentU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177, ___U3CExponentU3Ek__BackingField_2)); }
	inline int32_t get_U3CExponentU3Ek__BackingField_2() const { return ___U3CExponentU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CExponentU3Ek__BackingField_2() { return &___U3CExponentU3Ek__BackingField_2; }
	inline void set_U3CExponentU3Ek__BackingField_2(int32_t value)
	{
		___U3CExponentU3Ek__BackingField_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Nethereum.Util.BigDecimal
struct BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177_marshaled_pinvoke
{
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_marshaled_pinvoke ___U3CMantissaU3Ek__BackingField_1;
	int32_t ___U3CExponentU3Ek__BackingField_2;
};
// Native definition for COM marshalling of Nethereum.Util.BigDecimal
struct BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177_marshaled_com
{
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_marshaled_com ___U3CMantissaU3Ek__BackingField_1;
	int32_t ___U3CExponentU3Ek__BackingField_2;
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

// System.Globalization.NumberStyles
struct NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// Nethereum.Util.UnitConversion/EthUnit
struct EthUnit_t444972795CE5505B27B6205875574A63A3A83BF2 
{
public:
	// System.Int32 Nethereum.Util.UnitConversion/EthUnit::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EthUnit_t444972795CE5505B27B6205875574A63A3A83BF2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSizes_1), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSizes_2), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSizes_3), (void*)value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveSign_4), (void*)value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeSign_5), (void*)value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberDecimalSeparator_6), (void*)value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSeparator_7), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyDecimalSeparator_9), (void*)value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencySymbol_10), (void*)value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ansiCurrencySymbol_11), (void*)value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nanSymbol_12), (void*)value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveInfinitySymbol_13), (void*)value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeInfinitySymbol_14), (void*)value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentDecimalSeparator_15), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSeparator_16), (void*)value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentSymbol_17), (void*)value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___perMilleSymbol_18), (void*)value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nativeDigits_19)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativeDigits_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};

struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Func`2<System.String,System.String>
struct Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
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
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
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
// System.UInt64[]
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint64_t m_Items[1];

public:
	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
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

IL2CPP_EXTERN_C void BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_marshal_pinvoke(const BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2& unmarshaled, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_marshal_pinvoke_back(const BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_marshaled_pinvoke& marshaled, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2& unmarshaled);
IL2CPP_EXTERN_C void BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_marshal_pinvoke_cleanup(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_marshal_com(const BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2& unmarshaled, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_marshaled_com& marshaled);
IL2CPP_EXTERN_C void BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_marshal_com_back(const BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_marshaled_com& marshaled, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2& unmarshaled);
IL2CPP_EXTERN_C void BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_marshal_com_cleanup(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_marshaled_com& marshaled);

// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778_gshared (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_gshared (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, uint8_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::Reverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m6831BF781D297021CA38E9D1453910098A54E617_gshared (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Skip<System.Byte>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Skip_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m721399F0C4B56708F77FDDCA0EE095C7EF536DBD_gshared (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Take<System.Byte>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Take_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m08963734D06A0556262EC9BAC908CEFB4E70D9A1_gshared (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Byte>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2AB3E1DC3FE63AC2086C2DCFCE5B1B407A33FAEB_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.String Nethereum.Util.FormattingExtensions::ToStringInvariant<System.Numerics.BigInteger>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FormattingExtensions_ToStringInvariant_TisBigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_mCF63EDD8B1F432D0135B8F14E9087AA9F4680F45_gshared (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___formattable0, const RuntimeMethod* method);
// System.String Nethereum.Util.FormattingExtensions::ToStringInvariant<System.Decimal>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FormattingExtensions_ToStringInvariant_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_mAB4AA93D38048BC4E2F818F04480E92B96CC4E4F_gshared (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___formattable0, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::Last<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Last_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m9F92DBD5EE0199F0455C57068B329302242829C5_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);

// System.Boolean Nethereum.Util.AddressExtensions::IsTheSameAddress(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressExtensions_IsTheSameAddress_mAF90C9D0AC117AB80EE7518B5183FAFE17C96433 (String_t* ___address0, String_t* ___otherAddress1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// Nethereum.Util.AddressUtil Nethereum.Util.AddressUtil::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * AddressUtil_get_Current_m4C8CF9C376CE8A083FDDBE7D3145611276241C18 (const RuntimeMethod* method);
// System.String Nethereum.Util.AddressUtil::ConvertToChecksumAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AddressUtil_ConvertToChecksumAddress_m6C7A111E88877A63065BD59D1772456D4B8FFDA5 (AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * __this, String_t* ___address0, const RuntimeMethod* method);
// System.Boolean Nethereum.Util.AddressUtil::IsChecksumAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressUtil_IsChecksumAddress_mD7AD6DEC0D2E76FAED8FDC946CFBFFDFE1D96A1F (AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * __this, String_t* ___address0, const RuntimeMethod* method);
// System.Boolean Nethereum.Util.AddressUtil::IsValidEthereumAddressHexFormat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressUtil_IsValidEthereumAddressHexFormat_m39A7630946908B27A29337E219B60C45B2D17BDA (AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * __this, String_t* ___address0, const RuntimeMethod* method);
// System.Boolean Nethereum.Util.AddressUtil::IsValidAddressLength(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressUtil_IsValidAddressLength_m4F6FB3EFD68B730FF0B45056A7BEF8EC80350D9D (AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * __this, String_t* ___address0, const RuntimeMethod* method);
// System.Boolean Nethereum.Util.AddressUtil::AreAddressesTheSame(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressUtil_AreAddressesTheSame_mAC31A8B54A8A7B1A68CE5DDB8354B59139F9CBE6 (AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * __this, String_t* ___address10, String_t* ___address21, const RuntimeMethod* method);
// System.Boolean Nethereum.Util.AddressUtil::IsAnEmptyAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressUtil_IsAnEmptyAddress_m0C63DE0C3EACC78053E38450B3C40C155E8D99C6 (AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * __this, String_t* ___address0, const RuntimeMethod* method);
// System.Boolean Nethereum.Util.AddressUtil::IsNotAnEmptyAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressUtil_IsNotAnEmptyAddress_m003609A84DC0368F03E997CFE7DE588523FDB130 (AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * __this, String_t* ___address0, const RuntimeMethod* method);
// System.String Nethereum.Util.AddressUtil::AddressValueOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AddressUtil_AddressValueOrEmpty_mFAA7D654AA644DDB1BA308D10F2561921B6DD6AC (AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * __this, String_t* ___address0, const RuntimeMethod* method);
// System.Boolean Nethereum.Util.AddressUtil::IsEmptyOrEqualsAddress(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressUtil_IsEmptyOrEqualsAddress_m9817EB149DBE9C86A304FD636A05CAE34DE418C2 (AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * __this, String_t* ___address10, String_t* ___candidate1, const RuntimeMethod* method);
// System.Void Nethereum.Util.AddressUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressUtil__ctor_mA01344904695FA4740D66766786A0E77599BED69 (AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m4C4266AE4097F5B61FF72A8D0D083611231B9CA6 (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean Nethereum.Util.AddressExtensions::IsAnEmptyAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressExtensions_IsAnEmptyAddress_mEF7DF5F6E19B1754C1B94E0B993BE80D7D116F14 (String_t* ___address0, const RuntimeMethod* method);
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::EnsureHexPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_EnsureHexPrefix_mD4A30715678BF7C9B3CC086AC6B12DC505B9DA1A (String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_m070E99F11A6005755BD6579A6CC835694395F79F (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5 (String_t* ___a0, String_t* ___b1, int32_t ___comparisonType2, const RuntimeMethod* method);
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D (String_t* __this, const RuntimeMethod* method);
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::RemoveHexPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_RemoveHexPrefix_m9802B6BB32BC6F49DA47744E8B56C03EB64B2D4F (String_t* ___value0, const RuntimeMethod* method);
// System.Void Nethereum.Util.Sha3Keccack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha3Keccack__ctor_m8D45AFC277B2B575167CD58FF181D926737D15F2 (Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0 * __this, const RuntimeMethod* method);
// System.String Nethereum.Util.Sha3Keccack::CalculateHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Sha3Keccack_CalculateHash_m56955B8211F6C057C85699C40B8CC6513AFE5401 (Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8 (Il2CppChar* __this, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String,System.Globalization.NumberStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE2DF841397B10B947C6729D5B811D0C25D211A56 (String_t* ___s0, int32_t ___style1, const RuntimeMethod* method);
// System.String System.String::ToUpper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpper_m4BC629F8059C3E0C4E3F7C7E04DB50EBB0C1A05A (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::PadLeft(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadLeft_m7666BD115C91CF7F69642532F4CA9B0726C0A328 (String_t* __this, int32_t ___totalWidth0, Il2CppChar ___paddingChar1, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::HasHexPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HexByteConvertorExtensions_HasHexPrefix_mB768A6CE3C3D530AA73FBBB4C2BA7D727C9DC27A (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::IsHex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HexByteConvertorExtensions_IsHex_mD8D4FF9339B8C8922A3640426B61E8FA0BB30404 (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean Nethereum.Util.Keccak.Arrays::HaveSameContents(System.Boolean[],System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_HaveSameContents_m8EC3E7E879265391612362B0741803DC4E3D86F3 (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___a0, BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___b1, const RuntimeMethod* method);
// System.Boolean Nethereum.Util.Keccak.Arrays::HaveSameContents(System.Char[],System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_HaveSameContents_m38D20957BBB93DC84FDC833D9D811AE7C8F545DD (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___a0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___b1, const RuntimeMethod* method);
// System.Boolean Nethereum.Util.Keccak.Arrays::HaveSameContents(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_HaveSameContents_m12BE9AA8A66830952B467076DECC53F8B8FB1642 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___a0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___b1, const RuntimeMethod* method);
// System.Boolean Nethereum.Util.Keccak.Arrays::AreEqual(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_AreEqual_m5255E0243C1A2F6F63DC0A7C54A99EEEDA48A88F (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___a0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___b1, const RuntimeMethod* method);
// System.Boolean Nethereum.Util.Keccak.Arrays::HaveSameContents(System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_HaveSameContents_mA150E023B65328B7282A8F14DAC609A4B47194D7 (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___a0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___b1, const RuntimeMethod* method);
// System.Boolean Nethereum.Util.Keccak.Arrays::HaveSameContents(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_HaveSameContents_m1806718988122986B539F5FF6A52A091B3148484 (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___a0, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___b1, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E (StringBuilder_t * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F (StringBuilder_t * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Object System.Array::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Array_Clone_m3C566B3D3F4333212411BD7C3B61D798BADB3F3C (RuntimeArray * __this, const RuntimeMethod* method);
// System.Byte[] Nethereum.Util.Keccak.Arrays::Clone(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Arrays_Clone_m95606403BE9A1417EC89954CA5191898109FBB9D (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.UInt64[] Nethereum.Util.Keccak.Arrays::Clone(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* Arrays_Clone_m0592BC1B6765749024DF2886DF794E7F46CF01C3 (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___data0, const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Int32 Nethereum.Util.Keccak.Arrays::GetLength(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Arrays_GetLength_m524DFD49D77F51FAFC37B21D9073D96FA5947F6E (int32_t ___from0, int32_t ___to1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32[] Nethereum.Util.Keccak.Arrays::Clone(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* Arrays_Clone_m25E12BE7B6CE29B3A2FE2F1F93CCA51955869C85 (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___data0, const RuntimeMethod* method);
// System.Numerics.BigInteger Nethereum.Util.BigDecimal::get_Mantissa()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, const RuntimeMethod* method);
// System.Int32 Nethereum.Util.BigDecimal::get_Exponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, const RuntimeMethod* method);
// System.Void Nethereum.Util.BigDecimal::.ctor(System.Numerics.BigInteger,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigDecimal__ctor_m250E18155FF984256743D2F5A5E08244085AEFEA (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___mantissa0, int32_t ___exponent1, bool ___alwaysTruncate2, const RuntimeMethod* method);
// System.Void Nethereum.Util.BigDecimal::.ctor(Nethereum.Util.BigDecimal,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigDecimal__ctor_m07F85C6BEE695F271E9E9062D34B16D74DCE3FAF (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___bigDecimal0, bool ___alwaysTruncate1, const RuntimeMethod* method);
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Implicit(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_op_Implicit_m2F6F51E1C93721C8D97E367CC2F4B6935E9A9558 (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method);
// System.Void Nethereum.Util.BigDecimal::.ctor(System.Decimal,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigDecimal__ctor_m4D07E184B43E6D9214D5DD4A210D84D732B9489F (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, bool ___alwaysTruncate1, const RuntimeMethod* method);
// System.Void Nethereum.Util.BigDecimal::set_Mantissa(System.Numerics.BigInteger)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BigDecimal_set_Mantissa_mF75FD8A68F815DC181343BCC06136F0C65955E36_inline (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, const RuntimeMethod* method);
// System.Void Nethereum.Util.BigDecimal::set_Exponent(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BigDecimal_set_Exponent_m7F6E52C916F09192A35A7DC554406EFD70F2D143_inline (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Nethereum.Util.BigDecimal::NormaliseExponentBiggerThanZero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigDecimal_NormaliseExponentBiggerThanZero_m390D74E5EFD89897ABD377233EE9EF0D462DE466 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, const RuntimeMethod* method);
// System.Void Nethereum.Util.BigDecimal::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigDecimal_Normalize_m07D124D181BEFB05F61132F430ECDEDBAB60DB90 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, const RuntimeMethod* method);
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::Truncate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_Truncate_mB20BE6E4FFE9ABB79C8E40EDEFC997A81F1538BF (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, int32_t ___precision0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m789B4E75608A673F2CF5DDFC2E67DA20AF440A34 (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, const RuntimeMethod* method);
// System.Int32 Nethereum.Util.BigDecimal::CompareTo(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigDecimal_CompareTo_m6AD893A4F61D4D3A2042302B5EE5BFF2E2D542C2 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___other0, const RuntimeMethod* method);
// System.Int32 Nethereum.Util.BigDecimal::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigDecimal_CompareTo_mD37074ABBEB821CBF16169B0D213DED12DE2249D (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean Nethereum.Util.BigDecimal::op_LessThan(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigDecimal_op_LessThan_mAC06C02DAC31FB6B90AB760D96140D08F2C0F059 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___left0, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___right1, const RuntimeMethod* method);
// System.Boolean Nethereum.Util.BigDecimal::op_GreaterThan(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigDecimal_op_GreaterThan_m9AABEDE6B17207B879112B5D7E3A6B62BA199CBC (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___left0, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___right1, const RuntimeMethod* method);
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  BigInteger_op_Implicit_m9806E7B722243D69545EE09318A5DC364ACBC652 (int32_t ___value0, const RuntimeMethod* method);
// System.Numerics.BigInteger System.Numerics.BigInteger::Pow(System.Numerics.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  BigInteger_Pow_mA52D686E2FB53238877C77EEEFAD23A9601028AF (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, int32_t ___exponent1, const RuntimeMethod* method);
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Multiply(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  BigInteger_op_Multiply_m2C693A37027C26E76BFF4F974553ACA2D8DCC067 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___left0, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___right1, const RuntimeMethod* method);
// System.Boolean System.Numerics.BigInteger::get_IsZero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_get_IsZero_m926C5F3453B1335A6A50264AF7A448619850949D (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 * __this, const RuntimeMethod* method);
// System.Numerics.BigInteger System.Numerics.BigInteger::DivRem(System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  BigInteger_DivRem_m339EFEA8FD3DD8F49561687E35D318F8D9ABC2F3 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___dividend0, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___divisor1, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 * ___remainder2, const RuntimeMethod* method);
// System.Boolean System.Numerics.BigInteger::op_Inequality(System.Numerics.BigInteger,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Inequality_mBCE9D82DD962F9D41383F1285D97A1AC12116114 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___left0, int64_t ___right1, const RuntimeMethod* method);
// System.Boolean System.Numerics.BigInteger::op_Equality(System.Numerics.BigInteger,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_m4F14B17595D7A750250AAB6BEC37E35417171993 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___left0, int64_t ___right1, const RuntimeMethod* method);
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Division(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  BigInteger_op_Division_m2D185E48C4E6D957CDE6CC6551999807A378C59B (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___dividend0, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___divisor1, const RuntimeMethod* method);
// System.Int32 Nethereum.Util.BigIntegerExtensions::NumberOfDigits(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigIntegerExtensions_NumberOfDigits_mA93398A845596DE17B16C35453CCDD94B99D3C92 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Boolean System.Numerics.BigInteger::op_LessThan(System.Numerics.BigInteger,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThan_m68FBC0B17D17155E01E451A0764F115367BFBAE3 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___left0, int64_t ___right1, const RuntimeMethod* method);
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_UnaryNegation(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_op_UnaryNegation_m48B862CA6F80C14FF1BA7A45B48511B8EDBBC1D5 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___value0, const RuntimeMethod* method);
// System.Boolean System.Numerics.BigInteger::op_GreaterThanOrEqual(System.Numerics.BigInteger,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThanOrEqual_m058CDEB53FF8C59298EE7454C2076FEDD450B488 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___left0, int64_t ___right1, const RuntimeMethod* method);
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Addition(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  BigInteger_op_Addition_m55A6D35945F71B25A38BD6688EFAC3FAF10C46B9 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___left0, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___right1, const RuntimeMethod* method);
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::RoundAwayFromZero(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_RoundAwayFromZero_m68815B693ADF250535A598A8CB48ADABABC7A1AA (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, int32_t ___significantDigits0, const RuntimeMethod* method);
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::Floor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_Floor_mE511F37536BFDE6A549DBFA93CFE8C95F4CCCA15 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, const RuntimeMethod* method);
// System.String System.Numerics.BigInteger::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m880DFDBDB71DB04DE20363C7EC1D81C70C124505 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 * __this, const RuntimeMethod* method);
// System.String System.String::Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Insert_m6F5335C84ACB178D4141772E1D7F2EB7811990EB (String_t* __this, int32_t ___startIndex0, String_t* ___value1, const RuntimeMethod* method);
// System.String System.String::PadRight(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadRight_m2C464B0C6136A24187CF5C8B84E2C6BB614C42FF (String_t* __this, int32_t ___totalWidth0, Il2CppChar ___paddingChar1, const RuntimeMethod* method);
// System.String Nethereum.Util.BigDecimal::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigDecimal_ToString_m3559C0C3C0D83EC22FA15FD376520DFFB7B7771D (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, const RuntimeMethod* method);
// System.Boolean System.Numerics.BigInteger::Equals(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_Equals_m05302B320532185A473A0E9CBA352FA30BB43C9A (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___other0, const RuntimeMethod* method);
// System.Boolean Nethereum.Util.BigDecimal::Equals(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigDecimal_Equals_mF38030F3E1977D84E604181FB6A2248234AB55DB (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___other0, const RuntimeMethod* method);
// System.Boolean Nethereum.Util.BigDecimal::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigDecimal_Equals_m7E937831FFF96389ACBD5CC6C329DA04C3401BD1 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Numerics.BigInteger::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_GetHashCode_m68DD5586F08BF39F4D6547FED0EF8185F6584306 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 * __this, const RuntimeMethod* method);
// System.Int32 Nethereum.Util.BigDecimal::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigDecimal_GetHashCode_m60815B43B82E8E464F99D8E54723AF511348FDA3 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, const RuntimeMethod* method);
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  BigInteger_op_Implicit_m6EF080EFB48B60775B80ECA9E5D08B2322FCD4EC (int64_t ___value0, const RuntimeMethod* method);
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Explicit(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  BigInteger_op_Explicit_m69B64A2FBF4824A400BE0ED2008C5BF1A6BD55E2 (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method);
// System.Void System.Decimal::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decimal__ctor_m3C20B602B540FD08434894065D20BDBA60FF79BC (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Decimal System.Decimal::op_Multiply(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  Decimal_op_Multiply_mD941918A97C8534FDA1B2E1B26288F0FA7224E26 (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___d10, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___d21, const RuntimeMethod* method);
// System.Decimal System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  BigInteger_op_Explicit_m67FAC3B738A0A38953009C3BF2C09C2C29891633 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, const RuntimeMethod* method);
// System.Boolean System.Decimal::op_Inequality(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decimal_op_Inequality_m1524E424F030A184C95FA1AF24C76487E612E296 (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___d10, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___d21, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.Double System.Double::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_m281C3FAE601723AC732D26BAFC6D61CEFD2E0F7D (String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Single System.Single::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m2CEE3E81A3D2E04934160117DFA3729B8158F101 (String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Decimal System.Decimal::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  Decimal_Parse_m3F22F6CA7411E7157C35B112051355D7A6F377B8 (String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Decimal Nethereum.Util.BigDecimal::op_Explicit(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  BigDecimal_op_Explicit_mF107E5A127B8AE4CB1640852C485D1CEC13A71F5 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___value0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mB86633004CDF545E4460E0201CAF950518A0A25A (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method);
// System.UInt32 System.Convert::ToUInt32(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_m934AA2243DAC1FF0AE4CA7DBF62AC2AEEE2EAA1D (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method);
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_op_Implicit_mBC9CA324C0F3694B3EDD45A1EC6666B52408CF14 (int32_t ___value0, const RuntimeMethod* method);
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Addition(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_op_Addition_mDD8E9AB9D5500F03DA130325F6E686E6D474E150 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___left0, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___right1, const RuntimeMethod* method);
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Subtraction(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_op_Subtraction_mD866168360060B71F67DCD4F886A3BC907576DA9 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___left0, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___right1, const RuntimeMethod* method);
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::Add(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_Add_m9B9147F4E72080F8DEA1E594CB08462FAD5421AB (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___left0, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___right1, const RuntimeMethod* method);
// System.Numerics.BigInteger Nethereum.Util.BigDecimal::AlignExponent(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  BigDecimal_AlignExponent_m2BD432A87EF855A37C756B660318555961F69791 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___value0, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___reference1, const RuntimeMethod* method);
// System.Int32 Nethereum.Util.BigDecimal::NumberOfDigits(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigDecimal_NumberOfDigits_m2BAD9B090E9DA4A069A8861F0775C2CF3A3C32E8 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, const RuntimeMethod* method);
// System.Boolean System.Numerics.BigInteger::op_Equality(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_mC4EE6C9D66F0696466BBF98FC9B0A7F7058549BD (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___left0, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___right1, const RuntimeMethod* method);
// System.Boolean System.Numerics.BigInteger::op_Inequality(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Inequality_mB1391E11D28CED8AAA43CBD9A6F2D8611D627867 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___left0, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___right1, const RuntimeMethod* method);
// System.Boolean System.Numerics.BigInteger::op_LessThan(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThan_m89561BB731F384360A88B56FB95F520AF2B881D7 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___left0, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___right1, const RuntimeMethod* method);
// System.Boolean System.Numerics.BigInteger::op_GreaterThan(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThan_mF282DCFF4E38E7FF178EFF1F512F556CB29BD182 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___left0, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___right1, const RuntimeMethod* method);
// System.Boolean System.Numerics.BigInteger::op_LessThanOrEqual(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThanOrEqual_m78E4ACA68BFC6D622D5D769D2A8328DAA35301F4 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___left0, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___right1, const RuntimeMethod* method);
// System.Boolean System.Numerics.BigInteger::op_GreaterThanOrEqual(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThanOrEqual_mA7877996339EB4694414211C903D94F2B224C297 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___left0, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___right1, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// System.Numerics.BigInteger System.Numerics.BigInteger::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  BigInteger_Parse_mAFDC0246E2FA7D4FD015453B27B70A25DE4D8D59 (String_t* ___value0, const RuntimeMethod* method);
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Implicit(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_op_Implicit_m6A6DD29BEACA367A0B703422E41DD81DDF8E2AF3 (double ___value0, const RuntimeMethod* method);
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Multiply(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_op_Multiply_mC788C0CCF2F0E7512EF7BC24D2B318A6B93C8582 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___left0, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___right1, const RuntimeMethod* method);
// System.Double System.Math::Pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Pow_mC2C8700DAAD1316AA457A1D271F78CDF0D61AC2F (double ___x0, double ___y1, const RuntimeMethod* method);
// System.Char Nethereum.Util.NumberFormatting::ParseFormatSpecifier(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar NumberFormatting_ParseFormatSpecifier_m68B4A404F3C210A51B6BFFF4AA12876D420C300A (String_t* ___format0, int32_t* ___digits1, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83 (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, const RuntimeMethod* method);
// System.String System.Numerics.BigInteger::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_mF1D8436574127C7331F384E7E30ADE3CA646BCA4 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::GetInstance(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * NumberFormatInfo_GetInstance_mE5108A48B8BFDB2158C05951FACC08AFB09FDDBB (RuntimeObject* ___formatProvider0, const RuntimeMethod* method);
// System.String Nethereum.Util.BigDecimalFormatter::ToCurrencyString(Nethereum.Util.BigDecimal,System.Int32,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigDecimalFormatter_ToCurrencyString_m8108FACA65A64AAC1411C7944BDEEBFD4A9191D6 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___value0, int32_t ___maxDigits1, NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___format2, const RuntimeMethod* method);
// System.String Nethereum.Util.BigDecimal::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigDecimal_ToString_m361D14BD3AD9EE2FC3555D315D36603ACCCE36AC (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, String_t* ___formatSpecifier0, RuntimeObject* ___format1, const RuntimeMethod* method);
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyDecimalDigits()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_CurrencyDecimalDigits_m656104CD60E6083B2ABD481F1ED4C4DB0ACA69CF_inline (NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * __this, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<System.Byte> Nethereum.Util.BigDecimalFormatter::GetDigits(Nethereum.Util.BigDecimal,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BigDecimalFormatter_GetDigits_mF2EA283888E77D553327C6885516BBD73F9416D5 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___value0, int32_t* ___exponent1, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void Nethereum.Util.NumberFormatting::FormatCurrency(System.Text.StringBuilder,System.Boolean,System.Collections.Generic.IList`1<System.Byte>,System.Int32,System.Int32,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatting_FormatCurrency_m2DAF51F2E5AA242A52D2F9FCD4B4B74A1C8A2241 (StringBuilder_t * ___result0, bool ___isNegative1, RuntimeObject* ___digits2, int32_t ___exponent3, int32_t ___maxDigits4, NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___info5, const RuntimeMethod* method);
// System.Numerics.BigInteger System.Numerics.BigInteger::op_UnaryNegation(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  BigInteger_op_UnaryNegation_m86C3291FF760B360FC481DF4772CE692ED0DCE68 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
inline void List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778 (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *, const RuntimeMethod*))List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778_gshared)(__this, method);
}
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Modulus(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  BigInteger_op_Modulus_m90CD4DEC2293E0D71B73A33720AEE6CFEDECBE2E (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___dividend0, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___divisor1, const RuntimeMethod* method);
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  BigInteger_op_Implicit_m793E65988E1FCC5BEEF92104EB5DD397C5069C21 (uint16_t ___value0, const RuntimeMethod* method);
// System.Byte System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BigInteger_op_Explicit_mC1A8D9DF1D55F732FF8FC6091CE22466726495EE (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(!0)
inline void List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, uint8_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *, uint8_t, const RuntimeMethod*))List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_gshared)(__this, ___item0, method);
}
// System.Boolean System.Numerics.BigInteger::op_GreaterThan(System.Numerics.BigInteger,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThan_mFD7CF4E6EA62C8AF94B3FC70B9C3A90878A0CC0E (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___left0, int64_t ___right1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::Reverse()
inline void List_1_Reverse_m6831BF781D297021CA38E9D1453910098A54E617 (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *, const RuntimeMethod*))List_1_Reverse_m6831BF781D297021CA38E9D1453910098A54E617_gshared)(__this, method);
}
// System.Int32 System.Numerics.BigInteger::get_Sign()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_get_Sign_mB7A2E5A1C237EB3532F5AA6C13511B696B3EA660 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Numerics.BigInteger System.Numerics.BigInteger::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  BigInteger_Parse_m2C891107D509626E33E7E7D24E8DF28DEF593600 (String_t* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803 (RuntimeArray * ___sourceArray0, RuntimeArray * ___destinationArray1, int32_t ___length2, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Skip<System.Byte>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
inline RuntimeObject* Enumerable_Skip_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m721399F0C4B56708F77FDDCA0EE095C7EF536DBD (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Skip_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m721399F0C4B56708F77FDDCA0EE095C7EF536DBD_gshared)(___source0, ___count1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Take<System.Byte>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
inline RuntimeObject* Enumerable_Take_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m08963734D06A0556262EC9BAC908CEFB4E70D9A1 (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Take_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m08963734D06A0556262EC9BAC908CEFB4E70D9A1_gshared)(___source0, ___count1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.Byte>(System.Collections.Generic.IEnumerable`1<!!0>)
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4_gshared)(___source0, method);
}
// System.Void Nethereum.Util.ByteUtil/<MergeToEnum>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMergeToEnumU3Ed__5__ctor_m300B662480DD429F3339DDD064C4021C36DAEA10 (U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Byte> Nethereum.Util.ByteUtil::MergeToEnum(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ByteUtil_MergeToEnum_mDA25965040FCB4388B96E08683589AE6D078B644 (ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ___arrays0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Byte[] Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::HexToByteArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* HexByteConvertorExtensions_HexToByteArray_m89881F7CBE549A55575CCCB4E1C254E2D2E81B89 (String_t* ___value0, const RuntimeMethod* method);
// System.Byte[] Nethereum.RLP.RLP::EncodeElement(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* RLP_EncodeElement_mC5B71719FB385709D3E669C582D9C2E4DB38587A (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___srcData0, const RuntimeMethod* method);
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesForRLPEncoding(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mC21AC2710A7D71B94C81D8ACAAAE89398BC7EE1E (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___bigInteger0, const RuntimeMethod* method);
// System.Byte[] Nethereum.RLP.RLP::EncodeList(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* RLP_EncodeList_mFB3D358226CB2F5DF6811E894B73FDCAB10518C8 (ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ___items0, const RuntimeMethod* method);
// System.Byte[] Nethereum.Util.Sha3Keccack::CalculateHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Sha3Keccack_CalculateHash_mFCF932E75B53BE3A39C92436F0D0E035A53290E7 (Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method);
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::ToHex(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_ToHex_m1CC2B1935D1783A24DBC1122253E7C313B6B2900 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, bool ___prefix1, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.String Nethereum.Util.AddressExtensions::ConvertToEthereumChecksumAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AddressExtensions_ConvertToEthereumChecksumAddress_mE1007B333943395E6D84B2EAE63283B72A5652ED (String_t* ___address0, const RuntimeMethod* method);
// System.String Nethereum.Util.ContractUtils::CalculateCreate2Address(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContractUtils_CalculateCreate2Address_m981D92B33DECBE5FE61E147578921645D9364953 (String_t* ___address0, String_t* ___saltHex1, String_t* ___byteCodeHex2, const RuntimeMethod* method);
// System.String Nethereum.Util.Sha3Keccack::CalculateHashFromHex(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Sha3Keccack_CalculateHashFromHex_mF849513EAC5B752E213526473560A119DACD5DDA (Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___hexValues0, const RuntimeMethod* method);
// System.Void Nethereum.Util.Keccak.KeccakDigest::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest__ctor_m83E6B9A17080F330DFE612B81C6B43252D34D44B (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, int32_t ___bitLength0, const RuntimeMethod* method);
// System.Void Nethereum.Util.Keccak.KeccakDigest::Init(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Init_mE3E6B4779325C7FA688DFAD676F0A20F76EB3188 (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, int32_t ___bitLength0, const RuntimeMethod* method);
// System.Void Nethereum.Util.Keccak.KeccakDigest::CopyIn(Nethereum.Util.Keccak.KeccakDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_CopyIn_m343E1928FD487AB89831F12EA5B977768F06FD8B (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * ___source0, const RuntimeMethod* method);
// System.Void Nethereum.Util.Keccak.KeccakDigest::Absorb(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Absorb_mA2ED5609453836ED978BC338681A5991B705B8AF (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___off1, int32_t ___len2, const RuntimeMethod* method);
// System.Void Nethereum.Util.Keccak.KeccakDigest::Squeeze(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Squeeze_mCDC130D30AD42E9C8173462310435B721737AB5A (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___output0, int32_t ___off1, int32_t ___len2, const RuntimeMethod* method);
// System.Void Nethereum.Util.Keccak.KeccakDigest::AbsorbBits(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_AbsorbBits_m196587E484DD502CD41C99C581558092E02E0F97 (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, int32_t ___data0, int32_t ___bits1, const RuntimeMethod* method);
// System.Void Nethereum.Util.Keccak.KeccakDigest::InitSponge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_InitSponge_m922FF7D21C50C3B17C8EAB8996850B63EAB6A818 (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, int32_t ___rate0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F (RuntimeArray * ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method);
// System.Void Nethereum.Util.Keccak.Arrays::Fill(System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrays_Fill_m53305E963483A61E6DD6E6D355984E0D6B137617 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf0, uint8_t ___b1, const RuntimeMethod* method);
// System.Void Nethereum.Util.Keccak.KeccakDigest::KeccakAbsorb(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_KeccakAbsorb_m855241576F082DEEFD9EA8A24C8A193DC2225185 (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___off1, const RuntimeMethod* method);
// System.UInt64 Nethereum.Util.Keccak.Pack::LE_To_UInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Pack_LE_To_UInt64_mA4BDB2CA15FF07D3D307233ABC42FA88BE2E5604 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs0, int32_t ___off1, const RuntimeMethod* method);
// System.Void Nethereum.Util.Keccak.KeccakDigest::KeccakPermutation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_KeccakPermutation_m233662191B3BFC82FCBCBF0CADCE7AA0D7F525F5 (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, const RuntimeMethod* method);
// System.Void Nethereum.Util.Keccak.KeccakDigest::KeccakExtract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_KeccakExtract_m13CF8C3FF2B540C7A83B080FB4A136124ABB69B0 (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, const RuntimeMethod* method);
// System.Void Nethereum.Util.Keccak.KeccakDigest::PadAndSwitchToSqueezingPhase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_PadAndSwitchToSqueezingPhase_m488DBDE2DE5D091C9599CA6A6D41B05237D4749D (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, const RuntimeMethod* method);
// System.Int64 System.Math::Min(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Math_Min_m63E8ED32ABF3637E5BE49943F6760922C2876087 (int64_t ___val10, int64_t ___val21, const RuntimeMethod* method);
// System.Void Nethereum.Util.Keccak.Pack::UInt64_To_LE(System.UInt64[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_LE_mB8E61033137FB4A42FC286330DDE990B4334C6BF (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___ns0, int32_t ___nsOff1, int32_t ___nsLen2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs3, int32_t ___bsOff4, const RuntimeMethod* method);
// System.Void Nethereum.Util.Keccak.KeccakDigest::Theta(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Theta_mF3FA25985C800579C2ED170963890229E91F02C3 (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___A0, const RuntimeMethod* method);
// System.Void Nethereum.Util.Keccak.KeccakDigest::Rho(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Rho_m8EFF6A627D35E13010A50E3475167C4A3E542A2A (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___A0, const RuntimeMethod* method);
// System.Void Nethereum.Util.Keccak.KeccakDigest::Pi(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Pi_m49AF05D95F51933F1A22B8749767E563EED0862B (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___A0, const RuntimeMethod* method);
// System.Void Nethereum.Util.Keccak.KeccakDigest::Chi(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Chi_mE851A61F93960C391BC1538B34F7351A281F75A9 (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___A0, const RuntimeMethod* method);
// System.Void Nethereum.Util.Keccak.KeccakDigest::Iota(System.UInt64[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Iota_mC0E2BD41ED95322E9290A49A87919B8906D5C05F (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___A0, int32_t ___indexRound1, const RuntimeMethod* method);
// System.UInt64 Nethereum.Util.Keccak.KeccakDigest::leftRotate(System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t KeccakDigest_leftRotate_m522092EF8195D6CA13FE80205267C50A4C9482E0 (uint64_t ___v0, int32_t ___r1, const RuntimeMethod* method);
// System.UInt64[] Nethereum.Util.Keccak.KeccakDigest::KeccakInitializeRoundConstants()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* KeccakDigest_KeccakInitializeRoundConstants_m8491DBB2B9EBC4B1C37F45FA90F33202DF916652 (const RuntimeMethod* method);
// System.Int32[] Nethereum.Util.Keccak.KeccakDigest::KeccakInitializeRhoOffsets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* KeccakDigest_KeccakInitializeRhoOffsets_mDD5C1F2053F33F28F501E533AB542CD67AF0D9D2 (const RuntimeMethod* method);
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyPositivePattern()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_CurrencyPositivePattern_m237EF7AC03697CEB6B08125F4C905B86162CB21F_inline (NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * __this, const RuntimeMethod* method);
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyNegativePattern()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_CurrencyNegativePattern_m2A7A8A171AE68C3FC64FCEC850162F3247E5C120_inline (NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * __this, const RuntimeMethod* method);
// System.Int32[] System.Globalization.NumberFormatInfo::get_CurrencyGroupSizes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* NumberFormatInfo_get_CurrencyGroupSizes_mA8317722234295B56D3021CD6E1716CD06EBFA1E (NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * __this, const RuntimeMethod* method);
// System.String System.Globalization.NumberFormatInfo::get_CurrencyDecimalSeparator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_CurrencyDecimalSeparator_mC1E808DCE589B7BFFF713C20F1F7798ABF4EBE55_inline (NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * __this, const RuntimeMethod* method);
// System.String System.Globalization.NumberFormatInfo::get_CurrencyGroupSeparator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_CurrencyGroupSeparator_mD950357ADC6F85D37B9545DE8FE43FFB16AD9B80_inline (NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * __this, const RuntimeMethod* method);
// System.Void Nethereum.Util.NumberFormatting::FormatFixed(System.Text.StringBuilder,System.Collections.Generic.IList`1<System.Byte>,System.Int32,System.Int32,System.Int32[],System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatting_FormatFixed_m3DCB89B4D0761DFDA6A10F092F417B6D429DFB27 (StringBuilder_t * ___sb0, RuntimeObject* ___digits1, int32_t ___exponent2, int32_t ___maxFractionalDigits3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___groupDigits4, String_t* ___decimalSeparator5, String_t* ___groupSeparator6, const RuntimeMethod* method);
// System.String System.Globalization.NumberFormatInfo::get_NegativeSign()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NegativeSign_mF8AF2CE58CA5411348ABD35A2A0B950830C18F59_inline (NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * __this, const RuntimeMethod* method);
// System.String System.Globalization.NumberFormatInfo::get_CurrencySymbol()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_CurrencySymbol_m294691B5C58A2691C5F859647A6D4200A51BF514_inline (NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m81CEEF1FCB5EFBBAA39071F48BCFBC16AED0C915 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m3BE4C94FB7DDD0AB42515FC321FBD03B81A03A1C (StringBuilder_t * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mB04B8FAD8E322DF8E69F3F85BCE4A8D041AE8BFB (StringBuilder_t * __this, Il2CppChar ___value0, int32_t ___repeatCount1, const RuntimeMethod* method);
// System.Void Nethereum.Util.Keccak.Pack::UInt32_To_BE(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_BE_mFC415439998222C076A4CA8B19E602C79C37F38C (uint32_t ___n0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs1, int32_t ___off2, const RuntimeMethod* method);
// System.Void Nethereum.Util.Keccak.Pack::UInt32_To_BE(System.UInt32[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_BE_m40B887C92188276A985C20341144CA80BB9399DD (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___ns0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs1, int32_t ___off2, const RuntimeMethod* method);
// System.UInt32 Nethereum.Util.Keccak.Pack::BE_To_UInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Pack_BE_To_UInt32_mCDBE10390B6E13A704630557046B0ABC4C49E599 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs0, int32_t ___off1, const RuntimeMethod* method);
// System.Void Nethereum.Util.Keccak.Pack::UInt64_To_BE(System.UInt64,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_BE_mCF67BA117549BDD3719269D15F18838B838332DB (uint64_t ___n0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs1, int32_t ___off2, const RuntimeMethod* method);
// System.Void Nethereum.Util.Keccak.Pack::UInt32_To_BE(System.UInt32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_BE_m8CCF69ADE05B4558504E84D0F3A8A4BCAD64BD2C (uint32_t ___n0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs1, const RuntimeMethod* method);
// System.Void Nethereum.Util.Keccak.Pack::UInt64_To_BE(System.UInt64[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_BE_mEE7096773486FE6B1DC6C2A8F186A09600491BB0 (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___ns0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs1, int32_t ___off2, const RuntimeMethod* method);
// System.UInt32 Nethereum.Util.Keccak.Pack::BE_To_UInt32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Pack_BE_To_UInt32_m993E75BEBF716C1949ADCA7ED97A229AB62C3E0F (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs0, const RuntimeMethod* method);
// System.UInt64 Nethereum.Util.Keccak.Pack::BE_To_UInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Pack_BE_To_UInt64_m5698FC806315DA964B2F914F3A269C984481BCA8 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs0, int32_t ___off1, const RuntimeMethod* method);
// System.Void Nethereum.Util.Keccak.Pack::UInt32_To_LE(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_LE_m024D3C8C39CA3B9CB04A7D92074D30E55869393D (uint32_t ___n0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs1, int32_t ___off2, const RuntimeMethod* method);
// System.Void Nethereum.Util.Keccak.Pack::UInt32_To_LE(System.UInt32[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_LE_mDE59E8920BA1DC43280E3D9109E7CCD39AA00D4F (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___ns0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs1, int32_t ___off2, const RuntimeMethod* method);
// System.UInt32 Nethereum.Util.Keccak.Pack::LE_To_UInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Pack_LE_To_UInt32_m6AB2E4496F35046FC6D776227173710B8A07DC14 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs0, int32_t ___off1, const RuntimeMethod* method);
// System.Void Nethereum.Util.Keccak.Pack::UInt64_To_LE(System.UInt64,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_LE_m4201357C4C82AA415DF18F6EAEE5F026B8471C9E (uint64_t ___n0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs1, int32_t ___off2, const RuntimeMethod* method);
// System.Void Nethereum.Util.Keccak.Pack::UInt32_To_LE(System.UInt32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_LE_mDAC759B7627BB14B081EFBE78E20894CA0643E8D (uint32_t ___n0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs1, const RuntimeMethod* method);
// System.Void Nethereum.Util.Keccak.Pack::UInt64_To_LE(System.UInt64[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_LE_m3F9EE2EE45CFB53DA3AD1C0F610B4F42C6D55EE1 (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___ns0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs1, int32_t ___off2, const RuntimeMethod* method);
// System.UInt32 Nethereum.Util.Keccak.Pack::LE_To_UInt32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Pack_LE_To_UInt32_m30DF1D981AA9A6CD04BB7F386123BBB9A8443C33 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Void System.Func`2<System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m22403E6E9EC24A3D8103D29D9D66B5EEEA0AC69E (Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.String,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisString_t_TisString_t_m5E54BE921E960B9AB33FE013CF7ECB8D1CF24A1A (RuntimeObject* ___source0, Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared)(___source0, ___selector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared)(___source0, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8846EB11F0A221BDE237DE041D17764B36065404 (String_t* ___separator0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value1, const RuntimeMethod* method);
// System.Void Nethereum.Util.AddressEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressEqualityComparer__ctor_m177F120343ADBCA652AA92468BA419BA30553D92 (AddressEqualityComparer_t9409215AB76B3968FF863550202D5ABAD43F77B7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
inline void HashSet_1__ctor_m2D141B160C366DB0A2B24DA4A97CC8653C77800E (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m2AB3E1DC3FE63AC2086C2DCFCE5B1B407A33FAEB_gshared)(__this, ___comparer0, method);
}
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_OrdinalIgnoreCase_m8FD38206B6FFE866E97CE4DF84B037F0DF175288_inline (const RuntimeMethod* method);
// System.Void Nethereum.Util.UnitConversion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitConversion__ctor_mC6B863B3B2621ABBC81D35461BC7B40362FDE901 (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, const RuntimeMethod* method);
// System.Int32 Nethereum.Util.UnitConversion::GetEthUnitValueLength(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnitConversion_GetEthUnitValueLength_m81585BAC12F3A7FA41939D142F2917A19E8327E1 (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___unitValue0, const RuntimeMethod* method);
// System.Decimal Nethereum.Util.UnitConversion::FromWei(System.Numerics.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  UnitConversion_FromWei_m6585902046CD80892D325B64266A9728C4FD8E3D (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, int32_t ___decimalPlacesToUnit1, const RuntimeMethod* method);
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::GetEthUnitValue(Nethereum.Util.UnitConversion/EthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  UnitConversion_GetEthUnitValue_m0B304BFA61D20FA7005D29B3794C6B5F1BC6930F (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, int32_t ___ethUnit0, const RuntimeMethod* method);
// System.Decimal Nethereum.Util.UnitConversion::FromWei(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  UnitConversion_FromWei_m681A75F7A7D1C35DF8BCE1D3914453DEB3B0052C (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___toUnit1, const RuntimeMethod* method);
// Nethereum.Util.BigDecimal Nethereum.Util.UnitConversion::FromWeiToBigDecimal(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  UnitConversion_FromWeiToBigDecimal_mD0E068AA9632894C245730E9DB21603E203126A0 (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___toUnit1, const RuntimeMethod* method);
// Nethereum.Util.BigDecimal Nethereum.Util.UnitConversion::FromWeiToBigDecimal(System.Numerics.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  UnitConversion_FromWeiToBigDecimal_m04FC4C5474B5A98904B7E2549C92DDEABAE55FA0 (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, int32_t ___decimalPlacesToUnit1, const RuntimeMethod* method);
// System.String Nethereum.Util.FormattingExtensions::ToStringInvariant<System.Numerics.BigInteger>(T)
inline String_t* FormattingExtensions_ToStringInvariant_TisBigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_mCF63EDD8B1F432D0135B8F14E9087AA9F4680F45 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___formattable0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 , const RuntimeMethod*))FormattingExtensions_ToStringInvariant_TisBigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_mCF63EDD8B1F432D0135B8F14E9087AA9F4680F45_gshared)(___formattable0, method);
}
// System.Numerics.BigInteger Nethereum.Util.BigIntegerExtensions::ParseInvariant(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  BigIntegerExtensions_ParseInvariant_m592624DF089E0CCCC230B09EC21DBAB20F0521C8 (String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Trim(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___trimChars0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWeiFromUnit(Nethereum.Util.BigDecimal,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  UnitConversion_ToWeiFromUnit_m359D0612F7BC431AF79803E1DFFEAEC7E83C6569 (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___amount0, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___fromUnit1, const RuntimeMethod* method);
// System.Boolean Nethereum.Util.UnitConversion::TryValidateUnitValue(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnitConversion_TryValidateUnitValue_mCB42935B94684527E8E38D616AD33AF2D196BDF1 (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___ethUnit0, const RuntimeMethod* method);
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWei(Nethereum.Util.BigDecimal,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  UnitConversion_ToWei_m7DC46E6A5797A62EAE981929675A185EDD4B24A1 (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___amount0, int32_t ___decimalPlacesFromUnit1, const RuntimeMethod* method);
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWei(System.Decimal,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  UnitConversion_ToWei_m8EE7035876B7C107BA654B36EB3F6D6DDF31E680 (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___amount0, int32_t ___decimalPlacesFromUnit1, const RuntimeMethod* method);
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWeiFromUnit(System.Decimal,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  UnitConversion_ToWeiFromUnit_mA2F26A144CA3EDF4391558025F57E92C7FEB102C (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___amount0, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___fromUnit1, const RuntimeMethod* method);
// System.Void System.Numerics.BigInteger::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m104B492675CC61CB48D17E18900DF23DCB7408D4 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWei(System.Numerics.BigInteger,Nethereum.Util.UnitConversion/EthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  UnitConversion_ToWei_mB6E64CFC698A93FCB450C5B6BEA2BE8A51A0BEB1 (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, int32_t ___fromUnit1, const RuntimeMethod* method);
// System.Decimal System.Convert::ToDecimal(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  Convert_ToDecimal_mD729925F249653EF8DA34909561747DB117A4644 (double ___value0, const RuntimeMethod* method);
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWei(System.Decimal,Nethereum.Util.UnitConversion/EthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  UnitConversion_ToWei_m7DDBDB3BAAB575770EA968668BD62A8D9230BA06 (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___amount0, int32_t ___fromUnit1, const RuntimeMethod* method);
// System.Decimal System.Convert::ToDecimal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  Convert_ToDecimal_m1C82D6D8EC3EF586C277BD3EA785CBCD75A15862 (float ___value0, const RuntimeMethod* method);
// System.Void System.Numerics.BigInteger::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mD712B74AEF1E9AF8497BE69D852B845EF21F8F5D (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Decimal System.Decimal::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  Decimal_Parse_mA2417CDEDFD723B6AAF704EB84509FF59733784A (String_t* ___s0, const RuntimeMethod* method);
// System.Int32 Nethereum.Util.UnitConversion::CalculateNumberOfDecimalPlaces(System.Decimal,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnitConversion_CalculateNumberOfDecimalPlaces_mA34E7F067E654F112DD73BE3FD4D3E36EE21A7C5 (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, int32_t ___maxNumberOfDecimals1, int32_t ___currentNumberOfDecimals2, const RuntimeMethod* method);
// System.String Nethereum.Util.FormattingExtensions::ToStringInvariant<System.Decimal>(T)
inline String_t* FormattingExtensions_ToStringInvariant_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_mAB4AA93D38048BC4E2F818F04480E92B96CC4E4F (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___formattable0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 , const RuntimeMethod*))FormattingExtensions_ToStringInvariant_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_mAB4AA93D38048BC4E2F818F04480E92B96CC4E4F_gshared)(___formattable0, method);
}
// System.Decimal System.Math::Round(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  Math_Round_m56BEF8E2CC0542275D0769542C0FE5761041C724 (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___d0, const RuntimeMethod* method);
// System.Boolean System.Decimal::op_Equality(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decimal_op_Equality_m2A6DA65ED2EA13C91B50973C956BAC180925D049 (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___d10, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___d21, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::Last<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>)
inline int32_t Enumerable_Last_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m9F92DBD5EE0199F0455C57068B329302242829C5 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Last_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m9F92DBD5EE0199F0455C57068B329302242829C5_gshared)(___source0, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_Delay_mD54722DBAF22507493263E9B1167A7F77EDDF80E (int32_t ___millisecondsDelay0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Byte> Nethereum.Util.ByteUtil/<MergeToEnum>d__5::System.Collections.Generic.IEnumerable<System.Byte>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMergeToEnumU3Ed__5_System_Collections_Generic_IEnumerableU3CSystem_ByteU3E_GetEnumerator_m6F5D810EC4D038336DB8F6BD2AF056D1E93B6713 (U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3 * __this, const RuntimeMethod* method);
// System.Void Nethereum.Util.Sha3Keccack/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2D7382B6213A47EB2D6462083FB3E58A98E3F3D0 (U3CU3Ec_tCE6734CCDEDBDAD7F5EE1DA448A4474E8EDA50CD * __this, const RuntimeMethod* method);
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
// System.Boolean Nethereum.Util.AddressEqualityComparer::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressEqualityComparer_Equals_m7A18B9D26AEBCAFD7C57F4EDA9AAB424B7D40883 (AddressEqualityComparer_t9409215AB76B3968FF863550202D5ABAD43F77B7 * __this, String_t* ___x0, String_t* ___y1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___x0;
		String_t* L_1 = ___y1;
		bool L_2;
		L_2 = AddressExtensions_IsTheSameAddress_mAF90C9D0AC117AB80EE7518B5183FAFE17C96433(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Nethereum.Util.AddressEqualityComparer::GetHashCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AddressEqualityComparer_GetHashCode_m5E86A14498213296D082ABD7B9E7F35C9CE4B8F5 (AddressEqualityComparer_t9409215AB76B3968FF863550202D5ABAD43F77B7 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	{
		return (-1);
	}
}
// System.Void Nethereum.Util.AddressEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressEqualityComparer__ctor_m177F120343ADBCA652AA92468BA419BA30553D92 (AddressEqualityComparer_t9409215AB76B3968FF863550202D5ABAD43F77B7 * __this, const RuntimeMethod* method)
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
// System.String Nethereum.Util.AddressExtensions::ConvertToEthereumChecksumAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AddressExtensions_ConvertToEthereumChecksumAddress_mE1007B333943395E6D84B2EAE63283B72A5652ED (String_t* ___address0, const RuntimeMethod* method)
{
	{
		AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * L_0;
		L_0 = AddressUtil_get_Current_m4C8CF9C376CE8A083FDDBE7D3145611276241C18(/*hidden argument*/NULL);
		String_t* L_1 = ___address0;
		String_t* L_2;
		L_2 = AddressUtil_ConvertToChecksumAddress_m6C7A111E88877A63065BD59D1772456D4B8FFDA5(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Nethereum.Util.AddressExtensions::IsEthereumChecksumAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressExtensions_IsEthereumChecksumAddress_mD792D8656BD5C18266FD62941F811DABC1ED5010 (String_t* ___address0, const RuntimeMethod* method)
{
	{
		AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * L_0;
		L_0 = AddressUtil_get_Current_m4C8CF9C376CE8A083FDDBE7D3145611276241C18(/*hidden argument*/NULL);
		String_t* L_1 = ___address0;
		bool L_2;
		L_2 = AddressUtil_IsChecksumAddress_mD7AD6DEC0D2E76FAED8FDC946CFBFFDFE1D96A1F(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Nethereum.Util.AddressExtensions::IsValidEthereumAddressHexFormat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressExtensions_IsValidEthereumAddressHexFormat_m768C5F023B718CAF2DDC7640AED98ABC1E221A9F (String_t* ___address0, const RuntimeMethod* method)
{
	{
		AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * L_0;
		L_0 = AddressUtil_get_Current_m4C8CF9C376CE8A083FDDBE7D3145611276241C18(/*hidden argument*/NULL);
		String_t* L_1 = ___address0;
		bool L_2;
		L_2 = AddressUtil_IsValidEthereumAddressHexFormat_m39A7630946908B27A29337E219B60C45B2D17BDA(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Nethereum.Util.AddressExtensions::IsValidEthereumAddressLength(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressExtensions_IsValidEthereumAddressLength_m19E81C5E2D33FB2034E1AF86A2311D5A98D74A30 (String_t* ___address0, const RuntimeMethod* method)
{
	{
		AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * L_0;
		L_0 = AddressUtil_get_Current_m4C8CF9C376CE8A083FDDBE7D3145611276241C18(/*hidden argument*/NULL);
		String_t* L_1 = ___address0;
		bool L_2;
		L_2 = AddressUtil_IsValidAddressLength_m4F6FB3EFD68B730FF0B45056A7BEF8EC80350D9D(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Nethereum.Util.AddressExtensions::IsTheSameAddress(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressExtensions_IsTheSameAddress_mAF90C9D0AC117AB80EE7518B5183FAFE17C96433 (String_t* ___address0, String_t* ___otherAddress1, const RuntimeMethod* method)
{
	{
		AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * L_0;
		L_0 = AddressUtil_get_Current_m4C8CF9C376CE8A083FDDBE7D3145611276241C18(/*hidden argument*/NULL);
		String_t* L_1 = ___address0;
		String_t* L_2 = ___otherAddress1;
		bool L_3;
		L_3 = AddressUtil_AreAddressesTheSame_mAC31A8B54A8A7B1A68CE5DDB8354B59139F9CBE6(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Nethereum.Util.AddressExtensions::IsAnEmptyAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressExtensions_IsAnEmptyAddress_mEF7DF5F6E19B1754C1B94E0B993BE80D7D116F14 (String_t* ___address0, const RuntimeMethod* method)
{
	{
		AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * L_0;
		L_0 = AddressUtil_get_Current_m4C8CF9C376CE8A083FDDBE7D3145611276241C18(/*hidden argument*/NULL);
		String_t* L_1 = ___address0;
		bool L_2;
		L_2 = AddressUtil_IsAnEmptyAddress_m0C63DE0C3EACC78053E38450B3C40C155E8D99C6(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Nethereum.Util.AddressExtensions::IsNotAnEmptyAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressExtensions_IsNotAnEmptyAddress_mA61B6F8EE4A2B39F570499BB286ED7441916EFEE (String_t* ___address0, const RuntimeMethod* method)
{
	{
		AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * L_0;
		L_0 = AddressUtil_get_Current_m4C8CF9C376CE8A083FDDBE7D3145611276241C18(/*hidden argument*/NULL);
		String_t* L_1 = ___address0;
		bool L_2;
		L_2 = AddressUtil_IsNotAnEmptyAddress_m003609A84DC0368F03E997CFE7DE588523FDB130(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Nethereum.Util.AddressExtensions::AddressValueOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AddressExtensions_AddressValueOrEmpty_mB4887FF28A06207C37C0012DDA92627228DC00E1 (String_t* ___address0, const RuntimeMethod* method)
{
	{
		AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * L_0;
		L_0 = AddressUtil_get_Current_m4C8CF9C376CE8A083FDDBE7D3145611276241C18(/*hidden argument*/NULL);
		String_t* L_1 = ___address0;
		String_t* L_2;
		L_2 = AddressUtil_AddressValueOrEmpty_mFAA7D654AA644DDB1BA308D10F2561921B6DD6AC(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Nethereum.Util.AddressExtensions::IsEmptyOrEqualsAddress(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressExtensions_IsEmptyOrEqualsAddress_mB57873882B53532121F808088DD38C9E8CBA825F (String_t* ___address10, String_t* ___candidate1, const RuntimeMethod* method)
{
	{
		AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * L_0;
		L_0 = AddressUtil_get_Current_m4C8CF9C376CE8A083FDDBE7D3145611276241C18(/*hidden argument*/NULL);
		String_t* L_1 = ___address10;
		String_t* L_2 = ___candidate1;
		bool L_3;
		L_3 = AddressUtil_IsEmptyOrEqualsAddress_m9817EB149DBE9C86A304FD636A05CAE34DE418C2(L_0, L_1, L_2, /*hidden argument*/NULL);
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
// Nethereum.Util.AddressUtil Nethereum.Util.AddressUtil::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * AddressUtil_get_Current_m4C8CF9C376CE8A083FDDBE7D3145611276241C18 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * L_0 = ((AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202_StaticFields*)il2cpp_codegen_static_fields_for(AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202_il2cpp_TypeInfo_var))->get__current_0();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * L_1 = (AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 *)il2cpp_codegen_object_new(AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202_il2cpp_TypeInfo_var);
		AddressUtil__ctor_mA01344904695FA4740D66766786A0E77599BED69(L_1, /*hidden argument*/NULL);
		((AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202_StaticFields*)il2cpp_codegen_static_fields_for(AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202_il2cpp_TypeInfo_var))->set__current_0(L_1);
	}

IL_0011:
	{
		AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * L_2 = ((AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202_StaticFields*)il2cpp_codegen_static_fields_for(AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202_il2cpp_TypeInfo_var))->get__current_0();
		return L_2;
	}
}
// System.Boolean Nethereum.Util.AddressUtil::IsAnEmptyAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressUtil_IsAnEmptyAddress_m0C63DE0C3EACC78053E38450B3C40C155E8D99C6 (AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * __this, String_t* ___address0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BCF4B50E72B7CCD6AD748E8D2FDCADBF49961A8);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___address0;
		bool L_1;
		L_1 = String_IsNullOrWhiteSpace_m4C4266AE4097F5B61FF72A8D0D083611231B9CA6(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		String_t* L_2 = ___address0;
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral4BCF4B50E72B7CCD6AD748E8D2FDCADBF49961A8, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Nethereum.Util.AddressUtil::IsNotAnEmptyAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressUtil_IsNotAnEmptyAddress_m003609A84DC0368F03E997CFE7DE588523FDB130 (AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * __this, String_t* ___address0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___address0;
		bool L_1;
		L_1 = AddressUtil_IsAnEmptyAddress_m0C63DE0C3EACC78053E38450B3C40C155E8D99C6(__this, L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.String Nethereum.Util.AddressUtil::AddressValueOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AddressUtil_AddressValueOrEmpty_mFAA7D654AA644DDB1BA308D10F2561921B6DD6AC (AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * __this, String_t* ___address0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BCF4B50E72B7CCD6AD748E8D2FDCADBF49961A8);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___address0;
		bool L_1;
		L_1 = AddressExtensions_IsAnEmptyAddress_mEF7DF5F6E19B1754C1B94E0B993BE80D7D116F14(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_2 = ___address0;
		return L_2;
	}

IL_000a:
	{
		return _stringLiteral4BCF4B50E72B7CCD6AD748E8D2FDCADBF49961A8;
	}
}
// System.Boolean Nethereum.Util.AddressUtil::IsEmptyOrEqualsAddress(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressUtil_IsEmptyOrEqualsAddress_m9817EB149DBE9C86A304FD636A05CAE34DE418C2 (AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * __this, String_t* ___address10, String_t* ___candidate1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___address10;
		bool L_1;
		L_1 = AddressUtil_IsAnEmptyAddress_m0C63DE0C3EACC78053E38450B3C40C155E8D99C6(__this, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_2 = ___address10;
		String_t* L_3 = ___candidate1;
		bool L_4;
		L_4 = AddressUtil_AreAddressesTheSame_mAC31A8B54A8A7B1A68CE5DDB8354B59139F9CBE6(__this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0012:
	{
		return (bool)1;
	}
}
// System.Boolean Nethereum.Util.AddressUtil::AreAddressesTheSame(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressUtil_AreAddressesTheSame_mAC31A8B54A8A7B1A68CE5DDB8354B59139F9CBE6 (AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * __this, String_t* ___address10, String_t* ___address21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B8_0 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	String_t* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	String_t* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	{
		String_t* L_0 = ___address10;
		bool L_1;
		L_1 = AddressExtensions_IsAnEmptyAddress_mEF7DF5F6E19B1754C1B94E0B993BE80D7D116F14(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_2 = ___address21;
		bool L_3;
		L_3 = AddressExtensions_IsAnEmptyAddress_mEF7DF5F6E19B1754C1B94E0B993BE80D7D116F14(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)1;
	}

IL_0012:
	{
		String_t* L_4 = ___address10;
		bool L_5;
		L_5 = AddressExtensions_IsAnEmptyAddress_mEF7DF5F6E19B1754C1B94E0B993BE80D7D116F14(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_6 = ___address21;
		bool L_7;
		L_7 = AddressExtensions_IsAnEmptyAddress_mEF7DF5F6E19B1754C1B94E0B993BE80D7D116F14(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0024;
		}
	}

IL_0022:
	{
		return (bool)0;
	}

IL_0024:
	{
		String_t* L_8 = ___address10;
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = HexByteConvertorExtensions_EnsureHexPrefix_mD4A30715678BF7C9B3CC086AC6B12DC505B9DA1A(L_8, /*hidden argument*/NULL);
		String_t* L_10 = L_9;
		G_B7_0 = L_10;
		if (L_10)
		{
			G_B8_0 = L_10;
			goto IL_0031;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		goto IL_0036;
	}

IL_0031:
	{
		String_t* L_11;
		L_11 = String_ToLowerInvariant_m070E99F11A6005755BD6579A6CC835694395F79F(G_B8_0, /*hidden argument*/NULL);
		G_B9_0 = L_11;
	}

IL_0036:
	{
		String_t* L_12 = ___address21;
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		String_t* L_13;
		L_13 = HexByteConvertorExtensions_EnsureHexPrefix_mD4A30715678BF7C9B3CC086AC6B12DC505B9DA1A(L_12, /*hidden argument*/NULL);
		String_t* L_14 = L_13;
		G_B10_0 = L_14;
		G_B10_1 = G_B9_0;
		if (L_14)
		{
			G_B11_0 = L_14;
			G_B11_1 = G_B9_0;
			goto IL_0043;
		}
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		goto IL_0048;
	}

IL_0043:
	{
		String_t* L_15;
		L_15 = String_ToLowerInvariant_m070E99F11A6005755BD6579A6CC835694395F79F(G_B11_0, /*hidden argument*/NULL);
		G_B12_0 = L_15;
		G_B12_1 = G_B11_1;
	}

IL_0048:
	{
		bool L_16;
		L_16 = String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5(G_B12_1, G_B12_0, 5, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.String Nethereum.Util.AddressUtil::ConvertToChecksumAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AddressUtil_ConvertToChecksumAddress_m6C7A111E88877A63065BD59D1772456D4B8FFDA5 (AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * __this, String_t* ___address0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		String_t* L_0 = ___address0;
		String_t* L_1;
		L_1 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = HexByteConvertorExtensions_RemoveHexPrefix_m9802B6BB32BC6F49DA47744E8B56C03EB64B2D4F(L_1, /*hidden argument*/NULL);
		___address0 = L_2;
		Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0 * L_3 = (Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0 *)il2cpp_codegen_object_new(Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0_il2cpp_TypeInfo_var);
		Sha3Keccack__ctor_m8D45AFC277B2B575167CD58FF181D926737D15F2(L_3, /*hidden argument*/NULL);
		String_t* L_4 = ___address0;
		String_t* L_5;
		L_5 = Sha3Keccack_CalculateHash_m56955B8211F6C057C85699C40B8CC6513AFE5401(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		V_1 = _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89;
		V_2 = 0;
		goto IL_0076;
	}

IL_0023:
	{
		String_t* L_6 = V_0;
		int32_t L_7 = V_2;
		Il2CppChar L_8;
		L_8 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_6, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		String_t* L_9;
		L_9 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&V_3), /*hidden argument*/NULL);
		int32_t L_10;
		L_10 = Int32_Parse_mE2DF841397B10B947C6729D5B811D0C25D211A56(L_9, ((int32_t)515), /*hidden argument*/NULL);
		if ((((int32_t)L_10) <= ((int32_t)7)))
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_11 = V_1;
		String_t* L_12 = ___address0;
		int32_t L_13 = V_2;
		Il2CppChar L_14;
		L_14 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_12, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		String_t* L_15;
		L_15 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&V_3), /*hidden argument*/NULL);
		String_t* L_16;
		L_16 = String_ToUpper_m4BC629F8059C3E0C4E3F7C7E04DB50EBB0C1A05A(L_15, /*hidden argument*/NULL);
		String_t* L_17;
		L_17 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_11, L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		goto IL_0072;
	}

IL_005c:
	{
		String_t* L_18 = V_1;
		String_t* L_19 = ___address0;
		int32_t L_20 = V_2;
		Il2CppChar L_21;
		L_21 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_19, L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		String_t* L_22;
		L_22 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&V_3), /*hidden argument*/NULL);
		String_t* L_23;
		L_23 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_18, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
	}

IL_0072:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0076:
	{
		int32_t L_25 = V_2;
		String_t* L_26 = ___address0;
		int32_t L_27;
		L_27 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_26, /*hidden argument*/NULL);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_28 = V_1;
		return L_28;
	}
}
// System.String Nethereum.Util.AddressUtil::ConvertToValid20ByteAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AddressUtil_ConvertToValid20ByteAddress_mAE6341088F9BE798041CE37F82FD1692D7951E9C (AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * __this, String_t* ___address0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___address0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		___address0 = L_1;
	}

IL_000a:
	{
		String_t* L_2 = ___address0;
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = HexByteConvertorExtensions_RemoveHexPrefix_m9802B6BB32BC6F49DA47744E8B56C03EB64B2D4F(L_2, /*hidden argument*/NULL);
		___address0 = L_3;
		String_t* L_4 = ___address0;
		String_t* L_5;
		L_5 = String_PadLeft_m7666BD115C91CF7F69642532F4CA9B0726C0A328(L_4, ((int32_t)40), ((int32_t)48), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = HexByteConvertorExtensions_EnsureHexPrefix_mD4A30715678BF7C9B3CC086AC6B12DC505B9DA1A(L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean Nethereum.Util.AddressUtil::IsValidAddressLength(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressUtil_IsValidAddressLength_m4F6FB3EFD68B730FF0B45056A7BEF8EC80350D9D (AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * __this, String_t* ___address0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___address0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		String_t* L_2 = ___address0;
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = HexByteConvertorExtensions_RemoveHexPrefix_m9802B6BB32BC6F49DA47744E8B56C03EB64B2D4F(L_2, /*hidden argument*/NULL);
		___address0 = L_3;
		String_t* L_4 = ___address0;
		int32_t L_5;
		L_5 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_4, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_5) == ((int32_t)((int32_t)40)))? 1 : 0);
	}
}
// System.Boolean Nethereum.Util.AddressUtil::IsValidEthereumAddressHexFormat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressUtil_IsValidEthereumAddressHexFormat_m39A7630946908B27A29337E219B60C45B2D17BDA (AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * __this, String_t* ___address0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___address0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		String_t* L_2 = ___address0;
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = HexByteConvertorExtensions_HasHexPrefix_mB768A6CE3C3D530AA73FBBB4C2BA7D727C9DC27A(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_4 = ___address0;
		bool L_5;
		L_5 = AddressUtil_IsValidAddressLength_m4F6FB3EFD68B730FF0B45056A7BEF8EC80350D9D(__this, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_6 = ___address0;
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = HexByteConvertorExtensions_IsHex_mD8D4FF9339B8C8922A3640426B61E8FA0BB30404(L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0022:
	{
		return (bool)0;
	}
}
// System.Boolean Nethereum.Util.AddressUtil::IsChecksumAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressUtil_IsChecksumAddress_mD7AD6DEC0D2E76FAED8FDC946CFBFFDFE1D96A1F (AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * __this, String_t* ___address0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		String_t* L_0 = ___address0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		String_t* L_2 = ___address0;
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = HexByteConvertorExtensions_RemoveHexPrefix_m9802B6BB32BC6F49DA47744E8B56C03EB64B2D4F(L_2, /*hidden argument*/NULL);
		___address0 = L_3;
		Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0 * L_4 = (Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0 *)il2cpp_codegen_object_new(Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0_il2cpp_TypeInfo_var);
		Sha3Keccack__ctor_m8D45AFC277B2B575167CD58FF181D926737D15F2(L_4, /*hidden argument*/NULL);
		String_t* L_5 = ___address0;
		String_t* L_6;
		L_6 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = Sha3Keccack_CalculateHash_m56955B8211F6C057C85699C40B8CC6513AFE5401(L_4, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		V_1 = 0;
		goto IL_00a3;
	}

IL_0027:
	{
		String_t* L_8 = V_0;
		int32_t L_9 = V_1;
		Il2CppChar L_10;
		L_10 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_8, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		String_t* L_11;
		L_11 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&V_3), /*hidden argument*/NULL);
		int32_t L_12;
		L_12 = Int32_Parse_mE2DF841397B10B947C6729D5B811D0C25D211A56(L_11, ((int32_t)515), /*hidden argument*/NULL);
		V_2 = L_12;
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) <= ((int32_t)7)))
		{
			goto IL_006f;
		}
	}
	{
		String_t* L_14 = ___address0;
		int32_t L_15 = V_1;
		Il2CppChar L_16;
		L_16 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_14, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		String_t* L_17;
		L_17 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&V_3), /*hidden argument*/NULL);
		String_t* L_18;
		L_18 = String_ToUpper_m4BC629F8059C3E0C4E3F7C7E04DB50EBB0C1A05A(L_17, /*hidden argument*/NULL);
		String_t* L_19 = ___address0;
		int32_t L_20 = V_1;
		Il2CppChar L_21;
		L_21 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_19, L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		String_t* L_22;
		L_22 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&V_3), /*hidden argument*/NULL);
		bool L_23;
		L_23 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_18, L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_009d;
		}
	}

IL_006f:
	{
		int32_t L_24 = V_2;
		if ((((int32_t)L_24) > ((int32_t)7)))
		{
			goto IL_009f;
		}
	}
	{
		String_t* L_25 = ___address0;
		int32_t L_26 = V_1;
		Il2CppChar L_27;
		L_27 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_25, L_26, /*hidden argument*/NULL);
		V_3 = L_27;
		String_t* L_28;
		L_28 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&V_3), /*hidden argument*/NULL);
		String_t* L_29;
		L_29 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_28, /*hidden argument*/NULL);
		String_t* L_30 = ___address0;
		int32_t L_31 = V_1;
		Il2CppChar L_32;
		L_32 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_30, L_31, /*hidden argument*/NULL);
		V_3 = L_32;
		String_t* L_33;
		L_33 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&V_3), /*hidden argument*/NULL);
		bool L_34;
		L_34 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_29, L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_009f;
		}
	}

IL_009d:
	{
		return (bool)0;
	}

IL_009f:
	{
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_00a3:
	{
		int32_t L_36 = V_1;
		if ((((int32_t)L_36) < ((int32_t)((int32_t)40))))
		{
			goto IL_0027;
		}
	}
	{
		return (bool)1;
	}
}
// System.Void Nethereum.Util.AddressUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressUtil__ctor_mA01344904695FA4740D66766786A0E77599BED69 (AddressUtil_tEB2E2ED501736AEC47E0BECD27D095933F3E0202 * __this, const RuntimeMethod* method)
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
// System.Boolean Nethereum.Util.Keccak.Arrays::AreEqual(System.Boolean[],System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_AreEqual_mF0722398AA2B027F1A93AA1FE4080238776650E7 (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___a0, BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___b1, const RuntimeMethod* method)
{
	{
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_0 = ___a0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_1 = ___b1;
		if ((!(((RuntimeObject*)(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)L_0) == ((RuntimeObject*)(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_2 = ___a0;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_3 = ___b1;
		if (L_3)
		{
			goto IL_000e;
		}
	}

IL_000c:
	{
		return (bool)0;
	}

IL_000e:
	{
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_4 = ___a0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_5 = ___b1;
		bool L_6;
		L_6 = Arrays_HaveSameContents_m8EC3E7E879265391612362B0741803DC4E3D86F3(L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean Nethereum.Util.Keccak.Arrays::AreEqual(System.Char[],System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_AreEqual_m30096F9BE09FB0A66BFC8416BD0D42E6C3D42FF5 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___a0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___b1, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___a0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___b1;
		if ((!(((RuntimeObject*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)L_0) == ((RuntimeObject*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = ___a0;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___b1;
		if (L_3)
		{
			goto IL_000e;
		}
	}

IL_000c:
	{
		return (bool)0;
	}

IL_000e:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ___a0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = ___b1;
		bool L_6;
		L_6 = Arrays_HaveSameContents_m38D20957BBB93DC84FDC833D9D811AE7C8F545DD(L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean Nethereum.Util.Keccak.Arrays::AreEqual(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_AreEqual_m5255E0243C1A2F6F63DC0A7C54A99EEEDA48A88F (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___a0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___b1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___a0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___b1;
		if ((!(((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0) == ((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___a0;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___b1;
		if (L_3)
		{
			goto IL_000e;
		}
	}

IL_000c:
	{
		return (bool)0;
	}

IL_000e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___a0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___b1;
		bool L_6;
		L_6 = Arrays_HaveSameContents_m12BE9AA8A66830952B467076DECC53F8B8FB1642(L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean Nethereum.Util.Keccak.Arrays::AreSame(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_AreSame_m94A86E39812C99495510257A5633C843F64E97FF (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___a0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___b1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___a0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___b1;
		bool L_2;
		L_2 = Arrays_AreEqual_m5255E0243C1A2F6F63DC0A7C54A99EEEDA48A88F(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Nethereum.Util.Keccak.Arrays::ConstantTimeAreEqual(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_ConstantTimeAreEqual_mA66EF6387F84756E88ABBF970451812161DB8913 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___a0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___b1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___a0;
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		int32_t L_1 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___b1;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		V_1 = 0;
		goto IL_001e;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
		int32_t L_4 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___a0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___b1;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_1 = ((int32_t)((int32_t)L_4|(int32_t)((int32_t)((int32_t)L_8^(int32_t)L_12))));
	}

IL_001e:
	{
		int32_t L_13 = V_0;
		if (L_13)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_14 = V_1;
		return (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Nethereum.Util.Keccak.Arrays::AreEqual(System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_AreEqual_m2A0DB91F18EAF60D4DDC0817CA42222E18F61C94 (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___a0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___b1, const RuntimeMethod* method)
{
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___a0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = ___b1;
		if ((!(((RuntimeObject*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_0) == ((RuntimeObject*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = ___a0;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = ___b1;
		if (L_3)
		{
			goto IL_000e;
		}
	}

IL_000c:
	{
		return (bool)0;
	}

IL_000e:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = ___a0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = ___b1;
		bool L_6;
		L_6 = Arrays_HaveSameContents_mA150E023B65328B7282A8F14DAC609A4B47194D7(L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean Nethereum.Util.Keccak.Arrays::AreEqual(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_AreEqual_m13D9A70A6C75BEE95E8AE33D070B133023AA3B60 (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___a0, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___b1, const RuntimeMethod* method)
{
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = ___a0;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1 = ___b1;
		if ((!(((RuntimeObject*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)L_0) == ((RuntimeObject*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_2 = ___a0;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_3 = ___b1;
		if (L_3)
		{
			goto IL_000e;
		}
	}

IL_000c:
	{
		return (bool)0;
	}

IL_000e:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_4 = ___a0;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_5 = ___b1;
		bool L_6;
		L_6 = Arrays_HaveSameContents_m1806718988122986B539F5FF6A52A091B3148484(L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean Nethereum.Util.Keccak.Arrays::HaveSameContents(System.Boolean[],System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_HaveSameContents_m8EC3E7E879265391612362B0741803DC4E3D86F3 (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___a0, BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___b1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_0 = ___a0;
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		int32_t L_1 = V_0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_2 = ___b1;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_4 = ___a0;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		uint8_t L_7 = (uint8_t)(L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_8 = ___b1;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		uint8_t L_11 = (uint8_t)(L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_7) == ((int32_t)L_11)))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		int32_t L_12 = V_0;
		if (L_12)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean Nethereum.Util.Keccak.Arrays::HaveSameContents(System.Char[],System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_HaveSameContents_m38D20957BBB93DC84FDC833D9D811AE7C8F545DD (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___a0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___b1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___a0;
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		int32_t L_1 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = ___b1;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ___a0;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_8 = ___b1;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		uint16_t L_11 = (uint16_t)(L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_7) == ((int32_t)L_11)))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		int32_t L_12 = V_0;
		if (L_12)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean Nethereum.Util.Keccak.Arrays::HaveSameContents(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_HaveSameContents_m12BE9AA8A66830952B467076DECC53F8B8FB1642 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___a0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___b1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___a0;
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		int32_t L_1 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___b1;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___a0;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ___b1;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_7) == ((int32_t)L_11)))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		int32_t L_12 = V_0;
		if (L_12)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean Nethereum.Util.Keccak.Arrays::HaveSameContents(System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_HaveSameContents_mA150E023B65328B7282A8F14DAC609A4B47194D7 (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___a0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___b1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___a0;
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		int32_t L_1 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = ___b1;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = ___a0;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = ___b1;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_7) == ((int32_t)L_11)))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		int32_t L_12 = V_0;
		if (L_12)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean Nethereum.Util.Keccak.Arrays::HaveSameContents(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_HaveSameContents_m1806718988122986B539F5FF6A52A091B3148484 (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___a0, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___b1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = ___a0;
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		int32_t L_1 = V_0;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_2 = ___b1;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_4 = ___a0;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_8 = ___b1;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_7) == ((int32_t)L_11)))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		int32_t L_12 = V_0;
		if (L_12)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}
}
// System.String Nethereum.Util.Keccak.Arrays::ToString(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Arrays_ToString_m8422A278A41C7F4D631093A4520BF62619AE9D12 (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E(L_0, ((int32_t)91), /*hidden argument*/NULL);
		V_0 = L_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___a0;
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0038;
		}
	}
	{
		StringBuilder_t * L_2 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___a0;
		int32_t L_4 = 0;
		RuntimeObject * L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		StringBuilder_t * L_6;
		L_6 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F(L_2, L_5, /*hidden argument*/NULL);
		V_1 = 1;
		goto IL_0032;
	}

IL_001a:
	{
		StringBuilder_t * L_7 = V_0;
		StringBuilder_t * L_8;
		L_8 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_7, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = ___a0;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		StringBuilder_t * L_13;
		L_13 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F(L_8, L_12, /*hidden argument*/NULL);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_15 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = ___a0;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_001a;
		}
	}

IL_0038:
	{
		StringBuilder_t * L_17 = V_0;
		StringBuilder_t * L_18;
		L_18 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_17, ((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t * L_19 = V_0;
		String_t* L_20;
		L_20 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		return L_20;
	}
}
// System.Int32 Nethereum.Util.Keccak.Arrays::GetHashCode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Arrays_GetHashCode_mE8A345A9749E3DF3A6A41A3D77A0CC23794263D7 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___data0;
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		goto IL_001d;
	}

IL_000f:
	{
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)257)));
		int32_t L_4 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___data0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = ((int32_t)((int32_t)L_4^(int32_t)L_8));
	}

IL_001d:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
		V_0 = L_10;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_11 = V_1;
		return L_11;
	}
}
// System.Int32 Nethereum.Util.Keccak.Arrays::GetHashCode(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Arrays_GetHashCode_m733D5C86E32C818FC511457E059F64499ABAD8F0 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___off1, int32_t ___len2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		int32_t L_1 = ___len2;
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		goto IL_001d;
	}

IL_000d:
	{
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)257)));
		int32_t L_4 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___data0;
		int32_t L_6 = ___off1;
		int32_t L_7 = V_0;
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7));
		uint8_t L_9 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = ((int32_t)((int32_t)L_4^(int32_t)L_9));
	}

IL_001d:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		V_0 = L_11;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_12 = V_1;
		return L_12;
	}
}
// System.Int32 Nethereum.Util.Keccak.Arrays::GetHashCode(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Arrays_GetHashCode_mEE958996966BF545847A25CE9C29CB3C01FC1CDE (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___data0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = ___data0;
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		goto IL_001d;
	}

IL_000f:
	{
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)257)));
		int32_t L_4 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = ___data0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = ((int32_t)((int32_t)L_4^(int32_t)L_8));
	}

IL_001d:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
		V_0 = L_10;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_11 = V_1;
		return L_11;
	}
}
// System.Int32 Nethereum.Util.Keccak.Arrays::GetHashCode(System.Int32[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Arrays_GetHashCode_m52D79667320EEBE1BF0470F448B744BDE12DBCA8 (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___data0, int32_t ___off1, int32_t ___len2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		int32_t L_1 = ___len2;
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		goto IL_001d;
	}

IL_000d:
	{
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)257)));
		int32_t L_4 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = ___data0;
		int32_t L_6 = ___off1;
		int32_t L_7 = V_0;
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7));
		int32_t L_9 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = ((int32_t)((int32_t)L_4^(int32_t)L_9));
	}

IL_001d:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		V_0 = L_11;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_12 = V_1;
		return L_12;
	}
}
// System.Int32 Nethereum.Util.Keccak.Arrays::GetHashCode(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Arrays_GetHashCode_m63E76BE83446DBD62EC9FA87E28F46FEFDC3738E (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___data0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1 = ___data0;
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		goto IL_001d;
	}

IL_000f:
	{
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)257)));
		int32_t L_4 = V_1;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_5 = ___data0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = ((int32_t)((int32_t)L_4^(int32_t)L_8));
	}

IL_001d:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
		V_0 = L_10;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_11 = V_1;
		return L_11;
	}
}
// System.Int32 Nethereum.Util.Keccak.Arrays::GetHashCode(System.UInt32[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Arrays_GetHashCode_mE0D955A0904C697E5962ED90A5FDC8667464C66B (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___data0, int32_t ___off1, int32_t ___len2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		int32_t L_1 = ___len2;
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		goto IL_001d;
	}

IL_000d:
	{
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)257)));
		int32_t L_4 = V_1;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_5 = ___data0;
		int32_t L_6 = ___off1;
		int32_t L_7 = V_0;
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7));
		uint32_t L_9 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = ((int32_t)((int32_t)L_4^(int32_t)L_9));
	}

IL_001d:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		V_0 = L_11;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_12 = V_1;
		return L_12;
	}
}
// System.Int32 Nethereum.Util.Keccak.Arrays::GetHashCode(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Arrays_GetHashCode_mBD644085C8B2A28CB7511BCE38D65B2BE531171D (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___data0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_1 = ___data0;
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		goto IL_0030;
	}

IL_000f:
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_3 = ___data0;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		int64_t L_6 = (int64_t)(L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)((int32_t)257)));
		int32_t L_8 = V_1;
		uint64_t L_9 = V_2;
		V_1 = ((int32_t)((int32_t)L_8^(int32_t)((int32_t)((int32_t)L_9))));
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)((int32_t)257)));
		int32_t L_11 = V_1;
		uint64_t L_12 = V_2;
		V_1 = ((int32_t)((int32_t)L_11^(int32_t)((int32_t)((int32_t)((int64_t)((uint64_t)L_12>>((int32_t)32)))))));
	}

IL_0030:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1));
		V_0 = L_14;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_15 = V_1;
		return L_15;
	}
}
// System.Int32 Nethereum.Util.Keccak.Arrays::GetHashCode(System.UInt64[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Arrays_GetHashCode_m1914F3EAC033FBC84DD819CFDFEC6BBF21A27F06 (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___data0, int32_t ___off1, int32_t ___len2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		int32_t L_1 = ___len2;
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		goto IL_0030;
	}

IL_000d:
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_3 = ___data0;
		int32_t L_4 = ___off1;
		int32_t L_5 = V_0;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5));
		int64_t L_7 = (int64_t)(L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)((int32_t)257)));
		int32_t L_9 = V_1;
		uint64_t L_10 = V_2;
		V_1 = ((int32_t)((int32_t)L_9^(int32_t)((int32_t)((int32_t)L_10))));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)((int32_t)257)));
		int32_t L_12 = V_1;
		uint64_t L_13 = V_2;
		V_1 = ((int32_t)((int32_t)L_12^(int32_t)((int32_t)((int32_t)((int64_t)((uint64_t)L_13>>((int32_t)32)))))));
	}

IL_0030:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1));
		V_0 = L_15;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Arrays::Clone(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Arrays_Clone_m95606403BE9A1417EC89954CA5191898109FBB9D (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___data0;
		RuntimeObject * L_2;
		L_2 = Array_Clone_m3C566B3D3F4333212411BD7C3B61D798BADB3F3C((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
		return ((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var));
	}

IL_000f:
	{
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Arrays::Clone(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Arrays_Clone_m15DDCAC403EF45A7216F3943A0AF8C23C1097C8F (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___existing1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
	}

IL_0005:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___existing1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___existing1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___data0;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0017;
		}
	}

IL_0010:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___data0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5;
		L_5 = Arrays_Clone_m95606403BE9A1417EC89954CA5191898109FBB9D(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0017:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___data0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___existing1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ___existing1;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_6, 0, (RuntimeArray *)(RuntimeArray *)L_7, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___existing1;
		return L_9;
	}
}
// System.Int32[] Nethereum.Util.Keccak.Arrays::Clone(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* Arrays_Clone_m25E12BE7B6CE29B3A2FE2F1F93CCA51955869C85 (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = ___data0;
		RuntimeObject * L_2;
		L_2 = Array_Clone_m3C566B3D3F4333212411BD7C3B61D798BADB3F3C((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
		return ((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)Castclass((RuntimeObject*)L_2, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var));
	}

IL_000f:
	{
		return (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL;
	}
}
// System.UInt32[] Nethereum.Util.Keccak.Arrays::Clone(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* Arrays_Clone_m8EE02FD5C4E9938F8A785C6E03BBFB358D13B217 (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1 = ___data0;
		RuntimeObject * L_2;
		L_2 = Array_Clone_m3C566B3D3F4333212411BD7C3B61D798BADB3F3C((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
		return ((UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)Castclass((RuntimeObject*)L_2, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var));
	}

IL_000f:
	{
		return (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)NULL;
	}
}
// System.Int64[] Nethereum.Util.Keccak.Arrays::Clone(System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* Arrays_Clone_mC2B91A5E29A154CBD266F7359B2E5531836E0DE3 (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_1 = ___data0;
		RuntimeObject * L_2;
		L_2 = Array_Clone_m3C566B3D3F4333212411BD7C3B61D798BADB3F3C((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
		return ((Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)Castclass((RuntimeObject*)L_2, Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var));
	}

IL_000f:
	{
		return (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)NULL;
	}
}
// System.UInt64[] Nethereum.Util.Keccak.Arrays::Clone(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* Arrays_Clone_m0592BC1B6765749024DF2886DF794E7F46CF01C3 (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_1 = ___data0;
		RuntimeObject * L_2;
		L_2 = Array_Clone_m3C566B3D3F4333212411BD7C3B61D798BADB3F3C((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
		return ((UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)Castclass((RuntimeObject*)L_2, UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var));
	}

IL_000f:
	{
		return (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)NULL;
	}
}
// System.UInt64[] Nethereum.Util.Keccak.Arrays::Clone(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* Arrays_Clone_mB23FEEB693A284D313CDB57224477A8F9FF8DEAD (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___data0, UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___existing1, const RuntimeMethod* method)
{
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)NULL;
	}

IL_0005:
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_1 = ___existing1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_2 = ___existing1;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_3 = ___data0;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0017;
		}
	}

IL_0010:
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_4 = ___data0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_5;
		L_5 = Arrays_Clone_m0592BC1B6765749024DF2886DF794E7F46CF01C3(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0017:
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_6 = ___data0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_7 = ___existing1;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_8 = ___existing1;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_6, 0, (RuntimeArray *)(RuntimeArray *)L_7, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))), /*hidden argument*/NULL);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_9 = ___existing1;
		return L_9;
	}
}
// System.Boolean Nethereum.Util.Keccak.Arrays::Contains(System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_Contains_mB17A1F8EC15489996C751B7603129F6EC749C608 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___a0, uint8_t ___n1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0010;
	}

IL_0004:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___a0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		uint8_t L_4 = ___n1;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}

IL_000c:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0010:
	{
		int32_t L_6 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___a0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)0;
	}
}
// System.Boolean Nethereum.Util.Keccak.Arrays::Contains(System.Int16[],System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_Contains_m5CF2A0E57871B193825375D69B1F7368BB1EB981 (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___a0, int16_t ___n1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0010;
	}

IL_0004:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = ___a0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		int16_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		int16_t L_4 = ___n1;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}

IL_000c:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0010:
	{
		int32_t L_6 = V_0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_7 = ___a0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)0;
	}
}
// System.Boolean Nethereum.Util.Keccak.Arrays::Contains(System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_Contains_mA5FE62650ABB1C775ADF8A16C6BB680A98B41A8F (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___a0, int32_t ___n1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0010;
	}

IL_0004:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___a0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = ___n1;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}

IL_000c:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0010:
	{
		int32_t L_6 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = ___a0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)0;
	}
}
// System.Void Nethereum.Util.Keccak.Arrays::Fill(System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrays_Fill_m53305E963483A61E6DD6E6D355984E0D6B137617 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf0, uint8_t ___b1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___buf0;
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		goto IL_000e;
	}

IL_0006:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___buf0;
		int32_t L_2 = V_0;
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		V_0 = L_3;
		uint8_t L_4 = ___b1;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_4);
	}

IL_000e:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Arrays::CopyOf(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Arrays_CopyOf_mDA6307D9287F61C18AD0FEDB06F474D42EC27D96 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___newLength1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		int32_t L_0 = ___newLength1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___data0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		int32_t L_4 = ___newLength1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_4, ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), /*hidden argument*/NULL);
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_2, 0, (RuntimeArray *)(RuntimeArray *)L_3, 0, L_6, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
		return L_7;
	}
}
// System.Char[] Nethereum.Util.Keccak.Arrays::CopyOf(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* Arrays_CopyOf_m0C1A3424892BED9C8BF084AAB1D97CD216F1B072 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___data0, int32_t ___newLength1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	{
		int32_t L_0 = ___newLength1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = ___data0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = V_0;
		int32_t L_4 = ___newLength1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_4, ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), /*hidden argument*/NULL);
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_2, 0, (RuntimeArray *)(RuntimeArray *)L_3, 0, L_6, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_7 = V_0;
		return L_7;
	}
}
// System.Int32[] Nethereum.Util.Keccak.Arrays::CopyOf(System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* Arrays_CopyOf_m676DF991A1C2D23F19137CFBF7B7CB95CA540070 (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___data0, int32_t ___newLength1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_0 = NULL;
	{
		int32_t L_0 = ___newLength1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = ___data0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = V_0;
		int32_t L_4 = ___newLength1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_4, ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), /*hidden argument*/NULL);
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_2, 0, (RuntimeArray *)(RuntimeArray *)L_3, 0, L_6, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = V_0;
		return L_7;
	}
}
// System.Int64[] Nethereum.Util.Keccak.Arrays::CopyOf(System.Int64[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* Arrays_CopyOf_mF1E1D2668FA680F327E0355F51FE2D646F71F649 (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ___data0, int32_t ___newLength1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* V_0 = NULL;
	{
		int32_t L_0 = ___newLength1;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_1 = (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)SZArrayNew(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_2 = ___data0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_3 = V_0;
		int32_t L_4 = ___newLength1;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_5 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_4, ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), /*hidden argument*/NULL);
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_2, 0, (RuntimeArray *)(RuntimeArray *)L_3, 0, L_6, /*hidden argument*/NULL);
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_7 = V_0;
		return L_7;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Arrays::CopyOfRange(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Arrays_CopyOfRange_m725FB6AEC4108F90BC1EE7C23F3CB7DA44CDC314 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___from1, int32_t ___to2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	{
		int32_t L_0 = ___from1;
		int32_t L_1 = ___to2;
		int32_t L_2;
		L_2 = Arrays_GetLength_m524DFD49D77F51FAFC37B21D9073D96FA5947F6E(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___data0;
		int32_t L_6 = ___from1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_1;
		int32_t L_8 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___data0;
		int32_t L_10 = ___from1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_8, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), (int32_t)L_10)), /*hidden argument*/NULL);
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_5, L_6, (RuntimeArray *)(RuntimeArray *)L_7, 0, L_11, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = V_1;
		return L_12;
	}
}
// System.Int32[] Nethereum.Util.Keccak.Arrays::CopyOfRange(System.Int32[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* Arrays_CopyOfRange_mE6C0DE1B8AF121179FE960EE63B27C17ECA6ED2E (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___data0, int32_t ___from1, int32_t ___to2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_1 = NULL;
	{
		int32_t L_0 = ___from1;
		int32_t L_1 = ___to2;
		int32_t L_2;
		L_2 = Arrays_GetLength_m524DFD49D77F51FAFC37B21D9073D96FA5947F6E(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = ___data0;
		int32_t L_6 = ___from1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = V_1;
		int32_t L_8 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = ___data0;
		int32_t L_10 = ___from1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_8, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), (int32_t)L_10)), /*hidden argument*/NULL);
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_5, L_6, (RuntimeArray *)(RuntimeArray *)L_7, 0, L_11, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = V_1;
		return L_12;
	}
}
// System.Int64[] Nethereum.Util.Keccak.Arrays::CopyOfRange(System.Int64[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* Arrays_CopyOfRange_m5E7AD4E7AA0122005571B6540B774C4B19DCB8E9 (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ___data0, int32_t ___from1, int32_t ___to2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* V_1 = NULL;
	{
		int32_t L_0 = ___from1;
		int32_t L_1 = ___to2;
		int32_t L_2;
		L_2 = Arrays_GetLength_m524DFD49D77F51FAFC37B21D9073D96FA5947F6E(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_4 = (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)SZArrayNew(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_5 = ___data0;
		int32_t L_6 = ___from1;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_7 = V_1;
		int32_t L_8 = V_0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_9 = ___data0;
		int32_t L_10 = ___from1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_8, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), (int32_t)L_10)), /*hidden argument*/NULL);
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_5, L_6, (RuntimeArray *)(RuntimeArray *)L_7, 0, L_11, /*hidden argument*/NULL);
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_12 = V_1;
		return L_12;
	}
}
// System.Int32 Nethereum.Util.Keccak.Arrays::GetLength(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Arrays_GetLength_m524DFD49D77F51FAFC37B21D9073D96FA5947F6E (int32_t ___from0, int32_t ___to1, const RuntimeMethod* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		int32_t L_0 = ___to1;
		int32_t L_1 = ___from0;
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		G_B1_0 = L_2;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			G_B2_0 = L_2;
			goto IL_0025;
		}
	}
	{
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___from0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___to1), /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral717DA9E2386BEADCFFB33AE09B063FCD2EE1A657)), L_4, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_6 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Arrays_GetLength_m524DFD49D77F51FAFC37B21D9073D96FA5947F6E_RuntimeMethod_var)));
	}

IL_0025:
	{
		return G_B2_0;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Arrays::Append(System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Arrays_Append_mF653743686F61082E384B86600C7D3CDAC67E0EA (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___a0, uint8_t ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___a0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = L_1;
		uint8_t L_3 = ___b1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_3);
		return L_2;
	}

IL_000e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___a0;
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		int32_t L_5 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		V_1 = L_6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___a0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_1;
		int32_t L_9 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_7, 0, (RuntimeArray *)(RuntimeArray *)L_8, 0, L_9, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_1;
		int32_t L_11 = V_0;
		uint8_t L_12 = ___b1;
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11), (uint8_t)L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_1;
		return L_13;
	}
}
// System.Int16[] Nethereum.Util.Keccak.Arrays::Append(System.Int16[],System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* Arrays_Append_m842D5A077F2A2A0363154937B7300FFB785A79D1 (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___a0, int16_t ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* V_1 = NULL;
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = ___a0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)1);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_2 = L_1;
		int16_t L_3 = ___b1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)L_3);
		return L_2;
	}

IL_000e:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_4 = ___a0;
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		int32_t L_5 = V_0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_6 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		V_1 = L_6;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_7 = ___a0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_8 = V_1;
		int32_t L_9 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_7, 0, (RuntimeArray *)(RuntimeArray *)L_8, 0, L_9, /*hidden argument*/NULL);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_10 = V_1;
		int32_t L_11 = V_0;
		int16_t L_12 = ___b1;
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11), (int16_t)L_12);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_13 = V_1;
		return L_13;
	}
}
// System.Int32[] Nethereum.Util.Keccak.Arrays::Append(System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* Arrays_Append_m1851936B31516171EB02750D0A6D5070FB50C912 (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___a0, int32_t ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_1 = NULL;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___a0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = L_1;
		int32_t L_3 = ___b1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)L_3);
		return L_2;
	}

IL_000e:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = ___a0;
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		V_1 = L_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = ___a0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = V_1;
		int32_t L_9 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_7, 0, (RuntimeArray *)(RuntimeArray *)L_8, 0, L_9, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = V_1;
		int32_t L_11 = V_0;
		int32_t L_12 = ___b1;
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11), (int32_t)L_12);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = V_1;
		return L_13;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Arrays::Concatenate(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Arrays_Concatenate_mC4583ACDE1A8049C9B91087A38FD1A7B4ECAF6DC (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___a0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___a0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___b1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = Arrays_Clone_m95606403BE9A1417EC89954CA5191898109FBB9D(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___b1;
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___a0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5;
		L_5 = Arrays_Clone_m95606403BE9A1417EC89954CA5191898109FBB9D(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0014:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___a0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___b1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))));
		V_0 = L_8;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___a0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = ___a0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_9, 0, (RuntimeArray *)(RuntimeArray *)L_10, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___b1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = ___a0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = ___b1;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_12, 0, (RuntimeArray *)(RuntimeArray *)L_13, ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))), ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = V_0;
		return L_16;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Arrays::ConcatenateAll(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Arrays_ConcatenateAll_mB12A44683BC7A40CEF4ED97CE901C0FFD5FF16BB (ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ___vs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_6 = NULL;
	int32_t V_7 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_8 = NULL;
	{
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_0 = ___vs0;
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_1 = (ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D*)(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D*)SZArrayNew(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		V_0 = L_1;
		V_1 = 0;
		V_2 = 0;
		V_5 = 0;
		goto IL_0032;
	}

IL_0012:
	{
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_2 = ___vs0;
		int32_t L_3 = V_5;
		int32_t L_4 = L_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_6 = L_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_6;
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_6;
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_10);
		int32_t L_11 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = V_6;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))));
	}

IL_002c:
	{
		int32_t L_13 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_14 = V_5;
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_15 = ___vs0;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_16 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_16);
		V_3 = L_17;
		V_4 = 0;
		V_7 = 0;
		goto IL_006c;
	}

IL_0048:
	{
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_18 = V_0;
		int32_t L_19 = V_7;
		int32_t L_20 = L_19;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		V_8 = L_21;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = V_8;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = V_3;
		int32_t L_24 = V_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = V_8;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_22, 0, (RuntimeArray *)(RuntimeArray *)L_23, L_24, ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))), /*hidden argument*/NULL);
		int32_t L_26 = V_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = V_8;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))));
		int32_t L_28 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_006c:
	{
		int32_t L_29 = V_7;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0048;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = V_3;
		return L_31;
	}
}
// System.Int32[] Nethereum.Util.Keccak.Arrays::Concatenate(System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* Arrays_Concatenate_mDDAE9A990BED5A1CF6574CA241FBCE273FEE91DA (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___a0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_0 = NULL;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___a0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = ___b1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2;
		L_2 = Arrays_Clone_m25E12BE7B6CE29B3A2FE2F1F93CCA51955869C85(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000a:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = ___b1;
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = ___a0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5;
		L_5 = Arrays_Clone_m25E12BE7B6CE29B3A2FE2F1F93CCA51955869C85(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0014:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = ___a0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = ___b1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))));
		V_0 = L_8;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = ___a0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = ___a0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_9, 0, (RuntimeArray *)(RuntimeArray *)L_10, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = ___b1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = ___a0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = ___b1;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_12, 0, (RuntimeArray *)(RuntimeArray *)L_13, ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))), ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = V_0;
		return L_16;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Arrays::Prepend(System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Arrays_Prepend_m2F287C129A064265FAB90502C3F3CFC99C85C996 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___a0, uint8_t ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___a0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = L_1;
		uint8_t L_3 = ___b1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_3);
		return L_2;
	}

IL_000e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___a0;
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		int32_t L_5 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		V_1 = L_6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___a0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_1;
		int32_t L_9 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_7, 0, (RuntimeArray *)(RuntimeArray *)L_8, 1, L_9, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_1;
		uint8_t L_11 = ___b1;
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_11);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = V_1;
		return L_12;
	}
}
// System.Int16[] Nethereum.Util.Keccak.Arrays::Prepend(System.Int16[],System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* Arrays_Prepend_m898665129C38C722AF997BE613132CCC10C29716 (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___a0, int16_t ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* V_1 = NULL;
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = ___a0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)1);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_2 = L_1;
		int16_t L_3 = ___b1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)L_3);
		return L_2;
	}

IL_000e:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_4 = ___a0;
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		int32_t L_5 = V_0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_6 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		V_1 = L_6;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_7 = ___a0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_8 = V_1;
		int32_t L_9 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_7, 0, (RuntimeArray *)(RuntimeArray *)L_8, 1, L_9, /*hidden argument*/NULL);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_10 = V_1;
		int16_t L_11 = ___b1;
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int16_t)L_11);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_12 = V_1;
		return L_12;
	}
}
// System.Int32[] Nethereum.Util.Keccak.Arrays::Prepend(System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* Arrays_Prepend_m8271ABBEA3A587B05276ABEFA019974036BCDB90 (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___a0, int32_t ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_1 = NULL;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___a0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = L_1;
		int32_t L_3 = ___b1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)L_3);
		return L_2;
	}

IL_000e:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = ___a0;
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		V_1 = L_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = ___a0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = V_1;
		int32_t L_9 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_7, 0, (RuntimeArray *)(RuntimeArray *)L_8, 1, L_9, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = V_1;
		int32_t L_11 = ___b1;
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)L_11);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = V_1;
		return L_12;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Arrays::Reverse(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Arrays_Reverse_mE8160360B34F191503003B78C1A2218261ADD782 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___a0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
	}

IL_0005:
	{
		V_0 = 0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___a0;
		V_1 = ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		int32_t L_2 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_2 = L_3;
		goto IL_001e;
	}

IL_0014:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_2;
		int32_t L_5 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___a0;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)L_10);
	}

IL_001e:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1));
		V_1 = L_12;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_2;
		return L_13;
	}
}
// System.Int32[] Nethereum.Util.Keccak.Arrays::Reverse(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* Arrays_Reverse_m4B997EDF0BEB1D137FBDED56CA27595E56D18D6E (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_2 = NULL;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___a0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL;
	}

IL_0005:
	{
		V_0 = 0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = ___a0;
		V_1 = ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		int32_t L_2 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_2 = L_3;
		goto IL_001e;
	}

IL_0014:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = V_2;
		int32_t L_5 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = ___a0;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		int32_t L_9 = L_8;
		int32_t L_10 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (int32_t)L_10);
	}

IL_001e:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1));
		V_1 = L_12;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = V_2;
		return L_13;
	}
}
// System.Void Nethereum.Util.Keccak.Arrays::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrays__ctor_m7AC79F3014B13A097DFB9EF69D7C64CF26D67F03 (Arrays_t66BAE77D7ABC0C080187CCFE4F2A76E0E98923AB * __this, const RuntimeMethod* method)
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


// Conversion methods for marshalling of: Nethereum.Util.BigDecimal
IL2CPP_EXTERN_C void BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177_marshal_pinvoke(const BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177& unmarshaled, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177_marshaled_pinvoke& marshaled)
{
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_marshal_pinvoke(unmarshaled.get_U3CMantissaU3Ek__BackingField_1(), marshaled.___U3CMantissaU3Ek__BackingField_1);
	marshaled.___U3CExponentU3Ek__BackingField_2 = unmarshaled.get_U3CExponentU3Ek__BackingField_2();
}
IL2CPP_EXTERN_C void BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177_marshal_pinvoke_back(const BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177_marshaled_pinvoke& marshaled, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177& unmarshaled)
{
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  unmarshaled_U3CMantissaU3Ek__BackingField_temp_0;
	memset((&unmarshaled_U3CMantissaU3Ek__BackingField_temp_0), 0, sizeof(unmarshaled_U3CMantissaU3Ek__BackingField_temp_0));
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_marshal_pinvoke_back(marshaled.___U3CMantissaU3Ek__BackingField_1, unmarshaled_U3CMantissaU3Ek__BackingField_temp_0);
	unmarshaled.set_U3CMantissaU3Ek__BackingField_1(unmarshaled_U3CMantissaU3Ek__BackingField_temp_0);
	int32_t unmarshaled_U3CExponentU3Ek__BackingField_temp_1 = 0;
	unmarshaled_U3CExponentU3Ek__BackingField_temp_1 = marshaled.___U3CExponentU3Ek__BackingField_2;
	unmarshaled.set_U3CExponentU3Ek__BackingField_2(unmarshaled_U3CExponentU3Ek__BackingField_temp_1);
}
// Conversion method for clean up from marshalling of: Nethereum.Util.BigDecimal
IL2CPP_EXTERN_C void BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177_marshal_pinvoke_cleanup(BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177_marshaled_pinvoke& marshaled)
{
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_marshal_pinvoke_cleanup(marshaled.___U3CMantissaU3Ek__BackingField_1);
}


// Conversion methods for marshalling of: Nethereum.Util.BigDecimal
IL2CPP_EXTERN_C void BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177_marshal_com(const BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177& unmarshaled, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177_marshaled_com& marshaled)
{
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_marshal_com(unmarshaled.get_U3CMantissaU3Ek__BackingField_1(), marshaled.___U3CMantissaU3Ek__BackingField_1);
	marshaled.___U3CExponentU3Ek__BackingField_2 = unmarshaled.get_U3CExponentU3Ek__BackingField_2();
}
IL2CPP_EXTERN_C void BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177_marshal_com_back(const BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177_marshaled_com& marshaled, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177& unmarshaled)
{
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  unmarshaled_U3CMantissaU3Ek__BackingField_temp_0;
	memset((&unmarshaled_U3CMantissaU3Ek__BackingField_temp_0), 0, sizeof(unmarshaled_U3CMantissaU3Ek__BackingField_temp_0));
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_marshal_com_back(marshaled.___U3CMantissaU3Ek__BackingField_1, unmarshaled_U3CMantissaU3Ek__BackingField_temp_0);
	unmarshaled.set_U3CMantissaU3Ek__BackingField_1(unmarshaled_U3CMantissaU3Ek__BackingField_temp_0);
	int32_t unmarshaled_U3CExponentU3Ek__BackingField_temp_1 = 0;
	unmarshaled_U3CExponentU3Ek__BackingField_temp_1 = marshaled.___U3CExponentU3Ek__BackingField_2;
	unmarshaled.set_U3CExponentU3Ek__BackingField_2(unmarshaled_U3CExponentU3Ek__BackingField_temp_1);
}
// Conversion method for clean up from marshalling of: Nethereum.Util.BigDecimal
IL2CPP_EXTERN_C void BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177_marshal_com_cleanup(BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177_marshaled_com& marshaled)
{
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_marshal_com_cleanup(marshaled.___U3CMantissaU3Ek__BackingField_1);
}
// System.Void Nethereum.Util.BigDecimal::.ctor(Nethereum.Util.BigDecimal,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigDecimal__ctor_m07F85C6BEE695F271E9E9062D34B16D74DCE3FAF (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___bigDecimal0, bool ___alwaysTruncate1, const RuntimeMethod* method)
{
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0;
		L_0 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___bigDecimal0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___bigDecimal0), /*hidden argument*/NULL);
		bool L_2 = ___alwaysTruncate1;
		BigDecimal__ctor_m250E18155FF984256743D2F5A5E08244085AEFEA((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void BigDecimal__ctor_m07F85C6BEE695F271E9E9062D34B16D74DCE3FAF_AdjustorThunk (RuntimeObject * __this, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___bigDecimal0, bool ___alwaysTruncate1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * _thisAdjusted = reinterpret_cast<BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *>(__this + _offset);
	BigDecimal__ctor_m07F85C6BEE695F271E9E9062D34B16D74DCE3FAF(_thisAdjusted, ___bigDecimal0, ___alwaysTruncate1, method);
}
// System.Void Nethereum.Util.BigDecimal::.ctor(System.Decimal,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigDecimal__ctor_m4D07E184B43E6D9214D5DD4A210D84D732B9489F (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, bool ___alwaysTruncate1, const RuntimeMethod* method)
{
	{
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_0 = ___value0;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_1;
		L_1 = BigDecimal_op_Implicit_m2F6F51E1C93721C8D97E367CC2F4B6935E9A9558(L_0, /*hidden argument*/NULL);
		bool L_2 = ___alwaysTruncate1;
		BigDecimal__ctor_m07F85C6BEE695F271E9E9062D34B16D74DCE3FAF((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void BigDecimal__ctor_m4D07E184B43E6D9214D5DD4A210D84D732B9489F_AdjustorThunk (RuntimeObject * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, bool ___alwaysTruncate1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * _thisAdjusted = reinterpret_cast<BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *>(__this + _offset);
	BigDecimal__ctor_m4D07E184B43E6D9214D5DD4A210D84D732B9489F(_thisAdjusted, ___value0, ___alwaysTruncate1, method);
}
// System.Void Nethereum.Util.BigDecimal::.ctor(System.Numerics.BigInteger,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigDecimal__ctor_m250E18155FF984256743D2F5A5E08244085AEFEA (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___mantissa0, int32_t ___exponent1, bool ___alwaysTruncate2, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_initobj(__this, sizeof(BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 ));
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0 = ___mantissa0;
		BigDecimal_set_Mantissa_mF75FD8A68F815DC181343BCC06136F0C65955E36_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___exponent1;
		BigDecimal_set_Exponent_m7F6E52C916F09192A35A7DC554406EFD70F2D143_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, L_1, /*hidden argument*/NULL);
		BigDecimal_NormaliseExponentBiggerThanZero_m390D74E5EFD89897ABD377233EE9EF0D462DE466((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, /*hidden argument*/NULL);
		BigDecimal_Normalize_m07D124D181BEFB05F61132F430ECDEDBAB60DB90((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, /*hidden argument*/NULL);
		bool L_2 = ___alwaysTruncate2;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_3;
		L_3 = BigDecimal_Truncate_mB20BE6E4FFE9ABB79C8E40EDEFC997A81F1538BF((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, ((int32_t)50), /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void BigDecimal__ctor_m250E18155FF984256743D2F5A5E08244085AEFEA_AdjustorThunk (RuntimeObject * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___mantissa0, int32_t ___exponent1, bool ___alwaysTruncate2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * _thisAdjusted = reinterpret_cast<BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *>(__this + _offset);
	BigDecimal__ctor_m250E18155FF984256743D2F5A5E08244085AEFEA(_thisAdjusted, ___mantissa0, ___exponent1, ___alwaysTruncate2, method);
}
// System.Numerics.BigInteger Nethereum.Util.BigDecimal::get_Mantissa()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, const RuntimeMethod* method)
{
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0 = __this->get_U3CMantissaU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * _thisAdjusted = reinterpret_cast<BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *>(__this + _offset);
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  _returnValue;
	_returnValue = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Nethereum.Util.BigDecimal::set_Mantissa(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigDecimal_set_Mantissa_mF75FD8A68F815DC181343BCC06136F0C65955E36 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, const RuntimeMethod* method)
{
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0 = ___value0;
		__this->set_U3CMantissaU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void BigDecimal_set_Mantissa_mF75FD8A68F815DC181343BCC06136F0C65955E36_AdjustorThunk (RuntimeObject * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * _thisAdjusted = reinterpret_cast<BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *>(__this + _offset);
	BigDecimal_set_Mantissa_mF75FD8A68F815DC181343BCC06136F0C65955E36_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 Nethereum.Util.BigDecimal::get_Exponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CExponentU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * _thisAdjusted = reinterpret_cast<BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Nethereum.Util.BigDecimal::set_Exponent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigDecimal_set_Exponent_m7F6E52C916F09192A35A7DC554406EFD70F2D143 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CExponentU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void BigDecimal_set_Exponent_m7F6E52C916F09192A35A7DC554406EFD70F2D143_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * _thisAdjusted = reinterpret_cast<BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *>(__this + _offset);
	BigDecimal_set_Exponent_m7F6E52C916F09192A35A7DC554406EFD70F2D143_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 Nethereum.Util.BigDecimal::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigDecimal_CompareTo_mD37074ABBEB821CBF16169B0D213DED12DE2249D (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177_il2cpp_TypeInfo_var)))
		{
			goto IL_0011;
		}
	}

IL_000b:
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m789B4E75608A673F2CF5DDFC2E67DA20AF440A34(L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigDecimal_CompareTo_mD37074ABBEB821CBF16169B0D213DED12DE2249D_RuntimeMethod_var)));
	}

IL_0011:
	{
		RuntimeObject * L_3 = ___obj0;
		int32_t L_4;
		L_4 = BigDecimal_CompareTo_m6AD893A4F61D4D3A2042302B5EE5BFF2E2D542C2((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, ((*(BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)UnBox(L_3, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t BigDecimal_CompareTo_mD37074ABBEB821CBF16169B0D213DED12DE2249D_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * _thisAdjusted = reinterpret_cast<BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BigDecimal_CompareTo_mD37074ABBEB821CBF16169B0D213DED12DE2249D(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 Nethereum.Util.BigDecimal::CompareTo(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigDecimal_CompareTo_m6AD893A4F61D4D3A2042302B5EE5BFF2E2D542C2 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___other0, const RuntimeMethod* method)
{
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_0 = (*(BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this);
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_1 = ___other0;
		bool L_2;
		L_2 = BigDecimal_op_LessThan_mAC06C02DAC31FB6B90AB760D96140D08F2C0F059(L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_3 = (*(BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this);
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_4 = ___other0;
		bool L_5;
		L_5 = BigDecimal_op_GreaterThan_m9AABEDE6B17207B879112B5D7E3A6B62BA199CBC(L_3, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_001e;
		}
	}
	{
		return 0;
	}

IL_001e:
	{
		return 1;
	}

IL_0020:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C  int32_t BigDecimal_CompareTo_m6AD893A4F61D4D3A2042302B5EE5BFF2E2D542C2_AdjustorThunk (RuntimeObject * __this, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * _thisAdjusted = reinterpret_cast<BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BigDecimal_CompareTo_m6AD893A4F61D4D3A2042302B5EE5BFF2E2D542C2(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void Nethereum.Util.BigDecimal::NormaliseExponentBiggerThanZero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigDecimal_NormaliseExponentBiggerThanZero_m390D74E5EFD89897ABD377233EE9EF0D462DE466 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_1;
		L_1 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_2;
		L_2 = BigInteger_op_Implicit_m9806E7B722243D69545EE09318A5DC364ACBC652(((int32_t)10), /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_4;
		L_4 = BigInteger_Pow_mA52D686E2FB53238877C77EEEFAD23A9601028AF(L_2, L_3, /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_5;
		L_5 = BigInteger_op_Multiply_m2C693A37027C26E76BFF4F974553ACA2D8DCC067(L_1, L_4, /*hidden argument*/NULL);
		BigDecimal_set_Mantissa_mF75FD8A68F815DC181343BCC06136F0C65955E36_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, L_5, /*hidden argument*/NULL);
		BigDecimal_set_Exponent_m7F6E52C916F09192A35A7DC554406EFD70F2D143_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, 0, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void BigDecimal_NormaliseExponentBiggerThanZero_m390D74E5EFD89897ABD377233EE9EF0D462DE466_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * _thisAdjusted = reinterpret_cast<BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *>(__this + _offset);
	BigDecimal_NormaliseExponentBiggerThanZero_m390D74E5EFD89897ABD377233EE9EF0D462DE466(_thisAdjusted, method);
}
// System.Void Nethereum.Util.BigDecimal::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigDecimal_Normalize_m07D124D181BEFB05F61132F430ECDEDBAB60DB90 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, /*hidden argument*/NULL);
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
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_1;
		L_1 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = BigInteger_get_IsZero_m926C5F3453B1335A6A50264AF7A448619850949D((BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 *)(&V_0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		BigDecimal_set_Exponent_m7F6E52C916F09192A35A7DC554406EFD70F2D143_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, 0, /*hidden argument*/NULL);
		return;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_3;
		L_3 = BigInteger_op_Implicit_m9806E7B722243D69545EE09318A5DC364ACBC652(0, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0060;
	}

IL_002a:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_4;
		L_4 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_5;
		L_5 = BigInteger_op_Implicit_m9806E7B722243D69545EE09318A5DC364ACBC652(((int32_t)10), /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_6;
		L_6 = BigInteger_DivRem_m339EFEA8FD3DD8F49561687E35D318F8D9ABC2F3(L_4, L_5, (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_6;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_7 = V_1;
		bool L_8;
		L_8 = BigInteger_op_Inequality_mBCE9D82DD962F9D41383F1285D97A1AC12116114(L_7, ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0060;
		}
	}
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_9 = V_2;
		BigDecimal_set_Mantissa_mF75FD8A68F815DC181343BCC06136F0C65955E36_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, L_9, /*hidden argument*/NULL);
		int32_t L_10;
		L_10 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, /*hidden argument*/NULL);
		V_3 = L_10;
		int32_t L_11 = V_3;
		BigDecimal_set_Exponent_m7F6E52C916F09192A35A7DC554406EFD70F2D143_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0060:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = BigInteger_op_Equality_m4F14B17595D7A750250AAB6BEC37E35417171993(L_12, ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_002a;
		}
	}
	{
		BigDecimal_NormaliseExponentBiggerThanZero_m390D74E5EFD89897ABD377233EE9EF0D462DE466((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void BigDecimal_Normalize_m07D124D181BEFB05F61132F430ECDEDBAB60DB90_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * _thisAdjusted = reinterpret_cast<BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *>(__this + _offset);
	BigDecimal_Normalize_m07D124D181BEFB05F61132F430ECDEDBAB60DB90(_thisAdjusted, method);
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::Truncate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_Truncate_mB20BE6E4FFE9ABB79C8E40EDEFC997A81F1538BF (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, int32_t ___precision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_0 = (*(BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this);
		V_0 = L_0;
		BigDecimal_Normalize_m07D124D181BEFB05F61132F430ECDEDBAB60DB90((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&V_0), /*hidden argument*/NULL);
		goto IL_003a;
	}

IL_0010:
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * L_1 = (&V_0);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_2;
		L_2 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_3;
		L_3 = BigInteger_op_Implicit_m9806E7B722243D69545EE09318A5DC364ACBC652(((int32_t)10), /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_4;
		L_4 = BigInteger_op_Division_m2D185E48C4E6D957CDE6CC6551999807A378C59B(L_2, L_3, /*hidden argument*/NULL);
		BigDecimal_set_Mantissa_mF75FD8A68F815DC181343BCC06136F0C65955E36_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)L_1, L_4, /*hidden argument*/NULL);
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * L_5 = (&V_0);
		int32_t L_6;
		L_6 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		int32_t L_7 = V_1;
		BigDecimal_set_Exponent_m7F6E52C916F09192A35A7DC554406EFD70F2D143_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)L_5, ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_003a:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_8;
		L_8 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = BigIntegerExtensions_NumberOfDigits_mA93398A845596DE17B16C35453CCDD94B99D3C92(L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___precision0;
		if ((((int32_t)L_9) > ((int32_t)L_10)))
		{
			goto IL_0010;
		}
	}
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_Truncate_mB20BE6E4FFE9ABB79C8E40EDEFC997A81F1538BF_AdjustorThunk (RuntimeObject * __this, int32_t ___precision0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * _thisAdjusted = reinterpret_cast<BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *>(__this + _offset);
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  _returnValue;
	_returnValue = BigDecimal_Truncate_mB20BE6E4FFE9ABB79C8E40EDEFC997A81F1538BF(_thisAdjusted, ___precision0, method);
	return _returnValue;
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::RoundAwayFromZero(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_RoundAwayFromZero_m68815B693ADF250535A598A8CB48ADABABC7A1AA (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, int32_t ___significantDigits0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  V_1;
	memset((&V_1), 0, sizeof(V_1));
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * G_B11_1 = NULL;
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * G_B10_1 = NULL;
	int32_t G_B12_0 = 0;
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  G_B12_1;
	memset((&G_B12_1), 0, sizeof(G_B12_1));
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * G_B12_2 = NULL;
	{
		int32_t L_0 = ___significantDigits0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___significantDigits0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)2000000000))))
		{
			goto IL_0017;
		}
	}

IL_000c:
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral316F631FB9C4C420C2E74898E8868021F9B7C1EA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigDecimal_RoundAwayFromZero_m68815B693ADF250535A598A8CB48ADABABC7A1AA_RuntimeMethod_var)));
	}

IL_0017:
	{
		int32_t L_3;
		L_3 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, /*hidden argument*/NULL);
		int32_t L_4 = ___significantDigits0;
		if ((((int32_t)L_3) < ((int32_t)((-L_4)))))
		{
			goto IL_0028;
		}
	}
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_5 = (*(BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this);
		return L_5;
	}

IL_0028:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_6;
		L_6 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = BigInteger_op_LessThan_m68FBC0B17D17155E01E451A0764F115367BFBAE3(L_6, ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		V_0 = L_7;
		bool L_8 = V_0;
		if (L_8)
		{
			goto IL_0041;
		}
	}
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_9 = (*(BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this);
		G_B8_0 = L_9;
		goto IL_004c;
	}

IL_0041:
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_10 = (*(BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this);
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_11;
		L_11 = BigDecimal_op_UnaryNegation_m48B862CA6F80C14FF1BA7A45B48511B8EDBBC1D5(L_10, /*hidden argument*/NULL);
		G_B8_0 = L_11;
	}

IL_004c:
	{
		V_1 = G_B8_0;
		BigDecimal_Normalize_m07D124D181BEFB05F61132F430ECDEDBAB60DB90((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&V_1), /*hidden argument*/NULL);
		goto IL_00a8;
	}

IL_0056:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_12;
		L_12 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_13;
		L_13 = BigInteger_op_Implicit_m9806E7B722243D69545EE09318A5DC364ACBC652(((int32_t)10), /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_14;
		L_14 = BigInteger_DivRem_m339EFEA8FD3DD8F49561687E35D318F8D9ABC2F3(L_12, L_13, (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 *)(&V_2), /*hidden argument*/NULL);
		BigDecimal_set_Mantissa_mF75FD8A68F815DC181343BCC06136F0C65955E36_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&V_1), L_14, /*hidden argument*/NULL);
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * L_15 = (&V_1);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_16;
		L_16 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)L_15, /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_17 = V_2;
		bool L_18;
		L_18 = BigInteger_op_GreaterThanOrEqual_m058CDEB53FF8C59298EE7454C2076FEDD450B488(L_17, ((int64_t)((int64_t)5)), /*hidden argument*/NULL);
		G_B10_0 = L_16;
		G_B10_1 = L_15;
		if (L_18)
		{
			G_B11_0 = L_16;
			G_B11_1 = L_15;
			goto IL_0087;
		}
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		goto IL_0088;
	}

IL_0087:
	{
		G_B12_0 = 1;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
	}

IL_0088:
	{
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_19;
		L_19 = BigInteger_op_Implicit_m9806E7B722243D69545EE09318A5DC364ACBC652(G_B12_0, /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_20;
		L_20 = BigInteger_op_Addition_m55A6D35945F71B25A38BD6688EFAC3FAF10C46B9(G_B12_1, L_19, /*hidden argument*/NULL);
		BigDecimal_set_Mantissa_mF75FD8A68F815DC181343BCC06136F0C65955E36_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)G_B12_2, L_20, /*hidden argument*/NULL);
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * L_21 = (&V_1);
		int32_t L_22;
		L_22 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		int32_t L_23 = V_3;
		BigDecimal_set_Exponent_m7F6E52C916F09192A35A7DC554406EFD70F2D143_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)L_21, ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_00a8:
	{
		int32_t L_24;
		L_24 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&V_1), /*hidden argument*/NULL);
		int32_t L_25 = ___significantDigits0;
		if ((((int32_t)L_24) < ((int32_t)((-L_25)))))
		{
			goto IL_0056;
		}
	}
	{
		bool L_26 = V_0;
		if (L_26)
		{
			goto IL_00b8;
		}
	}
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_27 = V_1;
		return L_27;
	}

IL_00b8:
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_28 = V_1;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_29;
		L_29 = BigDecimal_op_UnaryNegation_m48B862CA6F80C14FF1BA7A45B48511B8EDBBC1D5(L_28, /*hidden argument*/NULL);
		return L_29;
	}
}
IL2CPP_EXTERN_C  BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_RoundAwayFromZero_m68815B693ADF250535A598A8CB48ADABABC7A1AA_AdjustorThunk (RuntimeObject * __this, int32_t ___significantDigits0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * _thisAdjusted = reinterpret_cast<BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *>(__this + _offset);
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  _returnValue;
	_returnValue = BigDecimal_RoundAwayFromZero_m68815B693ADF250535A598A8CB48ADABABC7A1AA(_thisAdjusted, ___significantDigits0, method);
	return _returnValue;
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::Floor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_Floor_mE511F37536BFDE6A549DBFA93CFE8C95F4CCCA15 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, const RuntimeMethod* method)
{
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0;
		L_0 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = BigIntegerExtensions_NumberOfDigits_mA93398A845596DE17B16C35453CCDD94B99D3C92(L_0, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, /*hidden argument*/NULL);
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_3;
		L_3 = BigDecimal_Truncate_mB20BE6E4FFE9ABB79C8E40EDEFC997A81F1538BF((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)), /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_Floor_mE511F37536BFDE6A549DBFA93CFE8C95F4CCCA15_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * _thisAdjusted = reinterpret_cast<BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *>(__this + _offset);
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  _returnValue;
	_returnValue = BigDecimal_Floor_mE511F37536BFDE6A549DBFA93CFE8C95F4CCCA15(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Nethereum.Util.BigDecimal::NumberOfDigits(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigDecimal_NumberOfDigits_m2BAD9B090E9DA4A069A8861F0775C2CF3A3C32E8 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, const RuntimeMethod* method)
{
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0 = ___value0;
		int32_t L_1;
		L_1 = BigIntegerExtensions_NumberOfDigits_mA93398A845596DE17B16C35453CCDD94B99D3C92(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Nethereum.Util.BigDecimal::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigDecimal_ToString_m3559C0C3C0D83EC22FA15FD376520DFFB7B7771D (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral571B8015AB310D000C937E6BB40186AA60B9C5C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	int32_t G_B4_0 = 0;
	String_t* G_B4_1 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	String_t* G_B6_2 = NULL;
	{
		BigDecimal_Normalize_m07D124D181BEFB05F61132F430ECDEDBAB60DB90((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0;
		L_0 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, /*hidden argument*/NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = BigInteger_ToString_m880DFDBDB71DB04DE20363C7EC1D81C70C124505((BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0080;
		}
	}
	{
		String_t* L_3 = V_0;
		int32_t L_4;
		L_4 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_3, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, /*hidden argument*/NULL);
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5));
		int32_t L_6 = V_2;
		String_t* L_7 = V_0;
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		String_t* L_10 = V_0;
		int32_t L_11 = V_2;
		int32_t L_12 = V_2;
		G_B4_0 = L_11;
		G_B4_1 = L_10;
		if (!L_12)
		{
			G_B5_0 = L_11;
			G_B5_1 = L_10;
			goto IL_004a;
		}
	}
	{
		G_B6_0 = _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_004f;
	}

IL_004a:
	{
		G_B6_0 = _stringLiteral571B8015AB310D000C937E6BB40186AA60B9C5C1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_004f:
	{
		String_t* L_13;
		L_13 = String_Insert_m6F5335C84ACB178D4141772E1D7F2EB7811990EB(G_B6_2, G_B6_1, G_B6_0, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_0080;
	}

IL_0057:
	{
		String_t* L_14 = V_0;
		int32_t L_15 = V_2;
		String_t* L_16 = V_0;
		int32_t L_17;
		L_17 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_16, /*hidden argument*/NULL);
		String_t* L_18;
		L_18 = String_PadLeft_m7666BD115C91CF7F69642532F4CA9B0726C0A328(L_14, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)(-1))), (int32_t)L_17)), ((int32_t)48), /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral571B8015AB310D000C937E6BB40186AA60B9C5C1, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		goto IL_0080;
	}

IL_0076:
	{
		String_t* L_20 = V_0;
		int32_t L_21 = V_2;
		String_t* L_22;
		L_22 = String_PadRight_m2C464B0C6136A24187CF5C8B84E2C6BB614C42FF(L_20, L_21, ((int32_t)48), /*hidden argument*/NULL);
		V_0 = L_22;
	}

IL_0080:
	{
		String_t* L_23 = V_0;
		return L_23;
	}
}
IL2CPP_EXTERN_C  String_t* BigDecimal_ToString_m3559C0C3C0D83EC22FA15FD376520DFFB7B7771D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * _thisAdjusted = reinterpret_cast<BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = BigDecimal_ToString_m3559C0C3C0D83EC22FA15FD376520DFFB7B7771D(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Nethereum.Util.BigDecimal::Equals(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigDecimal_Equals_mF38030F3E1977D84E604181FB6A2248234AB55DB (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___other0, const RuntimeMethod* method)
{
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  V_0;
	memset((&V_0), 0, sizeof(V_0));
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  V_1;
	memset((&V_1), 0, sizeof(V_1));
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_0 = (*(BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this);
		V_0 = L_0;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_1 = ___other0;
		V_1 = L_1;
		BigDecimal_Normalize_m07D124D181BEFB05F61132F430ECDEDBAB60DB90((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&V_0), /*hidden argument*/NULL);
		BigDecimal_Normalize_m07D124D181BEFB05F61132F430ECDEDBAB60DB90((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&V_1), /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_2;
		L_2 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_2;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_3;
		L_3 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&V_0), /*hidden argument*/NULL);
		bool L_4;
		L_4 = BigInteger_Equals_m05302B320532185A473A0E9CBA352FA30BB43C9A((BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 *)(&V_2), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_5;
		L_5 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&V_1), /*hidden argument*/NULL);
		int32_t L_6;
		L_6 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&V_0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
	}

IL_0040:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool BigDecimal_Equals_mF38030F3E1977D84E604181FB6A2248234AB55DB_AdjustorThunk (RuntimeObject * __this, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * _thisAdjusted = reinterpret_cast<BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *>(__this + _offset);
	bool _returnValue;
	_returnValue = BigDecimal_Equals_mF38030F3E1977D84E604181FB6A2248234AB55DB(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Nethereum.Util.BigDecimal::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigDecimal_Equals_m7E937831FFF96389ACBD5CC6C329DA04C3401BD1 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3;
		L_3 = BigDecimal_Equals_mF38030F3E1977D84E604181FB6A2248234AB55DB((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, ((*(BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)UnBox(L_2, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool BigDecimal_Equals_m7E937831FFF96389ACBD5CC6C329DA04C3401BD1_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * _thisAdjusted = reinterpret_cast<BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *>(__this + _offset);
	bool _returnValue;
	_returnValue = BigDecimal_Equals_m7E937831FFF96389ACBD5CC6C329DA04C3401BD1(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 Nethereum.Util.BigDecimal::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigDecimal_GetHashCode_m60815B43B82E8E464F99D8E54723AF511348FDA3 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, const RuntimeMethod* method)
{
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0;
		L_0 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = BigInteger_GetHashCode_m68DD5586F08BF39F4D6547FED0EF8185F6584306((BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)397)))^(int32_t)L_2));
	}
}
IL2CPP_EXTERN_C  int32_t BigDecimal_GetHashCode_m60815B43B82E8E464F99D8E54723AF511348FDA3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * _thisAdjusted = reinterpret_cast<BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BigDecimal_GetHashCode_m60815B43B82E8E464F99D8E54723AF511348FDA3(_thisAdjusted, method);
	return _returnValue;
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_op_Implicit_mBC9CA324C0F3694B3EDD45A1EC6666B52408CF14 (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_1;
		L_1 = BigInteger_op_Implicit_m9806E7B722243D69545EE09318A5DC364ACBC652(L_0, /*hidden argument*/NULL);
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_2;
		memset((&L_2), 0, sizeof(L_2));
		BigDecimal__ctor_m250E18155FF984256743D2F5A5E08244085AEFEA((&L_2), L_1, 0, (bool)0, /*hidden argument*/NULL);
		return L_2;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Implicit(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_op_Implicit_m506F3F7CA7678150DA2118CE8883E6A449B7127C (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, const RuntimeMethod* method)
{
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0 = ___value0;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_1;
		memset((&L_1), 0, sizeof(L_1));
		BigDecimal__ctor_m250E18155FF984256743D2F5A5E08244085AEFEA((&L_1), L_0, 0, (bool)0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Implicit(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_op_Implicit_m6A6DD29BEACA367A0B703422E41DD81DDF8E2AF3 (double ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	double V_2 = 0.0;
	{
		double L_0 = ___value0;
		V_0 = il2cpp_codegen_cast_double_to_int<int64_t>(L_0);
		V_1 = 0;
		V_2 = (1.0);
		goto IL_0026;
	}

IL_0011:
	{
		int32_t L_1 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		double L_2 = V_2;
		V_2 = ((double)il2cpp_codegen_multiply((double)L_2, (double)(10.0)));
		double L_3 = ___value0;
		double L_4 = V_2;
		V_0 = il2cpp_codegen_cast_double_to_int<int64_t>(((double)il2cpp_codegen_multiply((double)L_3, (double)L_4)));
	}

IL_0026:
	{
		double L_5 = ___value0;
		double L_6 = V_2;
		int64_t L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_8;
		L_8 = fabs(((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_5, (double)L_6)), (double)((double)((double)L_7)))));
		if ((((double)L_8) > ((double)(0.0))))
		{
			goto IL_0011;
		}
	}
	{
		int64_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_10;
		L_10 = BigInteger_op_Implicit_m6EF080EFB48B60775B80ECA9E5D08B2322FCD4EC(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_1;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_12;
		memset((&L_12), 0, sizeof(L_12));
		BigDecimal__ctor_m250E18155FF984256743D2F5A5E08244085AEFEA((&L_12), L_10, L_11, (bool)0, /*hidden argument*/NULL);
		return L_12;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Implicit(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_op_Implicit_m2F6F51E1C93721C8D97E367CC2F4B6935E9A9558 (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_1;
		L_1 = BigInteger_op_Explicit_m69B64A2FBF4824A400BE0ED2008C5BF1A6BD55E2(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_2 = ((Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields*)il2cpp_codegen_static_fields_for(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var))->get_One_8();
		V_2 = L_2;
		goto IL_0030;
	}

IL_0011:
	{
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_4 = V_2;
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Decimal__ctor_m3C20B602B540FD08434894065D20BDBA60FF79BC((&L_5), ((int32_t)10), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_6;
		L_6 = Decimal_op_Multiply_mD941918A97C8534FDA1B2E1B26288F0FA7224E26(L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_7 = ___value0;
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_8 = V_2;
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_9;
		L_9 = Decimal_op_Multiply_mD941918A97C8534FDA1B2E1B26288F0FA7224E26(L_7, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_10;
		L_10 = BigInteger_op_Explicit_m69B64A2FBF4824A400BE0ED2008C5BF1A6BD55E2(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
	}

IL_0030:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_12;
		L_12 = BigInteger_op_Explicit_m67FAC3B738A0A38953009C3BF2C09C2C29891633(L_11, /*hidden argument*/NULL);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_13 = ___value0;
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_15;
		L_15 = Decimal_op_Multiply_mD941918A97C8534FDA1B2E1B26288F0FA7224E26(L_13, L_14, /*hidden argument*/NULL);
		bool L_16;
		L_16 = Decimal_op_Inequality_m1524E424F030A184C95FA1AF24C76487E612E296(L_12, L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_0011;
		}
	}
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_17 = V_0;
		int32_t L_18 = V_1;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_19;
		memset((&L_19), 0, sizeof(L_19));
		BigDecimal__ctor_m250E18155FF984256743D2F5A5E08244085AEFEA((&L_19), L_17, L_18, (bool)0, /*hidden argument*/NULL);
		return L_19;
	}
}
// System.Double Nethereum.Util.BigDecimal::op_Explicit(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double BigDecimal_op_Explicit_m0CDD89FD02B17103493FD783BD0D00EF8C4F6483 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = BigDecimal_ToString_m3559C0C3C0D83EC22FA15FD376520DFFB7B7771D((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___value0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_1;
		L_1 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Double_Parse_m281C3FAE601723AC732D26BAFC6D61CEFD2E0F7D(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single Nethereum.Util.BigDecimal::op_Explicit(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BigDecimal_op_Explicit_mCF78A9E2B46340F2574C589E4CB44ADDF47C8630 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = BigDecimal_ToString_m3559C0C3C0D83EC22FA15FD376520DFFB7B7771D((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___value0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_1;
		L_1 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		float L_2;
		L_2 = Single_Parse_m2CEE3E81A3D2E04934160117DFA3729B8158F101(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Decimal Nethereum.Util.BigDecimal::op_Explicit(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  BigDecimal_op_Explicit_mF107E5A127B8AE4CB1640852C485D1CEC13A71F5 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = BigDecimal_ToString_m3559C0C3C0D83EC22FA15FD376520DFFB7B7771D((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___value0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_1;
		L_1 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_2;
		L_2 = Decimal_Parse_m3F22F6CA7411E7157C35B112051355D7A6F377B8(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Nethereum.Util.BigDecimal::op_Explicit(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigDecimal_op_Explicit_mAC04EE17950CF97284C9B86B7B6E700B4445C0BB (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_0 = ___value0;
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_1;
		L_1 = BigDecimal_op_Explicit_mF107E5A127B8AE4CB1640852C485D1CEC13A71F5(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_mB86633004CDF545E4460E0201CAF950518A0A25A(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.UInt32 Nethereum.Util.BigDecimal::op_Explicit(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BigDecimal_op_Explicit_m4CB56F11B331E326AC64EDE45A6777E933060D03 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_0 = ___value0;
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_1;
		L_1 = BigDecimal_op_Explicit_mF107E5A127B8AE4CB1640852C485D1CEC13A71F5(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = Convert_ToUInt32_m934AA2243DAC1FF0AE4CA7DBF62AC2AEEE2EAA1D(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_UnaryPlus(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_op_UnaryPlus_m19647F0A5CD38C4371D96256B4924FD62C8BF616 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___value0, const RuntimeMethod* method)
{
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_0 = ___value0;
		return L_0;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_UnaryNegation(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_op_UnaryNegation_m48B862CA6F80C14FF1BA7A45B48511B8EDBBC1D5 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * L_0 = (&___value0);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_1;
		L_1 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_2;
		L_2 = BigInteger_op_Implicit_m9806E7B722243D69545EE09318A5DC364ACBC652((-1), /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_3;
		L_3 = BigInteger_op_Multiply_m2C693A37027C26E76BFF4F974553ACA2D8DCC067(L_1, L_2, /*hidden argument*/NULL);
		BigDecimal_set_Mantissa_mF75FD8A68F815DC181343BCC06136F0C65955E36_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)L_0, L_3, /*hidden argument*/NULL);
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_4 = ___value0;
		return L_4;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Increment(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_op_Increment_m822587968C77CF32E22DA4D339486630B6930C33 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___value0, const RuntimeMethod* method)
{
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_0 = ___value0;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_1;
		L_1 = BigDecimal_op_Implicit_mBC9CA324C0F3694B3EDD45A1EC6666B52408CF14(1, /*hidden argument*/NULL);
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_2;
		L_2 = BigDecimal_op_Addition_mDD8E9AB9D5500F03DA130325F6E686E6D474E150(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Decrement(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_op_Decrement_m9F8AD3CA82D8846BDE0CE45F9920AECA06EACC57 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___value0, const RuntimeMethod* method)
{
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_0 = ___value0;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_1;
		L_1 = BigDecimal_op_Implicit_mBC9CA324C0F3694B3EDD45A1EC6666B52408CF14(1, /*hidden argument*/NULL);
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_2;
		L_2 = BigDecimal_op_Subtraction_mD866168360060B71F67DCD4F886A3BC907576DA9(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Addition(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_op_Addition_mDD8E9AB9D5500F03DA130325F6E686E6D474E150 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___left0, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___right1, const RuntimeMethod* method)
{
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_0 = ___left0;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_1 = ___right1;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_2;
		L_2 = BigDecimal_Add_m9B9147F4E72080F8DEA1E594CB08462FAD5421AB(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Subtraction(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_op_Subtraction_mD866168360060B71F67DCD4F886A3BC907576DA9 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___left0, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___right1, const RuntimeMethod* method)
{
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_0 = ___left0;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_1 = ___right1;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_2;
		L_2 = BigDecimal_op_UnaryNegation_m48B862CA6F80C14FF1BA7A45B48511B8EDBBC1D5(L_1, /*hidden argument*/NULL);
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_3;
		L_3 = BigDecimal_Add_m9B9147F4E72080F8DEA1E594CB08462FAD5421AB(L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::Add(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_Add_m9B9147F4E72080F8DEA1E594CB08462FAD5421AB (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___left0, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___left0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___right1), /*hidden argument*/NULL);
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0031;
		}
	}
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_2 = ___right1;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_3 = ___left0;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_4;
		L_4 = BigDecimal_AlignExponent_m2BD432A87EF855A37C756B660318555961F69791(L_2, L_3, /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_5;
		L_5 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___left0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_6;
		L_6 = BigInteger_op_Addition_m55A6D35945F71B25A38BD6688EFAC3FAF10C46B9(L_4, L_5, /*hidden argument*/NULL);
		int32_t L_7;
		L_7 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___left0), /*hidden argument*/NULL);
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_8;
		memset((&L_8), 0, sizeof(L_8));
		BigDecimal__ctor_m250E18155FF984256743D2F5A5E08244085AEFEA((&L_8), L_6, L_7, (bool)0, /*hidden argument*/NULL);
		return L_8;
	}

IL_0031:
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_9 = ___left0;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_10 = ___right1;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_11;
		L_11 = BigDecimal_AlignExponent_m2BD432A87EF855A37C756B660318555961F69791(L_9, L_10, /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_12;
		L_12 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___right1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_13;
		L_13 = BigInteger_op_Addition_m55A6D35945F71B25A38BD6688EFAC3FAF10C46B9(L_11, L_12, /*hidden argument*/NULL);
		int32_t L_14;
		L_14 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___right1), /*hidden argument*/NULL);
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_15;
		memset((&L_15), 0, sizeof(L_15));
		BigDecimal__ctor_m250E18155FF984256743D2F5A5E08244085AEFEA((&L_15), L_13, L_14, (bool)0, /*hidden argument*/NULL);
		return L_15;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Multiply(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_op_Multiply_mC788C0CCF2F0E7512EF7BC24D2B318A6B93C8582 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___left0, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0;
		L_0 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___left0), /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_1;
		L_1 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___right1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_2;
		L_2 = BigInteger_op_Multiply_m2C693A37027C26E76BFF4F974553ACA2D8DCC067(L_0, L_1, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___left0), /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___right1), /*hidden argument*/NULL);
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_5;
		memset((&L_5), 0, sizeof(L_5));
		BigDecimal__ctor_m250E18155FF984256743D2F5A5E08244085AEFEA((&L_5), L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4)), (bool)0, /*hidden argument*/NULL);
		return L_5;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Division(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_op_Division_mD29BCFDCD756D6DAAB7A6D870B9D5A0222BA14D6 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___dividend0, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___divisor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0;
		L_0 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___dividend0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = BigDecimal_NumberOfDigits_m2BAD9B090E9DA4A069A8861F0775C2CF3A3C32E8(L_0, /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_2;
		L_2 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___divisor1), /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = BigDecimal_NumberOfDigits_m2BAD9B090E9DA4A069A8861F0775C2CF3A3C32E8(L_2, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)50), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_3))));
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		V_0 = 0;
	}

IL_0023:
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * L_5 = (&___dividend0);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_6;
		L_6 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_7;
		L_7 = BigInteger_op_Implicit_m9806E7B722243D69545EE09318A5DC364ACBC652(((int32_t)10), /*hidden argument*/NULL);
		int32_t L_8 = V_0;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_9;
		L_9 = BigInteger_Pow_mA52D686E2FB53238877C77EEEFAD23A9601028AF(L_7, L_8, /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_10;
		L_10 = BigInteger_op_Multiply_m2C693A37027C26E76BFF4F974553ACA2D8DCC067(L_6, L_9, /*hidden argument*/NULL);
		BigDecimal_set_Mantissa_mF75FD8A68F815DC181343BCC06136F0C65955E36_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)L_5, L_10, /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_11;
		L_11 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___dividend0), /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_12;
		L_12 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___divisor1), /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_13;
		L_13 = BigInteger_op_Division_m2D185E48C4E6D957CDE6CC6551999807A378C59B(L_11, L_12, /*hidden argument*/NULL);
		int32_t L_14;
		L_14 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___dividend0), /*hidden argument*/NULL);
		int32_t L_15;
		L_15 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___divisor1), /*hidden argument*/NULL);
		int32_t L_16 = V_0;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_17;
		memset((&L_17), 0, sizeof(L_17));
		BigDecimal__ctor_m250E18155FF984256743D2F5A5E08244085AEFEA((&L_17), L_13, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15)), (int32_t)L_16)), (bool)0, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.Boolean Nethereum.Util.BigDecimal::op_Equality(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigDecimal_op_Equality_mBC92F34E2C54D74F422B29AD07A761EBDBEC416A (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___left0, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___left0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___right1), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0024;
		}
	}
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_2;
		L_2 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___left0), /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_3;
		L_3 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___right1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = BigInteger_op_Equality_mC4EE6C9D66F0696466BBF98FC9B0A7F7058549BD(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0024:
	{
		return (bool)0;
	}
}
// System.Boolean Nethereum.Util.BigDecimal::op_Inequality(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigDecimal_op_Inequality_mAB77ECBD4C7620435F3126E192C8CE5686EFDFD6 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___left0, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___left0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___right1), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0024;
		}
	}
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_2;
		L_2 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___left0), /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_3;
		L_3 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___right1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = BigInteger_op_Inequality_mB1391E11D28CED8AAA43CBD9A6F2D8611D627867(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0024:
	{
		return (bool)1;
	}
}
// System.Boolean Nethereum.Util.BigDecimal::op_LessThan(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigDecimal_op_LessThan_mAC06C02DAC31FB6B90AB760D96140D08F2C0F059 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___left0, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___left0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___right1), /*hidden argument*/NULL);
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0024;
		}
	}
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_2;
		L_2 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___left0), /*hidden argument*/NULL);
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_3 = ___right1;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_4 = ___left0;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_5;
		L_5 = BigDecimal_AlignExponent_m2BD432A87EF855A37C756B660318555961F69791(L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = BigInteger_op_LessThan_m89561BB731F384360A88B56FB95F520AF2B881D7(L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0024:
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_7 = ___left0;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_8 = ___right1;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_9;
		L_9 = BigDecimal_AlignExponent_m2BD432A87EF855A37C756B660318555961F69791(L_7, L_8, /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_10;
		L_10 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___right1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = BigInteger_op_LessThan_m89561BB731F384360A88B56FB95F520AF2B881D7(L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean Nethereum.Util.BigDecimal::op_GreaterThan(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigDecimal_op_GreaterThan_m9AABEDE6B17207B879112B5D7E3A6B62BA199CBC (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___left0, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___left0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___right1), /*hidden argument*/NULL);
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0024;
		}
	}
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_2;
		L_2 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___left0), /*hidden argument*/NULL);
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_3 = ___right1;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_4 = ___left0;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_5;
		L_5 = BigDecimal_AlignExponent_m2BD432A87EF855A37C756B660318555961F69791(L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = BigInteger_op_GreaterThan_mF282DCFF4E38E7FF178EFF1F512F556CB29BD182(L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0024:
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_7 = ___left0;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_8 = ___right1;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_9;
		L_9 = BigDecimal_AlignExponent_m2BD432A87EF855A37C756B660318555961F69791(L_7, L_8, /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_10;
		L_10 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___right1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = BigInteger_op_GreaterThan_mF282DCFF4E38E7FF178EFF1F512F556CB29BD182(L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean Nethereum.Util.BigDecimal::op_LessThanOrEqual(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigDecimal_op_LessThanOrEqual_m1B93698017B09FA16B5D0CBA8C2C853CB642D671 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___left0, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___left0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___right1), /*hidden argument*/NULL);
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0024;
		}
	}
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_2;
		L_2 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___left0), /*hidden argument*/NULL);
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_3 = ___right1;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_4 = ___left0;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_5;
		L_5 = BigDecimal_AlignExponent_m2BD432A87EF855A37C756B660318555961F69791(L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = BigInteger_op_LessThanOrEqual_m78E4ACA68BFC6D622D5D769D2A8328DAA35301F4(L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0024:
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_7 = ___left0;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_8 = ___right1;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_9;
		L_9 = BigDecimal_AlignExponent_m2BD432A87EF855A37C756B660318555961F69791(L_7, L_8, /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_10;
		L_10 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___right1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = BigInteger_op_LessThanOrEqual_m78E4ACA68BFC6D622D5D769D2A8328DAA35301F4(L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean Nethereum.Util.BigDecimal::op_GreaterThanOrEqual(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigDecimal_op_GreaterThanOrEqual_m09A52AB4D3FBEF72A82C60826A909D805DE704B1 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___left0, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___left0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___right1), /*hidden argument*/NULL);
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0024;
		}
	}
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_2;
		L_2 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___left0), /*hidden argument*/NULL);
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_3 = ___right1;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_4 = ___left0;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_5;
		L_5 = BigDecimal_AlignExponent_m2BD432A87EF855A37C756B660318555961F69791(L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = BigInteger_op_GreaterThanOrEqual_mA7877996339EB4694414211C903D94F2B224C297(L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0024:
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_7 = ___left0;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_8 = ___right1;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_9;
		L_9 = BigDecimal_AlignExponent_m2BD432A87EF855A37C756B660318555961F69791(L_7, L_8, /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_10;
		L_10 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___right1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = BigInteger_op_GreaterThanOrEqual_mA7877996339EB4694414211C903D94F2B224C297(L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_Parse_mBE2E48A049935D4D24DBC8F81A35574F7CCC9982 (String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
		String_t* L_0 = ___value0;
		int32_t L_1;
		L_1 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_0, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, /*hidden argument*/NULL);
		V_1 = L_1;
		V_2 = 0;
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = ___value0;
		int32_t L_4;
		L_4 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_3, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)))), (int32_t)(-1)));
	}

IL_0025:
	{
		String_t* L_6 = ___value0;
		String_t* L_7 = V_0;
		String_t* L_8;
		L_8 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_6, L_7, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_9;
		L_9 = BigInteger_Parse_mAFDC0246E2FA7D4FD015453B27B70A25DE4D8D59(L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_2;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_11;
		memset((&L_11), 0, sizeof(L_11));
		BigDecimal__ctor_m250E18155FF984256743D2F5A5E08244085AEFEA((&L_11), L_9, L_10, (bool)0, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Numerics.BigInteger Nethereum.Util.BigDecimal::AlignExponent(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  BigDecimal_AlignExponent_m2BD432A87EF855A37C756B660318555961F69791 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___value0, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___reference1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0;
		L_0 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___value0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_1;
		L_1 = BigInteger_op_Implicit_m9806E7B722243D69545EE09318A5DC364ACBC652(((int32_t)10), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___value0), /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___reference1), /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_4;
		L_4 = BigInteger_Pow_mA52D686E2FB53238877C77EEEFAD23A9601028AF(L_1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)), /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_5;
		L_5 = BigInteger_op_Multiply_m2C693A37027C26E76BFF4F974553ACA2D8DCC067(L_0, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::Exp(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_Exp_m91364A5264A7D3759A54CEF7478E757A490D3315 (double ___exponent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_0;
		L_0 = BigDecimal_op_Implicit_mBC9CA324C0F3694B3EDD45A1EC6666B52408CF14(1, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0035;
	}

IL_0009:
	{
		double L_1 = ___exponent0;
		if ((((double)L_1) > ((double)(0.0))))
		{
			goto IL_0019;
		}
	}
	{
		G_B4_0 = ((int32_t)-100);
		goto IL_001b;
	}

IL_0019:
	{
		G_B4_0 = ((int32_t)100);
	}

IL_001b:
	{
		V_1 = G_B4_0;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_2 = V_0;
		int32_t L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = exp(((double)((double)L_3)));
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_5;
		L_5 = BigDecimal_op_Implicit_m6A6DD29BEACA367A0B703422E41DD81DDF8E2AF3(L_4, /*hidden argument*/NULL);
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_6;
		L_6 = BigDecimal_op_Multiply_mC788C0CCF2F0E7512EF7BC24D2B318A6B93C8582(L_2, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		double L_7 = ___exponent0;
		int32_t L_8 = V_1;
		___exponent0 = ((double)il2cpp_codegen_subtract((double)L_7, (double)((double)((double)L_8))));
	}

IL_0035:
	{
		double L_9 = ___exponent0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_10;
		L_10 = fabs(L_9);
		if ((((double)L_10) > ((double)(100.0))))
		{
			goto IL_0009;
		}
	}
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_11 = V_0;
		double L_12 = ___exponent0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_13;
		L_13 = exp(L_12);
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_14;
		L_14 = BigDecimal_op_Implicit_m6A6DD29BEACA367A0B703422E41DD81DDF8E2AF3(L_13, /*hidden argument*/NULL);
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_15;
		L_15 = BigDecimal_op_Multiply_mC788C0CCF2F0E7512EF7BC24D2B318A6B93C8582(L_11, L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::Pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  BigDecimal_Pow_m4DE66DAAD436913267D2A937FC020FB9253F6551 (double ___basis0, double ___exponent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_0;
		L_0 = BigDecimal_op_Implicit_mBC9CA324C0F3694B3EDD45A1EC6666B52408CF14(1, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0036;
	}

IL_0009:
	{
		double L_1 = ___exponent1;
		if ((((double)L_1) > ((double)(0.0))))
		{
			goto IL_0019;
		}
	}
	{
		G_B4_0 = ((int32_t)-100);
		goto IL_001b;
	}

IL_0019:
	{
		G_B4_0 = ((int32_t)100);
	}

IL_001b:
	{
		V_1 = G_B4_0;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_2 = V_0;
		double L_3 = ___basis0;
		int32_t L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = Math_Pow_mC2C8700DAAD1316AA457A1D271F78CDF0D61AC2F(L_3, ((double)((double)L_4)), /*hidden argument*/NULL);
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_6;
		L_6 = BigDecimal_op_Implicit_m6A6DD29BEACA367A0B703422E41DD81DDF8E2AF3(L_5, /*hidden argument*/NULL);
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_7;
		L_7 = BigDecimal_op_Multiply_mC788C0CCF2F0E7512EF7BC24D2B318A6B93C8582(L_2, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		double L_8 = ___exponent1;
		int32_t L_9 = V_1;
		___exponent1 = ((double)il2cpp_codegen_subtract((double)L_8, (double)((double)((double)L_9))));
	}

IL_0036:
	{
		double L_10 = ___exponent1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = fabs(L_10);
		if ((((double)L_11) > ((double)(100.0))))
		{
			goto IL_0009;
		}
	}
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_12 = V_0;
		double L_13 = ___basis0;
		double L_14 = ___exponent1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_15;
		L_15 = Math_Pow_mC2C8700DAAD1316AA457A1D271F78CDF0D61AC2F(L_13, L_14, /*hidden argument*/NULL);
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_16;
		L_16 = BigDecimal_op_Implicit_m6A6DD29BEACA367A0B703422E41DD81DDF8E2AF3(L_15, /*hidden argument*/NULL);
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_17;
		L_17 = BigDecimal_op_Multiply_mC788C0CCF2F0E7512EF7BC24D2B318A6B93C8582(L_12, L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.String Nethereum.Util.BigDecimal::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigDecimal_ToString_m361D14BD3AD9EE2FC3555D315D36603ACCCE36AC (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, String_t* ___formatSpecifier0, RuntimeObject* ___format1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatting_t1FFF8188E1145A1FBC6E1BBFFEC03E8C682C2FDC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * V_2 = NULL;
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		String_t* L_0 = ___formatSpecifier0;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatting_t1FFF8188E1145A1FBC6E1BBFFEC03E8C682C2FDC_il2cpp_TypeInfo_var);
		Il2CppChar L_1;
		L_1 = NumberFormatting_ParseFormatSpecifier_m68B4A404F3C210A51B6BFFF4AA12876D420C300A(L_0, (int32_t*)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
		Il2CppChar L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)99))))
		{
			goto IL_0019;
		}
	}
	{
		Il2CppChar L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)67))))
		{
			goto IL_0019;
		}
	}
	{
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_4 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigDecimal_ToString_m361D14BD3AD9EE2FC3555D315D36603ACCCE36AC_RuntimeMethod_var)));
	}

IL_0019:
	{
		BigDecimal_Normalize_m07D124D181BEFB05F61132F430ECDEDBAB60DB90((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_6;
		L_6 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this, /*hidden argument*/NULL);
		V_3 = L_6;
		String_t* L_7 = ___formatSpecifier0;
		RuntimeObject* L_8 = ___format1;
		String_t* L_9;
		L_9 = BigInteger_ToString_mF1D8436574127C7331F384E7E30ADE3CA646BCA4((BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 *)(&V_3), L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0038:
	{
		RuntimeObject* L_10 = ___format1;
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_11;
		L_11 = NumberFormatInfo_GetInstance_mE5108A48B8BFDB2158C05951FACC08AFB09FDDBB(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_12 = (*(BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)__this);
		int32_t L_13 = V_1;
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_14 = V_2;
		String_t* L_15;
		L_15 = BigDecimalFormatter_ToCurrencyString_m8108FACA65A64AAC1411C7944BDEEBFD4A9191D6(L_12, L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C  String_t* BigDecimal_ToString_m361D14BD3AD9EE2FC3555D315D36603ACCCE36AC_AdjustorThunk (RuntimeObject * __this, String_t* ___formatSpecifier0, RuntimeObject* ___format1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * _thisAdjusted = reinterpret_cast<BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = BigDecimal_ToString_m361D14BD3AD9EE2FC3555D315D36603ACCCE36AC(_thisAdjusted, ___formatSpecifier0, ___format1, method);
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
// System.String Nethereum.Util.BigDecimalFormatter::ToCurrencyString(Nethereum.Util.BigDecimal,System.Int32,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigDecimalFormatter_ToCurrencyString_m8108FACA65A64AAC1411C7944BDEEBFD4A9191D6 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___value0, int32_t ___maxDigits1, NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___format2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatting_t1FFF8188E1145A1FBC6E1BBFFEC03E8C682C2FDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	{
		BigDecimal_Normalize_m07D124D181BEFB05F61132F430ECDEDBAB60DB90((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___value0), /*hidden argument*/NULL);
		int32_t L_0 = ___maxDigits1;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1 = ___format2;
		int32_t L_2;
		L_2 = NumberFormatInfo_get_CurrencyDecimalDigits_m656104CD60E6083B2ABD481F1ED4C4DB0ACA69CF_inline(L_1, /*hidden argument*/NULL);
		___maxDigits1 = L_2;
	}

IL_0013:
	{
		int32_t L_3 = ___maxDigits1;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_4;
		L_4 = BigDecimal_RoundAwayFromZero_m68815B693ADF250535A598A8CB48ADABABC7A1AA((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___value0), L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_5 = V_0;
		RuntimeObject* L_6;
		L_6 = BigDecimalFormatter_GetDigits_mF2EA283888E77D553327C6885516BBD73F9416D5(L_5, (int32_t*)(&V_2), /*hidden argument*/NULL);
		V_1 = L_6;
		StringBuilder_t * L_7 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_7, /*hidden argument*/NULL);
		StringBuilder_t * L_8 = L_7;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_9;
		L_9 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = BigInteger_op_LessThan_m68FBC0B17D17155E01E451A0764F115367BFBAE3(L_9, ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		RuntimeObject* L_11 = V_1;
		int32_t L_12 = V_2;
		int32_t L_13 = ___maxDigits1;
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_14 = ___format2;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatting_t1FFF8188E1145A1FBC6E1BBFFEC03E8C682C2FDC_il2cpp_TypeInfo_var);
		NumberFormatting_FormatCurrency_m2DAF51F2E5AA242A52D2F9FCD4B4B74A1C8A2241(L_8, L_10, L_11, L_12, L_13, L_14, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_15;
	}
}
// System.Collections.Generic.IList`1<System.Byte> Nethereum.Util.BigDecimalFormatter::GetDigits(Nethereum.Util.BigDecimal,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BigDecimalFormatter_GetDigits_mF2EA283888E77D553327C6885516BBD73F9416D5 (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___value0, int32_t* ___exponent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Reverse_m6831BF781D297021CA38E9D1453910098A54E617_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * V_1 = NULL;
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0;
		L_0 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___value0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = BigInteger_op_LessThan_m68FBC0B17D17155E01E451A0764F115367BFBAE3(L_0, ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_2;
		L_2 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___value0), /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0025;
	}

IL_0019:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_3;
		L_3 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___value0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_4;
		L_4 = BigInteger_op_UnaryNegation_m86C3291FF760B360FC481DF4772CE692ED0DCE68(L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0025:
	{
		V_0 = G_B3_0;
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_5 = (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)il2cpp_codegen_object_new(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_il2cpp_TypeInfo_var);
		List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778(L_5, /*hidden argument*/List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778_RuntimeMethod_var);
		V_1 = L_5;
		goto IL_0060;
	}

IL_002e:
	{
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_6 = V_1;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_8;
		L_8 = BigInteger_op_Implicit_m9806E7B722243D69545EE09318A5DC364ACBC652(((int32_t)10), /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_9;
		L_9 = BigInteger_op_Modulus_m90CD4DEC2293E0D71B73A33720AEE6CFEDECBE2E(L_7, L_8, /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_10;
		L_10 = BigInteger_op_Implicit_m793E65988E1FCC5BEEF92104EB5DD397C5069C21((uint16_t)((int32_t)48), /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_11;
		L_11 = BigInteger_op_Addition_m55A6D35945F71B25A38BD6688EFAC3FAF10C46B9(L_9, L_10, /*hidden argument*/NULL);
		uint8_t L_12;
		L_12 = BigInteger_op_Explicit_mC1A8D9DF1D55F732FF8FC6091CE22466726495EE(L_11, /*hidden argument*/NULL);
		List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED(L_6, L_12, /*hidden argument*/List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_RuntimeMethod_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_13 = V_0;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_14;
		L_14 = BigInteger_op_Implicit_m9806E7B722243D69545EE09318A5DC364ACBC652(((int32_t)10), /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_15;
		L_15 = BigInteger_op_Division_m2D185E48C4E6D957CDE6CC6551999807A378C59B(L_13, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
	}

IL_0060:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = BigInteger_op_GreaterThan_mFD7CF4E6EA62C8AF94B3FC70B9C3A90878A0CC0E(L_16, ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_002e;
		}
	}
	{
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_18 = V_1;
		List_1_Reverse_m6831BF781D297021CA38E9D1453910098A54E617(L_18, /*hidden argument*/List_1_Reverse_m6831BF781D297021CA38E9D1453910098A54E617_RuntimeMethod_var);
		int32_t* L_19 = ___exponent1;
		int32_t L_20;
		L_20 = BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&___value0), /*hidden argument*/NULL);
		*((int32_t*)L_19) = (int32_t)L_20;
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_21 = V_1;
		return L_21;
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
// System.Int32 Nethereum.Util.BigIntegerExtensions::NumberOfDigits(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigIntegerExtensions_NumberOfDigits_mA93398A845596DE17B16C35453CCDD94B99D3C92 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0 = ___value0;
		int32_t L_1;
		L_1 = BigInteger_get_Sign_mB7A2E5A1C237EB3532F5AA6C13511B696B3EA660((BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 *)(&___value0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_2;
		L_2 = BigInteger_op_Implicit_m9806E7B722243D69545EE09318A5DC364ACBC652(L_1, /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_3;
		L_3 = BigInteger_op_Multiply_m2C693A37027C26E76BFF4F974553ACA2D8DCC067(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = BigInteger_ToString_m880DFDBDB71DB04DE20363C7EC1D81C70C124505((BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Numerics.BigInteger Nethereum.Util.BigIntegerExtensions::ParseInvariant(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  BigIntegerExtensions_ParseInvariant_m592624DF089E0CCCC230B09EC21DBAB20F0521C8 (String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigIntegerExtensions_ParseInvariant_m592624DF089E0CCCC230B09EC21DBAB20F0521C8_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_3;
		L_3 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_4;
		L_4 = BigInteger_Parse_m2C891107D509626E33E7E7D24E8DF28DEF593600(L_2, L_3, /*hidden argument*/NULL);
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
// System.Byte[] Nethereum.Util.ByteUtil::AppendByte(System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ByteUtil_AppendByte_mC6ABFEF643565BB7D301EDD3AF1FE31D28713D77 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, uint8_t ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), (int32_t)1)));
		V_0 = L_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___bytes0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bytes0;
		Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803((RuntimeArray *)(RuntimeArray *)L_2, (RuntimeArray *)(RuntimeArray *)L_3, ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_0;
		uint8_t L_7 = ___b1;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), (int32_t)1))), (uint8_t)L_7);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_0;
		return L_8;
	}
}
// System.Byte[] Nethereum.Util.ByteUtil::Slice(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ByteUtil_Slice_m10B47AF4DEF82508A30288F7CE4997DFEDDB0D4D (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___org0, int32_t ___start1, int32_t ___end2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Skip_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m721399F0C4B56708F77FDDCA0EE095C7EF536DBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Take_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m08963734D06A0556262EC9BAC908CEFB4E70D9A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___end2;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___org0;
		int32_t L_2 = ___end2;
		___end2 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), (int32_t)L_2));
	}

IL_000b:
	{
		int32_t L_3 = ___start1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(0, L_3, /*hidden argument*/NULL);
		___start1 = L_4;
		int32_t L_5 = ___start1;
		int32_t L_6 = ___end2;
		int32_t L_7;
		L_7 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(L_5, L_6, /*hidden argument*/NULL);
		___end2 = L_7;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ___org0;
		int32_t L_9 = ___start1;
		RuntimeObject* L_10;
		L_10 = Enumerable_Skip_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m721399F0C4B56708F77FDDCA0EE095C7EF536DBD((RuntimeObject*)(RuntimeObject*)L_8, L_9, /*hidden argument*/Enumerable_Skip_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m721399F0C4B56708F77FDDCA0EE095C7EF536DBD_RuntimeMethod_var);
		int32_t L_11 = ___end2;
		int32_t L_12 = ___start1;
		RuntimeObject* L_13;
		L_13 = Enumerable_Take_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m08963734D06A0556262EC9BAC908CEFB4E70D9A1(L_10, ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12)), /*hidden argument*/Enumerable_Take_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m08963734D06A0556262EC9BAC908CEFB4E70D9A1_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14;
		L_14 = Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4(L_13, /*hidden argument*/Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4_RuntimeMethod_var);
		return L_14;
	}
}
// System.Byte[] Nethereum.Util.ByteUtil::InitialiseEmptyByteArray(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ByteUtil_InitialiseEmptyByteArray_mBCE720F2CB4C0A4EB071FF06E1F0BA5F3E06BF46 (int32_t ___length0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___length0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0013;
	}

IL_000b:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = V_0;
		int32_t L_3 = V_1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)0);
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0013:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = ___length0;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_000b;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
		return L_7;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Byte> Nethereum.Util.ByteUtil::MergeToEnum(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ByteUtil_MergeToEnum_mDA25965040FCB4388B96E08683589AE6D078B644 (ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ___arrays0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3 * L_0 = (U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3 *)il2cpp_codegen_object_new(U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3_il2cpp_TypeInfo_var);
		U3CMergeToEnumU3Ed__5__ctor_m300B662480DD429F3339DDD064C4021C36DAEA10(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3 * L_1 = L_0;
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_2 = ___arrays0;
		L_1->set_U3CU3E3__arrays_4(L_2);
		return L_1;
	}
}
// System.Byte[] Nethereum.Util.ByteUtil::Merge(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ByteUtil_Merge_m6BF54B608954895C1BBA3C4689D931C8D0B04779 (ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ___arrays0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteUtil_t1C81DF755C6BB949215BBA2CFECA9CA653079742_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_0 = ___arrays0;
		IL2CPP_RUNTIME_CLASS_INIT(ByteUtil_t1C81DF755C6BB949215BBA2CFECA9CA653079742_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = ByteUtil_MergeToEnum_mDA25965040FCB4388B96E08683589AE6D078B644(L_0, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4(L_1, /*hidden argument*/Enumerable_ToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m00F16F6DDED1338D9656B4EDE7F8AE2B2E2251E4_RuntimeMethod_var);
		return L_2;
	}
}
// System.Byte[] Nethereum.Util.ByteUtil::XOR(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ByteUtil_XOR_mA69308D52B3C3610184D0C100DB1379987646946 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___a0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___a0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___b1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		V_2 = 0;
		goto IL_0026;
	}

IL_0017:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_1;
		int32_t L_6 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___a0;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = ___b1;
		int32_t L_12 = V_2;
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_10^(int32_t)L_14)))));
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0026:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0017;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = V_1;
		return L_18;
	}
}
// System.Void Nethereum.Util.ByteUtil::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteUtil__cctor_m6C5E4922D8102BBF572EE06CCFBA83FF5EE2BE09 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteUtil_t1C81DF755C6BB949215BBA2CFECA9CA653079742_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)0);
		((ByteUtil_t1C81DF755C6BB949215BBA2CFECA9CA653079742_StaticFields*)il2cpp_codegen_static_fields_for(ByteUtil_t1C81DF755C6BB949215BBA2CFECA9CA653079742_il2cpp_TypeInfo_var))->set_EMPTY_BYTE_ARRAY_0(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		((ByteUtil_t1C81DF755C6BB949215BBA2CFECA9CA653079742_StaticFields*)il2cpp_codegen_static_fields_for(ByteUtil_t1C81DF755C6BB949215BBA2CFECA9CA653079742_il2cpp_TypeInfo_var))->set_ZERO_BYTE_ARRAY_1(L_1);
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
// System.String Nethereum.Util.ContractUtils::CalculateContractAddress(System.String,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContractUtils_CalculateContractAddress_mF9DDA4A280A2BDD2725BC33BB817BA3C91C72CDD (String_t* ___address0, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___nonce1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___address0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3F415B51C76CFB7B00EE1C2F2DA3E8CFA2269CCA)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A577A5A6848BEDC7A1DBA1211A06E627EEF0057)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ContractUtils_CalculateContractAddress_mF9DDA4A280A2BDD2725BC33BB817BA3C91C72CDD_RuntimeMethod_var)));
	}

IL_0018:
	{
		Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0 * L_3 = (Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0 *)il2cpp_codegen_object_new(Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0_il2cpp_TypeInfo_var);
		Sha3Keccack__ctor_m8D45AFC277B2B575167CD58FF181D926737D15F2(L_3, /*hidden argument*/NULL);
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_4 = (ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D*)(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D*)SZArrayNew(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_5 = L_4;
		String_t* L_6 = ___address0;
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7;
		L_7 = HexByteConvertorExtensions_HexToByteArray_m89881F7CBE549A55575CCCB4E1C254E2D2E81B89(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RLP_t9463A64DDAFCEE1130324BD21E03C8F3CC9BCD64_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = RLP_EncodeElement_mC5B71719FB385709D3E669C582D9C2E4DB38587A(L_7, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_8);
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_9 = L_5;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_10 = ___nonce1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11;
		L_11 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mC21AC2710A7D71B94C81D8ACAAAE89398BC7EE1E(L_10, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12;
		L_12 = RLP_EncodeElement_mC5B71719FB385709D3E669C582D9C2E4DB38587A(L_11, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13;
		L_13 = RLP_EncodeList_mFB3D358226CB2F5DF6811E894B73FDCAB10518C8(L_9, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14;
		L_14 = Sha3Keccack_CalculateHash_mFCF932E75B53BE3A39C92436F0D0E035A53290E7(L_3, L_13, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = HexByteConvertorExtensions_ToHex_m1CC2B1935D1783A24DBC1122253E7C313B6B2900(L_14, (bool)0, /*hidden argument*/NULL);
		String_t* L_16;
		L_16 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_15, ((int32_t)24), /*hidden argument*/NULL);
		String_t* L_17;
		L_17 = AddressExtensions_ConvertToEthereumChecksumAddress_mE1007B333943395E6D84B2EAE63283B72A5652ED(L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.String Nethereum.Util.ContractUtils::CalcualteCreate2AddressMinimalProxy(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContractUtils_CalcualteCreate2AddressMinimalProxy_m7AA90B92D423A3DADD1E4DB49F84051B6587EF40 (String_t* ___address0, String_t* ___saltHex1, String_t* ___deploymentAddress2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61E72265B771E2ABEC223E49644B77AF40CFA993);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACAF4A98A03BA8AD4CA372A00B3EB1821B13D668);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___deploymentAddress2;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD8EBAE0CA29F1E4B2E6A074E9AAC922CD634B94F)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE9C4E5E72379B27F0B701202AF0659F326997B6A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ContractUtils_CalcualteCreate2AddressMinimalProxy_m7AA90B92D423A3DADD1E4DB49F84051B6587EF40_RuntimeMethod_var)));
	}

IL_0018:
	{
		String_t* L_3 = ___deploymentAddress2;
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = HexByteConvertorExtensions_RemoveHexPrefix_m9802B6BB32BC6F49DA47744E8B56C03EB64B2D4F(L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral61E72265B771E2ABEC223E49644B77AF40CFA993, L_4, _stringLiteralACAF4A98A03BA8AD4CA372A00B3EB1821B13D668, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = ___address0;
		String_t* L_7 = ___saltHex1;
		String_t* L_8 = V_0;
		String_t* L_9;
		L_9 = ContractUtils_CalculateCreate2Address_m981D92B33DECBE5FE61E147578921645D9364953(L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.String Nethereum.Util.ContractUtils::CalculateCreate2Address(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContractUtils_CalculateCreate2Address_m981D92B33DECBE5FE61E147578921645D9364953 (String_t* ___address0, String_t* ___saltHex1, String_t* ___byteCodeHex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEDCF3D670BF4512049C2F6AC15B2EEA5E718BFD);
		s_Il2CppMethodInitialized = true;
	}
	Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0 * V_0 = NULL;
	{
		String_t* L_0 = ___address0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3F415B51C76CFB7B00EE1C2F2DA3E8CFA2269CCA)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A577A5A6848BEDC7A1DBA1211A06E627EEF0057)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ContractUtils_CalculateCreate2Address_m981D92B33DECBE5FE61E147578921645D9364953_RuntimeMethod_var)));
	}

IL_0018:
	{
		String_t* L_3 = ___saltHex1;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_5 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFD451BA3258011EFA8F90EAEAE0E7B8F26D35641)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBAEC6E601313282A8AE2E7B3C417AEA2E90DCA0F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ContractUtils_CalculateCreate2Address_m981D92B33DECBE5FE61E147578921645D9364953_RuntimeMethod_var)));
	}

IL_0030:
	{
		String_t* L_6 = ___saltHex1;
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = HexByteConvertorExtensions_EnsureHexPrefix_mD4A30715678BF7C9B3CC086AC6B12DC505B9DA1A(L_6, /*hidden argument*/NULL);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)66))))
		{
			goto IL_004f;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_9 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5C6ACA12AB5C4ED3715E2E25B85413958933E3B9)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBAEC6E601313282A8AE2E7B3C417AEA2E90DCA0F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ContractUtils_CalculateCreate2Address_m981D92B33DECBE5FE61E147578921645D9364953_RuntimeMethod_var)));
	}

IL_004f:
	{
		Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0 * L_10 = (Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0 *)il2cpp_codegen_object_new(Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0_il2cpp_TypeInfo_var);
		Sha3Keccack__ctor_m8D45AFC277B2B575167CD58FF181D926737D15F2(L_10, /*hidden argument*/NULL);
		V_0 = L_10;
		Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0 * L_11 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		ArrayElementTypeCheck (L_13, _stringLiteralFEDCF3D670BF4512049C2F6AC15B2EEA5E718BFD);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralFEDCF3D670BF4512049C2F6AC15B2EEA5E718BFD);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13;
		String_t* L_15 = ___address0;
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_15);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_14;
		String_t* L_17 = ___saltHex1;
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_17);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_16;
		Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0 * L_19 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_20;
		String_t* L_22 = ___byteCodeHex2;
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_22);
		String_t* L_23;
		L_23 = Sha3Keccack_CalculateHashFromHex_mF849513EAC5B752E213526473560A119DACD5DDA(L_19, L_21, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_18, L_23);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_23);
		String_t* L_24;
		L_24 = Sha3Keccack_CalculateHashFromHex_mF849513EAC5B752E213526473560A119DACD5DDA(L_11, L_18, /*hidden argument*/NULL);
		String_t* L_25;
		L_25 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_24, ((int32_t)24), /*hidden argument*/NULL);
		String_t* L_26;
		L_26 = AddressExtensions_ConvertToEthereumChecksumAddress_mE1007B333943395E6D84B2EAE63283B72A5652ED(L_25, /*hidden argument*/NULL);
		return L_26;
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
// System.UInt64[] Nethereum.Util.Keccak.KeccakDigest::KeccakInitializeRoundConstants()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* KeccakDigest_KeccakInitializeRoundConstants_m8491DBB2B9EBC4B1C37F45FA90F33202DF916652 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* V_0 = NULL;
	uint8_t V_1 = 0x0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_0 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)((int32_t)24));
		V_0 = L_0;
		V_1 = (uint8_t)1;
		V_2 = 0;
		goto IL_005f;
	}

IL_000e:
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_1 = V_0;
		int32_t L_2 = V_2;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (uint64_t)((int64_t)((int64_t)0)));
		V_3 = 0;
		goto IL_0057;
	}

IL_0017:
	{
		int32_t L_3 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)31))))), (int32_t)1));
		uint8_t L_4 = V_1;
		if (!((!(((uint32_t)((int32_t)((int32_t)L_4&(int32_t)1))) <= ((uint32_t)0)))? 1 : 0))
		{
			goto IL_003c;
		}
	}
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_5 = V_0;
		int32_t L_6 = V_2;
		uint64_t* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)));
		int64_t L_8 = *((int64_t*)L_7);
		int32_t L_9 = V_4;
		*((int64_t*)L_7) = (int64_t)((int64_t)((int64_t)L_8^(int64_t)((int64_t)((int64_t)((int64_t)((int64_t)1))<<(int32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)63)))))));
	}

IL_003c:
	{
		uint8_t L_10 = V_1;
		uint8_t L_11 = V_1;
		V_1 = (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_11<<(int32_t)1))));
		if (!((!(((uint32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)128)))) <= ((uint32_t)0)))? 1 : 0))
		{
			goto IL_0053;
		}
	}
	{
		uint8_t L_12 = V_1;
		V_1 = (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_12^(int32_t)((int32_t)113)))));
	}

IL_0053:
	{
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0057:
	{
		int32_t L_14 = V_3;
		if ((((int32_t)L_14) < ((int32_t)7)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_005f:
	{
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)24))))
		{
			goto IL_000e;
		}
	}
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_17 = V_0;
		return L_17;
	}
}
// System.Int32[] Nethereum.Util.Keccak.KeccakDigest::KeccakInitializeRhoOffsets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* KeccakDigest_KeccakInitializeRhoOffsets_mDD5C1F2053F33F28F501E533AB542CD67AF0D9D2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)25));
		V_0 = L_0;
		V_5 = 0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = V_0;
		int32_t L_2 = V_5;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)L_2);
		V_1 = 1;
		V_2 = 0;
		V_3 = 1;
		goto IL_0044;
	}

IL_0018:
	{
		int32_t L_3 = V_5;
		int32_t L_4 = V_3;
		V_5 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4))&(int32_t)((int32_t)63)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = V_2;
		int32_t L_8 = V_5;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_6%(int32_t)5)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)5, (int32_t)((int32_t)((int32_t)L_7%(int32_t)5))))))), (int32_t)L_8);
		int32_t L_9 = V_2;
		V_4 = ((int32_t)((int32_t)L_9%(int32_t)5));
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		int32_t L_12 = V_4;
		V_1 = L_12;
		V_2 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_10)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)3, (int32_t)L_11))))%(int32_t)5));
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0044:
	{
		int32_t L_14 = V_3;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)25))))
		{
			goto IL_0018;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = V_0;
		return L_15;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest__ctor_m39E4FD0C1CFCD0E4E122E4F9022EB8DD8392FD72 (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, const RuntimeMethod* method)
{
	{
		KeccakDigest__ctor_m83E6B9A17080F330DFE612B81C6B43252D34D44B(__this, ((int32_t)288), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest__ctor_m83E6B9A17080F330DFE612B81C6B43252D34D44B (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, int32_t ___bitLength0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_il2cpp_TypeInfo_var);
		int32_t L_0 = ((KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_StaticFields*)il2cpp_codegen_static_fields_for(KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_il2cpp_TypeInfo_var))->get_STATE_LENGTH_2();
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_1 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)L_0/(int32_t)8)));
		__this->set_state_3(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)192));
		__this->set_dataQueue_4(L_2);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_3 = ___bitLength0;
		KeccakDigest_Init_mE3E6B4779325C7FA688DFAD676F0A20F76EB3188(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::.ctor(Nethereum.Util.Keccak.KeccakDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest__ctor_m062D5223BAD1C72CCF33110FE23B12B0BE54CAA9 (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_il2cpp_TypeInfo_var);
		int32_t L_0 = ((KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_StaticFields*)il2cpp_codegen_static_fields_for(KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_il2cpp_TypeInfo_var))->get_STATE_LENGTH_2();
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_1 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)L_0/(int32_t)8)));
		__this->set_state_3(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)192));
		__this->set_dataQueue_4(L_2);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * L_3 = ___source0;
		KeccakDigest_CopyIn_m343E1928FD487AB89831F12EA5B977768F06FD8B(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::CopyIn(Nethereum.Util.Keccak.KeccakDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_CopyIn_m343E1928FD487AB89831F12EA5B977768F06FD8B (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * ___source0, const RuntimeMethod* method)
{
	{
		KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * L_0 = ___source0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_1 = L_0->get_state_3();
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_2 = __this->get_state_3();
		KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * L_3 = ___source0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_4 = L_3->get_state_3();
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_1, 0, (RuntimeArray *)(RuntimeArray *)L_2, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), /*hidden argument*/NULL);
		KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * L_5 = ___source0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = L_5->get_dataQueue_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = __this->get_dataQueue_4();
		KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * L_8 = ___source0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = L_8->get_dataQueue_4();
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_6, 0, (RuntimeArray *)(RuntimeArray *)L_7, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), /*hidden argument*/NULL);
		KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * L_10 = ___source0;
		int32_t L_11 = L_10->get_rate_5();
		__this->set_rate_5(L_11);
		KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * L_12 = ___source0;
		int32_t L_13 = L_12->get_bitsInQueue_6();
		__this->set_bitsInQueue_6(L_13);
		KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * L_14 = ___source0;
		int32_t L_15 = L_14->get_fixedOutputLength_7();
		__this->set_fixedOutputLength_7(L_15);
		KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * L_16 = ___source0;
		bool L_17 = L_16->get_squeezing_8();
		__this->set_squeezing_8(L_17);
		KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * L_18 = ___source0;
		int32_t L_19 = L_18->get_bitsAvailableForSqueezing_9();
		__this->set_bitsAvailableForSqueezing_9(L_19);
		return;
	}
}
// System.String Nethereum.Util.Keccak.KeccakDigest::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeccakDigest_get_AlgorithmName_mEC68DCBB0C0592F421CBC73427C1931FD7888A6D (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53CE3854A381FE03C65D949A33C2E1D7DBA02CB4);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t* L_0 = __this->get_address_of_fixedOutputLength_7();
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral53CE3854A381FE03C65D949A33C2E1D7DBA02CB4, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Nethereum.Util.Keccak.KeccakDigest::GetDigestSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeccakDigest_GetDigestSize_mB56AA7A0097B449B17B645AFE5C0A29B0D5DBB53 (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_fixedOutputLength_7();
		return ((int32_t)((int32_t)L_0>>(int32_t)3));
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Update_m8E8F2E6F1A5FC00A04188AD2575CD3E1E20207EC (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, uint8_t ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0;
		uint8_t L_2 = ___input0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		KeccakDigest_Absorb_mA2ED5609453836ED978BC338681A5991B705B8AF(__this, L_1, 0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_BlockUpdate_m90C2A92C0B84C622A9268F40AEAEDABEFDA82412 (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___input0, int32_t ___inOff1, int32_t ___len2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		int32_t L_2 = ___len2;
		KeccakDigest_Absorb_mA2ED5609453836ED978BC338681A5991B705B8AF(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Nethereum.Util.Keccak.KeccakDigest::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeccakDigest_DoFinal_m75A1A3A8DB3D40CC647A1BB2EF16099E08C986FE (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___output0, int32_t ___outOff1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___output0;
		int32_t L_1 = ___outOff1;
		int32_t L_2 = __this->get_fixedOutputLength_7();
		KeccakDigest_Squeeze_mCDC130D30AD42E9C8173462310435B721737AB5A(__this, L_0, L_1, ((int32_t)((int32_t)L_2>>(int32_t)3)), /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(10 /* System.Void Nethereum.Util.Keccak.KeccakDigest::Reset() */, __this);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Nethereum.Util.Keccak.KeccakDigest::GetDigestSize() */, __this);
		return L_3;
	}
}
// System.Int32 Nethereum.Util.Keccak.KeccakDigest::DoFinal(System.Byte[],System.Int32,System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeccakDigest_DoFinal_mD3BA7E3006B6B64B30DE50E226A93EBFEF4B2688 (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___output0, int32_t ___outOff1, uint8_t ___partialByte2, int32_t ___partialBits3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___partialBits3;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		uint8_t L_1 = ___partialByte2;
		int32_t L_2 = ___partialBits3;
		KeccakDigest_AbsorbBits_m196587E484DD502CD41C99C581558092E02E0F97(__this, L_1, L_2, /*hidden argument*/NULL);
	}

IL_000e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___output0;
		int32_t L_4 = ___outOff1;
		int32_t L_5 = __this->get_fixedOutputLength_7();
		KeccakDigest_Squeeze_mCDC130D30AD42E9C8173462310435B721737AB5A(__this, L_3, L_4, ((int32_t)((int32_t)L_5>>(int32_t)3)), /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(10 /* System.Void Nethereum.Util.Keccak.KeccakDigest::Reset() */, __this);
		int32_t L_6;
		L_6 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Nethereum.Util.Keccak.KeccakDigest::GetDigestSize() */, __this);
		return L_6;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Reset_m2C067AAB0654A24D9BFBD0D99168DBCA9DAAEEB9 (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_fixedOutputLength_7();
		KeccakDigest_Init_mE3E6B4779325C7FA688DFAD676F0A20F76EB3188(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Nethereum.Util.Keccak.KeccakDigest::GetByteLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeccakDigest_GetByteLength_mED68BEFB9F9BA705E8BBCB9947F1405DD795516B (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_rate_5();
		return ((int32_t)((int32_t)L_0>>(int32_t)3));
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::Init(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Init_mE3E6B4779325C7FA688DFAD676F0A20F76EB3188 (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, int32_t ___bitLength0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___bitLength0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)256))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = ___bitLength0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)128))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_2 = ___bitLength0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)224))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_3 = ___bitLength0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)256))))
		{
			goto IL_003a;
		}
	}
	{
		goto IL_004a;
	}

IL_0022:
	{
		int32_t L_4 = ___bitLength0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)288))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_5 = ___bitLength0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)384))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_6 = ___bitLength0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)512)))))
		{
			goto IL_004a;
		}
	}

IL_003a:
	{
		int32_t L_7 = ___bitLength0;
		KeccakDigest_InitSponge_m922FF7D21C50C3B17C8EAB8996850B63EAB6A818(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)1600), (int32_t)((int32_t)((int32_t)L_7<<(int32_t)1)))), /*hidden argument*/NULL);
		return;
	}

IL_004a:
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA5D5402405EA46FA1359EF38E2451145DB09D1C5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDEFDD99707701302B4F3A4CE68BC9EB2926D7283)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeccakDigest_Init_mE3E6B4779325C7FA688DFAD676F0A20F76EB3188_RuntimeMethod_var)));
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::InitSponge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_InitSponge_m922FF7D21C50C3B17C8EAB8996850B63EAB6A818 (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, int32_t ___rate0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___rate0;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___rate0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)1600))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = ___rate0;
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)63))))
		{
			goto IL_001d;
		}
	}

IL_0012:
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD0B955404E183709B5C731BFCF31085857DE0EC3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeccakDigest_InitSponge_m922FF7D21C50C3B17C8EAB8996850B63EAB6A818_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_4 = ___rate0;
		__this->set_rate_5(L_4);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_5 = __this->get_state_3();
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_6 = __this->get_state_3();
		Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F((RuntimeArray *)(RuntimeArray *)L_5, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = __this->get_dataQueue_4();
		Arrays_Fill_m53305E963483A61E6DD6E6D355984E0D6B137617(L_7, (uint8_t)0, /*hidden argument*/NULL);
		__this->set_bitsInQueue_6(0);
		__this->set_squeezing_8((bool)0);
		__this->set_bitsAvailableForSqueezing_9(0);
		int32_t L_8 = ___rate0;
		__this->set_fixedOutputLength_7(((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)1600), (int32_t)L_8))>>(int32_t)1)));
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::Absorb(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Absorb_mA2ED5609453836ED978BC338681A5991B705B8AF (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___off1, int32_t ___len2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_bitsInQueue_6();
		if (!((int32_t)((int32_t)L_0&(int32_t)7)))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA8E3A14BFED9F7D70EFB2C59F8DBAC2A52180062)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeccakDigest_Absorb_mA2ED5609453836ED978BC338681A5991B705B8AF_RuntimeMethod_var)));
	}

IL_0015:
	{
		bool L_2 = __this->get_squeezing_8();
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88ABBDEE731F56D989C298F52912B7B0D27D0D84)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeccakDigest_Absorb_mA2ED5609453836ED978BC338681A5991B705B8AF_RuntimeMethod_var)));
	}

IL_0028:
	{
		int32_t L_4 = __this->get_bitsInQueue_6();
		V_0 = ((int32_t)((int32_t)L_4>>(int32_t)3));
		int32_t L_5 = __this->get_rate_5();
		V_1 = ((int32_t)((int32_t)L_5>>(int32_t)3));
		V_2 = 0;
		goto IL_0095;
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		if (L_6)
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_7 = V_2;
		int32_t L_8 = ___len2;
		int32_t L_9 = V_1;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9)))))
		{
			goto IL_005d;
		}
	}

IL_0047:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ___data0;
		int32_t L_11 = ___off1;
		int32_t L_12 = V_2;
		KeccakDigest_KeccakAbsorb_m855241576F082DEEFD9EA8A24C8A193DC2225185(__this, L_10, ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12)), /*hidden argument*/NULL);
		int32_t L_13 = V_2;
		int32_t L_14 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14));
		int32_t L_15 = V_2;
		int32_t L_16 = ___len2;
		int32_t L_17 = V_1;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17)))))
		{
			goto IL_0047;
		}
	}
	{
		goto IL_0095;
	}

IL_005d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		int32_t L_20 = ___len2;
		int32_t L_21 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_22;
		L_22 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)L_19)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)L_21)), /*hidden argument*/NULL);
		V_3 = L_22;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = ___data0;
		int32_t L_24 = ___off1;
		int32_t L_25 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = __this->get_dataQueue_4();
		int32_t L_27 = V_0;
		int32_t L_28 = V_3;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_23, ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)L_25)), (RuntimeArray *)(RuntimeArray *)L_26, L_27, L_28, /*hidden argument*/NULL);
		int32_t L_29 = V_0;
		int32_t L_30 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_30));
		int32_t L_31 = V_2;
		int32_t L_32 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)L_32));
		int32_t L_33 = V_0;
		int32_t L_34 = V_1;
		if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
		{
			goto IL_0095;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35 = __this->get_dataQueue_4();
		KeccakDigest_KeccakAbsorb_m855241576F082DEEFD9EA8A24C8A193DC2225185(__this, L_35, 0, /*hidden argument*/NULL);
		V_0 = 0;
	}

IL_0095:
	{
		int32_t L_36 = V_2;
		int32_t L_37 = ___len2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_38 = V_0;
		__this->set_bitsInQueue_6(((int32_t)((int32_t)L_38<<(int32_t)3)));
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::AbsorbBits(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_AbsorbBits_m196587E484DD502CD41C99C581558092E02E0F97 (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, int32_t ___data0, int32_t ___bits1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bits1;
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___bits1;
		if ((((int32_t)L_1) <= ((int32_t)7)))
		{
			goto IL_0018;
		}
	}

IL_0008:
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD039C76F6BA3380896DFB0DA8F26D45B1448F44F)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeccakDigest_AbsorbBits_m196587E484DD502CD41C99C581558092E02E0F97_RuntimeMethod_var)));
	}

IL_0018:
	{
		int32_t L_3 = __this->get_bitsInQueue_6();
		if (!((int32_t)((int32_t)L_3&(int32_t)7)))
		{
			goto IL_002d;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA8E3A14BFED9F7D70EFB2C59F8DBAC2A52180062)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeccakDigest_AbsorbBits_m196587E484DD502CD41C99C581558092E02E0F97_RuntimeMethod_var)));
	}

IL_002d:
	{
		bool L_5 = __this->get_squeezing_8();
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_6 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88ABBDEE731F56D989C298F52912B7B0D27D0D84)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeccakDigest_AbsorbBits_m196587E484DD502CD41C99C581558092E02E0F97_RuntimeMethod_var)));
	}

IL_0040:
	{
		int32_t L_7 = ___bits1;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)31))))), (int32_t)1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get_dataQueue_4();
		int32_t L_9 = __this->get_bitsInQueue_6();
		int32_t L_10 = ___data0;
		int32_t L_11 = V_0;
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_9>>(int32_t)3))), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_10&(int32_t)L_11)))));
		int32_t L_12 = __this->get_bitsInQueue_6();
		int32_t L_13 = ___bits1;
		__this->set_bitsInQueue_6(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13)));
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::PadAndSwitchToSqueezingPhase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_PadAndSwitchToSqueezingPhase_m488DBDE2DE5D091C9599CA6A6D41B05237D4749D (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_dataQueue_4();
		int32_t L_1 = __this->get_bitsInQueue_6();
		uint8_t* L_2 = ((L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_1>>(int32_t)3)))));
		int32_t L_3 = *((uint8_t*)L_2);
		int32_t L_4 = __this->get_bitsInQueue_6();
		*((int8_t*)L_2) = (int8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_3|(int32_t)((int32_t)((uint8_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4&(int32_t)7))&(int32_t)((int32_t)31)))))))))));
		int32_t L_5 = __this->get_bitsInQueue_6();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		int32_t L_6 = V_0;
		__this->set_bitsInQueue_6(L_6);
		int32_t L_7 = V_0;
		int32_t L_8 = __this->get_rate_5();
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0053;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = __this->get_dataQueue_4();
		KeccakDigest_KeccakAbsorb_m855241576F082DEEFD9EA8A24C8A193DC2225185(__this, L_9, 0, /*hidden argument*/NULL);
		__this->set_bitsInQueue_6(0);
	}

IL_0053:
	{
		int32_t L_10 = __this->get_bitsInQueue_6();
		V_1 = ((int32_t)((int32_t)L_10>>(int32_t)6));
		int32_t L_11 = __this->get_bitsInQueue_6();
		V_2 = ((int32_t)((int32_t)L_11&(int32_t)((int32_t)63)));
		V_3 = 0;
		V_4 = 0;
		goto IL_0094;
	}

IL_006d:
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_12 = __this->get_state_3();
		int32_t L_13 = V_4;
		uint64_t* L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)));
		int64_t L_15 = *((int64_t*)L_14);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = __this->get_dataQueue_4();
		int32_t L_17 = V_3;
		uint64_t L_18;
		L_18 = Pack_LE_To_UInt64_mA4BDB2CA15FF07D3D307233ABC42FA88BE2E5604(L_16, L_17, /*hidden argument*/NULL);
		*((int64_t*)L_14) = (int64_t)((int64_t)((int64_t)L_15^(int64_t)L_18));
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)8));
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0094:
	{
		int32_t L_21 = V_4;
		int32_t L_22 = V_1;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_23 = V_2;
		if ((((int32_t)L_23) <= ((int32_t)0)))
		{
			goto IL_00c8;
		}
	}
	{
		int32_t L_24 = V_2;
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)1))<<(int32_t)((int32_t)((int32_t)L_24&(int32_t)((int32_t)63))))), (int64_t)((int64_t)((int64_t)1))));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_25 = __this->get_state_3();
		int32_t L_26 = V_1;
		uint64_t* L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)));
		int64_t L_28 = *((int64_t*)L_27);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = __this->get_dataQueue_4();
		int32_t L_30 = V_3;
		uint64_t L_31;
		L_31 = Pack_LE_To_UInt64_mA4BDB2CA15FF07D3D307233ABC42FA88BE2E5604(L_29, L_30, /*hidden argument*/NULL);
		uint64_t L_32 = V_5;
		*((int64_t*)L_27) = (int64_t)((int64_t)((int64_t)L_28^(int64_t)((int64_t)((int64_t)L_31&(int64_t)L_32))));
	}

IL_00c8:
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_33 = __this->get_state_3();
		int32_t L_34 = __this->get_rate_5();
		uint64_t* L_35 = ((L_33)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)1))>>(int32_t)6)))));
		int64_t L_36 = *((int64_t*)L_35);
		*((int64_t*)L_35) = (int64_t)((int64_t)((int64_t)L_36^(int64_t)((int64_t)(std::numeric_limits<int64_t>::min)())));
		KeccakDigest_KeccakPermutation_m233662191B3BFC82FCBCBF0CADCE7AA0D7F525F5(__this, /*hidden argument*/NULL);
		KeccakDigest_KeccakExtract_m13CF8C3FF2B540C7A83B080FB4A136124ABB69B0(__this, /*hidden argument*/NULL);
		int32_t L_37 = __this->get_rate_5();
		__this->set_bitsAvailableForSqueezing_9(L_37);
		__this->set_bitsInQueue_6(0);
		__this->set_squeezing_8((bool)1);
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::Squeeze(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Squeeze_mCDC130D30AD42E9C8173462310435B721737AB5A (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___output0, int32_t ___off1, int32_t ___len2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	{
		bool L_0 = __this->get_squeezing_8();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		KeccakDigest_PadAndSwitchToSqueezingPhase_m488DBDE2DE5D091C9599CA6A6D41B05237D4749D(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		int32_t L_1 = ___len2;
		V_0 = ((int64_t)((int64_t)((int64_t)((int64_t)L_1))<<(int32_t)3));
		V_1 = ((int64_t)((int64_t)0));
		goto IL_0080;
	}

IL_0018:
	{
		int32_t L_2 = __this->get_bitsAvailableForSqueezing_9();
		if (L_2)
		{
			goto IL_0038;
		}
	}
	{
		KeccakDigest_KeccakPermutation_m233662191B3BFC82FCBCBF0CADCE7AA0D7F525F5(__this, /*hidden argument*/NULL);
		KeccakDigest_KeccakExtract_m13CF8C3FF2B540C7A83B080FB4A136124ABB69B0(__this, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_rate_5();
		__this->set_bitsAvailableForSqueezing_9(L_3);
	}

IL_0038:
	{
		int32_t L_4 = __this->get_bitsAvailableForSqueezing_9();
		int64_t L_5 = V_0;
		int64_t L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int64_t L_7;
		L_7 = Math_Min_m63E8ED32ABF3637E5BE49943F6760922C2876087(((int64_t)((int64_t)L_4)), ((int64_t)il2cpp_codegen_subtract((int64_t)L_5, (int64_t)L_6)), /*hidden argument*/NULL);
		V_2 = ((int32_t)((int32_t)L_7));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get_dataQueue_4();
		int32_t L_9 = __this->get_rate_5();
		int32_t L_10 = __this->get_bitsAvailableForSqueezing_9();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = ___output0;
		int32_t L_12 = ___off1;
		int64_t L_13 = V_1;
		int32_t L_14 = V_2;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_8, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)L_10))>>(int32_t)3)), (RuntimeArray *)(RuntimeArray *)L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)((int32_t)((int32_t)((int64_t)((int64_t)L_13>>(int32_t)3)))))), ((int32_t)((int32_t)L_14>>(int32_t)3)), /*hidden argument*/NULL);
		int32_t L_15 = __this->get_bitsAvailableForSqueezing_9();
		int32_t L_16 = V_2;
		__this->set_bitsAvailableForSqueezing_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16)));
		int64_t L_17 = V_1;
		int32_t L_18 = V_2;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_17, (int64_t)((int64_t)((int64_t)L_18))));
	}

IL_0080:
	{
		int64_t L_19 = V_1;
		int64_t L_20 = V_0;
		if ((((int64_t)L_19) < ((int64_t)L_20)))
		{
			goto IL_0018;
		}
	}
	{
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::KeccakAbsorb(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_KeccakAbsorb_m855241576F082DEEFD9EA8A24C8A193DC2225185 (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___off1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_rate_5();
		V_0 = ((int32_t)((int32_t)L_0>>(int32_t)6));
		V_1 = 0;
		goto IL_002d;
	}

IL_000d:
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_1 = __this->get_state_3();
		int32_t L_2 = V_1;
		uint64_t* L_3 = ((L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_2)));
		int64_t L_4 = *((int64_t*)L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___data0;
		int32_t L_6 = ___off1;
		uint64_t L_7;
		L_7 = Pack_LE_To_UInt64_mA4BDB2CA15FF07D3D307233ABC42FA88BE2E5604(L_5, L_6, /*hidden argument*/NULL);
		*((int64_t*)L_3) = (int64_t)((int64_t)((int64_t)L_4^(int64_t)L_7));
		int32_t L_8 = ___off1;
		___off1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)8));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_002d:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_000d;
		}
	}
	{
		KeccakDigest_KeccakPermutation_m233662191B3BFC82FCBCBF0CADCE7AA0D7F525F5(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::KeccakExtract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_KeccakExtract_m13CF8C3FF2B540C7A83B080FB4A136124ABB69B0 (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, const RuntimeMethod* method)
{
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_0 = __this->get_state_3();
		int32_t L_1 = __this->get_rate_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_dataQueue_4();
		Pack_UInt64_To_LE_mB8E61033137FB4A42FC286330DDE990B4334C6BF(L_0, 0, ((int32_t)((int32_t)L_1>>(int32_t)6)), L_2, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::KeccakPermutation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_KeccakPermutation_m233662191B3BFC82FCBCBF0CADCE7AA0D7F525F5 (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0040;
	}

IL_0004:
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_0 = __this->get_state_3();
		IL2CPP_RUNTIME_CLASS_INIT(KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_il2cpp_TypeInfo_var);
		KeccakDigest_Theta_mF3FA25985C800579C2ED170963890229E91F02C3(L_0, /*hidden argument*/NULL);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_1 = __this->get_state_3();
		KeccakDigest_Rho_m8EFF6A627D35E13010A50E3475167C4A3E542A2A(L_1, /*hidden argument*/NULL);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_2 = __this->get_state_3();
		KeccakDigest_Pi_m49AF05D95F51933F1A22B8749767E563EED0862B(L_2, /*hidden argument*/NULL);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_3 = __this->get_state_3();
		KeccakDigest_Chi_mE851A61F93960C391BC1538B34F7351A281F75A9(L_3, /*hidden argument*/NULL);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_4 = __this->get_state_3();
		int32_t L_5 = V_0;
		KeccakDigest_Iota_mC0E2BD41ED95322E9290A49A87919B8906D5C05F(L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0040:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)24))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.UInt64 Nethereum.Util.Keccak.KeccakDigest::leftRotate(System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t KeccakDigest_leftRotate_m522092EF8195D6CA13FE80205267C50A4C9482E0 (uint64_t ___v0, int32_t ___r1, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___v0;
		int32_t L_1 = ___r1;
		uint64_t L_2 = ___v0;
		int32_t L_3 = ___r1;
		return ((int64_t)((int64_t)((int64_t)((int64_t)L_0<<(int32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)63)))))|(int64_t)((int64_t)((uint64_t)L_2>>((int32_t)((int32_t)((-L_3))&(int32_t)((int32_t)63)))))));
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::Theta(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Theta_mF3FA25985C800579C2ED170963890229E91F02C3 (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___A0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_0 = ___A0;
		int32_t L_1 = 0;
		int64_t L_2 = (int64_t)(L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_3 = ___A0;
		int32_t L_4 = 5;
		int64_t L_5 = (int64_t)(L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_6 = ___A0;
		int32_t L_7 = ((int32_t)10);
		int64_t L_8 = (int64_t)(L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_9 = ___A0;
		int32_t L_10 = ((int32_t)15);
		int64_t L_11 = (int64_t)(L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_12 = ___A0;
		int32_t L_13 = ((int32_t)20);
		int64_t L_14 = (int64_t)(L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		V_0 = ((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)L_2^(int64_t)L_5))^(int64_t)L_8))^(int64_t)L_11))^(int64_t)L_14));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_15 = ___A0;
		int32_t L_16 = 1;
		int64_t L_17 = (int64_t)(L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_18 = ___A0;
		int32_t L_19 = 6;
		int64_t L_20 = (int64_t)(L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_21 = ___A0;
		int32_t L_22 = ((int32_t)11);
		int64_t L_23 = (int64_t)(L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_24 = ___A0;
		int32_t L_25 = ((int32_t)16);
		int64_t L_26 = (int64_t)(L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_27 = ___A0;
		int32_t L_28 = ((int32_t)21);
		int64_t L_29 = (int64_t)(L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		V_1 = ((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)L_17^(int64_t)L_20))^(int64_t)L_23))^(int64_t)L_26))^(int64_t)L_29));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_30 = ___A0;
		int32_t L_31 = 2;
		int64_t L_32 = (int64_t)(L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_33 = ___A0;
		int32_t L_34 = 7;
		int64_t L_35 = (int64_t)(L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_36 = ___A0;
		int32_t L_37 = ((int32_t)12);
		int64_t L_38 = (int64_t)(L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_39 = ___A0;
		int32_t L_40 = ((int32_t)17);
		int64_t L_41 = (int64_t)(L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_42 = ___A0;
		int32_t L_43 = ((int32_t)22);
		int64_t L_44 = (int64_t)(L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		V_2 = ((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)L_32^(int64_t)L_35))^(int64_t)L_38))^(int64_t)L_41))^(int64_t)L_44));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_45 = ___A0;
		int32_t L_46 = 3;
		int64_t L_47 = (int64_t)(L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_48 = ___A0;
		int32_t L_49 = 8;
		int64_t L_50 = (int64_t)(L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_51 = ___A0;
		int32_t L_52 = ((int32_t)13);
		int64_t L_53 = (int64_t)(L_51)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_54 = ___A0;
		int32_t L_55 = ((int32_t)18);
		int64_t L_56 = (int64_t)(L_54)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_57 = ___A0;
		int32_t L_58 = ((int32_t)23);
		int64_t L_59 = (int64_t)(L_57)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		V_3 = ((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)L_47^(int64_t)L_50))^(int64_t)L_53))^(int64_t)L_56))^(int64_t)L_59));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_60 = ___A0;
		int32_t L_61 = 4;
		int64_t L_62 = (int64_t)(L_60)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_61));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_63 = ___A0;
		int32_t L_64 = ((int32_t)9);
		int64_t L_65 = (int64_t)(L_63)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_64));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_66 = ___A0;
		int32_t L_67 = ((int32_t)14);
		int64_t L_68 = (int64_t)(L_66)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_67));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_69 = ___A0;
		int32_t L_70 = ((int32_t)19);
		int64_t L_71 = (int64_t)(L_69)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_70));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_72 = ___A0;
		int32_t L_73 = ((int32_t)24);
		int64_t L_74 = (int64_t)(L_72)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_73));
		V_4 = ((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)L_62^(int64_t)L_65))^(int64_t)L_68))^(int64_t)L_71))^(int64_t)L_74));
		uint64_t L_75 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_il2cpp_TypeInfo_var);
		uint64_t L_76;
		L_76 = KeccakDigest_leftRotate_m522092EF8195D6CA13FE80205267C50A4C9482E0(L_75, 1, /*hidden argument*/NULL);
		uint64_t L_77 = V_4;
		V_5 = ((int64_t)((int64_t)L_76^(int64_t)L_77));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_78 = ___A0;
		uint64_t* L_79 = ((L_78)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0)));
		int64_t L_80 = *((int64_t*)L_79);
		uint64_t L_81 = V_5;
		*((int64_t*)L_79) = (int64_t)((int64_t)((int64_t)L_80^(int64_t)L_81));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_82 = ___A0;
		uint64_t* L_83 = ((L_82)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(5)));
		int64_t L_84 = *((int64_t*)L_83);
		uint64_t L_85 = V_5;
		*((int64_t*)L_83) = (int64_t)((int64_t)((int64_t)L_84^(int64_t)L_85));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_86 = ___A0;
		uint64_t* L_87 = ((L_86)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10))));
		int64_t L_88 = *((int64_t*)L_87);
		uint64_t L_89 = V_5;
		*((int64_t*)L_87) = (int64_t)((int64_t)((int64_t)L_88^(int64_t)L_89));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_90 = ___A0;
		uint64_t* L_91 = ((L_90)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15))));
		int64_t L_92 = *((int64_t*)L_91);
		uint64_t L_93 = V_5;
		*((int64_t*)L_91) = (int64_t)((int64_t)((int64_t)L_92^(int64_t)L_93));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_94 = ___A0;
		uint64_t* L_95 = ((L_94)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)20))));
		int64_t L_96 = *((int64_t*)L_95);
		uint64_t L_97 = V_5;
		*((int64_t*)L_95) = (int64_t)((int64_t)((int64_t)L_96^(int64_t)L_97));
		uint64_t L_98 = V_2;
		uint64_t L_99;
		L_99 = KeccakDigest_leftRotate_m522092EF8195D6CA13FE80205267C50A4C9482E0(L_98, 1, /*hidden argument*/NULL);
		uint64_t L_100 = V_0;
		V_5 = ((int64_t)((int64_t)L_99^(int64_t)L_100));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_101 = ___A0;
		uint64_t* L_102 = ((L_101)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)));
		int64_t L_103 = *((int64_t*)L_102);
		uint64_t L_104 = V_5;
		*((int64_t*)L_102) = (int64_t)((int64_t)((int64_t)L_103^(int64_t)L_104));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_105 = ___A0;
		uint64_t* L_106 = ((L_105)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(6)));
		int64_t L_107 = *((int64_t*)L_106);
		uint64_t L_108 = V_5;
		*((int64_t*)L_106) = (int64_t)((int64_t)((int64_t)L_107^(int64_t)L_108));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_109 = ___A0;
		uint64_t* L_110 = ((L_109)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11))));
		int64_t L_111 = *((int64_t*)L_110);
		uint64_t L_112 = V_5;
		*((int64_t*)L_110) = (int64_t)((int64_t)((int64_t)L_111^(int64_t)L_112));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_113 = ___A0;
		uint64_t* L_114 = ((L_113)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)16))));
		int64_t L_115 = *((int64_t*)L_114);
		uint64_t L_116 = V_5;
		*((int64_t*)L_114) = (int64_t)((int64_t)((int64_t)L_115^(int64_t)L_116));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_117 = ___A0;
		uint64_t* L_118 = ((L_117)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)21))));
		int64_t L_119 = *((int64_t*)L_118);
		uint64_t L_120 = V_5;
		*((int64_t*)L_118) = (int64_t)((int64_t)((int64_t)L_119^(int64_t)L_120));
		uint64_t L_121 = V_3;
		uint64_t L_122;
		L_122 = KeccakDigest_leftRotate_m522092EF8195D6CA13FE80205267C50A4C9482E0(L_121, 1, /*hidden argument*/NULL);
		uint64_t L_123 = V_1;
		V_5 = ((int64_t)((int64_t)L_122^(int64_t)L_123));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_124 = ___A0;
		uint64_t* L_125 = ((L_124)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2)));
		int64_t L_126 = *((int64_t*)L_125);
		uint64_t L_127 = V_5;
		*((int64_t*)L_125) = (int64_t)((int64_t)((int64_t)L_126^(int64_t)L_127));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_128 = ___A0;
		uint64_t* L_129 = ((L_128)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(7)));
		int64_t L_130 = *((int64_t*)L_129);
		uint64_t L_131 = V_5;
		*((int64_t*)L_129) = (int64_t)((int64_t)((int64_t)L_130^(int64_t)L_131));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_132 = ___A0;
		uint64_t* L_133 = ((L_132)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12))));
		int64_t L_134 = *((int64_t*)L_133);
		uint64_t L_135 = V_5;
		*((int64_t*)L_133) = (int64_t)((int64_t)((int64_t)L_134^(int64_t)L_135));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_136 = ___A0;
		uint64_t* L_137 = ((L_136)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)17))));
		int64_t L_138 = *((int64_t*)L_137);
		uint64_t L_139 = V_5;
		*((int64_t*)L_137) = (int64_t)((int64_t)((int64_t)L_138^(int64_t)L_139));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_140 = ___A0;
		uint64_t* L_141 = ((L_140)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)22))));
		int64_t L_142 = *((int64_t*)L_141);
		uint64_t L_143 = V_5;
		*((int64_t*)L_141) = (int64_t)((int64_t)((int64_t)L_142^(int64_t)L_143));
		uint64_t L_144 = V_4;
		uint64_t L_145;
		L_145 = KeccakDigest_leftRotate_m522092EF8195D6CA13FE80205267C50A4C9482E0(L_144, 1, /*hidden argument*/NULL);
		uint64_t L_146 = V_2;
		V_5 = ((int64_t)((int64_t)L_145^(int64_t)L_146));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_147 = ___A0;
		uint64_t* L_148 = ((L_147)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(3)));
		int64_t L_149 = *((int64_t*)L_148);
		uint64_t L_150 = V_5;
		*((int64_t*)L_148) = (int64_t)((int64_t)((int64_t)L_149^(int64_t)L_150));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_151 = ___A0;
		uint64_t* L_152 = ((L_151)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(8)));
		int64_t L_153 = *((int64_t*)L_152);
		uint64_t L_154 = V_5;
		*((int64_t*)L_152) = (int64_t)((int64_t)((int64_t)L_153^(int64_t)L_154));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_155 = ___A0;
		uint64_t* L_156 = ((L_155)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13))));
		int64_t L_157 = *((int64_t*)L_156);
		uint64_t L_158 = V_5;
		*((int64_t*)L_156) = (int64_t)((int64_t)((int64_t)L_157^(int64_t)L_158));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_159 = ___A0;
		uint64_t* L_160 = ((L_159)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)18))));
		int64_t L_161 = *((int64_t*)L_160);
		uint64_t L_162 = V_5;
		*((int64_t*)L_160) = (int64_t)((int64_t)((int64_t)L_161^(int64_t)L_162));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_163 = ___A0;
		uint64_t* L_164 = ((L_163)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)23))));
		int64_t L_165 = *((int64_t*)L_164);
		uint64_t L_166 = V_5;
		*((int64_t*)L_164) = (int64_t)((int64_t)((int64_t)L_165^(int64_t)L_166));
		uint64_t L_167 = V_0;
		uint64_t L_168;
		L_168 = KeccakDigest_leftRotate_m522092EF8195D6CA13FE80205267C50A4C9482E0(L_167, 1, /*hidden argument*/NULL);
		uint64_t L_169 = V_3;
		V_5 = ((int64_t)((int64_t)L_168^(int64_t)L_169));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_170 = ___A0;
		uint64_t* L_171 = ((L_170)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(4)));
		int64_t L_172 = *((int64_t*)L_171);
		uint64_t L_173 = V_5;
		*((int64_t*)L_171) = (int64_t)((int64_t)((int64_t)L_172^(int64_t)L_173));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_174 = ___A0;
		uint64_t* L_175 = ((L_174)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9))));
		int64_t L_176 = *((int64_t*)L_175);
		uint64_t L_177 = V_5;
		*((int64_t*)L_175) = (int64_t)((int64_t)((int64_t)L_176^(int64_t)L_177));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_178 = ___A0;
		uint64_t* L_179 = ((L_178)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14))));
		int64_t L_180 = *((int64_t*)L_179);
		uint64_t L_181 = V_5;
		*((int64_t*)L_179) = (int64_t)((int64_t)((int64_t)L_180^(int64_t)L_181));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_182 = ___A0;
		uint64_t* L_183 = ((L_182)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)19))));
		int64_t L_184 = *((int64_t*)L_183);
		uint64_t L_185 = V_5;
		*((int64_t*)L_183) = (int64_t)((int64_t)((int64_t)L_184^(int64_t)L_185));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_186 = ___A0;
		uint64_t* L_187 = ((L_186)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)24))));
		int64_t L_188 = *((int64_t*)L_187);
		uint64_t L_189 = V_5;
		*((int64_t*)L_187) = (int64_t)((int64_t)((int64_t)L_188^(int64_t)L_189));
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::Rho(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Rho_m8EFF6A627D35E13010A50E3475167C4A3E542A2A (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___A0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 1;
		goto IL_001a;
	}

IL_0004:
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_0 = ___A0;
		int32_t L_1 = V_0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_2 = ___A0;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		int64_t L_5 = (int64_t)(L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		IL2CPP_RUNTIME_CLASS_INIT(KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = ((KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_StaticFields*)il2cpp_codegen_static_fields_for(KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_il2cpp_TypeInfo_var))->get_KeccakRhoOffsets_1();
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		uint64_t L_10;
		L_10 = KeccakDigest_leftRotate_m522092EF8195D6CA13FE80205267C50A4C9482E0(L_5, L_9, /*hidden argument*/NULL);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint64_t)L_10);
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_001a:
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)25))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::Pi(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Pi_m49AF05D95F51933F1A22B8749767E563EED0862B (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___A0, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_0 = ___A0;
		int32_t L_1 = 1;
		int64_t L_2 = (int64_t)(L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_3 = ___A0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_4 = ___A0;
		int32_t L_5 = 6;
		int64_t L_6 = (int64_t)(L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_6);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_7 = ___A0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_8 = ___A0;
		int32_t L_9 = ((int32_t)9);
		int64_t L_10 = (int64_t)(L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_10);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_11 = ___A0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_12 = ___A0;
		int32_t L_13 = ((int32_t)22);
		int64_t L_14 = (int64_t)(L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint64_t)L_14);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_15 = ___A0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_16 = ___A0;
		int32_t L_17 = ((int32_t)14);
		int64_t L_18 = (int64_t)(L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)22)), (uint64_t)L_18);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_19 = ___A0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_20 = ___A0;
		int32_t L_21 = ((int32_t)20);
		int64_t L_22 = (int64_t)(L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint64_t)L_22);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_23 = ___A0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_24 = ___A0;
		int32_t L_25 = 2;
		int64_t L_26 = (int64_t)(L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)20)), (uint64_t)L_26);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_27 = ___A0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_28 = ___A0;
		int32_t L_29 = ((int32_t)12);
		int64_t L_30 = (int64_t)(L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_30);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_31 = ___A0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_32 = ___A0;
		int32_t L_33 = ((int32_t)13);
		int64_t L_34 = (int64_t)(L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint64_t)L_34);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_35 = ___A0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_36 = ___A0;
		int32_t L_37 = ((int32_t)19);
		int64_t L_38 = (int64_t)(L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint64_t)L_38);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_39 = ___A0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_40 = ___A0;
		int32_t L_41 = ((int32_t)23);
		int64_t L_42 = (int64_t)(L_40)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		(L_39)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)19)), (uint64_t)L_42);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_43 = ___A0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_44 = ___A0;
		int32_t L_45 = ((int32_t)15);
		int64_t L_46 = (int64_t)(L_44)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)23)), (uint64_t)L_46);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_47 = ___A0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_48 = ___A0;
		int32_t L_49 = 4;
		int64_t L_50 = (int64_t)(L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49));
		(L_47)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint64_t)L_50);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_51 = ___A0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_52 = ___A0;
		int32_t L_53 = ((int32_t)24);
		int64_t L_54 = (int64_t)(L_52)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_53));
		(L_51)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_54);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_55 = ___A0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_56 = ___A0;
		int32_t L_57 = ((int32_t)21);
		int64_t L_58 = (int64_t)(L_56)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_57));
		(L_55)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)24)), (uint64_t)L_58);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_59 = ___A0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_60 = ___A0;
		int32_t L_61 = 8;
		int64_t L_62 = (int64_t)(L_60)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_61));
		(L_59)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)21)), (uint64_t)L_62);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_63 = ___A0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_64 = ___A0;
		int32_t L_65 = ((int32_t)16);
		int64_t L_66 = (int64_t)(L_64)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_65));
		(L_63)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (uint64_t)L_66);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_67 = ___A0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_68 = ___A0;
		int32_t L_69 = 5;
		int64_t L_70 = (int64_t)(L_68)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_69));
		(L_67)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)16)), (uint64_t)L_70);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_71 = ___A0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_72 = ___A0;
		int32_t L_73 = 3;
		int64_t L_74 = (int64_t)(L_72)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_73));
		(L_71)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_74);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_75 = ___A0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_76 = ___A0;
		int32_t L_77 = ((int32_t)18);
		int64_t L_78 = (int64_t)(L_76)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_77));
		(L_75)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_78);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_79 = ___A0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_80 = ___A0;
		int32_t L_81 = ((int32_t)17);
		int64_t L_82 = (int64_t)(L_80)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_81));
		(L_79)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)18)), (uint64_t)L_82);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_83 = ___A0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_84 = ___A0;
		int32_t L_85 = ((int32_t)11);
		int64_t L_86 = (int64_t)(L_84)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_85));
		(L_83)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)17)), (uint64_t)L_86);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_87 = ___A0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_88 = ___A0;
		int32_t L_89 = 7;
		int64_t L_90 = (int64_t)(L_88)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_89));
		(L_87)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint64_t)L_90);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_91 = ___A0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_92 = ___A0;
		int32_t L_93 = ((int32_t)10);
		int64_t L_94 = (int64_t)(L_92)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_93));
		(L_91)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (uint64_t)L_94);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_95 = ___A0;
		uint64_t L_96 = V_0;
		(L_95)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint64_t)L_96);
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::Chi(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Chi_mE851A61F93960C391BC1538B34F7351A281F75A9 (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___A0, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	int32_t V_5 = 0;
	{
		V_5 = 0;
		goto IL_0099;
	}

IL_0008:
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_0 = ___A0;
		int32_t L_1 = V_5;
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_4 = ___A0;
		int32_t L_5 = V_5;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)L_5));
		int64_t L_7 = (int64_t)(L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_8 = ___A0;
		int32_t L_9 = V_5;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)2, (int32_t)L_9));
		int64_t L_11 = (int64_t)(L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int64_t)((int64_t)L_3^(int64_t)((int64_t)((int64_t)((~L_7))&(int64_t)L_11))));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_12 = ___A0;
		int32_t L_13 = V_5;
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)L_13));
		int64_t L_15 = (int64_t)(L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_16 = ___A0;
		int32_t L_17 = V_5;
		int32_t L_18 = ((int32_t)il2cpp_codegen_add((int32_t)2, (int32_t)L_17));
		int64_t L_19 = (int64_t)(L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_20 = ___A0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((int32_t)il2cpp_codegen_add((int32_t)3, (int32_t)L_21));
		int64_t L_23 = (int64_t)(L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		V_1 = ((int64_t)((int64_t)L_15^(int64_t)((int64_t)((int64_t)((~L_19))&(int64_t)L_23))));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_24 = ___A0;
		int32_t L_25 = V_5;
		int32_t L_26 = ((int32_t)il2cpp_codegen_add((int32_t)2, (int32_t)L_25));
		int64_t L_27 = (int64_t)(L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_28 = ___A0;
		int32_t L_29 = V_5;
		int32_t L_30 = ((int32_t)il2cpp_codegen_add((int32_t)3, (int32_t)L_29));
		int64_t L_31 = (int64_t)(L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_32 = ___A0;
		int32_t L_33 = V_5;
		int32_t L_34 = ((int32_t)il2cpp_codegen_add((int32_t)4, (int32_t)L_33));
		int64_t L_35 = (int64_t)(L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		V_2 = ((int64_t)((int64_t)L_27^(int64_t)((int64_t)((int64_t)((~L_31))&(int64_t)L_35))));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_36 = ___A0;
		int32_t L_37 = V_5;
		int32_t L_38 = ((int32_t)il2cpp_codegen_add((int32_t)3, (int32_t)L_37));
		int64_t L_39 = (int64_t)(L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_40 = ___A0;
		int32_t L_41 = V_5;
		int32_t L_42 = ((int32_t)il2cpp_codegen_add((int32_t)4, (int32_t)L_41));
		int64_t L_43 = (int64_t)(L_40)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_42));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_44 = ___A0;
		int32_t L_45 = V_5;
		int32_t L_46 = L_45;
		int64_t L_47 = (int64_t)(L_44)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
		V_3 = ((int64_t)((int64_t)L_39^(int64_t)((int64_t)((int64_t)((~L_43))&(int64_t)L_47))));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_48 = ___A0;
		int32_t L_49 = V_5;
		int32_t L_50 = ((int32_t)il2cpp_codegen_add((int32_t)4, (int32_t)L_49));
		int64_t L_51 = (int64_t)(L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_50));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_52 = ___A0;
		int32_t L_53 = V_5;
		int32_t L_54 = L_53;
		int64_t L_55 = (int64_t)(L_52)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_56 = ___A0;
		int32_t L_57 = V_5;
		int32_t L_58 = ((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)L_57));
		int64_t L_59 = (int64_t)(L_56)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		V_4 = ((int64_t)((int64_t)L_51^(int64_t)((int64_t)((int64_t)((~L_55))&(int64_t)L_59))));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_60 = ___A0;
		int32_t L_61 = V_5;
		uint64_t L_62 = V_0;
		(L_60)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_61), (uint64_t)L_62);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_63 = ___A0;
		int32_t L_64 = V_5;
		uint64_t L_65 = V_1;
		(L_63)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)L_64))), (uint64_t)L_65);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_66 = ___A0;
		int32_t L_67 = V_5;
		uint64_t L_68 = V_2;
		(L_66)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)2, (int32_t)L_67))), (uint64_t)L_68);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_69 = ___A0;
		int32_t L_70 = V_5;
		uint64_t L_71 = V_3;
		(L_69)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)3, (int32_t)L_70))), (uint64_t)L_71);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_72 = ___A0;
		int32_t L_73 = V_5;
		uint64_t L_74 = V_4;
		(L_72)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)4, (int32_t)L_73))), (uint64_t)L_74);
		int32_t L_75 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)5));
	}

IL_0099:
	{
		int32_t L_76 = V_5;
		if ((((int32_t)L_76) < ((int32_t)((int32_t)25))))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::Iota(System.UInt64[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Iota_mC0E2BD41ED95322E9290A49A87919B8906D5C05F (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___A0, int32_t ___indexRound1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_0 = ___A0;
		uint64_t* L_1 = ((L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0)));
		int64_t L_2 = *((int64_t*)L_1);
		IL2CPP_RUNTIME_CLASS_INIT(KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_il2cpp_TypeInfo_var);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_3 = ((KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_StaticFields*)il2cpp_codegen_static_fields_for(KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_il2cpp_TypeInfo_var))->get_KeccakRoundConstants_0();
		int32_t L_4 = ___indexRound1;
		int32_t L_5 = L_4;
		int64_t L_6 = (int64_t)(L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		*((int64_t*)L_1) = (int64_t)((int64_t)((int64_t)L_2^(int64_t)L_6));
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest__cctor_m6E5FE6667126D63B3EA239ABA870CE101C79155E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_0;
		L_0 = KeccakDigest_KeccakInitializeRoundConstants_m8491DBB2B9EBC4B1C37F45FA90F33202DF916652(/*hidden argument*/NULL);
		((KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_StaticFields*)il2cpp_codegen_static_fields_for(KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_il2cpp_TypeInfo_var))->set_KeccakRoundConstants_0(L_0);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1;
		L_1 = KeccakDigest_KeccakInitializeRhoOffsets_mDD5C1F2053F33F28F501E533AB542CD67AF0D9D2(/*hidden argument*/NULL);
		((KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_StaticFields*)il2cpp_codegen_static_fields_for(KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_il2cpp_TypeInfo_var))->set_KeccakRhoOffsets_1(L_1);
		((KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_StaticFields*)il2cpp_codegen_static_fields_for(KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_il2cpp_TypeInfo_var))->set_STATE_LENGTH_2(((int32_t)200));
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
// System.Char Nethereum.Util.NumberFormatting::ParseFormatSpecifier(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar NumberFormatting_ParseFormatSpecifier_m68B4A404F3C210A51B6BFFF4AA12876D420C300A (String_t* ___format0, int32_t* ___digits1, const RuntimeMethod* method)
{
	Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		V_0 = 0;
		String_t* L_0 = ___format0;
		int32_t L_1;
		L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_00db;
		}
	}
	{
		String_t* L_2 = ___format0;
		Il2CppChar L_3;
		L_3 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_2, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		Il2CppChar L_4 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)65)))) > ((uint32_t)((int32_t)25)))))
		{
			goto IL_0029;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)97)))) <= ((uint32_t)((int32_t)25)))))
		{
			goto IL_00db;
		}
	}

IL_0029:
	{
		String_t* L_6 = ___format0;
		int32_t L_7;
		L_7 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_6, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t* L_8 = ___digits1;
		*((int32_t*)L_8) = (int32_t)(-1);
		Il2CppChar L_9 = V_0;
		return L_9;
	}

IL_0037:
	{
		String_t* L_10 = ___format0;
		int32_t L_11;
		L_11 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_10, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_0055;
		}
	}
	{
		String_t* L_12 = ___format0;
		Il2CppChar L_13;
		L_13 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_12, 1, /*hidden argument*/NULL);
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)((int32_t)48)));
		int32_t L_14 = V_3;
		if ((!(((uint32_t)L_14) < ((uint32_t)((int32_t)10)))))
		{
			goto IL_008e;
		}
	}
	{
		int32_t* L_15 = ___digits1;
		int32_t L_16 = V_3;
		*((int32_t*)L_15) = (int32_t)L_16;
		Il2CppChar L_17 = V_0;
		return L_17;
	}

IL_0055:
	{
		String_t* L_18 = ___format0;
		int32_t L_19;
		L_19 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_18, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_19) == ((uint32_t)3))))
		{
			goto IL_008e;
		}
	}
	{
		String_t* L_20 = ___format0;
		Il2CppChar L_21;
		L_21 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_20, 1, /*hidden argument*/NULL);
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)((int32_t)48)));
		String_t* L_22 = ___format0;
		Il2CppChar L_23;
		L_23 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_22, 2, /*hidden argument*/NULL);
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)((int32_t)48)));
		int32_t L_24 = V_4;
		if ((!(((uint32_t)L_24) < ((uint32_t)((int32_t)10)))))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_25 = V_5;
		if ((!(((uint32_t)L_25) < ((uint32_t)((int32_t)10)))))
		{
			goto IL_008e;
		}
	}
	{
		int32_t* L_26 = ___digits1;
		int32_t L_27 = V_4;
		int32_t L_28 = V_5;
		*((int32_t*)L_26) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_27, (int32_t)((int32_t)10))), (int32_t)L_28));
		Il2CppChar L_29 = V_0;
		return L_29;
	}

IL_008e:
	{
		V_1 = 0;
		V_2 = 1;
		goto IL_00a8;
	}

IL_0094:
	{
		int32_t L_30 = V_1;
		String_t* L_31 = ___format0;
		int32_t L_32 = V_2;
		int32_t L_33 = L_32;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		Il2CppChar L_34;
		L_34 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_31, L_33, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_30, (int32_t)((int32_t)10))), (int32_t)L_34)), (int32_t)((int32_t)48)));
	}

IL_00a8:
	{
		int32_t L_35 = V_2;
		String_t* L_36 = ___format0;
		int32_t L_37;
		L_37 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_36, /*hidden argument*/NULL);
		if ((((int32_t)L_35) >= ((int32_t)L_37)))
		{
			goto IL_00c4;
		}
	}
	{
		String_t* L_38 = ___format0;
		int32_t L_39 = V_2;
		Il2CppChar L_40;
		L_40 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_38, L_39, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)((int32_t)48)))) < ((uint32_t)((int32_t)10)))))
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_41 = V_1;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)10))))
		{
			goto IL_0094;
		}
	}

IL_00c4:
	{
		int32_t L_42 = V_2;
		String_t* L_43 = ___format0;
		int32_t L_44;
		L_44 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_43, /*hidden argument*/NULL);
		if ((((int32_t)L_42) == ((int32_t)L_44)))
		{
			goto IL_00d6;
		}
	}
	{
		String_t* L_45 = ___format0;
		int32_t L_46 = V_2;
		Il2CppChar L_47;
		L_47 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_45, L_46, /*hidden argument*/NULL);
		if (L_47)
		{
			goto IL_00db;
		}
	}

IL_00d6:
	{
		int32_t* L_48 = ___digits1;
		int32_t L_49 = V_1;
		*((int32_t*)L_48) = (int32_t)L_49;
		Il2CppChar L_50 = V_0;
		return L_50;
	}

IL_00db:
	{
		int32_t* L_51 = ___digits1;
		*((int32_t*)L_51) = (int32_t)(-1);
		String_t* L_52 = ___format0;
		int32_t L_53;
		L_53 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_52, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_00eb;
		}
	}
	{
		Il2CppChar L_54 = V_0;
		if (!L_54)
		{
			goto IL_00eb;
		}
	}
	{
		return 0;
	}

IL_00eb:
	{
		return ((int32_t)71);
	}
}
// System.Void Nethereum.Util.NumberFormatting::FormatCurrency(System.Text.StringBuilder,System.Boolean,System.Collections.Generic.IList`1<System.Byte>,System.Int32,System.Int32,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatting_FormatCurrency_m2DAF51F2E5AA242A52D2F9FCD4B4B74A1C8A2241 (StringBuilder_t * ___result0, bool ___isNegative1, RuntimeObject* ___digits2, int32_t ___exponent3, int32_t ___maxDigits4, NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___info5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatting_t1FFF8188E1145A1FBC6E1BBFFEC03E8C682C2FDC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	String_t* G_B3_0 = NULL;
	{
		bool L_0 = ___isNegative1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatting_t1FFF8188E1145A1FBC6E1BBFFEC03E8C682C2FDC_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = ((NumberFormatting_t1FFF8188E1145A1FBC6E1BBFFEC03E8C682C2FDC_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatting_t1FFF8188E1145A1FBC6E1BBFFEC03E8C682C2FDC_il2cpp_TypeInfo_var))->get_s_posCurrencyFormats_0();
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_2 = ___info5;
		int32_t L_3;
		L_3 = NumberFormatInfo_get_CurrencyPositivePattern_m237EF7AC03697CEB6B08125F4C905B86162CB21F_inline(L_2, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		G_B3_0 = L_5;
		goto IL_001f;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatting_t1FFF8188E1145A1FBC6E1BBFFEC03E8C682C2FDC_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = ((NumberFormatting_t1FFF8188E1145A1FBC6E1BBFFEC03E8C682C2FDC_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatting_t1FFF8188E1145A1FBC6E1BBFFEC03E8C682C2FDC_il2cpp_TypeInfo_var))->get_s_negCurrencyFormats_1();
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_7 = ___info5;
		int32_t L_8;
		L_8 = NumberFormatInfo_get_CurrencyNegativePattern_m2A7A8A171AE68C3FC64FCEC850162F3247E5C120_inline(L_7, /*hidden argument*/NULL);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		G_B3_0 = L_10;
	}

IL_001f:
	{
		V_0 = G_B3_0;
		V_1 = 0;
		goto IL_008a;
	}

IL_0024:
	{
		String_t* L_11 = V_0;
		int32_t L_12 = V_1;
		Il2CppChar L_13;
		L_13 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_11, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		Il2CppChar L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)35))))
		{
			goto IL_003d;
		}
	}
	{
		Il2CppChar L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)36))))
		{
			goto IL_006e;
		}
	}
	{
		Il2CppChar L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)45))))
		{
			goto IL_005e;
		}
	}
	{
		goto IL_007e;
	}

IL_003d:
	{
		StringBuilder_t * L_17 = ___result0;
		RuntimeObject* L_18 = ___digits2;
		int32_t L_19 = ___exponent3;
		int32_t L_20 = ___maxDigits4;
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_21 = ___info5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_22;
		L_22 = NumberFormatInfo_get_CurrencyGroupSizes_mA8317722234295B56D3021CD6E1716CD06EBFA1E(L_21, /*hidden argument*/NULL);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_23 = ___info5;
		String_t* L_24;
		L_24 = NumberFormatInfo_get_CurrencyDecimalSeparator_mC1E808DCE589B7BFFF713C20F1F7798ABF4EBE55_inline(L_23, /*hidden argument*/NULL);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_25 = ___info5;
		String_t* L_26;
		L_26 = NumberFormatInfo_get_CurrencyGroupSeparator_mD950357ADC6F85D37B9545DE8FE43FFB16AD9B80_inline(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatting_t1FFF8188E1145A1FBC6E1BBFFEC03E8C682C2FDC_il2cpp_TypeInfo_var);
		NumberFormatting_FormatFixed_m3DCB89B4D0761DFDA6A10F092F417B6D429DFB27(L_17, L_18, L_19, L_20, L_22, L_24, L_26, /*hidden argument*/NULL);
		goto IL_0086;
	}

IL_005e:
	{
		StringBuilder_t * L_27 = ___result0;
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_28 = ___info5;
		String_t* L_29;
		L_29 = NumberFormatInfo_get_NegativeSign_mF8AF2CE58CA5411348ABD35A2A0B950830C18F59_inline(L_28, /*hidden argument*/NULL);
		StringBuilder_t * L_30;
		L_30 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_27, L_29, /*hidden argument*/NULL);
		goto IL_0086;
	}

IL_006e:
	{
		StringBuilder_t * L_31 = ___result0;
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_32 = ___info5;
		String_t* L_33;
		L_33 = NumberFormatInfo_get_CurrencySymbol_m294691B5C58A2691C5F859647A6D4200A51BF514_inline(L_32, /*hidden argument*/NULL);
		StringBuilder_t * L_34;
		L_34 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_31, L_33, /*hidden argument*/NULL);
		goto IL_0086;
	}

IL_007e:
	{
		StringBuilder_t * L_35 = ___result0;
		Il2CppChar L_36 = V_2;
		StringBuilder_t * L_37;
		L_37 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_35, L_36, /*hidden argument*/NULL);
	}

IL_0086:
	{
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_008a:
	{
		int32_t L_39 = V_1;
		String_t* L_40 = V_0;
		int32_t L_41;
		L_41 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_40, /*hidden argument*/NULL);
		if ((((int32_t)L_39) < ((int32_t)L_41)))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}
}
// System.Void Nethereum.Util.NumberFormatting::FormatFixed(System.Text.StringBuilder,System.Collections.Generic.IList`1<System.Byte>,System.Int32,System.Int32,System.Int32[],System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatting_FormatFixed_m3DCB89B4D0761DFDA6A10F092F417B6D429DFB27 (StringBuilder_t * ___sb0, RuntimeObject* ___digits1, int32_t ___exponent2, int32_t ___maxFractionalDigits3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___groupDigits4, String_t* ___decimalSeparator5, String_t* ___groupSeparator6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t5AB6E9D20BDB8A993042228A58C871DF8C3BCE87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t15467A9C40BD12CE17BE6FF409B2EF0FDD26B9D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B21_0 = 0;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B21_1 = NULL;
	int32_t G_B20_0 = 0;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B20_1 = NULL;
	int32_t G_B22_0 = 0;
	int32_t G_B22_1 = 0;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B22_2 = NULL;
	StringBuilder_t * G_B36_0 = NULL;
	StringBuilder_t * G_B35_0 = NULL;
	int32_t G_B37_0 = 0;
	StringBuilder_t * G_B37_1 = NULL;
	StringBuilder_t * G_B46_0 = NULL;
	StringBuilder_t * G_B45_0 = NULL;
	int32_t G_B47_0 = 0;
	StringBuilder_t * G_B47_1 = NULL;
	{
		RuntimeObject* L_0 = ___digits1;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Byte>::get_Count() */, ICollection_1_t5AB6E9D20BDB8A993042228A58C871DF8C3BCE87_il2cpp_TypeInfo_var, L_0);
		int32_t L_2 = ___exponent2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2));
		V_1 = 0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_015d;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = ___groupDigits4;
		if (!L_4)
		{
			goto IL_0134;
		}
	}
	{
		V_2 = 0;
		int32_t L_5 = V_0;
		V_3 = L_5;
		V_4 = 0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = ___groupDigits4;
		if (!(((RuntimeArray*)L_6)->max_length))
		{
			goto IL_0078;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = ___groupDigits4;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_10 = L_10;
		goto IL_0066;
	}

IL_002d:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = ___groupDigits4;
		int32_t L_12 = V_2;
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		int32_t L_15 = V_4;
		if (!L_15)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_16 = V_3;
		String_t* L_17 = ___groupSeparator6;
		int32_t L_18;
		L_18 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_17, /*hidden argument*/NULL);
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_18));
		int32_t L_19 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_20 = ___groupDigits4;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))), (int32_t)1)))))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_004e:
	{
		int32_t L_22 = V_10;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_23 = ___groupDigits4;
		int32_t L_24 = V_2;
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)L_26));
		int32_t L_27 = V_10;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_0066;
		}
	}

IL_0060:
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_29 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m81CEEF1FCB5EFBBAA39071F48BCFBC16AED0C915(L_29, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NumberFormatting_FormatFixed_m3DCB89B4D0761DFDA6A10F092F417B6D429DFB27_RuntimeMethod_var)));
	}

IL_0066:
	{
		int32_t L_30 = V_0;
		int32_t L_31 = V_10;
		if ((((int32_t)L_30) > ((int32_t)L_31)))
		{
			goto IL_002d;
		}
	}

IL_006b:
	{
		int32_t L_32 = V_10;
		if (!L_32)
		{
			goto IL_0075;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_33 = ___groupDigits4;
		int32_t L_34 = 0;
		int32_t L_35 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		G_B14_0 = L_35;
		goto IL_0076;
	}

IL_0075:
	{
		G_B14_0 = 0;
	}

IL_0076:
	{
		V_4 = G_B14_0;
	}

IL_0078:
	{
		V_2 = 0;
		V_5 = 0;
		RuntimeObject* L_36 = ___digits1;
		int32_t L_37;
		L_37 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Byte>::get_Count() */, ICollection_1_t5AB6E9D20BDB8A993042228A58C871DF8C3BCE87_il2cpp_TypeInfo_var, L_36);
		V_6 = L_37;
		int32_t L_38 = V_0;
		int32_t L_39 = V_6;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_40 = V_6;
		G_B18_0 = L_40;
		goto IL_008f;
	}

IL_008e:
	{
		int32_t L_41 = V_0;
		G_B18_0 = L_41;
	}

IL_008f:
	{
		V_7 = G_B18_0;
		int32_t L_42 = V_3;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_43 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_42);
		V_8 = L_43;
		int32_t L_44 = V_3;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)1));
		int32_t L_45 = V_0;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)1));
		goto IL_011f;
	}

IL_00a5:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_46 = V_8;
		int32_t L_47 = V_9;
		int32_t L_48 = L_47;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)1));
		int32_t L_49 = V_11;
		int32_t L_50 = V_7;
		G_B20_0 = L_48;
		G_B20_1 = L_46;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			G_B21_0 = L_48;
			G_B21_1 = L_46;
			goto IL_00b8;
		}
	}
	{
		G_B22_0 = ((int32_t)48);
		G_B22_1 = G_B20_0;
		G_B22_2 = G_B20_1;
		goto IL_00c2;
	}

IL_00b8:
	{
		RuntimeObject* L_51 = ___digits1;
		int32_t L_52 = V_1;
		int32_t L_53 = V_11;
		uint8_t L_54;
		L_54 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Byte>::get_Item(System.Int32) */, IList_1_t15467A9C40BD12CE17BE6FF409B2EF0FDD26B9D6_il2cpp_TypeInfo_var, L_51, ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)L_53)));
		G_B22_0 = ((int32_t)(L_54));
		G_B22_1 = G_B21_0;
		G_B22_2 = G_B21_1;
	}

IL_00c2:
	{
		(G_B22_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B22_1), (Il2CppChar)G_B22_0);
		int32_t L_55 = V_4;
		if ((((int32_t)L_55) <= ((int32_t)0)))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_56 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
		int32_t L_57 = V_5;
		int32_t L_58 = V_4;
		if ((!(((uint32_t)L_57) == ((uint32_t)L_58))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_59 = V_11;
		if (!L_59)
		{
			goto IL_0119;
		}
	}
	{
		String_t* L_60 = ___groupSeparator6;
		int32_t L_61;
		L_61 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_60, /*hidden argument*/NULL);
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_61, (int32_t)1));
		goto IL_00fe;
	}

IL_00e5:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_62 = V_8;
		int32_t L_63 = V_9;
		int32_t L_64 = L_63;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_64, (int32_t)1));
		String_t* L_65 = ___groupSeparator6;
		int32_t L_66 = V_12;
		Il2CppChar L_67;
		L_67 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_65, L_66, /*hidden argument*/NULL);
		(L_62)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_64), (Il2CppChar)L_67);
		int32_t L_68 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_68, (int32_t)1));
	}

IL_00fe:
	{
		int32_t L_69 = V_12;
		if ((((int32_t)L_69) >= ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		int32_t L_70 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_71 = ___groupDigits4;
		if ((((int32_t)L_70) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_71)->max_length))), (int32_t)1)))))
		{
			goto IL_0116;
		}
	}
	{
		int32_t L_72 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_73 = ___groupDigits4;
		int32_t L_74 = V_2;
		int32_t L_75 = L_74;
		int32_t L_76 = (L_73)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_75));
		V_4 = L_76;
	}

IL_0116:
	{
		V_5 = 0;
	}

IL_0119:
	{
		int32_t L_77 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_77, (int32_t)1));
	}

IL_011f:
	{
		int32_t L_78 = V_11;
		if ((((int32_t)L_78) >= ((int32_t)0)))
		{
			goto IL_00a5;
		}
	}
	{
		StringBuilder_t * L_79 = ___sb0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_80 = V_8;
		StringBuilder_t * L_81;
		L_81 = StringBuilder_Append_m3BE4C94FB7DDD0AB42515FC321FBD03B81A03A1C(L_79, L_80, /*hidden argument*/NULL);
		int32_t L_82 = V_1;
		int32_t L_83 = V_7;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)L_83));
		goto IL_0166;
	}

IL_0134:
	{
		StringBuilder_t * L_84 = ___sb0;
		int32_t L_85 = V_1;
		RuntimeObject* L_86 = ___digits1;
		int32_t L_87;
		L_87 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Byte>::get_Count() */, ICollection_1_t5AB6E9D20BDB8A993042228A58C871DF8C3BCE87_il2cpp_TypeInfo_var, L_86);
		G_B35_0 = L_84;
		if ((((int32_t)L_85) < ((int32_t)L_87)))
		{
			G_B36_0 = L_84;
			goto IL_0142;
		}
	}
	{
		G_B37_0 = ((int32_t)48);
		G_B37_1 = G_B35_0;
		goto IL_014d;
	}

IL_0142:
	{
		RuntimeObject* L_88 = ___digits1;
		int32_t L_89 = V_1;
		int32_t L_90 = L_89;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1));
		uint8_t L_91;
		L_91 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Byte>::get_Item(System.Int32) */, IList_1_t15467A9C40BD12CE17BE6FF409B2EF0FDD26B9D6_il2cpp_TypeInfo_var, L_88, L_90);
		G_B37_0 = ((int32_t)(L_91));
		G_B37_1 = G_B36_0;
	}

IL_014d:
	{
		StringBuilder_t * L_92;
		L_92 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(G_B37_1, G_B37_0, /*hidden argument*/NULL);
		int32_t L_93 = V_0;
		int32_t L_94 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_93, (int32_t)1));
		V_0 = L_94;
		if ((((int32_t)L_94) > ((int32_t)0)))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0166;
	}

IL_015d:
	{
		StringBuilder_t * L_95 = ___sb0;
		StringBuilder_t * L_96;
		L_96 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_95, ((int32_t)48), /*hidden argument*/NULL);
	}

IL_0166:
	{
		int32_t L_97 = ___maxFractionalDigits3;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_01c5;
		}
	}
	{
		StringBuilder_t * L_98 = ___sb0;
		String_t* L_99 = ___decimalSeparator5;
		StringBuilder_t * L_100;
		L_100 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_98, L_99, /*hidden argument*/NULL);
		int32_t L_101 = V_0;
		if ((((int32_t)L_101) >= ((int32_t)0)))
		{
			goto IL_01c1;
		}
	}
	{
		int32_t L_102 = ___maxFractionalDigits3;
		if ((((int32_t)L_102) <= ((int32_t)0)))
		{
			goto IL_01c1;
		}
	}
	{
		int32_t L_103 = V_0;
		int32_t L_104 = ___maxFractionalDigits3;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_105;
		L_105 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(((-L_103)), L_104, /*hidden argument*/NULL);
		V_13 = L_105;
		StringBuilder_t * L_106 = ___sb0;
		int32_t L_107 = V_13;
		StringBuilder_t * L_108;
		L_108 = StringBuilder_Append_mB04B8FAD8E322DF8E69F3F85BCE4A8D041AE8BFB(L_106, ((int32_t)48), L_107, /*hidden argument*/NULL);
		int32_t L_109 = V_0;
		int32_t L_110 = V_13;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)L_110));
		int32_t L_111 = ___maxFractionalDigits3;
		int32_t L_112 = V_13;
		___maxFractionalDigits3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_111, (int32_t)L_112));
		goto IL_01c1;
	}

IL_019d:
	{
		StringBuilder_t * L_113 = ___sb0;
		int32_t L_114 = V_1;
		RuntimeObject* L_115 = ___digits1;
		int32_t L_116;
		L_116 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Byte>::get_Count() */, ICollection_1_t5AB6E9D20BDB8A993042228A58C871DF8C3BCE87_il2cpp_TypeInfo_var, L_115);
		G_B45_0 = L_113;
		if ((((int32_t)L_114) < ((int32_t)L_116)))
		{
			G_B46_0 = L_113;
			goto IL_01ab;
		}
	}
	{
		G_B47_0 = ((int32_t)48);
		G_B47_1 = G_B45_0;
		goto IL_01b6;
	}

IL_01ab:
	{
		RuntimeObject* L_117 = ___digits1;
		int32_t L_118 = V_1;
		int32_t L_119 = L_118;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_119, (int32_t)1));
		uint8_t L_120;
		L_120 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Byte>::get_Item(System.Int32) */, IList_1_t15467A9C40BD12CE17BE6FF409B2EF0FDD26B9D6_il2cpp_TypeInfo_var, L_117, L_119);
		G_B47_0 = ((int32_t)(L_120));
		G_B47_1 = G_B46_0;
	}

IL_01b6:
	{
		StringBuilder_t * L_121;
		L_121 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(G_B47_1, G_B47_0, /*hidden argument*/NULL);
		int32_t L_122 = ___maxFractionalDigits3;
		___maxFractionalDigits3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_122, (int32_t)1));
	}

IL_01c1:
	{
		int32_t L_123 = ___maxFractionalDigits3;
		if ((((int32_t)L_123) > ((int32_t)0)))
		{
			goto IL_019d;
		}
	}

IL_01c5:
	{
		return;
	}
}
// System.Void Nethereum.Util.NumberFormatting::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatting__cctor_m1F49CBA7A03FC6E8209837F75A3B91E38BC0A2AB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatting_t1FFF8188E1145A1FBC6E1BBFFEC03E8C682C2FDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1649B6362D7BFE5B47AD5B0E3FF1C23199A234E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2560015662CF4CE1FBB0C239EE33C0A6BD267C34);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral323B50F239A0CEA841D1CDB6FD827C73F3DA7D58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C7A831A0474AE58A1A511C0AE679EA6ACAF323B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56C9B652878395853110609B8408AB9C094B096A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral586421FA97056FDB29C92DF11FC45E50039AF58C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6926C85E0B22B5E154849BA94F95B911D0F467AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B6E99AB68D2834E2BA881EA585508AE3BB8972B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71A4D286D674B387825473A6BF68FA0177EAEC37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7405068459969E65A509A575D3072180AB440CC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75024B19E3B0D929FB55D9F58FB9F2BD92238C9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACEB01644E7A4BCEFA0B7FD13C917DA74C936C31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4BDB973AE821DEA70F0495195EF17C3A498E945);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4C4969CA68A212C57B6FC1FBAE5AEBACB547E07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF15E6AB986C6E1A6B9D665510A803EB2245E941);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF5B5845107C1302EDC696A0C7AAAC4FA03151F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD25163422D668F498B77BBE8BE47AAF95218DD82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC400987E5EE16841C02DE14AE43EB578A7FEAC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD1E96489DC4F60E6AB0135A5F5CDE79341D8BF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8E3475A2DDD8A338B5687E45B80510D26142DC9);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteralF8E3475A2DDD8A338B5687E45B80510D26142DC9);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF8E3475A2DDD8A338B5687E45B80510D26142DC9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		ArrayElementTypeCheck (L_2, _stringLiteral7405068459969E65A509A575D3072180AB440CC4);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral7405068459969E65A509A575D3072180AB440CC4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		ArrayElementTypeCheck (L_3, _stringLiteral3C7A831A0474AE58A1A511C0AE679EA6ACAF323B);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3C7A831A0474AE58A1A511C0AE679EA6ACAF323B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		ArrayElementTypeCheck (L_4, _stringLiteralD25163422D668F498B77BBE8BE47AAF95218DD82);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralD25163422D668F498B77BBE8BE47AAF95218DD82);
		((NumberFormatting_t1FFF8188E1145A1FBC6E1BBFFEC03E8C682C2FDC_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatting_t1FFF8188E1145A1FBC6E1BBFFEC03E8C682C2FDC_il2cpp_TypeInfo_var))->set_s_posCurrencyFormats_0(L_4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		ArrayElementTypeCheck (L_6, _stringLiteralC4C4969CA68A212C57B6FC1FBAE5AEBACB547E07);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC4C4969CA68A212C57B6FC1FBAE5AEBACB547E07);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		ArrayElementTypeCheck (L_7, _stringLiteral2560015662CF4CE1FBB0C239EE33C0A6BD267C34);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2560015662CF4CE1FBB0C239EE33C0A6BD267C34);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		ArrayElementTypeCheck (L_8, _stringLiteralDC400987E5EE16841C02DE14AE43EB578A7FEAC0);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDC400987E5EE16841C02DE14AE43EB578A7FEAC0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		ArrayElementTypeCheck (L_9, _stringLiteral71A4D286D674B387825473A6BF68FA0177EAEC37);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral71A4D286D674B387825473A6BF68FA0177EAEC37);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		ArrayElementTypeCheck (L_10, _stringLiteral323B50F239A0CEA841D1CDB6FD827C73F3DA7D58);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral323B50F239A0CEA841D1CDB6FD827C73F3DA7D58);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		ArrayElementTypeCheck (L_11, _stringLiteralACEB01644E7A4BCEFA0B7FD13C917DA74C936C31);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralACEB01644E7A4BCEFA0B7FD13C917DA74C936C31);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		ArrayElementTypeCheck (L_12, _stringLiteral586421FA97056FDB29C92DF11FC45E50039AF58C);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral586421FA97056FDB29C92DF11FC45E50039AF58C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		ArrayElementTypeCheck (L_13, _stringLiteral6926C85E0B22B5E154849BA94F95B911D0F467AB);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral6926C85E0B22B5E154849BA94F95B911D0F467AB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13;
		ArrayElementTypeCheck (L_14, _stringLiteralC4BDB973AE821DEA70F0495195EF17C3A498E945);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralC4BDB973AE821DEA70F0495195EF17C3A498E945);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_14;
		ArrayElementTypeCheck (L_15, _stringLiteralCF15E6AB986C6E1A6B9D665510A803EB2245E941);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralCF15E6AB986C6E1A6B9D665510A803EB2245E941);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_15;
		ArrayElementTypeCheck (L_16, _stringLiteralDD1E96489DC4F60E6AB0135A5F5CDE79341D8BF7);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralDD1E96489DC4F60E6AB0135A5F5CDE79341D8BF7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_16;
		ArrayElementTypeCheck (L_17, _stringLiteral56C9B652878395853110609B8408AB9C094B096A);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral56C9B652878395853110609B8408AB9C094B096A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_17;
		ArrayElementTypeCheck (L_18, _stringLiteral75024B19E3B0D929FB55D9F58FB9F2BD92238C9A);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral75024B19E3B0D929FB55D9F58FB9F2BD92238C9A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = L_18;
		ArrayElementTypeCheck (L_19, _stringLiteral1649B6362D7BFE5B47AD5B0E3FF1C23199A234E7);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral1649B6362D7BFE5B47AD5B0E3FF1C23199A234E7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = L_19;
		ArrayElementTypeCheck (L_20, _stringLiteral6B6E99AB68D2834E2BA881EA585508AE3BB8972B);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral6B6E99AB68D2834E2BA881EA585508AE3BB8972B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_20;
		ArrayElementTypeCheck (L_21, _stringLiteralCF5B5845107C1302EDC696A0C7AAAC4FA03151F4);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteralCF5B5845107C1302EDC696A0C7AAAC4FA03151F4);
		((NumberFormatting_t1FFF8188E1145A1FBC6E1BBFFEC03E8C682C2FDC_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatting_t1FFF8188E1145A1FBC6E1BBFFEC03E8C682C2FDC_il2cpp_TypeInfo_var))->set_s_negCurrencyFormats_1(L_21);
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
// System.Void Nethereum.Util.Keccak.Pack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack__ctor_mE46FD6818FFA1EBDDA5BD69E3CBEEF51FACE3EDA (Pack_tAE7EFB312364DB2DC46CEAF35B6AF3D2720AAA20 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt16_To_BE(System.UInt16,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt16_To_BE_m26643CCE242D63E35AF613E46458CC5D792BF541 (uint16_t ___n0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bs1;
		uint16_t L_1 = ___n0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1>>(int32_t)8)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___bs1;
		uint16_t L_3 = ___n0;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)((uint8_t)L_3)));
		return;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt16_To_BE(System.UInt16,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt16_To_BE_m580405ECD5DA53F1013A13332970EA3AA002D691 (uint16_t ___n0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs1, int32_t ___off2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bs1;
		int32_t L_1 = ___off2;
		uint16_t L_2 = ___n0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_2>>(int32_t)8)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bs1;
		int32_t L_4 = ___off2;
		uint16_t L_5 = ___n0;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))), (uint8_t)((int32_t)((uint8_t)L_5)));
		return;
	}
}
// System.UInt16 Nethereum.Util.Keccak.Pack::BE_To_UInt16(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Pack_BE_To_UInt16_mE82D645DB46AA609BF5C368532D47D916F4177CF (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bs0;
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bs0;
		int32_t L_4 = 1;
		uint8_t L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2<<(int32_t)8))|(int32_t)L_5))));
	}
}
// System.UInt16 Nethereum.Util.Keccak.Pack::BE_To_UInt16(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Pack_BE_To_UInt16_m3D1FA9584659D54F21A106DE1912BFDDAD5CA5B9 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs0, int32_t ___off1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bs0;
		int32_t L_1 = ___off1;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bs0;
		int32_t L_5 = ___off1;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		return (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3<<(int32_t)8))|(int32_t)L_7))));
	}
}
// System.Byte[] Nethereum.Util.Keccak.Pack::UInt32_To_BE(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Pack_UInt32_To_BE_mAC61B0CFB69D61D81EC94728E88CBAA51C101B7C (uint32_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		uint32_t L_1 = ___n0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = V_0;
		Pack_UInt32_To_BE_mFC415439998222C076A4CA8B19E602C79C37F38C(L_1, L_2, 0, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		return L_3;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt32_To_BE(System.UInt32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_BE_m8CCF69ADE05B4558504E84D0F3A8A4BCAD64BD2C (uint32_t ___n0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bs1;
		uint32_t L_1 = ___n0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_1>>((int32_t)24))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___bs1;
		uint32_t L_3 = ___n0;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_3>>((int32_t)16))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bs1;
		uint32_t L_5 = ___n0;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_5>>8)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___bs1;
		uint32_t L_7 = ___n0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)((uint8_t)L_7)));
		return;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt32_To_BE(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_BE_mFC415439998222C076A4CA8B19E602C79C37F38C (uint32_t ___n0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs1, int32_t ___off2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bs1;
		int32_t L_1 = ___off2;
		uint32_t L_2 = ___n0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_2>>((int32_t)24))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bs1;
		int32_t L_4 = ___off2;
		uint32_t L_5 = ___n0;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_5>>((int32_t)16))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___bs1;
		int32_t L_7 = ___off2;
		uint32_t L_8 = ___n0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)2))), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_8>>8)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___bs1;
		int32_t L_10 = ___off2;
		uint32_t L_11 = ___n0;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)3))), (uint8_t)((int32_t)((uint8_t)L_11)));
		return;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Pack::UInt32_To_BE(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Pack_UInt32_To_BE_mEEBD6C189525B9108C24CA01D128333A68FEE19A (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___ns0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = ___ns0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))));
		V_0 = L_1;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_2 = ___ns0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		Pack_UInt32_To_BE_m40B887C92188276A985C20341144CA80BB9399DD(L_2, L_3, 0, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		return L_4;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt32_To_BE(System.UInt32[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_BE_m40B887C92188276A985C20341144CA80BB9399DD (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___ns0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs1, int32_t ___off2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0017;
	}

IL_0004:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = ___ns0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bs1;
		int32_t L_5 = ___off2;
		Pack_UInt32_To_BE_mFC415439998222C076A4CA8B19E602C79C37F38C(L_3, L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = ___off2;
		___off2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)4));
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0017:
	{
		int32_t L_8 = V_0;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_9 = ___ns0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.UInt32 Nethereum.Util.Keccak.Pack::BE_To_UInt32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Pack_BE_To_UInt32_m993E75BEBF716C1949ADCA7ED97A229AB62C3E0F (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bs0;
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bs0;
		int32_t L_4 = 1;
		uint8_t L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___bs0;
		int32_t L_7 = 2;
		uint8_t L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___bs0;
		int32_t L_10 = 3;
		uint8_t L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_5<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_8<<(int32_t)8))))|(int32_t)L_11));
	}
}
// System.UInt32 Nethereum.Util.Keccak.Pack::BE_To_UInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Pack_BE_To_UInt32_mCDBE10390B6E13A704630557046B0ABC4C49E599 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs0, int32_t ___off1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bs0;
		int32_t L_1 = ___off1;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bs0;
		int32_t L_5 = ___off1;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ___bs0;
		int32_t L_9 = ___off1;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)2));
		uint8_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___bs0;
		int32_t L_13 = ___off1;
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)3));
		uint8_t L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_7<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_11<<(int32_t)8))))|(int32_t)L_15));
	}
}
// System.Void Nethereum.Util.Keccak.Pack::BE_To_UInt32(System.Byte[],System.Int32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_BE_To_UInt32_m3F946B75B1CBC8730FDC5A67896E6E5B35D7459F (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs0, int32_t ___off1, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___ns2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0017;
	}

IL_0004:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = ___ns2;
		int32_t L_1 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___bs0;
		int32_t L_3 = ___off1;
		uint32_t L_4;
		L_4 = Pack_BE_To_UInt32_mCDBE10390B6E13A704630557046B0ABC4C49E599(L_2, L_3, /*hidden argument*/NULL);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)L_4);
		int32_t L_5 = ___off1;
		___off1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)4));
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0017:
	{
		int32_t L_7 = V_0;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_8 = ___ns2;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Pack::UInt64_To_BE(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Pack_UInt64_To_BE_m0B3896CF0446F2BFC4B2EA04439D07282BDD398D (uint64_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_0;
		uint64_t L_1 = ___n0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = V_0;
		Pack_UInt64_To_BE_mCF67BA117549BDD3719269D15F18838B838332DB(L_1, L_2, 0, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		return L_3;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt64_To_BE(System.UInt64,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_BE_m97A5BB8759E7CE35556A670BEAC809E5DD215877 (uint64_t ___n0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs1, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___n0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bs1;
		Pack_UInt32_To_BE_m8CCF69ADE05B4558504E84D0F3A8A4BCAD64BD2C(((int32_t)((uint32_t)((int64_t)((uint64_t)L_0>>((int32_t)32))))), L_1, /*hidden argument*/NULL);
		uint64_t L_2 = ___n0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bs1;
		Pack_UInt32_To_BE_mFC415439998222C076A4CA8B19E602C79C37F38C(((int32_t)((uint32_t)L_2)), L_3, 4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt64_To_BE(System.UInt64,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_BE_mCF67BA117549BDD3719269D15F18838B838332DB (uint64_t ___n0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs1, int32_t ___off2, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___n0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bs1;
		int32_t L_2 = ___off2;
		Pack_UInt32_To_BE_mFC415439998222C076A4CA8B19E602C79C37F38C(((int32_t)((uint32_t)((int64_t)((uint64_t)L_0>>((int32_t)32))))), L_1, L_2, /*hidden argument*/NULL);
		uint64_t L_3 = ___n0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bs1;
		int32_t L_5 = ___off2;
		Pack_UInt32_To_BE_mFC415439998222C076A4CA8B19E602C79C37F38C(((int32_t)((uint32_t)L_3)), L_4, ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)4)), /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Pack::UInt64_To_BE(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Pack_UInt64_To_BE_m6A730334F77E6C6B7F561C00FA69C1FC9783DB87 (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___ns0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_0 = ___ns0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)8, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))));
		V_0 = L_1;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_2 = ___ns0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		Pack_UInt64_To_BE_mEE7096773486FE6B1DC6C2A8F186A09600491BB0(L_2, L_3, 0, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		return L_4;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt64_To_BE(System.UInt64[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_BE_mEE7096773486FE6B1DC6C2A8F186A09600491BB0 (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___ns0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs1, int32_t ___off2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0017;
	}

IL_0004:
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_0 = ___ns0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bs1;
		int32_t L_5 = ___off2;
		Pack_UInt64_To_BE_mCF67BA117549BDD3719269D15F18838B838332DB(L_3, L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = ___off2;
		___off2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)8));
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0017:
	{
		int32_t L_8 = V_0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_9 = ___ns0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.UInt64 Nethereum.Util.Keccak.Pack::BE_To_UInt64(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Pack_BE_To_UInt64_m7A568F2BFBFA34BD2BD083DC06E8BC3F8EF52454 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bs0;
		uint32_t L_1;
		L_1 = Pack_BE_To_UInt32_m993E75BEBF716C1949ADCA7ED97A229AB62C3E0F(L_0, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___bs0;
		uint32_t L_3;
		L_3 = Pack_BE_To_UInt32_mCDBE10390B6E13A704630557046B0ABC4C49E599(L_2, 4, /*hidden argument*/NULL);
		V_0 = L_3;
		uint32_t L_4 = V_0;
		return ((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_1))<<(int32_t)((int32_t)32)))|(int64_t)((int64_t)((uint64_t)L_4))));
	}
}
// System.UInt64 Nethereum.Util.Keccak.Pack::BE_To_UInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Pack_BE_To_UInt64_m5698FC806315DA964B2F914F3A269C984481BCA8 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs0, int32_t ___off1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bs0;
		int32_t L_1 = ___off1;
		uint32_t L_2;
		L_2 = Pack_BE_To_UInt32_mCDBE10390B6E13A704630557046B0ABC4C49E599(L_0, L_1, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bs0;
		int32_t L_4 = ___off1;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_mCDBE10390B6E13A704630557046B0ABC4C49E599(L_3, ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)4)), /*hidden argument*/NULL);
		V_0 = L_5;
		uint32_t L_6 = V_0;
		return ((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_2))<<(int32_t)((int32_t)32)))|(int64_t)((int64_t)((uint64_t)L_6))));
	}
}
// System.Void Nethereum.Util.Keccak.Pack::BE_To_UInt64(System.Byte[],System.Int32,System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_BE_To_UInt64_m4C64858EEA13F5539EAFAE6DF9FE31C85B7BB4C0 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs0, int32_t ___off1, UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___ns2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0017;
	}

IL_0004:
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_0 = ___ns2;
		int32_t L_1 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___bs0;
		int32_t L_3 = ___off1;
		uint64_t L_4;
		L_4 = Pack_BE_To_UInt64_m5698FC806315DA964B2F914F3A269C984481BCA8(L_2, L_3, /*hidden argument*/NULL);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint64_t)L_4);
		int32_t L_5 = ___off1;
		___off1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)8));
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0017:
	{
		int32_t L_7 = V_0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_8 = ___ns2;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt16_To_LE(System.UInt16,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt16_To_LE_mD5526D10AC260DEC9B984A8F21CDD46EF3AB0411 (uint16_t ___n0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bs1;
		uint16_t L_1 = ___n0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)((uint8_t)L_1)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___bs1;
		uint16_t L_3 = ___n0;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_3>>(int32_t)8)))));
		return;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt16_To_LE(System.UInt16,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt16_To_LE_m824D26CA623041B35520D792DA1D16DF7D442720 (uint16_t ___n0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs1, int32_t ___off2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bs1;
		int32_t L_1 = ___off2;
		uint16_t L_2 = ___n0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)((uint8_t)L_2)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bs1;
		int32_t L_4 = ___off2;
		uint16_t L_5 = ___n0;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_5>>(int32_t)8)))));
		return;
	}
}
// System.UInt16 Nethereum.Util.Keccak.Pack::LE_To_UInt16(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Pack_LE_To_UInt16_m818755FDDAE75D3856302D1556419B460155AC6E (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bs0;
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bs0;
		int32_t L_4 = 1;
		uint8_t L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_2|(int32_t)((int32_t)((int32_t)L_5<<(int32_t)8))))));
	}
}
// System.UInt16 Nethereum.Util.Keccak.Pack::LE_To_UInt16(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Pack_LE_To_UInt16_m3E9B4EFDBB587B2A1CE492C4E4382BBFA3EF80F0 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs0, int32_t ___off1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bs0;
		int32_t L_1 = ___off1;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bs0;
		int32_t L_5 = ___off1;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		return (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_3|(int32_t)((int32_t)((int32_t)L_7<<(int32_t)8))))));
	}
}
// System.Byte[] Nethereum.Util.Keccak.Pack::UInt32_To_LE(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Pack_UInt32_To_LE_mE0F32857EB29DE211BAC4055D868B54C6727AEFB (uint32_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		uint32_t L_1 = ___n0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = V_0;
		Pack_UInt32_To_LE_m024D3C8C39CA3B9CB04A7D92074D30E55869393D(L_1, L_2, 0, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		return L_3;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt32_To_LE(System.UInt32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_LE_mDAC759B7627BB14B081EFBE78E20894CA0643E8D (uint32_t ___n0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bs1;
		uint32_t L_1 = ___n0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)((uint8_t)L_1)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___bs1;
		uint32_t L_3 = ___n0;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_3>>8)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bs1;
		uint32_t L_5 = ___n0;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_5>>((int32_t)16))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___bs1;
		uint32_t L_7 = ___n0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_7>>((int32_t)24))))));
		return;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt32_To_LE(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_LE_m024D3C8C39CA3B9CB04A7D92074D30E55869393D (uint32_t ___n0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs1, int32_t ___off2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bs1;
		int32_t L_1 = ___off2;
		uint32_t L_2 = ___n0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)((uint8_t)L_2)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bs1;
		int32_t L_4 = ___off2;
		uint32_t L_5 = ___n0;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_5>>8)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___bs1;
		int32_t L_7 = ___off2;
		uint32_t L_8 = ___n0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)2))), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_8>>((int32_t)16))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___bs1;
		int32_t L_10 = ___off2;
		uint32_t L_11 = ___n0;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)3))), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_11>>((int32_t)24))))));
		return;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Pack::UInt32_To_LE(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Pack_UInt32_To_LE_m1AEB2FE3B53AD9A9BDA4E525B80AC107DDFD95C7 (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___ns0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = ___ns0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))));
		V_0 = L_1;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_2 = ___ns0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		Pack_UInt32_To_LE_mDE59E8920BA1DC43280E3D9109E7CCD39AA00D4F(L_2, L_3, 0, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		return L_4;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt32_To_LE(System.UInt32[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_LE_mDE59E8920BA1DC43280E3D9109E7CCD39AA00D4F (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___ns0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs1, int32_t ___off2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0017;
	}

IL_0004:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = ___ns0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bs1;
		int32_t L_5 = ___off2;
		Pack_UInt32_To_LE_m024D3C8C39CA3B9CB04A7D92074D30E55869393D(L_3, L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = ___off2;
		___off2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)4));
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0017:
	{
		int32_t L_8 = V_0;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_9 = ___ns0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.UInt32 Nethereum.Util.Keccak.Pack::LE_To_UInt32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Pack_LE_To_UInt32_m30DF1D981AA9A6CD04BB7F386123BBB9A8443C33 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bs0;
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bs0;
		int32_t L_4 = 1;
		uint8_t L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___bs0;
		int32_t L_7 = 2;
		uint8_t L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___bs0;
		int32_t L_10 = 3;
		uint8_t L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2|(int32_t)((int32_t)((int32_t)L_5<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)L_8<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_11<<(int32_t)((int32_t)24)))));
	}
}
// System.UInt32 Nethereum.Util.Keccak.Pack::LE_To_UInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Pack_LE_To_UInt32_m6AB2E4496F35046FC6D776227173710B8A07DC14 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs0, int32_t ___off1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bs0;
		int32_t L_1 = ___off1;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bs0;
		int32_t L_5 = ___off1;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ___bs0;
		int32_t L_9 = ___off1;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)2));
		uint8_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___bs0;
		int32_t L_13 = ___off1;
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)3));
		uint8_t L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3|(int32_t)((int32_t)((int32_t)L_7<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)L_11<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_15<<(int32_t)((int32_t)24)))));
	}
}
// System.Void Nethereum.Util.Keccak.Pack::LE_To_UInt32(System.Byte[],System.Int32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_LE_To_UInt32_m5A8E3395F18A2C997ECC848DC10F32F845D0349F (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs0, int32_t ___off1, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___ns2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0017;
	}

IL_0004:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = ___ns2;
		int32_t L_1 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___bs0;
		int32_t L_3 = ___off1;
		uint32_t L_4;
		L_4 = Pack_LE_To_UInt32_m6AB2E4496F35046FC6D776227173710B8A07DC14(L_2, L_3, /*hidden argument*/NULL);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)L_4);
		int32_t L_5 = ___off1;
		___off1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)4));
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0017:
	{
		int32_t L_7 = V_0;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_8 = ___ns2;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::LE_To_UInt32(System.Byte[],System.Int32,System.UInt32[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_LE_To_UInt32_mE0BE336A98EEA4C13B528BF720E4EE7AEF3766E7 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs0, int32_t ___bOff1, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___ns2, int32_t ___nOff3, int32_t ___count4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = ___ns2;
		int32_t L_1 = ___nOff3;
		int32_t L_2 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bs0;
		int32_t L_4 = ___bOff1;
		uint32_t L_5;
		L_5 = Pack_LE_To_UInt32_m6AB2E4496F35046FC6D776227173710B8A07DC14(L_3, L_4, /*hidden argument*/NULL);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2))), (uint32_t)L_5);
		int32_t L_6 = ___bOff1;
		___bOff1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)4));
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0019:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = ___count4;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.UInt32[] Nethereum.Util.Keccak.Pack::LE_To_UInt32(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* Pack_LE_To_UInt32_m12775C910DE185D0A2802999B36931321E2A2197 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs0, int32_t ___off1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___count2;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_001e;
	}

IL_000b:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_2 = V_0;
		int32_t L_3 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bs0;
		int32_t L_5 = ___off1;
		uint32_t L_6;
		L_6 = Pack_LE_To_UInt32_m6AB2E4496F35046FC6D776227173710B8A07DC14(L_4, L_5, /*hidden argument*/NULL);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (uint32_t)L_6);
		int32_t L_7 = ___off1;
		___off1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)4));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_001e:
	{
		int32_t L_9 = V_1;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_11 = V_0;
		return L_11;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Pack::UInt64_To_LE(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Pack_UInt64_To_LE_m8B5F5ED9E0B5C69C9466B2E96B506435A9771E10 (uint64_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_0;
		uint64_t L_1 = ___n0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = V_0;
		Pack_UInt64_To_LE_m4201357C4C82AA415DF18F6EAEE5F026B8471C9E(L_1, L_2, 0, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		return L_3;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt64_To_LE(System.UInt64,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_LE_m191FF0574582C28E9907D12E0BB35628CB7078A2 (uint64_t ___n0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs1, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___n0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bs1;
		Pack_UInt32_To_LE_mDAC759B7627BB14B081EFBE78E20894CA0643E8D(((int32_t)((uint32_t)L_0)), L_1, /*hidden argument*/NULL);
		uint64_t L_2 = ___n0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bs1;
		Pack_UInt32_To_LE_m024D3C8C39CA3B9CB04A7D92074D30E55869393D(((int32_t)((uint32_t)((int64_t)((uint64_t)L_2>>((int32_t)32))))), L_3, 4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt64_To_LE(System.UInt64,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_LE_m4201357C4C82AA415DF18F6EAEE5F026B8471C9E (uint64_t ___n0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs1, int32_t ___off2, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___n0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bs1;
		int32_t L_2 = ___off2;
		Pack_UInt32_To_LE_m024D3C8C39CA3B9CB04A7D92074D30E55869393D(((int32_t)((uint32_t)L_0)), L_1, L_2, /*hidden argument*/NULL);
		uint64_t L_3 = ___n0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bs1;
		int32_t L_5 = ___off2;
		Pack_UInt32_To_LE_m024D3C8C39CA3B9CB04A7D92074D30E55869393D(((int32_t)((uint32_t)((int64_t)((uint64_t)L_3>>((int32_t)32))))), L_4, ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)4)), /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Pack::UInt64_To_LE(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Pack_UInt64_To_LE_mF2F85D2BBF76EF3EF7A300C297C6A00AFECC4246 (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___ns0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_0 = ___ns0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)8, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))));
		V_0 = L_1;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_2 = ___ns0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		Pack_UInt64_To_LE_m3F9EE2EE45CFB53DA3AD1C0F610B4F42C6D55EE1(L_2, L_3, 0, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		return L_4;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt64_To_LE(System.UInt64[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_LE_m3F9EE2EE45CFB53DA3AD1C0F610B4F42C6D55EE1 (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___ns0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs1, int32_t ___off2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0017;
	}

IL_0004:
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_0 = ___ns0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bs1;
		int32_t L_5 = ___off2;
		Pack_UInt64_To_LE_m4201357C4C82AA415DF18F6EAEE5F026B8471C9E(L_3, L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = ___off2;
		___off2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)8));
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0017:
	{
		int32_t L_8 = V_0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_9 = ___ns0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt64_To_LE(System.UInt64[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_LE_mB8E61033137FB4A42FC286330DDE990B4334C6BF (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___ns0, int32_t ___nsOff1, int32_t ___nsLen2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs3, int32_t ___bsOff4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001b;
	}

IL_0004:
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_0 = ___ns0;
		int32_t L_1 = ___nsOff1;
		int32_t L_2 = V_0;
		int32_t L_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2));
		int64_t L_4 = (int64_t)(L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___bs3;
		int32_t L_6 = ___bsOff4;
		Pack_UInt64_To_LE_m4201357C4C82AA415DF18F6EAEE5F026B8471C9E(L_4, L_5, L_6, /*hidden argument*/NULL);
		int32_t L_7 = ___bsOff4;
		___bsOff4 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)8));
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_001b:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ___nsLen2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.UInt64 Nethereum.Util.Keccak.Pack::LE_To_UInt64(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Pack_LE_To_UInt64_m07D55C15D0CACD6DAE40666E0F58260A146E7055 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bs0;
		uint32_t L_1;
		L_1 = Pack_LE_To_UInt32_m30DF1D981AA9A6CD04BB7F386123BBB9A8443C33(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___bs0;
		uint32_t L_3;
		L_3 = Pack_LE_To_UInt32_m6AB2E4496F35046FC6D776227173710B8A07DC14(L_2, 4, /*hidden argument*/NULL);
		uint32_t L_4 = V_0;
		return ((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_3))<<(int32_t)((int32_t)32)))|(int64_t)((int64_t)((uint64_t)L_4))));
	}
}
// System.UInt64 Nethereum.Util.Keccak.Pack::LE_To_UInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Pack_LE_To_UInt64_mA4BDB2CA15FF07D3D307233ABC42FA88BE2E5604 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs0, int32_t ___off1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bs0;
		int32_t L_1 = ___off1;
		uint32_t L_2;
		L_2 = Pack_LE_To_UInt32_m6AB2E4496F35046FC6D776227173710B8A07DC14(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bs0;
		int32_t L_4 = ___off1;
		uint32_t L_5;
		L_5 = Pack_LE_To_UInt32_m6AB2E4496F35046FC6D776227173710B8A07DC14(L_3, ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)4)), /*hidden argument*/NULL);
		uint32_t L_6 = V_0;
		return ((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_5))<<(int32_t)((int32_t)32)))|(int64_t)((int64_t)((uint64_t)L_6))));
	}
}
// System.Void Nethereum.Util.Keccak.Pack::LE_To_UInt64(System.Byte[],System.Int32,System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_LE_To_UInt64_mF01F83F14662E9662F2068A3FAC7B4416CE1A79F (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs0, int32_t ___off1, UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___ns2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0017;
	}

IL_0004:
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_0 = ___ns2;
		int32_t L_1 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___bs0;
		int32_t L_3 = ___off1;
		uint64_t L_4;
		L_4 = Pack_LE_To_UInt64_mA4BDB2CA15FF07D3D307233ABC42FA88BE2E5604(L_2, L_3, /*hidden argument*/NULL);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint64_t)L_4);
		int32_t L_5 = ___off1;
		___off1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)8));
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0017:
	{
		int32_t L_7 = V_0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_8 = ___ns2;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::LE_To_UInt64(System.Byte[],System.Int32,System.UInt64[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_LE_To_UInt64_mB140455BF96A10A53BB78C9F476E669E000BEC94 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bs0, int32_t ___bsOff1, UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___ns2, int32_t ___nsOff3, int32_t ___nsLen4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_0 = ___ns2;
		int32_t L_1 = ___nsOff3;
		int32_t L_2 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bs0;
		int32_t L_4 = ___bsOff1;
		uint64_t L_5;
		L_5 = Pack_LE_To_UInt64_mA4BDB2CA15FF07D3D307233ABC42FA88BE2E5604(L_3, L_4, /*hidden argument*/NULL);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2))), (uint64_t)L_5);
		int32_t L_6 = ___bsOff1;
		___bsOff1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)8));
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0019:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = ___nsLen4;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Nethereum.Util.Sha3Keccack Nethereum.Util.Sha3Keccack::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0 * Sha3Keccack_get_Current_mAF9742A42965F6E8E60F978A35A1E956BC83DB52 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0_il2cpp_TypeInfo_var);
		Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0 * L_0 = ((Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0_StaticFields*)il2cpp_codegen_static_fields_for(Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0_il2cpp_TypeInfo_var))->get_U3CCurrentU3Ek__BackingField_0();
		return L_0;
	}
}
// System.String Nethereum.Util.Sha3Keccack::CalculateHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Sha3Keccack_CalculateHash_m56955B8211F6C057C85699C40B8CC6513AFE5401 (Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		String_t* L_1 = ___value0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = Sha3Keccack_CalculateHash_mFCF932E75B53BE3A39C92436F0D0E035A53290E7(__this, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = HexByteConvertorExtensions_ToHex_m1CC2B1935D1783A24DBC1122253E7C313B6B2900(L_4, (bool)0, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.String Nethereum.Util.Sha3Keccack::CalculateHashFromHex(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Sha3Keccack_CalculateHashFromHex_mF849513EAC5B752E213526473560A119DACD5DDA (Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___hexValues0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisString_t_TisString_t_m5E54BE921E960B9AB33FE013CF7ECB8D1CF24A1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m22403E6E9EC24A3D8103D29D9D66B5EEEA0AC69E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCalculateHashFromHexU3Eb__4_0_m07AA2FEAE74B77FB7B6714AC7B9ED354F5CB1B34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCE6734CCDEDBDAD7F5EE1DA448A4474E8EDA50CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * G_B2_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * G_B1_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___hexValues0;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCE6734CCDEDBDAD7F5EE1DA448A4474E8EDA50CD_il2cpp_TypeInfo_var);
		Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * L_1 = ((U3CU3Ec_tCE6734CCDEDBDAD7F5EE1DA448A4474E8EDA50CD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCE6734CCDEDBDAD7F5EE1DA448A4474E8EDA50CD_il2cpp_TypeInfo_var))->get_U3CU3E9__4_0_1();
		Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		G_B1_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			G_B2_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCE6734CCDEDBDAD7F5EE1DA448A4474E8EDA50CD_il2cpp_TypeInfo_var);
		U3CU3Ec_tCE6734CCDEDBDAD7F5EE1DA448A4474E8EDA50CD * L_3 = ((U3CU3Ec_tCE6734CCDEDBDAD7F5EE1DA448A4474E8EDA50CD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCE6734CCDEDBDAD7F5EE1DA448A4474E8EDA50CD_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * L_4 = (Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A *)il2cpp_codegen_object_new(Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A_il2cpp_TypeInfo_var);
		Func_2__ctor_m22403E6E9EC24A3D8103D29D9D66B5EEEA0AC69E(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CCalculateHashFromHexU3Eb__4_0_m07AA2FEAE74B77FB7B6714AC7B9ED354F5CB1B34_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m22403E6E9EC24A3D8103D29D9D66B5EEEA0AC69E_RuntimeMethod_var);
		Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * L_5 = L_4;
		((U3CU3Ec_tCE6734CCDEDBDAD7F5EE1DA448A4474E8EDA50CD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCE6734CCDEDBDAD7F5EE1DA448A4474E8EDA50CD_il2cpp_TypeInfo_var))->set_U3CU3E9__4_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0025:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Select_TisString_t_TisString_t_m5E54BE921E960B9AB33FE013CF7ECB8D1CF24A1A((RuntimeObject*)(RuntimeObject*)G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Select_TisString_t_TisString_t_m5E54BE921E960B9AB33FE013CF7ECB8D1CF24A1A_RuntimeMethod_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7;
		L_7 = Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582(L_6, /*hidden argument*/Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var);
		String_t* L_8;
		L_8 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(G_B2_2, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		String_t* L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10;
		L_10 = HexByteConvertorExtensions_HexToByteArray_m89881F7CBE549A55575CCCB4E1C254E2D2E81B89(L_9, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11;
		L_11 = Sha3Keccack_CalculateHash_mFCF932E75B53BE3A39C92436F0D0E035A53290E7(__this, L_10, /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = HexByteConvertorExtensions_ToHex_m1CC2B1935D1783A24DBC1122253E7C313B6B2900(L_11, (bool)0, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Byte[] Nethereum.Util.Sha3Keccack::CalculateHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Sha3Keccack_CalculateHash_mFCF932E75B53BE3A39C92436F0D0E035A53290E7 (Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * L_0 = (KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B *)il2cpp_codegen_object_new(KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B_il2cpp_TypeInfo_var);
		KeccakDigest__ctor_m83E6B9A17080F330DFE612B81C6B43252D34D44B(L_0, ((int32_t)256), /*hidden argument*/NULL);
		KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * L_1 = L_0;
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Nethereum.Util.Keccak.KeccakDigest::GetDigestSize() */, L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_0 = L_3;
		KeccakDigest_tD7476B4CBC10745EE473B894D7A2D51D6415F74B * L_4 = L_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___value0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___value0;
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(7 /* System.Void Nethereum.Util.Keccak.KeccakDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
		int32_t L_8;
		L_8 = VirtFuncInvoker2< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t >::Invoke(8 /* System.Int32 Nethereum.Util.Keccak.KeccakDigest::DoFinal(System.Byte[],System.Int32) */, L_4, L_7, 0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_0;
		return L_9;
	}
}
// System.Void Nethereum.Util.Sha3Keccack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha3Keccack__ctor_m8D45AFC277B2B575167CD58FF181D926737D15F2 (Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.Util.Sha3Keccack::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha3Keccack__cctor_m4D3D595F436BD51B8DC9CA377D58575ABE4E3343 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0 * L_0 = (Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0 *)il2cpp_codegen_object_new(Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0_il2cpp_TypeInfo_var);
		Sha3Keccack__ctor_m8D45AFC277B2B575167CD58FF181D926737D15F2(L_0, /*hidden argument*/NULL);
		((Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0_StaticFields*)il2cpp_codegen_static_fields_for(Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0_il2cpp_TypeInfo_var))->set_U3CCurrentU3Ek__BackingField_0(L_0);
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
// System.String Nethereum.Util.TransactionUtils::CalculateTransactionHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TransactionUtils_CalculateTransactionHash_m364C2198D739E0BB6568D294F55351A191BC25A0 (String_t* ___rawSignedTransaction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0 * L_0 = (Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0 *)il2cpp_codegen_object_new(Sha3Keccack_t4BC608B2516A8BFF5BB6B3E59040D9282E8013B0_il2cpp_TypeInfo_var);
		Sha3Keccack__ctor_m8D45AFC277B2B575167CD58FF181D926737D15F2(L_0, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		String_t* L_3 = ___rawSignedTransaction0;
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		String_t* L_4;
		L_4 = Sha3Keccack_CalculateHashFromHex_mF849513EAC5B752E213526473560A119DACD5DDA(L_0, L_2, /*hidden argument*/NULL);
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
// System.Void Nethereum.Util.UniqueAddressList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniqueAddressList__ctor_m54B0A8CA7DD76E147C3C39B1AD0B388D2657F11C (UniqueAddressList_tE01D38ECFC83415C2890244A5288A9BA97EDC91F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddressEqualityComparer_t9409215AB76B3968FF863550202D5ABAD43F77B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m2D141B160C366DB0A2B24DA4A97CC8653C77800E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AddressEqualityComparer_t9409215AB76B3968FF863550202D5ABAD43F77B7 * L_0 = (AddressEqualityComparer_t9409215AB76B3968FF863550202D5ABAD43F77B7 *)il2cpp_codegen_object_new(AddressEqualityComparer_t9409215AB76B3968FF863550202D5ABAD43F77B7_il2cpp_TypeInfo_var);
		AddressEqualityComparer__ctor_m177F120343ADBCA652AA92468BA419BA30553D92(L_0, /*hidden argument*/NULL);
		HashSet_1__ctor_m2D141B160C366DB0A2B24DA4A97CC8653C77800E(__this, L_0, /*hidden argument*/HashSet_1__ctor_m2D141B160C366DB0A2B24DA4A97CC8653C77800E_RuntimeMethod_var);
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
// System.Void Nethereum.Util.UniqueTransactionHashList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniqueTransactionHashList__ctor_mCFC70D48727E93E80BF2873CC988E5C180BB16C6 (UniqueTransactionHashList_t4DBBEA98788DA8DBC88F83B0DBF21E41E8CCFAA9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m2D141B160C366DB0A2B24DA4A97CC8653C77800E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_0;
		L_0 = StringComparer_get_OrdinalIgnoreCase_m8FD38206B6FFE866E97CE4DF84B037F0DF175288_inline(/*hidden argument*/NULL);
		HashSet_1__ctor_m2D141B160C366DB0A2B24DA4A97CC8653C77800E(__this, L_0, /*hidden argument*/HashSet_1__ctor_m2D141B160C366DB0A2B24DA4A97CC8653C77800E_RuntimeMethod_var);
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
// Nethereum.Util.UnitConversion Nethereum.Util.UnitConversion::get_Convert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * UnitConversion_get_Convert_m847E5DDAD223B0F0D208A92894CE84AEDBB0E40C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * L_0 = ((UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7_StaticFields*)il2cpp_codegen_static_fields_for(UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7_il2cpp_TypeInfo_var))->get__convert_0();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * L_1 = (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 *)il2cpp_codegen_object_new(UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7_il2cpp_TypeInfo_var);
		UnitConversion__ctor_mC6B863B3B2621ABBC81D35461BC7B40362FDE901(L_1, /*hidden argument*/NULL);
		((UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7_StaticFields*)il2cpp_codegen_static_fields_for(UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7_il2cpp_TypeInfo_var))->set__convert_0(L_1);
	}

IL_0011:
	{
		UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * L_2 = ((UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7_StaticFields*)il2cpp_codegen_static_fields_for(UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7_il2cpp_TypeInfo_var))->get__convert_0();
		return L_2;
	}
}
// System.Decimal Nethereum.Util.UnitConversion::FromWei(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  UnitConversion_FromWei_m681A75F7A7D1C35DF8BCE1D3914453DEB3B0052C (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___toUnit1, const RuntimeMethod* method)
{
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0 = ___value0;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_1 = ___toUnit1;
		int32_t L_2;
		L_2 = UnitConversion_GetEthUnitValueLength_m81585BAC12F3A7FA41939D142F2917A19E8327E1(__this, L_1, /*hidden argument*/NULL);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_3;
		L_3 = UnitConversion_FromWei_m6585902046CD80892D325B64266A9728C4FD8E3D(__this, L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Decimal Nethereum.Util.UnitConversion::FromWei(System.Numerics.BigInteger,Nethereum.Util.UnitConversion/EthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  UnitConversion_FromWei_m227F31C24CB1E4D2119031459E654B82A360DA6E (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, int32_t ___toUnit1, const RuntimeMethod* method)
{
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0 = ___value0;
		int32_t L_1 = ___toUnit1;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_2;
		L_2 = UnitConversion_GetEthUnitValue_m0B304BFA61D20FA7005D29B3794C6B5F1BC6930F(__this, L_1, /*hidden argument*/NULL);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_3;
		L_3 = UnitConversion_FromWei_m681A75F7A7D1C35DF8BCE1D3914453DEB3B0052C(__this, L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Decimal Nethereum.Util.UnitConversion::FromWei(System.Numerics.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  UnitConversion_FromWei_m6585902046CD80892D325B64266A9728C4FD8E3D (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, int32_t ___decimalPlacesToUnit1, const RuntimeMethod* method)
{
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0 = ___value0;
		int32_t L_1 = ___decimalPlacesToUnit1;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_2;
		memset((&L_2), 0, sizeof(L_2));
		BigDecimal__ctor_m250E18155FF984256743D2F5A5E08244085AEFEA((&L_2), L_0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)(-1))), (bool)0, /*hidden argument*/NULL);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_3;
		L_3 = BigDecimal_op_Explicit_mF107E5A127B8AE4CB1640852C485D1CEC13A71F5(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.UnitConversion::FromWeiToBigDecimal(System.Numerics.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  UnitConversion_FromWeiToBigDecimal_m04FC4C5474B5A98904B7E2549C92DDEABAE55FA0 (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, int32_t ___decimalPlacesToUnit1, const RuntimeMethod* method)
{
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0 = ___value0;
		int32_t L_1 = ___decimalPlacesToUnit1;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_2;
		memset((&L_2), 0, sizeof(L_2));
		BigDecimal__ctor_m250E18155FF984256743D2F5A5E08244085AEFEA((&L_2), L_0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)(-1))), (bool)0, /*hidden argument*/NULL);
		return L_2;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.UnitConversion::FromWeiToBigDecimal(System.Numerics.BigInteger,Nethereum.Util.UnitConversion/EthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  UnitConversion_FromWeiToBigDecimal_mE05F2C10DE2C08B258F0DE06605FC8B4924B1A71 (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, int32_t ___toUnit1, const RuntimeMethod* method)
{
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0 = ___value0;
		int32_t L_1 = ___toUnit1;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_2;
		L_2 = UnitConversion_GetEthUnitValue_m0B304BFA61D20FA7005D29B3794C6B5F1BC6930F(__this, L_1, /*hidden argument*/NULL);
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_3;
		L_3 = UnitConversion_FromWeiToBigDecimal_mD0E068AA9632894C245730E9DB21603E203126A0(__this, L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.UnitConversion::FromWeiToBigDecimal(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  UnitConversion_FromWeiToBigDecimal_mD0E068AA9632894C245730E9DB21603E203126A0 (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___toUnit1, const RuntimeMethod* method)
{
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0 = ___value0;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_1 = ___toUnit1;
		int32_t L_2;
		L_2 = UnitConversion_GetEthUnitValueLength_m81585BAC12F3A7FA41939D142F2917A19E8327E1(__this, L_1, /*hidden argument*/NULL);
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_3;
		L_3 = UnitConversion_FromWeiToBigDecimal_m04FC4C5474B5A98904B7E2549C92DDEABAE55FA0(__this, L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Nethereum.Util.UnitConversion::GetEthUnitValueLength(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnitConversion_GetEthUnitValueLength_m81585BAC12F3A7FA41939D142F2917A19E8327E1 (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___unitValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormattingExtensions_ToStringInvariant_TisBigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_mCF63EDD8B1F432D0135B8F14E9087AA9F4680F45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0 = ___unitValue0;
		String_t* L_1;
		L_1 = FormattingExtensions_ToStringInvariant_TisBigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_mCF63EDD8B1F432D0135B8F14E9087AA9F4680F45(L_0, /*hidden argument*/FormattingExtensions_ToStringInvariant_TisBigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_mCF63EDD8B1F432D0135B8F14E9087AA9F4680F45_RuntimeMethod_var);
		int32_t L_2;
		L_2 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_1, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::GetEthUnitValue(Nethereum.Util.UnitConversion/EthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  UnitConversion_GetEthUnitValue_m0B304BFA61D20FA7005D29B3794C6B5F1BC6930F (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, int32_t ___ethUnit0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ABFB20F7CF83967C5F8BFF72CA9763D6E250813);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral270800C8217B39CD8DD46ECDEE95E004E4567FFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DF190B25B11B1AAEE1A438E606FA8F0FF446A82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739AB73E27D444291AAFE563DFBA8832AD5D722);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C92FC7F604169F6F4A63083970753C014EAD040);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91E1282FC8690BBC1CB33A6803C9119053A51DC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA597E6496EE5F8DA5EADFABF86D203733ED956DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB012E8AECF9960218AEA1A96AFE93090316B3B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB2E8EBB9651B779E1B875B8AE46782B488FCAC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC16CB3EB65A1DCE6FA520BCB808F4F0EA90A7826);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___ethUnit0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_006b;
			}
			case 1:
			{
				goto IL_0076;
			}
			case 2:
			{
				goto IL_0168;
			}
			case 3:
			{
				goto IL_008c;
			}
			case 4:
			{
				goto IL_0097;
			}
			case 5:
			{
				goto IL_0081;
			}
			case 6:
			{
				goto IL_00a2;
			}
			case 7:
			{
				goto IL_00ad;
			}
			case 8:
			{
				goto IL_00b8;
			}
			case 9:
			{
				goto IL_00c3;
			}
			case 10:
			{
				goto IL_00ce;
			}
			case 11:
			{
				goto IL_00d9;
			}
			case 12:
			{
				goto IL_00e4;
			}
			case 13:
			{
				goto IL_00ef;
			}
			case 14:
			{
				goto IL_00fa;
			}
			case 15:
			{
				goto IL_0105;
			}
			case 16:
			{
				goto IL_0110;
			}
			case 17:
			{
				goto IL_011b;
			}
			case 18:
			{
				goto IL_0126;
			}
			case 19:
			{
				goto IL_0131;
			}
			case 20:
			{
				goto IL_013c;
			}
			case 21:
			{
				goto IL_0147;
			}
			case 22:
			{
				goto IL_0152;
			}
			case 23:
			{
				goto IL_015d;
			}
		}
	}
	{
		goto IL_0168;
	}

IL_006b:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_1;
		L_1 = BigIntegerExtensions_ParseInvariant_m592624DF089E0CCCC230B09EC21DBAB20F0521C8(_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, /*hidden argument*/NULL);
		return L_1;
	}

IL_0076:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_2;
		L_2 = BigIntegerExtensions_ParseInvariant_m592624DF089E0CCCC230B09EC21DBAB20F0521C8(_stringLiteral8739AB73E27D444291AAFE563DFBA8832AD5D722, /*hidden argument*/NULL);
		return L_2;
	}

IL_0081:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_3;
		L_3 = BigIntegerExtensions_ParseInvariant_m592624DF089E0CCCC230B09EC21DBAB20F0521C8(_stringLiteral8739AB73E27D444291AAFE563DFBA8832AD5D722, /*hidden argument*/NULL);
		return L_3;
	}

IL_008c:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_4;
		L_4 = BigIntegerExtensions_ParseInvariant_m592624DF089E0CCCC230B09EC21DBAB20F0521C8(_stringLiteral8739AB73E27D444291AAFE563DFBA8832AD5D722, /*hidden argument*/NULL);
		return L_4;
	}

IL_0097:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_5;
		L_5 = BigIntegerExtensions_ParseInvariant_m592624DF089E0CCCC230B09EC21DBAB20F0521C8(_stringLiteralC16CB3EB65A1DCE6FA520BCB808F4F0EA90A7826, /*hidden argument*/NULL);
		return L_5;
	}

IL_00a2:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_6;
		L_6 = BigIntegerExtensions_ParseInvariant_m592624DF089E0CCCC230B09EC21DBAB20F0521C8(_stringLiteralC16CB3EB65A1DCE6FA520BCB808F4F0EA90A7826, /*hidden argument*/NULL);
		return L_6;
	}

IL_00ad:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_7;
		L_7 = BigIntegerExtensions_ParseInvariant_m592624DF089E0CCCC230B09EC21DBAB20F0521C8(_stringLiteral8C92FC7F604169F6F4A63083970753C014EAD040, /*hidden argument*/NULL);
		return L_7;
	}

IL_00b8:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_8;
		L_8 = BigIntegerExtensions_ParseInvariant_m592624DF089E0CCCC230B09EC21DBAB20F0521C8(_stringLiteral8C92FC7F604169F6F4A63083970753C014EAD040, /*hidden argument*/NULL);
		return L_8;
	}

IL_00c3:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_9;
		L_9 = BigIntegerExtensions_ParseInvariant_m592624DF089E0CCCC230B09EC21DBAB20F0521C8(_stringLiteral8C92FC7F604169F6F4A63083970753C014EAD040, /*hidden argument*/NULL);
		return L_9;
	}

IL_00ce:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_10;
		L_10 = BigIntegerExtensions_ParseInvariant_m592624DF089E0CCCC230B09EC21DBAB20F0521C8(_stringLiteral8C92FC7F604169F6F4A63083970753C014EAD040, /*hidden argument*/NULL);
		return L_10;
	}

IL_00d9:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_11;
		L_11 = BigIntegerExtensions_ParseInvariant_m592624DF089E0CCCC230B09EC21DBAB20F0521C8(_stringLiteral5DF190B25B11B1AAEE1A438E606FA8F0FF446A82, /*hidden argument*/NULL);
		return L_11;
	}

IL_00e4:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_12;
		L_12 = BigIntegerExtensions_ParseInvariant_m592624DF089E0CCCC230B09EC21DBAB20F0521C8(_stringLiteral5DF190B25B11B1AAEE1A438E606FA8F0FF446A82, /*hidden argument*/NULL);
		return L_12;
	}

IL_00ef:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_13;
		L_13 = BigIntegerExtensions_ParseInvariant_m592624DF089E0CCCC230B09EC21DBAB20F0521C8(_stringLiteral5DF190B25B11B1AAEE1A438E606FA8F0FF446A82, /*hidden argument*/NULL);
		return L_13;
	}

IL_00fa:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_14;
		L_14 = BigIntegerExtensions_ParseInvariant_m592624DF089E0CCCC230B09EC21DBAB20F0521C8(_stringLiteralBB012E8AECF9960218AEA1A96AFE93090316B3B1, /*hidden argument*/NULL);
		return L_14;
	}

IL_0105:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_15;
		L_15 = BigIntegerExtensions_ParseInvariant_m592624DF089E0CCCC230B09EC21DBAB20F0521C8(_stringLiteralBB012E8AECF9960218AEA1A96AFE93090316B3B1, /*hidden argument*/NULL);
		return L_15;
	}

IL_0110:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_16;
		L_16 = BigIntegerExtensions_ParseInvariant_m592624DF089E0CCCC230B09EC21DBAB20F0521C8(_stringLiteralBB012E8AECF9960218AEA1A96AFE93090316B3B1, /*hidden argument*/NULL);
		return L_16;
	}

IL_011b:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_17;
		L_17 = BigIntegerExtensions_ParseInvariant_m592624DF089E0CCCC230B09EC21DBAB20F0521C8(_stringLiteral270800C8217B39CD8DD46ECDEE95E004E4567FFF, /*hidden argument*/NULL);
		return L_17;
	}

IL_0126:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_18;
		L_18 = BigIntegerExtensions_ParseInvariant_m592624DF089E0CCCC230B09EC21DBAB20F0521C8(_stringLiteral0ABFB20F7CF83967C5F8BFF72CA9763D6E250813, /*hidden argument*/NULL);
		return L_18;
	}

IL_0131:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_19;
		L_19 = BigIntegerExtensions_ParseInvariant_m592624DF089E0CCCC230B09EC21DBAB20F0521C8(_stringLiteral0ABFB20F7CF83967C5F8BFF72CA9763D6E250813, /*hidden argument*/NULL);
		return L_19;
	}

IL_013c:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_20;
		L_20 = BigIntegerExtensions_ParseInvariant_m592624DF089E0CCCC230B09EC21DBAB20F0521C8(_stringLiteral0ABFB20F7CF83967C5F8BFF72CA9763D6E250813, /*hidden argument*/NULL);
		return L_20;
	}

IL_0147:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_21;
		L_21 = BigIntegerExtensions_ParseInvariant_m592624DF089E0CCCC230B09EC21DBAB20F0521C8(_stringLiteralBB2E8EBB9651B779E1B875B8AE46782B488FCAC0, /*hidden argument*/NULL);
		return L_21;
	}

IL_0152:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_22;
		L_22 = BigIntegerExtensions_ParseInvariant_m592624DF089E0CCCC230B09EC21DBAB20F0521C8(_stringLiteral91E1282FC8690BBC1CB33A6803C9119053A51DC8, /*hidden argument*/NULL);
		return L_22;
	}

IL_015d:
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_23;
		L_23 = BigIntegerExtensions_ParseInvariant_m592624DF089E0CCCC230B09EC21DBAB20F0521C8(_stringLiteralA597E6496EE5F8DA5EADFABF86D203733ED956DE, /*hidden argument*/NULL);
		return L_23;
	}

IL_0168:
	{
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_24 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_24, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnitConversion_GetEthUnitValue_m0B304BFA61D20FA7005D29B3794C6B5F1BC6930F_RuntimeMethod_var)));
	}
}
// System.Boolean Nethereum.Util.UnitConversion::TryValidateUnitValue(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnitConversion_TryValidateUnitValue_mCB42935B94684527E8E38D616AD33AF2D196BDF1 (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___ethUnit0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormattingExtensions_ToStringInvariant_TisBigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_mCF63EDD8B1F432D0135B8F14E9087AA9F4680F45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0 = ___ethUnit0;
		String_t* L_1;
		L_1 = FormattingExtensions_ToStringInvariant_TisBigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_mCF63EDD8B1F432D0135B8F14E9087AA9F4680F45(L_0, /*hidden argument*/FormattingExtensions_ToStringInvariant_TisBigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_mCF63EDD8B1F432D0135B8F14E9087AA9F4680F45_RuntimeMethod_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = L_2;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)48));
		String_t* L_4;
		L_4 = String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC(L_1, L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		return (bool)1;
	}

IL_0024:
	{
		Exception_t * L_6 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3C9F9624DF9F1C2E14A0850FDC6F9D35C3C2A698)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnitConversion_TryValidateUnitValue_mCB42935B94684527E8E38D616AD33AF2D196BDF1_RuntimeMethod_var)));
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWeiFromUnit(System.Decimal,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  UnitConversion_ToWeiFromUnit_mA2F26A144CA3EDF4391558025F57E92C7FEB102C (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___amount0, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___fromUnit1, const RuntimeMethod* method)
{
	{
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_0 = ___amount0;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_1;
		L_1 = BigDecimal_op_Implicit_m2F6F51E1C93721C8D97E367CC2F4B6935E9A9558(L_0, /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_2 = ___fromUnit1;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_3;
		L_3 = UnitConversion_ToWeiFromUnit_m359D0612F7BC431AF79803E1DFFEAEC7E83C6569(__this, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWeiFromUnit(Nethereum.Util.BigDecimal,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  UnitConversion_ToWeiFromUnit_m359D0612F7BC431AF79803E1DFFEAEC7E83C6569 (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___amount0, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___fromUnit1, const RuntimeMethod* method)
{
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  V_0;
	memset((&V_0), 0, sizeof(V_0));
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  V_1;
	memset((&V_1), 0, sizeof(V_1));
	BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0 = ___fromUnit1;
		bool L_1;
		L_1 = UnitConversion_TryValidateUnitValue_mCB42935B94684527E8E38D616AD33AF2D196BDF1(__this, L_0, /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_2 = ___fromUnit1;
		BigDecimal__ctor_m250E18155FF984256743D2F5A5E08244085AEFEA((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&V_0), L_2, 0, (bool)0, /*hidden argument*/NULL);
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_3 = ___amount0;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_4 = V_0;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_5;
		L_5 = BigDecimal_op_Multiply_mC788C0CCF2F0E7512EF7BC24D2B318A6B93C8582(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_6;
		L_6 = BigDecimal_Floor_mE511F37536BFDE6A549DBFA93CFE8C95F4CCCA15((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_6;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_7;
		L_7 = BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline((BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 *)(&V_2), /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWei(Nethereum.Util.BigDecimal,Nethereum.Util.UnitConversion/EthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  UnitConversion_ToWei_mDB696453D3CF63DEFFE27AEE3F88FBAE1954DA15 (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___amount0, int32_t ___fromUnit1, const RuntimeMethod* method)
{
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_0 = ___amount0;
		int32_t L_1 = ___fromUnit1;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_2;
		L_2 = UnitConversion_GetEthUnitValue_m0B304BFA61D20FA7005D29B3794C6B5F1BC6930F(__this, L_1, /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_3;
		L_3 = UnitConversion_ToWeiFromUnit_m359D0612F7BC431AF79803E1DFFEAEC7E83C6569(__this, L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWei(Nethereum.Util.BigDecimal,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  UnitConversion_ToWei_m7DC46E6A5797A62EAE981929675A185EDD4B24A1 (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  ___amount0, int32_t ___decimalPlacesFromUnit1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___decimalPlacesFromUnit1;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_1 = ___amount0;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_2;
		L_2 = UnitConversion_ToWei_m7DC46E6A5797A62EAE981929675A185EDD4B24A1(__this, L_1, 1, /*hidden argument*/NULL);
	}

IL_000c:
	{
		BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177  L_3 = ___amount0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_4;
		L_4 = BigInteger_op_Implicit_m9806E7B722243D69545EE09318A5DC364ACBC652(((int32_t)10), /*hidden argument*/NULL);
		int32_t L_5 = ___decimalPlacesFromUnit1;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_6;
		L_6 = BigInteger_Pow_mA52D686E2FB53238877C77EEEFAD23A9601028AF(L_4, L_5, /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_7;
		L_7 = UnitConversion_ToWeiFromUnit_m359D0612F7BC431AF79803E1DFFEAEC7E83C6569(__this, L_3, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWei(System.Decimal,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  UnitConversion_ToWei_m8EE7035876B7C107BA654B36EB3F6D6DDF31E680 (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___amount0, int32_t ___decimalPlacesFromUnit1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___decimalPlacesFromUnit1;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_1 = ___amount0;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_2;
		L_2 = UnitConversion_ToWei_m8EE7035876B7C107BA654B36EB3F6D6DDF31E680(__this, L_1, 1, /*hidden argument*/NULL);
	}

IL_000c:
	{
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_3 = ___amount0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_4;
		L_4 = BigInteger_op_Implicit_m9806E7B722243D69545EE09318A5DC364ACBC652(((int32_t)10), /*hidden argument*/NULL);
		int32_t L_5 = ___decimalPlacesFromUnit1;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_6;
		L_6 = BigInteger_Pow_mA52D686E2FB53238877C77EEEFAD23A9601028AF(L_4, L_5, /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_7;
		L_7 = UnitConversion_ToWeiFromUnit_mA2F26A144CA3EDF4391558025F57E92C7FEB102C(__this, L_3, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWei(System.Decimal,Nethereum.Util.UnitConversion/EthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  UnitConversion_ToWei_m7DDBDB3BAAB575770EA968668BD62A8D9230BA06 (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___amount0, int32_t ___fromUnit1, const RuntimeMethod* method)
{
	{
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_0 = ___amount0;
		int32_t L_1 = ___fromUnit1;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_2;
		L_2 = UnitConversion_GetEthUnitValue_m0B304BFA61D20FA7005D29B3794C6B5F1BC6930F(__this, L_1, /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_3;
		L_3 = UnitConversion_ToWeiFromUnit_mA2F26A144CA3EDF4391558025F57E92C7FEB102C(__this, L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWei(System.Numerics.BigInteger,Nethereum.Util.UnitConversion/EthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  UnitConversion_ToWei_mB6E64CFC698A93FCB450C5B6BEA2BE8A51A0BEB1 (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, int32_t ___fromUnit1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0 = ___value0;
		int32_t L_1 = ___fromUnit1;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_2;
		L_2 = UnitConversion_GetEthUnitValue_m0B304BFA61D20FA7005D29B3794C6B5F1BC6930F(__this, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_3;
		L_3 = BigInteger_op_Multiply_m2C693A37027C26E76BFF4F974553ACA2D8DCC067(L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWei(System.Int32,Nethereum.Util.UnitConversion/EthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  UnitConversion_ToWei_m21A296009BAA9B038143B456348DD94CCB28B219 (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, int32_t ___value0, int32_t ___fromUnit1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_1;
		memset((&L_1), 0, sizeof(L_1));
		BigInteger__ctor_m104B492675CC61CB48D17E18900DF23DCB7408D4((&L_1), L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___fromUnit1;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_3;
		L_3 = UnitConversion_ToWei_mB6E64CFC698A93FCB450C5B6BEA2BE8A51A0BEB1(__this, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWei(System.Double,Nethereum.Util.UnitConversion/EthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  UnitConversion_ToWei_mD188645C2597AD46BB15CF4E02BC636B58023BEC (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, double ___value0, int32_t ___fromUnit1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_1;
		L_1 = Convert_ToDecimal_mD729925F249653EF8DA34909561747DB117A4644(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___fromUnit1;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_3;
		L_3 = UnitConversion_ToWei_m7DDBDB3BAAB575770EA968668BD62A8D9230BA06(__this, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWei(System.Single,Nethereum.Util.UnitConversion/EthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  UnitConversion_ToWei_m56DB729B1F22762BC9A452F3ABD15CD5139E8803 (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, float ___value0, int32_t ___fromUnit1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_1;
		L_1 = Convert_ToDecimal_m1C82D6D8EC3EF586C277BD3EA785CBCD75A15862(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___fromUnit1;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_3;
		L_3 = UnitConversion_ToWei_m7DDBDB3BAAB575770EA968668BD62A8D9230BA06(__this, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWei(System.Int64,Nethereum.Util.UnitConversion/EthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  UnitConversion_ToWei_m53723903B570AEF614B44F20E0782EA2BCF9440D (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, int64_t ___value0, int32_t ___fromUnit1, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_1;
		memset((&L_1), 0, sizeof(L_1));
		BigInteger__ctor_mD712B74AEF1E9AF8497BE69D852B845EF21F8F5D((&L_1), L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___fromUnit1;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_3;
		L_3 = UnitConversion_ToWei_mB6E64CFC698A93FCB450C5B6BEA2BE8A51A0BEB1(__this, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWei(System.String,Nethereum.Util.UnitConversion/EthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  UnitConversion_ToWei_m1FA03A76B897238E951B16D4A83122B453A2A90F (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, String_t* ___value0, int32_t ___fromUnit1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_1;
		L_1 = Decimal_Parse_mA2417CDEDFD723B6AAF704EB84509FF59733784A(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___fromUnit1;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_3;
		L_3 = UnitConversion_ToWei_m7DDBDB3BAAB575770EA968668BD62A8D9230BA06(__this, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::CalculateNumberOfDecimalPlaces(System.Double,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  UnitConversion_CalculateNumberOfDecimalPlaces_m06164BF26D2469025264F8AF4A59BB20B2409E3C (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, double ___value0, int32_t ___maxNumberOfDecimals1, int32_t ___currentNumberOfDecimals2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_1;
		L_1 = Convert_ToDecimal_mD729925F249653EF8DA34909561747DB117A4644(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___maxNumberOfDecimals1;
		int32_t L_3 = ___currentNumberOfDecimals2;
		int32_t L_4;
		L_4 = UnitConversion_CalculateNumberOfDecimalPlaces_mA34E7F067E654F112DD73BE3FD4D3E36EE21A7C5(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_5;
		L_5 = BigInteger_op_Implicit_m9806E7B722243D69545EE09318A5DC364ACBC652(L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::CalculateNumberOfDecimalPlaces(System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  UnitConversion_CalculateNumberOfDecimalPlaces_m52727FFF064939CADE1FBAFABE1A7D348AB3E58C (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, float ___value0, int32_t ___maxNumberOfDecimals1, int32_t ___currentNumberOfDecimals2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_1;
		L_1 = Convert_ToDecimal_m1C82D6D8EC3EF586C277BD3EA785CBCD75A15862(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___maxNumberOfDecimals1;
		int32_t L_3 = ___currentNumberOfDecimals2;
		int32_t L_4;
		L_4 = UnitConversion_CalculateNumberOfDecimalPlaces_mA34E7F067E654F112DD73BE3FD4D3E36EE21A7C5(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_5;
		L_5 = BigInteger_op_Implicit_m9806E7B722243D69545EE09318A5DC364ACBC652(L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 Nethereum.Util.UnitConversion::CalculateNumberOfDecimalPlaces(System.Decimal,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnitConversion_CalculateNumberOfDecimalPlaces_mA34E7F067E654F112DD73BE3FD4D3E36EE21A7C5 (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, int32_t ___maxNumberOfDecimals1, int32_t ___currentNumberOfDecimals2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormattingExtensions_ToStringInvariant_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_mAB4AA93D38048BC4E2F818F04480E92B96CC4E4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___currentNumberOfDecimals2;
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_1 = ___value0;
		String_t* L_2;
		L_2 = FormattingExtensions_ToStringInvariant_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_mAB4AA93D38048BC4E2F818F04480E92B96CC4E4F(L_1, /*hidden argument*/FormattingExtensions_ToStringInvariant_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_mAB4AA93D38048BC4E2F818F04480E92B96CC4E4F_RuntimeMethod_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_4;
		L_4 = Math_Round_m56BEF8E2CC0542275D0769542C0FE5761041C724(L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = FormattingExtensions_ToStringInvariant_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_mAB4AA93D38048BC4E2F818F04480E92B96CC4E4F(L_4, /*hidden argument*/FormattingExtensions_ToStringInvariant_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_mAB4AA93D38048BC4E2F818F04480E92B96CC4E4F_RuntimeMethod_var);
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_001d;
		}
	}
	{
		return 0;
	}

IL_001d:
	{
		___currentNumberOfDecimals2 = 1;
	}

IL_0020:
	{
		int32_t L_7 = ___currentNumberOfDecimals2;
		int32_t L_8 = ___maxNumberOfDecimals1;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_9 = ___maxNumberOfDecimals1;
		return L_9;
	}

IL_0026:
	{
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_10 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_11;
		L_11 = BigInteger_op_Implicit_m9806E7B722243D69545EE09318A5DC364ACBC652(((int32_t)10), /*hidden argument*/NULL);
		int32_t L_12 = ___currentNumberOfDecimals2;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_13;
		L_13 = BigInteger_Pow_mA52D686E2FB53238877C77EEEFAD23A9601028AF(L_11, L_12, /*hidden argument*/NULL);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_14;
		L_14 = BigInteger_op_Explicit_m67FAC3B738A0A38953009C3BF2C09C2C29891633(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_15;
		L_15 = Decimal_op_Multiply_mD941918A97C8534FDA1B2E1B26288F0FA7224E26(L_10, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_17;
		L_17 = Math_Round_m56BEF8E2CC0542275D0769542C0FE5761041C724(L_16, /*hidden argument*/NULL);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_18 = V_0;
		bool L_19;
		L_19 = Decimal_op_Equality_m2A6DA65ED2EA13C91B50973C956BAC180925D049(L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_20 = ___currentNumberOfDecimals2;
		return L_20;
	}

IL_004f:
	{
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_21 = ___value0;
		int32_t L_22 = ___maxNumberOfDecimals1;
		int32_t L_23 = ___currentNumberOfDecimals2;
		int32_t L_24;
		L_24 = UnitConversion_CalculateNumberOfDecimalPlaces_mA34E7F067E654F112DD73BE3FD4D3E36EE21A7C5(__this, L_21, L_22, ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)), /*hidden argument*/NULL);
		return L_24;
	}
}
// System.Void Nethereum.Util.UnitConversion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitConversion__ctor_mC6B863B3B2621ABBC81D35461BC7B40362FDE901 (UnitConversion_t362D196BB6C2F91AE5465A31EA23EDA7E553FFE7 * __this, const RuntimeMethod* method)
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
// System.Threading.Tasks.Task Nethereum.Util.WaitStrategy::ApplyAsync(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WaitStrategy_ApplyAsync_m0C33FE26A06228600F9B3165BB712EE37E554F10 (WaitStrategy_tDE169ADE167BB4E8CEC8EA35D3F1E691E45056EA * __this, uint32_t ___retryCount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Last_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m9F92DBD5EE0199F0455C57068B329302242829C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitStrategy_tDE169ADE167BB4E8CEC8EA35D3F1E691E45056EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		uint32_t L_0 = ___retryCount0;
		IL2CPP_RUNTIME_CLASS_INIT(WaitStrategy_tDE169ADE167BB4E8CEC8EA35D3F1E691E45056EA_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = ((WaitStrategy_tDE169ADE167BB4E8CEC8EA35D3F1E691E45056EA_StaticFields*)il2cpp_codegen_static_fields_for(WaitStrategy_tDE169ADE167BB4E8CEC8EA35D3F1E691E45056EA_il2cpp_TypeInfo_var))->get_WaitIntervals_0();
		if ((((int64_t)((int64_t)((uint64_t)L_0))) >= ((int64_t)((int64_t)((int64_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))))
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WaitStrategy_tDE169ADE167BB4E8CEC8EA35D3F1E691E45056EA_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = ((WaitStrategy_tDE169ADE167BB4E8CEC8EA35D3F1E691E45056EA_StaticFields*)il2cpp_codegen_static_fields_for(WaitStrategy_tDE169ADE167BB4E8CEC8EA35D3F1E691E45056EA_il2cpp_TypeInfo_var))->get_WaitIntervals_0();
		uint32_t L_3 = ___retryCount0;
		uint32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		G_B3_0 = L_5;
		goto IL_001f;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WaitStrategy_tDE169ADE167BB4E8CEC8EA35D3F1E691E45056EA_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = ((WaitStrategy_tDE169ADE167BB4E8CEC8EA35D3F1E691E45056EA_StaticFields*)il2cpp_codegen_static_fields_for(WaitStrategy_tDE169ADE167BB4E8CEC8EA35D3F1E691E45056EA_il2cpp_TypeInfo_var))->get_WaitIntervals_0();
		int32_t L_7;
		L_7 = Enumerable_Last_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m9F92DBD5EE0199F0455C57068B329302242829C5((RuntimeObject*)(RuntimeObject*)L_6, /*hidden argument*/Enumerable_Last_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m9F92DBD5EE0199F0455C57068B329302242829C5_RuntimeMethod_var);
		G_B3_0 = L_7;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_8;
		L_8 = Task_Delay_mD54722DBAF22507493263E9B1167A7F77EDDF80E(G_B3_0, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void Nethereum.Util.WaitStrategy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitStrategy__ctor_mC39DBD84812F35FC7A8DD6AE56E67A2078251500 (WaitStrategy_tDE169ADE167BB4E8CEC8EA35D3F1E691E45056EA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.Util.WaitStrategy::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitStrategy__cctor_mAF3F414183E3FAA553C1727702D7AAB0A0B50BF3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t4E869C76FF5B8C50A2B8DF414F1B6427710CD156____8ACC0527215D58BB38BEB1E9BF85D16BB40F1F003901B05B87B735B444A65A93_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitStrategy_tDE169ADE167BB4E8CEC8EA35D3F1E691E45056EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t4E869C76FF5B8C50A2B8DF414F1B6427710CD156____8ACC0527215D58BB38BEB1E9BF85D16BB40F1F003901B05B87B735B444A65A93_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((WaitStrategy_tDE169ADE167BB4E8CEC8EA35D3F1E691E45056EA_StaticFields*)il2cpp_codegen_static_fields_for(WaitStrategy_tDE169ADE167BB4E8CEC8EA35D3F1E691E45056EA_il2cpp_TypeInfo_var))->set_WaitIntervals_0(L_1);
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
// System.Void Nethereum.Util.ByteUtil/<MergeToEnum>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMergeToEnumU3Ed__5__ctor_m300B662480DD429F3339DDD064C4021C36DAEA10 (U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Nethereum.Util.ByteUtil/<MergeToEnum>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMergeToEnumU3Ed__5_System_IDisposable_Dispose_m698EE20A19C7FB5394214599BE4417FFB8C999E1 (U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Nethereum.Util.ByteUtil/<MergeToEnum>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMergeToEnumU3Ed__5_MoveNext_mF588896D90E60E65F01FE8F47E376DC6D86C7951 (U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	uint8_t V_2 = 0x0;
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
			goto IL_0068;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_3 = __this->get_arrays_3();
		__this->set_U3CU3E7__wrap1_5(L_3);
		__this->set_U3CU3E7__wrap2_6(0);
		goto IL_00a2;
	}

IL_002c:
	{
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_4 = __this->get_U3CU3E7__wrap1_5();
		int32_t L_5 = __this->get_U3CU3E7__wrap2_6();
		int32_t L_6 = L_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_1;
		__this->set_U3CU3E7__wrap3_7(L_8);
		__this->set_U3CU3E7__wrap4_8(0);
		goto IL_007d;
	}

IL_004a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = __this->get_U3CU3E7__wrap3_7();
		int32_t L_10 = __this->get_U3CU3E7__wrap4_8();
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = L_12;
		uint8_t L_13 = V_2;
		__this->set_U3CU3E2__current_1(L_13);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0068:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_14 = __this->get_U3CU3E7__wrap4_8();
		__this->set_U3CU3E7__wrap4_8(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)));
	}

IL_007d:
	{
		int32_t L_15 = __this->get_U3CU3E7__wrap4_8();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = __this->get_U3CU3E7__wrap3_7();
		if ((((int32_t)L_15) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_004a;
		}
	}
	{
		__this->set_U3CU3E7__wrap3_7((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		int32_t L_17 = __this->get_U3CU3E7__wrap2_6();
		__this->set_U3CU3E7__wrap2_6(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)));
	}

IL_00a2:
	{
		int32_t L_18 = __this->get_U3CU3E7__wrap2_6();
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_19 = __this->get_U3CU3E7__wrap1_5();
		if ((((int32_t)L_18) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_002c;
		}
	}
	{
		__this->set_U3CU3E7__wrap1_5((ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D*)NULL);
		return (bool)0;
	}
}
// System.Byte Nethereum.Util.ByteUtil/<MergeToEnum>d__5::System.Collections.Generic.IEnumerator<System.Byte>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U3CMergeToEnumU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ByteU3E_get_Current_mFFD197B8C5378DA10EAFDAC6E166DD614ECA3EF0 (U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Nethereum.Util.ByteUtil/<MergeToEnum>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMergeToEnumU3Ed__5_System_Collections_IEnumerator_Reset_mF0A71703D6DE8B5631DCDACC9AFD53BE70E7B9B7 (U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMergeToEnumU3Ed__5_System_Collections_IEnumerator_Reset_mF0A71703D6DE8B5631DCDACC9AFD53BE70E7B9B7_RuntimeMethod_var)));
	}
}
// System.Object Nethereum.Util.ByteUtil/<MergeToEnum>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMergeToEnumU3Ed__5_System_Collections_IEnumerator_get_Current_m8D2F3D0348E2EC8C3067CE958D4F2336234A5085 (U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = __this->get_U3CU3E2__current_1();
		uint8_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Byte> Nethereum.Util.ByteUtil/<MergeToEnum>d__5::System.Collections.Generic.IEnumerable<System.Byte>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMergeToEnumU3Ed__5_System_Collections_Generic_IEnumerableU3CSystem_ByteU3E_GetEnumerator_m6F5D810EC4D038336DB8F6BD2AF056D1E93B6713 (U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3 * L_3 = (U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3 *)il2cpp_codegen_object_new(U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3_il2cpp_TypeInfo_var);
		U3CMergeToEnumU3Ed__5__ctor_m300B662480DD429F3339DDD064C4021C36DAEA10(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3 * L_4 = V_0;
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_5 = __this->get_U3CU3E3__arrays_4();
		L_4->set_arrays_3(L_5);
		U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Nethereum.Util.ByteUtil/<MergeToEnum>d__5::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMergeToEnumU3Ed__5_System_Collections_IEnumerable_GetEnumerator_m1C7BB1804D13810DB30EF1686DA6E02C7FE3B93E (U3CMergeToEnumU3Ed__5_tE813AAB20A2E67D5119779B7FDBC5B32EE9DD8B3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CMergeToEnumU3Ed__5_System_Collections_Generic_IEnumerableU3CSystem_ByteU3E_GetEnumerator_m6F5D810EC4D038336DB8F6BD2AF056D1E93B6713(__this, /*hidden argument*/NULL);
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
// System.Void Nethereum.Util.Sha3Keccack/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5A414295C719A47971C7E7DF09A3F526821A1115 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCE6734CCDEDBDAD7F5EE1DA448A4474E8EDA50CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCE6734CCDEDBDAD7F5EE1DA448A4474E8EDA50CD * L_0 = (U3CU3Ec_tCE6734CCDEDBDAD7F5EE1DA448A4474E8EDA50CD *)il2cpp_codegen_object_new(U3CU3Ec_tCE6734CCDEDBDAD7F5EE1DA448A4474E8EDA50CD_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2D7382B6213A47EB2D6462083FB3E58A98E3F3D0(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tCE6734CCDEDBDAD7F5EE1DA448A4474E8EDA50CD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCE6734CCDEDBDAD7F5EE1DA448A4474E8EDA50CD_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Nethereum.Util.Sha3Keccack/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2D7382B6213A47EB2D6462083FB3E58A98E3F3D0 (U3CU3Ec_tCE6734CCDEDBDAD7F5EE1DA448A4474E8EDA50CD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Nethereum.Util.Sha3Keccack/<>c::<CalculateHashFromHex>b__4_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCalculateHashFromHexU3Eb__4_0_m07AA2FEAE74B77FB7B6714AC7B9ED354F5CB1B34 (U3CU3Ec_tCE6734CCDEDBDAD7F5EE1DA448A4474E8EDA50CD * __this, String_t* ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_t44C8100D4EE1ED9725154B8147F2E1680DF7569D_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = HexByteConvertorExtensions_RemoveHexPrefix_m9802B6BB32BC6F49DA47744E8B56C03EB64B2D4F(L_0, /*hidden argument*/NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  BigDecimal_get_Mantissa_m46B7E0AFFEACA11BBAEF7E1B42BF0EC27791E099_inline (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, const RuntimeMethod* method)
{
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0 = __this->get_U3CMantissaU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BigDecimal_get_Exponent_mEC78AF1401AE7243B991F4250DF3335356228EC7_inline (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CExponentU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BigDecimal_set_Mantissa_mF75FD8A68F815DC181343BCC06136F0C65955E36_inline (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, const RuntimeMethod* method)
{
	{
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0 = ___value0;
		__this->set_U3CMantissaU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BigDecimal_set_Exponent_m7F6E52C916F09192A35A7DC554406EFD70F2D143_inline (BigDecimal_t1C21E35EB06D2A3BDF27341EBF23DAC45D075177 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CExponentU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_CurrencyDecimalDigits_m656104CD60E6083B2ABD481F1ED4C4DB0ACA69CF_inline (NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_currencyDecimalDigits_22();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_CurrencyPositivePattern_m237EF7AC03697CEB6B08125F4C905B86162CB21F_inline (NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_currencyPositivePattern_23();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_CurrencyNegativePattern_m2A7A8A171AE68C3FC64FCEC850162F3247E5C120_inline (NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_currencyNegativePattern_24();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_CurrencyDecimalSeparator_mC1E808DCE589B7BFFF713C20F1F7798ABF4EBE55_inline (NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_currencyDecimalSeparator_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_CurrencyGroupSeparator_mD950357ADC6F85D37B9545DE8FE43FFB16AD9B80_inline (NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_currencyGroupSeparator_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NegativeSign_mF8AF2CE58CA5411348ABD35A2A0B950830C18F59_inline (NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_negativeSign_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_CurrencySymbol_m294691B5C58A2691C5F859647A6D4200A51BF514_inline (NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_currencySymbol_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_OrdinalIgnoreCase_m8FD38206B6FFE866E97CE4DF84B037F0DF175288_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_0 = ((StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var))->get__ordinalIgnoreCase_3();
		return L_0;
	}
}
